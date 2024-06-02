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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

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

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
_Bool _if_conditional19;
void* right_value115;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sNode* __dec_obj38;
_Bool _if_conditional111;
void* right_value116;
struct list$1charph* __dec_obj39;
struct list$1charph* __dec_obj40;
_Bool _if_conditional112;
void* right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj48;
char* __dec_obj49;
void* right_value128;
char* __dec_obj50;
struct sStoreNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    # 18 "07var.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 19 "07var.c"
    self->alloc=alloc;
    # 26 "07var.c"
    # 20 "07var.c"
    if(type) {
        # 21 "07var.c"
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 24 "07var.c"
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 26 "07var.c"
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    # 33 "07var.c"
    # 27 "07var.c"
    if(multiple_assign) {
        # 28 "07var.c"
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(multiple_assign))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 31 "07var.c"
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer2(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 40 "07var.c"
    # 33 "07var.c"
    if(multiple_declare) {
        # 34 "07var.c"
        __dec_obj47=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value127=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 37 "07var.c"
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 40 "07var.c"
    __dec_obj49=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 42 "07var.c"
    self->sline=info->sline;
    # 43 "07var.c"
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 45 "07var.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result52__;
void* right_value80;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value87;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value92;
char* __dec_obj20;
_Bool _if_conditional49;
void* right_value93;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
void* right_value101;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value102;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
void* right_value109;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value111;
struct sNode* __dec_obj32;
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
_Bool _if_conditional96;
void* right_value112;
struct sNode* __dec_obj33;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value113;
char* __dec_obj34;
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
void* right_value114;
char* __dec_obj35;
_Bool _if_conditional110;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional20=self==(void*)0,            _if_conditional20) {
                # 2 "sType_clone"
                __result52__ = __result_obj__ = (void*)0;
                return __result52__;
            }
            # 3 "sType_clone"
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional38=self!=((void*)0),            _if_conditional38) {
                # 4 "sType_clone"
                result_47->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional39=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional39) {
                # 5 "sType_clone"
                __dec_obj16=result_47->mMultipleTypes;
                result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional43) {
                # 6 "sType_clone"
                __dec_obj18=result_47->mNoSolvedGenericsType;
                result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional47) {
                # 7 "sType_clone"
                __dec_obj19=result_47->mOriginalLoadVarType;
                result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional48=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional48) {
                # 8 "sType_clone"
                __dec_obj20=result_47->mGenericsName;
                result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value92=string_clone(self->mGenericsName))));
                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional49=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional49) {
                # 9 "sType_clone"
                __dec_obj21=result_47->mGenericsTypes;
                result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional50) {
                # 10 "sType_clone"
                __dec_obj25=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                # 11 "sType_clone"
                result_47->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional64=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional64) {
                # 12 "sType_clone"
                __dec_obj26=result_47->mParamTypes;
                result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional65) {
                # 13 "sType_clone"
                __dec_obj30=result_47->mParamNames;
                result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional69) {
                # 14 "sType_clone"
                __dec_obj31=result_47->mResultType;
                result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                # 15 "sType_clone"
                result_47->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional71=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional71) {
                # 16 "sType_clone"
                __dec_obj32=result_47->mAlignas;
                result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                # 17 "sType_clone"
                result_47->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                # 18 "sType_clone"
                result_47->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                # 19 "sType_clone"
                result_47->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                # 20 "sType_clone"
                result_47->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                # 21 "sType_clone"
                result_47->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 22 "sType_clone"
                result_47->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                # 23 "sType_clone"
                result_47->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                # 24 "sType_clone"
                result_47->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                # 25 "sType_clone"
                result_47->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                # 26 "sType_clone"
                result_47->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                # 27 "sType_clone"
                result_47->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 28 "sType_clone"
                result_47->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 29 "sType_clone"
                result_47->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                # 30 "sType_clone"
                result_47->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 31 "sType_clone"
                result_47->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 32 "sType_clone"
                result_47->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 33 "sType_clone"
                result_47->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 34 "sType_clone"
                result_47->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 35 "sType_clone"
                result_47->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 36 "sType_clone"
                result_47->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 37 "sType_clone"
                result_47->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 38 "sType_clone"
                result_47->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 39 "sType_clone"
                result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 40 "sType_clone"
                result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional96) {
                # 41 "sType_clone"
                __dec_obj33=result_47->mSizeNum;
                result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 42 "sType_clone"
                result_47->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 43 "sType_clone"
                result_47->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional99) {
                # 44 "sType_clone"
                __dec_obj34=result_47->mOriginalTypeName;
                result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 45 "sType_clone"
                result_47->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 46 "sType_clone"
                result_47->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 47 "sType_clone"
                result_47->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 48 "sType_clone"
                result_47->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 49 "sType_clone"
                result_47->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 50 "sType_clone"
                result_47->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 51 "sType_clone"
                result_47->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 52 "sType_clone"
                result_47->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 53 "sType_clone"
                result_47->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional109) {
                # 54 "sType_clone"
                __dec_obj35=result_47->mAsmName;
                result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
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
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional21) {
                    # 0 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional23) {
                    # 1 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional25) {
                    # 2 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional26) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional27) {
                    # 4 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional28) {
                    # 5 "sType_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional30) {
                    # 6 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional31) {
                    # 7 "sType_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional33) {
                    # 8 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional34) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional35) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional36) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional37) {
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
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional22) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional24) {
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
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
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
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional29) {
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
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
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
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional32) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result53__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value86;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional40=self==((void*)0),                    _if_conditional40) {
                        # 140 "./neo-c.h"
                        __result53__ = __result_obj__ = ((void*)0);
                        return __result53__;
                    }
                    # 142 "./neo-c.h"
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_55=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        # 146 "./neo-c.h"
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(it_55->item)))));
                        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value84;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional41=self->len==0,                            _if_conditional41) {
                                # 156 "./neo-c.h"
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_56->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_56->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_56;
                                # 163 "./neo-c.h"
                                self->head=litem_56;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional42=self->len==1,                                _if_conditional42) {
                                    # 166 "./neo-c.h"
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_57->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_57->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_57;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_57;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_58->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_58->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result57__;
void* right_value88;
struct tuple1$1sTypeph* result_59;
_Bool _if_conditional46;
void* right_value89;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_59, 0, sizeof(struct tuple1$1sTypeph*));
right_value89 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional44=self==(void*)0,                    _if_conditional44) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result57__ = __result_obj__ = (void*)0;
                        return __result57__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_59=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value88=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional46) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj17=result_59->v1;
                        result_59->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result58__ = __result_obj__ = result_59;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional45) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result59__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* result_60;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional11;
void* right_value100;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional51=self==((void*)0),                    _if_conditional51) {
                        # 140 "./neo-c.h"
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    # 142 "./neo-c.h"
                    result_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_61=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional11=it_61!=((void*)0),                    _while_condtional11) {
                        # 146 "./neo-c.h"
                        list$1sNodeph_add(result_60,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_61->item)))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj23;
void* right_value98;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional52=self->len==0,                            _if_conditional52) {
                                # 156 "./neo-c.h"
                                litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_62->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_62->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj22=litem_62->item;
                                litem_62->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./neo-c.h"
                                self->tail=litem_62;
                                # 163 "./neo-c.h"
                                self->head=litem_62;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional53=self->len==1,                                _if_conditional53) {
                                    # 166 "./neo-c.h"
                                    litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_63->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_63->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj23=litem_63->item;
                                    litem_63->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./neo-c.h"
                                    self->tail=litem_63;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_63;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_64->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_64->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj24=litem_64->item;
                                    litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional54;
struct sNode* __result62__;
void* right_value99;
struct sNode* result_65;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_65, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional54=self==(void*)0,                            _if_conditional54) {
                                # 2 "sNode_clone"
                                __result62__ = __result_obj__ = (void*)0;
                                return __result62__;
                            }
                            # 3 "sNode_clone"
                            result_65=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional55) {
                                # 4 "sNode_clone"
                                result_65->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional56=self!=((void*)0),                            _if_conditional56) {
                                # 5 "sNode_clone"
                                result_65->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional57=self!=((void*)0),                            _if_conditional57) {
                                # 6 "sNode_clone"
                                result_65->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional58=self!=((void*)0),                            _if_conditional58) {
                                # 7 "sNode_clone"
                                result_65->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                # 8 "sNode_clone"
                                result_65->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                # 9 "sNode_clone"
                                result_65->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                # 10 "sNode_clone"
                                result_65->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
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
_Bool _if_conditional66;
struct list$1charph* __result65__;
void* right_value103;
void* right_value104;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional12;
void* right_value108;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 140 "./neo-c.h"
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    # 142 "./neo-c.h"
                    result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_67=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional12=it_67!=((void*)0),                    _while_condtional12) {
                        # 146 "./neo-c.h"
                        list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_67->item)))));
                        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_68;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_69;
char* __dec_obj28;
void* right_value107;
struct list_item$1charph* litem_70;
char* __dec_obj29;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 156 "./neo-c.h"
                                litem_68=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_68->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_68->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj27=litem_68->item;
                                litem_68->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_68;
                                # 163 "./neo-c.h"
                                self->head=litem_68;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 166 "./neo-c.h"
                                    litem_69=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_69->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_69->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj28=litem_69->item;
                                    litem_69->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_69;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_69;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_70->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_70->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj29=litem_70->item;
                                    litem_70->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct list$1tuple3$3sTypephcharphsNodephph* __result70__;
void* right_value117;
void* right_value118;
struct list$1tuple3$3sTypephcharphsNodephph* result_73;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_74;
_Bool _while_condtional14;
void* right_value126;
struct list$1tuple3$3sTypephcharphsNodephph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_74, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value126 = (void*)0;
            # 142 "./neo-c.h"
            # 139 "./neo-c.h"
            if(_if_conditional113=self==((void*)0),            _if_conditional113) {
                # 140 "./neo-c.h"
                __result70__ = __result_obj__ = ((void*)0);
                return __result70__;
            }
            # 142 "./neo-c.h"
            result_73=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value117=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 142, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 144 "./neo-c.h"
            it_74=self->head;
            # 151 "./neo-c.h"
            while(_while_condtional14=it_74!=((void*)0),            _while_condtional14) {
                # 146 "./neo-c.h"
                list$1tuple3$3sTypephcharphsNodephph_add(result_73,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value126=tuple3$3sTypephcharphsNodephp_clone(it_74->item)))));
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 148 "./neo-c.h"
                it_74=it_74->next;
            }
            # 151 "./neo-c.h"
            __result75__ = __result_obj__ = result_73;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                # 104 "./neo-c.h"
                self->head=((void*)0);
                # 105 "./neo-c.h"
                self->tail=((void*)0);
                # 106 "./neo-c.h"
                self->len=0;
                # 108 "./neo-c.h"
                __result71__ = __result_obj__ = self;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_71;
