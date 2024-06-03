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

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

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
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
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

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_75;
_Bool _if_conditional51;
_Bool __result66__;
struct sClass* klass_76;
_Bool _if_conditional52;
_Bool __result67__;
_Bool _if_conditional53;
_Bool __result68__;
int i_77;
_Bool result_78;
_Bool _if_conditional54;
_Bool __result69__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_75, 0, sizeof(struct sType*));
memset(&klass_76, 0, sizeof(struct sClass*));
memset(&i_77, 0, sizeof(int));
memset(&result_78, 0, sizeof(_Bool));
    # 90 "14struct.c"
    type2_75=type->mNoSolvedGenericsType->v1;
    # 96 "14struct.c"
    # 92 "14struct.c"
    if(_if_conditional51=type2_75&&is_no_contained_generics_types(type2_75,info),    _if_conditional51) {
        # 93 "14struct.c"
        __result66__ = (_Bool)0;
        return __result66__;
    }
    # 96 "14struct.c"
    klass_76=type->mClass;
    # 101 "14struct.c"
    # 98 "14struct.c"
    if(klass_76->mGenerics) {
        # 99 "14struct.c"
        __result67__ = (_Bool)0;
        return __result67__;
    }
    # 104 "14struct.c"
    # 101 "14struct.c"
    if(klass_76->mMethodGenerics) {
        # 102 "14struct.c"
        __result68__ = (_Bool)0;
        return __result68__;
    }
    # 112 "14struct.c"
    for(    i_77=0;    i_77<list$1sTypeph_length(type->mGenericsTypes);    i_77++    ){
        # 105 "14struct.c"
        result_78=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_77), "14struct.c", 105, 1)),info);
        # 110 "14struct.c"
        # 107 "14struct.c"
        if(_if_conditional54=!result_78,        _if_conditional54) {
            # 108 "14struct.c"
            __result69__ = (_Bool)0;
            return __result69__;
        }
    }
    # 112 "14struct.c"
    __result70__ = (_Bool)1;
    return __result70__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_79;
_Bool _if_conditional55;
_Bool __result71__;
struct sClass* klass_80;
_Bool _if_conditional56;
_Bool __result72__;
int i_81;
_Bool result_82;
_Bool _if_conditional57;
_Bool __result73__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_79, 0, sizeof(struct sType*));
memset(&klass_80, 0, sizeof(struct sClass*));
memset(&i_81, 0, sizeof(int));
memset(&result_82, 0, sizeof(_Bool));
    # 117 "14struct.c"
    type2_79=type->mNoSolvedGenericsType->v1;
    # 123 "14struct.c"
    # 119 "14struct.c"
    if(_if_conditional55=type2_79&&is_contained_method_generics_types(type2_79,info),    _if_conditional55) {
        # 120 "14struct.c"
        __result71__ = (_Bool)1;
        return __result71__;
    }
    # 123 "14struct.c"
    klass_80=type->mClass;
    # 128 "14struct.c"
    # 125 "14struct.c"
    if(klass_80->mMethodGenerics) {
        # 126 "14struct.c"
        __result72__ = (_Bool)1;
        return __result72__;
    }
    # 136 "14struct.c"
    for(    i_81=0;    i_81<list$1sTypeph_length(type->mGenericsTypes);    i_81++    ){
        # 129 "14struct.c"
        result_82=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_81), "14struct.c", 129, 2)),info);
        # 134 "14struct.c"
        # 131 "14struct.c"
        if(result_82) {
            # 132 "14struct.c"
            __result73__ = (_Bool)1;
            return __result73__;
        }
    }
    # 136 "14struct.c"
    __result74__ = (_Bool)0;
    return __result74__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value91;
char* new_name_83;
_Bool _if_conditional62;
void* right_value127;
struct sType* type2_104;
struct sClass* generics_class_108;
_Bool _if_conditional144;
_Bool __result101__;
void* right_value128;
void* right_value129;
struct sClass* new_class_109;
void* right_value136;
int i_154;
struct list$1tuple2$2charphsTypephph* o2_saved_155;
struct tuple2$2charphsTypeph* it_156;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_157;
struct sType* type_158;
void* right_value137;
struct sType* new_type_159;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
struct sType* __dec_obj40;
_Bool _if_conditional196;
struct sClass* generics_class_165;
_Bool _if_conditional197;
_Bool __result129__;
void* right_value146;
void* right_value147;
struct sClass* new_class_166;
void* right_value148;
_Bool existance_method_generics_167;
int i_168;
struct list$1tuple2$2charphsTypephph* o2_saved_169;
struct tuple2$2charphsTypeph* it_170;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_171;
struct sType* type_172;
void* right_value149;
struct sType* new_type_173;
_Bool _if_conditional198;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
struct sType* __dec_obj41;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value155;
struct sType* __dec_obj42;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&new_name_83, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&type2_104, 0, sizeof(struct sType*));
memset(&generics_class_108, 0, sizeof(struct sClass*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&new_class_109, 0, sizeof(struct sClass*));
right_value136 = (void*)0;
memset(&i_154, 0, sizeof(int));
memset(&o2_saved_155, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_156, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_157, 0, sizeof(char*));
memset(&type_158, 0, sizeof(struct sType*));
memset(&name_157, 0, sizeof(char*));
memset(&type_158, 0, sizeof(struct sType*));
right_value137 = (void*)0;
memset(&new_type_159, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&generics_class_165, 0, sizeof(struct sClass*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&new_class_166, 0, sizeof(struct sClass*));
right_value148 = (void*)0;
memset(&existance_method_generics_167, 0, sizeof(_Bool));
memset(&i_168, 0, sizeof(int));
memset(&o2_saved_169, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_170, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_171, 0, sizeof(char*));
memset(&type_172, 0, sizeof(struct sType*));
memset(&name_171, 0, sizeof(char*));
memset(&type_172, 0, sizeof(struct sType*));
right_value149 = (void*)0;
memset(&new_type_173, 0, sizeof(struct sType*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    # 141 "14struct.c"
    new_name_83=(char*)come_increment_ref_count(((char*)(right_value91=create_generics_name(type,info))));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 217 "14struct.c"
    # 143 "14struct.c"
    if(_if_conditional62=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_83),    _if_conditional62) {
        # 144 "14struct.c"
        type2_104=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 146 "14struct.c"
        generics_class_108=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        # 153 "14struct.c"
        # 148 "14struct.c"
        if(_if_conditional144=generics_class_108==((void*)0),        _if_conditional144) {
            # 149 "14struct.c"
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            # 150 "14struct.c"
            __result101__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,type2_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            new_name_83 = come_decrement_ref_count2(new_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        # 153 "14struct.c"
        new_class_109=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value129=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value128=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 153, "sClass")))),new_name_83,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 155 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(new_name_83)))),(struct sClass*)come_increment_ref_count(new_class_109));
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 157 "14struct.c"
        i_154=0;
        # 166 "14struct.c"
        for(        o2_saved_155=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_108->mFields)),it_156=list$1tuple2$2charphsTypephph_begin((o2_saved_155));        !list$1tuple2$2charphsTypephph_end((o2_saved_155));        it_156=list$1tuple2$2charphsTypephph_next((o2_saved_155))        ){
            # 159 "14struct.c"
            multiple_assign_var2=it_156;
            name_157=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_158=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 161 "14struct.c"
            new_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=solve_generics(type_158,type2_104,info))));
            come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 163 "14struct.c"
            list$1tuple2$2charphsTypephph_push_back(new_class_109->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 163, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value141=string_clone(name_157)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(new_type_159)))))))));
            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            name_157 = come_decrement_ref_count2(name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,new_type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 166 "14struct.c"
        __dec_obj40=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 167 "14struct.c"
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        # 168 "14struct.c"
        type->mClass=new_class_109;
        # 169 "14struct.c"
        list$1sTypeph_reset(type->mGenericsTypes);
        # 171 "14struct.c"
        output_struct(new_class_109,info);
        come_call_finalizer2(sType_finalize,type2_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,new_class_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 217 "14struct.c"
        # 173 "14struct.c"
        if(_if_conditional196=!map$2charphsClassph_find(info->classes,new_name_83),        _if_conditional196) {
            # 174 "14struct.c"
            generics_class_165=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            # 181 "14struct.c"
            # 176 "14struct.c"
            if(_if_conditional197=generics_class_165==((void*)0),            _if_conditional197) {
                # 177 "14struct.c"
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                # 178 "14struct.c"
                __result129__ = (_Bool)0;
                new_name_83 = come_decrement_ref_count2(new_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result129__;
            }
            # 181 "14struct.c"
            new_class_166=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value147=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value146=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 181, "sClass")))),new_name_83,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 183 "14struct.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(new_name_83)))),(struct sClass*)come_increment_ref_count(new_class_166));
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 185 "14struct.c"
            existance_method_generics_167=(_Bool)0;
            # 186 "14struct.c"
            i_168=0;
            # 199 "14struct.c"
            for(            o2_saved_169=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_165->mFields)),it_170=list$1tuple2$2charphsTypephph_begin((o2_saved_169));            !list$1tuple2$2charphsTypephph_end((o2_saved_169));            it_170=list$1tuple2$2charphsTypephph_next((o2_saved_169))            ){
                # 188 "14struct.c"
                multiple_assign_var3=it_170;
                name_171=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_172=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 190 "14struct.c"
                new_type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=solve_generics(type_172,generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 196 "14struct.c"
                # 192 "14struct.c"
                if(_if_conditional198=is_contained_method_generics_types(new_type_173,info),                _if_conditional198) {
                }
                # 196 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(new_class_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value153=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value152=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 196, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value150=string_clone(name_171)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(new_type_173)))))))));
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                name_171 = come_decrement_ref_count2(name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,new_type_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 199 "14struct.c"
            __dec_obj41=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type))));
            come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 200 "14struct.c"
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            # 201 "14struct.c"
            type->mClass=new_class_166;
            # 202 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
            # 207 "14struct.c"
            # 204 "14struct.c"
            if(_if_conditional199=!existance_method_generics_167,            _if_conditional199) {
                # 205 "14struct.c"
                output_struct(new_class_166,info);
            }
            come_call_finalizer2(sClass_finalize,new_class_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 213 "14struct.c"
            # 209 "14struct.c"
            if(_if_conditional200=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional200) {
                # 210 "14struct.c"
                __dec_obj42=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type))));
                come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 211 "14struct.c"
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            # 213 "14struct.c"
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_83);
            # 214 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    # 217 "14struct.c"
    __result130__ = (_Bool)1;
    new_name_83 = come_decrement_ref_count2(new_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    new_name_83 = come_decrement_ref_count2(new_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_84;
int it_85;
_Bool _while_condtional13;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool __result75__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool __result76__;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(int));
        # 1624 "./neo-c.h"
        hash_84=string_get_hash_key(((char*)key))%self->size;
        # 1625 "./neo-c.h"
        it_85=hash_84;
        # 1649 "./neo-c.h"
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            # 1647 "./neo-c.h"
            # 1628 "./neo-c.h"
            if(_if_conditional58=self->item_existance[it_85],            _if_conditional58) {
                # 1635 "./neo-c.h"
                # 1630 "./neo-c.h"
                if(_if_conditional59=string_equals(self->keys[it_85],key),                _if_conditional59) {
                    # 1632 "./neo-c.h"
                    __result75__ = (_Bool)1;
                    return __result75__;
                }
                # 1635 "./neo-c.h"
                it_85++;
                # 1643 "./neo-c.h"
                # 1637 "./neo-c.h"
                if(_if_conditional60=it_85>=self->size,                _if_conditional60) {
                    # 1638 "./neo-c.h"
                    it_85=0;
                }
                else {
                    # 1643 "./neo-c.h"
                    # 1640 "./neo-c.h"
                    if(_if_conditional61=it_85==hash_84,                    _if_conditional61) {
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
_Bool _if_conditional63;
struct sType* __result79__;
void* right_value92;
struct sType* result_86;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value99;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional69;
void* right_value102;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional73;
void* right_value103;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional74;
void* right_value104;
char* __dec_obj19;
_Bool _if_conditional75;
void* right_value105;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional76;
void* right_value113;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value114;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional91;
void* right_value121;
struct list$1charph* __dec_obj29;
_Bool _if_conditional95;
void* right_value122;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value123;
struct sNode* __dec_obj31;
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
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value124;
struct sNode* __dec_obj32;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value125;
char* __dec_obj33;
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
void* right_value126;
char* __dec_obj34;
_Bool _if_conditional136;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&result_86, 0, sizeof(struct sType*));
right_value99 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional63=self==(void*)0,            _if_conditional63) {
                # 2 "sType_clone"
                __result79__ = __result_obj__ = (void*)0;
                return __result79__;
            }
            # 3 "sType_clone"
            result_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                # 4 "sType_clone"
                result_86->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional65) {
                # 5 "sType_clone"
                __dec_obj15=result_86->mMultipleTypes;
                result_86->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional69) {
                # 6 "sType_clone"
                __dec_obj17=result_86->mNoSolvedGenericsType;
                result_86->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional73=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional73) {
                # 7 "sType_clone"
                __dec_obj18=result_86->mOriginalLoadVarType;
                result_86->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional74) {
                # 8 "sType_clone"
                __dec_obj19=result_86->mGenericsName;
                result_86->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value104=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional75=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional75) {
                # 9 "sType_clone"
                __dec_obj20=result_86->mGenericsTypes;
                result_86->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional76) {
                # 10 "sType_clone"
                __dec_obj24=result_86->mArrayNum;
                result_86->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 11 "sType_clone"
                result_86->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional90=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional90) {
                # 12 "sType_clone"
                __dec_obj25=result_86->mParamTypes;
                result_86->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value114=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional91=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional91) {
                # 13 "sType_clone"
                __dec_obj29=result_86->mParamNames;
                result_86->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional95=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional95) {
                # 14 "sType_clone"
                __dec_obj30=result_86->mResultType;
                result_86->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value122=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 15 "sType_clone"
                result_86->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional97=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional97) {
                # 16 "sType_clone"
                __dec_obj31=result_86->mAlignas;
                result_86->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 17 "sType_clone"
                result_86->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 18 "sType_clone"
                result_86->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 19 "sType_clone"
                result_86->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 20 "sType_clone"
                result_86->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 21 "sType_clone"
                result_86->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 22 "sType_clone"
                result_86->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 23 "sType_clone"
                result_86->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 24 "sType_clone"
                result_86->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 25 "sType_clone"
                result_86->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 26 "sType_clone"
                result_86->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 27 "sType_clone"
                result_86->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 28 "sType_clone"
                result_86->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 29 "sType_clone"
                result_86->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 30 "sType_clone"
                result_86->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 31 "sType_clone"
                result_86->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 32 "sType_clone"
                result_86->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 33 "sType_clone"
                result_86->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 34 "sType_clone"
                result_86->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 35 "sType_clone"
                result_86->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 36 "sType_clone"
                result_86->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 37 "sType_clone"
                result_86->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 38 "sType_clone"
                result_86->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                # 39 "sType_clone"
                result_86->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 40 "sType_clone"
                result_86->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional122=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional122) {
                # 41 "sType_clone"
                __dec_obj32=result_86->mSizeNum;
                result_86->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                # 42 "sType_clone"
                result_86->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                # 43 "sType_clone"
                result_86->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional125=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional125) {
                # 44 "sType_clone"
                __dec_obj33=result_86->mOriginalTypeName;
                result_86->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 45 "sType_clone"
                result_86->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 46 "sType_clone"
                result_86->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                # 47 "sType_clone"
                result_86->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 48 "sType_clone"
                result_86->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                # 49 "sType_clone"
                result_86->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                # 50 "sType_clone"
                result_86->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 51 "sType_clone"
                result_86->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                # 52 "sType_clone"
                result_86->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                # 53 "sType_clone"
                result_86->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional135=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional135) {
                # 54 "sType_clone"
                __dec_obj34=result_86->mAsmName;
                result_86->mAsmName=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional136=self!=((void*)0),            _if_conditional136) {
                # 55 "sType_clone"
                result_86->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result96__ = __result_obj__ = result_86;
            come_call_finalizer2(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer2(sType_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1sTypeph* __result80__;
void* right_value93;
void* right_value94;
struct list$1sTypeph* result_87;
struct list_item$1sTypeph* it_88;
_Bool _while_condtional14;
void* right_value98;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_87, 0, sizeof(struct list$1sTypeph*));
memset(&it_88, 0, sizeof(struct list_item$1sTypeph*));
right_value98 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 140 "./neo-c.h"
                        __result80__ = __result_obj__ = ((void*)0);
                        return __result80__;
                    }
                    # 142 "./neo-c.h"
                    result_87=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_88=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional14=it_88!=((void*)0),                    _while_condtional14) {
                        # 146 "./neo-c.h"
                        list$1sTypeph_add(result_87,(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(it_88->item)))));
                        come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_88=it_88->next;
                    }
                    # 151 "./neo-c.h"
                    __result83__ = __result_obj__ = result_87;
                    come_call_finalizer2(list$1sTypephp_finalize,result_87, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional67;
void* right_value95;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj12;
_Bool _if_conditional68;
void* right_value96;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj13;
void* right_value97;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj14;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
right_value96 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
right_value97 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 156 "./neo-c.h"
                                litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_89->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_89->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj12=litem_89->item;
                                litem_89->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_89;
                                # 163 "./neo-c.h"
                                self->head=litem_89;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 166 "./neo-c.h"
                                    litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_90->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_90->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj13=litem_90->item;
                                    litem_90->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_90;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_90;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_91->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_91->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj14=litem_91->item;
                                    litem_91->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_91;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_91;
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
_Bool _if_conditional70;
struct tuple1$1sTypeph* __result84__;
void* right_value100;
struct tuple1$1sTypeph* result_92;
_Bool _if_conditional72;
void* right_value101;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_92, 0, sizeof(struct tuple1$1sTypeph*));
right_value101 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional70=self==(void*)0,                    _if_conditional70) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result84__ = __result_obj__ = (void*)0;
                        return __result84__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_92=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional72) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj16=result_92->v1;
                        result_92->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result85__ = __result_obj__ = result_92;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional71=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional71) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct list$1sNodeph* __result86__;