_Bool _while_condtional13;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    # 123 "./neo-c.h"
                    it_71=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional13=it_71!=((void*)0),                    _while_condtional13) {
                        # 125 "./neo-c.h"
                        prev_it_72=it_71;
                        # 126 "./neo-c.h"
                        it_71=it_71->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1tuple3$3sTypephcharphsNodephphp_finalize"
                            # 0 "list_item$1tuple3$3sTypephcharphsNodephphp_finalize"
                            if(_if_conditional114=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional114) {
                                # 0 "list_item$1tuple3$3sTypephcharphsNodephphp_finalize"
                                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                    # 0 "tuple3$3sTypephcharphsNodephp_finalize"
                                    if(_if_conditional115=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional115) {
                                        # 0 "tuple3$3sTypephcharphsNodephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                    # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                    if(_if_conditional116=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional116) {
                                        # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "tuple3$3sTypephcharphsNodephp_finalize"
                                    # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                    if(_if_conditional117=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional117) {
                                        # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                        if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional118;
void* right_value119;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_75;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
_Bool _if_conditional122;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_76;
struct tuple3$3sTypephcharphsNodeph* __dec_obj42;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_77;
struct tuple3$3sTypephcharphsNodeph* __dec_obj43;
struct list$1tuple3$3sTypephcharphsNodephph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value120 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    # 186 "./neo-c.h"
                    # 155 "./neo-c.h"
                    if(_if_conditional118=self->len==0,                    _if_conditional118) {
                        # 156 "./neo-c.h"
                        litem_75=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value119=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 156, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 158 "./neo-c.h"
                        litem_75->prev=((void*)0);
                        # 159 "./neo-c.h"
                        litem_75->next=((void*)0);
                        # 160 "./neo-c.h"
                        __dec_obj41=litem_75->item;
                        litem_75->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 162 "./neo-c.h"
                        self->tail=litem_75;
                        # 163 "./neo-c.h"
                        self->head=litem_75;
                    }
                    else {
                        # 186 "./neo-c.h"
                        # 165 "./neo-c.h"
                        if(_if_conditional122=self->len==1,                        _if_conditional122) {
                            # 166 "./neo-c.h"
                            litem_76=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 166, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 168 "./neo-c.h"
                            litem_76->prev=self->head;
                            # 169 "./neo-c.h"
                            litem_76->next=((void*)0);
                            # 170 "./neo-c.h"
                            __dec_obj42=litem_76->item;
                            litem_76->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 172 "./neo-c.h"
                            self->tail=litem_76;
                            # 173 "./neo-c.h"
                            self->head->next=litem_76;
                        }
                        else {
                            # 176 "./neo-c.h"
                            litem_77=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 176, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 178 "./neo-c.h"
                            litem_77->prev=self->tail;
                            # 179 "./neo-c.h"
                            litem_77->next=((void*)0);
                            # 180 "./neo-c.h"
                            __dec_obj43=litem_77->item;
                            litem_77->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 182 "./neo-c.h"
                            self->tail->next=litem_77;
                            # 183 "./neo-c.h"
                            self->tail=litem_77;
                        }
                    }
                    # 186 "./neo-c.h"
                    self->len++;
                    # 188 "./neo-c.h"
                    __result72__ = __result_obj__ = self;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                            # 0 "tuple3$3sTypephcharphsNodeph_finalize"
                            if(_if_conditional119=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional119) {
                                # 0 "tuple3$3sTypephcharphsNodeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                            # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                            if(_if_conditional120=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional120) {
                                # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "tuple3$3sTypephcharphsNodeph_finalize"
                            # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                            if(_if_conditional121=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional121) {
                                # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                                if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional123;
struct tuple3$3sTypephcharphsNodeph* __result73__;
void* right_value122;
struct tuple3$3sTypephcharphsNodeph* result_78;
_Bool _if_conditional124;
void* right_value123;
struct sType* __dec_obj44;
_Bool _if_conditional125;
void* right_value124;
char* __dec_obj45;
_Bool _if_conditional126;
void* right_value125;
struct sNode* __dec_obj46;
struct tuple3$3sTypephcharphsNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
                    # 3 "tuple3$3sTypephcharphsNodephp_clone"
                    # 2 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional123=self==(void*)0,                    _if_conditional123) {
                        # 2 "tuple3$3sTypephcharphsNodephp_clone"
                        __result73__ = __result_obj__ = (void*)0;
                        return __result73__;
                    }
                    # 3 "tuple3$3sTypephcharphsNodephp_clone"
                    result_78=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value122=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple3$3sTypephcharphsNodephp_clone"
                    # 4 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional124=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional124) {
                        # 4 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj44=result_78->v1;
                        result_78->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "tuple3$3sTypephcharphsNodephp_clone"
                    # 5 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional125=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional125) {
                        # 5 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj45=result_78->v2;
                        result_78->v2=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "tuple3$3sTypephcharphsNodephp_clone"
                    # 6 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional126=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional126) {
                        # 6 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj46=result_78->v3;
                        result_78->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "tuple3$3sTypephcharphsNodephp_clone"
                    __result74__ = __result_obj__ = result_78;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "07var.c"
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sStoreNode_kind(){
void* __result_obj__;
void* right_value129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    # 55 "07var.c"
    __result78__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStoreNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* array_initializer_79;
_Bool _if_conditional134;
struct sVar* var__83;
_Bool _if_conditional143;
_Bool __result83__;
_Bool _if_conditional144;
_Bool __result84__;
void* right_value131;
struct sType* type_84;
void* right_value132;
void* right_value133;
struct sType* var_type_85;
void* right_value134;
_Bool _if_conditional145;
struct sVar* var__86;
_Bool _if_conditional146;
_Bool __result85__;
_Bool _if_conditional147;
_Bool __result86__;
void* right_value135;
struct sType* type_87;
_Bool _if_conditional148;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_88;
struct tuple3$3sTypephcharphsNodeph* it_91;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_94;
char* var_name_95;
struct sNode* right_value_96;
void* right_value136;
_Bool _if_conditional153;
_Bool __result94__;
void* right_value137;
struct sType* left_type_97;
void* right_value138;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool __result95__;
void* right_value139;
struct CVALUE* come_value_98;
void* right_value140;
struct sType* left_type2_99;
_Bool _if_conditional158;
_Bool _if_conditional160;
void* right_value141;
struct list$1sNodeph* o2_saved_100;
struct sNode* it_103;
_Bool _if_conditional165;
void* right_value142;
struct CVALUE* come_value_106;
void* right_value143;
void* right_value144;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool __result105__;
void* right_value145;
struct sType* left_type_107;
_Bool _if_conditional168;
void* right_value146;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value147;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_109;
_Bool _if_conditional171;
void* right_value148;
struct CVALUE* come_value_110;
void* right_value149;
void* right_value150;
struct sType* left_type2_111;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value151;
struct list$1sNodeph* o2_saved_112;
struct sNode* it_113;
_Bool _if_conditional174;
void* right_value152;
struct CVALUE* come_value_114;
void* right_value153;
void* right_value154;
struct CVALUE* come_value_115;
void* right_value155;
char* __dec_obj51;
void* right_value156;
struct sType* __dec_obj52;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool __result107__;
void* right_value160;
struct CVALUE* right_value_119;
struct sType* right_type_120;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct sVar* var__121;
_Bool _if_conditional183;
_Bool __result108__;
_Bool _if_conditional184;
int i_122;
struct list$1charph* o2_saved_123;
char* it_126;
_Bool _if_conditional190;
struct sType* right_type2_132;
void* right_value161;
void* right_value162;
struct sType* var_type_133;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value163;
struct list$1sNodeph* o2_saved_134;
struct sNode* it_135;
_Bool _if_conditional195;
void* right_value164;
struct CVALUE* come_value_136;
void* right_value165;
_Bool _if_conditional196;
void* right_value166;
void* right_value167;
struct sType* type_137;
void* right_value168;
void* right_value169;
struct sType* var_type_138;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value170;
struct list$1sNodeph* o2_saved_139;
struct sNode* it_140;
_Bool _if_conditional199;
void* right_value171;
struct CVALUE* come_value_141;
void* right_value172;
struct sClass* current_stack_frame_struct_142;
_Bool _if_conditional200;
struct sVar* parent_var_143;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value173;
struct CVALUE* come_value_144;
struct sType* left_type_145;
_Bool _if_conditional203;
void* right_value174;
char* c_value_146;
void* right_value175;
char* __dec_obj56;
int right_value_id_147;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value176;
char* c_value_148;
void* right_value177;
char* __dec_obj57;
void* right_value178;
char* __dec_obj58;
void* right_value179;
struct sType* __dec_obj59;
void* right_value180;
void* right_value181;
_Bool __result120__;
_Bool _if_conditional206;
static int num_multiple_var_149=0;
void* right_value182;
char* multiple_var_name_150;
void* right_value183;
void* right_value184;
char* __dec_obj60;
int i_151;
struct list$1charph* o2_saved_152;
char* it_153;
_Bool _if_conditional207;
void* right_value185;
struct sType* right_type2_154;
struct sVar* var__155;
void* right_value186;
struct sType* var_type_156;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value187;
struct list$1sNodeph* o2_saved_157;
struct sNode* it_158;
_Bool _if_conditional210;
void* right_value188;
struct CVALUE* come_value_159;
void* right_value189;
void* right_value190;
struct sType* left_type_160;
void* right_value191;
struct CVALUE* right_value2_161;
void* right_value192;
char* __dec_obj61;
void* right_value193;
struct sType* __dec_obj62;
void* right_value194;
struct CVALUE* come_value_162;
void* right_value195;
void* right_value196;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value197;
char* __dec_obj63;
int right_value_id_163;
_Bool _if_conditional213;
void* right_value198;
char* __dec_obj64;
void* right_value199;
struct sType* __dec_obj65;
_Bool _if_conditional214;
void* right_value200;
struct sVar* var__164;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool __result121__;
_Bool _if_conditional217;
void* right_value201;
struct sType* __dec_obj66;
void* right_value202;
struct sType* left_type_165;
void* right_value203;
struct CVALUE* come_value_166;
_Bool _if_conditional218;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
char* __dec_obj67;
_Bool _if_conditional219;
void* right_value208;
void* right_value209;
_Bool _if_conditional220;
void* right_value210;
void* right_value211;
char* __dec_obj68;
_Bool _if_conditional221;
void* right_value212;
void* right_value213;
_Bool _if_conditional222;
void* right_value214;
char* __dec_obj69;
void* right_value215;
char* __dec_obj70;
int right_value_id_167;
_Bool _if_conditional223;
void* right_value216;
struct sType* __dec_obj71;
_Bool _if_conditional224;
void* right_value217;
void* right_value218;
_Bool _if_conditional225;
void* right_value219;
char* __dec_obj72;
void* right_value220;
char* __dec_obj73;
void* right_value221;
struct sType* __dec_obj74;
void* right_value222;
void* right_value223;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool __result122__;
void* right_value224;
char* __dec_obj75;
void* right_value225;
struct sType* __dec_obj76;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value226;
void* right_value227;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&array_initializer_79, 0, sizeof(char*));
memset(&var__83, 0, sizeof(struct sVar*));
right_value131 = (void*)0;
memset(&type_84, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&var_type_85, 0, sizeof(struct sType*));
right_value134 = (void*)0;
memset(&var__86, 0, sizeof(struct sVar*));
right_value135 = (void*)0;
memset(&type_87, 0, sizeof(struct sType*));
memset(&o2_saved_88, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_91, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&var_name_95, 0, sizeof(char*));
memset(&right_value_96, 0, sizeof(struct sNode*));
memset(&type_94, 0, sizeof(struct sType*));
memset(&var_name_95, 0, sizeof(char*));
memset(&right_value_96, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&left_type_97, 0, sizeof(struct sType*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
memset(&left_type2_99, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&o2_saved_100, 0, sizeof(struct list$1sNodeph*));
memset(&it_103, 0, sizeof(struct sNode*));
right_value142 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&left_type_107, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_109, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&come_value_110, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&left_type2_111, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&o2_saved_112, 0, sizeof(struct list$1sNodeph*));
memset(&it_113, 0, sizeof(struct sNode*));
right_value152 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&right_type_120, 0, sizeof(struct sType*));
memset(&var__121, 0, sizeof(struct sVar*));
memset(&i_122, 0, sizeof(int));
memset(&o2_saved_123, 0, sizeof(struct list$1charph*));
memset(&it_126, 0, sizeof(char*));
memset(&right_type2_132, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&var_type_133, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&o2_saved_134, 0, sizeof(struct list$1sNodeph*));
memset(&it_135, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_137, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&var_type_138, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&o2_saved_139, 0, sizeof(struct list$1sNodeph*));
memset(&it_140, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&come_value_141, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
memset(&current_stack_frame_struct_142, 0, sizeof(struct sClass*));
memset(&parent_var_143, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
memset(&left_type_145, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&c_value_146, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&right_value_id_147, 0, sizeof(int));
right_value176 = (void*)0;
memset(&c_value_148, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&multiple_var_name_150, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&i_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1charph*));
memset(&it_153, 0, sizeof(char*));
right_value185 = (void*)0;
memset(&right_type2_154, 0, sizeof(struct sType*));
memset(&var__155, 0, sizeof(struct sVar*));
right_value186 = (void*)0;
memset(&var_type_156, 0, sizeof(struct sType*));
right_value187 = (void*)0;
memset(&o2_saved_157, 0, sizeof(struct list$1sNodeph*));
memset(&it_158, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&left_type_160, 0, sizeof(struct sType*));
right_value191 = (void*)0;
memset(&right_value2_161, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&right_value_id_163, 0, sizeof(int));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&var__164, 0, sizeof(struct sVar*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&left_type_165, 0, sizeof(struct sType*));
right_value203 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&right_value_id_167, 0, sizeof(int));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
    # 60 "07var.c"
    array_initializer_79=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->array_initializer))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 579 "07var.c"
    # 62 "07var.c"
    if(array_initializer_79) {
        # 63 "07var.c"
        var__83=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        # 69 "07var.c"
        # 64 "07var.c"
        if(var__83) {
            # 65 "07var.c"
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            # 66 "07var.c"
            __result83__ = (_Bool)0;
            array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result83__;
        }
        # 80 "07var.c"
        # 69 "07var.c"
        if(_if_conditional144=self->type==((void*)0),        _if_conditional144) {
            # 70 "07var.c"
            err_msg(info,"Require type name(%s)",self->name);
            # 71 "07var.c"
            __result84__ = (_Bool)0;
            array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result84__;
        }
        else {
            # 74 "07var.c"
            type_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 76 "07var.c"
            type_84->mFunctionParam=(_Bool)0;
            # 77 "07var.c"
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_84)))),info);
            come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 80 "07var.c"
        var__83=get_variable_from_table(info->lv_table,self->name);
        # 82 "07var.c"
        var_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(var__83->mType))));
        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 83 "07var.c"
        var_type_85->mStatic=(_Bool)0;
        # 85 "07var.c"
        add_come_code(info,"%s=%s;\n",((char*)(right_value134=make_define_var(var_type_85,var__83->mCValueName,(_Bool)0,info))),array_initializer_79);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,var_type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 579 "07var.c"
        # 87 "07var.c"
        if(_if_conditional145=self->right_value==((void*)0),        _if_conditional145) {
            # 88 "07var.c"
            var__86=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            # 94 "07var.c"
            # 89 "07var.c"
            if(var__86) {
                # 90 "07var.c"
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                # 91 "07var.c"
                __result85__ = (_Bool)0;
                array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result85__;
            }
            # 99 "07var.c"
            # 94 "07var.c"
            if(_if_conditional147=self->type==((void*)0),            _if_conditional147) {
                # 95 "07var.c"
                err_msg(info,"Require concrete variable type(%s)",self->name);
                # 96 "07var.c"
                __result86__ = (_Bool)0;
                array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result86__;
            }
            # 99 "07var.c"
            type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 100 "07var.c"
            type_87->mFunctionParam=(_Bool)0;
            # 228 "07var.c"
            # 102 "07var.c"
            if(self->multiple_declare) {
                # 151 "07var.c"
                for(                o2_saved_88=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_91=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_88));                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_88));                it_91=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_88))                ){
                    # 104 "07var.c"
                    multiple_assign_var1=it_91;
                    type_94=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_95=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_96=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    # 105 "07var.c"
                    add_variable_to_table(var_name_95,(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type_94)))),info);
                    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 107 "07var.c"
                    var__86=get_variable_from_table(info->lv_table,var_name_95);
                    # 114 "07var.c"
                    # 109 "07var.c"
                    if(_if_conditional153=var__86==((void*)0),                    _if_conditional153) {
                        # 110 "07var.c"
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_91);
                        # 111 "07var.c"
                        __result94__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_95 = come_decrement_ref_count2(var_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_96) { right_value_96 = come_decrement_ref_count2(right_value_96, ((struct sNode*)right_value_96)->finalize, ((struct sNode*)right_value_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result94__;
                    }
                    # 114 "07var.c"
                    left_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(var__86->mType))));
                    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 116 "07var.c"
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value138=make_define_var(left_type_97,var__86->mCValueName,(_Bool)0,info))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 128 "07var.c"
                    # 118 "07var.c"
                    if(right_value_96) {
                        # 122 "07var.c"
                        # 119 "07var.c"
                        if(_if_conditional155=!node_compile(right_value_96,info),                        _if_conditional155) {
                            # 120 "07var.c"
                            __result95__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            var_name_95 = come_decrement_ref_count2(var_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_96) { right_value_96 = come_decrement_ref_count2(right_value_96, ((struct sNode*)right_value_96)->finalize, ((struct sNode*)right_value_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sType_finalize,left_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result95__;
                        }
                        # 122 "07var.c"
                        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 123 "07var.c"
                        dec_stack_ptr(1,info);
                        # 125 "07var.c"
                        add_come_code(info,"%s=%s;\n",var__86->mCValueName,come_value_98->c_value);
                        come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 128 "07var.c"
                    left_type2_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(left_type_97))));
                    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 129 "07var.c"
                    left_type2_99->mStatic=(_Bool)0;
                    # 150 "07var.c"
                    # 131 "07var.c"
                    if(_if_conditional158=!var__86->mType->mConstant&&!var__86->mType->mStatic,                    _if_conditional158) {
                        # 149 "07var.c"
                        # 132 "07var.c"
                        if(_if_conditional160=list$1sNodeph_length(left_type2_99->mArrayNum)>0,                        _if_conditional160) {
                            # 133 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__86->mCValueName,((char*)(right_value141=make_type_name_string(left_type2_99,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 144 "07var.c"
                            for(                            o2_saved_100=(struct list$1sNodeph*)come_increment_ref_count((left_type2_99->mArrayNum)),it_103=list$1sNodeph_begin((o2_saved_100));                            !list$1sNodeph_end((o2_saved_100));                            it_103=list$1sNodeph_next((o2_saved_100))                            ){
                                # 140 "07var.c"
                                # 135 "07var.c"
                                if(_if_conditional165=!node_compile(it_103,info),                                _if_conditional165) {
                                    # 136 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 137 "07var.c"
                                    exit(1);
                                }
                                # 140 "07var.c"
                                come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 141 "07var.c"
                                dec_stack_ptr(1,info);
                                # 142 "07var.c"
                                add_come_code(info,"*(%s)",come_value_106->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 144 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 147 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__86->mCValueName,((char*)(right_value143=make_type_name_string(left_type2_99,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_95 = come_decrement_ref_count2(var_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_96) { right_value_96 = come_decrement_ref_count2(right_value_96, ((struct sNode*)right_value_96)->finalize, ((struct sNode*)right_value_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,left_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 153 "07var.c"
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(type_87)))),info);
                come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 155 "07var.c"
                var__86=get_variable_from_table(info->lv_table,self->name);
                # 166 "07var.c"
                # 157 "07var.c"
                if(_if_conditional166=var__86==((void*)0),                _if_conditional166) {
                    # 158 "07var.c"
                    var__86=get_variable_from_table(info->gv_table,self->name);
                    # 164 "07var.c"
                    # 160 "07var.c"
                    if(_if_conditional167=var__86==((void*)0),                    _if_conditional167) {
                        # 161 "07var.c"
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        # 162 "07var.c"
                        __result105__ = (_Bool)1;
                        come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result105__;
                    }
                }
                # 166 "07var.c"
                left_type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(var__86->mType))));
                come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 216 "07var.c"
                # 167 "07var.c"
                if(_if_conditional168=list$1sNodeph_length(left_type_107->mArrayNum)>0,                _if_conditional168) {
                    # 168 "07var.c"
                    add_come_code(info,"%s;\n",((char*)(right_value146=make_define_var(left_type_107,var__86->mCValueName,(_Bool)0,info))));
                    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 188 "07var.c"
                    # 169 "07var.c"
                    if(_if_conditional169=!left_type_107->mStatic,                    _if_conditional169) {
                        # 187 "07var.c"
                        # 170 "07var.c"
                        if(_if_conditional170=list$1sNodeph_length(left_type_107->mArrayNum)>0,                        _if_conditional170) {
                            # 171 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__86->mCValueName,((char*)(right_value147=make_type_name_string(left_type_107,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 182 "07var.c"
                            for(                            o2_saved_108=(struct list$1sNodeph*)come_increment_ref_count((left_type_107->mArrayNum)),it_109=list$1sNodeph_begin((o2_saved_108));                            !list$1sNodeph_end((o2_saved_108));                            it_109=list$1sNodeph_next((o2_saved_108))                            ){
                                # 178 "07var.c"
                                # 173 "07var.c"
                                if(_if_conditional171=!node_compile(it_109,info),                                _if_conditional171) {
                                    # 174 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 175 "07var.c"
                                    exit(1);
                                }
                                # 178 "07var.c"
                                come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 179 "07var.c"
                                dec_stack_ptr(1,info);
                                # 180 "07var.c"
                                add_come_code(info,"*(%s)",come_value_110->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 182 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 185 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__86->mCValueName,var__86->mCValueName);
                        }
                    }
                }
                else {
                    # 190 "07var.c"
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value149=make_define_var(left_type_107,var__86->mCValueName,(_Bool)0,info))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 192 "07var.c"
                    left_type2_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type_107))));
                    come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 193 "07var.c"
                    left_type2_111->mStatic=(_Bool)0;
                    # 214 "07var.c"
                    # 195 "07var.c"
                    if(_if_conditional172=!var__86->mType->mConstant&&!var__86->mType->mStatic,                    _if_conditional172) {
                        # 213 "07var.c"
                        # 196 "07var.c"
                        if(_if_conditional173=list$1sNodeph_length(left_type2_111->mArrayNum)>0,                        _if_conditional173) {
                            # 197 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__86->mCValueName,((char*)(right_value151=make_type_name_string(left_type2_111,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 208 "07var.c"
                            for(                            o2_saved_112=(struct list$1sNodeph*)come_increment_ref_count((left_type2_111->mArrayNum)),it_113=list$1sNodeph_begin((o2_saved_112));                            !list$1sNodeph_end((o2_saved_112));                            it_113=list$1sNodeph_next((o2_saved_112))                            ){
                                # 204 "07var.c"
                                # 199 "07var.c"
                                if(_if_conditional174=!node_compile(it_113,info),                                _if_conditional174) {
                                    # 200 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 201 "07var.c"
                                    exit(1);
                                }
                                # 204 "07var.c"
                                come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 205 "07var.c"
                                dec_stack_ptr(1,info);
                                # 206 "07var.c"
                                add_come_code(info,"*(%s)",come_value_114->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 208 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 211 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__86->mCValueName,((char*)(right_value153=make_type_name_string(left_type2_111,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,left_type2_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 216 "07var.c"
                come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 218 "07var.c"
                __dec_obj51=come_value_115->c_value;
                come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s",var__86->mCValueName))));
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 219 "07var.c"
                __dec_obj52=come_value_115->type;
                come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type_107))));
                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 220 "07var.c"
                come_value_115->var=var__86;
                # 222 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
                # 227 "07var.c"
                # 224 "07var.c"
                if(_if_conditional178=self->alloc&&!left_type_107->mClass->mNumber&&left_type_107->mPointerNum==0,                _if_conditional178) {
                    # 225 "07var.c"
                    var__86->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,left_type_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 234 "07var.c"
            # 230 "07var.c"
            if(_if_conditional179=!node_compile(self->right_value,info),            _if_conditional179) {
                # 231 "07var.c"
                __result107__ = (_Bool)0;
                array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result107__;
            }
            # 234 "07var.c"
            right_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 235 "07var.c"
            right_type_120=right_value_119->type;
            # 236 "07var.c"
            dec_stack_ptr(1,info);
            # 244 "07var.c"
            # 238 "07var.c"
            if(self->multiple_assign) {
                # 242 "07var.c"
                # 239 "07var.c"
                if(right_type_120->mNoSolvedGenericsType->v1) {
                    # 240 "07var.c"
                    right_type_120=right_type_120->mNoSolvedGenericsType->v1;
                }
            }
            # 328 "07var.c"
            # 244 "07var.c"
            if(self->alloc) {
                # 245 "07var.c"
                var__121=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                # 251 "07var.c"
                # 246 "07var.c"
                if(var__121) {
                    # 247 "07var.c"
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    # 248 "07var.c"
                    __result108__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
                # 326 "07var.c"
                # 251 "07var.c"
                if(self->multiple_assign) {
                    # 252 "07var.c"
                    i_122=0;
                    # 288 "07var.c"
                    for(                    o2_saved_123=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_126=list$1charph_begin((o2_saved_123));                    !list$1charph_end((o2_saved_123));                    it_126=list$1charph_next((o2_saved_123))                    ){
                        # 286 "07var.c"
                        # 254 "07var.c"
                        if(_if_conditional190=i_122<list$1sTypeph_length(right_type_120->mGenericsTypes),                        _if_conditional190) {
                            # 255 "07var.c"
                            right_type2_132=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_120->mGenericsTypes,i_122), "07var.c", 255, 0));
                            # 256 "07var.c"
                            right_type2_132->mFunctionParam=(_Bool)0;
                            # 258 "07var.c"
                            add_variable_to_table(it_126,(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(right_type2_132)))),info);
                            come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 260 "07var.c"
                            var__121=get_variable_from_table(info->lv_table,it_126);
                            # 262 "07var.c"
                            var_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(var__121->mType))));
                            come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 263 "07var.c"
                            var_type_133->mStatic=(_Bool)0;
                            # 284 "07var.c"
                            # 265 "07var.c"
                            if(_if_conditional193=!var_type_133->mConstant&&!var_type_133->mStatic,                            _if_conditional193) {
                                # 283 "07var.c"
                                # 266 "07var.c"
                                if(_if_conditional194=list$1sNodeph_length(var_type_133->mArrayNum)>0,                                _if_conditional194) {
                                    # 267 "07var.c"
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__121->mCValueName,((char*)(right_value163=make_type_name_string(var_type_133,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 278 "07var.c"
                                    for(                                    o2_saved_134=(struct list$1sNodeph*)come_increment_ref_count((var_type_133->mArrayNum)),it_135=list$1sNodeph_begin((o2_saved_134));                                    !list$1sNodeph_end((o2_saved_134));                                    it_135=list$1sNodeph_next((o2_saved_134))                                    ){
                                        # 274 "07var.c"
                                        # 269 "07var.c"
                                        if(_if_conditional195=!node_compile(it_135,info),                                        _if_conditional195) {
                                            # 270 "07var.c"
                                            err_msg(info,"invalid array num");
                                            # 271 "07var.c"
                                            exit(1);
                                        }
                                        # 274 "07var.c"
                                        come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
                                        come_call_finalizer2(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 275 "07var.c"
                                        dec_stack_ptr(1,info);
                                        # 276 "07var.c"
                                        add_come_code(info,"*(%s)",come_value_136->c_value);
                                        come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 278 "07var.c"
                                    add_come_code(info,");\n");
                                }
                                else {
                                    # 281 "07var.c"
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__121->mCValueName,((char*)(right_value165=make_type_name_string(var_type_133,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer2(sType_finalize,var_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 286 "07var.c"
                        i_122++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 301 "07var.c"
                    # 290 "07var.c"
                    if(_if_conditional196=self->type==((void*)0),                    _if_conditional196) {
                        # 291 "07var.c"
                        right_type_120->mFunctionParam=(_Bool)0;
                        # 292 "07var.c"
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(right_type_120)))),info);
                        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 295 "07var.c"
                        type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 297 "07var.c"
                        type_137->mFunctionParam=(_Bool)0;
                        # 298 "07var.c"
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(type_137)))),info);
                        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 301 "07var.c"
                    var__121=get_variable_from_table(info->lv_table,self->name);
                    # 303 "07var.c"
                    var_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(var__121->mType))));
                    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 304 "07var.c"
                    var_type_138->mStatic=(_Bool)0;
                    # 325 "07var.c"
                    # 306 "07var.c"
                    if(_if_conditional197=!var__121->mType->mStatic&&!var_type_138->mConstant&&list$1sNodeph_length(var_type_138->mArrayNum)==0,                    _if_conditional197) {
                        # 324 "07var.c"
                        # 307 "07var.c"
                        if(_if_conditional198=list$1sNodeph_length(var_type_138->mArrayNum)>0,                        _if_conditional198) {
                            # 308 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__121->mCValueName,((char*)(right_value170=make_type_name_string(var_type_138,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 319 "07var.c"
                            for(                            o2_saved_139=(struct list$1sNodeph*)come_increment_ref_count((var_type_138->mArrayNum)),it_140=list$1sNodeph_begin((o2_saved_139));                            !list$1sNodeph_end((o2_saved_139));                            it_140=list$1sNodeph_next((o2_saved_139))                            ){
                                # 315 "07var.c"
                                # 310 "07var.c"
                                if(_if_conditional199=!node_compile(it_140,info),                                _if_conditional199) {
                                    # 311 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 312 "07var.c"
                                    exit(1);
                                }
                                # 315 "07var.c"
                                come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 316 "07var.c"
                                dec_stack_ptr(1,info);
                                # 317 "07var.c"
                                add_come_code(info,"*(%s)",come_value_141->c_value);
                                come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 319 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 322 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__121->mCValueName,((char*)(right_value172=make_type_name_string(var_type_138,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer2(sType_finalize,var_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            # 328 "07var.c"
            current_stack_frame_struct_142=info->current_stack_frame_struct;
            # 377 "07var.c"
            # 330 "07var.c"
            if(_if_conditional200=current_stack_frame_struct_142&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional200) {
                # 331 "07var.c"
                parent_var_143=get_variable_from_table(info->lv_table->mParent,self->name);
                # 375 "07var.c"
                # 333 "07var.c"
                if(_if_conditional201=parent_var_143!=((void*)0),                _if_conditional201) {
                    # 374 "07var.c"
                    # 334 "07var.c"
                    if(_if_conditional202=string_operator_not_equals(parent_var_143->mFunName,info->come_fun->mName),                    _if_conditional202) {
                        # 335 "07var.c"
                        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 337 "07var.c"
                        left_type_145=parent_var_143->mType;
                        # 363 "07var.c"
                        # 339 "07var.c"
                        if(_if_conditional203=left_type_145->mPointerNum>0&&right_type_120->mPointerNum>0&&right_type_120->mHeap&&left_type_145->mHeap,                        _if_conditional203) {
                            # 340 "07var.c"
                            c_value_146=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("*(parent->%s)",parent_var_143->mCValueName))));
                            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 341 "07var.c"
                            decrement_ref_count_object(parent_var_143->mType,c_value_146,info,(_Bool)0);
                            # 343 "07var.c"
                            std_move(left_type_145,right_type_120,right_value_119,info);
                            # 345 "07var.c"
                            __dec_obj56=come_value_144->c_value;
                            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("(*(parent->%s))=%s",parent_var_143->mCValueName,right_value_119->c_value))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 347 "07var.c"
                            right_value_id_147=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_119->c_value));
                            # 352 "07var.c"
                            # 349 "07var.c"
                            if(_if_conditional204=right_value_id_147!=-1,                            _if_conditional204) {
                                # 350 "07var.c"
                                remove_object_from_right_values(right_value_id_147,info);
                            }
                            c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 363 "07var.c"
                            # 353 "07var.c"
                            if(_if_conditional205=left_type_145->mPointerNum>0&&right_type_120->mPointerNum>0&&string_operator_equals(right_type_120->mClass->mName,"void")&&left_type_145->mHeap,                            _if_conditional205) {
                                # 354 "07var.c"
                                c_value_148=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("*(parent->%s)",parent_var_143->mCValueName))));
                                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 355 "07var.c"
                                decrement_ref_count_object(parent_var_143->mType,c_value_148,info,(_Bool)0);
                                # 357 "07var.c"
                                __dec_obj57=come_value_144->c_value;
                                come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))=%s",parent_var_143->mCValueName,right_value_119->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 360 "07var.c"
                                __dec_obj58=come_value_144->c_value;
                                come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("(*(parent->%s))=%s",parent_var_143->mCValueName,right_value_119->c_value))));
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        # 363 "07var.c"
                        __dec_obj59=come_value_144->type;
                        come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(left_type_145))));
                        come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 364 "07var.c"
                        come_value_144->var=((void*)0);
                        # 366 "07var.c"
                        check_assign_type(((char*)(right_value181=xsprintf("\%s is assigning to",((char*)(right_value180=string_to_string(self->name)))))),left_type_145,right_type_120,come_value_144,(_Bool)0,(_Bool)1,info);
                        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 368 "07var.c"
                        add_come_last_code(info,"%s;\n",come_value_144->c_value);
                        # 370 "07var.c"
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
                        # 372 "07var.c"
                        __result120__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result120__;
                        come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 577 "07var.c"
            # 377 "07var.c"
            if(self->multiple_assign) {
                # 378 "07var.c"
                # 379 "07var.c"
                multiple_var_name_150=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("multiple_assign_var%d",++num_multiple_var_149))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 380 "07var.c"
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value183=make_define_var(right_value_119->type,multiple_var_name_150,(_Bool)0,info))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 382 "07var.c"
                add_come_code(info,"%s=%s;\n",multiple_var_name_150,right_value_119->c_value);
                # 384 "07var.c"
                __dec_obj60=right_value_119->c_value;
                right_value_119->c_value=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(multiple_var_name_150))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 386 "07var.c"
                i_151=0;
                # 459 "07var.c"
                for(                o2_saved_152=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_153=list$1charph_begin((o2_saved_152));                !list$1charph_end((o2_saved_152));                it_153=list$1charph_next((o2_saved_152))                ){
                    # 455 "07var.c"
                    # 388 "07var.c"
                    if(_if_conditional207=i_151<list$1sTypeph_length(right_type_120->mGenericsTypes),                    _if_conditional207) {
                        # 389 "07var.c"
                        right_type2_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_120->mGenericsTypes,i_151), "07var.c", 389, 1))))));
                        come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 391 "07var.c"
                        var__155=get_variable_from_table(info->lv_table,it_153);
                        # 393 "07var.c"
                        var_type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(var__155->mType))));
                        come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 394 "07var.c"
                        var_type_156->mStatic=(_Bool)0;
                        # 416 "07var.c"
                        # 396 "07var.c"
                        if(_if_conditional208=!var_type_156->mConstant,                        _if_conditional208) {
                            # 414 "07var.c"
                            # 397 "07var.c"
                            if(_if_conditional209=list$1sNodeph_length(var_type_156->mArrayNum)>0,                            _if_conditional209) {
                                # 398 "07var.c"
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__155->mCValueName,((char*)(right_value187=make_type_name_string(var_type_156,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 409 "07var.c"
                                for(                                o2_saved_157=(struct list$1sNodeph*)come_increment_ref_count((var_type_156->mArrayNum)),it_158=list$1sNodeph_begin((o2_saved_157));                                !list$1sNodeph_end((o2_saved_157));                                it_158=list$1sNodeph_next((o2_saved_157))                                ){
                                    # 405 "07var.c"
                                    # 400 "07var.c"
                                    if(_if_conditional210=!node_compile(it_158,info),                                    _if_conditional210) {
                                        # 401 "07var.c"
                                        err_msg(info,"invalid array num");
                                        # 402 "07var.c"
                                        exit(1);
                                    }
                                    # 405 "07var.c"
                                    come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
                                    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 406 "07var.c"
                                    dec_stack_ptr(1,info);
                                    # 407 "07var.c"
                                    add_come_code(info,"*(%s)",come_value_159->c_value);
                                    come_call_finalizer2(CVALUE_finalize,come_value_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 409 "07var.c"
                                add_come_code(info,");\n");
                            }
                            else {
                                # 412 "07var.c"
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__155->mCValueName,((char*)(right_value189=make_type_name_string(var_type_156,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        # 416 "07var.c"
                        left_type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(var__155->mType))));
                        come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 418 "07var.c"
                        right_value2_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 420 "07var.c"
                        __dec_obj61=right_value2_161->c_value;
                        right_value2_161->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s->v%d",right_value_119->c_value,i_151+1))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 421 "07var.c"
                        __dec_obj62=right_value2_161->type;
                        right_value2_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(right_type2_154))));
                        come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 422 "07var.c"
                        right_value2_161->var=((void*)0);
                        # 424 "07var.c"
                        come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 426 "07var.c"
                        check_assign_type(((char*)(right_value196=xsprintf("\%s is assining to}",((char*)(right_value195=string_to_string(self->name)))))),left_type_160,right_type2_154,come_value_162,(_Bool)0,(_Bool)1,info);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 443 "07var.c"
                        # 427 "07var.c"
                        if(_if_conditional211=right_type2_154->mHeap&&left_type_160->mHeap&&left_type_160->mPointerNum>0&&right_type2_154->mPointerNum>0,                        _if_conditional211) {
                            # 434 "07var.c"
                            # 429 "07var.c"
                            if(self->alloc) {
                                # 430 "07var.c"
                                std_move(left_type_160,right_type2_154,right_value2_161,info);
                                # 431 "07var.c"
                                __dec_obj63=come_value_162->c_value;
                                come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s=%s",var__155->mCValueName,right_value2_161->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 434 "07var.c"
                            right_value_id_163=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_161->c_value));
                            # 439 "07var.c"
                            # 436 "07var.c"
                            if(_if_conditional213=right_value_id_163!=-1,                            _if_conditional213) {
                                # 437 "07var.c"
                                remove_object_from_right_values(right_value_id_163,info);
                            }
                        }
                        else {
                            # 441 "07var.c"
                            __dec_obj64=come_value_162->c_value;
                            come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("%s=%s",var__155->mCValueName,right_value2_161->c_value))));
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 443 "07var.c"
                        __dec_obj65=come_value_162->type;
                        come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(left_type_160))));
                        come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 444 "07var.c"
                        come_value_162->var=var__155;
                        # 453 "07var.c"
                        # 446 "07var.c"
                        if(self->alloc) {
                            # 447 "07var.c"
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value200=make_define_var(left_type_160,var__155->mCValueName,(_Bool)0,info))));
                            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 448 "07var.c"
                            add_come_code(info,"%s;\n",come_value_162->c_value);
                        }
                        else {
                            # 451 "07var.c"
                            add_come_code(info,"%s;\n",come_value_162->c_value);
                        }
                        come_call_finalizer2(sType_finalize,right_type2_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,var_type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,left_type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,right_value2_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 455 "07var.c"
                    i_151++;
                }
                come_call_finalizer2(list$1charphp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                multiple_var_name_150 = come_decrement_ref_count2(multiple_var_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 461 "07var.c"
                var__164=get_variable_from_table(info->lv_table,self->name);
                # 472 "07var.c"
                # 463 "07var.c"
                if(_if_conditional215=var__164==((void*)0),                _if_conditional215) {
                    # 464 "07var.c"
                    var__164=get_variable_from_table(info->gv_table,self->name);
                    # 470 "07var.c"
                    # 466 "07var.c"
                    if(_if_conditional216=var__164==((void*)0),                    _if_conditional216) {
                        # 467 "07var.c"
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        # 468 "07var.c"
                        __result121__ = (_Bool)1;
                        come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result121__;
                    }
                }
                # 475 "07var.c"
                # 472 "07var.c"
                if(_if_conditional217=var__164->mType==((void*)0),                _if_conditional217) {
                    # 473 "07var.c"
                    __dec_obj66=var__164->mType;
                    var__164->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(right_type_120))));
                    come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 475 "07var.c"
                left_type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(var__164->mType))));
                come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 477 "07var.c"
                come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 477, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 568 "07var.c"
                # 479 "07var.c"
                if(_if_conditional218=var__164->mType->mStatic&&!var__164->mGlobal,                _if_conditional218) {
                    # 480 "07var.c"
                    check_assign_type(((char*)(right_value205=xsprintf("\%s is assining to",((char*)(right_value204=string_to_string(self->name)))))),left_type_165,right_type_120,right_value_119,(_Bool)0,(_Bool)1,info);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 481 "07var.c"
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value206=make_define_var(left_type_165,var__164->mCValueName,(_Bool)0,info))),right_value_119->c_value);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 482 "07var.c"
                    __dec_obj67=come_value_166->c_value;
                    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(""))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 484 "07var.c"
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                    # 486 "07var.c"
                    transpiler_clear_last_code(info);
                }
                else {
                    # 568 "07var.c"
                    # 488 "07var.c"
                    if(var__164->mType->mConstant) {
                        # 489 "07var.c"
                        check_assign_type(((char*)(right_value209=xsprintf("\%s is assining to",((char*)(right_value208=string_to_string(self->name)))))),left_type_165,right_type_120,right_value_119,(_Bool)0,(_Bool)1,info);
                        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 496 "07var.c"
                        # 490 "07var.c"
                        if(self->alloc) {
                            # 491 "07var.c"
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value210=make_define_var(left_type_165,var__164->mCValueName,(_Bool)0,info))),right_value_119->c_value);
                            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 494 "07var.c"
                            add_come_code_at_function_head(info,"%s=%s;\n",var__164->mCValueName,right_value_119->c_value);
                        }
                        # 496 "07var.c"
                        __dec_obj68=come_value_166->c_value;
                        come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(""))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 498 "07var.c"
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                        # 500 "07var.c"
                        transpiler_clear_last_code(info);
                    }
                    else {
                        # 568 "07var.c"
                        # 502 "07var.c"
                        if(_if_conditional221=right_type_120->mHeap&&left_type_165->mHeap&&left_type_165->mPointerNum>0&&right_type_120->mPointerNum>0,                        _if_conditional221) {
                            # 504 "07var.c"
                            check_assign_type(((char*)(right_value213=xsprintf("\%s is assining to",((char*)(right_value212=string_to_string(self->name)))))),left_type_165,right_type_120,right_value_119,(_Bool)0,(_Bool)1,info);
                            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 514 "07var.c"
                            # 505 "07var.c"
                            if(self->alloc) {
                                # 506 "07var.c"
                                std_move(left_type_165,right_type_120,right_value_119,info);
                                # 507 "07var.c"
                                __dec_obj69=come_value_166->c_value;
                                come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s=%s",var__164->mCValueName,right_value_119->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 510 "07var.c"
                                decrement_ref_count_object(left_type_165,var__164->mCValueName,info,(_Bool)0);
                                # 511 "07var.c"
                                std_move(left_type_165,right_type_120,right_value_119,info);
                                # 512 "07var.c"
                                __dec_obj70=come_value_166->c_value;
                                come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s=%s",var__164->mCValueName,right_value_119->c_value))));
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 514 "07var.c"
                            right_value_id_167=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_119->c_value));
                            # 519 "07var.c"
                            # 516 "07var.c"
                            if(_if_conditional223=right_value_id_167!=-1,                            _if_conditional223) {
                                # 517 "07var.c"
                                remove_object_from_right_values(right_value_id_167,info);
                            }
                            # 519 "07var.c"
                            __dec_obj71=come_value_166->type;
                            come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(left_type_165))));
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 520 "07var.c"
                            come_value_166->var=var__164;
                            # 522 "07var.c"
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                            # 524 "07var.c"
                            add_come_last_code(info,"%s;\n",come_value_166->c_value);
                        }
                        else {
                            # 568 "07var.c"
                            # 526 "07var.c"
                            if(_if_conditional224=string_operator_equals(right_type_120->mClass->mName,"void")&&left_type_165->mHeap&&left_type_165->mPointerNum>0&&right_type_120->mPointerNum>0,                            _if_conditional224) {
                                # 528 "07var.c"
                                check_assign_type(((char*)(right_value218=xsprintf("\%s is assining to",((char*)(right_value217=string_to_string(self->name)))))),left_type_165,right_type_120,right_value_119,(_Bool)0,(_Bool)1,info);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 536 "07var.c"
                                # 529 "07var.c"
                                if(self->alloc) {
                                    # 530 "07var.c"
                                    __dec_obj72=come_value_166->c_value;
                                    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s=%s",var__164->mCValueName,right_value_119->c_value))));
                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 533 "07var.c"
                                    decrement_ref_count_object(left_type_165,var__164->mCValueName,info,(_Bool)0);
                                    # 534 "07var.c"
                                    __dec_obj73=come_value_166->c_value;
                                    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s=%s",var__164->mCValueName,right_value_119->c_value))));
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 536 "07var.c"
                                __dec_obj74=come_value_166->type;
                                come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(left_type_165))));
                                come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 537 "07var.c"
                                come_value_166->var=var__164;
                                # 539 "07var.c"
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                                # 541 "07var.c"
                                add_come_last_code(info,"%s;\n",come_value_166->c_value);
                            }
                            else {
                                # 544 "07var.c"
                                check_assign_type(((char*)(right_value223=xsprintf("\%s is assining to",((char*)(right_value222=string_to_string(self->name)))))),left_type_165,right_type_120,right_value_119,(_Bool)0,(_Bool)1,info);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 559 "07var.c"
                                # 546 "07var.c"
                                if(_if_conditional226=left_type_165->mHeap&&!right_value_119->type->mHeap,                                _if_conditional226) {
                                    # 556 "07var.c"
                                    # 547 "07var.c"
                                    if(_if_conditional227=string_operator_equals(right_value_119->type->mClass->mName,"void")&&right_value_119->type->mPointerNum==1,                                    _if_conditional227) {
                                    }
                                    else {
                                        # 555 "07var.c"
                                        # 551 "07var.c"
                                        if(_if_conditional228=!right_value_119->type->mDelegate&&!right_value_119->type->mShare&&!gComeGC,                                        _if_conditional228) {
                                            # 552 "07var.c"
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            # 553 "07var.c"
                                            __result122__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,left_type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result122__;
                                        }
                                    }
                                }
                                # 559 "07var.c"
                                __dec_obj75=come_value_166->c_value;
                                come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s=%s",var__164->mCValueName,right_value_119->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 560 "07var.c"
                                __dec_obj76=come_value_166->type;
                                come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_type_165))));
                                come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 561 "07var.c"
                                come_value_166->var=var__164;
                                # 563 "07var.c"
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                                # 565 "07var.c"
                                add_come_last_code(info,"%s;\n",come_value_166->c_value);
                            }
                        }
                    }
                }
                # 576 "07var.c"
                # 568 "07var.c"
                if(_if_conditional229=self->alloc&&!left_type_165->mConstant&&!left_type_165->mStatic,                _if_conditional229) {
                    # 575 "07var.c"
                    # 569 "07var.c"
                    if(_if_conditional230=list$1sNodeph_length(left_type_165->mArrayNum)>0,                    _if_conditional230) {
                        # 570 "07var.c"
                        add_come_code(info,"%s;\n",((char*)(right_value226=make_define_var(left_type_165,var__164->mCValueName,(_Bool)0,info))));
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 573 "07var.c"
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value227=make_define_var(left_type_165,var__164->mCValueName,(_Bool)0,info))));
                        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer2(sType_finalize,left_type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 579 "07var.c"
    __result123__ = (_Bool)1;
    array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    array_initializer_79 = come_decrement_ref_count2(array_initializer_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_80;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional15;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sVar* __result79__;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sVar* __result80__;
struct sVar* __result81__;
struct sVar* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_80, 0, sizeof(struct sVar*));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_80,0,sizeof(struct sVar*));
            # 1547 "./neo-c.h"
            hash_81=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_82=hash_81;
            # 1572 "./neo-c.h"
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional135=self->item_existance[it_82],                _if_conditional135) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional136=string_equals(self->keys[it_82],key),                    _if_conditional136) {
                        # 1555 "./neo-c.h"
                        __result79__ = __result_obj__ = self->items[it_82];
                        come_call_finalizer2(sVar_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result79__;
                    }
                    # 1558 "./neo-c.h"
                    it_82++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional141=it_82>=self->size,                    _if_conditional141) {
                        # 1561 "./neo-c.h"
                        it_82=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional142=it_82==hash_81,                        _if_conditional142) {
                            # 1564 "./neo-c.h"
                            __result80__ = __result_obj__ = default_value_80;
                            come_call_finalizer2(sVar_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result80__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result81__ = __result_obj__ = default_value_80;
                    come_call_finalizer2(sVar_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
            # 1572 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_80;
            come_call_finalizer2(sVar_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer2(sVar_finalize,default_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                            if(_if_conditional137=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional137) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional138=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional138) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional139=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional139) {
                                # 2 "sVar_finalize"
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional140=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional140) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct tuple3$3sTypephcharphsNodeph* result_89;
struct tuple3$3sTypephcharphsNodeph* __result87__;
_Bool _if_conditional150;
struct tuple3$3sTypephcharphsNodeph* __result88__;
struct tuple3$3sTypephcharphsNodeph* result_90;
struct tuple3$3sTypephcharphsNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_90, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 290 "./neo-c.h"
                    # 285 "./neo-c.h"
                    if(_if_conditional149=self==((void*)0),                    _if_conditional149) {
                        # 286 "./neo-c.h"
                        # 287 "./neo-c.h"
                        memset(&result_89,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 288 "./neo-c.h"
                        __result87__ = __result_obj__ = result_89;
                        return __result87__;
                    }
                    # 290 "./neo-c.h"
                    self->it=self->head;
                    # 296 "./neo-c.h"
                    # 292 "./neo-c.h"
                    if(self->it) {
                        # 293 "./neo-c.h"
                        __result88__ = __result_obj__ = self->it->item;
                        return __result88__;
                    }
                    # 296 "./neo-c.h"
                    # 297 "./neo-c.h"
                    memset(&result_90,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 298 "./neo-c.h"
                    __result89__ = __result_obj__ = result_90;
                    return __result89__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 320 "./neo-c.h"
                    __result90__ = self==((void*)0)||self->it==((void*)0);
                    return __result90__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct tuple3$3sTypephcharphsNodeph* result_92;
struct tuple3$3sTypephcharphsNodeph* __result91__;
_Bool _if_conditional152;
struct tuple3$3sTypephcharphsNodeph* __result92__;
struct tuple3$3sTypephcharphsNodeph* result_93;
struct tuple3$3sTypephcharphsNodeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_93, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 308 "./neo-c.h"
                    # 302 "./neo-c.h"
                    if(_if_conditional151=self==((void*)0)||self->it==((void*)0),                    _if_conditional151) {
                        # 303 "./neo-c.h"
                        # 304 "./neo-c.h"
                        memset(&result_92,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 305 "./neo-c.h"
                        __result91__ = __result_obj__ = result_92;
                        return __result91__;
                    }
                    # 308 "./neo-c.h"
                    self->it=self->it->next;
                    # 314 "./neo-c.h"
                    # 310 "./neo-c.h"
                    if(self->it) {
                        # 311 "./neo-c.h"
                        __result92__ = __result_obj__ = self->it->item;
                        return __result92__;
                    }
                    # 314 "./neo-c.h"
                    # 315 "./neo-c.h"
                    memset(&result_93,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 316 "./neo-c.h"
                    __result93__ = __result_obj__ = result_93;
                    return __result93__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "CVALUE_finalize"
                            # 0 "CVALUE_finalize"
                            if(_if_conditional156=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional156) {
                                # 0 "CVALUE_finalize"
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "CVALUE_finalize"
                            # 1 "CVALUE_finalize"
                            if(_if_conditional157=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional157) {
                                # 1 "CVALUE_finalize"
                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional159;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 367 "./neo-c.h"
                            # 364 "./neo-c.h"
                            if(_if_conditional159=self==((void*)0),                            _if_conditional159) {
                                # 365 "./neo-c.h"
                                __result96__ = 0;
                                return __result96__;
                            }
                            # 367 "./neo-c.h"
                            __result97__ = self->len;
                            return __result97__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional161;
struct sNode* result_101;
struct sNode* __result98__;
_Bool _if_conditional162;
struct sNode* __result99__;
struct sNode* result_102;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct sNode*));
memset(&result_102, 0, sizeof(struct sNode*));
                                # 290 "./neo-c.h"
                                # 285 "./neo-c.h"
                                if(_if_conditional161=self==((void*)0),                                _if_conditional161) {
                                    # 286 "./neo-c.h"
                                    # 287 "./neo-c.h"
                                    memset(&result_101,0,sizeof(struct sNode*));
                                    # 288 "./neo-c.h"
                                    __result98__ = __result_obj__ = result_101;
                                    return __result98__;
                                }
                                # 290 "./neo-c.h"
                                self->it=self->head;
                                # 296 "./neo-c.h"
                                # 292 "./neo-c.h"
                                if(self->it) {
                                    # 293 "./neo-c.h"
                                    __result99__ = __result_obj__ = self->it->item;
                                    return __result99__;
                                }
                                # 296 "./neo-c.h"
                                # 297 "./neo-c.h"
                                memset(&result_102,0,sizeof(struct sNode*));
                                # 298 "./neo-c.h"
                                __result100__ = __result_obj__ = result_102;
                                return __result100__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 320 "./neo-c.h"
                                __result101__ = self==((void*)0)||self->it==((void*)0);
                                return __result101__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct sNode* result_104;
struct sNode* __result102__;
_Bool _if_conditional164;
struct sNode* __result103__;
struct sNode* result_105;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_104, 0, sizeof(struct sNode*));
memset(&result_105, 0, sizeof(struct sNode*));
                                # 308 "./neo-c.h"
                                # 302 "./neo-c.h"
                                if(_if_conditional163=self==((void*)0)||self->it==((void*)0),                                _if_conditional163) {
                                    # 303 "./neo-c.h"
                                    # 304 "./neo-c.h"
                                    memset(&result_104,0,sizeof(struct sNode*));
                                    # 305 "./neo-c.h"
                                    __result102__ = __result_obj__ = result_104;
                                    return __result102__;
                                }
                                # 308 "./neo-c.h"
                                self->it=self->it->next;
                                # 314 "./neo-c.h"
                                # 310 "./neo-c.h"
                                if(self->it) {
                                    # 311 "./neo-c.h"
                                    __result103__ = __result_obj__ = self->it->item;
                                    return __result103__;
                                }
                                # 314 "./neo-c.h"
                                # 315 "./neo-c.h"
                                memset(&result_105,0,sizeof(struct sNode*));
                                # 316 "./neo-c.h"
                                __result104__ = __result_obj__ = result_105;
                                return __result104__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value157;
struct list_item$1CVALUEph* litem_116;
struct CVALUE* __dec_obj53;
_Bool _if_conditional177;
void* right_value158;
struct list_item$1CVALUEph* litem_117;
struct CVALUE* __dec_obj54;
void* right_value159;
struct list_item$1CVALUEph* litem_118;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1CVALUEph*));
right_value158 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1CVALUEph*));
right_value159 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1CVALUEph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional175=self->len==0,                    _if_conditional175) {
                        # 226 "./neo-c.h"
                        litem_116=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value157=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_116->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_116->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj53=litem_116->item;
                        litem_116->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_116;
                        # 233 "./neo-c.h"
                        self->head=litem_116;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional177=self->len==1,                        _if_conditional177) {
                            # 236 "./neo-c.h"
                            litem_117=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value158=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_117->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_117->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj54=litem_117->item;
                            litem_117->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_117;
                            # 243 "./neo-c.h"
                            self->head->next=litem_117;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_118=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value159=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_118->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_118->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj55=litem_118->item;
                            litem_118->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer2(CVALUE_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_118;
                            # 253 "./neo-c.h"
                            self->tail=litem_118;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result106__ = __result_obj__ = self;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result106__;
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1CVALUEphp_finalize"
                            # 0 "list_item$1CVALUEphp_finalize"
                            if(_if_conditional176=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional176) {
                                # 0 "list_item$1CVALUEphp_finalize"
                                come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional185;
char* result_124;
char* __result109__;
_Bool _if_conditional186;
char* __result110__;
char* result_125;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional185=self==((void*)0),                        _if_conditional185) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_124,0,sizeof(char*));
                            # 288 "./neo-c.h"
                            __result109__ = __result_obj__ = result_124;
                            return __result109__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result110__ = __result_obj__ = self->it->item;
                            return __result110__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_125,0,sizeof(char*));
                        # 298 "./neo-c.h"
                        __result111__ = __result_obj__ = result_125;
                        return __result111__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result112__ = self==((void*)0)||self->it==((void*)0);
                        return __result112__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional187;
char* result_127;
char* __result113__;
_Bool _if_conditional188;
char* __result114__;
char* result_128;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional187=self==((void*)0)||self->it==((void*)0),                        _if_conditional187) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_127,0,sizeof(char*));
                            # 305 "./neo-c.h"
                            __result113__ = __result_obj__ = result_127;
                            return __result113__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result114__ = __result_obj__ = self->it->item;
                            return __result114__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_128,0,sizeof(char*));
                        # 316 "./neo-c.h"
                        __result115__ = __result_obj__ = result_128;
                        return __result115__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional189;