void* right_value106;
void* right_value107;
struct list$1sNodeph* result_93;
struct list_item$1sNodeph* it_94;
_Bool _while_condtional15;
void* right_value112;
struct list$1sNodeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1sNodeph*));
memset(&it_94, 0, sizeof(struct list_item$1sNodeph*));
right_value112 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional77=self==((void*)0),                    _if_conditional77) {
                        # 140 "./neo-c.h"
                        __result86__ = __result_obj__ = ((void*)0);
                        return __result86__;
                    }
                    # 142 "./neo-c.h"
                    result_93=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value107=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_94=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional15=it_94!=((void*)0),                    _while_condtional15) {
                        # 146 "./neo-c.h"
                        list$1sNodeph_add(result_93,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(it_94->item)))));
                        if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./neo-c.h"
                        it_94=it_94->next;
                    }
                    # 151 "./neo-c.h"
                    __result91__ = __result_obj__ = result_93;
                    come_call_finalizer2(list$1sNodephp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional78;
void* right_value108;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj21;
_Bool _if_conditional79;
void* right_value109;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj22;
void* right_value110;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sNodeph*));
right_value110 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional78=self->len==0,                            _if_conditional78) {
                                # 156 "./neo-c.h"
                                litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_95->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_95->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj21=litem_95->item;
                                litem_95->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./neo-c.h"
                                self->tail=litem_95;
                                # 163 "./neo-c.h"
                                self->head=litem_95;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional79=self->len==1,                                _if_conditional79) {
                                    # 166 "./neo-c.h"
                                    litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_96->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_96->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj22=litem_96->item;
                                    litem_96->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./neo-c.h"
                                    self->tail=litem_96;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_96;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value110=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_97->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_97->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj23=litem_97->item;
                                    litem_97->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_97;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_97;
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
_Bool _if_conditional80;
struct sNode* __result89__;
void* right_value111;
struct sNode* result_98;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&result_98, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional80=self==(void*)0,                            _if_conditional80) {
                                # 2 "sNode_clone"
                                __result89__ = __result_obj__ = (void*)0;
                                return __result89__;
                            }
                            # 3 "sNode_clone"
                            result_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional81=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional81) {
                                # 4 "sNode_clone"
                                result_98->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional82=self!=((void*)0),                            _if_conditional82) {
                                # 5 "sNode_clone"
                                result_98->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                # 6 "sNode_clone"
                                result_98->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional84=self!=((void*)0),                            _if_conditional84) {
                                # 7 "sNode_clone"
                                result_98->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                # 8 "sNode_clone"
                                result_98->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                # 9 "sNode_clone"
                                result_98->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                # 10 "sNode_clone"
                                result_98->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                # 11 "sNode_clone"
                                result_98->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result90__ = __result_obj__ = result_98;
                            if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result90__;
                            if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional92;
struct list$1charph* __result92__;
void* right_value115;
void* right_value116;
struct list$1charph* result_99;
struct list_item$1charph* it_100;
_Bool _while_condtional16;
void* right_value120;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&result_99, 0, sizeof(struct list$1charph*));
memset(&it_100, 0, sizeof(struct list_item$1charph*));
right_value120 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional92=self==((void*)0),                    _if_conditional92) {
                        # 140 "./neo-c.h"
                        __result92__ = __result_obj__ = ((void*)0);
                        return __result92__;
                    }
                    # 142 "./neo-c.h"
                    result_99=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value115=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_100=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional16=it_100!=((void*)0),                    _while_condtional16) {
                        # 146 "./neo-c.h"
                        list$1charph_add(result_99,(char*)come_increment_ref_count(((char*)(right_value120=string_clone(it_100->item)))));
                        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_100=it_100->next;
                    }
                    # 151 "./neo-c.h"
                    __result95__ = __result_obj__ = result_99;
                    come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional93;
void* right_value117;
struct list_item$1charph* litem_101;
char* __dec_obj26;
_Bool _if_conditional94;
void* right_value118;
struct list_item$1charph* litem_102;
char* __dec_obj27;
void* right_value119;
struct list_item$1charph* litem_103;
char* __dec_obj28;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1charph*));
right_value118 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1charph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional93=self->len==0,                            _if_conditional93) {
                                # 156 "./neo-c.h"
                                litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value117=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_101->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_101->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj26=litem_101->item;
                                litem_101->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_101;
                                # 163 "./neo-c.h"
                                self->head=litem_101;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional94=self->len==1,                                _if_conditional94) {
                                    # 166 "./neo-c.h"
                                    litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_102->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_102->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj27=litem_102->item;
                                    litem_102->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_102;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_102;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_103->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_103->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj28=litem_103->item;
                                    litem_103->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_103;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_103;
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
struct sClass* default_value_105;
unsigned int hash_106;
unsigned int it_107;
_Bool _while_condtional17;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result97__;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_105, 0, sizeof(struct sClass*));
memset(&hash_106, 0, sizeof(unsigned int));
memset(&it_107, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_105,0,sizeof(struct sClass*));
            # 1547 "./neo-c.h"
            hash_106=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_107=hash_106;
            # 1572 "./neo-c.h"
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional137=self->item_existance[it_107],                _if_conditional137) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional138=string_equals(self->keys[it_107],key),                    _if_conditional138) {
                        # 1555 "./neo-c.h"
                        __result97__ = __result_obj__ = self->items[it_107];
                        come_call_finalizer2(sClass_finalize,default_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result97__;
                    }
                    # 1558 "./neo-c.h"
                    it_107++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional142=it_107>=self->size,                    _if_conditional142) {
                        # 1561 "./neo-c.h"
                        it_107=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional143=it_107==hash_106,                        _if_conditional143) {
                            # 1564 "./neo-c.h"
                            __result98__ = __result_obj__ = default_value_105;
                            come_call_finalizer2(sClass_finalize,default_value_105, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result98__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result99__ = __result_obj__ = default_value_105;
                    come_call_finalizer2(sClass_finalize,default_value_105, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                }
            }
            # 1572 "./neo-c.h"
            __result100__ = __result_obj__ = default_value_105;
            come_call_finalizer2(sClass_finalize,default_value_105, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer2(sClass_finalize,default_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sClass_finalize"
                            # 0 "sClass_finalize"
                            if(_if_conditional139=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional139) {
                                # 0 "sClass_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sClass_finalize"
                            # 1 "sClass_finalize"
                            if(_if_conditional140=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional140) {
                                # 1 "sClass_finalize"
                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sClass_finalize"
                            # 2 "sClass_finalize"
                            if(_if_conditional141=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional141) {
                                # 2 "sClass_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional145;
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional20;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool same_key_exist_145;
char* it2_148;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct map$2charphsClassph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
memset(&same_key_exist_145, 0, sizeof(_Bool));
memset(&it2_148, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional145=self->len*10>=self->size,            _if_conditional145) {
                # 1391 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_127=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_128=hash_127;
            # 1452 "./neo-c.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional157=self->item_existance[it_128],                _if_conditional157) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional158=string_equals(self->keys[it_128],key),                    _if_conditional158) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional159=1,                        _if_conditional159) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_128]);
                            # 1403 "./neo-c.h"
                            self->keys[it_128] = come_decrement_ref_count2(self->keys[it_128], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_128]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_128]);
                            # 1408 "./neo-c.h"
                            self->keys[it_128]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional179=1,                        _if_conditional179) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_128], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_128]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_128]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_128++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional180=it_128>=self->size,                    _if_conditional180) {
                        # 1423 "./neo-c.h"
                        it_128=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional181=it_128==hash_127,                        _if_conditional181) {
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
                    self->item_existance[it_128]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional182=1,                    _if_conditional182) {
                        # 1434 "./neo-c.h"
                        self->keys[it_128]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_128]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional183=1,                    _if_conditional183) {
                        # 1440 "./neo-c.h"
                        self->items[it_128]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_128]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_145=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_148=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_148=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional188=string_equals(it2_148,key),                _if_conditional188) {
                    # 1456 "./neo-c.h"
                    same_key_exist_145=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional189=!same_key_exist_145,            _if_conditional189) {
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
int size_110;
void* right_value130;
char** keys_111;
void* right_value131;
struct sClass** items_112;
void* right_value132;
_Bool* item_existance_113;
int len_114;
char* it_117;
struct sClass* default_value_120;
struct sClass* it2_123;
unsigned int hash_124;
int n_125;
_Bool _while_condtional19;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct sClass* default_value_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_110, 0, sizeof(int));
right_value130 = (void*)0;
memset(&keys_111, 0, sizeof(char**));
right_value131 = (void*)0;
memset(&items_112, 0, sizeof(struct sClass**));
right_value132 = (void*)0;
memset(&item_existance_113, 0, sizeof(_Bool*));
memset(&len_114, 0, sizeof(int));
memset(&it_117, 0, sizeof(char*));
memset(&default_value_120, 0, sizeof(struct sClass*));
memset(&it2_123, 0, sizeof(struct sClass*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&n_125, 0, sizeof(int));
memset(&default_value_126, 0, sizeof(struct sClass*));
                    # 1337 "./neo-c.h"
                    size_110=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_111=(char**)come_increment_ref_count(((char**)(right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(size_110)), "./neo-c.h", 1338, "char*%"))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_112=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value131=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_110)), "./neo-c.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_113=(_Bool*)come_increment_ref_count(((_Bool*)(right_value132=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_110)), "./neo-c.h", 1340, "bool"))));
                    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_114=0;
                    # 1377 "./neo-c.h"
                    for(                    it_117=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_117=map$2charphsClassph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_120,0,sizeof(struct sClass*));
                        # 1347 "./neo-c.h"
                        it2_123=map$2charphsClassph_at(self,it_117,default_value_120);
                        # 1348 "./neo-c.h"
                        hash_124=string_get_hash_key(it_117)%size_110;
                        # 1349 "./neo-c.h"
                        n_125=hash_124;
                        # 1375 "./neo-c.h"
                        while(_while_condtional19=(_Bool)1,                        _while_condtional19) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional154=item_existance_113[n_125],                            _if_conditional154) {
                                # 1354 "./neo-c.h"
                                n_125++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional155=n_125>=size_110,                                _if_conditional155) {
                                    # 1357 "./neo-c.h"
                                    n_125=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional156=n_125==hash_124,                                    _if_conditional156) {
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
                                item_existance_113[n_125]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_111[n_125]=it_117;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_112[n_125]=map$2charphsClassph_at(self,it_117,default_value_126);
                                # 1371 "./neo-c.h"
                                len_114++;
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
                    self->keys=keys_111;
                    # 1382 "./neo-c.h"
                    self->items=items_112;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_113;
                    # 1385 "./neo-c.h"
                    self->size=size_110;
                    # 1386 "./neo-c.h"
                    self->len=len_114;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional146;
char* result_115;
char* __result102__;
_Bool _if_conditional147;
char* __result103__;
char* result_116;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional146=self==((void*)0),                        _if_conditional146) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_115,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result102__ = __result_obj__ = result_115;
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
                        memset(&result_116,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result104__ = __result_obj__ = result_116;
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
_Bool _if_conditional148;
char* result_118;
char* __result106__;
_Bool _if_conditional149;
char* __result107__;
char* result_119;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(char*));
memset(&result_119, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional148=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional148) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_118,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result106__ = __result_obj__ = result_118;
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
                        memset(&result_119,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result108__ = __result_obj__ = result_119;
                        return __result108__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_121;
unsigned int it_122;
_Bool _while_condtional18;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sClass* __result109__;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_121, 0, sizeof(unsigned int));
memset(&it_122, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_121=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_122=hash_121;
                            # 1251 "./neo-c.h"
                            while(_while_condtional18=(_Bool)1,                            _while_condtional18) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional150=self->item_existance[it_122],                                _if_conditional150) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional151=string_equals(self->keys[it_122],key),                                    _if_conditional151) {
                                        # 1234 "./neo-c.h"
                                        __result109__ = __result_obj__ = self->items[it_122];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result109__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_122++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional152=it_122>=self->size,                                    _if_conditional152) {
                                        # 1240 "./neo-c.h"
                                        it_122=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional153=it_122==hash_121,                                        _if_conditional153) {
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
int it2_129;
struct list_item$1charp* it_130;
_Bool _while_condtional21;
_Bool _if_conditional160;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_129, 0, sizeof(int));
memset(&it_130, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_129=0;
                                # 449 "./neo-c.h"
                                it_130=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional21=it_130!=((void*)0),                                _while_condtional21) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional160=string_equals(it_130->item,item),                                    _if_conditional160) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_129,it2_129+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_129++;
                                    # 457 "./neo-c.h"
                                    it_130=it_130->next;
                                }
                                # 460 "./neo-c.h"
                                __result116__ = __result_obj__ = self;
                                return __result116__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
int tmp_131;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct list$1charp* __result113__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct list_item$1charp* it_134;
int i_135;
_Bool _while_condtional23;
_Bool _if_conditional169;
struct list_item$1charp* prev_it_136;
_Bool _if_conditional170;
_Bool _if_conditional171;
struct list_item$1charp* it_137;
int i_138;
_Bool _while_condtional24;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct list_item$1charp* prev_it_139;
struct list_item$1charp* it_140;
struct list_item$1charp* head_prev_it_141;
struct list_item$1charp* tail_it_142;
int i_143;
_Bool _while_condtional25;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct list_item$1charp* prev_it_144;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_131, 0, sizeof(int));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
memset(&i_135, 0, sizeof(int));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&i_138, 0, sizeof(int));
memset(&prev_it_139, 0, sizeof(struct list_item$1charp*));
memset(&it_140, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_141, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_142, 0, sizeof(struct list_item$1charp*));
memset(&i_143, 0, sizeof(int));
memset(&prev_it_144, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional161=head<0,                                            _if_conditional161) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional162=tail<0,                                            _if_conditional162) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional163=head>tail,                                            _if_conditional163) {
                                                # 472 "./neo-c.h"
                                                tmp_131=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_131;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional164=head<0,                                            _if_conditional164) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional165=tail>self->len,                                            _if_conditional165) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional166=head==tail,                                            _if_conditional166) {
                                                # 486 "./neo-c.h"
                                                __result113__ = __result_obj__ = self;
                                                return __result113__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional167=head==0&&tail==self->len,                                            _if_conditional167) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional168=head==0,                                                _if_conditional168) {
                                                    # 494 "./neo-c.h"
                                                    it_134=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_135=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional23=it_134!=((void*)0),                                                    _while_condtional23) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional169=i_135<tail,                                                        _if_conditional169) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_136=it_134;
                                                            # 500 "./neo-c.h"
                                                            it_134=it_134->next;
                                                            # 501 "./neo-c.h"
                                                            i_135++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional170=i_135==tail,                                                            _if_conditional170) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_134;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_134=it_134->next;
                                                                # 514 "./neo-c.h"
                                                                i_135++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional171=tail==self->len,                                                    _if_conditional171) {
                                                        # 519 "./neo-c.h"
                                                        it_137=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_138=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional24=it_137!=((void*)0),                                                        _while_condtional24) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional172=i_138==head,                                                            _if_conditional172) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_137->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional173=i_138>=head,                                                            _if_conditional173) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_139=it_137;
                                                                # 530 "./neo-c.h"
                                                                it_137=it_137->next;
                                                                # 531 "./neo-c.h"
                                                                i_138++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_137=it_137->next;
                                                                # 539 "./neo-c.h"
                                                                i_138++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_140=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_141=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_142=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_143=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional25=it_140!=((void*)0),                                                        _while_condtional25) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional174=i_143==head,                                                            _if_conditional174) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_141=it_140->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional175=i_143==tail,                                                            _if_conditional175) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_142=it_140;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional176=i_143>=head&&i_143<tail,                                                            _if_conditional176) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_144=it_140;
                                                                # 563 "./neo-c.h"
                                                                it_140=it_140->next;
                                                                # 564 "./neo-c.h"
                                                                i_143++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_140=it_140->next;
                                                                # 572 "./neo-c.h"
                                                                i_143++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional177=head_prev_it_141!=((void*)0),                                                        _if_conditional177) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_141->next=tail_it_142;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional178=tail_it_142!=((void*)0),                                                        _if_conditional178) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_142->prev=head_prev_it_141;
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
struct list_item$1charp* it_132;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_133;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_132, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_133, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_132=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional22=it_132!=((void*)0),                                                    _while_condtional22) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_133=it_132;
                                                        # 436 "./neo-c.h"
                                                        it_132=it_132->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional184;
char* result_146;
char* __result117__;
_Bool _if_conditional185;
char* __result118__;
char* result_147;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional184=self==((void*)0),                _if_conditional184) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_146,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result117__ = __result_obj__ = result_146;
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
                memset(&result_147,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result119__ = __result_obj__ = result_147;
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
_Bool _if_conditional186;
char* result_149;
char* __result121__;
_Bool _if_conditional187;
char* __result122__;
char* result_150;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_149, 0, sizeof(char*));
memset(&result_150, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional186=self==((void*)0)||self->it==((void*)0),                _if_conditional186) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_149,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result121__ = __result_obj__ = result_149;
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
                memset(&result_150,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result123__ = __result_obj__ = result_150;
                return __result123__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional190;
void* right_value133;
struct list_item$1charp* litem_151;
_Bool _if_conditional191;
void* right_value134;
struct list_item$1charp* litem_152;
void* right_value135;
struct list_item$1charp* litem_153;
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charp*));
right_value134 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1charp*));
right_value135 = (void*)0;
memset(&litem_153, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional190=self->len==0,                    _if_conditional190) {
                        # 226 "./neo-c.h"
                        litem_151=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value133=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_151->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_151->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_151->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_151;
                        # 233 "./neo-c.h"
                        self->head=litem_151;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional191=self->len==1,                        _if_conditional191) {
                            # 236 "./neo-c.h"
                            litem_152=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value134=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_152->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_152->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_152->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_152;
                            # 243 "./neo-c.h"
                            self->head->next=litem_152;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_153=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value135=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_153->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_153->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_153->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_153;
                            # 253 "./neo-c.h"
                            self->tail=litem_153;
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
_Bool _if_conditional192;
void* right_value138;
struct list_item$1tuple2$2charphsTypephph* litem_160;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional195;
void* right_value139;
struct list_item$1tuple2$2charphsTypephph* litem_161;
struct tuple2$2charphsTypeph* __dec_obj36;
void* right_value140;
struct list_item$1tuple2$2charphsTypephph* litem_162;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value139 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value140 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional192=self->len==0,                _if_conditional192) {
                    # 226 "./neo-c.h"
                    litem_160=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value138=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_160->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_160->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj35=litem_160->item;
                    litem_160->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_160;
                    # 233 "./neo-c.h"
                    self->head=litem_160;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional195=self->len==1,                    _if_conditional195) {
                        # 236 "./neo-c.h"
                        litem_161=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value139=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_161->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_161->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj36=litem_161->item;
                        litem_161->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_161;
                        # 243 "./neo-c.h"
                        self->head->next=litem_161;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_162=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value140=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_162->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_162->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj37=litem_162->item;
                        litem_162->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_162;
                        # 253 "./neo-c.h"
                        self->tail=litem_162;
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
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsTypeph_finalize"
                        # 0 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional193) {
                            # 0 "tuple2$2charphsTypeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsTypeph_finalize"
                        # 1 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional194) {
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
struct list_item$1sTypeph* it_163;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_164;
struct list$1sTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_163, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_164, 0, sizeof(struct list_item$1sTypeph*));
            # 433 "./neo-c.h"
            it_163=self->head;
            # 440 "./neo-c.h"
            while(_while_condtional26=it_163!=((void*)0),            _while_condtional26) {
                # 435 "./neo-c.h"
                prev_it_164=it_163;
                # 436 "./neo-c.h"
                it_163=it_163->next;
                # 437 "./neo-c.h"
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value156;
char* __dec_obj43;
void* right_value157;
char* __dec_obj44;
void* right_value171;
struct sClass* __dec_obj53;
struct sStructNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value171 = (void*)0;
    # 233 "14struct.c"
    self->sline=info->sline;
    # 234 "14struct.c"
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 236 "14struct.c"
    __dec_obj44=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(name))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 237 "14struct.c"
    __dec_obj53=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 239 "14struct.c"
    self->mOutput=output;
    # 241 "14struct.c"
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
_Bool _if_conditional201;
struct sClass* __result131__;
void* right_value158;
struct sClass* result_174;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value159;
char* __dec_obj45;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value169;
struct list$1tuple2$2charphsTypephph* __dec_obj51;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value170;
char* __dec_obj52;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sClass* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&result_174, 0, sizeof(struct sClass*));
right_value159 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional201=self==(void*)0,        _if_conditional201) {
            # 2 "sClass_clone"
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        # 3 "sClass_clone"
        result_174=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value158=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer2(sClass_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional202=self!=((void*)0),        _if_conditional202) {
            # 4 "sClass_clone"
            result_174->mStruct=self->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional203=self!=((void*)0),        _if_conditional203) {
            # 5 "sClass_clone"
            result_174->mFloat=self->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional204=self!=((void*)0),        _if_conditional204) {
            # 6 "sClass_clone"
            result_174->mUnion=self->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional205=self!=((void*)0),        _if_conditional205) {
            # 7 "sClass_clone"
            result_174->mGenerics=self->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional206=self!=((void*)0),        _if_conditional206) {
            # 8 "sClass_clone"
            result_174->mMethodGenerics=self->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional207=self!=((void*)0),        _if_conditional207) {
            # 9 "sClass_clone"
            result_174->mEnum=self->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional208=self!=((void*)0),        _if_conditional208) {
            # 10 "sClass_clone"
            result_174->mProtocol=self->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional209=self!=((void*)0),        _if_conditional209) {
            # 11 "sClass_clone"
            result_174->mNumber=self->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional210=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional210) {
            # 12 "sClass_clone"
            __dec_obj45=result_174->mName;
            result_174->mName=(char*)come_increment_ref_count(((char*)(right_value159=string_clone(self->mName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional211=self!=((void*)0),        _if_conditional211) {
            # 13 "sClass_clone"
            result_174->mGenericsNum=self->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional212=self!=((void*)0),        _if_conditional212) {
            # 14 "sClass_clone"
            result_174->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional213=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional213) {
            # 15 "sClass_clone"
            __dec_obj51=result_174->mFields;
            result_174->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value169=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional220=self!=((void*)0),        _if_conditional220) {
            # 16 "sClass_clone"
            result_174->mOutputed=self->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional221=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional221) {
            # 17 "sClass_clone"
            __dec_obj52=result_174->mDeclareSName;
            result_174->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value170=string_clone(self->mDeclareSName))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 19 "sClass_clone"
        # 18 "sClass_clone"
        if(_if_conditional222=self!=((void*)0),        _if_conditional222) {
            # 18 "sClass_clone"
            result_174->mNobodyStruct=self->mNobodyStruct;
        }
        # 20 "sClass_clone"
        # 19 "sClass_clone"
        if(_if_conditional223=self!=((void*)0),        _if_conditional223) {
            # 19 "sClass_clone"
            result_174->mParent=self->mParent;
        }
        # 20 "sClass_clone"
        __result138__ = __result_obj__ = result_174;
        come_call_finalizer2(sClass_finalize,result_174, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer2(sClass_finalize,result_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional214;
struct list$1tuple2$2charphsTypephph* __result132__;
void* right_value160;
void* right_value161;
struct list$1tuple2$2charphsTypephph* result_175;
struct list_item$1tuple2$2charphsTypephph* it_176;
_Bool _while_condtional27;
void* right_value168;
struct list$1tuple2$2charphsTypephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&result_175, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_176, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value168 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional214=self==((void*)0),                _if_conditional214) {
                    # 140 "./neo-c.h"
                    __result132__ = __result_obj__ = ((void*)0);
                    return __result132__;
                }
                # 142 "./neo-c.h"
                result_175=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value161=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value160=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_176=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional27=it_176!=((void*)0),                _while_condtional27) {
                    # 146 "./neo-c.h"
                    list$1tuple2$2charphsTypephph_add(result_175,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value168=tuple2$2charphsTypephp_clone(it_176->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_176=it_176->next;
                }
                # 151 "./neo-c.h"
                __result137__ = __result_obj__ = result_175;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional215;
void* right_value162;
struct list_item$1tuple2$2charphsTypephph* litem_177;
struct tuple2$2charphsTypeph* __dec_obj46;
_Bool _if_conditional216;
void* right_value163;
struct list_item$1tuple2$2charphsTypephph* litem_178;
struct tuple2$2charphsTypeph* __dec_obj47;
void* right_value164;
struct list_item$1tuple2$2charphsTypephph* litem_179;
struct tuple2$2charphsTypeph* __dec_obj48;
struct list$1tuple2$2charphsTypephph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&litem_177, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value163 = (void*)0;
memset(&litem_178, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value164 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional215=self->len==0,                        _if_conditional215) {
                            # 156 "./neo-c.h"
                            litem_177=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value162=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_177->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_177->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj46=litem_177->item;
                            litem_177->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_177;
                            # 163 "./neo-c.h"
                            self->head=litem_177;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional216=self->len==1,                            _if_conditional216) {
                                # 166 "./neo-c.h"
                                litem_178=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value163=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_178->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_178->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj47=litem_178->item;
                                litem_178->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_178;
                                # 173 "./neo-c.h"
                                self->head->next=litem_178;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_179=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value164=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_179->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_179->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj48=litem_179->item;
                                litem_179->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_179;
                                # 183 "./neo-c.h"
                                self->tail=litem_179;
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
_Bool _if_conditional217;
struct tuple2$2charphsTypeph* __result135__;
void* right_value165;
struct tuple2$2charphsTypeph* result_180;
_Bool _if_conditional218;
void* right_value166;
char* __dec_obj49;
_Bool _if_conditional219;
void* right_value167;
struct sType* __dec_obj50;
struct tuple2$2charphsTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&result_180, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value166 = (void*)0;
right_value167 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional217=self==(void*)0,                        _if_conditional217) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result135__ = __result_obj__ = (void*)0;
                            return __result135__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_180=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional218=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional218) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj49=result_180->v1;
                            result_180->v1=(char*)come_increment_ref_count(((char*)(right_value166=string_clone(self->v1))));
                            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional219=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional219) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj50=result_180->v2;
                            result_180->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result136__ = __result_obj__ = result_180;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 246 "14struct.c"
    __result140__ = (_Bool)1;
    return __result140__;
}

char* sStructNode_kind(){
void* __result_obj__;
void* right_value172;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    # 251 "14struct.c"
    __result141__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sStructNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value173;
struct sClass* klass_181;
void* right_value174;
char* name_182;
_Bool _if_conditional227;
void* right_value175;
_Bool _if_conditional229;
struct sClass* klass2_183;
void* right_value176;
struct list$1tuple2$2charphsTypephph* __dec_obj54;
void* right_value177;
void* right_value178;
struct sType* type_184;
void* right_value182;
_Bool _if_conditional252;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&klass_181, 0, sizeof(struct sClass*));
right_value174 = (void*)0;
memset(&name_182, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&klass2_183, 0, sizeof(struct sClass*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&type_184, 0, sizeof(struct sType*));
right_value182 = (void*)0;
    # 256 "14struct.c"
    klass_181=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value173=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 257 "14struct.c"
    name_182=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(self->mName))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 267 "14struct.c"
    # 259 "14struct.c"
    if(_if_conditional227=map$2charphsClassph_at(info->classes,name_182,((void*)0))==((void*)0),    _if_conditional227) {
        # 260 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_182),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value175=sClass_clone(klass_181)))));
        come_call_finalizer2(sClass_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 267 "14struct.c"
        # 262 "14struct.c"
        if(_if_conditional229=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_182,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_181->mFields)>0,        _if_conditional229) {
            # 263 "14struct.c"
            klass2_183=map$2charphsClassph_at(info->classes,name_182,((void*)0));
            # 264 "14struct.c"
            __dec_obj54=klass2_183->mFields;
            klass2_183->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value176=list$1tuple2$2charphsTypephphp_clone(klass_181->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    # 267 "14struct.c"
    type_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 267, "sType")))),name_182,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 268 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(type_184)))));
    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 274 "14struct.c"
    # 270 "14struct.c"
    if(self->mOutput) {
        # 271 "14struct.c"
        output_struct(klass_181,info);
    }
    # 274 "14struct.c"
    __result156__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer2(sClass_finalize,klass_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional228;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional228=self==((void*)0),            _if_conditional228) {
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
_Bool _if_conditional230;
unsigned int hash_202;
unsigned int it_203;
_Bool _while_condtional30;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool same_key_exist_204;
char* it2_205;
_Bool _if_conditional250;
_Bool _if_conditional251;
struct map$2charphsTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_202, 0, sizeof(unsigned int));
memset(&it_203, 0, sizeof(unsigned int));
memset(&same_key_exist_204, 0, sizeof(_Bool));
memset(&it2_205, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional230=self->len*10>=self->size,        _if_conditional230) {
            # 1391 "./neo-c.h"
            map$2charphsTypeph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_202=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_203=hash_202;
        # 1452 "./neo-c.h"
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional242=self->item_existance[it_203],            _if_conditional242) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional243=string_equals(self->keys[it_203],key),                _if_conditional243) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional244=1,                    _if_conditional244) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_203]);
                        # 1403 "./neo-c.h"
                        self->keys[it_203] = come_decrement_ref_count2(self->keys[it_203], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_203]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_203]);
                        # 1408 "./neo-c.h"
                        self->keys[it_203]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional245=1,                    _if_conditional245) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sType_finalize,self->items[it_203], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_203]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_203]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_203++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional246=it_203>=self->size,                _if_conditional246) {
                    # 1423 "./neo-c.h"
                    it_203=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional247=it_203==hash_202,                    _if_conditional247) {
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
                self->item_existance[it_203]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional248=1,                _if_conditional248) {
                    # 1434 "./neo-c.h"
                    self->keys[it_203]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_203]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional249=1,                _if_conditional249) {
                    # 1440 "./neo-c.h"
                    self->items[it_203]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_203]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_204=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_205=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_205=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional250=string_equals(it2_205,key),            _if_conditional250) {
                # 1456 "./neo-c.h"
                same_key_exist_204=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional251=!same_key_exist_204,        _if_conditional251) {
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
int size_185;
void* right_value179;
char** keys_186;
void* right_value180;
struct sType** items_187;
void* right_value181;
_Bool* item_existance_188;
int len_189;
char* it_192;
struct sType* default_value_195;
struct sType* it2_198;
unsigned int hash_199;
int n_200;
_Bool _while_condtional29;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sType* default_value_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_185, 0, sizeof(int));
right_value179 = (void*)0;
memset(&keys_186, 0, sizeof(char**));
right_value180 = (void*)0;
memset(&items_187, 0, sizeof(struct sType**));
right_value181 = (void*)0;
memset(&item_existance_188, 0, sizeof(_Bool*));
memset(&len_189, 0, sizeof(int));
memset(&it_192, 0, sizeof(char*));
memset(&default_value_195, 0, sizeof(struct sType*));
memset(&it2_198, 0, sizeof(struct sType*));
memset(&hash_199, 0, sizeof(unsigned int));
memset(&n_200, 0, sizeof(int));
memset(&default_value_201, 0, sizeof(struct sType*));
                # 1337 "./neo-c.h"
                size_185=self->size*10;
                # 1338 "./neo-c.h"
                keys_186=(char**)come_increment_ref_count(((char**)(right_value179=(char**)come_calloc(1, sizeof(char*)*(1*(size_185)), "./neo-c.h", 1338, "char*%"))));
                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_187=(struct sType**)come_increment_ref_count(((struct sType**)(right_value180=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_185)), "./neo-c.h", 1339, "sType*%"))));
                come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_188=(_Bool*)come_increment_ref_count(((_Bool*)(right_value181=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_185)), "./neo-c.h", 1340, "bool"))));
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_189=0;
                # 1377 "./neo-c.h"
                for(                it_192=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_192=map$2charphsTypeph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_195,0,sizeof(struct sType*));
                    # 1347 "./neo-c.h"
                    it2_198=map$2charphsTypeph_at(self,it_192,default_value_195);
                    # 1348 "./neo-c.h"
                    hash_199=string_get_hash_key(it_192)%size_185;
                    # 1349 "./neo-c.h"
                    n_200=hash_199;
                    # 1375 "./neo-c.h"
                    while(_while_condtional29=(_Bool)1,                    _while_condtional29) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional239=item_existance_188[n_200],                        _if_conditional239) {
                            # 1354 "./neo-c.h"
                            n_200++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional240=n_200>=size_185,                            _if_conditional240) {
                                # 1357 "./neo-c.h"
                                n_200=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional241=n_200==hash_199,                                _if_conditional241) {
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
                            item_existance_188[n_200]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_186[n_200]=it_192;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_187[n_200]=map$2charphsTypeph_at(self,it_192,default_value_201);
                            # 1371 "./neo-c.h"
                            len_189++;
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
                self->keys=keys_186;
                # 1382 "./neo-c.h"
                self->items=items_187;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_188;
                # 1385 "./neo-c.h"
                self->size=size_185;
                # 1386 "./neo-c.h"
                self->len=len_189;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional231;
char* result_190;
char* __result144__;
_Bool _if_conditional232;
char* __result145__;
char* result_191;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional231=self==((void*)0),                    _if_conditional231) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_190,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result144__ = __result_obj__ = result_190;
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
                    memset(&result_191,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result146__ = __result_obj__ = result_191;
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
_Bool _if_conditional233;
char* result_193;
char* __result148__;
_Bool _if_conditional234;
char* __result149__;
char* result_194;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional233=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional233) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_193,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result148__ = __result_obj__ = result_193;
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
                    memset(&result_194,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result150__ = __result_obj__ = result_194;
                    return __result150__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_196;
unsigned int it_197;
_Bool _while_condtional28;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct sType* __result151__;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct sType* __result152__;
struct sType* __result153__;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_196, 0, sizeof(unsigned int));
memset(&it_197, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_196=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_197=hash_196;
                        # 1251 "./neo-c.h"
                        while(_while_condtional28=(_Bool)1,                        _while_condtional28) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional235=self->item_existance[it_197],                            _if_conditional235) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional236=string_equals(self->keys[it_197],key),                                _if_conditional236) {
                                    # 1234 "./neo-c.h"
                                    __result151__ = __result_obj__ = self->items[it_197];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                }
                                # 1237 "./neo-c.h"
                                it_197++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional237=it_197>=self->size,                                _if_conditional237) {
                                    # 1240 "./neo-c.h"
                                    it_197=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional238=it_197==hash_196,                                    _if_conditional238) {
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
    # 279 "14struct.c"
    __result157__ = self->sline;
    return __result157__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    # 284 "14struct.c"
    __result158__ = __result_obj__ = ((char*)(right_value183=__builtin_string(self->sname)));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value184;
char* __dec_obj55;
void* right_value185;
char* __dec_obj56;
void* right_value186;
struct sClass* __dec_obj57;
struct sStructNobodyNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
    # 298 "14struct.c"
    self->sline=info->sline;
    # 299 "14struct.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 301 "14struct.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 302 "14struct.c"
    __dec_obj57=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 304 "14struct.c"
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
    # 309 "14struct.c"
    __result160__ = (_Bool)1;
    return __result160__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
void* right_value187;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    # 314 "14struct.c"
    __result161__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sStructNobodyNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value188;
char* name_206;
struct sClass* klass_207;
_Bool _if_conditional256;
void* right_value189;
void* right_value190;
void* right_value191;
struct sType* type_208;
void* right_value192;
_Bool _if_conditional257;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&name_206, 0, sizeof(char*));
memset(&klass_207, 0, sizeof(struct sClass*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&type_208, 0, sizeof(struct sType*));
right_value192 = (void*)0;
    # 319 "14struct.c"
    name_206=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(self->mName))));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 320 "14struct.c"
    klass_207=self->mClass;
    # 326 "14struct.c"
    # 322 "14struct.c"
    if(_if_conditional256=map$2charphsClassph_at(info->classes,name_206,((void*)0))==((void*)0),    _if_conditional256) {
        # 323 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_206),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value189=sClass_clone(klass_207)))));
        come_call_finalizer2(sClass_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 326 "14struct.c"
    type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 326, "sType")))),name_206,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 328 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(type_208)))));
    come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 336 "14struct.c"
    # 330 "14struct.c"
    if(_if_conditional257=info->output_header_file&&string_operator_not_equals(klass_207->mDeclareSName,info->base_sname),    _if_conditional257) {
    }
    else {
        # 333 "14struct.c"
        add_come_code_at_source_head(info,"struct %s;\n",name_206);
    }
    # 336 "14struct.c"
    __result162__ = (_Bool)1;
    name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result162__;
    name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 341 "14struct.c"
    __result163__ = self->sline;
    return __result163__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    # 346 "14struct.c"
    __result164__ = __result_obj__ = ((char*)(right_value193=__builtin_string(self->sname)));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj58;