int __result116__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 367 "./neo-c.h"
                            # 364 "./neo-c.h"
                            if(_if_conditional189=self==((void*)0),                            _if_conditional189) {
                                # 365 "./neo-c.h"
                                __result116__ = 0;
                                return __result116__;
                            }
                            # 367 "./neo-c.h"
                            __result117__ = self->len;
                            return __result117__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional191;
struct list_item$1sTypeph* it_129;
int i_130;
_Bool _while_condtional16;
_Bool _if_conditional192;
struct sType* __result118__;
struct sType* default_value_131;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_129, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_130, 0, sizeof(int));
memset(&default_value_131, 0, sizeof(struct sType*));
                                # 686 "./neo-c.h"
                                # 682 "./neo-c.h"
                                if(_if_conditional191=position<0,                                _if_conditional191) {
                                    # 683 "./neo-c.h"
                                    position+=self->len;
                                }
                                # 686 "./neo-c.h"
                                it_129=self->head;
                                # 687 "./neo-c.h"
                                i_130=0;
                                # 694 "./neo-c.h"
                                while(_while_condtional16=it_129!=((void*)0),                                _while_condtional16) {
                                    # 692 "./neo-c.h"
                                    # 689 "./neo-c.h"
                                    if(_if_conditional192=position==i_130,                                    _if_conditional192) {
                                        # 690 "./neo-c.h"
                                        __result118__ = __result_obj__ = it_129->item;
                                        return __result118__;
                                    }
                                    # 692 "./neo-c.h"
                                    it_129=it_129->next;
                                    # 693 "./neo-c.h"
                                    i_130++;
                                }
                                # 696 "./neo-c.h"
                                # 697 "./neo-c.h"
                                memset(&default_value_131,0,sizeof(struct sType*));
                                # 698 "./neo-c.h"
                                __result119__ = __result_obj__ = default_value_131;
                                come_call_finalizer2(sType_finalize,default_value_131, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result119__;
                                come_call_finalizer2(sType_finalize,default_value_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 584 "07var.c"
    __result124__ = self->sline;
    return __result124__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value228;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
    # 589 "07var.c"
    __result125__ = __result_obj__ = ((char*)(right_value228=__builtin_string(self->sname)));
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
void* right_value229;
void* right_value230;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value239;
struct sNode* result_169;
struct sNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value239 = (void*)0;
memset(&result_169, 0, sizeof(struct sNode*));
    # 594 "07var.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 594, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value230=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value229=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 594, "sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=_inf_value1)));
    come_call_finalizer2(sStoreNode_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreNode_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 598 "07var.c"
    __result128__ = __result_obj__ = result_169;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_169) { result_169 = come_decrement_ref_count2(result_169, ((struct sNode*)result_169)->finalize, ((struct sNode*)result_169)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result128__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_169) { result_169 = come_decrement_ref_count2(result_169, ((struct sNode*)result_169)->finalize, ((struct sNode*)result_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value240;
char* __dec_obj84;
void* right_value241;
char* __dec_obj85;
struct sLoadNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    # 610 "07var.c"
    __dec_obj84=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(name))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 612 "07var.c"
    self->sline=info->sline;
    # 613 "07var.c"
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 615 "07var.c"
    __result129__ = __result_obj__ = self;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result129__;
    come_call_finalizer2(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    # 620 "07var.c"
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sLoadNode_kind(){
void* __result_obj__;
void* right_value242;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    # 625 "07var.c"
    __result131__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sLoadNode")));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_170;
_Bool _if_conditional250;
struct sVar* parent_var_171;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value243;
struct CVALUE* come_value_172;
struct sType* type_173;
void* right_value244;
char* __dec_obj86;
void* right_value245;
struct sType* __dec_obj87;
_Bool __result132__;
struct sVar* var__174;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct sFun* fun_178;
_Bool _if_conditional274;
void* right_value246;
struct CVALUE* come_value_179;
void* right_value247;
char* __dec_obj88;
struct sType* __dec_obj89;
_Bool __result137__;
_Bool __result138__;
void* right_value248;
struct CVALUE* come_value_180;
void* right_value249;
char* __dec_obj90;
void* right_value250;
struct sType* __dec_obj91;
_Bool _if_conditional275;
void* right_value251;
struct sType* __dec_obj92;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_170, 0, sizeof(struct sClass*));
memset(&parent_var_171, 0, sizeof(struct sVar*));
right_value243 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
memset(&type_173, 0, sizeof(struct sType*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&var__174, 0, sizeof(struct sVar*));
memset(&fun_178, 0, sizeof(struct sFun*));
right_value246 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 630 "07var.c"
    current_stack_frame_struct_170=info->current_stack_frame_struct;
    # 655 "07var.c"
    # 632 "07var.c"
    if(_if_conditional250=current_stack_frame_struct_170&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional250) {
        # 633 "07var.c"
        parent_var_171=get_variable_from_table(info->lv_table->mParent,self->name);
        # 653 "07var.c"
        # 635 "07var.c"
        if(_if_conditional251=parent_var_171!=((void*)0),        _if_conditional251) {
            # 652 "07var.c"
            # 636 "07var.c"
            if(_if_conditional252=string_operator_not_equals(parent_var_171->mFunName,info->come_fun->mName),            _if_conditional252) {
                # 637 "07var.c"
                come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 637, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 639 "07var.c"
                type_173=parent_var_171->mType;
                # 641 "07var.c"
                __dec_obj86=come_value_172->c_value;
                come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("(*(parent->%s))",parent_var_171->mCValueName))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 643 "07var.c"
                __dec_obj87=come_value_172->type;
                come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(type_173))));
                come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 644 "07var.c"
                come_value_172->var=((void*)0);
                # 646 "07var.c"
                add_come_last_code(info,"%s;\n",come_value_172->c_value);
                # 648 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
                # 650 "07var.c"
                __result132__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result132__;
                come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 655 "07var.c"
    var__174=get_variable_from_table(info->lv_table,self->name);
    # 681 "07var.c"
    # 657 "07var.c"
    if(_if_conditional253=var__174==((void*)0),    _if_conditional253) {
        # 658 "07var.c"
        var__174=get_variable_from_table(info->gv_table,self->name);
        # 679 "07var.c"
        # 660 "07var.c"
        if(_if_conditional254=var__174==((void*)0),        _if_conditional254) {
            # 661 "07var.c"
            fun_178=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            # 678 "07var.c"
            # 663 "07var.c"
            if(fun_178) {
                # 664 "07var.c"
                come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value246=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 664, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 666 "07var.c"
                __dec_obj88=come_value_179->c_value;
                come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s",fun_178->mName))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 667 "07var.c"
                __dec_obj89=come_value_179->type;
                come_value_179->type=(struct sType*)come_increment_ref_count(fun_178->mLambdaType);
                come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 668 "07var.c"
                come_value_179->var=((void*)0);
                # 670 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
                # 672 "07var.c"
                __result137__ = (_Bool)1;
                come_call_finalizer2(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result137__;
                come_call_finalizer2(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 675 "07var.c"
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                # 676 "07var.c"
                __result138__ = (_Bool)1;
                return __result138__;
            }
        }
    }
    # 681 "07var.c"
    come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 681, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 682 "07var.c"
    __dec_obj90=come_value_180->c_value;
    come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s",var__174->mCValueName))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 683 "07var.c"
    __dec_obj91=come_value_180->type;
    come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(var__174->mType))));
    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 684 "07var.c"
    come_value_180->var=var__174;
    # 686 "07var.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    # 696 "07var.c"
    # 688 "07var.c"
    if(_if_conditional275=list$1sNodeph_length(come_value_180->type->mArrayNum)==1,    _if_conditional275) {
        # 689 "07var.c"
        __dec_obj92=come_value_180->type->mOriginalLoadVarType->v1;
        come_value_180->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(come_value_180->type))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 691 "07var.c"
        list$1sNodeph_reset(come_value_180->type->mArrayNum);
        # 692 "07var.c"
        come_value_180->type->mPointerNum++;
        # 693 "07var.c"
        come_value_180->type->mOriginalTypeNamePointerNum=come_value_180->type->mPointerNum;
    }
    # 696 "07var.c"
    __result140__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer2(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_175;
unsigned int hash_176;
unsigned int it_177;
_Bool _while_condtional17;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sFun* __result133__;
_Bool _if_conditional272;
_Bool _if_conditional273;
struct sFun* __result134__;
struct sFun* __result135__;
struct sFun* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_175, 0, sizeof(struct sFun*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_175,0,sizeof(struct sFun*));
                # 1547 "./neo-c.h"
                hash_176=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_177=hash_176;
                # 1572 "./neo-c.h"
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional255=self->item_existance[it_177],                    _if_conditional255) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional256=string_equals(self->keys[it_177],key),                        _if_conditional256) {
                            # 1555 "./neo-c.h"
                            __result133__ = __result_obj__ = self->items[it_177];
                            come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result133__;
                        }
                        # 1558 "./neo-c.h"
                        it_177++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional272=it_177>=self->size,                        _if_conditional272) {
                            # 1561 "./neo-c.h"
                            it_177=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional273=it_177==hash_176,                            _if_conditional273) {
                                # 1564 "./neo-c.h"
                                __result134__ = __result_obj__ = default_value_175;
                                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result134__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result135__ = __result_obj__ = default_value_175;
                        come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result135__;
                    }
                }
                # 1572 "./neo-c.h"
                __result136__ = __result_obj__ = default_value_175;
                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result136__;
                come_call_finalizer2(sFun_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional257=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional257) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional258=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional258) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional259=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional259) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional260=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional260) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional261=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional261) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional262=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional262) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional263=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional263) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional266=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional266) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional267=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional267) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional268=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional268) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional269=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional269) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional270=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional270) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional271=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional271) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional264;