struct sGenericsStructNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    # 357 "14struct.c"
    self->sline=info->sline;
    # 358 "14struct.c"
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 360 "14struct.c"
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 366 "14struct.c"
    __result166__ = (_Bool)1;
    return __result166__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
void* right_value195;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    # 371 "14struct.c"
    __result167__ = __result_obj__ = ((char*)(right_value195=__builtin_string("sGenericsStructNode")));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    # 377 "14struct.c"
    __result168__ = (_Bool)1;
    return __result168__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 382 "14struct.c"
    __result169__ = self->sline;
    return __result169__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value196;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    # 387 "14struct.c"
    __result170__ = __result_obj__ = ((char*)(right_value196=__builtin_string(self->sname)));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value197;
char* __dec_obj59;
void* right_value198;
char* __dec_obj60;
void* right_value199;
struct sClass* __dec_obj61;
struct list$1sNodeph* __dec_obj62;
struct sClassNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    # 405 "14struct.c"
    self->sline=info->sline;
    # 406 "14struct.c"
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 408 "14struct.c"
    __dec_obj60=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(name))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 409 "14struct.c"
    __dec_obj61=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 411 "14struct.c"
    __dec_obj62=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 413 "14struct.c"
    self->mOutput=output;
    # 415 "14struct.c"
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
    # 420 "14struct.c"
    __result172__ = (_Bool)1;
    return __result172__;
}

char* sClassNode_kind(){
void* __result_obj__;
void* right_value200;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    # 425 "14struct.c"
    __result173__ = __result_obj__ = ((char*)(right_value200=__builtin_string("sClassNode")));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value201;
struct sClass* klass_209;
void* right_value202;
char* name_210;
_Bool _if_conditional263;
void* right_value203;
_Bool _if_conditional264;
struct sClass* klass2_211;
void* right_value204;
struct list$1tuple2$2charphsTypephph* __dec_obj63;
void* right_value205;
void* right_value206;
struct sType* type_212;
void* right_value207;
_Bool _if_conditional265;
struct list$1sNodeph* o2_saved_213;
struct sNode* it_216;
_Bool _if_conditional270;
_Bool __result181__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
memset(&klass_209, 0, sizeof(struct sClass*));
right_value202 = (void*)0;
memset(&name_210, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&klass2_211, 0, sizeof(struct sClass*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&type_212, 0, sizeof(struct sType*));
right_value207 = (void*)0;
memset(&o2_saved_213, 0, sizeof(struct list$1sNodeph*));
memset(&it_216, 0, sizeof(struct sNode*));
    # 430 "14struct.c"
    klass_209=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 431 "14struct.c"
    name_210=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(self->mName))));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 441 "14struct.c"
    # 433 "14struct.c"
    if(_if_conditional263=map$2charphsClassph_at(info->classes,name_210,((void*)0))==((void*)0),    _if_conditional263) {
        # 434 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_210),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_clone(klass_209)))));
        come_call_finalizer2(sClass_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 441 "14struct.c"
        # 436 "14struct.c"
        if(_if_conditional264=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_210,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_209->mFields)>0,        _if_conditional264) {
            # 437 "14struct.c"
            klass2_211=map$2charphsClassph_at(info->classes,name_210,((void*)0));
            # 438 "14struct.c"
            __dec_obj63=klass2_211->mFields;
            klass2_211->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value204=list$1tuple2$2charphsTypephphp_clone(klass_209->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    # 441 "14struct.c"
    type_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value205=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 441, "sType")))),name_210,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 442 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_210),(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(type_212)))));
    come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 453 "14struct.c"
    # 444 "14struct.c"
    if(self->mOutput) {
        # 450 "14struct.c"
        for(        o2_saved_213=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_216=list$1sNodeph_begin((o2_saved_213));        !list$1sNodeph_end((o2_saved_213));        it_216=list$1sNodeph_next((o2_saved_213))        ){
            # 449 "14struct.c"
            # 446 "14struct.c"
            if(_if_conditional270=!node_compile(it_216,info),            _if_conditional270) {
                # 447 "14struct.c"
                __result181__ = (_Bool)0;
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,klass_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result181__;
            }
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 450 "14struct.c"
        output_struct(klass_209,info);
    }
    # 453 "14struct.c"
    __result182__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result182__;
    come_call_finalizer2(sClass_finalize,klass_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional266;
struct sNode* result_214;
struct sNode* __result174__;
_Bool _if_conditional267;
struct sNode* __result175__;
struct sNode* result_215;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_214, 0, sizeof(struct sNode*));
memset(&result_215, 0, sizeof(struct sNode*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional266=self==((void*)0),            _if_conditional266) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_214,0,sizeof(struct sNode*));
                # 288 "./neo-c.h"
                __result174__ = __result_obj__ = result_214;
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
            memset(&result_215,0,sizeof(struct sNode*));
            # 298 "./neo-c.h"
            __result176__ = __result_obj__ = result_215;
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
_Bool _if_conditional268;
struct sNode* result_217;
struct sNode* __result178__;
_Bool _if_conditional269;
struct sNode* __result179__;
struct sNode* result_218;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct sNode*));
memset(&result_218, 0, sizeof(struct sNode*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional268=self==((void*)0)||self->it==((void*)0),            _if_conditional268) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_217,0,sizeof(struct sNode*));
                # 305 "./neo-c.h"
                __result178__ = __result_obj__ = result_217;
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
            memset(&result_218,0,sizeof(struct sNode*));
            # 316 "./neo-c.h"
            __result180__ = __result_obj__ = result_218;
            return __result180__;
}

int sClassNode_sline(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    # 458 "14struct.c"
    __result183__ = self->sline;
    return __result183__;
}

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value208;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    # 463 "14struct.c"
    __result184__ = __result_obj__ = ((char*)(right_value208=__builtin_string(self->sname)));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_219;
_Bool output_220;
_Bool _if_conditional271;
void* right_value209;
void* right_value210;
void* right_value211;
struct sClass* __dec_obj64;
void* right_value212;
void* right_value213;
struct sClass* __dec_obj65;
_Bool _if_conditional272;
_Bool _while_condtional32;
_Bool multiple_declare_223;
char* p_224;
int sline_225;
_Bool no_output_err_226;
void* right_value214;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_227;
char* name_228;
_Bool err_229;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value215;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_230;
char* name_231;
_Bool err_232;
void* right_value216;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_233;
char* name2_234;
_Bool _if_conditional279;
void* right_value217;
void* right_value218;
_Bool _while_condtional33;
void* right_value219;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_235;
char* name2_236;
_Bool _if_conditional280;
void* right_value220;
void* right_value221;
void* right_value222;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_237;
char* name_238;
_Bool err_239;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value223;
void* right_value224;
_Bool _if_conditional283;
void* right_value225;
void* right_value226;
void* right_value227;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value232;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_219, 0, sizeof(struct sClass*));
memset(&output_220, 0, sizeof(_Bool));
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&multiple_declare_223, 0, sizeof(_Bool));
memset(&p_224, 0, sizeof(char*));
memset(&sline_225, 0, sizeof(int));
memset(&no_output_err_226, 0, sizeof(_Bool));
right_value214 = (void*)0;
memset(&type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
right_value215 = (void*)0;
memset(&base_type_230, 0, sizeof(struct sType*));
memset(&name_231, 0, sizeof(char*));
memset(&err_232, 0, sizeof(_Bool));
memset(&base_type_230, 0, sizeof(struct sType*));
memset(&name_231, 0, sizeof(char*));
memset(&err_232, 0, sizeof(_Bool));
right_value216 = (void*)0;
memset(&type2_233, 0, sizeof(struct sType*));
memset(&name2_234, 0, sizeof(char*));
memset(&type2_233, 0, sizeof(struct sType*));
memset(&name2_234, 0, sizeof(char*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&type2_235, 0, sizeof(struct sType*));
memset(&name2_236, 0, sizeof(char*));
memset(&type2_235, 0, sizeof(struct sType*));
memset(&name2_236, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&type2_237, 0, sizeof(struct sType*));
memset(&name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
memset(&type2_237, 0, sizeof(struct sType*));
memset(&name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value232 = (void*)0;
    # 468 "14struct.c"
    # 469 "14struct.c"
    # 482 "14struct.c"
    # 470 "14struct.c"
    if(_if_conditional271=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional271) {
        # 471 "14struct.c"
        output_220=(_Bool)1;
        # 472 "14struct.c"
        __dec_obj64=klass_219;
        klass_219=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 472, "sClass")))),((char*)(right_value210=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 473 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_219));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 476 "14struct.c"
        __dec_obj65=klass_219;
        klass_219=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 480 "14struct.c"
        # 477 "14struct.c"
        if(_if_conditional272=list$1tuple2$2charphsTypephph_length(klass_219->mFields)>0,        _if_conditional272) {
            # 478 "14struct.c"
            output_220=(_Bool)0;
        }
    }
    # 482 "14struct.c"
    list$1tuple2$2charphsTypephph_reset(klass_219->mFields);
    # 484 "14struct.c"
    expected_next_character(123,info);
    # 549 "14struct.c"
    while(_while_condtional32=(_Bool)1,    _while_condtional32) {
        # 487 "14struct.c"
        multiple_declare_223=(_Bool)0;
        # 505 "14struct.c"
        {
            # 489 "14struct.c"
            p_224=info->p;
            # 490 "14struct.c"
            sline_225=info->sline;
            # 492 "14struct.c"
            no_output_err_226=info->no_output_err;
            # 493 "14struct.c"
            info->no_output_err=(_Bool)1;
            # 494 "14struct.c"
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value214=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_227=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_228=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_229=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 495 "14struct.c"
            info->no_output_err=no_output_err_226;
            # 501 "14struct.c"
            # 497 "14struct.c"
            if(_if_conditional275=err_229&&*info->p==44,            _if_conditional275) {
                # 498 "14struct.c"
                multiple_declare_223=(_Bool)1;
            }
            # 501 "14struct.c"
            info->p=p_224;
            # 502 "14struct.c"
            info->sline=sline_225;
            come_call_finalizer2(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 537 "14struct.c"
        # 505 "14struct.c"
        if(multiple_declare_223) {
            # 506 "14struct.c"
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value215=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_230=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_231=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_232=multiple_assign_var5->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 508 "14struct.c"
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value216=parse_variable_name((struct sType*)come_increment_ref_count(base_type_230),(_Bool)1,info)));
            type2_233=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_234=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 514 "14struct.c"
            # 510 "14struct.c"
            if(_if_conditional279=!info->no_output_err,            _if_conditional279) {
                # 511 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value218=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value217=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 511, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_234),(struct sType*)come_increment_ref_count(type2_233))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 524 "14struct.c"
            while(_while_condtional33=*info->p==44,            _while_condtional33) {
                # 515 "14struct.c"
                info->p++;
                # 516 "14struct.c"
                skip_spaces_and_lf(info);
                # 518 "14struct.c"
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value219=parse_variable_name((struct sType*)come_increment_ref_count(base_type_230),(_Bool)0,info)));
                type2_235=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_236=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 523 "14struct.c"
                # 520 "14struct.c"
                if(_if_conditional280=!info->no_output_err,                _if_conditional280) {
                    # 521 "14struct.c"
                    list$1tuple2$2charphsTypephph_push_back(klass_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value221=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value220=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 521, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_236),(struct sType*)come_increment_ref_count(type2_235))))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type2_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name2_236 = come_decrement_ref_count2(name2_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,base_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name2_234 = come_decrement_ref_count2(name2_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 526 "14struct.c"
            parse_sharp_v5(info);
            # 527 "14struct.c"
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value222=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_237=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_238=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_239=multiple_assign_var8->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 533 "14struct.c"
            # 528 "14struct.c"
            if(_if_conditional281=!err_239,            _if_conditional281) {
                # 529 "14struct.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 530 "14struct.c"
                exit(2);
            }
            # 536 "14struct.c"
            # 533 "14struct.c"
            if(_if_conditional282=!info->no_output_err,            _if_conditional282) {
                # 534 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value224=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 534, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_238),(struct sType*)come_increment_ref_count(type2_237))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type2_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_238 = come_decrement_ref_count2(name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 537 "14struct.c"
        expected_next_character(59,info);
        # 539 "14struct.c"
        parse_sharp_v5(info);
        # 546 "14struct.c"
        # 541 "14struct.c"
        if(_if_conditional283=*info->p==125,        _if_conditional283) {
            # 542 "14struct.c"
            info->p++;
            # 543 "14struct.c"
            skip_spaces_and_lf(info);
            # 544 "14struct.c"
            break;
        }
        # 546 "14struct.c"
        parse_sharp_v5(info);
    }
    # 549 "14struct.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 549, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value227=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value225=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 549, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_219),output_220,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result188__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sStructNode_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStructNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result188__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_221;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_222;
struct list$1tuple2$2charphsTypephph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 433 "./neo-c.h"
        it_221=self->head;
        # 440 "./neo-c.h"
        while(_while_condtional31=it_221!=((void*)0),        _while_condtional31) {
            # 435 "./neo-c.h"
            prev_it_222=it_221;
            # 436 "./neo-c.h"
            it_221=it_221->next;
            # 437 "./neo-c.h"
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional273;
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional273=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional273) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional274=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional274) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional277=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional277) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional278=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional278) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional293;
char* source_head_241;
void* right_value233;
char* type_name_242;
_Bool _if_conditional294;
struct sClass* struct_class_243;
_Bool _if_conditional295;
void* right_value234;
void* right_value235;
struct sClass* __dec_obj69;
struct sClass* __dec_obj70;
char* source_tail_244;
void* right_value236;
void* right_value237;
struct buffer* header_245;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value246;
struct sNode* __result191__;
_Bool _if_conditional304;
_Bool _while_condtional35;
void* right_value247;
char* T_249;
void* right_value251;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct sClass* generics_class_253;
_Bool _if_conditional309;
void* right_value252;
void* right_value253;
struct sClass* __dec_obj77;
_Bool _if_conditional310;
_Bool _while_condtional36;
void* right_value254;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_254;
char* name_255;
_Bool err_256;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value255;
void* right_value256;
_Bool _while_condtional37;
void* right_value257;
char* name2_257;
void* right_value258;
struct sType* type3_258;
_Bool _if_conditional313;
_Bool no_comma_259;
void* right_value259;
struct sNode* node_260;
struct sNode* __dec_obj78;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
_Bool _if_conditional314;
char* source_tail_261;
void* right_value264;
void* right_value265;
struct buffer* header_262;
void* right_value266;
void* right_value267;
void* right_value268;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value271;
struct sNode* __result196__;
_Bool output_264;
struct sClass* struct_class_265;
_Bool _if_conditional319;
void* right_value272;
void* right_value273;
struct sClass* __dec_obj80;
void* right_value274;
struct sClass* __dec_obj81;
_Bool _if_conditional320;
_Bool _while_condtional38;
_Bool multiple_declare_266;
char* p_267;
int sline_268;
_Bool no_output_err_269;
void* right_value275;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_270;
char* name_271;
_Bool err_272;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value276;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_273;
char* name_274;
_Bool err_275;
void* right_value277;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_276;
char* name2_277;
void* right_value278;
void* right_value279;
_Bool _while_condtional39;
void* right_value280;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_278;
char* name2_279;
void* right_value281;
void* right_value282;
void* right_value283;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_280;
char* name_281;
_Bool err_282;
_Bool _if_conditional323;
void* right_value284;
void* right_value285;
_Bool _if_conditional324;
struct sClass* klass2_283;
_Bool _if_conditional325;
_Bool _if_conditional326;
char* source_tail_284;
void* right_value286;
void* right_value287;
struct buffer* header_285;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value297;
struct sNode* __result199__;
_Bool _if_conditional336;
char* source_head_287;
void* right_value298;
char* type_name_288;
struct sClass* parent_class_289;
_Bool _if_conditional337;
void* right_value299;
void* right_value300;
char* parent_class_name_290;
_Bool _if_conditional338;
struct sNode* __result200__;
void* right_value301;
void* right_value302;
struct list$1sClassp* parent_classes_293;
struct sClass* parent_class2_294;
_Bool output_298;
struct sClass* struct_class_299;
_Bool _if_conditional341;
void* right_value306;
void* right_value307;
struct sClass* __dec_obj85;
void* right_value308;
struct sClass* __dec_obj86;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value309;
void* right_value315;
struct list$1sClassp* o2_saved_305;
struct sClass* parent_308;
struct list$1tuple2$2charphsTypephph* o2_saved_311;
struct tuple2$2charphsTypeph* it_312;
_Bool _if_conditional351;
struct sClass* klass2_313;
_Bool _if_conditional352;
void* right_value316;
struct list$1sClassp* o2_saved_314;
struct sClass* parent_315;
struct list$1tuple2$2charphsTypephph* o2_saved_316;
struct tuple2$2charphsTypeph* it_317;
struct list$1tuple2$2charphsTypephph* o2_saved_318;
struct tuple2$2charphsTypeph* it_319;
void* right_value317;
void* right_value318;
struct list$1sNodeph* methods_320;
_Bool _while_condtional42;
_Bool multiple_declare_321;
char* p_322;
int sline_323;
_Bool no_output_err_324;
void* right_value319;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type_325;
char* name_326;
_Bool err_327;
_Bool _if_conditional353;
_Bool define_function_flag_328;
char* p_329;
int sline_330;
_Bool invalid_type_331;
_Bool _if_conditional354;
void* right_value320;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_332;
char* fun_name_333;
_Bool err_334;
char* word_335;
_Bool _if_conditional355;
void* right_value321;
char* __dec_obj87;
_Bool _if_conditional356;
void* right_value322;
char* __dec_obj88;
char* __dec_obj89;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _while_condtional43;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value323;
char* __dec_obj90;
_Bool _if_conditional363;
_Bool _if_conditional364;
int pointer_num_336;
void* right_value324;
void* right_value325;
struct sType* __dec_obj91;
void* right_value326;
struct sNode* method_337;
struct sType* __dec_obj92;
_Bool _if_conditional367;
void* right_value330;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* base_type_341;
char* name_342;
_Bool err_343;
void* right_value331;
struct tuple2$2sTypephcharph* multiple_assign_var18;
struct sType* type2_344;
char* name2_345;
void* right_value332;
void* right_value333;
_Bool _while_condtional44;
void* right_value334;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_346;
char* name2_347;
void* right_value335;
void* right_value336;
void* right_value337;
struct tuple3$3sTypephcharphbool* multiple_assign_var20;
struct sType* type2_348;
char* name_349;
_Bool err_350;
_Bool _if_conditional368;
void* right_value338;
void* right_value339;
_Bool _if_conditional369;
struct sClass* klass2_351;
_Bool _if_conditional370;
_Bool _if_conditional371;
char* source_tail_352;
void* right_value340;
void* right_value341;
struct buffer* header_353;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* right_value352;
struct sNode* __result215__;
void* right_value353;
struct sNode* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_241, 0, sizeof(char*));
right_value233 = (void*)0;
memset(&type_name_242, 0, sizeof(char*));
memset(&struct_class_243, 0, sizeof(struct sClass*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&source_tail_244, 0, sizeof(char*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&header_245, 0, sizeof(struct buffer*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&T_249, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&generics_class_253, 0, sizeof(struct sClass*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&type2_254, 0, sizeof(struct sType*));
memset(&name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
memset(&type2_254, 0, sizeof(struct sType*));
memset(&name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&name2_257, 0, sizeof(char*));
right_value258 = (void*)0;
memset(&type3_258, 0, sizeof(struct sType*));
memset(&no_comma_259, 0, sizeof(_Bool));
right_value259 = (void*)0;
memset(&node_260, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&source_tail_261, 0, sizeof(char*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&header_262, 0, sizeof(struct buffer*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value271 = (void*)0;
memset(&output_264, 0, sizeof(_Bool));
memset(&struct_class_265, 0, sizeof(struct sClass*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&multiple_declare_266, 0, sizeof(_Bool));
memset(&p_267, 0, sizeof(char*));
memset(&sline_268, 0, sizeof(int));
memset(&no_output_err_269, 0, sizeof(_Bool));
right_value275 = (void*)0;
memset(&type_270, 0, sizeof(struct sType*));
memset(&name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
memset(&type_270, 0, sizeof(struct sType*));
memset(&name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
right_value276 = (void*)0;
memset(&base_type_273, 0, sizeof(struct sType*));
memset(&name_274, 0, sizeof(char*));
memset(&err_275, 0, sizeof(_Bool));
memset(&base_type_273, 0, sizeof(struct sType*));
memset(&name_274, 0, sizeof(char*));
memset(&err_275, 0, sizeof(_Bool));
right_value277 = (void*)0;
memset(&type2_276, 0, sizeof(struct sType*));
memset(&name2_277, 0, sizeof(char*));
memset(&type2_276, 0, sizeof(struct sType*));
memset(&name2_277, 0, sizeof(char*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&type2_278, 0, sizeof(struct sType*));
memset(&name2_279, 0, sizeof(char*));
memset(&type2_278, 0, sizeof(struct sType*));
memset(&name2_279, 0, sizeof(char*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&type2_280, 0, sizeof(struct sType*));
memset(&name_281, 0, sizeof(char*));
memset(&err_282, 0, sizeof(_Bool));
memset(&type2_280, 0, sizeof(struct sType*));
memset(&name_281, 0, sizeof(char*));
memset(&err_282, 0, sizeof(_Bool));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&klass2_283, 0, sizeof(struct sClass*));
memset(&source_tail_284, 0, sizeof(char*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&header_285, 0, sizeof(struct buffer*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value297 = (void*)0;
memset(&source_head_287, 0, sizeof(char*));
right_value298 = (void*)0;
memset(&type_name_288, 0, sizeof(char*));
memset(&parent_class_289, 0, sizeof(struct sClass*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&parent_class_name_290, 0, sizeof(char*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&parent_classes_293, 0, sizeof(struct list$1sClassp*));
memset(&parent_class2_294, 0, sizeof(struct sClass*));
memset(&output_298, 0, sizeof(_Bool));
memset(&struct_class_299, 0, sizeof(struct sClass*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value315 = (void*)0;
memset(&o2_saved_305, 0, sizeof(struct list$1sClassp*));
memset(&parent_308, 0, sizeof(struct sClass*));
memset(&o2_saved_311, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_312, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_313, 0, sizeof(struct sClass*));
right_value316 = (void*)0;
memset(&o2_saved_314, 0, sizeof(struct list$1sClassp*));
memset(&parent_315, 0, sizeof(struct sClass*));
memset(&o2_saved_316, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_317, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&o2_saved_318, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_319, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&methods_320, 0, sizeof(struct list$1sNodeph*));
memset(&multiple_declare_321, 0, sizeof(_Bool));
memset(&p_322, 0, sizeof(char*));
memset(&sline_323, 0, sizeof(int));
memset(&no_output_err_324, 0, sizeof(_Bool));
right_value319 = (void*)0;
memset(&type_325, 0, sizeof(struct sType*));
memset(&name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
memset(&type_325, 0, sizeof(struct sType*));
memset(&name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
memset(&define_function_flag_328, 0, sizeof(_Bool));
memset(&p_329, 0, sizeof(char*));
memset(&sline_330, 0, sizeof(int));
memset(&invalid_type_331, 0, sizeof(_Bool));
right_value320 = (void*)0;
memset(&result_type_332, 0, sizeof(struct sType*));
memset(&fun_name_333, 0, sizeof(char*));
memset(&err_334, 0, sizeof(_Bool));
memset(&result_type_332, 0, sizeof(struct sType*));
memset(&fun_name_333, 0, sizeof(char*));
memset(&err_334, 0, sizeof(_Bool));
memset(&word_335, 0, sizeof(char*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&pointer_num_336, 0, sizeof(int));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&method_337, 0, sizeof(struct sNode*));
right_value330 = (void*)0;
memset(&base_type_341, 0, sizeof(struct sType*));
memset(&name_342, 0, sizeof(char*));
memset(&err_343, 0, sizeof(_Bool));
memset(&base_type_341, 0, sizeof(struct sType*));
memset(&name_342, 0, sizeof(char*));
memset(&err_343, 0, sizeof(_Bool));
right_value331 = (void*)0;
memset(&type2_344, 0, sizeof(struct sType*));
memset(&name2_345, 0, sizeof(char*));
memset(&type2_344, 0, sizeof(struct sType*));
memset(&name2_345, 0, sizeof(char*));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&type2_346, 0, sizeof(struct sType*));
memset(&name2_347, 0, sizeof(char*));
memset(&type2_346, 0, sizeof(struct sType*));
memset(&name2_347, 0, sizeof(char*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&type2_348, 0, sizeof(struct sType*));
memset(&name_349, 0, sizeof(char*));
memset(&err_350, 0, sizeof(_Bool));
memset(&type2_348, 0, sizeof(struct sType*));
memset(&name_349, 0, sizeof(char*));
memset(&err_350, 0, sizeof(_Bool));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&klass2_351, 0, sizeof(struct sClass*));
memset(&source_tail_352, 0, sizeof(char*));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&header_353, 0, sizeof(struct buffer*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
    # 998 "14struct.c"
    # 554 "14struct.c"
    if(_if_conditional293=charp_operator_equals(buf,"struct"),    _if_conditional293) {
        # 555 "14struct.c"
        source_head_241=head;
        # 557 "14struct.c"
        type_name_242=(char*)come_increment_ref_count(((char*)(right_value233=parse_word(info))));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 779 "14struct.c"
        # 559 "14struct.c"
        if(_if_conditional294=*info->p==59,        _if_conditional294) {
            # 560 "14struct.c"
            info->p++;
            # 561 "14struct.c"
            skip_spaces_and_lf(info);
            # 563 "14struct.c"
            # 573 "14struct.c"
            # 564 "14struct.c"
            if(_if_conditional295=map$2charphsClassph_at(info->classes,type_name_242,((void*)0))==((void*)0),            _if_conditional295) {
                # 565 "14struct.c"
                __dec_obj69=struct_class_243;
                struct_class_243=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value235=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value234=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 565, "sClass")))),type_name_242,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 566 "14struct.c"
                struct_class_243->mNobodyStruct=(_Bool)1;
            }
            else {
                # 569 "14struct.c"
                __dec_obj70=struct_class_243;
                struct_class_243=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_242,((void*)0)));
                come_call_finalizer2(sClass_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 570 "14struct.c"
                struct_class_243->mNobodyStruct=(_Bool)1;
            }
            # 573 "14struct.c"
            source_tail_244=info->p;
            # 575 "14struct.c"
            header_245=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value237=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 575, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 576 "14struct.c"
            buffer_append(header_245,source_head_241,source_tail_244-source_head_241);
            # 578 "14struct.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value238=buffer_to_string(header_245))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 580 "14struct.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 580, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value241=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value239=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 580, "sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(type_name_242)))),(struct sClass*)come_increment_ref_count(struct_class_243),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result191__ = __result_obj__ = ((struct sNode*)(right_value246=_inf_value2));
            come_call_finalizer2(sClass_finalize,struct_class_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_242 = come_decrement_ref_count2(type_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result191__;
            come_call_finalizer2(sClass_finalize,struct_class_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 778 "14struct.c"
            # 583 "14struct.c"
            if(_if_conditional304=*info->p==60,            _if_conditional304) {
                # 584 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 586 "14struct.c"
                info->p++;
                # 587 "14struct.c"
                skip_spaces_and_lf(info);
                # 608 "14struct.c"
                while(_while_condtional35=(_Bool)1,                _while_condtional35) {
                    # 590 "14struct.c"
                    T_249=(char*)come_increment_ref_count(((char*)(right_value247=parse_word(info))));
                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 591 "14struct.c"
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value251=string_clone(T_249)))));
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 606 "14struct.c"
                    # 593 "14struct.c"
                    if(_if_conditional307=*info->p==62,                    _if_conditional307) {
                        # 594 "14struct.c"
                        info->p++;
                        # 595 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 596 "14struct.c"
                        T_249 = come_decrement_ref_count2(T_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        # 606 "14struct.c"
                        # 598 "14struct.c"
                        if(_if_conditional308=*info->p==44,                        _if_conditional308) {
                            # 599 "14struct.c"
                            info->p++;
                            # 600 "14struct.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 603 "14struct.c"
                            err_msg(info,"invalid generics struct definition");
                            # 604 "14struct.c"
                            exit(2);
                        }
                    }
                    T_249 = come_decrement_ref_count2(T_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 608 "14struct.c"
                # 617 "14struct.c"
                # 609 "14struct.c"
                if(_if_conditional309=map$2charphsClassph_at(info->generics_classes,type_name_242,((void*)0))!=((void*)0),                _if_conditional309) {
                    # 610 "14struct.c"
                    err_msg(info,"redifined generics struct(%s)",type_name_242);
                    # 611 "14struct.c"
                    exit(2);
                }
                else {
                    # 614 "14struct.c"
                    __dec_obj77=generics_class_253;
                    generics_class_253=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value253=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value252=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 614, "sClass")))),type_name_242,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 621 "14struct.c"
                # 617 "14struct.c"
                if(_if_conditional310=map$2charphsClassph_at(info->generics_classes,type_name_242,((void*)0))==((void*)0),                _if_conditional310) {
                    # 618 "14struct.c"
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_242),(struct sClass*)come_increment_ref_count(generics_class_253));
                }
                # 621 "14struct.c"
                expected_next_character(123,info);
                # 675 "14struct.c"
                while(_while_condtional36=(_Bool)1,                _while_condtional36) {
                    # 624 "14struct.c"
                    parse_sharp_v5(info);
                    # 626 "14struct.c"
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value254=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_254=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_255=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_256=multiple_assign_var9->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 633 "14struct.c"
                    # 628 "14struct.c"
                    if(_if_conditional311=!err_256,                    _if_conditional311) {
                        # 629 "14struct.c"
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        # 630 "14struct.c"
                        exit(2);
                    }
                    # 663 "14struct.c"
                    # 633 "14struct.c"
                    if(_if_conditional312=*info->p==44,                    _if_conditional312) {
                        # 634 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 634, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_255),(struct sType*)come_increment_ref_count(type2_254))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 658 "14struct.c"
                        while(_while_condtional37=*info->p==44,                        _while_condtional37) {
                            # 637 "14struct.c"
                            info->p++;
                            # 638 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 640 "14struct.c"
                            name2_257=(char*)come_increment_ref_count(((char*)(right_value257=parse_word(info))));
                            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 642 "14struct.c"
                            type3_258=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(type2_254))));
                            come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 656 "14struct.c"
                            # 644 "14struct.c"
                            if(_if_conditional313=*info->p==58,                            _if_conditional313) {
                                # 645 "14struct.c"
                                info->p++;
                                # 646 "14struct.c"
                                skip_spaces_and_lf(info);
                                # 648 "14struct.c"
                                no_comma_259=info->no_comma;
                                # 649 "14struct.c"
                                info->no_comma=(_Bool)1;
                                # 650 "14struct.c"
                                node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=expression_v13(info))));
                                if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 651 "14struct.c"
                                info->no_comma=no_comma_259;
                                # 653 "14struct.c"
                                __dec_obj78=type3_258->mSizeNum;
                                type3_258->mSizeNum=(struct sNode*)come_increment_ref_count(node_260);
                                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 656 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(generics_class_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 656, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_257),(struct sType*)come_increment_ref_count(type3_258))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            name2_257 = come_decrement_ref_count2(name2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type3_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 660 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 660, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_255),(struct sType*)come_increment_ref_count(type2_254))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 663 "14struct.c"
                    expected_next_character(59,info);
                    # 665 "14struct.c"
                    parse_sharp_v5(info);
                    # 672 "14struct.c"
                    # 667 "14struct.c"
                    if(_if_conditional314=*info->p==125,                    _if_conditional314) {
                        # 668 "14struct.c"
                        info->p++;
                        # 669 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 670 "14struct.c"
                        come_call_finalizer2(sType_finalize,type2_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    # 672 "14struct.c"
                    parse_sharp_v5(info);
                    come_call_finalizer2(sType_finalize,type2_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_255 = come_decrement_ref_count2(name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 675 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 677 "14struct.c"
                source_tail_261=info->p;
                # 679 "14struct.c"
                header_262=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value265=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value264=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 679, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 680 "14struct.c"
                buffer_append_str(header_262,"struct ");
                # 681 "14struct.c"
                buffer_append(header_262,source_head_241,source_tail_261-source_head_241);
                # 683 "14struct.c"
                add_come_code_at_come_header(info,"%s;\n",((char*)(right_value266=buffer_to_string(header_262))));
                right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 685 "14struct.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 685, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value268=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value267=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 685, "sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result196__ = __result_obj__ = ((struct sNode*)(right_value271=_inf_value3));
                come_call_finalizer2(sClass_finalize,generics_class_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_242 = come_decrement_ref_count2(type_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result196__;
                come_call_finalizer2(sClass_finalize,generics_class_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 688 "14struct.c"
                output_264=(_Bool)1;
                # 690 "14struct.c"
                # 701 "14struct.c"
                # 691 "14struct.c"
                if(_if_conditional319=map$2charphsClassph_at(info->classes,type_name_242,((void*)0))==((void*)0),                _if_conditional319) {
                    # 692 "14struct.c"
                    __dec_obj80=struct_class_265;
                    struct_class_265=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value273=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value272=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 692, "sClass")))),type_name_242,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 695 "14struct.c"
                    __dec_obj81=struct_class_265;
                    struct_class_265=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value274=sClass_clone(map$2charphsClassph_at(info->classes,type_name_242,((void*)0))))));
                    come_call_finalizer2(sClass_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 699 "14struct.c"
                    # 696 "14struct.c"
                    if(_if_conditional320=list$1tuple2$2charphsTypephph_length(struct_class_265->mFields)>0,                    _if_conditional320) {
                        # 697 "14struct.c"
                        output_264=(_Bool)0;
                    }
                }
                # 701 "14struct.c"
                expected_next_character(123,info);
                # 762 "14struct.c"
                while(_while_condtional38=(_Bool)1,                _while_condtional38) {
                    # 704 "14struct.c"
                    parse_sharp_v5(info);
                    # 706 "14struct.c"
                    multiple_declare_266=(_Bool)0;
                    # 724 "14struct.c"
                    {
                        # 708 "14struct.c"
                        p_267=info->p;
                        # 709 "14struct.c"
                        sline_268=info->sline;
                        # 711 "14struct.c"
                        no_output_err_269=info->no_output_err;
                        # 712 "14struct.c"
                        info->no_output_err=(_Bool)1;
                        # 713 "14struct.c"
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value275=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type_270=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_271=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_272=multiple_assign_var10->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 714 "14struct.c"
                        info->no_output_err=no_output_err_269;
                        # 720 "14struct.c"
                        # 716 "14struct.c"
                        if(_if_conditional321=err_272&&*info->p==44,                        _if_conditional321) {
                            # 717 "14struct.c"
                            multiple_declare_266=(_Bool)1;
                        }
                        # 720 "14struct.c"
                        info->p=p_267;
                        # 721 "14struct.c"
                        info->sline=sline_268;
                        come_call_finalizer2(sType_finalize,type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_271 = come_decrement_ref_count2(name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 750 "14struct.c"
                    # 724 "14struct.c"
                    if(multiple_declare_266) {
                        # 725 "14struct.c"
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value276=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_273=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_274=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_275=multiple_assign_var11->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 727 "14struct.c"
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value277=parse_variable_name((struct sType*)come_increment_ref_count(base_type_273),(_Bool)1,info)));
                        type2_276=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_277=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 729 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value279=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value278=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 729, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_277),(struct sType*)come_increment_ref_count(type2_276))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 739 "14struct.c"
                        while(_while_condtional39=*info->p==44,                        _while_condtional39) {
                            # 732 "14struct.c"
                            info->p++;
                            # 733 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 735 "14struct.c"
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value280=parse_variable_name((struct sType*)come_increment_ref_count(base_type_273),(_Bool)0,info)));
                            type2_278=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_279=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 737 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value282=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value281=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 737, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_279),(struct sType*)come_increment_ref_count(type2_278))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_279 = come_decrement_ref_count2(name2_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(sType_finalize,base_type_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_277 = come_decrement_ref_count2(name2_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 741 "14struct.c"
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value283=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_280=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_281=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_282=multiple_assign_var14->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 747 "14struct.c"
                        # 742 "14struct.c"
                        if(_if_conditional323=!err_282,                        _if_conditional323) {
                            # 743 "14struct.c"
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            # 744 "14struct.c"
                            exit(2);
                        }
                        # 747 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value285=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value284=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 747, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_281),(struct sType*)come_increment_ref_count(type2_280))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_281 = come_decrement_ref_count2(name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 750 "14struct.c"
                    expected_next_character(59,info);
                    # 752 "14struct.c"
                    parse_sharp_v5(info);
                    # 759 "14struct.c"
                    # 754 "14struct.c"
                    if(_if_conditional324=*info->p==125,                    _if_conditional324) {
                        # 755 "14struct.c"
                        info->p++;
                        # 756 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 757 "14struct.c"
                        break;
                    }
                    # 759 "14struct.c"
                    parse_sharp_v5(info);
                }
                # 762 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 764 "14struct.c"
                klass2_283=map$2charphsClassph_at(info->classes,type_name_242,((void*)0));
                # 776 "14struct.c"
                # 766 "14struct.c"
                if(_if_conditional325=klass2_283==((void*)0)||klass2_283->mNobodyStruct,                _if_conditional325) {
                    # 767 "14struct.c"
                    # 767 "14struct.c"
                    if(klass2_283) {
                        # 767 "14struct.c"
                        klass2_283->mNobodyStruct=(_Bool)0;
                    }
                    # 768 "14struct.c"
                    source_tail_284=info->p;
                    # 770 "14struct.c"
                    header_285=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value287=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value286=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 770, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 771 "14struct.c"
                    buffer_append(header_285,source_head_241,source_tail_284-source_head_241);
                    # 773 "14struct.c"
                    add_come_code_at_come_header(info,"%s;\n",((char*)(right_value288=buffer_to_string(header_285))));
                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,header_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 776 "14struct.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 776, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value292=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value289=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 776, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(type_name_242)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value291=sClass_clone(struct_class_265)))),output_264,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result199__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value4));
                come_call_finalizer2(sClass_finalize,struct_class_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_242 = come_decrement_ref_count2(type_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sStructNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStructNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result199__;
                come_call_finalizer2(sClass_finalize,struct_class_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_242 = come_decrement_ref_count2(type_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 998 "14struct.c"
        # 780 "14struct.c"
        if(_if_conditional336=charp_operator_equals(buf,"class"),        _if_conditional336) {
            # 781 "14struct.c"
            source_head_287=head;
            # 783 "14struct.c"
            type_name_288=(char*)come_increment_ref_count(((char*)(right_value298=parse_word(info))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 785 "14struct.c"
            parent_class_289=((void*)0);
            # 800 "14struct.c"
            # 786 "14struct.c"
            if(_if_conditional337=strmemcmp(info->p,"extends"),            _if_conditional337) {
                # 787 "14struct.c"
                ((char*)(right_value299=parse_word(info)));
                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 789 "14struct.c"
                parent_class_name_290=(char*)come_increment_ref_count(((char*)(right_value300=parse_word(info))));
                right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 791 "14struct.c"
                parent_class_289=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_290);
                # 797 "14struct.c"
                # 793 "14struct.c"
                if(_if_conditional338=parent_class_289==((void*)0),                _if_conditional338) {
                    # 794 "14struct.c"
                    err_msg(info,"invalid class name(%s)",parent_class_name_290);
                    # 795 "14struct.c"
                    __result200__ = __result_obj__ = ((void*)0);
                    parent_class_name_290 = come_decrement_ref_count2(parent_class_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_288 = come_decrement_ref_count2(type_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result200__;
                }
                parent_class_name_290 = come_decrement_ref_count2(parent_class_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 800 "14struct.c"
            parent_classes_293=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value302=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value301=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 800, "list$1sClassp"))))))));
            come_call_finalizer2(list$1sClasspp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sClasspp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 802 "14struct.c"
            parent_class2_294=parent_class_289;
            # 808 "14struct.c"
            while(parent_class2_294) {
                # 804 "14struct.c"
                list$1sClassp_add(parent_classes_293,parent_class2_294);
                # 805 "14struct.c"
                parent_class2_294=parent_class_289->mParent;
            }
            # 808 "14struct.c"
            output_298=(_Bool)1;
            # 810 "14struct.c"
            # 821 "14struct.c"
            # 811 "14struct.c"
            if(_if_conditional341=map$2charphsClassph_at(info->classes,type_name_288,((void*)0))==((void*)0),            _if_conditional341) {
                # 812 "14struct.c"
                __dec_obj85=struct_class_299;
                struct_class_299=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value307=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value306=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 812, "sClass")))),type_name_288,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 815 "14struct.c"
                __dec_obj86=struct_class_299;
                struct_class_299=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value308=sClass_clone(map$2charphsClassph_at(info->classes,type_name_288,((void*)0))))));
                come_call_finalizer2(sClass_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 819 "14struct.c"
                # 816 "14struct.c"
                if(_if_conditional342=list$1tuple2$2charphsTypephph_length(struct_class_299->mFields)>0,                _if_conditional342) {
                    # 817 "14struct.c"
                    output_298=(_Bool)0;
                }
            }
            # 850 "14struct.c"
            # 821 "14struct.c"
            if(_if_conditional343=map$2charphsClassph_at(info->classes,type_name_288,((void*)0))==((void*)0),            _if_conditional343) {
                # 825 "14struct.c"
                # 822 "14struct.c"
                if(parent_class_289) {
                    # 823 "14struct.c"
                    struct_class_299->mParent=parent_class_289;
                }
                # 825 "14struct.c"
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_288),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value309=sClass_clone(struct_class_299)))));
                come_call_finalizer2(sClass_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 832 "14struct.c"
                for(                o2_saved_305=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value315=list$1sClassp_reverse(parent_classes_293))))),parent_308=list$1sClassp_begin((o2_saved_305)) ,                come_call_finalizer2(list$1sClasspp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_305));                parent_308=list$1sClassp_next((o2_saved_305))                ){
                    # 831 "14struct.c"
                    for(                    o2_saved_311=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_308->mFields)),it_312=list$1tuple2$2charphsTypephph_begin((o2_saved_311));                    !list$1tuple2$2charphsTypephph_end((o2_saved_311));                    it_312=list$1tuple2$2charphsTypephph_next((o2_saved_311))                    ){
                        # 829 "14struct.c"
                        list$1tuple2$2charphsTypephph_add(struct_class_299->mFields,it_312);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sClasspp_finalize,o2_saved_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 850 "14struct.c"
                # 833 "14struct.c"
                if(_if_conditional351=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_288,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_299->mFields)>0,                _if_conditional351) {
                    # 834 "14struct.c"
                    klass2_313=map$2charphsClassph_at(info->classes,type_name_288,((void*)0));
                    # 840 "14struct.c"
                    # 836 "14struct.c"
                    if(parent_class_289) {
                        # 837 "14struct.c"
                        klass2_313->mParent=parent_class_289;
                    }
                    # 845 "14struct.c"
                    for(                    o2_saved_314=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value316=list$1sClassp_reverse(parent_classes_293))))),parent_315=list$1sClassp_begin((o2_saved_314)) ,                    come_call_finalizer2(list$1sClasspp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_314));                    parent_315=list$1sClassp_next((o2_saved_314))                    ){
                        # 844 "14struct.c"
                        for(                        o2_saved_316=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_315->mFields)),it_317=list$1tuple2$2charphsTypephph_begin((o2_saved_316));                        !list$1tuple2$2charphsTypephph_end((o2_saved_316));                        it_317=list$1tuple2$2charphsTypephph_next((o2_saved_316))                        ){
                            # 842 "14struct.c"
                            list$1tuple2$2charphsTypephph_add(klass2_313->mFields,it_317);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_316, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1sClasspp_finalize,o2_saved_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 848 "14struct.c"
                    for(                    o2_saved_318=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_299->mFields)),it_319=list$1tuple2$2charphsTypephph_begin((o2_saved_318));                    !list$1tuple2$2charphsTypephph_end((o2_saved_318));                    it_319=list$1tuple2$2charphsTypephph_next((o2_saved_318))                    ){
                        # 846 "14struct.c"
                        list$1tuple2$2charphsTypephph_add(klass2_313->mFields,it_319);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_318, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            # 850 "14struct.c"
            expected_next_character(123,info);
            # 852 "14struct.c"
            methods_320=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value318=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value317=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 852, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 981 "14struct.c"
            while(_while_condtional42=(_Bool)1,            _while_condtional42) {
                # 854 "14struct.c"
                parse_sharp_v5(info);
                # 856 "14struct.c"
                multiple_declare_321=(_Bool)0;
                # 873 "14struct.c"
                {
                    # 858 "14struct.c"
                    p_322=info->p;
                    # 859 "14struct.c"
                    sline_323=info->sline;
                    # 861 "14struct.c"
                    no_output_err_324=info->no_output_err;
                    # 862 "14struct.c"
                    info->no_output_err=(_Bool)1;
                    # 863 "14struct.c"
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(right_value319=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type_325=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_326=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_327=multiple_assign_var15->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 864 "14struct.c"
                    info->no_output_err=no_output_err_324;
                    # 870 "14struct.c"
                    # 866 "14struct.c"
                    if(_if_conditional353=err_327&&*info->p==44,                    _if_conditional353) {
                        # 867 "14struct.c"
                        multiple_declare_321=(_Bool)1;
                    }
                    # 870 "14struct.c"
                    info->p=p_322;
                    # 871 "14struct.c"
                    info->sline=sline_323;
                    come_call_finalizer2(sType_finalize,type_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_326 = come_decrement_ref_count2(name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 873 "14struct.c"
                define_function_flag_328=(_Bool)0;
                # 931 "14struct.c"
                {
                    # 875 "14struct.c"
                    p_329=info->p;
                    # 876 "14struct.c"
                    sline_330=info->sline;
                    # 878 "14struct.c"
                    invalid_type_331=(_Bool)0;
                    # 879 "14struct.c"
                    info->no_output_err=(_Bool)1;
                    # 883 "14struct.c"
                    # 880 "14struct.c"
                    if(_if_conditional354=xisalpha(*info->p)||*info->p==95,                    _if_conditional354) {
                        # 881 "14struct.c"
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value320=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        result_type_332=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_333=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_334=multiple_assign_var16->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,result_type_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_333 = come_decrement_ref_count2(fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 883 "14struct.c"
                    info->no_output_err=(_Bool)0;
                    # 885 "14struct.c"
                    word_335=((void*)0);
                    # 896 "14struct.c"
                    # 886 "14struct.c"
                    if(_if_conditional355=xisalnum(*info->p)||*info->p==95,                    _if_conditional355) {
                        # 887 "14struct.c"
                        __dec_obj87=word_335;
                        word_335=(char*)come_increment_ref_count(((char*)(right_value321=parse_word(info))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 892 "14struct.c"
                        # 889 "14struct.c"
                        if(_if_conditional356=string_operator_equals(word_335,"extern"),                        _if_conditional356) {
                            # 890 "14struct.c"
                            __dec_obj88=word_335;
                            word_335=(char*)come_increment_ref_count(((char*)(right_value322=parse_word(info))));
                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    else {
                        # 894 "14struct.c"
                        __dec_obj89=word_335;
                        word_335=((void*)0);
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    # 896 "14struct.c"
                    info->no_output_err=(_Bool)0;
                    # 927 "14struct.c"
                    # 898 "14struct.c"
                    if(word_335) {
                        # 922 "14struct.c"
                        # 899 "14struct.c"
                        if(_if_conditional358=is_type_name(word_335,info),                        _if_conditional358) {
                            # 904 "14struct.c"
                            while(_while_condtional43=*info->p==42,                            _while_condtional43) {
                                # 901 "14struct.c"
                                info->p++;
                                # 902 "14struct.c"
                                skip_spaces_and_lf(info);
                            }
                            # 908 "14struct.c"
                            # 904 "14struct.c"
                            if(_if_conditional359=*info->p==91&&*(info->p+1)==93,                            _if_conditional359) {
                                # 905 "14struct.c"
                                info->p+=2;
                                # 906 "14struct.c"
                                skip_spaces_and_lf(info);
                            }
                            # 912 "14struct.c"
                            # 908 "14struct.c"
                            if(_if_conditional360=*info->p==58,                            _if_conditional360) {
                                # 909 "14struct.c"
                                info->p++;
                                # 910 "14struct.c"
                                skip_spaces_and_lf(info);
                            }
                            # 916 "14struct.c"
                            # 912 "14struct.c"
                            if(_if_conditional361=*info->p==58,                            _if_conditional361) {
                                # 913 "14struct.c"
                                info->p++;
                                # 914 "14struct.c"
                                skip_spaces_and_lf(info);
                            }
                            # 919 "14struct.c"
                            # 916 "14struct.c"
                            if(_if_conditional362=xisalnum(*info->p)||*info->p==95,                            _if_conditional362) {
                                # 917 "14struct.c"
                                __dec_obj90=word_335;
                                word_335=(char*)come_increment_ref_count(((char*)(right_value323=parse_word(info))));
                                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        # 925 "14struct.c"
                        # 922 "14struct.c"
                        if(_if_conditional363=strlen(word_335)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                        _if_conditional363) {
                            # 923 "14struct.c"
                            define_function_flag_328=(_Bool)1;
                        }
                    }
                    # 927 "14struct.c"
                    info->p=p_329;
                    # 928 "14struct.c"
                    info->sline=sline_330;
                    word_335 = come_decrement_ref_count2(word_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 971 "14struct.c"
                # 931 "14struct.c"
                if(define_function_flag_328) {
                    # 932 "14struct.c"
                    pointer_num_336=1;
                    # 934 "14struct.c"
                    __dec_obj91=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value324=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 934, "sType")))),type_name_288,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 935 "14struct.c"
                    info->impl_type->mPointerNum=pointer_num_336;
                    # 937 "14struct.c"
                    method_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=parse_function(info))));
                    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 939 "14struct.c"
                    __dec_obj92=info->impl_type;
                    info->impl_type=((void*)0);
                    come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 941 "14struct.c"
                    list$1sNodeph_push_back(methods_320,(struct sNode*)come_increment_ref_count(method_337));
                    if(method_337) { method_337 = come_decrement_ref_count2(method_337, ((struct sNode*)method_337)->finalize, ((struct sNode*)method_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 971 "14struct.c"
                    # 943 "14struct.c"
                    if(multiple_declare_321) {
                        # 944 "14struct.c"
                        multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(right_value330=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_341=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                        name_342=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                        err_343=multiple_assign_var17->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 946 "14struct.c"
                        multiple_assign_var18=((struct tuple2$2sTypephcharph*)(right_value331=parse_variable_name((struct sType*)come_increment_ref_count(base_type_341),(_Bool)1,info)));
                        type2_344=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name2_345=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 948 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_299->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value333=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value332=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 948, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_345),(struct sType*)come_increment_ref_count(type2_344))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 958 "14struct.c"
                        while(_while_condtional44=*info->p==44,                        _while_condtional44) {
                            # 951 "14struct.c"
                            info->p++;
                            # 952 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 954 "14struct.c"
                            multiple_assign_var19=((struct tuple2$2sTypephcharph*)(right_value334=parse_variable_name((struct sType*)come_increment_ref_count(base_type_341),(_Bool)0,info)));
                            type2_346=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                            name2_347=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 956 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_299->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value336=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value335=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 956, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_347),(struct sType*)come_increment_ref_count(type2_346))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_346, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_347 = come_decrement_ref_count2(name2_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 958 "14struct.c"
                        expected_next_character(59,info);
                        come_call_finalizer2(sType_finalize,base_type_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_342 = come_decrement_ref_count2(name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_345 = come_decrement_ref_count2(name2_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 961 "14struct.c"
                        multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(right_value337=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_348=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                        name_349=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                        err_350=multiple_assign_var20->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 967 "14struct.c"
                        # 962 "14struct.c"
                        if(_if_conditional368=!err_350,                        _if_conditional368) {
                            # 963 "14struct.c"
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            # 964 "14struct.c"
                            exit(2);
                        }
                        # 967 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_299->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value339=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value338=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 967, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_349),(struct sType*)come_increment_ref_count(type2_348))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 968 "14struct.c"
                        expected_next_character(59,info);
                        come_call_finalizer2(sType_finalize,type2_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_349 = come_decrement_ref_count2(name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                # 971 "14struct.c"
                parse_sharp_v5(info);
                # 978 "14struct.c"
                # 973 "14struct.c"
                if(_if_conditional369=*info->p==125,                _if_conditional369) {
                    # 974 "14struct.c"
                    info->p++;
                    # 975 "14struct.c"
                    skip_spaces_and_lf(info);
                    # 976 "14struct.c"
                    break;
                }
                # 978 "14struct.c"
                parse_sharp_v5(info);
            }
            # 981 "14struct.c"
            list$1charph_reset(info->generics_type_names);
            # 983 "14struct.c"
            klass2_351=map$2charphsClassph_at(info->classes,type_name_288,((void*)0));
            # 995 "14struct.c"
            # 985 "14struct.c"
            if(_if_conditional370=klass2_351==((void*)0)||klass2_351->mNobodyStruct,            _if_conditional370) {
                # 986 "14struct.c"
                # 986 "14struct.c"
                if(klass2_351) {
                    # 986 "14struct.c"
                    klass2_351->mNobodyStruct=(_Bool)0;
                }
                # 987 "14struct.c"
                source_tail_352=info->p;
                # 989 "14struct.c"
                header_353=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value341=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value340=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 989, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 990 "14struct.c"
                buffer_append(header_353,source_head_287,source_tail_352-source_head_287);
                # 992 "14struct.c"
                add_come_code_at_come_header(info,"%s;\n",((char*)(right_value342=buffer_to_string(header_353))));
                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,header_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 995 "14struct.c"
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 995, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(right_value346=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value343=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 995, "sClassNode")))),(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(type_name_288)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value345=sClass_clone(struct_class_299)))),(struct list$1sNodeph*)come_increment_ref_count(methods_320),output_298,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sClassNode_sline;
            _inf_value5->sname=(void*)sClassNode_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result215__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value5));
            type_name_288 = come_decrement_ref_count2(type_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sClasspp_finalize,parent_classes_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,struct_class_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,methods_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClassNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClassNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result215__;
            type_name_288 = come_decrement_ref_count2(type_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sClasspp_finalize,parent_classes_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,struct_class_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,methods_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 998 "14struct.c"
    __result216__ = __result_obj__ = ((struct sNode*)(right_value353=top_level_v97(buf,head,head_sline,info)));
    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result216__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStructNobodyNode_finalize"
                # 0 "sStructNobodyNode_finalize"
                if(_if_conditional296=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional296) {
                    # 0 "sStructNobodyNode_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStructNobodyNode_finalize"
                # 1 "sStructNobodyNode_finalize"
                if(_if_conditional297=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional297) {
                    # 1 "sStructNobodyNode_finalize"
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sStructNobodyNode_finalize"
                # 2 "sStructNobodyNode_finalize"
                if(_if_conditional298=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional298) {
                    # 2 "sStructNobodyNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional299;
struct sStructNobodyNode* __result189__;
void* right_value242;
struct sStructNobodyNode* result_246;
_Bool _if_conditional300;
void* right_value243;
char* __dec_obj71;
_Bool _if_conditional301;
void* right_value244;
struct sClass* __dec_obj72;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value245;
char* __dec_obj73;
struct sStructNobodyNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
memset(&result_246, 0, sizeof(struct sStructNobodyNode*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
                # 3 "sStructNobodyNode_clone"
                # 2 "sStructNobodyNode_clone"
                if(_if_conditional299=self==(void*)0,                _if_conditional299) {
                    # 2 "sStructNobodyNode_clone"
                    __result189__ = __result_obj__ = (void*)0;
                    return __result189__;
                }
                # 3 "sStructNobodyNode_clone"
                result_246=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value242=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"))));
                come_call_finalizer2(sStructNobodyNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStructNobodyNode_clone"
                # 4 "sStructNobodyNode_clone"
                if(_if_conditional300=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional300) {
                    # 4 "sStructNobodyNode_clone"
                    __dec_obj71=result_246->mName;
                    result_246->mName=(char*)come_increment_ref_count(((char*)(right_value243=string_clone(self->mName))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStructNobodyNode_clone"
                # 5 "sStructNobodyNode_clone"
                if(_if_conditional301=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional301) {
                    # 5 "sStructNobodyNode_clone"
                    __dec_obj72=result_246->mClass;
                    result_246->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStructNobodyNode_clone"
                # 6 "sStructNobodyNode_clone"
                if(_if_conditional302=self!=((void*)0),                _if_conditional302) {
                    # 6 "sStructNobodyNode_clone"
                    result_246->sline=self->sline;
                }
                # 8 "sStructNobodyNode_clone"
                # 7 "sStructNobodyNode_clone"
                if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional303) {
                    # 7 "sStructNobodyNode_clone"
                    __dec_obj73=result_246->sname;
                    result_246->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(self->sname))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sStructNobodyNode_clone"
                __result190__ = __result_obj__ = result_246;
                come_call_finalizer2(sStructNobodyNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result190__;
                come_call_finalizer2(sStructNobodyNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_247;
_Bool _while_condtional34;
struct list_item$1charph* prev_it_248;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_247, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_248, 0, sizeof(struct list_item$1charph*));
                    # 433 "./neo-c.h"
                    it_247=self->head;
                    # 440 "./neo-c.h"
                    while(_while_condtional34=it_247!=((void*)0),                    _while_condtional34) {
                        # 435 "./neo-c.h"
                        prev_it_248=it_247;
                        # 436 "./neo-c.h"
                        it_247=it_247->next;
                        # 437 "./neo-c.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 440 "./neo-c.h"
                    self->head=((void*)0);
                    # 441 "./neo-c.h"
                    self->tail=((void*)0);
                    # 443 "./neo-c.h"
                    self->len=0;
                    # 445 "./neo-c.h"
                    __result192__ = __result_obj__ = self;
                    return __result192__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional305;
void* right_value248;
struct list_item$1charph* litem_250;
char* __dec_obj74;
_Bool _if_conditional306;
void* right_value249;
struct list_item$1charph* litem_251;
char* __dec_obj75;
void* right_value250;
struct list_item$1charph* litem_252;
char* __dec_obj76;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1charph*));
right_value249 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1charph*));
right_value250 = (void*)0;
memset(&litem_252, 0, sizeof(struct list_item$1charph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional305=self->len==0,                        _if_conditional305) {
                            # 226 "./neo-c.h"
                            litem_250=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value248=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_250->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_250->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj74=litem_250->item;
                            litem_250->item=(char*)come_increment_ref_count(item);
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 232 "./neo-c.h"
                            self->tail=litem_250;
                            # 233 "./neo-c.h"
                            self->head=litem_250;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional306=self->len==1,                            _if_conditional306) {
                                # 236 "./neo-c.h"
                                litem_251=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value249=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_251->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_251->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj75=litem_251->item;
                                litem_251->item=(char*)come_increment_ref_count(item);
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 242 "./neo-c.h"
                                self->tail=litem_251;
                                # 243 "./neo-c.h"
                                self->head->next=litem_251;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_252=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value250=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_252->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_252->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj76=litem_252->item;
                                litem_252->item=(char*)come_increment_ref_count(item);
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 252 "./neo-c.h"
                                self->tail->next=litem_252;
                                # 253 "./neo-c.h"
                                self->tail=litem_252;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result193__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result193__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sGenericsStructNode_finalize"
                    # 0 "sGenericsStructNode_finalize"
                    if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional315) {
                        # 0 "sGenericsStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional316;
struct sGenericsStructNode* __result194__;
void* right_value269;
struct sGenericsStructNode* result_263;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value270;
char* __dec_obj79;
struct sGenericsStructNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&result_263, 0, sizeof(struct sGenericsStructNode*));
right_value270 = (void*)0;
                    # 3 "sGenericsStructNode_clone"
                    # 2 "sGenericsStructNode_clone"
                    if(_if_conditional316=self==(void*)0,                    _if_conditional316) {
                        # 2 "sGenericsStructNode_clone"
                        __result194__ = __result_obj__ = (void*)0;
                        return __result194__;
                    }
                    # 3 "sGenericsStructNode_clone"
                    result_263=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value269=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"))));
                    come_call_finalizer2(sGenericsStructNode_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sGenericsStructNode_clone"
                    # 4 "sGenericsStructNode_clone"
                    if(_if_conditional317=self!=((void*)0),                    _if_conditional317) {
                        # 4 "sGenericsStructNode_clone"
                        result_263->sline=self->sline;
                    }
                    # 6 "sGenericsStructNode_clone"
                    # 5 "sGenericsStructNode_clone"
                    if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional318) {
                        # 5 "sGenericsStructNode_clone"
                        __dec_obj79=result_263->sname;
                        result_263->sname=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(self->sname))));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sGenericsStructNode_clone"
                    __result195__ = __result_obj__ = result_263;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result195__;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sStructNode_finalize"
                    # 0 "sStructNode_finalize"
                    if(_if_conditional327=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional327) {
                        # 0 "sStructNode_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sStructNode_finalize"
                    # 1 "sStructNode_finalize"
                    if(_if_conditional328=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional328) {
                        # 1 "sStructNode_finalize"
                        come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sStructNode_finalize"
                    # 2 "sStructNode_finalize"
                    if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional329) {
                        # 2 "sStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional330;
struct sStructNode* __result197__;
void* right_value293;
struct sStructNode* result_286;
_Bool _if_conditional331;
void* right_value294;
char* __dec_obj82;
_Bool _if_conditional332;
void* right_value295;
struct sClass* __dec_obj83;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value296;
char* __dec_obj84;
_Bool _if_conditional335;
struct sStructNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
memset(&result_286, 0, sizeof(struct sStructNode*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
                    # 3 "sStructNode_clone"
                    # 2 "sStructNode_clone"
                    if(_if_conditional330=self==(void*)0,                    _if_conditional330) {
                        # 2 "sStructNode_clone"
                        __result197__ = __result_obj__ = (void*)0;
                        return __result197__;
                    }
                    # 3 "sStructNode_clone"
                    result_286=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value293=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"))));
                    come_call_finalizer2(sStructNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sStructNode_clone"
                    # 4 "sStructNode_clone"
                    if(_if_conditional331=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional331) {
                        # 4 "sStructNode_clone"
                        __dec_obj82=result_286->mName;
                        result_286->mName=(char*)come_increment_ref_count(((char*)(right_value294=string_clone(self->mName))));
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sStructNode_clone"
                    # 5 "sStructNode_clone"
                    if(_if_conditional332=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional332) {
                        # 5 "sStructNode_clone"
                        __dec_obj83=result_286->mClass;
                        result_286->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value295=sClass_clone(self->mClass))));
                        come_call_finalizer2(sClass_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sStructNode_clone"
                    # 6 "sStructNode_clone"
                    if(_if_conditional333=self!=((void*)0),                    _if_conditional333) {
                        # 6 "sStructNode_clone"
                        result_286->sline=self->sline;
                    }
                    # 8 "sStructNode_clone"
                    # 7 "sStructNode_clone"
                    if(_if_conditional334=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional334) {
                        # 7 "sStructNode_clone"
                        __dec_obj84=result_286->sname;
                        result_286->sname=(char*)come_increment_ref_count(((char*)(right_value296=string_clone(self->sname))));
                        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sStructNode_clone"
                    # 8 "sStructNode_clone"
                    if(_if_conditional335=self!=((void*)0),                    _if_conditional335) {
                        # 8 "sStructNode_clone"
                        result_286->mOutput=self->mOutput;
                    }
                    # 9 "sStructNode_clone"
                    __result198__ = __result_obj__ = result_286;
                    come_call_finalizer2(sStructNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result198__;
                    come_call_finalizer2(sStructNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__;
struct list$1sClassp* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
                # 104 "./neo-c.h"
                self->head=((void*)0);
                # 105 "./neo-c.h"
                self->tail=((void*)0);
                # 106 "./neo-c.h"
                self->len=0;
                # 108 "./neo-c.h"
                __result201__ = __result_obj__ = self;
                come_call_finalizer2(list$1sClasspp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result201__;
                come_call_finalizer2(list$1sClasspp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
void* __result_obj__;
struct list_item$1sClassp* it_291;
_Bool _while_condtional40;
struct list_item$1sClassp* prev_it_292;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_291, 0, sizeof(struct list_item$1sClassp*));
memset(&prev_it_292, 0, sizeof(struct list_item$1sClassp*));
                    # 123 "./neo-c.h"
                    it_291=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional40=it_291!=((void*)0),                    _while_condtional40) {
                        # 125 "./neo-c.h"
                        prev_it_292=it_291;
                        # 126 "./neo-c.h"
                        it_291=it_291->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sClasspp_finalize,prev_it_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional339;
void* right_value303;
struct list_item$1sClassp* litem_295;
_Bool _if_conditional340;
void* right_value304;
struct list_item$1sClassp* litem_296;
void* right_value305;
struct list_item$1sClassp* litem_297;
struct list$1sClassp* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_295, 0, sizeof(struct list_item$1sClassp*));
right_value304 = (void*)0;
memset(&litem_296, 0, sizeof(struct list_item$1sClassp*));
right_value305 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1sClassp*));
                    # 186 "./neo-c.h"
                    # 155 "./neo-c.h"
                    if(_if_conditional339=self->len==0,                    _if_conditional339) {
                        # 156 "./neo-c.h"
                        litem_295=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value303=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 156, "list_item$1sClassp"))));
                        come_call_finalizer2(list_item$1sClasspp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 158 "./neo-c.h"
                        litem_295->prev=((void*)0);
                        # 159 "./neo-c.h"
                        litem_295->next=((void*)0);
                        # 160 "./neo-c.h"
                        litem_295->item=item;
                        # 162 "./neo-c.h"
                        self->tail=litem_295;
                        # 163 "./neo-c.h"
                        self->head=litem_295;
                    }
                    else {
                        # 186 "./neo-c.h"
                        # 165 "./neo-c.h"
                        if(_if_conditional340=self->len==1,                        _if_conditional340) {
                            # 166 "./neo-c.h"
                            litem_296=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value304=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 166, "list_item$1sClassp"))));
                            come_call_finalizer2(list_item$1sClasspp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 168 "./neo-c.h"
                            litem_296->prev=self->head;
                            # 169 "./neo-c.h"
                            litem_296->next=((void*)0);
                            # 170 "./neo-c.h"
                            litem_296->item=item;
                            # 172 "./neo-c.h"
                            self->tail=litem_296;
                            # 173 "./neo-c.h"
                            self->head->next=litem_296;
                        }
                        else {
                            # 176 "./neo-c.h"
                            litem_297=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value305=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 176, "list_item$1sClassp"))));
                            come_call_finalizer2(list_item$1sClasspp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 178 "./neo-c.h"
                            litem_297->prev=self->tail;
                            # 179 "./neo-c.h"
                            litem_297->next=((void*)0);
                            # 180 "./neo-c.h"
                            litem_297->item=item;
                            # 182 "./neo-c.h"
                            self->tail->next=litem_297;
                            # 183 "./neo-c.h"
                            self->tail=litem_297;
                        }
                    }
                    # 186 "./neo-c.h"
                    self->len++;
                    # 188 "./neo-c.h"
                    __result202__ = __result_obj__ = self;
                    return __result202__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__;
void* right_value310;
void* right_value311;
struct list$1sClassp* result_300;
struct list_item$1sClassp* it_301;
_Bool _while_condtional41;
struct list$1sClassp* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&result_300, 0, sizeof(struct list$1sClassp*));
memset(&it_301, 0, sizeof(struct list_item$1sClassp*));
                    # 960 "./neo-c.h"
                    result_300=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value311=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value310=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./neo-c.h", 960, "list$1sClassp"))))))));
                    come_call_finalizer2(list$1sClasspp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sClasspp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 962 "./neo-c.h"
                    it_301=self->tail;
                    # 966 "./neo-c.h"
                    while(_while_condtional41=it_301!=((void*)0),                    _while_condtional41) {
                        # 964 "./neo-c.h"
                        list$1sClassp_push_back(result_300,it_301->item);
                        # 965 "./neo-c.h"
                        it_301=it_301->prev;
                    }
                    # 968 "./neo-c.h"
                    __result204__ = __result_obj__ = result_300;
                    come_call_finalizer2(list$1sClasspp_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result204__;
                    come_call_finalizer2(list$1sClasspp_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional345;
void* right_value312;
struct list_item$1sClassp* litem_302;
_Bool _if_conditional346;
void* right_value313;
struct list_item$1sClassp* litem_303;
void* right_value314;
struct list_item$1sClassp* litem_304;
struct list$1sClassp* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
memset(&litem_302, 0, sizeof(struct list_item$1sClassp*));
right_value313 = (void*)0;
memset(&litem_303, 0, sizeof(struct list_item$1sClassp*));
right_value314 = (void*)0;
memset(&litem_304, 0, sizeof(struct list_item$1sClassp*));
                            # 256 "./neo-c.h"
                            # 225 "./neo-c.h"
                            if(_if_conditional345=self->len==0,                            _if_conditional345) {
                                # 226 "./neo-c.h"
                                litem_302=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value312=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 226, "list_item$1sClassp"))));
                                come_call_finalizer2(list_item$1sClasspp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 228 "./neo-c.h"
                                litem_302->prev=((void*)0);
                                # 229 "./neo-c.h"
                                litem_302->next=((void*)0);
                                # 230 "./neo-c.h"
                                litem_302->item=item;
                                # 232 "./neo-c.h"
                                self->tail=litem_302;
                                # 233 "./neo-c.h"
                                self->head=litem_302;
                            }
                            else {
                                # 256 "./neo-c.h"
                                # 235 "./neo-c.h"
                                if(_if_conditional346=self->len==1,                                _if_conditional346) {
                                    # 236 "./neo-c.h"
                                    litem_303=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value313=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 236, "list_item$1sClassp"))));
                                    come_call_finalizer2(list_item$1sClasspp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 238 "./neo-c.h"
                                    litem_303->prev=self->head;
                                    # 239 "./neo-c.h"
                                    litem_303->next=((void*)0);
                                    # 240 "./neo-c.h"
                                    litem_303->item=item;
                                    # 242 "./neo-c.h"
                                    self->tail=litem_303;
                                    # 243 "./neo-c.h"
                                    self->head->next=litem_303;
                                }
                                else {
                                    # 246 "./neo-c.h"
                                    litem_304=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value314=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 246, "list_item$1sClassp"))));
                                    come_call_finalizer2(list_item$1sClasspp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 248 "./neo-c.h"
                                    litem_304->prev=self->tail;
                                    # 249 "./neo-c.h"
                                    litem_304->next=((void*)0);
                                    # 250 "./neo-c.h"
                                    litem_304->item=item;
                                    # 252 "./neo-c.h"
                                    self->tail->next=litem_304;
                                    # 253 "./neo-c.h"
                                    self->tail=litem_304;
                                }
                            }
                            # 256 "./neo-c.h"
                            self->len++;
                            # 258 "./neo-c.h"
                            __result203__ = __result_obj__ = self;
                            return __result203__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional347;
struct sClass* result_306;
struct sClass* __result205__;
_Bool _if_conditional348;
struct sClass* __result206__;
struct sClass* result_307;
struct sClass* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_306, 0, sizeof(struct sClass*));
memset(&result_307, 0, sizeof(struct sClass*));
                    # 290 "./neo-c.h"
                    # 285 "./neo-c.h"
                    if(_if_conditional347=self==((void*)0),                    _if_conditional347) {
                        # 286 "./neo-c.h"
                        # 287 "./neo-c.h"
                        memset(&result_306,0,sizeof(struct sClass*));
                        # 288 "./neo-c.h"
                        __result205__ = __result_obj__ = result_306;
                        return __result205__;
                    }
                    # 290 "./neo-c.h"
                    self->it=self->head;
                    # 296 "./neo-c.h"
                    # 292 "./neo-c.h"
                    if(self->it) {
                        # 293 "./neo-c.h"
                        __result206__ = __result_obj__ = self->it->item;
                        return __result206__;
                    }
                    # 296 "./neo-c.h"
                    # 297 "./neo-c.h"
                    memset(&result_307,0,sizeof(struct sClass*));
                    # 298 "./neo-c.h"
                    __result207__ = __result_obj__ = result_307;
                    return __result207__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 320 "./neo-c.h"
                    __result208__ = self==((void*)0)||self->it==((void*)0);
                    return __result208__;
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional349;
struct sClass* result_309;
struct sClass* __result209__;
_Bool _if_conditional350;
struct sClass* __result210__;
struct sClass* result_310;
struct sClass* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_309, 0, sizeof(struct sClass*));
memset(&result_310, 0, sizeof(struct sClass*));
                    # 308 "./neo-c.h"
                    # 302 "./neo-c.h"
                    if(_if_conditional349=self==((void*)0)||self->it==((void*)0),                    _if_conditional349) {
                        # 303 "./neo-c.h"
                        # 304 "./neo-c.h"
                        memset(&result_309,0,sizeof(struct sClass*));
                        # 305 "./neo-c.h"
                        __result209__ = __result_obj__ = result_309;
                        return __result209__;
                    }
                    # 308 "./neo-c.h"
                    self->it=self->it->next;
                    # 314 "./neo-c.h"
                    # 310 "./neo-c.h"
                    if(self->it) {
                        # 311 "./neo-c.h"
                        __result210__ = __result_obj__ = self->it->item;
                        return __result210__;
                    }
                    # 314 "./neo-c.h"
                    # 315 "./neo-c.h"
                    memset(&result_310,0,sizeof(struct sClass*));
                    # 316 "./neo-c.h"
                    __result211__ = __result_obj__ = result_310;
                    return __result211__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional365;
void* right_value327;
struct list_item$1sNodeph* litem_338;
struct sNode* __dec_obj93;
_Bool _if_conditional366;
void* right_value328;
struct list_item$1sNodeph* litem_339;
struct sNode* __dec_obj94;
void* right_value329;
struct list_item$1sNodeph* litem_340;
struct sNode* __dec_obj95;
struct list$1sNodeph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
memset(&litem_338, 0, sizeof(struct list_item$1sNodeph*));
right_value328 = (void*)0;
memset(&litem_339, 0, sizeof(struct list_item$1sNodeph*));
right_value329 = (void*)0;
memset(&litem_340, 0, sizeof(struct list_item$1sNodeph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional365=self->len==0,                        _if_conditional365) {
                            # 226 "./neo-c.h"
                            litem_338=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value327=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_338->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_338->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj93=litem_338->item;
                            litem_338->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                            # 232 "./neo-c.h"
                            self->tail=litem_338;
                            # 233 "./neo-c.h"
                            self->head=litem_338;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional366=self->len==1,                            _if_conditional366) {
                                # 236 "./neo-c.h"
                                litem_339=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value328=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_339->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_339->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj94=litem_339->item;
                                litem_339->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                                # 242 "./neo-c.h"
                                self->tail=litem_339;
                                # 243 "./neo-c.h"
                                self->head->next=litem_339;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_340=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value329=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_340->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_340->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj95=litem_340->item;
                                litem_340->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                                # 252 "./neo-c.h"
                                self->tail->next=litem_340;
                                # 253 "./neo-c.h"
                                self->tail=litem_340;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result212__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result212__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sClassNode_finalize(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sClassNode_finalize"
                # 0 "sClassNode_finalize"
                if(_if_conditional372=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional372) {
                    # 0 "sClassNode_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sClassNode_finalize"
                # 1 "sClassNode_finalize"
                if(_if_conditional373=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional373) {
                    # 1 "sClassNode_finalize"
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sClassNode_finalize"
                # 2 "sClassNode_finalize"
                if(_if_conditional374=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional374) {
                    # 2 "sClassNode_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mMethods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sClassNode_finalize"
                # 3 "sClassNode_finalize"
                if(_if_conditional375=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional375) {
                    # 3 "sClassNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional376;
struct sClassNode* __result213__;
void* right_value347;
struct sClassNode* result_354;
_Bool _if_conditional377;
void* right_value348;
char* __dec_obj96;
_Bool _if_conditional378;
void* right_value349;
struct sClass* __dec_obj97;
_Bool _if_conditional379;
void* right_value350;
struct list$1sNodeph* __dec_obj98;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value351;
char* __dec_obj99;
_Bool _if_conditional382;
struct sClassNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
memset(&result_354, 0, sizeof(struct sClassNode*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
                # 3 "sClassNode_clone"
                # 2 "sClassNode_clone"
                if(_if_conditional376=self==(void*)0,                _if_conditional376) {
                    # 2 "sClassNode_clone"
                    __result213__ = __result_obj__ = (void*)0;
                    return __result213__;
                }
                # 3 "sClassNode_clone"
                result_354=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value347=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"))));
                come_call_finalizer2(sClassNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sClassNode_clone"
                # 4 "sClassNode_clone"
                if(_if_conditional377=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional377) {
                    # 4 "sClassNode_clone"
                    __dec_obj96=result_354->mName;
                    result_354->mName=(char*)come_increment_ref_count(((char*)(right_value348=string_clone(self->mName))));
                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sClassNode_clone"
                # 5 "sClassNode_clone"
                if(_if_conditional378=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional378) {
                    # 5 "sClassNode_clone"
                    __dec_obj97=result_354->mClass;
                    result_354->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value349=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sClassNode_clone"
                # 6 "sClassNode_clone"
                if(_if_conditional379=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional379) {
                    # 6 "sClassNode_clone"
                    __dec_obj98=result_354->mMethods;
                    result_354->mMethods=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value350=list$1sNodephp_clone(self->mMethods))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sClassNode_clone"
                # 7 "sClassNode_clone"
                if(_if_conditional380=self!=((void*)0),                _if_conditional380) {
                    # 7 "sClassNode_clone"
                    result_354->sline=self->sline;
                }
                # 9 "sClassNode_clone"
                # 8 "sClassNode_clone"
                if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional381) {
                    # 8 "sClassNode_clone"
                    __dec_obj99=result_354->sname;
                    result_354->sname=(char*)come_increment_ref_count(((char*)(right_value351=string_clone(self->sname))));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sClassNode_clone"
                # 9 "sClassNode_clone"
                if(_if_conditional382=self!=((void*)0),                _if_conditional382) {
                    # 9 "sClassNode_clone"
                    result_354->mOutput=self->mOutput;
                }
                # 10 "sClassNode_clone"
                __result214__ = __result_obj__ = result_354;
                come_call_finalizer2(sClassNode_finalize,result_354, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result214__;
                come_call_finalizer2(sClassNode_finalize,result_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_355;
char* p_356;
int sline_357;
_Bool _if_conditional383;
void* right_value354;
char* type_name_358;
_Bool _if_conditional384;
void* right_value355;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value356;
char* type_name_359;
void* right_value357;
struct sNode* __result217__;
void* right_value358;
struct sNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_355, 0, sizeof(_Bool));
memset(&p_356, 0, sizeof(char*));
memset(&sline_357, 0, sizeof(int));
right_value354 = (void*)0;
memset(&type_name_358, 0, sizeof(char*));
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&type_name_359, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
    # 1003 "14struct.c"
    define_struct_355=(_Bool)0;
    # 1024 "14struct.c"
    {
        # 1005 "14struct.c"
        p_356=info->p;
        # 1006 "14struct.c"
        sline_357=info->sline;
        # 1020 "14struct.c"
        # 1008 "14struct.c"
        if(_if_conditional383=charp_operator_equals(buf,"struct"),        _if_conditional383) {
            # 1009 "14struct.c"
            type_name_358=(char*)come_increment_ref_count(((char*)(right_value354=parse_word(info))));
            right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1018 "14struct.c"
            # 1011 "14struct.c"
            if(_if_conditional384=*info->p==123,            _if_conditional384) {
                # 1012 "14struct.c"
                ((char*)(right_value355=skip_block(info)));
                right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1017 "14struct.c"
                # 1014 "14struct.c"
                if(_if_conditional385=*info->p==59,                _if_conditional385) {
                    # 1015 "14struct.c"
                    define_struct_355=(_Bool)1;
                }
            }
            type_name_358 = come_decrement_ref_count2(type_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1020 "14struct.c"
        info->p=p_356;
        # 1021 "14struct.c"
        info->sline=sline_357;
    }
    # 1030 "14struct.c"
    # 1024 "14struct.c"
    if(define_struct_355) {
        # 1025 "14struct.c"
        type_name_359=(char*)come_increment_ref_count(((char*)(right_value356=parse_word(info))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1027 "14struct.c"
        __result217__ = __result_obj__ = ((struct sNode*)(right_value357=parse_struct((char*)come_increment_ref_count(type_name_359),info)));
        type_name_359 = come_decrement_ref_count2(type_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result217__;
        type_name_359 = come_decrement_ref_count2(type_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1030 "14struct.c"
    __result218__ = __result_obj__ = ((struct sNode*)(right_value358=string_node_v13(buf,head,head_sline,info)));
    if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result218__;
}