_Bool _if_conditional265;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional264=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional264) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional265=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional265) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_181;
_Bool _while_condtional18;
struct list_item$1sNodeph* prev_it_182;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_181, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_182, 0, sizeof(struct list_item$1sNodeph*));
            # 433 "./neo-c.h"
            it_181=self->head;
            # 440 "./neo-c.h"
            while(_while_condtional18=it_181!=((void*)0),            _while_condtional18) {
                # 435 "./neo-c.h"
                prev_it_182=it_181;
                # 436 "./neo-c.h"
                it_181=it_181->next;
                # 437 "./neo-c.h"
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./neo-c.h"
            self->head=((void*)0);
            # 441 "./neo-c.h"
            self->tail=((void*)0);
            # 443 "./neo-c.h"
            self->len=0;
            # 445 "./neo-c.h"
            __result139__ = __result_obj__ = self;
            return __result139__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    # 701 "07var.c"
    __result141__ = self->sline;
    return __result141__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value252;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
    # 706 "07var.c"
    __result142__ = __result_obj__ = ((char*)(right_value252=__builtin_string(self->sname)));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
void* right_value253;
void* right_value254;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value258;
struct sNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value258 = (void*)0;
    # 711 "07var.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 711, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value254=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value253=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 711, "sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result145__ = __result_obj__ = ((struct sNode*)(right_value258=_inf_value2));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sLoadNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sLoadNode_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result145__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value259;
char* __dec_obj95;
void* right_value260;
char* __dec_obj96;
struct sFunLoadNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    # 723 "07var.c"
    __dec_obj95=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 725 "07var.c"
    self->sline=info->sline;
    # 726 "07var.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 728 "07var.c"
    __result146__ = __result_obj__ = self;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional282;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunLoadNode_finalize"
        # 0 "sFunLoadNode_finalize"
        if(_if_conditional282=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional282) {
            # 0 "sFunLoadNode_finalize"
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunLoadNode_finalize"
        # 1 "sFunLoadNode_finalize"
        if(_if_conditional283=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional283) {
            # 1 "sFunLoadNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 733 "07var.c"
    __result147__ = (_Bool)0;
    return __result147__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
void* right_value261;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
    # 738 "07var.c"
    __result148__ = __result_obj__ = ((char*)(right_value261=__builtin_string("sFunLoadNode")));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_184;
_Bool _if_conditional284;
_Bool __result149__;
void* right_value262;
struct CVALUE* come_value_185;
void* right_value263;
char* __dec_obj97;
struct sType* __dec_obj98;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_184, 0, sizeof(struct sFun*));
right_value262 = (void*)0;
memset(&come_value_185, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
    # 743 "07var.c"
    fun_184=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    # 759 "07var.c"
    # 745 "07var.c"
    if(_if_conditional284=fun_184==((void*)0),    _if_conditional284) {
        # 746 "07var.c"
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        # 747 "07var.c"
        __result149__ = (_Bool)0;
        return __result149__;
    }
    else {
        # 750 "07var.c"
        come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 750, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 752 "07var.c"
        __dec_obj97=come_value_185->c_value;
        come_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s",fun_184->mName))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 753 "07var.c"
        __dec_obj98=come_value_185->type;
        come_value_185->type=(struct sType*)come_increment_ref_count(fun_184->mLambdaType);
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 754 "07var.c"
        come_value_185->var=((void*)0);
        # 756 "07var.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
        come_call_finalizer2(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 759 "07var.c"
    __result150__ = (_Bool)1;
    return __result150__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 764 "07var.c"
    __result151__ = self->sline;
    return __result151__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value264;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    # 769 "07var.c"
    __result152__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result152__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value265;
struct sVar* self_186;
void* right_value266;
char* __dec_obj99;
void* right_value267;
struct sType* __dec_obj100;
_Bool _if_conditional285;
void* right_value268;
char* __dec_obj101;
static int n_187=0;
void* right_value269;
char* __dec_obj102;
_Bool _if_conditional286;
void* right_value270;
char* __dec_obj103;
char* __dec_obj104;
void* right_value277;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
memset(&self_186, 0, sizeof(struct sVar*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value277 = (void*)0;
    # 775 "07var.c"
    self_186=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value265=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 775, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 777 "07var.c"
    __dec_obj99=self_186->mName;
    self_186->mName=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 778 "07var.c"
    __dec_obj100=self_186->mType;
    self_186->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 788 "07var.c"
    # 780 "07var.c"
    if(type->mFunctionParam) {
        # 781 "07var.c"
        __dec_obj101=self_186->mCValueName;
        self_186->mCValueName=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(name))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 784 "07var.c"
        # 785 "07var.c"
        __dec_obj102=self_186->mCValueName;
        self_186->mCValueName=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s_%d",name,n_187++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 788 "07var.c"
    self_186->mBlockLevel=info->block_level;
    # 789 "07var.c"
    self_186->mAllocaValue=(_Bool)0;
    # 790 "07var.c"
    self_186->mFunctionParam=(_Bool)0;
    # 791 "07var.c"
    self_186->mNoFree=(_Bool)0;
    # 799 "07var.c"
    # 792 "07var.c"
    if(info->come_fun) {
        # 793 "07var.c"
        __dec_obj103=self_186->mFunName;
        self_186->mFunName=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(info->come_fun->mName))));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 796 "07var.c"
        __dec_obj104=self_186->mFunName;
        self_186->mFunName=((void*)0);
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 799 "07var.c"
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_186));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional287;
unsigned int hash_205;
unsigned int it_206;
_Bool _while_condtional21;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool same_key_exist_223;
char* it2_226;
_Bool _if_conditional330;
_Bool _if_conditional331;
struct map$2charphsVarph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_205, 0, sizeof(unsigned int));
memset(&it_206, 0, sizeof(unsigned int));
memset(&same_key_exist_223, 0, sizeof(_Bool));
memset(&it2_226, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional287=self->len*10>=self->size,        _if_conditional287) {
            # 1391 "./neo-c.h"
            map$2charphsVarph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_205=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_206=hash_205;
        # 1452 "./neo-c.h"
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional299=self->item_existance[it_206],            _if_conditional299) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional300=string_equals(self->keys[it_206],key),                _if_conditional300) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional301=1,                    _if_conditional301) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_206]);
                        # 1403 "./neo-c.h"
                        self->keys[it_206] = come_decrement_ref_count2(self->keys[it_206], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_206]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_206]);
                        # 1408 "./neo-c.h"
                        self->keys[it_206]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional321=1,                    _if_conditional321) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sVar_finalize,self->items[it_206], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_206]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_206]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_206++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional322=it_206>=self->size,                _if_conditional322) {
                    # 1423 "./neo-c.h"
                    it_206=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional323=it_206==hash_205,                    _if_conditional323) {
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
                self->item_existance[it_206]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional324=1,                _if_conditional324) {
                    # 1434 "./neo-c.h"
                    self->keys[it_206]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_206]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional325=1,                _if_conditional325) {
                    # 1440 "./neo-c.h"
                    self->items[it_206]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_206]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_223=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_226=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_226=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional330=string_equals(it2_226,key),            _if_conditional330) {
                # 1456 "./neo-c.h"
                same_key_exist_223=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional331=!same_key_exist_223,        _if_conditional331) {
            # 1461 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1464 "./neo-c.h"
        __result176__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result176__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_188;
void* right_value271;
char** keys_189;
void* right_value272;
struct sVar** items_190;
void* right_value273;
_Bool* item_existance_191;
int len_192;
char* it_195;
struct sVar* default_value_198;
struct sVar* it2_201;
unsigned int hash_202;
int n_203;
_Bool _while_condtional20;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sVar* default_value_204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_188, 0, sizeof(int));
right_value271 = (void*)0;
memset(&keys_189, 0, sizeof(char**));
right_value272 = (void*)0;
memset(&items_190, 0, sizeof(struct sVar**));
right_value273 = (void*)0;
memset(&item_existance_191, 0, sizeof(_Bool*));
memset(&len_192, 0, sizeof(int));
memset(&it_195, 0, sizeof(char*));
memset(&default_value_198, 0, sizeof(struct sVar*));
memset(&it2_201, 0, sizeof(struct sVar*));
memset(&hash_202, 0, sizeof(unsigned int));
memset(&n_203, 0, sizeof(int));
memset(&default_value_204, 0, sizeof(struct sVar*));
                # 1337 "./neo-c.h"
                size_188=self->size*10;
                # 1338 "./neo-c.h"
                keys_189=(char**)come_increment_ref_count(((char**)(right_value271=(char**)come_calloc(1, sizeof(char*)*(1*(size_188)), "./neo-c.h", 1338, "char*%"))));
                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_190=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value272=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_188)), "./neo-c.h", 1339, "sVar*%"))));
                come_call_finalizer2(sVar_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_191=(_Bool*)come_increment_ref_count(((_Bool*)(right_value273=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_188)), "./neo-c.h", 1340, "bool"))));
                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_192=0;
                # 1377 "./neo-c.h"
                for(                it_195=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_195=map$2charphsVarph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_198,0,sizeof(struct sVar*));
                    # 1347 "./neo-c.h"
                    it2_201=map$2charphsVarph_at(self,it_195,default_value_198);
                    # 1348 "./neo-c.h"
                    hash_202=string_get_hash_key(it_195)%size_188;
                    # 1349 "./neo-c.h"
                    n_203=hash_202;
                    # 1375 "./neo-c.h"
                    while(_while_condtional20=(_Bool)1,                    _while_condtional20) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional296=item_existance_191[n_203],                        _if_conditional296) {
                            # 1354 "./neo-c.h"
                            n_203++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional297=n_203>=size_188,                            _if_conditional297) {
                                # 1357 "./neo-c.h"
                                n_203=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional298=n_203==hash_202,                                _if_conditional298) {
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
                            item_existance_191[n_203]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_189[n_203]=it_195;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_190[n_203]=map$2charphsVarph_at(self,it_195,default_value_204);
                            # 1371 "./neo-c.h"
                            len_192++;
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
                self->keys=keys_189;
                # 1382 "./neo-c.h"
                self->items=items_190;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_191;
                # 1385 "./neo-c.h"
                self->size=size_188;
                # 1386 "./neo-c.h"
                self->len=len_192;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional288;
char* result_193;
char* __result153__;
_Bool _if_conditional289;
char* __result154__;
char* result_194;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional288=self==((void*)0),                    _if_conditional288) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_193,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result153__ = __result_obj__ = result_193;
                        return __result153__;
                    }
                    # 1304 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./neo-c.h"
                    # 1306 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1307 "./neo-c.h"
                        __result154__ = __result_obj__ = self->key_list->it->item;
                        return __result154__;
                    }
                    # 1310 "./neo-c.h"
                    # 1311 "./neo-c.h"
                    memset(&result_194,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result155__ = __result_obj__ = result_194;
                    return __result155__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./neo-c.h"
                    __result156__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result156__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional290;
char* result_196;
char* __result157__;
_Bool _if_conditional291;
char* __result158__;
char* result_197;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional290=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional290) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_196,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result157__ = __result_obj__ = result_196;
                        return __result157__;
                    }
                    # 1321 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./neo-c.h"
                    # 1323 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1324 "./neo-c.h"
                        __result158__ = __result_obj__ = self->key_list->it->item;
                        return __result158__;
                    }
                    # 1327 "./neo-c.h"
                    # 1328 "./neo-c.h"
                    memset(&result_197,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result159__ = __result_obj__ = result_197;
                    return __result159__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_199;
unsigned int it_200;
_Bool _while_condtional19;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct sVar* __result160__;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sVar* __result161__;
struct sVar* __result162__;
struct sVar* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_199, 0, sizeof(unsigned int));
memset(&it_200, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_199=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_200=hash_199;
                        # 1251 "./neo-c.h"
                        while(_while_condtional19=(_Bool)1,                        _while_condtional19) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional292=self->item_existance[it_200],                            _if_conditional292) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional293=string_equals(self->keys[it_200],key),                                _if_conditional293) {
                                    # 1234 "./neo-c.h"
                                    __result160__ = __result_obj__ = self->items[it_200];
                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result160__;
                                }
                                # 1237 "./neo-c.h"
                                it_200++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional294=it_200>=self->size,                                _if_conditional294) {
                                    # 1240 "./neo-c.h"
                                    it_200=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional295=it_200==hash_199,                                    _if_conditional295) {
                                        # 1243 "./neo-c.h"
                                        __result161__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result161__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./neo-c.h"
                                __result162__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result162__;
                            }
                        }
                        # 1251 "./neo-c.h"
                        __result163__ = __result_obj__ = default_value;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result163__;
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_207;
struct list_item$1charp* it_208;
_Bool _while_condtional22;
_Bool _if_conditional302;
struct list$1charp* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_207, 0, sizeof(int));
memset(&it_208, 0, sizeof(struct list_item$1charp*));
                            # 448 "./neo-c.h"
                            it2_207=0;
                            # 449 "./neo-c.h"
                            it_208=self->head;
                            # 460 "./neo-c.h"
                            while(_while_condtional22=it_208!=((void*)0),                            _while_condtional22) {
                                # 455 "./neo-c.h"
                                # 451 "./neo-c.h"
                                if(_if_conditional302=string_equals(it_208->item,item),                                _if_conditional302) {
                                    # 452 "./neo-c.h"
                                    list$1charp_delete(self,it2_207,it2_207+1);
                                    # 453 "./neo-c.h"
                                    break;
                                }
                                # 455 "./neo-c.h"
                                it2_207++;
                                # 457 "./neo-c.h"
                                it_208=it_208->next;
                            }
                            # 460 "./neo-c.h"
                            __result167__ = __result_obj__ = self;
                            return __result167__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
int tmp_209;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list$1charp* __result164__;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1charp* it_212;
int i_213;
_Bool _while_condtional24;
_Bool _if_conditional311;
struct list_item$1charp* prev_it_214;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1charp* it_215;
int i_216;
_Bool _while_condtional25;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list_item$1charp* prev_it_217;
struct list_item$1charp* it_218;
struct list_item$1charp* head_prev_it_219;
struct list_item$1charp* tail_it_220;
int i_221;
_Bool _while_condtional26;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list_item$1charp* prev_it_222;
_Bool _if_conditional319;
_Bool _if_conditional320;
struct list$1charp* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_209, 0, sizeof(int));
memset(&it_212, 0, sizeof(struct list_item$1charp*));
memset(&i_213, 0, sizeof(int));
memset(&prev_it_214, 0, sizeof(struct list_item$1charp*));
memset(&it_215, 0, sizeof(struct list_item$1charp*));
memset(&i_216, 0, sizeof(int));
memset(&prev_it_217, 0, sizeof(struct list_item$1charp*));
memset(&it_218, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_219, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_220, 0, sizeof(struct list_item$1charp*));
memset(&i_221, 0, sizeof(int));
memset(&prev_it_222, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional303=head<0,                                        _if_conditional303) {
                                            # 465 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 471 "./neo-c.h"
                                        # 467 "./neo-c.h"
                                        if(_if_conditional304=tail<0,                                        _if_conditional304) {
                                            # 468 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./neo-c.h"
                                        # 471 "./neo-c.h"
                                        if(_if_conditional305=head>tail,                                        _if_conditional305) {
                                            # 472 "./neo-c.h"
                                            tmp_209=tail;
                                            # 473 "./neo-c.h"
                                            tail=head;
                                            # 474 "./neo-c.h"
                                            head=tmp_209;
                                        }
                                        # 481 "./neo-c.h"
                                        # 477 "./neo-c.h"
                                        if(_if_conditional306=head<0,                                        _if_conditional306) {
                                            # 478 "./neo-c.h"
                                            head=0;
                                        }
                                        # 485 "./neo-c.h"
                                        # 481 "./neo-c.h"
                                        if(_if_conditional307=tail>self->len,                                        _if_conditional307) {
                                            # 482 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 489 "./neo-c.h"
                                        # 485 "./neo-c.h"
                                        if(_if_conditional308=head==tail,                                        _if_conditional308) {
                                            # 486 "./neo-c.h"
                                            __result164__ = __result_obj__ = self;
                                            return __result164__;
                                        }
                                        # 584 "./neo-c.h"
                                        # 489 "./neo-c.h"
                                        if(_if_conditional309=head==0&&tail==self->len,                                        _if_conditional309) {
                                            # 491 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./neo-c.h"
                                            # 493 "./neo-c.h"
                                            if(_if_conditional310=head==0,                                            _if_conditional310) {
                                                # 494 "./neo-c.h"
                                                it_212=self->head;
                                                # 495 "./neo-c.h"
                                                i_213=0;
                                                # 517 "./neo-c.h"
                                                while(_while_condtional24=it_212!=((void*)0),                                                _while_condtional24) {
                                                    # 516 "./neo-c.h"
                                                    # 497 "./neo-c.h"
                                                    if(_if_conditional311=i_213<tail,                                                    _if_conditional311) {
                                                        # 498 "./neo-c.h"
                                                        prev_it_214=it_212;
                                                        # 500 "./neo-c.h"
                                                        it_212=it_212->next;
                                                        # 501 "./neo-c.h"
                                                        i_213++;
                                                        # 503 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./neo-c.h"
                                                        # 507 "./neo-c.h"
                                                        if(_if_conditional312=i_213==tail,                                                        _if_conditional312) {
                                                            # 508 "./neo-c.h"
                                                            self->head=it_212;
                                                            # 509 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./neo-c.h"
                                                            it_212=it_212->next;
                                                            # 514 "./neo-c.h"
                                                            i_213++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 518 "./neo-c.h"
                                                if(_if_conditional313=tail==self->len,                                                _if_conditional313) {
                                                    # 519 "./neo-c.h"
                                                    it_215=self->head;
                                                    # 520 "./neo-c.h"
                                                    i_216=0;
                                                    # 542 "./neo-c.h"
                                                    while(_while_condtional25=it_215!=((void*)0),                                                    _while_condtional25) {
                                                        # 527 "./neo-c.h"
                                                        # 522 "./neo-c.h"
                                                        if(_if_conditional314=i_216==head,                                                        _if_conditional314) {
                                                            # 523 "./neo-c.h"
                                                            self->tail=it_215->prev;
                                                            # 524 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./neo-c.h"
                                                        # 527 "./neo-c.h"
                                                        if(_if_conditional315=i_216>=head,                                                        _if_conditional315) {
                                                            # 528 "./neo-c.h"
                                                            prev_it_217=it_215;
                                                            # 530 "./neo-c.h"
                                                            it_215=it_215->next;
                                                            # 531 "./neo-c.h"
                                                            i_216++;
                                                            # 533 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./neo-c.h"
                                                            it_215=it_215->next;
                                                            # 539 "./neo-c.h"
                                                            i_216++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./neo-c.h"
                                                    it_218=self->head;
                                                    # 546 "./neo-c.h"
                                                    head_prev_it_219=((void*)0);
                                                    # 547 "./neo-c.h"
                                                    tail_it_220=((void*)0);
                                                    # 550 "./neo-c.h"
                                                    i_221=0;
                                                    # 576 "./neo-c.h"
                                                    while(_while_condtional26=it_218!=((void*)0),                                                    _while_condtional26) {
                                                        # 555 "./neo-c.h"
                                                        # 552 "./neo-c.h"
                                                        if(_if_conditional316=i_221==head,                                                        _if_conditional316) {
                                                            # 553 "./neo-c.h"
                                                            head_prev_it_219=it_218->prev;
                                                        }
                                                        # 559 "./neo-c.h"
                                                        # 555 "./neo-c.h"
                                                        if(_if_conditional317=i_221==tail,                                                        _if_conditional317) {
                                                            # 556 "./neo-c.h"
                                                            tail_it_220=it_218;
                                                        }
                                                        # 574 "./neo-c.h"
                                                        # 559 "./neo-c.h"
                                                        if(_if_conditional318=i_221>=head&&i_221<tail,                                                        _if_conditional318) {
                                                            # 561 "./neo-c.h"
                                                            prev_it_222=it_218;
                                                            # 563 "./neo-c.h"
                                                            it_218=it_218->next;
                                                            # 564 "./neo-c.h"
                                                            i_221++;
                                                            # 566 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./neo-c.h"
                                                            it_218=it_218->next;
                                                            # 572 "./neo-c.h"
                                                            i_221++;
                                                        }
                                                    }
                                                    # 579 "./neo-c.h"
                                                    # 576 "./neo-c.h"
                                                    if(_if_conditional319=head_prev_it_219!=((void*)0),                                                    _if_conditional319) {
                                                        # 577 "./neo-c.h"
                                                        head_prev_it_219->next=tail_it_220;
                                                    }
                                                    # 582 "./neo-c.h"
                                                    # 579 "./neo-c.h"
                                                    if(_if_conditional320=tail_it_220!=((void*)0),                                                    _if_conditional320) {
                                                        # 580 "./neo-c.h"
                                                        tail_it_220->prev=head_prev_it_219;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./neo-c.h"
                                        __result166__ = __result_obj__ = self;
                                        return __result166__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_210;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_211;
struct list$1charp* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_210, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_211, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./neo-c.h"
                                                it_210=self->head;
                                                # 440 "./neo-c.h"
                                                while(_while_condtional23=it_210!=((void*)0),                                                _while_condtional23) {
                                                    # 435 "./neo-c.h"
                                                    prev_it_211=it_210;
                                                    # 436 "./neo-c.h"
                                                    it_210=it_210->next;
                                                    # 437 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 441 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 443 "./neo-c.h"
                                                self->len=0;
                                                # 445 "./neo-c.h"
                                                __result165__ = __result_obj__ = self;
                                                return __result165__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional326;
char* result_224;
char* __result168__;
_Bool _if_conditional327;
char* __result169__;
char* result_225;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_224, 0, sizeof(char*));
memset(&result_225, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional326=self==((void*)0),            _if_conditional326) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_224,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result168__ = __result_obj__ = result_224;
                return __result168__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result169__ = __result_obj__ = self->it->item;
                return __result169__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_225,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result170__ = __result_obj__ = result_225;
            return __result170__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result171__ = self==((void*)0)||self->it==((void*)0);
            return __result171__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional328;
char* result_227;
char* __result172__;
_Bool _if_conditional329;
char* __result173__;
char* result_228;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(char*));
memset(&result_228, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional328=self==((void*)0)||self->it==((void*)0),            _if_conditional328) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_227,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result172__ = __result_obj__ = result_227;
                return __result172__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result173__ = __result_obj__ = self->it->item;
                return __result173__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_228,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result174__ = __result_obj__ = result_228;
            return __result174__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional332;
void* right_value274;
struct list_item$1charp* litem_229;
_Bool _if_conditional333;
void* right_value275;
struct list_item$1charp* litem_230;
void* right_value276;
struct list_item$1charp* litem_231;
struct list$1charp* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&litem_229, 0, sizeof(struct list_item$1charp*));
right_value275 = (void*)0;
memset(&litem_230, 0, sizeof(struct list_item$1charp*));
right_value276 = (void*)0;
memset(&litem_231, 0, sizeof(struct list_item$1charp*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional332=self->len==0,                _if_conditional332) {
                    # 226 "./neo-c.h"
                    litem_229=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value274=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_229->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_229->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_229->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_229;
                    # 233 "./neo-c.h"
                    self->head=litem_229;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional333=self->len==1,                    _if_conditional333) {
                        # 236 "./neo-c.h"
                        litem_230=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value275=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_230->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_230->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_230->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_230;
                        # 243 "./neo-c.h"
                        self->head->next=litem_230;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_231=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value276=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_231->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_231->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_231->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_231;
                        # 253 "./neo-c.h"
                        self->tail=litem_231;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result175__ = __result_obj__ = self;
                return __result175__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sVar* self_232;
void* right_value279;
char* __dec_obj105;
void* right_value280;
struct sType* __dec_obj106;
void* right_value281;
char* __dec_obj107;
void* right_value282;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&self_232, 0, sizeof(struct sVar*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
    # 804 "07var.c"
    self_232=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value278=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 804, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 806 "07var.c"
    __dec_obj105=self_232->mName;
    self_232->mName=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(name))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 807 "07var.c"
    __dec_obj106=self_232->mType;
    self_232->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 809 "07var.c"
    self_232->mGlobal=(_Bool)1;
    # 811 "07var.c"
    __dec_obj107=self_232->mCValueName;
    self_232->mCValueName=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string(name))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 813 "07var.c"
    self_232->mBlockLevel=info->block_level;
    # 814 "07var.c"
    self_232->mAllocaValue=(_Bool)0;
    # 815 "07var.c"
    self_232->mFunctionParam=(_Bool)0;
    # 816 "07var.c"
    self_232->mNoFree=(_Bool)0;
    # 818 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_232));
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value283;
struct sVar* self_233;
void* right_value284;
char* __dec_obj108;
void* right_value285;
struct sType* __dec_obj109;
void* right_value286;
char* __dec_obj110;
void* right_value287;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&self_233, 0, sizeof(struct sVar*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
    # 823 "07var.c"
    self_233=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value283=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 823, "sVar"))));
    come_call_finalizer2(sVar_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 825 "07var.c"
    __dec_obj108=self_233->mName;
    self_233->mName=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(name))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 826 "07var.c"
    __dec_obj109=self_233->mType;
    self_233->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 828 "07var.c"
    self_233->mGlobal=(_Bool)1;
    # 830 "07var.c"
    __dec_obj110=self_233->mCValueName;
    self_233->mCValueName=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(c_value))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 832 "07var.c"
    self_233->mBlockLevel=info->block_level;
    # 833 "07var.c"
    self_233->mAllocaValue=(_Bool)0;
    # 834 "07var.c"
    self_233->mFunctionParam=(_Bool)0;
    # 835 "07var.c"
    self_233->mNoFree=(_Bool)0;
    # 837 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_233));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sVar_finalize,self_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_234;
_Bool multiple_declare_235;
_Bool _if_conditional334;
char* p_236;
int sline_237;
void* right_value288;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_238;
char* name_239;
_Bool err_240;
_Bool _if_conditional337;
_Bool multiple_declare2_241;
_Bool _if_conditional338;
char* p_242;
int sline_243;
void* right_value289;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_244;
char* name_245;
_Bool err_246;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool no_output_err_247;
_Bool no_comma_248;
_Bool no_output_come_code_249;
void* right_value290;
struct sNode* exp_250;
_Bool _if_conditional341;
struct sFun* fun_251;
_Bool _if_conditional342;
void* right_value291;
char* buf2_252;
struct list$1charph* multiple_assign_253;
_Bool _if_conditional343;
void* right_value292;
void* right_value293;
struct list$1charph* __dec_obj111;
void* right_value297;
_Bool _while_condtional27;
void* right_value298;
char* buf3_257;
void* right_value299;
_Bool _if_conditional346;
_Bool no_comma_258;
void* right_value300;
struct sNode* right_value_259;
void* right_value301;
struct sNode* __dec_obj115;
void* right_value302;
void* right_value303;
void* right_value304;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value313;
struct sNode* result_261;
struct sNode* __result180__;
_Bool _if_conditional364;
void* right_value314;
void* right_value315;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_262;
void* right_value316;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_263;
char* name_264;
_Bool err_265;
void* right_value317;
struct tuple2$2sTypephcharph* variable_name_266;
void* right_value318;
void* right_value319;
struct tuple3$3sTypephcharphsNodeph* variable_name2_267;
_Bool _while_condtional28;
void* right_value323;
struct tuple2$2sTypephcharph* variable_name_271;
void* right_value324;
void* right_value325;
struct tuple3$3sTypephcharphsNodeph* variable_name2_272;
void* right_value326;
void* right_value327;
void* right_value328;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value337;
struct sNode* result_274;
struct sNode* __result185__;
_Bool _if_conditional388;
void* right_value338;
void* right_value339;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_275;
void* right_value340;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_276;
char* name_277;
_Bool err_278;
void* right_value341;
struct tuple2$2sTypephcharph* variable_name_279;
_Bool _if_conditional389;
_Bool no_comma_280;
void* right_value342;
struct sNode* exp_281;
void* right_value343;
void* right_value344;
struct tuple3$3sTypephcharphsNodeph* variable_name2_282;
_Bool _while_condtional29;
void* right_value345;
struct tuple2$2sTypephcharph* variable_name_283;
_Bool _if_conditional390;
_Bool no_comma_284;
void* right_value346;
struct sNode* exp_285;
void* right_value347;
void* right_value348;
struct tuple3$3sTypephcharphsNodeph* variable_name2_286;
void* right_value349;
void* right_value350;
void* right_value351;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value360;
struct sNode* result_288;
struct sNode* __result189__;
_Bool _if_conditional408;
void* right_value361;
struct sNode* right_value_289;
void* right_value362;
struct sNode* __dec_obj145;
void* right_value363;
void* right_value364;
void* right_value365;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value374;
struct sNode* result_291;
struct sNode* __result192__;
_Bool _if_conditional426;
void* right_value375;
void* right_value376;
void* right_value377;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value381;
struct sNode* node_293;
void* right_value382;
struct sNode* __dec_obj155;
void* right_value383;
struct sNode* __dec_obj156;
struct sNode* __result195__;
void* right_value384;
char* word_294;
_Bool _if_conditional433;
void* right_value385;
char* __dec_obj157;
_Bool is_type_name_flag_295;
_Bool _if_conditional434;
void* right_value386;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_296;
char* name_297;
_Bool err_298;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
void* right_value387;
void* right_value388;
struct buffer* buf2_299;
_Bool squort_300;
_Bool dquort_301;
int nest_302;
_Bool _while_condtional30;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value389;
char* array_initializer_303;
void* right_value390;
void* right_value391;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value400;
struct sNode* result_305;
struct sNode* __result198__;
void* right_value401;
struct sNode* right_value_306;
void* right_value402;
void* right_value403;
struct list$1sNodeph* right_values_307;
_Bool _while_condtional31;
char* anonymous_var_nameX2105_308;
void* right_value404;
struct sNode* __dec_obj165;
void* right_value405;
void* right_value406;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value415;
struct sNode* result_310;
struct sNode* __result201__;
void* right_value416;
void* right_value417;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value426;
struct sNode* result_312;
struct sNode* __result204__;
void* right_value427;
struct sNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_234, 0, sizeof(_Bool));
memset(&multiple_declare_235, 0, sizeof(_Bool));
memset(&p_236, 0, sizeof(char*));
memset(&sline_237, 0, sizeof(int));
right_value288 = (void*)0;
memset(&type_238, 0, sizeof(struct sType*));
memset(&name_239, 0, sizeof(char*));
memset(&err_240, 0, sizeof(_Bool));
memset(&type_238, 0, sizeof(struct sType*));
memset(&name_239, 0, sizeof(char*));
memset(&err_240, 0, sizeof(_Bool));
memset(&multiple_declare2_241, 0, sizeof(_Bool));
memset(&p_242, 0, sizeof(char*));
memset(&sline_243, 0, sizeof(int));
right_value289 = (void*)0;
memset(&type_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&type_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&no_output_err_247, 0, sizeof(_Bool));
memset(&no_comma_248, 0, sizeof(_Bool));
memset(&no_output_come_code_249, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&exp_250, 0, sizeof(struct sNode*));
memset(&fun_251, 0, sizeof(struct sFun*));
right_value291 = (void*)0;
memset(&buf2_252, 0, sizeof(char*));
memset(&multiple_assign_253, 0, sizeof(struct list$1charph*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&buf3_257, 0, sizeof(char*));
right_value299 = (void*)0;
memset(&no_comma_258, 0, sizeof(_Bool));
right_value300 = (void*)0;
memset(&right_value_259, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value313 = (void*)0;
memset(&result_261, 0, sizeof(struct sNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&multiple_declare_262, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value316 = (void*)0;
memset(&base_type_263, 0, sizeof(struct sType*));
memset(&name_264, 0, sizeof(char*));
memset(&err_265, 0, sizeof(_Bool));
memset(&base_type_263, 0, sizeof(struct sType*));
memset(&name_264, 0, sizeof(char*));
memset(&err_265, 0, sizeof(_Bool));
right_value317 = (void*)0;
memset(&variable_name_266, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&variable_name2_267, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value323 = (void*)0;
memset(&variable_name_271, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&variable_name2_272, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value337 = (void*)0;
memset(&result_274, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&multiple_declare_275, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value340 = (void*)0;
memset(&base_type_276, 0, sizeof(struct sType*));
memset(&name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
memset(&base_type_276, 0, sizeof(struct sType*));
memset(&name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&variable_name_279, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_280, 0, sizeof(_Bool));
right_value342 = (void*)0;
memset(&exp_281, 0, sizeof(struct sNode*));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&variable_name2_282, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value345 = (void*)0;
memset(&variable_name_283, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_284, 0, sizeof(_Bool));
right_value346 = (void*)0;
memset(&exp_285, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&variable_name2_286, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value360 = (void*)0;
memset(&result_288, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&right_value_289, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value374 = (void*)0;
memset(&result_291, 0, sizeof(struct sNode*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value381 = (void*)0;
memset(&node_293, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&word_294, 0, sizeof(char*));
right_value385 = (void*)0;
memset(&is_type_name_flag_295, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&type_296, 0, sizeof(struct sType*));
memset(&name_297, 0, sizeof(char*));
memset(&err_298, 0, sizeof(_Bool));
memset(&type_296, 0, sizeof(struct sType*));
memset(&name_297, 0, sizeof(char*));
memset(&err_298, 0, sizeof(_Bool));
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&buf2_299, 0, sizeof(struct buffer*));
memset(&squort_300, 0, sizeof(_Bool));
memset(&dquort_301, 0, sizeof(_Bool));
memset(&nest_302, 0, sizeof(int));
right_value389 = (void*)0;
memset(&array_initializer_303, 0, sizeof(char*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value400 = (void*)0;
memset(&result_305, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
memset(&right_value_306, 0, sizeof(struct sNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&right_values_307, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX2105_308, 0, sizeof(char*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value415 = (void*)0;
memset(&result_310, 0, sizeof(struct sNode*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value426 = (void*)0;
memset(&result_312, 0, sizeof(struct sNode*));
right_value427 = (void*)0;
    # 842 "07var.c"
    is_type_name_flag_234=is_type_name(buf,info);
    # 845 "07var.c"
    multiple_declare_235=(_Bool)0;
    # 864 "07var.c"
    # 846 "07var.c"
    if(is_type_name_flag_234) {
        # 848 "07var.c"
        p_236=info->p;
        # 849 "07var.c"
        sline_237=info->sline;
        # 851 "07var.c"
        info->p=head;
        # 852 "07var.c"
        info->sline=head_sline;
        # 854 "07var.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value288=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_238=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_239=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_240=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 860 "07var.c"
        # 856 "07var.c"
        if(_if_conditional337=err_240&&*info->p==44,        _if_conditional337) {
            # 857 "07var.c"
            multiple_declare_235=(_Bool)1;
        }
        # 860 "07var.c"
        info->p=p_236;
        # 861 "07var.c"
        info->sline=sline_237;
        come_call_finalizer2(sType_finalize,type_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_239 = come_decrement_ref_count2(name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 864 "07var.c"
    multiple_declare2_241=(_Bool)0;
    # 910 "07var.c"
    # 865 "07var.c"
    if(is_type_name_flag_234) {
        # 867 "07var.c"
        p_242=info->p;
        # 868 "07var.c"
        sline_243=info->sline;
        # 870 "07var.c"
        info->p=head;
        # 871 "07var.c"
        info->sline=head_sline;
        # 873 "07var.c"
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value289=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_244=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_245=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_246=multiple_assign_var3->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 875 "07var.c"
        parse_sharp_v5(info);
        # 906 "07var.c"
        # 877 "07var.c"
        if(_if_conditional339=err_246&&*info->p==61,        _if_conditional339) {
            # 878 "07var.c"
            info->p++;
            # 879 "07var.c"
            skip_spaces_and_lf(info);
            # 881 "07var.c"
            parse_sharp_v5(info);
            # 904 "07var.c"
            # 883 "07var.c"
            if(_if_conditional340=*info->p==123,            _if_conditional340) {
            }
            else {
                # 886 "07var.c"
                no_output_err_247=info->no_output_err;
                # 887 "07var.c"
                no_comma_248=info->no_comma;
                # 888 "07var.c"
                no_output_come_code_249=info->no_output_come_code;
                # 890 "07var.c"
                info->no_output_err=(_Bool)1;
                # 891 "07var.c"
                info->no_comma=(_Bool)1;
                # 892 "07var.c"
                info->no_output_come_code=(_Bool)1;
                # 894 "07var.c"
                exp_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
                if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 896 "07var.c"
                info->no_comma=no_comma_248;
                # 897 "07var.c"
                info->no_output_err=no_output_err_247;
                # 898 "07var.c"
                info->no_output_come_code=no_output_come_code_249;
                # 903 "07var.c"
                # 900 "07var.c"
                if(_if_conditional341=*info->p==44,                _if_conditional341) {
                    # 901 "07var.c"
                    multiple_declare2_241=(_Bool)1;
                }
                if(exp_250) { exp_250 = come_decrement_ref_count2(exp_250, ((struct sNode*)exp_250)->finalize, ((struct sNode*)exp_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        # 906 "07var.c"
        info->p=p_242;
        # 907 "07var.c"
        info->sline=sline_243;
        come_call_finalizer2(sType_finalize,type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_245 = come_decrement_ref_count2(name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 910 "07var.c"
    parse_sharp_v5(info);
    # 911 "07var.c"
    fun_251=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    # 1203 "07var.c"
    # 913 "07var.c"
    if(_if_conditional342=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional342) {
        # 914 "07var.c"
        parse_sharp_v5(info);
        # 915 "07var.c"
        buf2_252=(char*)come_increment_ref_count(((char*)(right_value291=parse_word(info))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 916 "07var.c"
        parse_sharp_v5(info);
        # 918 "07var.c"
        multiple_assign_253=((void*)0);
        # 935 "07var.c"
        # 920 "07var.c"
        if(_if_conditional343=*info->p==44,        _if_conditional343) {
            # 921 "07var.c"
            __dec_obj111=multiple_assign_253;
            multiple_assign_253=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value293=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value292=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 921, "list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 922 "07var.c"
            list$1charph_push_back(multiple_assign_253,(char*)come_increment_ref_count(((char*)(right_value297=string_clone(buf2_252)))));
            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 934 "07var.c"
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                # 925 "07var.c"
                info->p++;
                # 926 "07var.c"
                skip_spaces_and_lf(info);
                # 928 "07var.c"
                parse_sharp_v5(info);
                # 929 "07var.c"
                buf3_257=(char*)come_increment_ref_count(((char*)(right_value298=parse_word(info))));
                right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 930 "07var.c"
                parse_sharp_v5(info);
                # 932 "07var.c"
                list$1charph_push_back(multiple_assign_253,(char*)come_increment_ref_count(((char*)(right_value299=string_clone(buf3_257)))));
                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_257 = come_decrement_ref_count2(buf3_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 935 "07var.c"
        parse_sharp_v5(info);
        # 961 "07var.c"
        # 937 "07var.c"
        if(_if_conditional346=*info->p==61&&*(info->p+1)!=61,        _if_conditional346) {
            # 938 "07var.c"
            info->p++;
            # 939 "07var.c"
            skip_spaces_and_lf(info);
            # 941 "07var.c"
            parse_sharp_v5(info);
            # 943 "07var.c"
            no_comma_258=info->no_comma;
            # 943 "07var.c"
            info->no_comma=(_Bool)1;
            # 944 "07var.c"
            right_value_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=expression_v13(info))));
            if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 945 "07var.c"
            info->no_comma=no_comma_258;
            # 946 "07var.c"
            parse_sharp_v5(info);
            # 948 "07var.c"
            __dec_obj115=right_value_259;
            right_value_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_259),info))));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 949 "07var.c"
            parse_sharp_v5(info);
            # 951 "07var.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 951, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value304=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value302=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 951, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(buf2_252)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_253),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_259),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=_inf_value3)));
            come_call_finalizer2(sStoreNode_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 955 "07var.c"
            __result180__ = __result_obj__ = result_261;
            if(right_value_259) { right_value_259 = come_decrement_ref_count2(right_value_259, ((struct sNode*)right_value_259)->finalize, ((struct sNode*)right_value_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_261) { result_261 = come_decrement_ref_count2(result_261, ((struct sNode*)result_261)->finalize, ((struct sNode*)result_261)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_252 = come_decrement_ref_count2(buf2_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,multiple_assign_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result180__;
            if(right_value_259) { right_value_259 = come_decrement_ref_count2(right_value_259, ((struct sNode*)right_value_259)->finalize, ((struct sNode*)right_value_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_261) { result_261 = come_decrement_ref_count2(result_261, ((struct sNode*)result_261)->finalize, ((struct sNode*)result_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 958 "07var.c"
            err_msg(info,"var requires a right value(%c)",*info->p);
            # 959 "07var.c"
            exit(1);
        }
        buf2_252 = come_decrement_ref_count2(buf2_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,multiple_assign_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1203 "07var.c"
        # 962 "07var.c"
        if(multiple_declare_235) {
            # 963 "07var.c"
            info->p=head;
            # 964 "07var.c"
            info->sline=head_sline;
            # 966 "07var.c"
            multiple_declare_262=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value315=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value314=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 966, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 968 "07var.c"
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value316=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_263=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_264=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_265=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 970 "07var.c"
            variable_name_266=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value317=parse_variable_name((struct sType*)come_increment_ref_count(base_type_263),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 972 "07var.c"
            variable_name2_267=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value319=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value318=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 972, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_266->v1),(char*)come_increment_ref_count(variable_name_266->v2),((void*)0)))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 974 "07var.c"
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_262,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_267));
            # 987 "07var.c"
            while(_while_condtional28=*info->p==44,            _while_condtional28) {
                # 977 "07var.c"
                info->p++;
                # 978 "07var.c"
                skip_spaces_and_lf(info);
                # 980 "07var.c"
                variable_name_271=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_263),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 982 "07var.c"
                variable_name2_272=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value325=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value324=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 982, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_271->v1),(char*)come_increment_ref_count(variable_name_271->v2),((void*)0)))));
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 984 "07var.c"
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_262,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_272));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 987 "07var.c"
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 987, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value328=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value326=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 987, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_262),(struct sType*)come_increment_ref_count(base_type_263),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=_inf_value4)));
            come_call_finalizer2(sStoreNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 991 "07var.c"
            __result185__ = __result_obj__ = result_274;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_274) { result_274 = come_decrement_ref_count2(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result185__;
            come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(result_274) { result_274 = come_decrement_ref_count2(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1203 "07var.c"
            # 993 "07var.c"
            if(multiple_declare2_241) {
                # 994 "07var.c"
                info->p=head;
                # 995 "07var.c"
                info->sline=head_sline;
                # 997 "07var.c"
                multiple_declare_275=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value339=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value338=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 997, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 999 "07var.c"
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value340=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_276=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_277=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_278=multiple_assign_var5->v3;
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1001 "07var.c"
                variable_name_279=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value341=parse_variable_name((struct sType*)come_increment_ref_count(base_type_276),(_Bool)1,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1003 "07var.c"
                parse_sharp_v5(info);
                # 1021 "07var.c"
                # 1005 "07var.c"
                if(_if_conditional389=*info->p==61,                _if_conditional389) {
                    # 1006 "07var.c"
                    info->p++;
                    # 1007 "07var.c"
                    skip_spaces_and_lf(info);
                    # 1009 "07var.c"
                    parse_sharp_v5(info);
                    # 1011 "07var.c"
                    no_comma_280=info->no_comma;
                    # 1012 "07var.c"
                    info->no_comma=(_Bool)1;
                    # 1013 "07var.c"
                    exp_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_v13(info))));
                    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1014 "07var.c"
                    info->no_comma=no_comma_280;
                    # 1016 "07var.c"
                    variable_name2_282=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value344=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value343=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1016, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_279->v1),(char*)come_increment_ref_count(variable_name_279->v2),(struct sNode*)come_increment_ref_count(exp_281)))));
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1018 "07var.c"
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_275,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_282));
                    if(exp_281) { exp_281 = come_decrement_ref_count2(exp_281, ((struct sNode*)exp_281)->finalize, ((struct sNode*)exp_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 1049 "07var.c"
                while(_while_condtional29=*info->p==44,                _while_condtional29) {
                    # 1022 "07var.c"
                    info->p++;
                    # 1023 "07var.c"
                    skip_spaces_and_lf(info);
                    # 1025 "07var.c"
                    variable_name_283=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value345=parse_variable_name((struct sType*)come_increment_ref_count(base_type_276),(_Bool)0,info))));
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1027 "07var.c"
                    parse_sharp_v5(info);
                    # 1047 "07var.c"
                    # 1029 "07var.c"
                    if(_if_conditional390=*info->p==61,                    _if_conditional390) {
                        # 1030 "07var.c"
                        info->p++;
                        # 1031 "07var.c"
                        skip_spaces_and_lf(info);
                        # 1033 "07var.c"
                        parse_sharp_v5(info);
                        # 1035 "07var.c"
                        no_comma_284=info->no_comma;
                        # 1036 "07var.c"
                        info->no_comma=(_Bool)1;
                        # 1037 "07var.c"
                        exp_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                        if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1038 "07var.c"
                        info->no_comma=no_comma_284;
                        # 1040 "07var.c"
                        variable_name2_286=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value348=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value347=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1040, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_283->v1),(char*)come_increment_ref_count(variable_name_283->v2),(struct sNode*)come_increment_ref_count(exp_285)))));
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1042 "07var.c"
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_275,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_286));
                        if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 1045 "07var.c"
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 1049 "07var.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1049, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value351=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value349=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1049, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value350=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_275),(struct sType*)come_increment_ref_count(base_type_276),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=_inf_value5)));
                come_call_finalizer2(sStoreNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStoreNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1053 "07var.c"
                __result189__ = __result_obj__ = result_288;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_277 = come_decrement_ref_count2(name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_288) { result_288 = come_decrement_ref_count2(result_288, ((struct sNode*)result_288)->finalize, ((struct sNode*)result_288)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result189__;
                come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,base_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_277 = come_decrement_ref_count2(name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(result_288) { result_288 = come_decrement_ref_count2(result_288, ((struct sNode*)result_288)->finalize, ((struct sNode*)result_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1203 "07var.c"
                # 1055 "07var.c"
                if(_if_conditional408=!is_type_name_flag_234&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional408) {
                    # 1056 "07var.c"
                    info->p++;
                    # 1057 "07var.c"
                    skip_spaces_and_lf(info);
                    # 1059 "07var.c"
                    parse_sharp_v5(info);
                    # 1060 "07var.c"
                    right_value_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=expression_v13(info))));
                    if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1061 "07var.c"
                    parse_sharp_v5(info);
                    # 1063 "07var.c"
                    __dec_obj145=right_value_289;
                    right_value_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_289),info))));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1065 "07var.c"
                    parse_sharp_v5(info);
                    # 1067 "07var.c"
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1067, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value365=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value363=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1067, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_289),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=_inf_value6)));
                    come_call_finalizer2(sStoreNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1071 "07var.c"
                    __result192__ = __result_obj__ = result_291;
                    if(right_value_289) { right_value_289 = come_decrement_ref_count2(right_value_289, ((struct sNode*)right_value_289)->finalize, ((struct sNode*)right_value_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_291) { result_291 = come_decrement_ref_count2(result_291, ((struct sNode*)result_291)->finalize, ((struct sNode*)result_291)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result192__;
                    if(right_value_289) { right_value_289 = come_decrement_ref_count2(right_value_289, ((struct sNode*)right_value_289)->finalize, ((struct sNode*)right_value_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_291) { result_291 = come_decrement_ref_count2(result_291, ((struct sNode*)result_291)->finalize, ((struct sNode*)result_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1203 "07var.c"
                    # 1073 "07var.c"
                    if(_if_conditional426=!is_type_name_flag_234||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional426) {
                        # 1074 "07var.c"
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1074, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value377=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value375=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1074, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value7)));
                        come_call_finalizer2(sLoadNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLoadNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1076 "07var.c"
                        __dec_obj155=node_293;
                        node_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_293),info))));
                        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1078 "07var.c"
                        __dec_obj156=node_293;
                        node_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_293),info))));
                        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1080 "07var.c"
                        __result195__ = __result_obj__ = node_293;
                        if(node_293) { node_293 = come_decrement_ref_count2(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result195__;
                        if(node_293) { node_293 = come_decrement_ref_count2(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1083 "07var.c"
                        info->p=head;
                        # 1084 "07var.c"
                        info->sline=head_sline;
                        # 1086 "07var.c"
                        word_294=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(""))));
                        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1091 "07var.c"
                        # 1087 "07var.c"
                        if(_if_conditional433=xisalpha(*info->p)||*info->p==95,                        _if_conditional433) {
                            # 1088 "07var.c"
                            __dec_obj157=word_294;
                            word_294=(char*)come_increment_ref_count(((char*)(right_value385=parse_word(info))));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 1091 "07var.c"
                        is_type_name_flag_295=is_type_name(word_294,info);
                        # 1093 "07var.c"
                        info->p=head;
                        # 1094 "07var.c"
                        info->sline=head_sline;
                        # 1201 "07var.c"
                        # 1096 "07var.c"
                        if(is_type_name_flag_295) {
                            # 1097 "07var.c"
                            parse_sharp_v5(info);
                            # 1098 "07var.c"
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value386=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_296=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_297=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_298=multiple_assign_var6->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1104 "07var.c"
                            # 1100 "07var.c"
                            if(_if_conditional435=!err_298,                            _if_conditional435) {
                                # 1101 "07var.c"
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                # 1102 "07var.c"
                                exit(2);
                            }
                            # 1104 "07var.c"
                            parse_sharp_v5(info);
                            # 1200 "07var.c"
                            # 1106 "07var.c"
                            if(_if_conditional436=*info->p==61,                            _if_conditional436) {
                                # 1107 "07var.c"
                                info->p++;
                                # 1108 "07var.c"
                                skip_spaces_and_lf(info);
                                # 1110 "07var.c"
                                parse_sharp_v5(info);
                                # 1192 "07var.c"
                                # 1112 "07var.c"
                                if(_if_conditional437=*info->p==123,                                _if_conditional437) {
                                    # 1113 "07var.c"
                                    buf2_299=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value388=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value387=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1113, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1115 "07var.c"
                                    buffer_append_char(buf2_299,*info->p);
                                    # 1116 "07var.c"
                                    info->p++;
                                    # 1118 "07var.c"
                                    squort_300=(_Bool)0;
                                    # 1119 "07var.c"
                                    dquort_301=(_Bool)0;
                                    # 1120 "07var.c"
                                    nest_302=1;
                                    # 1166 "07var.c"
                                    while(_while_condtional30=1,                                    _while_condtional30) {
                                        # 1165 "07var.c"
                                        # 1122 "07var.c"
                                        if(_if_conditional438=*info->p==0,                                        _if_conditional438) {
                                            # 1123 "07var.c"
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            # 1124 "07var.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1165 "07var.c"
                                            # 1126 "07var.c"
                                            if(_if_conditional439=*info->p==92,                                            _if_conditional439) {
                                                # 1127 "07var.c"
                                                buffer_append_char(buf2_299,*info->p);
                                                # 1128 "07var.c"
                                                info->p++;
                                                # 1129 "07var.c"
                                                buffer_append_char(buf2_299,*info->p);
                                                # 1130 "07var.c"
                                                info->p++;
                                            }
                                            else {
                                                # 1165 "07var.c"
                                                # 1132 "07var.c"
                                                if(_if_conditional440=!squort_300&&*info->p==34,                                                _if_conditional440) {
                                                    # 1133 "07var.c"
                                                    buffer_append_char(buf2_299,*info->p);
                                                    # 1134 "07var.c"
                                                    info->p++;
                                                    # 1135 "07var.c"
                                                    dquort_301=!dquort_301;
                                                }
                                                else {
                                                    # 1165 "07var.c"
                                                    # 1137 "07var.c"
                                                    if(_if_conditional441=!dquort_301&&*info->p==39,                                                    _if_conditional441) {
                                                        # 1138 "07var.c"
                                                        buffer_append_char(buf2_299,*info->p);
                                                        # 1139 "07var.c"
                                                        info->p++;
                                                        # 1140 "07var.c"
                                                        squort_300=!squort_300;
                                                    }
                                                    else {
                                                        # 1165 "07var.c"
                                                        # 1142 "07var.c"
                                                        if(_if_conditional442=squort_300||dquort_301,                                                        _if_conditional442) {
                                                            # 1143 "07var.c"
                                                            buffer_append_char(buf2_299,*info->p);
                                                            # 1144 "07var.c"
                                                            info->p++;
                                                        }
                                                        else {
                                                            # 1165 "07var.c"
                                                            # 1146 "07var.c"
                                                            if(_if_conditional443=*info->p==123,                                                            _if_conditional443) {
                                                                # 1147 "07var.c"
                                                                nest_302++;
                                                                # 1148 "07var.c"
                                                                buffer_append_char(buf2_299,*info->p);
                                                                # 1149 "07var.c"
                                                                info->p++;
                                                            }
                                                            else {
                                                                # 1165 "07var.c"
                                                                # 1151 "07var.c"
                                                                if(_if_conditional444=*info->p==125,                                                                _if_conditional444) {
                                                                    # 1152 "07var.c"
                                                                    nest_302--;
                                                                    # 1153 "07var.c"
                                                                    buffer_append_char(buf2_299,*info->p);
                                                                    # 1154 "07var.c"
                                                                    info->p++;
                                                                    # 1160 "07var.c"
                                                                    # 1156 "07var.c"
                                                                    if(_if_conditional445=nest_302==0,                                                                    _if_conditional445) {
                                                                        # 1157 "07var.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1158 "07var.c"
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    # 1162 "07var.c"
                                                                    buffer_append_char(buf2_299,*info->p);
                                                                    # 1163 "07var.c"
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 1166 "07var.c"
                                    array_initializer_303=(char*)come_increment_ref_count(((char*)(right_value389=buffer_to_string(buf2_299))));
                                    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1168 "07var.c"
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1168, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value391=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value390=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1168, "sStoreNode")))),(char*)come_increment_ref_count(name_297),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_296),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_303),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=_inf_value8)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1172 "07var.c"
                                    __result198__ = __result_obj__ = result_305;
                                    come_call_finalizer2(buffer_finalize,buf2_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_303 = come_decrement_ref_count2(array_initializer_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_305) { result_305 = come_decrement_ref_count2(result_305, ((struct sNode*)result_305)->finalize, ((struct sNode*)result_305)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_294 = come_decrement_ref_count2(word_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result198__;
                                    come_call_finalizer2(buffer_finalize,buf2_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    array_initializer_303 = come_decrement_ref_count2(array_initializer_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_305) { result_305 = come_decrement_ref_count2(result_305, ((struct sNode*)result_305)->finalize, ((struct sNode*)result_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1175 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1176 "07var.c"
                                    right_value_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=expression_v13(info))));
                                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1177 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1179 "07var.c"
                                    right_values_307=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value403=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value402=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1179, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1184 "07var.c"
                                    while(_while_condtional31=*info->p==44,                                    _while_condtional31) {
                                        # 1182 "07var.c"
                                        anonymous_var_nameX2105_308 = come_decrement_ref_count2(anonymous_var_nameX2105_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 1184 "07var.c"
                                    __dec_obj165=right_value_306;
                                    right_value_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_306),info))));
                                    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1186 "07var.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1186, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value406=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value405=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1186, "sStoreNode")))),(char*)come_increment_ref_count(name_297),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_296),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_306),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=_inf_value9)));
                                    come_call_finalizer2(sStoreNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1190 "07var.c"
                                    __result201__ = __result_obj__ = result_310;
                                    if(right_value_306) { right_value_306 = come_decrement_ref_count2(right_value_306, ((struct sNode*)right_value_306)->finalize, ((struct sNode*)right_value_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_310) { result_310 = come_decrement_ref_count2(result_310, ((struct sNode*)result_310)->finalize, ((struct sNode*)result_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_294 = come_decrement_ref_count2(word_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result201__;
                                    if(right_value_306) { right_value_306 = come_decrement_ref_count2(right_value_306, ((struct sNode*)right_value_306)->finalize, ((struct sNode*)right_value_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(list$1sNodephp_finalize,right_values_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    if(result_310) { result_310 = come_decrement_ref_count2(result_310, ((struct sNode*)result_310)->finalize, ((struct sNode*)result_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                            }
                            else {
                                # 1194 "07var.c"
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1194, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value417=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value416=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1194, "sStoreNode")))),(char*)come_increment_ref_count(name_297),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_296),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=_inf_value10)));
                                come_call_finalizer2(sStoreNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1198 "07var.c"
                                __result204__ = __result_obj__ = result_312;
                                if(result_312) { result_312 = come_decrement_ref_count2(result_312, ((struct sNode*)result_312)->finalize, ((struct sNode*)result_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_294 = come_decrement_ref_count2(word_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result204__;
                                if(result_312) { result_312 = come_decrement_ref_count2(result_312, ((struct sNode*)result_312)->finalize, ((struct sNode*)result_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_297 = come_decrement_ref_count2(name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_294 = come_decrement_ref_count2(word_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 1203 "07var.c"
    __result205__ = __result_obj__ = ((struct sNode*)(right_value427=string_node_v5(buf,head,head_sline,info)));
    if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result205__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional335=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional335) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional336=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional336) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional344;
void* right_value294;
struct list_item$1charph* litem_254;
char* __dec_obj112;
_Bool _if_conditional345;
void* right_value295;
struct list_item$1charph* litem_255;
char* __dec_obj113;
void* right_value296;
struct list_item$1charph* litem_256;
char* __dec_obj114;
struct list$1charph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1charph*));
right_value295 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1charph*));
right_value296 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1charph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional344=self->len==0,                _if_conditional344) {
                    # 226 "./neo-c.h"
                    litem_254=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value294=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_254->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_254->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj112=litem_254->item;
                    litem_254->item=(char*)come_increment_ref_count(item);
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_254;
                    # 233 "./neo-c.h"
                    self->head=litem_254;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional345=self->len==1,                    _if_conditional345) {
                        # 236 "./neo-c.h"
                        litem_255=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value295=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_255->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_255->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj113=litem_255->item;
                        litem_255->item=(char*)come_increment_ref_count(item);
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_255;
                        # 243 "./neo-c.h"
                        self->head->next=litem_255;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_256=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value296=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_256->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_256->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj114=litem_256->item;
                        litem_256->item=(char*)come_increment_ref_count(item);
                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_256;
                        # 253 "./neo-c.h"
                        self->tail=litem_256;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result177__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result177__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional365=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional365) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional366=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional366) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj123;
char* __dec_obj124;
struct tuple3$3sTypephcharphvoidp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1804 "./neo-c.h"
                __dec_obj123=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1805 "./neo-c.h"
                __dec_obj124=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1806 "./neo-c.h"
                self->v3=v3;
                # 1808 "./neo-c.h"
                __result181__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result181__;
                come_call_finalizer2(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional367;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional367=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional367) {
                        # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional368=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional368) {
                        # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional369;
void* right_value320;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_268;
struct tuple3$3sTypephcharphsNodeph* __dec_obj125;
_Bool _if_conditional370;
void* right_value321;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_269;
struct tuple3$3sTypephcharphsNodeph* __dec_obj126;
void* right_value322;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_270;
struct tuple3$3sTypephcharphsNodeph* __dec_obj127;
struct list$1tuple3$3sTypephcharphsNodephph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
memset(&litem_268, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value321 = (void*)0;
memset(&litem_269, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value322 = (void*)0;
memset(&litem_270, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional369=self->len==0,                _if_conditional369) {
                    # 226 "./neo-c.h"
                    litem_268=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value320=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 226, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_268->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_268->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj125=litem_268->item;
                    litem_268->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_268;
                    # 233 "./neo-c.h"
                    self->head=litem_268;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional370=self->len==1,                    _if_conditional370) {
                        # 236 "./neo-c.h"
                        litem_269=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value321=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 236, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_269->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_269->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj126=litem_269->item;
                        litem_269->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_269;
                        # 243 "./neo-c.h"
                        self->head->next=litem_269;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_270=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value322=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 246, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_270->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_270->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj127=litem_270->item;
                        litem_270->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_270;
                        # 253 "./neo-c.h"
                        self->tail=litem_270;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result182__ = __result_obj__ = self;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result182__;
                come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj135;
char* __dec_obj136;
struct sNode* __dec_obj137;
struct tuple3$3sTypephcharphsNodeph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1804 "./neo-c.h"
                        __dec_obj135=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1805 "./neo-c.h"
                        __dec_obj136=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1806 "./neo-c.h"
                        __dec_obj137=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1808 "./neo-c.h"
                        __result186__ = __result_obj__ = self;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result186__;
                        come_call_finalizer2(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional427;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sLoadNode_finalize"
                            # 0 "sLoadNode_finalize"
                            if(_if_conditional427=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional427) {
                                # 0 "sLoadNode_finalize"
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sLoadNode_finalize"
                            # 1 "sLoadNode_finalize"
                            if(_if_conditional428=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional428) {
                                # 1 "sLoadNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional429;
struct sLoadNode* __result193__;
void* right_value378;
struct sLoadNode* result_292;
_Bool _if_conditional430;
void* right_value379;
char* __dec_obj153;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value380;
char* __dec_obj154;
struct sLoadNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
memset(&result_292, 0, sizeof(struct sLoadNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
                            # 3 "sLoadNode_clone"
                            # 2 "sLoadNode_clone"
                            if(_if_conditional429=self==(void*)0,                            _if_conditional429) {
                                # 2 "sLoadNode_clone"
                                __result193__ = __result_obj__ = (void*)0;
                                return __result193__;
                            }
                            # 3 "sLoadNode_clone"
                            result_292=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value378=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer2(sLoadNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sLoadNode_clone"
                            # 4 "sLoadNode_clone"
                            if(_if_conditional430=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional430) {
                                # 4 "sLoadNode_clone"
                                __dec_obj153=result_292->name;
                                result_292->name=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(self->name))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "sLoadNode_clone"
                            # 5 "sLoadNode_clone"
                            if(_if_conditional431=self!=((void*)0),                            _if_conditional431) {
                                # 5 "sLoadNode_clone"
                                result_292->sline=self->sline;
                            }
                            # 7 "sLoadNode_clone"
                            # 6 "sLoadNode_clone"
                            if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional432) {
                                # 6 "sLoadNode_clone"
                                __dec_obj154=result_292->sname;
                                result_292->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sLoadNode_clone"
                            __result194__ = __result_obj__ = result_292;
                            come_call_finalizer2(sLoadNode_finalize,result_292, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result194__;
                            come_call_finalizer2(sLoadNode_finalize,result_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sStoreNode_finalize"
                                    # 0 "sStoreNode_finalize"
                                    if(_if_conditional480=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional480) {
                                        # 0 "sStoreNode_finalize"
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sStoreNode_finalize"
                                    # 1 "sStoreNode_finalize"
                                    if(_if_conditional481=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional481) {
                                        # 1 "sStoreNode_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sStoreNode_finalize"
                                    # 2 "sStoreNode_finalize"
                                    if(_if_conditional482=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional482) {
                                        # 2 "sStoreNode_finalize"
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sStoreNode_finalize"
                                    # 3 "sStoreNode_finalize"
                                    if(_if_conditional483=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional483) {
                                        # 3 "sStoreNode_finalize"
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 5 "sStoreNode_finalize"
                                    # 4 "sStoreNode_finalize"
                                    if(_if_conditional484=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional484) {
                                        # 4 "sStoreNode_finalize"
                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sStoreNode_finalize"
                                    # 5 "sStoreNode_finalize"
                                    if(_if_conditional485=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional485) {
                                        # 5 "sStoreNode_finalize"
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sStoreNode_finalize"
                                    # 6 "sStoreNode_finalize"
                                    if(_if_conditional486=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional486) {
                                        # 6 "sStoreNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional487;
struct sStoreNode* __result202__;
void* right_value418;
struct sStoreNode* result_311;
_Bool _if_conditional488;
void* right_value419;
char* __dec_obj173;
_Bool _if_conditional489;
void* right_value420;
struct list$1charph* __dec_obj174;
_Bool _if_conditional490;
void* right_value421;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj175;
_Bool _if_conditional491;
void* right_value422;
struct sNode* __dec_obj176;
_Bool _if_conditional492;
void* right_value423;
struct sType* __dec_obj177;
_Bool _if_conditional493;
void* right_value424;
char* __dec_obj178;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
void* right_value425;
char* __dec_obj179;
struct sStoreNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
memset(&result_311, 0, sizeof(struct sStoreNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
                                    # 3 "sStoreNode_clone"
                                    # 2 "sStoreNode_clone"
                                    if(_if_conditional487=self==(void*)0,                                    _if_conditional487) {
                                        # 2 "sStoreNode_clone"
                                        __result202__ = __result_obj__ = (void*)0;
                                        return __result202__;
                                    }
                                    # 3 "sStoreNode_clone"
                                    result_311=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value418=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer2(sStoreNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sStoreNode_clone"
                                    # 4 "sStoreNode_clone"
                                    if(_if_conditional488=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional488) {
                                        # 4 "sStoreNode_clone"
                                        __dec_obj173=result_311->name;
                                        result_311->name=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(self->name))));
                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 6 "sStoreNode_clone"
                                    # 5 "sStoreNode_clone"
                                    if(_if_conditional489=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional489) {
                                        # 5 "sStoreNode_clone"
                                        __dec_obj174=result_311->multiple_assign;
                                        result_311->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sStoreNode_clone"
                                    # 6 "sStoreNode_clone"
                                    if(_if_conditional490=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional490) {
                                        # 6 "sStoreNode_clone"
                                        __dec_obj175=result_311->multiple_declare;
                                        result_311->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value421=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sStoreNode_clone"
                                    # 7 "sStoreNode_clone"
                                    if(_if_conditional491=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional491) {
                                        # 7 "sStoreNode_clone"
                                        __dec_obj176=result_311->right_value;
                                        result_311->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=sNode_clone(self->right_value))));
                                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 9 "sStoreNode_clone"
                                    # 8 "sStoreNode_clone"
                                    if(_if_conditional492=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional492) {
                                        # 8 "sStoreNode_clone"
                                        __dec_obj177=result_311->type;
                                        result_311->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_clone(self->type))));
                                        come_call_finalizer2(sType_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sStoreNode_clone"
                                    # 9 "sStoreNode_clone"
                                    if(_if_conditional493=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional493) {
                                        # 9 "sStoreNode_clone"
                                        __dec_obj178=result_311->array_initializer;
                                        result_311->array_initializer=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(self->array_initializer))));
                                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sStoreNode_clone"
                                    # 10 "sStoreNode_clone"
                                    if(_if_conditional494=self!=((void*)0),                                    _if_conditional494) {
                                        # 10 "sStoreNode_clone"
                                        result_311->alloc=self->alloc;
                                    }
                                    # 12 "sStoreNode_clone"
                                    # 11 "sStoreNode_clone"
                                    if(_if_conditional495=self!=((void*)0),                                    _if_conditional495) {
                                        # 11 "sStoreNode_clone"
                                        result_311->sline=self->sline;
                                    }
                                    # 13 "sStoreNode_clone"
                                    # 12 "sStoreNode_clone"
                                    if(_if_conditional496=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional496) {
                                        # 12 "sStoreNode_clone"
                                        __dec_obj179=result_311->sname;
                                        result_311->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(self->sname))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 13 "sStoreNode_clone"
                                    __result203__ = __result_obj__ = result_311;
                                    come_call_finalizer2(sStoreNode_finalize,result_311, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result203__;
                                    come_call_finalizer2(sStoreNode_finalize,result_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

