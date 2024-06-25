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
    int sline;
    char* sname;
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

_Bool sStoreNode_terminated(struct sStoreNode* self);

char* sStoreNode_kind(struct sStoreNode* self);

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
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
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated(struct sLoadNode* self);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

_Bool sFunLoadNode_terminated(struct sFunLoadNode* self);

char* sFunLoadNode_kind(struct sFunLoadNode* self);

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
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
    # 15 "07var.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 16 "07var.c"
    self->alloc=alloc;
    # 23 "07var.c"
    # 17 "07var.c"
    if(type) {
        # 18 "07var.c"
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 21 "07var.c"
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 23 "07var.c"
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    # 30 "07var.c"
    # 24 "07var.c"
    if(multiple_assign) {
        # 25 "07var.c"
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(multiple_assign))));
        come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value116,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 28 "07var.c"
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 37 "07var.c"
    # 30 "07var.c"
    if(multiple_declare) {
        # 31 "07var.c"
        __dec_obj47=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value127=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer3(__dec_obj47,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value127,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 34 "07var.c"
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer3(__dec_obj48,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 37 "07var.c"
    __dec_obj49=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 39 "07var.c"
    self->sline=info->sline;
    # 40 "07var.c"
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 43 "07var.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreNode_terminated(struct sStoreNode* self){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 45 "07var.c"
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__;
void* right_value129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    # 50 "07var.c"
    __result78__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStoreNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* array_initializer_87;
_Bool _if_conditional143;
struct sVar* var__91;
_Bool _if_conditional152;
_Bool __result83__;
_Bool _if_conditional153;
_Bool __result84__;
void* right_value131;
struct sType* type_92;
void* right_value132;
void* right_value133;
struct sType* var_type_93;
void* right_value134;
_Bool _if_conditional154;
struct sVar* var__94;
_Bool _if_conditional155;
_Bool __result85__;
_Bool _if_conditional156;
_Bool __result86__;
void* right_value135;
struct sType* type_95;
_Bool _if_conditional157;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_96;
struct tuple3$3sTypephcharphsNodeph* it_99;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_102;
char* var_name_103;
struct sNode* right_value_104;
void* right_value136;
_Bool _if_conditional162;
_Bool __result94__;
void* right_value137;
struct sType* left_type_105;
void* right_value138;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool __result95__;
void* right_value139;
struct CVALUE* come_value_106;
void* right_value140;
struct sType* left_type2_107;
_Bool _if_conditional167;
_Bool _if_conditional169;
void* right_value141;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_111;
_Bool _if_conditional174;
void* right_value142;
struct CVALUE* come_value_114;
void* right_value143;
void* right_value144;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool __result105__;
void* right_value145;
struct sType* left_type_115;
_Bool _if_conditional177;
void* right_value146;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value147;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _if_conditional180;
void* right_value148;
struct CVALUE* come_value_118;
void* right_value149;
void* right_value150;
struct sType* left_type2_119;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value151;
struct list$1sNodeph* o2_saved_120;
struct sNode* it_121;
_Bool _if_conditional183;
void* right_value152;
struct CVALUE* come_value_122;
void* right_value153;
void* right_value154;
struct CVALUE* come_value_123;
void* right_value155;
char* __dec_obj51;
void* right_value156;
struct sType* __dec_obj52;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool __result107__;
void* right_value160;
struct CVALUE* right_value_127;
struct sType* right_type_128;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct sVar* var__129;
_Bool _if_conditional192;
_Bool __result108__;
_Bool _if_conditional193;
int i_130;
struct list$1charph* o2_saved_131;
char* it_134;
_Bool _if_conditional199;
struct sType* right_type2_140;
void* right_value161;
void* right_value162;
struct sType* var_type_141;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value163;
struct list$1sNodeph* o2_saved_142;
struct sNode* it_143;
_Bool _if_conditional204;
void* right_value164;
struct CVALUE* come_value_144;
void* right_value165;
_Bool _if_conditional205;
void* right_value166;
void* right_value167;
struct sType* type_145;
void* right_value168;
void* right_value169;
struct sType* var_type_146;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value170;
struct list$1sNodeph* o2_saved_147;
struct sNode* it_148;
_Bool _if_conditional208;
void* right_value171;
struct CVALUE* come_value_149;
void* right_value172;
struct sClass* current_stack_frame_struct_150;
_Bool _if_conditional209;
struct sVar* parent_var_151;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value173;
struct CVALUE* come_value_152;
struct sType* left_type_153;
_Bool _if_conditional212;
void* right_value174;
char* c_value_154;
void* right_value175;
char* __dec_obj56;
int right_value_id_155;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value176;
char* c_value_156;
void* right_value177;
char* __dec_obj57;
void* right_value178;
char* __dec_obj58;
void* right_value179;
struct sType* __dec_obj59;
void* right_value180;
void* right_value181;
_Bool __result120__;
_Bool _if_conditional215;
static int num_multiple_var_157=0;
void* right_value182;
char* multiple_var_name_158;
void* right_value183;
void* right_value184;
char* __dec_obj60;
int i_159;
struct list$1charph* o2_saved_160;
char* it_161;
_Bool _if_conditional216;
void* right_value185;
struct sType* right_type2_162;
struct sVar* var__163;
void* right_value186;
struct sType* var_type_164;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value187;
struct list$1sNodeph* o2_saved_165;
struct sNode* it_166;
_Bool _if_conditional219;
void* right_value188;
struct CVALUE* come_value_167;
void* right_value189;
void* right_value190;
struct sType* left_type_168;
void* right_value191;
struct CVALUE* right_value2_169;
void* right_value192;
char* __dec_obj61;
void* right_value193;
struct sType* __dec_obj62;
void* right_value194;
struct CVALUE* come_value_170;
void* right_value195;
void* right_value196;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value197;
char* __dec_obj63;
int right_value_id_171;
_Bool _if_conditional222;
void* right_value198;
char* __dec_obj64;
void* right_value199;
struct sType* __dec_obj65;
_Bool _if_conditional223;
void* right_value200;
struct sVar* var__172;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool __result121__;
_Bool _if_conditional226;
void* right_value201;
struct sType* __dec_obj66;
void* right_value202;
struct sType* left_type_173;
void* right_value203;
struct CVALUE* come_value_174;
_Bool _if_conditional227;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
char* __dec_obj67;
_Bool _if_conditional228;
void* right_value208;
void* right_value209;
_Bool _if_conditional229;
void* right_value210;
void* right_value211;
char* __dec_obj68;
_Bool _if_conditional230;
void* right_value212;
void* right_value213;
_Bool _if_conditional231;
void* right_value214;
char* __dec_obj69;
void* right_value215;
char* __dec_obj70;
int right_value_id_175;
_Bool _if_conditional232;
void* right_value216;
struct sType* __dec_obj71;
_Bool _if_conditional233;
void* right_value217;
void* right_value218;
_Bool _if_conditional234;
void* right_value219;
char* __dec_obj72;
void* right_value220;
char* __dec_obj73;
void* right_value221;
struct sType* __dec_obj74;
void* right_value222;
void* right_value223;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool __result122__;
void* right_value224;
char* __dec_obj75;
void* right_value225;
struct sType* __dec_obj76;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value226;
void* right_value227;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&array_initializer_87, 0, sizeof(char*));
memset(&var__91, 0, sizeof(struct sVar*));
right_value131 = (void*)0;
memset(&type_92, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&var_type_93, 0, sizeof(struct sType*));
right_value134 = (void*)0;
memset(&var__94, 0, sizeof(struct sVar*));
right_value135 = (void*)0;
memset(&type_95, 0, sizeof(struct sType*));
memset(&o2_saved_96, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_99, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&left_type_105, 0, sizeof(struct sType*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
memset(&left_type2_107, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_111, 0, sizeof(struct sNode*));
right_value142 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&left_type_115, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&left_type2_119, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&o2_saved_120, 0, sizeof(struct list$1sNodeph*));
memset(&it_121, 0, sizeof(struct sNode*));
right_value152 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&right_type_128, 0, sizeof(struct sType*));
memset(&var__129, 0, sizeof(struct sVar*));
memset(&i_130, 0, sizeof(int));
memset(&o2_saved_131, 0, sizeof(struct list$1charph*));
memset(&it_134, 0, sizeof(char*));
memset(&right_type2_140, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&var_type_141, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&o2_saved_142, 0, sizeof(struct list$1sNodeph*));
memset(&it_143, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_145, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&var_type_146, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&o2_saved_147, 0, sizeof(struct list$1sNodeph*));
memset(&it_148, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&come_value_149, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
memset(&current_stack_frame_struct_150, 0, sizeof(struct sClass*));
memset(&parent_var_151, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
memset(&left_type_153, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&c_value_154, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&right_value_id_155, 0, sizeof(int));
right_value176 = (void*)0;
memset(&c_value_156, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&multiple_var_name_158, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1charph*));
memset(&it_161, 0, sizeof(char*));
right_value185 = (void*)0;
memset(&right_type2_162, 0, sizeof(struct sType*));
memset(&var__163, 0, sizeof(struct sVar*));
right_value186 = (void*)0;
memset(&var_type_164, 0, sizeof(struct sType*));
right_value187 = (void*)0;
memset(&o2_saved_165, 0, sizeof(struct list$1sNodeph*));
memset(&it_166, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&left_type_168, 0, sizeof(struct sType*));
right_value191 = (void*)0;
memset(&right_value2_169, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&come_value_170, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&right_value_id_171, 0, sizeof(int));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&var__172, 0, sizeof(struct sVar*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&left_type_173, 0, sizeof(struct sType*));
right_value203 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
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
memset(&right_value_id_175, 0, sizeof(int));
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
    # 55 "07var.c"
    array_initializer_87=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->array_initializer))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 574 "07var.c"
    # 57 "07var.c"
    if(array_initializer_87) {
        # 58 "07var.c"
        var__91=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        # 64 "07var.c"
        # 59 "07var.c"
        if(var__91) {
            # 60 "07var.c"
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            # 61 "07var.c"
            __result83__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result83__;
        }
        # 75 "07var.c"
        # 64 "07var.c"
        if(_if_conditional153=self->type==((void*)0),        _if_conditional153) {
            # 65 "07var.c"
            err_msg(info,"Require type name(%s)",self->name);
            # 66 "07var.c"
            __result84__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result84__;
        }
        else {
            # 69 "07var.c"
            type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 71 "07var.c"
            type_92->mFunctionParam=(_Bool)0;
            # 72 "07var.c"
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_92)))),info);
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(type_92,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 75 "07var.c"
        var__91=get_variable_from_table(info->lv_table,self->name);
        # 77 "07var.c"
        var_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(var__91->mType))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 78 "07var.c"
        var_type_93->mStatic=(_Bool)0;
        # 80 "07var.c"
        add_come_code(info,"%s=%s;\n",((char*)(right_value134=make_define_var(var_type_93,var__91->mCValueName,(_Bool)0,info))),array_initializer_87);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(var_type_93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 574 "07var.c"
        # 82 "07var.c"
        if(_if_conditional154=self->right_value==((void*)0),        _if_conditional154) {
            # 83 "07var.c"
            var__94=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            # 89 "07var.c"
            # 84 "07var.c"
            if(var__94) {
                # 85 "07var.c"
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                # 86 "07var.c"
                __result85__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result85__;
            }
            # 94 "07var.c"
            # 89 "07var.c"
            if(_if_conditional156=self->type==((void*)0),            _if_conditional156) {
                # 90 "07var.c"
                err_msg(info,"Require concrete variable type(%s)",self->name);
                # 91 "07var.c"
                __result86__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result86__;
            }
            # 94 "07var.c"
            type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 95 "07var.c"
            type_95->mFunctionParam=(_Bool)0;
            # 223 "07var.c"
            # 97 "07var.c"
            if(self->multiple_declare) {
                # 146 "07var.c"
                for(                o2_saved_96=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_99=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_96));                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_96));                it_99=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_96))                ){
                    # 99 "07var.c"
                    multiple_assign_var1=it_99;
                    type_102=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_103=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_104=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    # 100 "07var.c"
                    add_variable_to_table(var_name_103,(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type_102)))),info);
                    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 102 "07var.c"
                    var__94=get_variable_from_table(info->lv_table,var_name_103);
                    # 109 "07var.c"
                    # 104 "07var.c"
                    if(_if_conditional162=var__94==((void*)0),                    _if_conditional162) {
                        # 105 "07var.c"
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_99);
                        # 106 "07var.c"
                        __result94__ = (_Bool)1;
                        come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result94__;
                    }
                    # 109 "07var.c"
                    left_type_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(var__94->mType))));
                    come_call_finalizer3(right_value137,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 111 "07var.c"
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value138=make_define_var(left_type_105,var__94->mCValueName,(_Bool)0,info))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 123 "07var.c"
                    # 113 "07var.c"
                    if(right_value_104) {
                        # 117 "07var.c"
                        # 114 "07var.c"
                        if(_if_conditional164=!node_compile(right_value_104,info),                        _if_conditional164) {
                            # 115 "07var.c"
                            __result95__ = (_Bool)0;
                            come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(left_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result95__;
                        }
                        # 117 "07var.c"
                        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value139,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 118 "07var.c"
                        dec_stack_ptr(1,info);
                        # 120 "07var.c"
                        add_come_code(info,"%s=%s;\n",var__94->mCValueName,come_value_106->c_value);
                        come_call_finalizer3(come_value_106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 123 "07var.c"
                    left_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(left_type_105))));
                    come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 124 "07var.c"
                    left_type2_107->mStatic=(_Bool)0;
                    # 145 "07var.c"
                    # 126 "07var.c"
                    if(_if_conditional167=!var__94->mType->mConstant&&!var__94->mType->mStatic,                    _if_conditional167) {
                        # 144 "07var.c"
                        # 127 "07var.c"
                        if(_if_conditional169=list$1sNodeph_length(left_type2_107->mArrayNum)>0,                        _if_conditional169) {
                            # 128 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value141=make_type_name_string(left_type2_107,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 139 "07var.c"
                            for(                            o2_saved_108=(struct list$1sNodeph*)come_increment_ref_count((left_type2_107->mArrayNum)),it_111=list$1sNodeph_begin((o2_saved_108));                            !list$1sNodeph_end((o2_saved_108));                            it_111=list$1sNodeph_next((o2_saved_108))                            ){
                                # 135 "07var.c"
                                # 130 "07var.c"
                                if(_if_conditional174=!node_compile(it_111,info),                                _if_conditional174) {
                                    # 131 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 132 "07var.c"
                                    exit(1);
                                }
                                # 135 "07var.c"
                                come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value142,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 136 "07var.c"
                                dec_stack_ptr(1,info);
                                # 137 "07var.c"
                                add_come_code(info,"*(%s)",come_value_114->c_value);
                                come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_108,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 139 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 142 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__94->mCValueName,((char*)(right_value143=make_type_name_string(left_type2_107,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 148 "07var.c"
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(type_95)))),info);
                come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 150 "07var.c"
                var__94=get_variable_from_table(info->lv_table,self->name);
                # 161 "07var.c"
                # 152 "07var.c"
                if(_if_conditional175=var__94==((void*)0),                _if_conditional175) {
                    # 153 "07var.c"
                    var__94=get_variable_from_table(info->gv_table,self->name);
                    # 159 "07var.c"
                    # 155 "07var.c"
                    if(_if_conditional176=var__94==((void*)0),                    _if_conditional176) {
                        # 156 "07var.c"
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        # 157 "07var.c"
                        __result105__ = (_Bool)1;
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result105__;
                    }
                }
                # 161 "07var.c"
                left_type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(var__94->mType))));
                come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 211 "07var.c"
                # 162 "07var.c"
                if(_if_conditional177=list$1sNodeph_length(left_type_115->mArrayNum)>0,                _if_conditional177) {
                    # 163 "07var.c"
                    add_come_code(info,"%s;\n",((char*)(right_value146=make_define_var(left_type_115,var__94->mCValueName,(_Bool)0,info))));
                    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 183 "07var.c"
                    # 164 "07var.c"
                    if(_if_conditional178=!left_type_115->mStatic,                    _if_conditional178) {
                        # 182 "07var.c"
                        # 165 "07var.c"
                        if(_if_conditional179=list$1sNodeph_length(left_type_115->mArrayNum)>0,                        _if_conditional179) {
                            # 166 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value147=make_type_name_string(left_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 177 "07var.c"
                            for(                            o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((left_type_115->mArrayNum)),it_117=list$1sNodeph_begin((o2_saved_116));                            !list$1sNodeph_end((o2_saved_116));                            it_117=list$1sNodeph_next((o2_saved_116))                            ){
                                # 173 "07var.c"
                                # 168 "07var.c"
                                if(_if_conditional180=!node_compile(it_117,info),                                _if_conditional180) {
                                    # 169 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 170 "07var.c"
                                    exit(1);
                                }
                                # 173 "07var.c"
                                come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 174 "07var.c"
                                dec_stack_ptr(1,info);
                                # 175 "07var.c"
                                add_come_code(info,"*(%s)",come_value_118->c_value);
                                come_call_finalizer3(come_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 177 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 180 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__94->mCValueName,var__94->mCValueName);
                        }
                    }
                }
                else {
                    # 185 "07var.c"
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value149=make_define_var(left_type_115,var__94->mCValueName,(_Bool)0,info))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 187 "07var.c"
                    left_type2_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type_115))));
                    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 188 "07var.c"
                    left_type2_119->mStatic=(_Bool)0;
                    # 209 "07var.c"
                    # 190 "07var.c"
                    if(_if_conditional181=!var__94->mType->mConstant&&!var__94->mType->mStatic,                    _if_conditional181) {
                        # 208 "07var.c"
                        # 191 "07var.c"
                        if(_if_conditional182=list$1sNodeph_length(left_type2_119->mArrayNum)>0,                        _if_conditional182) {
                            # 192 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value151=make_type_name_string(left_type2_119,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 203 "07var.c"
                            for(                            o2_saved_120=(struct list$1sNodeph*)come_increment_ref_count((left_type2_119->mArrayNum)),it_121=list$1sNodeph_begin((o2_saved_120));                            !list$1sNodeph_end((o2_saved_120));                            it_121=list$1sNodeph_next((o2_saved_120))                            ){
                                # 199 "07var.c"
                                # 194 "07var.c"
                                if(_if_conditional183=!node_compile(it_121,info),                                _if_conditional183) {
                                    # 195 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 196 "07var.c"
                                    exit(1);
                                }
                                # 199 "07var.c"
                                come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 200 "07var.c"
                                dec_stack_ptr(1,info);
                                # 201 "07var.c"
                                add_come_code(info,"*(%s)",come_value_122->c_value);
                                come_call_finalizer3(come_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_120,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 203 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 206 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__94->mCValueName,((char*)(right_value153=make_type_name_string(left_type2_119,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(left_type2_119,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 211 "07var.c"
                come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 211, "CVALUE"))));
                come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 213 "07var.c"
                __dec_obj51=come_value_123->c_value;
                come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s",var__94->mCValueName))));
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 214 "07var.c"
                __dec_obj52=come_value_123->type;
                come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type_115))));
                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 215 "07var.c"
                come_value_123->var=var__94;
                # 217 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
                # 222 "07var.c"
                # 219 "07var.c"
                if(_if_conditional187=self->alloc&&!left_type_115->mClass->mNumber&&left_type_115->mPointerNum==0,                _if_conditional187) {
                    # 220 "07var.c"
                    var__94->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(left_type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 229 "07var.c"
            # 225 "07var.c"
            if(_if_conditional188=!node_compile(self->right_value,info),            _if_conditional188) {
                # 226 "07var.c"
                __result107__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result107__;
            }
            # 229 "07var.c"
            right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 230 "07var.c"
            right_type_128=right_value_127->type;
            # 231 "07var.c"
            dec_stack_ptr(1,info);
            # 239 "07var.c"
            # 233 "07var.c"
            if(self->multiple_assign) {
                # 237 "07var.c"
                # 234 "07var.c"
                if(right_type_128->mNoSolvedGenericsType->v1) {
                    # 235 "07var.c"
                    right_type_128=right_type_128->mNoSolvedGenericsType->v1;
                }
            }
            # 323 "07var.c"
            # 239 "07var.c"
            if(self->alloc) {
                # 240 "07var.c"
                var__129=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                # 246 "07var.c"
                # 241 "07var.c"
                if(var__129) {
                    # 242 "07var.c"
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    # 243 "07var.c"
                    __result108__ = (_Bool)0;
                    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
                # 321 "07var.c"
                # 246 "07var.c"
                if(self->multiple_assign) {
                    # 247 "07var.c"
                    i_130=0;
                    # 283 "07var.c"
                    for(                    o2_saved_131=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_134=list$1charph_begin((o2_saved_131));                    !list$1charph_end((o2_saved_131));                    it_134=list$1charph_next((o2_saved_131))                    ){
                        # 281 "07var.c"
                        # 249 "07var.c"
                        if(_if_conditional199=i_130<list$1sTypeph_length(right_type_128->mGenericsTypes),                        _if_conditional199) {
                            # 250 "07var.c"
                            right_type2_140=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_128->mGenericsTypes,i_130), "07var.c", 250, 0));
                            # 251 "07var.c"
                            right_type2_140->mFunctionParam=(_Bool)0;
                            # 253 "07var.c"
                            add_variable_to_table(it_134,(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(right_type2_140)))),info);
                            come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 255 "07var.c"
                            var__129=get_variable_from_table(info->lv_table,it_134);
                            # 257 "07var.c"
                            var_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(var__129->mType))));
                            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 258 "07var.c"
                            var_type_141->mStatic=(_Bool)0;
                            # 279 "07var.c"
                            # 260 "07var.c"
                            if(_if_conditional202=!var_type_141->mConstant&&!var_type_141->mStatic,                            _if_conditional202) {
                                # 278 "07var.c"
                                # 261 "07var.c"
                                if(_if_conditional203=list$1sNodeph_length(var_type_141->mArrayNum)>0,                                _if_conditional203) {
                                    # 262 "07var.c"
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__129->mCValueName,((char*)(right_value163=make_type_name_string(var_type_141,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 273 "07var.c"
                                    for(                                    o2_saved_142=(struct list$1sNodeph*)come_increment_ref_count((var_type_141->mArrayNum)),it_143=list$1sNodeph_begin((o2_saved_142));                                    !list$1sNodeph_end((o2_saved_142));                                    it_143=list$1sNodeph_next((o2_saved_142))                                    ){
                                        # 269 "07var.c"
                                        # 264 "07var.c"
                                        if(_if_conditional204=!node_compile(it_143,info),                                        _if_conditional204) {
                                            # 265 "07var.c"
                                            err_msg(info,"invalid array num");
                                            # 266 "07var.c"
                                            exit(1);
                                        }
                                        # 269 "07var.c"
                                        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
                                        come_call_finalizer3(right_value164,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 270 "07var.c"
                                        dec_stack_ptr(1,info);
                                        # 271 "07var.c"
                                        add_come_code(info,"*(%s)",come_value_144->c_value);
                                        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_142,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 273 "07var.c"
                                    add_come_code(info,");\n");
                                }
                                else {
                                    # 276 "07var.c"
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__129->mCValueName,((char*)(right_value165=make_type_name_string(var_type_141,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer3(var_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 281 "07var.c"
                        i_130++;
                    }
                    come_call_finalizer3(o2_saved_131,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 296 "07var.c"
                    # 285 "07var.c"
                    if(_if_conditional205=self->type==((void*)0),                    _if_conditional205) {
                        # 286 "07var.c"
                        right_type_128->mFunctionParam=(_Bool)0;
                        # 287 "07var.c"
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(right_type_128)))),info);
                        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 290 "07var.c"
                        type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 292 "07var.c"
                        type_145->mFunctionParam=(_Bool)0;
                        # 293 "07var.c"
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(type_145)))),info);
                        come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 296 "07var.c"
                    var__129=get_variable_from_table(info->lv_table,self->name);
                    # 298 "07var.c"
                    var_type_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(var__129->mType))));
                    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 299 "07var.c"
                    var_type_146->mStatic=(_Bool)0;
                    # 320 "07var.c"
                    # 301 "07var.c"
                    if(_if_conditional206=!var__129->mType->mStatic&&!var_type_146->mConstant&&list$1sNodeph_length(var_type_146->mArrayNum)==0,                    _if_conditional206) {
                        # 319 "07var.c"
                        # 302 "07var.c"
                        if(_if_conditional207=list$1sNodeph_length(var_type_146->mArrayNum)>0,                        _if_conditional207) {
                            # 303 "07var.c"
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__129->mCValueName,((char*)(right_value170=make_type_name_string(var_type_146,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 314 "07var.c"
                            for(                            o2_saved_147=(struct list$1sNodeph*)come_increment_ref_count((var_type_146->mArrayNum)),it_148=list$1sNodeph_begin((o2_saved_147));                            !list$1sNodeph_end((o2_saved_147));                            it_148=list$1sNodeph_next((o2_saved_147))                            ){
                                # 310 "07var.c"
                                # 305 "07var.c"
                                if(_if_conditional208=!node_compile(it_148,info),                                _if_conditional208) {
                                    # 306 "07var.c"
                                    err_msg(info,"invalid array num");
                                    # 307 "07var.c"
                                    exit(1);
                                }
                                # 310 "07var.c"
                                come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value171,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 311 "07var.c"
                                dec_stack_ptr(1,info);
                                # 312 "07var.c"
                                add_come_code(info,"*(%s)",come_value_149->c_value);
                                come_call_finalizer3(come_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_147,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 314 "07var.c"
                            add_come_code(info,");\n");
                        }
                        else {
                            # 317 "07var.c"
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__129->mCValueName,((char*)(right_value172=make_type_name_string(var_type_146,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(var_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            # 323 "07var.c"
            current_stack_frame_struct_150=info->current_stack_frame_struct;
            # 372 "07var.c"
            # 325 "07var.c"
            if(_if_conditional209=current_stack_frame_struct_150&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional209) {
                # 326 "07var.c"
                parent_var_151=get_variable_from_table(info->lv_table->mParent,self->name);
                # 370 "07var.c"
                # 328 "07var.c"
                if(_if_conditional210=parent_var_151!=((void*)0),                _if_conditional210) {
                    # 369 "07var.c"
                    # 329 "07var.c"
                    if(_if_conditional211=string_operator_not_equals(parent_var_151->mFunName,info->come_fun->mName),                    _if_conditional211) {
                        # 330 "07var.c"
                        come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 330, "CVALUE"))));
                        come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 332 "07var.c"
                        left_type_153=parent_var_151->mType;
                        # 358 "07var.c"
                        # 334 "07var.c"
                        if(_if_conditional212=left_type_153->mPointerNum>0&&right_type_128->mPointerNum>0&&right_type_128->mHeap&&left_type_153->mHeap,                        _if_conditional212) {
                            # 335 "07var.c"
                            c_value_154=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("*(parent->%s)",parent_var_151->mCValueName))));
                            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 336 "07var.c"
                            decrement_ref_count_object(parent_var_151->mType,c_value_154,info,(_Bool)0);
                            # 338 "07var.c"
                            std_move(left_type_153,right_type_128,right_value_127,info);
                            # 340 "07var.c"
                            __dec_obj56=come_value_152->c_value;
                            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 342 "07var.c"
                            right_value_id_155=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_127->c_value));
                            # 347 "07var.c"
                            # 344 "07var.c"
                            if(_if_conditional213=right_value_id_155!=-1,                            _if_conditional213) {
                                # 345 "07var.c"
                                remove_object_from_right_values(right_value_id_155,info);
                            }
                            c_value_154 = come_decrement_ref_count2(c_value_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 358 "07var.c"
                            # 348 "07var.c"
                            if(_if_conditional214=left_type_153->mPointerNum>0&&right_type_128->mPointerNum>0&&string_operator_equals(right_type_128->mClass->mName,"void")&&left_type_153->mHeap,                            _if_conditional214) {
                                # 349 "07var.c"
                                c_value_156=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("*(parent->%s)",parent_var_151->mCValueName))));
                                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 350 "07var.c"
                                decrement_ref_count_object(parent_var_151->mType,c_value_156,info,(_Bool)0);
                                # 352 "07var.c"
                                __dec_obj57=come_value_152->c_value;
                                come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_156 = come_decrement_ref_count2(c_value_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 355 "07var.c"
                                __dec_obj58=come_value_152->c_value;
                                come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        # 358 "07var.c"
                        __dec_obj59=come_value_152->type;
                        come_value_152->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(left_type_153))));
                        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 359 "07var.c"
                        come_value_152->var=((void*)0);
                        # 361 "07var.c"
                        check_assign_type(((char*)(right_value181=xsprintf("\%s is assigning to",((char*)(right_value180=string_to_string(self->name)))))),left_type_153,right_type_128,come_value_152,(_Bool)0,(_Bool)1,info);
                        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 363 "07var.c"
                        add_come_last_code(info,"%s;\n",come_value_152->c_value);
                        # 365 "07var.c"
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
                        # 367 "07var.c"
                        __result120__ = (_Bool)1;
                        come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result120__;
                        come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 572 "07var.c"
            # 372 "07var.c"
            if(self->multiple_assign) {
                # 373 "07var.c"
                # 374 "07var.c"
                multiple_var_name_158=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("multiple_assign_var%d",++num_multiple_var_157))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 375 "07var.c"
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value183=make_define_var(right_value_127->type,multiple_var_name_158,(_Bool)0,info))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 377 "07var.c"
                add_come_code(info,"%s=%s;\n",multiple_var_name_158,right_value_127->c_value);
                # 379 "07var.c"
                __dec_obj60=right_value_127->c_value;
                right_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(multiple_var_name_158))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 381 "07var.c"
                i_159=0;
                # 454 "07var.c"
                for(                o2_saved_160=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_161=list$1charph_begin((o2_saved_160));                !list$1charph_end((o2_saved_160));                it_161=list$1charph_next((o2_saved_160))                ){
                    # 450 "07var.c"
                    # 383 "07var.c"
                    if(_if_conditional216=i_159<list$1sTypeph_length(right_type_128->mGenericsTypes),                    _if_conditional216) {
                        # 384 "07var.c"
                        right_type2_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_128->mGenericsTypes,i_159), "07var.c", 384, 1))))));
                        come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 386 "07var.c"
                        var__163=get_variable_from_table(info->lv_table,it_161);
                        # 388 "07var.c"
                        var_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(var__163->mType))));
                        come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 389 "07var.c"
                        var_type_164->mStatic=(_Bool)0;
                        # 411 "07var.c"
                        # 391 "07var.c"
                        if(_if_conditional217=!var_type_164->mConstant,                        _if_conditional217) {
                            # 409 "07var.c"
                            # 392 "07var.c"
                            if(_if_conditional218=list$1sNodeph_length(var_type_164->mArrayNum)>0,                            _if_conditional218) {
                                # 393 "07var.c"
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__163->mCValueName,((char*)(right_value187=make_type_name_string(var_type_164,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 404 "07var.c"
                                for(                                o2_saved_165=(struct list$1sNodeph*)come_increment_ref_count((var_type_164->mArrayNum)),it_166=list$1sNodeph_begin((o2_saved_165));                                !list$1sNodeph_end((o2_saved_165));                                it_166=list$1sNodeph_next((o2_saved_165))                                ){
                                    # 400 "07var.c"
                                    # 395 "07var.c"
                                    if(_if_conditional219=!node_compile(it_166,info),                                    _if_conditional219) {
                                        # 396 "07var.c"
                                        err_msg(info,"invalid array num");
                                        # 397 "07var.c"
                                        exit(1);
                                    }
                                    # 400 "07var.c"
                                    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
                                    come_call_finalizer3(right_value188,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 401 "07var.c"
                                    dec_stack_ptr(1,info);
                                    # 402 "07var.c"
                                    add_come_code(info,"*(%s)",come_value_167->c_value);
                                    come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_165,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 404 "07var.c"
                                add_come_code(info,");\n");
                            }
                            else {
                                # 407 "07var.c"
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__163->mCValueName,((char*)(right_value189=make_type_name_string(var_type_164,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        # 411 "07var.c"
                        left_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(var__163->mType))));
                        come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 413 "07var.c"
                        right_value2_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 413, "CVALUE"))));
                        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 415 "07var.c"
                        __dec_obj61=right_value2_169->c_value;
                        right_value2_169->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s->v%d",right_value_127->c_value,i_159+1))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 416 "07var.c"
                        __dec_obj62=right_value2_169->type;
                        right_value2_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(right_type2_162))));
                        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 417 "07var.c"
                        right_value2_169->var=((void*)0);
                        # 419 "07var.c"
                        come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 419, "CVALUE"))));
                        come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 421 "07var.c"
                        check_assign_type(((char*)(right_value196=xsprintf("\%s is assining to}",((char*)(right_value195=string_to_string(self->name)))))),left_type_168,right_type2_162,come_value_170,(_Bool)0,(_Bool)1,info);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 438 "07var.c"
                        # 422 "07var.c"
                        if(_if_conditional220=right_type2_162->mHeap&&left_type_168->mHeap&&left_type_168->mPointerNum>0&&right_type2_162->mPointerNum>0,                        _if_conditional220) {
                            # 429 "07var.c"
                            # 424 "07var.c"
                            if(self->alloc) {
                                # 425 "07var.c"
                                std_move(left_type_168,right_type2_162,right_value2_169,info);
                                # 426 "07var.c"
                                __dec_obj63=come_value_170->c_value;
                                come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s=%s",var__163->mCValueName,right_value2_169->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 429 "07var.c"
                            right_value_id_171=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_169->c_value));
                            # 434 "07var.c"
                            # 431 "07var.c"
                            if(_if_conditional222=right_value_id_171!=-1,                            _if_conditional222) {
                                # 432 "07var.c"
                                remove_object_from_right_values(right_value_id_171,info);
                            }
                        }
                        else {
                            # 436 "07var.c"
                            __dec_obj64=come_value_170->c_value;
                            come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("%s=%s",var__163->mCValueName,right_value2_169->c_value))));
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 438 "07var.c"
                        __dec_obj65=come_value_170->type;
                        come_value_170->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(left_type_168))));
                        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 439 "07var.c"
                        come_value_170->var=var__163;
                        # 448 "07var.c"
                        # 441 "07var.c"
                        if(self->alloc) {
                            # 442 "07var.c"
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value200=make_define_var(left_type_168,var__163->mCValueName,(_Bool)0,info))));
                            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 443 "07var.c"
                            add_come_code(info,"%s;\n",come_value_170->c_value);
                        }
                        else {
                            # 446 "07var.c"
                            add_come_code(info,"%s;\n",come_value_170->c_value);
                        }
                        come_call_finalizer3(right_type2_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(var_type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 450 "07var.c"
                    i_159++;
                }
                come_call_finalizer3(o2_saved_160,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                multiple_var_name_158 = come_decrement_ref_count2(multiple_var_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 456 "07var.c"
                var__172=get_variable_from_table(info->lv_table,self->name);
                # 467 "07var.c"
                # 458 "07var.c"
                if(_if_conditional224=var__172==((void*)0),                _if_conditional224) {
                    # 459 "07var.c"
                    var__172=get_variable_from_table(info->gv_table,self->name);
                    # 465 "07var.c"
                    # 461 "07var.c"
                    if(_if_conditional225=var__172==((void*)0),                    _if_conditional225) {
                        # 462 "07var.c"
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        # 463 "07var.c"
                        __result121__ = (_Bool)1;
                        come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result121__;
                    }
                }
                # 470 "07var.c"
                # 467 "07var.c"
                if(_if_conditional226=var__172->mType==((void*)0),                _if_conditional226) {
                    # 468 "07var.c"
                    __dec_obj66=var__172->mType;
                    var__172->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(right_type_128))));
                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 470 "07var.c"
                left_type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(var__172->mType))));
                come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 472 "07var.c"
                come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 472, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 563 "07var.c"
                # 474 "07var.c"
                if(_if_conditional227=var__172->mType->mStatic&&!var__172->mGlobal,                _if_conditional227) {
                    # 475 "07var.c"
                    check_assign_type(((char*)(right_value205=xsprintf("\%s is assining to",((char*)(right_value204=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 476 "07var.c"
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value206=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))),right_value_127->c_value);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 477 "07var.c"
                    __dec_obj67=come_value_174->c_value;
                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(""))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 479 "07var.c"
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                    # 481 "07var.c"
                    transpiler_clear_last_code(info);
                }
                else {
                    # 563 "07var.c"
                    # 483 "07var.c"
                    if(var__172->mType->mConstant) {
                        # 484 "07var.c"
                        check_assign_type(((char*)(right_value209=xsprintf("\%s is assining to",((char*)(right_value208=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 491 "07var.c"
                        # 485 "07var.c"
                        if(self->alloc) {
                            # 486 "07var.c"
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value210=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))),right_value_127->c_value);
                            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 489 "07var.c"
                            add_come_code_at_function_head(info,"%s=%s;\n",var__172->mCValueName,right_value_127->c_value);
                        }
                        # 491 "07var.c"
                        __dec_obj68=come_value_174->c_value;
                        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(""))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 493 "07var.c"
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                        # 495 "07var.c"
                        transpiler_clear_last_code(info);
                    }
                    else {
                        # 563 "07var.c"
                        # 497 "07var.c"
                        if(_if_conditional230=right_type_128->mHeap&&left_type_173->mHeap&&left_type_173->mPointerNum>0&&right_type_128->mPointerNum>0,                        _if_conditional230) {
                            # 499 "07var.c"
                            check_assign_type(((char*)(right_value213=xsprintf("\%s is assining to",((char*)(right_value212=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 509 "07var.c"
                            # 500 "07var.c"
                            if(self->alloc) {
                                # 501 "07var.c"
                                std_move(left_type_173,right_type_128,right_value_127,info);
                                # 502 "07var.c"
                                __dec_obj69=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 505 "07var.c"
                                decrement_ref_count_object(left_type_173,var__172->mCValueName,info,(_Bool)0);
                                # 506 "07var.c"
                                std_move(left_type_173,right_type_128,right_value_127,info);
                                # 507 "07var.c"
                                __dec_obj70=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 509 "07var.c"
                            right_value_id_175=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_127->c_value));
                            # 514 "07var.c"
                            # 511 "07var.c"
                            if(_if_conditional232=right_value_id_175!=-1,                            _if_conditional232) {
                                # 512 "07var.c"
                                remove_object_from_right_values(right_value_id_175,info);
                            }
                            # 514 "07var.c"
                            __dec_obj71=come_value_174->type;
                            come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(left_type_173))));
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 515 "07var.c"
                            come_value_174->var=var__172;
                            # 517 "07var.c"
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                            # 519 "07var.c"
                            add_come_last_code(info,"%s;\n",come_value_174->c_value);
                        }
                        else {
                            # 563 "07var.c"
                            # 521 "07var.c"
                            if(_if_conditional233=string_operator_equals(right_type_128->mClass->mName,"void")&&left_type_173->mHeap&&left_type_173->mPointerNum>0&&right_type_128->mPointerNum>0,                            _if_conditional233) {
                                # 523 "07var.c"
                                check_assign_type(((char*)(right_value218=xsprintf("\%s is assining to",((char*)(right_value217=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 531 "07var.c"
                                # 524 "07var.c"
                                if(self->alloc) {
                                    # 525 "07var.c"
                                    __dec_obj72=come_value_174->c_value;
                                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 528 "07var.c"
                                    decrement_ref_count_object(left_type_173,var__172->mCValueName,info,(_Bool)0);
                                    # 529 "07var.c"
                                    __dec_obj73=come_value_174->c_value;
                                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 531 "07var.c"
                                __dec_obj74=come_value_174->type;
                                come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(left_type_173))));
                                come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value221,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 532 "07var.c"
                                come_value_174->var=var__172;
                                # 534 "07var.c"
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                                # 536 "07var.c"
                                add_come_last_code(info,"%s;\n",come_value_174->c_value);
                            }
                            else {
                                # 539 "07var.c"
                                check_assign_type(((char*)(right_value223=xsprintf("\%s is assining to",((char*)(right_value222=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 554 "07var.c"
                                # 541 "07var.c"
                                if(_if_conditional235=left_type_173->mHeap&&!right_value_127->type->mHeap,                                _if_conditional235) {
                                    # 551 "07var.c"
                                    # 542 "07var.c"
                                    if(_if_conditional236=string_operator_equals(right_value_127->type->mClass->mName,"void")&&right_value_127->type->mPointerNum==1,                                    _if_conditional236) {
                                    }
                                    else {
                                        # 550 "07var.c"
                                        # 546 "07var.c"
                                        if(_if_conditional237=!right_value_127->type->mDelegate&&!right_value_127->type->mShare&&!gComeGC,                                        _if_conditional237) {
                                            # 547 "07var.c"
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            # 548 "07var.c"
                                            __result122__ = (_Bool)0;
                                            come_call_finalizer3(left_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result122__;
                                        }
                                    }
                                }
                                # 554 "07var.c"
                                __dec_obj75=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 555 "07var.c"
                                __dec_obj76=come_value_174->type;
                                come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_type_173))));
                                come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 556 "07var.c"
                                come_value_174->var=var__172;
                                # 558 "07var.c"
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                                # 560 "07var.c"
                                add_come_last_code(info,"%s;\n",come_value_174->c_value);
                            }
                        }
                    }
                }
                # 571 "07var.c"
                # 563 "07var.c"
                if(_if_conditional238=self->alloc&&!left_type_173->mConstant&&!left_type_173->mStatic,                _if_conditional238) {
                    # 570 "07var.c"
                    # 564 "07var.c"
                    if(_if_conditional239=list$1sNodeph_length(left_type_173->mArrayNum)>0,                    _if_conditional239) {
                        # 565 "07var.c"
                        add_come_code(info,"%s;\n",((char*)(right_value226=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))));
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 568 "07var.c"
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value227=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))));
                        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer3(left_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 574 "07var.c"
    __result123__ = (_Bool)1;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
                come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional43) {
                # 6 "sType_clone"
                __dec_obj18=result_47->mNoSolvedGenericsType;
                result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional47) {
                # 7 "sType_clone"
                __dec_obj19=result_47->mOriginalLoadVarType;
                result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional50) {
                # 10 "sType_clone"
                __dec_obj25=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional65) {
                # 13 "sType_clone"
                __dec_obj30=result_47->mParamNames;
                result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional69) {
                # 14 "sType_clone"
                __dec_obj31=result_47->mResultType;
                result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result69__;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional23) {
                    # 1 "sType_finalize"
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional25) {
                    # 2 "sType_finalize"
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional28) {
                    # 5 "sType_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional30) {
                    # 6 "sType_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional31) {
                    # 7 "sType_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional33) {
                    # 8 "sType_finalize"
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                        # 114 "./neo-c.h"
                        it_48=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional22) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
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
                        # 114 "./neo-c.h"
                        it_52=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
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
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional40=self==((void*)0),                    _if_conditional40) {
                        # 131 "./neo-c.h"
                        __result53__ = __result_obj__ = ((void*)0);
                        return __result53__;
                    }
                    # 133 "./neo-c.h"
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_55=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        # 137 "./neo-c.h"
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(it_55->item)))));
                        come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional41=self->len==0,                            _if_conditional41) {
                                # 147 "./neo-c.h"
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_56->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_56->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_56;
                                # 154 "./neo-c.h"
                                self->head=litem_56;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional42=self->len==1,                                _if_conditional42) {
                                    # 157 "./neo-c.h"
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_57->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_57->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_57;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_57;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_58->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_58->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    while(_while_condtional11=it_59!=((void*)0),                    _while_condtional11) {
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
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result57__;
void* right_value88;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
void* right_value89;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value89 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional44=self==(void*)0,                    _if_conditional44) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result57__ = __result_obj__ = (void*)0;
                        return __result57__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value88=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value88,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional46) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj17=result_61->v1;
                        result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result58__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional45) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result59__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value100;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional51=self==((void*)0),                    _if_conditional51) {
                        # 131 "./neo-c.h"
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    # 133 "./neo-c.h"
                    result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_63=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional12=it_63!=((void*)0),                    _while_condtional12) {
                        # 137 "./neo-c.h"
                        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_63->item)))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional52=self->len==0,                            _if_conditional52) {
                                # 147 "./neo-c.h"
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_64->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_64->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj22=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 153 "./neo-c.h"
                                self->tail=litem_64;
                                # 154 "./neo-c.h"
                                self->head=litem_64;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional53=self->len==1,                                _if_conditional53) {
                                    # 157 "./neo-c.h"
                                    litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_65->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_65->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj23=litem_65->item;
                                    litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "./neo-c.h"
                                    self->tail=litem_65;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_65;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_66->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_66->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional54;
struct sNode* __result62__;
void* right_value99;
struct sNode* result_67;
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
memset(&result_67, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional54=self==(void*)0,                            _if_conditional54) {
                                # 2 "sNode_clone"
                                __result62__ = __result_obj__ = (void*)0;
                                return __result62__;
                            }
                            # 3 "sNode_clone"
                            result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional55) {
                                # 4 "sNode_clone"
                                result_67->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional56=self!=((void*)0),                            _if_conditional56) {
                                # 5 "sNode_clone"
                                result_67->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional57=self!=((void*)0),                            _if_conditional57) {
                                # 6 "sNode_clone"
                                result_67->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional58=self!=((void*)0),                            _if_conditional58) {
                                # 7 "sNode_clone"
                                result_67->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                # 8 "sNode_clone"
                                result_67->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                # 9 "sNode_clone"
                                result_67->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                # 10 "sNode_clone"
                                result_67->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
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
                    while(_while_condtional13=it_68!=((void*)0),                    _while_condtional13) {
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
_Bool _if_conditional66;
struct list$1charph* __result65__;
void* right_value103;
void* right_value104;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value108;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 131 "./neo-c.h"
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    # 133 "./neo-c.h"
                    result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_71=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional14=it_71!=((void*)0),                    _while_condtional14) {
                        # 137 "./neo-c.h"
                        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_71->item)))));
                        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 147 "./neo-c.h"
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_72->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_72->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj27=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_72;
                                # 154 "./neo-c.h"
                                self->head=litem_72;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 157 "./neo-c.h"
                                    litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_73->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_73->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_73;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_73;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_74->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_74->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                    while(_while_condtional15=it_75!=((void*)0),                    _while_condtional15) {
                        # 116 "./neo-c.h"
                        prev_it_76=it_75;
                        # 117 "./neo-c.h"
                        it_75=it_75->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct list$1tuple3$3sTypephcharphsNodephph* __result70__;
void* right_value117;
void* right_value118;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
_Bool _while_condtional17;
void* right_value126;
struct list$1tuple3$3sTypephcharphsNodephph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value126 = (void*)0;
            # 133 "./neo-c.h"
            # 130 "./neo-c.h"
            if(_if_conditional113=self==((void*)0),            _if_conditional113) {
                # 131 "./neo-c.h"
                __result70__ = __result_obj__ = ((void*)0);
                return __result70__;
            }
            # 133 "./neo-c.h"
            result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value117=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value117,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 135 "./neo-c.h"
            it_80=self->head;
            # 142 "./neo-c.h"
            while(_while_condtional17=it_80!=((void*)0),            _while_condtional17) {
                # 137 "./neo-c.h"
                list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value126=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
                come_call_finalizer3(right_value126,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 139 "./neo-c.h"
                it_80=it_80->next;
            }
            # 142 "./neo-c.h"
            __result75__ = __result_obj__ = result_79;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "./neo-c.h"
                self->head=((void*)0);
                # 96 "./neo-c.h"
                self->tail=((void*)0);
                # 97 "./neo-c.h"
                self->len=0;
                # 99 "./neo-c.h"
                __result71__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_77;
_Bool _while_condtional16;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    # 114 "./neo-c.h"
                    it_77=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional16=it_77!=((void*)0),                    _while_condtional16) {
                        # 116 "./neo-c.h"
                        prev_it_78=it_77;
                        # 117 "./neo-c.h"
                        it_77=it_77->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
                                come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional118;
void* right_value119;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
_Bool _if_conditional122;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj42;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj43;
struct list$1tuple3$3sTypephcharphsNodephph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value120 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    # 177 "./neo-c.h"
                    # 146 "./neo-c.h"
                    if(_if_conditional118=self->len==0,                    _if_conditional118) {
                        # 147 "./neo-c.h"
                        litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value119=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value119,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        litem_81->prev=((void*)0);
                        # 150 "./neo-c.h"
                        litem_81->next=((void*)0);
                        # 151 "./neo-c.h"
                        __dec_obj41=litem_81->item;
                        litem_81->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 153 "./neo-c.h"
                        self->tail=litem_81;
                        # 154 "./neo-c.h"
                        self->head=litem_81;
                    }
                    else {
                        # 177 "./neo-c.h"
                        # 156 "./neo-c.h"
                        if(_if_conditional122=self->len==1,                        _if_conditional122) {
                            # 157 "./neo-c.h"
                            litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 159 "./neo-c.h"
                            litem_82->prev=self->head;
                            # 160 "./neo-c.h"
                            litem_82->next=((void*)0);
                            # 161 "./neo-c.h"
                            __dec_obj42=litem_82->item;
                            litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj42,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 163 "./neo-c.h"
                            self->tail=litem_82;
                            # 164 "./neo-c.h"
                            self->head->next=litem_82;
                        }
                        else {
                            # 167 "./neo-c.h"
                            litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 169 "./neo-c.h"
                            litem_83->prev=self->tail;
                            # 170 "./neo-c.h"
                            litem_83->next=((void*)0);
                            # 171 "./neo-c.h"
                            __dec_obj43=litem_83->item;
                            litem_83->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj43,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 173 "./neo-c.h"
                            self->tail->next=litem_83;
                            # 174 "./neo-c.h"
                            self->tail=litem_83;
                        }
                    }
                    # 177 "./neo-c.h"
                    self->len++;
                    # 179 "./neo-c.h"
                    __result72__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                # 0 "tuple3$3sTypephcharphsNodephp_finalize"
                                if(_if_conditional126=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional126) {
                                    # 0 "tuple3$3sTypephcharphsNodephp_finalize"
                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                if(_if_conditional127=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional127) {
                                    # 1 "tuple3$3sTypephcharphsNodephp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "tuple3$3sTypephcharphsNodephp_finalize"
                                # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                if(_if_conditional128=self!=((void*)0)&&self->v3!=((void*)0),                                _if_conditional128) {
                                    # 2 "tuple3$3sTypephcharphsNodephp_finalize"
                                    if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional129;
struct tuple3$3sTypephcharphsNodeph* __result73__;
void* right_value122;
struct tuple3$3sTypephcharphsNodeph* result_84;
_Bool _if_conditional133;
void* right_value123;
struct sType* __dec_obj44;
_Bool _if_conditional134;
void* right_value124;
char* __dec_obj45;
_Bool _if_conditional135;
void* right_value125;
struct sNode* __dec_obj46;
struct tuple3$3sTypephcharphsNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
                    # 3 "tuple3$3sTypephcharphsNodephp_clone"
                    # 2 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional129=self==(void*)0,                    _if_conditional129) {
                        # 2 "tuple3$3sTypephcharphsNodephp_clone"
                        __result73__ = __result_obj__ = (void*)0;
                        return __result73__;
                    }
                    # 3 "tuple3$3sTypephcharphsNodephp_clone"
                    result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value122=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer3(right_value122,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple3$3sTypephcharphsNodephp_clone"
                    # 4 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional133=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional133) {
                        # 4 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj44=result_84->v1;
                        result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "tuple3$3sTypephcharphsNodephp_clone"
                    # 5 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional134=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional134) {
                        # 5 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj45=result_84->v2;
                        result_84->v2=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "tuple3$3sTypephcharphsNodephp_clone"
                    # 6 "tuple3$3sTypephcharphsNodephp_clone"
                    if(_if_conditional135=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional135) {
                        # 6 "tuple3$3sTypephcharphsNodephp_clone"
                        __dec_obj46=result_84->v3;
                        result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "tuple3$3sTypephcharphsNodephp_clone"
                    __result74__ = __result_obj__ = result_84;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                        # 0 "tuple3$3sTypephcharphsNodeph_finalize"
                        if(_if_conditional130=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional130) {
                            # 0 "tuple3$3sTypephcharphsNodeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                        # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                        if(_if_conditional131=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional131) {
                            # 1 "tuple3$3sTypephcharphsNodeph_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 3 "tuple3$3sTypephcharphsNodeph_finalize"
                        # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                        if(_if_conditional132=self!=((void*)0)&&self->v3!=((void*)0),                        _if_conditional132) {
                            # 2 "tuple3$3sTypephcharphsNodeph_finalize"
                            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_85;
_Bool _while_condtional18;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
            # 114 "./neo-c.h"
            it_85=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional18=it_85!=((void*)0),            _while_condtional18) {
                # 116 "./neo-c.h"
                prev_it_86=it_85;
                # 117 "./neo-c.h"
                it_85=it_85->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional19;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sVar* __result79__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sVar* __result80__;
struct sVar* __result81__;
struct sVar* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sVar*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            # 1519 "./neo-c.h"
            # 1520 "./neo-c.h"
            memset(&default_value_88,0,sizeof(struct sVar*));
            # 1522 "./neo-c.h"
            hash_89=string_get_hash_key(((char*)key))%self->size;
            # 1523 "./neo-c.h"
            it_90=hash_89;
            # 1547 "./neo-c.h"
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                # 1545 "./neo-c.h"
                # 1526 "./neo-c.h"
                if(_if_conditional144=self->item_existance[it_90],                _if_conditional144) {
                    # 1533 "./neo-c.h"
                    # 1528 "./neo-c.h"
                    if(_if_conditional145=string_equals(self->keys[it_90],key),                    _if_conditional145) {
                        # 1530 "./neo-c.h"
                        __result79__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result79__;
                    }
                    # 1533 "./neo-c.h"
                    it_90++;
                    # 1541 "./neo-c.h"
                    # 1535 "./neo-c.h"
                    if(_if_conditional150=it_90>=self->size,                    _if_conditional150) {
                        # 1536 "./neo-c.h"
                        it_90=0;
                    }
                    else {
                        # 1541 "./neo-c.h"
                        # 1538 "./neo-c.h"
                        if(_if_conditional151=it_90==hash_89,                        _if_conditional151) {
                            # 1539 "./neo-c.h"
                            __result80__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result80__;
                        }
                    }
                }
                else {
                    # 1543 "./neo-c.h"
                    __result81__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
            # 1547 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional146) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional147=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional147) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional148=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional148) {
                                # 2 "sVar_finalize"
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional149=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional149) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple3$3sTypephcharphsNodeph* result_97;
struct tuple3$3sTypephcharphsNodeph* __result87__;
_Bool _if_conditional159;
struct tuple3$3sTypephcharphsNodeph* __result88__;
struct tuple3$3sTypephcharphsNodeph* result_98;
struct tuple3$3sTypephcharphsNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_98, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 281 "./neo-c.h"
                    # 276 "./neo-c.h"
                    if(_if_conditional158=self==((void*)0),                    _if_conditional158) {
                        # 277 "./neo-c.h"
                        # 278 "./neo-c.h"
                        memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 279 "./neo-c.h"
                        __result87__ = __result_obj__ = result_97;
                        return __result87__;
                    }
                    # 281 "./neo-c.h"
                    self->it=self->head;
                    # 287 "./neo-c.h"
                    # 283 "./neo-c.h"
                    if(self->it) {
                        # 284 "./neo-c.h"
                        __result88__ = __result_obj__ = self->it->item;
                        return __result88__;
                    }
                    # 287 "./neo-c.h"
                    # 288 "./neo-c.h"
                    memset(&result_98,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 289 "./neo-c.h"
                    __result89__ = __result_obj__ = result_98;
                    return __result89__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 311 "./neo-c.h"
                    __result90__ = self==((void*)0)||self->it==((void*)0);
                    return __result90__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional160;
struct tuple3$3sTypephcharphsNodeph* result_100;
struct tuple3$3sTypephcharphsNodeph* __result91__;
_Bool _if_conditional161;
struct tuple3$3sTypephcharphsNodeph* __result92__;
struct tuple3$3sTypephcharphsNodeph* result_101;
struct tuple3$3sTypephcharphsNodeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_101, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 299 "./neo-c.h"
                    # 293 "./neo-c.h"
                    if(_if_conditional160=self==((void*)0)||self->it==((void*)0),                    _if_conditional160) {
                        # 294 "./neo-c.h"
                        # 295 "./neo-c.h"
                        memset(&result_100,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 296 "./neo-c.h"
                        __result91__ = __result_obj__ = result_100;
                        return __result91__;
                    }
                    # 299 "./neo-c.h"
                    self->it=self->it->next;
                    # 305 "./neo-c.h"
                    # 301 "./neo-c.h"
                    if(self->it) {
                        # 302 "./neo-c.h"
                        __result92__ = __result_obj__ = self->it->item;
                        return __result92__;
                    }
                    # 305 "./neo-c.h"
                    # 306 "./neo-c.h"
                    memset(&result_101,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 307 "./neo-c.h"
                    __result93__ = __result_obj__ = result_101;
                    return __result93__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "CVALUE_finalize"
                            # 0 "CVALUE_finalize"
                            if(_if_conditional165=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional165) {
                                # 0 "CVALUE_finalize"
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "CVALUE_finalize"
                            # 1 "CVALUE_finalize"
                            if(_if_conditional166=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional166) {
                                # 1 "CVALUE_finalize"
                                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional168;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 354 "./neo-c.h"
                            # 351 "./neo-c.h"
                            if(_if_conditional168=self==((void*)0),                            _if_conditional168) {
                                # 352 "./neo-c.h"
                                __result96__ = 0;
                                return __result96__;
                            }
                            # 354 "./neo-c.h"
                            __result97__ = self->len;
                            return __result97__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional170;
struct sNode* result_109;
struct sNode* __result98__;
_Bool _if_conditional171;
struct sNode* __result99__;
struct sNode* result_110;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct sNode*));
memset(&result_110, 0, sizeof(struct sNode*));
                                # 281 "./neo-c.h"
                                # 276 "./neo-c.h"
                                if(_if_conditional170=self==((void*)0),                                _if_conditional170) {
                                    # 277 "./neo-c.h"
                                    # 278 "./neo-c.h"
                                    memset(&result_109,0,sizeof(struct sNode*));
                                    # 279 "./neo-c.h"
                                    __result98__ = __result_obj__ = result_109;
                                    return __result98__;
                                }
                                # 281 "./neo-c.h"
                                self->it=self->head;
                                # 287 "./neo-c.h"
                                # 283 "./neo-c.h"
                                if(self->it) {
                                    # 284 "./neo-c.h"
                                    __result99__ = __result_obj__ = self->it->item;
                                    return __result99__;
                                }
                                # 287 "./neo-c.h"
                                # 288 "./neo-c.h"
                                memset(&result_110,0,sizeof(struct sNode*));
                                # 289 "./neo-c.h"
                                __result100__ = __result_obj__ = result_110;
                                return __result100__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 311 "./neo-c.h"
                                __result101__ = self==((void*)0)||self->it==((void*)0);
                                return __result101__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional172;
struct sNode* result_112;
struct sNode* __result102__;
_Bool _if_conditional173;
struct sNode* __result103__;
struct sNode* result_113;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(struct sNode*));
memset(&result_113, 0, sizeof(struct sNode*));
                                # 299 "./neo-c.h"
                                # 293 "./neo-c.h"
                                if(_if_conditional172=self==((void*)0)||self->it==((void*)0),                                _if_conditional172) {
                                    # 294 "./neo-c.h"
                                    # 295 "./neo-c.h"
                                    memset(&result_112,0,sizeof(struct sNode*));
                                    # 296 "./neo-c.h"
                                    __result102__ = __result_obj__ = result_112;
                                    return __result102__;
                                }
                                # 299 "./neo-c.h"
                                self->it=self->it->next;
                                # 305 "./neo-c.h"
                                # 301 "./neo-c.h"
                                if(self->it) {
                                    # 302 "./neo-c.h"
                                    __result103__ = __result_obj__ = self->it->item;
                                    return __result103__;
                                }
                                # 305 "./neo-c.h"
                                # 306 "./neo-c.h"
                                memset(&result_113,0,sizeof(struct sNode*));
                                # 307 "./neo-c.h"
                                __result104__ = __result_obj__ = result_113;
                                return __result104__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value157;
struct list_item$1CVALUEph* litem_124;
struct CVALUE* __dec_obj53;
_Bool _if_conditional186;
void* right_value158;
struct list_item$1CVALUEph* litem_125;
struct CVALUE* __dec_obj54;
void* right_value159;
struct list_item$1CVALUEph* litem_126;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1CVALUEph*));
right_value158 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1CVALUEph*));
right_value159 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1CVALUEph*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional184=self->len==0,                    _if_conditional184) {
                        # 217 "./neo-c.h"
                        litem_124=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value157=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value157,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_124->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_124->next=((void*)0);
                        # 221 "./neo-c.h"
                        __dec_obj53=litem_124->item;
                        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 223 "./neo-c.h"
                        self->tail=litem_124;
                        # 224 "./neo-c.h"
                        self->head=litem_124;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional186=self->len==1,                        _if_conditional186) {
                            # 227 "./neo-c.h"
                            litem_125=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value158=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value158,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_125->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_125->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj54=litem_125->item;
                            litem_125->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_125;
                            # 234 "./neo-c.h"
                            self->head->next=litem_125;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_126=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value159=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value159,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_126->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_126->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj55=litem_126->item;
                            litem_126->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail->next=litem_126;
                            # 244 "./neo-c.h"
                            self->tail=litem_126;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result106__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result106__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1CVALUEphp_finalize"
                            # 0 "list_item$1CVALUEphp_finalize"
                            if(_if_conditional185=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional185) {
                                # 0 "list_item$1CVALUEphp_finalize"
                                come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional194;
char* result_132;
char* __result109__;
_Bool _if_conditional195;
char* __result110__;
char* result_133;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&result_133, 0, sizeof(char*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional194=self==((void*)0),                        _if_conditional194) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_132,0,sizeof(char*));
                            # 279 "./neo-c.h"
                            __result109__ = __result_obj__ = result_132;
                            return __result109__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result110__ = __result_obj__ = self->it->item;
                            return __result110__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_133,0,sizeof(char*));
                        # 289 "./neo-c.h"
                        __result111__ = __result_obj__ = result_133;
                        return __result111__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result112__ = self==((void*)0)||self->it==((void*)0);
                        return __result112__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional196;
char* result_135;
char* __result113__;
_Bool _if_conditional197;
char* __result114__;
char* result_136;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&result_136, 0, sizeof(char*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional196=self==((void*)0)||self->it==((void*)0),                        _if_conditional196) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_135,0,sizeof(char*));
                            # 296 "./neo-c.h"
                            __result113__ = __result_obj__ = result_135;
                            return __result113__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result114__ = __result_obj__ = self->it->item;
                            return __result114__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_136,0,sizeof(char*));
                        # 307 "./neo-c.h"
                        __result115__ = __result_obj__ = result_136;
                        return __result115__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional198;
int __result116__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 354 "./neo-c.h"
                            # 351 "./neo-c.h"
                            if(_if_conditional198=self==((void*)0),                            _if_conditional198) {
                                # 352 "./neo-c.h"
                                __result116__ = 0;
                                return __result116__;
                            }
                            # 354 "./neo-c.h"
                            __result117__ = self->len;
                            return __result117__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional200;
struct list_item$1sTypeph* it_137;
int i_138;
_Bool _while_condtional20;
_Bool _if_conditional201;
struct sType* __result118__;
struct sType* default_value_139;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_138, 0, sizeof(int));
memset(&default_value_139, 0, sizeof(struct sType*));
                                # 673 "./neo-c.h"
                                # 669 "./neo-c.h"
                                if(_if_conditional200=position<0,                                _if_conditional200) {
                                    # 670 "./neo-c.h"
                                    position+=self->len;
                                }
                                # 673 "./neo-c.h"
                                it_137=self->head;
                                # 674 "./neo-c.h"
                                i_138=0;
                                # 681 "./neo-c.h"
                                while(_while_condtional20=it_137!=((void*)0),                                _while_condtional20) {
                                    # 679 "./neo-c.h"
                                    # 676 "./neo-c.h"
                                    if(_if_conditional201=position==i_138,                                    _if_conditional201) {
                                        # 677 "./neo-c.h"
                                        __result118__ = __result_obj__ = it_137->item;
                                        return __result118__;
                                    }
                                    # 679 "./neo-c.h"
                                    it_137=it_137->next;
                                    # 680 "./neo-c.h"
                                    i_138++;
                                }
                                # 683 "./neo-c.h"
                                # 684 "./neo-c.h"
                                memset(&default_value_139,0,sizeof(struct sType*));
                                # 685 "./neo-c.h"
                                __result119__ = __result_obj__ = default_value_139;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result119__;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
void* right_value228;
void* right_value229;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value238;
struct sNode* result_177;
struct sNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value238 = (void*)0;
memset(&result_177, 0, sizeof(struct sNode*));
    # 580 "07var.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 580, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value229=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value228=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 580, "sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=_inf_value1)));
    come_call_finalizer3(right_value228,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value229,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 584 "07var.c"
    __result126__ = __result_obj__ = result_177;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_177) { result_177 = come_decrement_ref_count2(result_177, ((struct sNode*)result_177)->finalize, ((struct sNode*)result_177)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result126__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(result_177) { result_177 = come_decrement_ref_count2(result_177, ((struct sNode*)result_177)->finalize, ((struct sNode*)result_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value239;
char* __dec_obj84;
void* right_value240;
char* __dec_obj85;
struct sLoadNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
right_value240 = (void*)0;
    # 593 "07var.c"
    __dec_obj84=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(name))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 595 "07var.c"
    self->sline=info->sline;
    # 596 "07var.c"
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 599 "07var.c"
    __result127__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result127__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 601 "07var.c"
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value241;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
    # 606 "07var.c"
    __result129__ = __result_obj__ = ((char*)(right_value241=__builtin_string("sLoadNode")));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_178;
_Bool _if_conditional259;
struct sVar* parent_var_179;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value242;
struct CVALUE* come_value_180;
struct sType* type_181;
void* right_value243;
char* __dec_obj86;
void* right_value244;
struct sType* __dec_obj87;
_Bool __result130__;
struct sVar* var__182;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sFun* fun_186;
_Bool _if_conditional283;
void* right_value245;
struct CVALUE* come_value_187;
void* right_value246;
char* __dec_obj88;
struct sType* __dec_obj89;
_Bool __result135__;
_Bool __result136__;
void* right_value247;
struct CVALUE* come_value_188;
void* right_value248;
char* __dec_obj90;
void* right_value249;
struct sType* __dec_obj91;
_Bool _if_conditional284;
void* right_value250;
struct sType* __dec_obj92;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_178, 0, sizeof(struct sClass*));
memset(&parent_var_179, 0, sizeof(struct sVar*));
right_value242 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
memset(&type_181, 0, sizeof(struct sType*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&var__182, 0, sizeof(struct sVar*));
memset(&fun_186, 0, sizeof(struct sFun*));
right_value245 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
    # 611 "07var.c"
    current_stack_frame_struct_178=info->current_stack_frame_struct;
    # 636 "07var.c"
    # 613 "07var.c"
    if(_if_conditional259=current_stack_frame_struct_178&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional259) {
        # 614 "07var.c"
        parent_var_179=get_variable_from_table(info->lv_table->mParent,self->name);
        # 634 "07var.c"
        # 616 "07var.c"
        if(_if_conditional260=parent_var_179!=((void*)0),        _if_conditional260) {
            # 633 "07var.c"
            # 617 "07var.c"
            if(_if_conditional261=string_operator_not_equals(parent_var_179->mFunName,info->come_fun->mName),            _if_conditional261) {
                # 618 "07var.c"
                come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 618, "CVALUE"))));
                come_call_finalizer3(right_value242,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 620 "07var.c"
                type_181=parent_var_179->mType;
                # 622 "07var.c"
                __dec_obj86=come_value_180->c_value;
                come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("(*(parent->%s))",parent_var_179->mCValueName))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 624 "07var.c"
                __dec_obj87=come_value_180->type;
                come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(type_181))));
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 625 "07var.c"
                come_value_180->var=((void*)0);
                # 627 "07var.c"
                add_come_last_code(info,"%s;\n",come_value_180->c_value);
                # 629 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
                # 631 "07var.c"
                __result130__ = (_Bool)1;
                come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result130__;
                come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 636 "07var.c"
    var__182=get_variable_from_table(info->lv_table,self->name);
    # 662 "07var.c"
    # 638 "07var.c"
    if(_if_conditional262=var__182==((void*)0),    _if_conditional262) {
        # 639 "07var.c"
        var__182=get_variable_from_table(info->gv_table,self->name);
        # 660 "07var.c"
        # 641 "07var.c"
        if(_if_conditional263=var__182==((void*)0),        _if_conditional263) {
            # 642 "07var.c"
            fun_186=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            # 659 "07var.c"
            # 644 "07var.c"
            if(fun_186) {
                # 645 "07var.c"
                come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 645, "CVALUE"))));
                come_call_finalizer3(right_value245,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 647 "07var.c"
                __dec_obj88=come_value_187->c_value;
                come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s",fun_186->mName))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 648 "07var.c"
                __dec_obj89=come_value_187->type;
                come_value_187->type=(struct sType*)come_increment_ref_count(fun_186->mLambdaType);
                come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 649 "07var.c"
                come_value_187->var=((void*)0);
                # 651 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
                # 653 "07var.c"
                __result135__ = (_Bool)1;
                come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result135__;
                come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 656 "07var.c"
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                # 657 "07var.c"
                __result136__ = (_Bool)1;
                return __result136__;
            }
        }
    }
    # 662 "07var.c"
    come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 662, "CVALUE"))));
    come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 663 "07var.c"
    __dec_obj90=come_value_188->c_value;
    come_value_188->c_value=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s",var__182->mCValueName))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 664 "07var.c"
    __dec_obj91=come_value_188->type;
    come_value_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(var__182->mType))));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 665 "07var.c"
    come_value_188->var=var__182;
    # 667 "07var.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
    # 677 "07var.c"
    # 669 "07var.c"
    if(_if_conditional284=list$1sNodeph_length(come_value_188->type->mArrayNum)==1,    _if_conditional284) {
        # 670 "07var.c"
        __dec_obj92=come_value_188->type->mOriginalLoadVarType->v1;
        come_value_188->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(come_value_188->type))));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 672 "07var.c"
        list$1sNodeph_reset(come_value_188->type->mArrayNum);
        # 673 "07var.c"
        come_value_188->type->mPointerNum++;
        # 674 "07var.c"
        come_value_188->type->mOriginalTypeNamePointerNum=come_value_188->type->mPointerNum;
    }
    # 677 "07var.c"
    __result138__ = (_Bool)1;
    come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_183;
unsigned int hash_184;
unsigned int it_185;
_Bool _while_condtional21;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result131__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sFun* __result132__;
struct sFun* __result133__;
struct sFun* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_183, 0, sizeof(struct sFun*));
memset(&hash_184, 0, sizeof(unsigned int));
memset(&it_185, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_183,0,sizeof(struct sFun*));
                # 1522 "./neo-c.h"
                hash_184=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_185=hash_184;
                # 1547 "./neo-c.h"
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional264=self->item_existance[it_185],                    _if_conditional264) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional265=string_equals(self->keys[it_185],key),                        _if_conditional265) {
                            # 1530 "./neo-c.h"
                            __result131__ = __result_obj__ = self->items[it_185];
                            come_call_finalizer3(default_value_183,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result131__;
                        }
                        # 1533 "./neo-c.h"
                        it_185++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional281=it_185>=self->size,                        _if_conditional281) {
                            # 1536 "./neo-c.h"
                            it_185=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional282=it_185==hash_184,                            _if_conditional282) {
                                # 1539 "./neo-c.h"
                                __result132__ = __result_obj__ = default_value_183;
                                come_call_finalizer3(default_value_183,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result132__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result133__ = __result_obj__ = default_value_183;
                        come_call_finalizer3(default_value_183,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result133__;
                    }
                }
                # 1547 "./neo-c.h"
                __result134__ = __result_obj__ = default_value_183;
                come_call_finalizer3(default_value_183,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result134__;
                come_call_finalizer3(default_value_183,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional268=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional268) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional269=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional269) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional270=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional270) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional271=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional271) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional272=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional272) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional275=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional275) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional276=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional276) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional277=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional277) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional278=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional278) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional274=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional274) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_189;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_190;
struct list$1sNodeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_190, 0, sizeof(struct list_item$1sNodeph*));
            # 420 "./neo-c.h"
            it_189=self->head;
            # 427 "./neo-c.h"
            while(_while_condtional22=it_189!=((void*)0),            _while_condtional22) {
                # 422 "./neo-c.h"
                prev_it_190=it_189;
                # 423 "./neo-c.h"
                it_189=it_189->next;
                # 424 "./neo-c.h"
                come_call_finalizer3(prev_it_190,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 427 "./neo-c.h"
            self->head=((void*)0);
            # 428 "./neo-c.h"
            self->tail=((void*)0);
            # 430 "./neo-c.h"
            self->len=0;
            # 432 "./neo-c.h"
            __result137__ = __result_obj__ = self;
            return __result137__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
void* right_value251;
void* right_value252;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value256;
struct sNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value256 = (void*)0;
    # 684 "07var.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 684, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value252=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value251=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 684, "sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result141__ = __result_obj__ = ((struct sNode*)(right_value256=_inf_value2));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(right_value251,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result141__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value257;
char* __dec_obj95;
void* right_value258;
char* __dec_obj96;
struct sFunLoadNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
right_value258 = (void*)0;
    # 693 "07var.c"
    __dec_obj95=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 695 "07var.c"
    self->sline=info->sline;
    # 696 "07var.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 699 "07var.c"
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sFunLoadNode_terminated(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    # 701 "07var.c"
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value259;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
    # 706 "07var.c"
    __result144__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sFunLoadNode")));
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_192;
_Bool _if_conditional293;
_Bool __result145__;
void* right_value260;
struct CVALUE* come_value_193;
void* right_value261;
char* __dec_obj97;
struct sType* __dec_obj98;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_192, 0, sizeof(struct sFun*));
right_value260 = (void*)0;
memset(&come_value_193, 0, sizeof(struct CVALUE*));
right_value261 = (void*)0;
    # 711 "07var.c"
    fun_192=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    # 727 "07var.c"
    # 713 "07var.c"
    if(_if_conditional293=fun_192==((void*)0),    _if_conditional293) {
        # 714 "07var.c"
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        # 715 "07var.c"
        __result145__ = (_Bool)0;
        return __result145__;
    }
    else {
        # 718 "07var.c"
        come_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 718, "CVALUE"))));
        come_call_finalizer3(right_value260,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 720 "07var.c"
        __dec_obj97=come_value_193->c_value;
        come_value_193->c_value=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("%s",fun_192->mName))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 721 "07var.c"
        __dec_obj98=come_value_193->type;
        come_value_193->type=(struct sType*)come_increment_ref_count(fun_192->mLambdaType);
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 722 "07var.c"
        come_value_193->var=((void*)0);
        # 724 "07var.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
        come_call_finalizer3(come_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 727 "07var.c"
    __result146__ = (_Bool)1;
    return __result146__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunLoadNode_finalize"
        # 0 "sFunLoadNode_finalize"
        if(_if_conditional291=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional291) {
            # 0 "sFunLoadNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunLoadNode_finalize"
        # 1 "sFunLoadNode_finalize"
        if(_if_conditional292=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional292) {
            # 1 "sFunLoadNode_finalize"
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value262;
struct sVar* self_194;
void* right_value263;
char* __dec_obj99;
void* right_value264;
struct sType* __dec_obj100;
_Bool _if_conditional294;
void* right_value265;
char* __dec_obj101;
static int n_195=0;
void* right_value266;
char* __dec_obj102;
_Bool _if_conditional295;
void* right_value267;
char* __dec_obj103;
char* __dec_obj104;
void* right_value274;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
memset(&self_194, 0, sizeof(struct sVar*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value274 = (void*)0;
    # 734 "07var.c"
    self_194=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value262=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 734, "sVar"))));
    come_call_finalizer3(right_value262,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 736 "07var.c"
    __dec_obj99=self_194->mName;
    self_194->mName=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 737 "07var.c"
    __dec_obj100=self_194->mType;
    self_194->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type))));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 747 "07var.c"
    # 739 "07var.c"
    if(type->mFunctionParam) {
        # 740 "07var.c"
        __dec_obj101=self_194->mCValueName;
        self_194->mCValueName=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(name))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 743 "07var.c"
        # 744 "07var.c"
        __dec_obj102=self_194->mCValueName;
        self_194->mCValueName=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("%s_%d",name,n_195++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 747 "07var.c"
    self_194->mBlockLevel=info->block_level;
    # 748 "07var.c"
    self_194->mAllocaValue=(_Bool)0;
    # 749 "07var.c"
    self_194->mFunctionParam=(_Bool)0;
    # 750 "07var.c"
    self_194->mNoFree=(_Bool)0;
    # 758 "07var.c"
    # 751 "07var.c"
    if(info->come_fun) {
        # 752 "07var.c"
        __dec_obj103=self_194->mFunName;
        self_194->mFunName=(char*)come_increment_ref_count(((char*)(right_value267=string_clone(info->come_fun->mName))));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 755 "07var.c"
        __dec_obj104=self_194->mFunName;
        self_194->mFunName=((void*)0);
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 758 "07var.c"
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_194));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_194,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional296;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional25;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool same_key_exist_231;
char* it2_234;
_Bool _if_conditional339;
_Bool _if_conditional340;
struct map$2charphsVarph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
memset(&same_key_exist_231, 0, sizeof(_Bool));
memset(&it2_234, 0, sizeof(char*));
        # 1368 "./neo-c.h"
        # 1365 "./neo-c.h"
        if(_if_conditional296=self->len*10>=self->size,        _if_conditional296) {
            # 1366 "./neo-c.h"
            map$2charphsVarph_rehash(self);
        }
        # 1368 "./neo-c.h"
        hash_213=string_get_hash_key(key)%self->size;
        # 1369 "./neo-c.h"
        it_214=hash_213;
        # 1427 "./neo-c.h"
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            # 1425 "./neo-c.h"
            # 1372 "./neo-c.h"
            if(_if_conditional308=self->item_existance[it_214],            _if_conditional308) {
                # 1395 "./neo-c.h"
                # 1374 "./neo-c.h"
                if(_if_conditional309=string_equals(self->keys[it_214],key),                _if_conditional309) {
                    # 1385 "./neo-c.h"
                    # 1376 "./neo-c.h"
                    if(_if_conditional310=1,                    _if_conditional310) {
                        # 1377 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_214]);
                        # 1378 "./neo-c.h"
                        self->keys[it_214] = come_decrement_ref_count2(self->keys[it_214], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "./neo-c.h"
                        self->keys[it_214]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_214]);
                        # 1383 "./neo-c.h"
                        self->keys[it_214]=key;
                    }
                    # 1392 "./neo-c.h"
                    # 1385 "./neo-c.h"
                    if(_if_conditional330=1,                    _if_conditional330) {
                        # 1386 "./neo-c.h"
                        come_call_finalizer3(self->items[it_214],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "./neo-c.h"
                        self->items[it_214]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "./neo-c.h"
                        self->items[it_214]=item;
                    }
                    # 1392 "./neo-c.h"
                    break;
                }
                # 1395 "./neo-c.h"
                it_214++;
                # 1405 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional331=it_214>=self->size,                _if_conditional331) {
                    # 1398 "./neo-c.h"
                    it_214=0;
                }
                else {
                    # 1405 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional332=it_214==hash_213,                    _if_conditional332) {
                        # 1401 "./neo-c.h"
                        printf("unexpected error in map.insert\n");
                        # 1402 "./neo-c.h"
                        stackframe();
                        # 1403 "./neo-c.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1407 "./neo-c.h"
                self->item_existance[it_214]=(_Bool)1;
                # 1414 "./neo-c.h"
                # 1408 "./neo-c.h"
                if(_if_conditional333=1,                _if_conditional333) {
                    # 1409 "./neo-c.h"
                    self->keys[it_214]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "./neo-c.h"
                    self->keys[it_214]=key;
                }
                # 1421 "./neo-c.h"
                # 1414 "./neo-c.h"
                if(_if_conditional334=1,                _if_conditional334) {
                    # 1415 "./neo-c.h"
                    self->items[it_214]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "./neo-c.h"
                    self->items[it_214]=item;
                }
                # 1421 "./neo-c.h"
                self->len++;
                # 1423 "./neo-c.h"
                break;
            }
        }
        # 1427 "./neo-c.h"
        same_key_exist_231=(_Bool)0;
        # 1435 "./neo-c.h"
        for(        it2_234=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_234=list$1charp_next(self->key_list)        ){
            # 1433 "./neo-c.h"
            # 1430 "./neo-c.h"
            if(_if_conditional339=string_equals(it2_234,key),            _if_conditional339) {
                # 1431 "./neo-c.h"
                same_key_exist_231=(_Bool)1;
            }
        }
        # 1439 "./neo-c.h"
        # 1435 "./neo-c.h"
        if(_if_conditional340=!same_key_exist_231,        _if_conditional340) {
            # 1436 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "./neo-c.h"
        __result170__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result170__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_196;
void* right_value268;
char** keys_197;
void* right_value269;
struct sVar** items_198;
void* right_value270;
_Bool* item_existance_199;
int len_200;
char* it_203;
struct sVar* default_value_206;
struct sVar* it2_209;
unsigned int hash_210;
int n_211;
_Bool _while_condtional24;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct sVar* default_value_212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_196, 0, sizeof(int));
right_value268 = (void*)0;
memset(&keys_197, 0, sizeof(char**));
right_value269 = (void*)0;
memset(&items_198, 0, sizeof(struct sVar**));
right_value270 = (void*)0;
memset(&item_existance_199, 0, sizeof(_Bool*));
memset(&len_200, 0, sizeof(int));
memset(&it_203, 0, sizeof(char*));
memset(&default_value_206, 0, sizeof(struct sVar*));
memset(&it2_209, 0, sizeof(struct sVar*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&n_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(struct sVar*));
                # 1312 "./neo-c.h"
                size_196=self->size*10;
                # 1313 "./neo-c.h"
                keys_197=(char**)come_increment_ref_count(((char**)(right_value268=(char**)come_calloc(1, sizeof(char*)*(1*(size_196)), "./neo-c.h", 1313, "char*%"))));
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "./neo-c.h"
                items_198=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value269=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_196)), "./neo-c.h", 1314, "sVar*%"))));
                come_call_finalizer3(right_value269,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "./neo-c.h"
                item_existance_199=(_Bool*)come_increment_ref_count(((_Bool*)(right_value270=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_196)), "./neo-c.h", 1315, "bool"))));
                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "./neo-c.h"
                len_200=0;
                # 1352 "./neo-c.h"
                for(                it_203=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_203=map$2charphsVarph_next(self)                ){
                    # 1320 "./neo-c.h"
                    # 1321 "./neo-c.h"
                    memset(&default_value_206,0,sizeof(struct sVar*));
                    # 1322 "./neo-c.h"
                    it2_209=map$2charphsVarph_at(self,it_203,default_value_206);
                    # 1323 "./neo-c.h"
                    hash_210=string_get_hash_key(it_203)%size_196;
                    # 1324 "./neo-c.h"
                    n_211=hash_210;
                    # 1350 "./neo-c.h"
                    while(_while_condtional24=(_Bool)1,                    _while_condtional24) {
                        # 1349 "./neo-c.h"
                        # 1327 "./neo-c.h"
                        if(_if_conditional305=item_existance_199[n_211],                        _if_conditional305) {
                            # 1329 "./neo-c.h"
                            n_211++;
                            # 1339 "./neo-c.h"
                            # 1331 "./neo-c.h"
                            if(_if_conditional306=n_211>=size_196,                            _if_conditional306) {
                                # 1332 "./neo-c.h"
                                n_211=0;
                            }
                            else {
                                # 1339 "./neo-c.h"
                                # 1334 "./neo-c.h"
                                if(_if_conditional307=n_211==hash_210,                                _if_conditional307) {
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
                            item_existance_199[n_211]=(_Bool)1;
                            # 1342 "./neo-c.h"
                            keys_197[n_211]=it_203;
                            # 1343 "./neo-c.h"
                            # 1344 "./neo-c.h"
                            items_198[n_211]=map$2charphsVarph_at(self,it_203,default_value_212);
                            # 1346 "./neo-c.h"
                            len_200++;
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
                self->keys=keys_197;
                # 1357 "./neo-c.h"
                self->items=items_198;
                # 1358 "./neo-c.h"
                self->item_existance=item_existance_199;
                # 1360 "./neo-c.h"
                self->size=size_196;
                # 1361 "./neo-c.h"
                self->len=len_200;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional297;
char* result_201;
char* __result147__;
_Bool _if_conditional298;
char* __result148__;
char* result_202;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                    # 1279 "./neo-c.h"
                    # 1274 "./neo-c.h"
                    if(_if_conditional297=self==((void*)0),                    _if_conditional297) {
                        # 1275 "./neo-c.h"
                        # 1276 "./neo-c.h"
                        memset(&result_201,0,sizeof(char*));
                        # 1277 "./neo-c.h"
                        __result147__ = __result_obj__ = result_201;
                        return __result147__;
                    }
                    # 1279 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "./neo-c.h"
                    # 1281 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "./neo-c.h"
                        __result148__ = __result_obj__ = self->key_list->it->item;
                        return __result148__;
                    }
                    # 1285 "./neo-c.h"
                    # 1286 "./neo-c.h"
                    memset(&result_202,0,sizeof(char*));
                    # 1287 "./neo-c.h"
                    __result149__ = __result_obj__ = result_202;
                    return __result149__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "./neo-c.h"
                    __result150__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result150__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional299;
char* result_204;
char* __result151__;
_Bool _if_conditional300;
char* __result152__;
char* result_205;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                    # 1296 "./neo-c.h"
                    # 1291 "./neo-c.h"
                    if(_if_conditional299=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional299) {
                        # 1292 "./neo-c.h"
                        # 1293 "./neo-c.h"
                        memset(&result_204,0,sizeof(char*));
                        # 1294 "./neo-c.h"
                        __result151__ = __result_obj__ = result_204;
                        return __result151__;
                    }
                    # 1296 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "./neo-c.h"
                    # 1298 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "./neo-c.h"
                        __result152__ = __result_obj__ = self->key_list->it->item;
                        return __result152__;
                    }
                    # 1302 "./neo-c.h"
                    # 1303 "./neo-c.h"
                    memset(&result_205,0,sizeof(char*));
                    # 1304 "./neo-c.h"
                    __result153__ = __result_obj__ = result_205;
                    return __result153__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional23;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct sVar* __result154__;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct sVar* __result155__;
struct sVar* __result156__;
struct sVar* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
                        # 1201 "./neo-c.h"
                        hash_207=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "./neo-c.h"
                        it_208=hash_207;
                        # 1226 "./neo-c.h"
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            # 1224 "./neo-c.h"
                            # 1205 "./neo-c.h"
                            if(_if_conditional301=self->item_existance[it_208],                            _if_conditional301) {
                                # 1212 "./neo-c.h"
                                # 1207 "./neo-c.h"
                                if(_if_conditional302=string_equals(self->keys[it_208],key),                                _if_conditional302) {
                                    # 1209 "./neo-c.h"
                                    __result154__ = __result_obj__ = self->items[it_208];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result154__;
                                }
                                # 1212 "./neo-c.h"
                                it_208++;
                                # 1220 "./neo-c.h"
                                # 1214 "./neo-c.h"
                                if(_if_conditional303=it_208>=self->size,                                _if_conditional303) {
                                    # 1215 "./neo-c.h"
                                    it_208=0;
                                }
                                else {
                                    # 1220 "./neo-c.h"
                                    # 1217 "./neo-c.h"
                                    if(_if_conditional304=it_208==hash_207,                                    _if_conditional304) {
                                        # 1218 "./neo-c.h"
                                        __result155__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result155__;
                                    }
                                }
                            }
                            else {
                                # 1222 "./neo-c.h"
                                __result156__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result156__;
                            }
                        }
                        # 1226 "./neo-c.h"
                        __result157__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result157__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_215;
struct list_item$1charp* it_216;
_Bool _while_condtional26;
_Bool _if_conditional311;
struct list$1charp* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_215, 0, sizeof(int));
memset(&it_216, 0, sizeof(struct list_item$1charp*));
                            # 435 "./neo-c.h"
                            it2_215=0;
                            # 436 "./neo-c.h"
                            it_216=self->head;
                            # 447 "./neo-c.h"
                            while(_while_condtional26=it_216!=((void*)0),                            _while_condtional26) {
                                # 442 "./neo-c.h"
                                # 438 "./neo-c.h"
                                if(_if_conditional311=string_equals(it_216->item,item),                                _if_conditional311) {
                                    # 439 "./neo-c.h"
                                    list$1charp_delete(self,it2_215,it2_215+1);
                                    # 440 "./neo-c.h"
                                    break;
                                }
                                # 442 "./neo-c.h"
                                it2_215++;
                                # 444 "./neo-c.h"
                                it_216=it_216->next;
                            }
                            # 447 "./neo-c.h"
                            __result161__ = __result_obj__ = self;
                            return __result161__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
int tmp_217;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct list$1charp* __result158__;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct list_item$1charp* it_220;
int i_221;
_Bool _while_condtional28;
_Bool _if_conditional320;
struct list_item$1charp* prev_it_222;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct list_item$1charp* it_223;
int i_224;
_Bool _while_condtional29;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct list_item$1charp* prev_it_225;
struct list_item$1charp* it_226;
struct list_item$1charp* head_prev_it_227;
struct list_item$1charp* tail_it_228;
int i_229;
_Bool _while_condtional30;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
struct list_item$1charp* prev_it_230;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_217, 0, sizeof(int));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
memset(&i_221, 0, sizeof(int));
memset(&prev_it_222, 0, sizeof(struct list_item$1charp*));
memset(&it_223, 0, sizeof(struct list_item$1charp*));
memset(&i_224, 0, sizeof(int));
memset(&prev_it_225, 0, sizeof(struct list_item$1charp*));
memset(&it_226, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_227, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_228, 0, sizeof(struct list_item$1charp*));
memset(&i_229, 0, sizeof(int));
memset(&prev_it_230, 0, sizeof(struct list_item$1charp*));
                                        # 454 "./neo-c.h"
                                        # 451 "./neo-c.h"
                                        if(_if_conditional312=head<0,                                        _if_conditional312) {
                                            # 452 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "./neo-c.h"
                                        # 454 "./neo-c.h"
                                        if(_if_conditional313=tail<0,                                        _if_conditional313) {
                                            # 455 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "./neo-c.h"
                                        # 458 "./neo-c.h"
                                        if(_if_conditional314=head>tail,                                        _if_conditional314) {
                                            # 459 "./neo-c.h"
                                            tmp_217=tail;
                                            # 460 "./neo-c.h"
                                            tail=head;
                                            # 461 "./neo-c.h"
                                            head=tmp_217;
                                        }
                                        # 468 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional315=head<0,                                        _if_conditional315) {
                                            # 465 "./neo-c.h"
                                            head=0;
                                        }
                                        # 472 "./neo-c.h"
                                        # 468 "./neo-c.h"
                                        if(_if_conditional316=tail>self->len,                                        _if_conditional316) {
                                            # 469 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "./neo-c.h"
                                        # 472 "./neo-c.h"
                                        if(_if_conditional317=head==tail,                                        _if_conditional317) {
                                            # 473 "./neo-c.h"
                                            __result158__ = __result_obj__ = self;
                                            return __result158__;
                                        }
                                        # 571 "./neo-c.h"
                                        # 476 "./neo-c.h"
                                        if(_if_conditional318=head==0&&tail==self->len,                                        _if_conditional318) {
                                            # 478 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "./neo-c.h"
                                            # 480 "./neo-c.h"
                                            if(_if_conditional319=head==0,                                            _if_conditional319) {
                                                # 481 "./neo-c.h"
                                                it_220=self->head;
                                                # 482 "./neo-c.h"
                                                i_221=0;
                                                # 504 "./neo-c.h"
                                                while(_while_condtional28=it_220!=((void*)0),                                                _while_condtional28) {
                                                    # 503 "./neo-c.h"
                                                    # 484 "./neo-c.h"
                                                    if(_if_conditional320=i_221<tail,                                                    _if_conditional320) {
                                                        # 485 "./neo-c.h"
                                                        prev_it_222=it_220;
                                                        # 487 "./neo-c.h"
                                                        it_220=it_220->next;
                                                        # 488 "./neo-c.h"
                                                        i_221++;
                                                        # 490 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_222,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "./neo-c.h"
                                                        # 494 "./neo-c.h"
                                                        if(_if_conditional321=i_221==tail,                                                        _if_conditional321) {
                                                            # 495 "./neo-c.h"
                                                            self->head=it_220;
                                                            # 496 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "./neo-c.h"
                                                            it_220=it_220->next;
                                                            # 501 "./neo-c.h"
                                                            i_221++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 505 "./neo-c.h"
                                                if(_if_conditional322=tail==self->len,                                                _if_conditional322) {
                                                    # 506 "./neo-c.h"
                                                    it_223=self->head;
                                                    # 507 "./neo-c.h"
                                                    i_224=0;
                                                    # 529 "./neo-c.h"
                                                    while(_while_condtional29=it_223!=((void*)0),                                                    _while_condtional29) {
                                                        # 514 "./neo-c.h"
                                                        # 509 "./neo-c.h"
                                                        if(_if_conditional323=i_224==head,                                                        _if_conditional323) {
                                                            # 510 "./neo-c.h"
                                                            self->tail=it_223->prev;
                                                            # 511 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "./neo-c.h"
                                                        # 514 "./neo-c.h"
                                                        if(_if_conditional324=i_224>=head,                                                        _if_conditional324) {
                                                            # 515 "./neo-c.h"
                                                            prev_it_225=it_223;
                                                            # 517 "./neo-c.h"
                                                            it_223=it_223->next;
                                                            # 518 "./neo-c.h"
                                                            i_224++;
                                                            # 520 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_225,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "./neo-c.h"
                                                            it_223=it_223->next;
                                                            # 526 "./neo-c.h"
                                                            i_224++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "./neo-c.h"
                                                    it_226=self->head;
                                                    # 533 "./neo-c.h"
                                                    head_prev_it_227=((void*)0);
                                                    # 534 "./neo-c.h"
                                                    tail_it_228=((void*)0);
                                                    # 537 "./neo-c.h"
                                                    i_229=0;
                                                    # 563 "./neo-c.h"
                                                    while(_while_condtional30=it_226!=((void*)0),                                                    _while_condtional30) {
                                                        # 542 "./neo-c.h"
                                                        # 539 "./neo-c.h"
                                                        if(_if_conditional325=i_229==head,                                                        _if_conditional325) {
                                                            # 540 "./neo-c.h"
                                                            head_prev_it_227=it_226->prev;
                                                        }
                                                        # 546 "./neo-c.h"
                                                        # 542 "./neo-c.h"
                                                        if(_if_conditional326=i_229==tail,                                                        _if_conditional326) {
                                                            # 543 "./neo-c.h"
                                                            tail_it_228=it_226;
                                                        }
                                                        # 561 "./neo-c.h"
                                                        # 546 "./neo-c.h"
                                                        if(_if_conditional327=i_229>=head&&i_229<tail,                                                        _if_conditional327) {
                                                            # 548 "./neo-c.h"
                                                            prev_it_230=it_226;
                                                            # 550 "./neo-c.h"
                                                            it_226=it_226->next;
                                                            # 551 "./neo-c.h"
                                                            i_229++;
                                                            # 553 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_230,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "./neo-c.h"
                                                            it_226=it_226->next;
                                                            # 559 "./neo-c.h"
                                                            i_229++;
                                                        }
                                                    }
                                                    # 566 "./neo-c.h"
                                                    # 563 "./neo-c.h"
                                                    if(_if_conditional328=head_prev_it_227!=((void*)0),                                                    _if_conditional328) {
                                                        # 564 "./neo-c.h"
                                                        head_prev_it_227->next=tail_it_228;
                                                    }
                                                    # 569 "./neo-c.h"
                                                    # 566 "./neo-c.h"
                                                    if(_if_conditional329=tail_it_228!=((void*)0),                                                    _if_conditional329) {
                                                        # 567 "./neo-c.h"
                                                        tail_it_228->prev=head_prev_it_227;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "./neo-c.h"
                                        __result160__ = __result_obj__ = self;
                                        return __result160__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_218;
_Bool _while_condtional27;
struct list_item$1charp* prev_it_219;
struct list$1charp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_218, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_219, 0, sizeof(struct list_item$1charp*));
                                                # 420 "./neo-c.h"
                                                it_218=self->head;
                                                # 427 "./neo-c.h"
                                                while(_while_condtional27=it_218!=((void*)0),                                                _while_condtional27) {
                                                    # 422 "./neo-c.h"
                                                    prev_it_219=it_218;
                                                    # 423 "./neo-c.h"
                                                    it_218=it_218->next;
                                                    # 424 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_219,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "./neo-c.h"
                                                self->len=0;
                                                # 432 "./neo-c.h"
                                                __result159__ = __result_obj__ = self;
                                                return __result159__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional335;
char* result_232;
char* __result162__;
_Bool _if_conditional336;
char* __result163__;
char* result_233;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_232, 0, sizeof(char*));
memset(&result_233, 0, sizeof(char*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional335=self==((void*)0),            _if_conditional335) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_232,0,sizeof(char*));
                # 279 "./neo-c.h"
                __result162__ = __result_obj__ = result_232;
                return __result162__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result163__ = __result_obj__ = self->it->item;
                return __result163__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_233,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result164__ = __result_obj__ = result_233;
            return __result164__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result165__ = self==((void*)0)||self->it==((void*)0);
            return __result165__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional337;
char* result_235;
char* __result166__;
_Bool _if_conditional338;
char* __result167__;
char* result_236;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_235, 0, sizeof(char*));
memset(&result_236, 0, sizeof(char*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional337=self==((void*)0)||self->it==((void*)0),            _if_conditional337) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_235,0,sizeof(char*));
                # 296 "./neo-c.h"
                __result166__ = __result_obj__ = result_235;
                return __result166__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result167__ = __result_obj__ = self->it->item;
                return __result167__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_236,0,sizeof(char*));
            # 307 "./neo-c.h"
            __result168__ = __result_obj__ = result_236;
            return __result168__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional341;
void* right_value271;
struct list_item$1charp* litem_237;
_Bool _if_conditional342;
void* right_value272;
struct list_item$1charp* litem_238;
void* right_value273;
struct list_item$1charp* litem_239;
struct list$1charp* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&litem_237, 0, sizeof(struct list_item$1charp*));
right_value272 = (void*)0;
memset(&litem_238, 0, sizeof(struct list_item$1charp*));
right_value273 = (void*)0;
memset(&litem_239, 0, sizeof(struct list_item$1charp*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional341=self->len==0,                _if_conditional341) {
                    # 217 "./neo-c.h"
                    litem_237=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value271=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value271,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_237->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_237->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_237->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_237;
                    # 224 "./neo-c.h"
                    self->head=litem_237;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional342=self->len==1,                    _if_conditional342) {
                        # 227 "./neo-c.h"
                        litem_238=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value272=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value272,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_238->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_238->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_238->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_238;
                        # 234 "./neo-c.h"
                        self->head->next=litem_238;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_239=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value273=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value273,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_239->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_239->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_239->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_239;
                        # 244 "./neo-c.h"
                        self->tail=litem_239;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result169__ = __result_obj__ = self;
                return __result169__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value275;
struct sVar* self_240;
void* right_value276;
char* __dec_obj105;
void* right_value277;
struct sType* __dec_obj106;
void* right_value278;
char* __dec_obj107;
void* right_value279;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
memset(&self_240, 0, sizeof(struct sVar*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 763 "07var.c"
    self_240=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value275=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 763, "sVar"))));
    come_call_finalizer3(right_value275,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 765 "07var.c"
    __dec_obj105=self_240->mName;
    self_240->mName=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(name))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 766 "07var.c"
    __dec_obj106=self_240->mType;
    self_240->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(type))));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 768 "07var.c"
    self_240->mGlobal=(_Bool)1;
    # 770 "07var.c"
    __dec_obj107=self_240->mCValueName;
    self_240->mCValueName=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string(name))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 772 "07var.c"
    self_240->mBlockLevel=info->block_level;
    # 773 "07var.c"
    self_240->mAllocaValue=(_Bool)0;
    # 774 "07var.c"
    self_240->mFunctionParam=(_Bool)0;
    # 775 "07var.c"
    self_240->mNoFree=(_Bool)0;
    # 777 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_240));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_240,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value280;
struct sVar* self_241;
void* right_value281;
char* __dec_obj108;
void* right_value282;
struct sType* __dec_obj109;
void* right_value283;
char* __dec_obj110;
void* right_value284;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&self_241, 0, sizeof(struct sVar*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
    # 782 "07var.c"
    self_241=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value280=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 782, "sVar"))));
    come_call_finalizer3(right_value280,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 784 "07var.c"
    __dec_obj108=self_241->mName;
    self_241->mName=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string(name))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 785 "07var.c"
    __dec_obj109=self_241->mType;
    self_241->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(type))));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 787 "07var.c"
    self_241->mGlobal=(_Bool)1;
    # 789 "07var.c"
    __dec_obj110=self_241->mCValueName;
    self_241->mCValueName=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(c_value))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 791 "07var.c"
    self_241->mBlockLevel=info->block_level;
    # 792 "07var.c"
    self_241->mAllocaValue=(_Bool)0;
    # 793 "07var.c"
    self_241->mFunctionParam=(_Bool)0;
    # 794 "07var.c"
    self_241->mNoFree=(_Bool)0;
    # 796 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_241));
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_241,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_242;
_Bool multiple_declare_243;
_Bool _if_conditional343;
char* p_244;
int sline_245;
void* right_value285;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_246;
char* name_247;
_Bool err_248;
_Bool _if_conditional346;
_Bool multiple_declare2_249;
_Bool _if_conditional347;
char* p_250;
int sline_251;
void* right_value286;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_252;
char* name_253;
_Bool err_254;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool no_output_err_255;
_Bool no_comma_256;
_Bool no_output_come_code_257;
void* right_value287;
struct sNode* exp_258;
_Bool _if_conditional350;
struct sFun* fun_259;
_Bool _if_conditional351;
void* right_value288;
char* buf2_260;
struct list$1charph* multiple_assign_261;
_Bool _if_conditional352;
void* right_value289;
void* right_value290;
struct list$1charph* __dec_obj111;
void* right_value294;
_Bool _while_condtional31;
void* right_value295;
char* buf3_265;
void* right_value296;
_Bool _if_conditional355;
_Bool no_comma_266;
void* right_value297;
struct sNode* right_value_267;
void* right_value298;
struct sNode* __dec_obj115;
void* right_value299;
void* right_value300;
void* right_value301;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value310;
struct sNode* result_269;
struct sNode* __result174__;
_Bool _if_conditional373;
void* right_value311;
void* right_value312;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_270;
void* right_value313;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_271;
char* name_272;
_Bool err_273;
void* right_value314;
struct tuple2$2sTypephcharph* variable_name_274;
void* right_value315;
void* right_value316;
struct tuple3$3sTypephcharphsNodeph* variable_name2_275;
_Bool _while_condtional32;
void* right_value320;
struct tuple2$2sTypephcharph* variable_name_279;
void* right_value321;
void* right_value322;
struct tuple3$3sTypephcharphsNodeph* variable_name2_280;
void* right_value323;
void* right_value324;
void* right_value325;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value334;
struct sNode* result_282;
struct sNode* __result179__;
_Bool _if_conditional397;
void* right_value335;
void* right_value336;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_283;
void* right_value337;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_284;
char* name_285;
_Bool err_286;
void* right_value338;
struct tuple2$2sTypephcharph* variable_name_287;
_Bool _if_conditional398;
_Bool no_comma_288;
void* right_value339;
struct sNode* exp_289;
void* right_value340;
void* right_value341;
struct tuple3$3sTypephcharphsNodeph* variable_name2_290;
_Bool _while_condtional33;
void* right_value342;
struct tuple2$2sTypephcharph* variable_name_291;
_Bool _if_conditional399;
_Bool no_comma_292;
void* right_value343;
struct sNode* exp_293;
void* right_value344;
void* right_value345;
struct tuple3$3sTypephcharphsNodeph* variable_name2_294;
void* right_value346;
void* right_value347;
void* right_value348;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value357;
struct sNode* result_296;
struct sNode* __result183__;
_Bool _if_conditional417;
void* right_value358;
struct sNode* right_value_297;
void* right_value359;
struct sNode* __dec_obj145;
void* right_value360;
void* right_value361;
void* right_value362;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value371;
struct sNode* result_299;
struct sNode* __result186__;
_Bool _if_conditional435;
void* right_value372;
void* right_value373;
void* right_value374;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value378;
struct sNode* node_301;
void* right_value379;
struct sNode* __dec_obj155;
void* right_value380;
struct sNode* __dec_obj156;
struct sNode* __result189__;
void* right_value381;
char* word_302;
_Bool _if_conditional442;
void* right_value382;
char* __dec_obj157;
_Bool is_type_name_flag_303;
_Bool _if_conditional443;
void* right_value383;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_304;
char* name_305;
_Bool err_306;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value384;
void* right_value385;
struct buffer* buf2_307;
_Bool squort_308;
_Bool dquort_309;
int nest_310;
_Bool _while_condtional34;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value386;
char* array_initializer_311;
void* right_value387;
void* right_value388;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value397;
struct sNode* result_313;
struct sNode* __result192__;
void* right_value398;
struct sNode* right_value_314;
void* right_value399;
void* right_value400;
struct list$1sNodeph* right_values_315;
_Bool _while_condtional35;
char* anonymous_var_nameX2213_316;
void* right_value401;
struct sNode* __dec_obj165;
void* right_value402;
void* right_value403;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value412;
struct sNode* result_318;
struct sNode* __result195__;
void* right_value413;
void* right_value414;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value423;
struct sNode* result_320;
struct sNode* __result198__;
void* right_value424;
struct sNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_242, 0, sizeof(_Bool));
memset(&multiple_declare_243, 0, sizeof(_Bool));
memset(&p_244, 0, sizeof(char*));
memset(&sline_245, 0, sizeof(int));
right_value285 = (void*)0;
memset(&type_246, 0, sizeof(struct sType*));
memset(&name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
memset(&type_246, 0, sizeof(struct sType*));
memset(&name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
memset(&multiple_declare2_249, 0, sizeof(_Bool));
memset(&p_250, 0, sizeof(char*));
memset(&sline_251, 0, sizeof(int));
right_value286 = (void*)0;
memset(&type_252, 0, sizeof(struct sType*));
memset(&name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&type_252, 0, sizeof(struct sType*));
memset(&name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&no_output_err_255, 0, sizeof(_Bool));
memset(&no_comma_256, 0, sizeof(_Bool));
memset(&no_output_come_code_257, 0, sizeof(_Bool));
right_value287 = (void*)0;
memset(&exp_258, 0, sizeof(struct sNode*));
memset(&fun_259, 0, sizeof(struct sFun*));
right_value288 = (void*)0;
memset(&buf2_260, 0, sizeof(char*));
memset(&multiple_assign_261, 0, sizeof(struct list$1charph*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&buf3_265, 0, sizeof(char*));
right_value296 = (void*)0;
memset(&no_comma_266, 0, sizeof(_Bool));
right_value297 = (void*)0;
memset(&right_value_267, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value310 = (void*)0;
memset(&result_269, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&multiple_declare_270, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value313 = (void*)0;
memset(&base_type_271, 0, sizeof(struct sType*));
memset(&name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
memset(&base_type_271, 0, sizeof(struct sType*));
memset(&name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&variable_name_274, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&variable_name2_275, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value320 = (void*)0;
memset(&variable_name_279, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&variable_name2_280, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value334 = (void*)0;
memset(&result_282, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&multiple_declare_283, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value337 = (void*)0;
memset(&base_type_284, 0, sizeof(struct sType*));
memset(&name_285, 0, sizeof(char*));
memset(&err_286, 0, sizeof(_Bool));
memset(&base_type_284, 0, sizeof(struct sType*));
memset(&name_285, 0, sizeof(char*));
memset(&err_286, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&variable_name_287, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_288, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&exp_289, 0, sizeof(struct sNode*));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&variable_name2_290, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value342 = (void*)0;
memset(&variable_name_291, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_292, 0, sizeof(_Bool));
right_value343 = (void*)0;
memset(&exp_293, 0, sizeof(struct sNode*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&variable_name2_294, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value357 = (void*)0;
memset(&result_296, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&right_value_297, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value371 = (void*)0;
memset(&result_299, 0, sizeof(struct sNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value378 = (void*)0;
memset(&node_301, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&word_302, 0, sizeof(char*));
right_value382 = (void*)0;
memset(&is_type_name_flag_303, 0, sizeof(_Bool));
right_value383 = (void*)0;
memset(&type_304, 0, sizeof(struct sType*));
memset(&name_305, 0, sizeof(char*));
memset(&err_306, 0, sizeof(_Bool));
memset(&type_304, 0, sizeof(struct sType*));
memset(&name_305, 0, sizeof(char*));
memset(&err_306, 0, sizeof(_Bool));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&buf2_307, 0, sizeof(struct buffer*));
memset(&squort_308, 0, sizeof(_Bool));
memset(&dquort_309, 0, sizeof(_Bool));
memset(&nest_310, 0, sizeof(int));
right_value386 = (void*)0;
memset(&array_initializer_311, 0, sizeof(char*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value397 = (void*)0;
memset(&result_313, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
memset(&right_value_314, 0, sizeof(struct sNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&right_values_315, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX2213_316, 0, sizeof(char*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value412 = (void*)0;
memset(&result_318, 0, sizeof(struct sNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value423 = (void*)0;
memset(&result_320, 0, sizeof(struct sNode*));
right_value424 = (void*)0;
    # 801 "07var.c"
    is_type_name_flag_242=is_type_name(buf,info);
    # 804 "07var.c"
    multiple_declare_243=(_Bool)0;
    # 823 "07var.c"
    # 805 "07var.c"
    if(is_type_name_flag_242) {
        # 807 "07var.c"
        p_244=info->p;
        # 808 "07var.c"
        sline_245=info->sline;
        # 810 "07var.c"
        info->p=head;
        # 811 "07var.c"
        info->sline=head_sline;
        # 813 "07var.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value285=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_246=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_247=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_248=multiple_assign_var2->v3;
        come_call_finalizer3(right_value285,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 819 "07var.c"
        # 815 "07var.c"
        if(_if_conditional346=err_248&&*info->p==44,        _if_conditional346) {
            # 816 "07var.c"
            multiple_declare_243=(_Bool)1;
        }
        # 819 "07var.c"
        info->p=p_244;
        # 820 "07var.c"
        info->sline=sline_245;
        come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_247 = come_decrement_ref_count2(name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 823 "07var.c"
    multiple_declare2_249=(_Bool)0;
    # 869 "07var.c"
    # 824 "07var.c"
    if(is_type_name_flag_242) {
        # 826 "07var.c"
        p_250=info->p;
        # 827 "07var.c"
        sline_251=info->sline;
        # 829 "07var.c"
        info->p=head;
        # 830 "07var.c"
        info->sline=head_sline;
        # 832 "07var.c"
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value286=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_252=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_253=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_254=multiple_assign_var3->v3;
        come_call_finalizer3(right_value286,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 834 "07var.c"
        parse_sharp_v5(info);
        # 865 "07var.c"
        # 836 "07var.c"
        if(_if_conditional348=err_254&&*info->p==61,        _if_conditional348) {
            # 837 "07var.c"
            info->p++;
            # 838 "07var.c"
            skip_spaces_and_lf(info);
            # 840 "07var.c"
            parse_sharp_v5(info);
            # 863 "07var.c"
            # 842 "07var.c"
            if(_if_conditional349=*info->p==123,            _if_conditional349) {
            }
            else {
                # 845 "07var.c"
                no_output_err_255=info->no_output_err;
                # 846 "07var.c"
                no_comma_256=info->no_comma;
                # 847 "07var.c"
                no_output_come_code_257=info->no_output_come_code;
                # 849 "07var.c"
                info->no_output_err=(_Bool)1;
                # 850 "07var.c"
                info->no_comma=(_Bool)1;
                # 851 "07var.c"
                info->no_output_come_code=(_Bool)1;
                # 853 "07var.c"
                exp_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=expression_v13(info))));
                if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 855 "07var.c"
                info->no_comma=no_comma_256;
                # 856 "07var.c"
                info->no_output_err=no_output_err_255;
                # 857 "07var.c"
                info->no_output_come_code=no_output_come_code_257;
                # 862 "07var.c"
                # 859 "07var.c"
                if(_if_conditional350=*info->p==44,                _if_conditional350) {
                    # 860 "07var.c"
                    multiple_declare2_249=(_Bool)1;
                }
                if(exp_258) { exp_258 = come_decrement_ref_count2(exp_258, ((struct sNode*)exp_258)->finalize, ((struct sNode*)exp_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        # 865 "07var.c"
        info->p=p_250;
        # 866 "07var.c"
        info->sline=sline_251;
        come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_253 = come_decrement_ref_count2(name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 869 "07var.c"
    parse_sharp_v5(info);
    # 870 "07var.c"
    fun_259=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    # 1171 "07var.c"
    # 872 "07var.c"
    if(_if_conditional351=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional351) {
        # 873 "07var.c"
        parse_sharp_v5(info);
        # 874 "07var.c"
        buf2_260=(char*)come_increment_ref_count(((char*)(right_value288=parse_word(info))));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 875 "07var.c"
        parse_sharp_v5(info);
        # 877 "07var.c"
        multiple_assign_261=((void*)0);
        # 894 "07var.c"
        # 879 "07var.c"
        if(_if_conditional352=*info->p==44,        _if_conditional352) {
            # 880 "07var.c"
            __dec_obj111=multiple_assign_261;
            multiple_assign_261=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value290=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value289=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 880, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value289,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value290,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 881 "07var.c"
            list$1charph_push_back(multiple_assign_261,(char*)come_increment_ref_count(((char*)(right_value294=string_clone(buf2_260)))));
            right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 893 "07var.c"
            while(_while_condtional31=*info->p==44,            _while_condtional31) {
                # 884 "07var.c"
                info->p++;
                # 885 "07var.c"
                skip_spaces_and_lf(info);
                # 887 "07var.c"
                parse_sharp_v5(info);
                # 888 "07var.c"
                buf3_265=(char*)come_increment_ref_count(((char*)(right_value295=parse_word(info))));
                right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 889 "07var.c"
                parse_sharp_v5(info);
                # 891 "07var.c"
                list$1charph_push_back(multiple_assign_261,(char*)come_increment_ref_count(((char*)(right_value296=string_clone(buf3_265)))));
                right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_265 = come_decrement_ref_count2(buf3_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 894 "07var.c"
        parse_sharp_v5(info);
        # 920 "07var.c"
        # 896 "07var.c"
        if(_if_conditional355=*info->p==61&&*(info->p+1)!=61,        _if_conditional355) {
            # 897 "07var.c"
            info->p++;
            # 898 "07var.c"
            skip_spaces_and_lf(info);
            # 900 "07var.c"
            parse_sharp_v5(info);
            # 902 "07var.c"
            no_comma_266=info->no_comma;
            # 902 "07var.c"
            info->no_comma=(_Bool)1;
            # 903 "07var.c"
            right_value_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=expression_v13(info))));
            if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 904 "07var.c"
            info->no_comma=no_comma_266;
            # 905 "07var.c"
            parse_sharp_v5(info);
            # 907 "07var.c"
            __dec_obj115=right_value_267;
            right_value_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_267),info))));
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 908 "07var.c"
            parse_sharp_v5(info);
            # 910 "07var.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 910, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value301=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value299=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 910, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(buf2_260)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_261),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_267),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=_inf_value3)));
            come_call_finalizer3(right_value299,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value301,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 914 "07var.c"
            __result174__ = __result_obj__ = result_269;
            if(right_value_267) { right_value_267 = come_decrement_ref_count2(right_value_267, ((struct sNode*)right_value_267)->finalize, ((struct sNode*)right_value_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_269) { result_269 = come_decrement_ref_count2(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_260 = come_decrement_ref_count2(buf2_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_261,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result174__;
            if(right_value_267) { right_value_267 = come_decrement_ref_count2(right_value_267, ((struct sNode*)right_value_267)->finalize, ((struct sNode*)right_value_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_269) { result_269 = come_decrement_ref_count2(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 917 "07var.c"
            err_msg(info,"var requires a right value(%c)",*info->p);
            # 918 "07var.c"
            exit(1);
        }
        buf2_260 = come_decrement_ref_count2(buf2_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_261,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1171 "07var.c"
        # 921 "07var.c"
        if(multiple_declare_243) {
            # 922 "07var.c"
            info->p=head;
            # 923 "07var.c"
            info->sline=head_sline;
            # 925 "07var.c"
            multiple_declare_270=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value312=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value311=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 925, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value311,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value312,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 927 "07var.c"
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value313=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_271=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_272=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_273=multiple_assign_var4->v3;
            come_call_finalizer3(right_value313,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 929 "07var.c"
            variable_name_274=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value314=parse_variable_name((struct sType*)come_increment_ref_count(base_type_271),(_Bool)1,info))));
            come_call_finalizer3(right_value314,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 931 "07var.c"
            variable_name2_275=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value316=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value315=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 931, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_274->v1),(char*)come_increment_ref_count(variable_name_274->v2),((void*)0)))));
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value316,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 933 "07var.c"
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_270,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_275));
            # 946 "07var.c"
            while(_while_condtional32=*info->p==44,            _while_condtional32) {
                # 936 "07var.c"
                info->p++;
                # 937 "07var.c"
                skip_spaces_and_lf(info);
                # 939 "07var.c"
                variable_name_279=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value320=parse_variable_name((struct sType*)come_increment_ref_count(base_type_271),(_Bool)0,info))));
                come_call_finalizer3(right_value320,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 941 "07var.c"
                variable_name2_280=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value322=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value321=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 941, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_279->v1),(char*)come_increment_ref_count(variable_name_279->v2),((void*)0)))));
                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value322,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                # 943 "07var.c"
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_270,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_280));
                come_call_finalizer3(variable_name_279,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name2_280,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 946 "07var.c"
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 946, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value325=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value323=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 946, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_270),(struct sType*)come_increment_ref_count(base_type_271),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=_inf_value4)));
            come_call_finalizer3(right_value323,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value325,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 950 "07var.c"
            __result179__ = __result_obj__ = result_282;
            come_call_finalizer3(multiple_declare_270,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_274,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_275,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(result_282) { result_282 = come_decrement_ref_count2(result_282, ((struct sNode*)result_282)->finalize, ((struct sNode*)result_282)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result179__;
            come_call_finalizer3(multiple_declare_270,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_274,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_275,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(result_282) { result_282 = come_decrement_ref_count2(result_282, ((struct sNode*)result_282)->finalize, ((struct sNode*)result_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1171 "07var.c"
            # 952 "07var.c"
            if(multiple_declare2_249) {
                # 953 "07var.c"
                info->p=head;
                # 954 "07var.c"
                info->sline=head_sline;
                # 956 "07var.c"
                multiple_declare_283=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value336=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value335=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 956, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer3(right_value335,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value336,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 958 "07var.c"
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value337=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_284=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_285=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_286=multiple_assign_var5->v3;
                come_call_finalizer3(right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 960 "07var.c"
                variable_name_287=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value338=parse_variable_name((struct sType*)come_increment_ref_count(base_type_284),(_Bool)1,info))));
                come_call_finalizer3(right_value338,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 962 "07var.c"
                parse_sharp_v5(info);
                # 980 "07var.c"
                # 964 "07var.c"
                if(_if_conditional398=*info->p==61,                _if_conditional398) {
                    # 965 "07var.c"
                    info->p++;
                    # 966 "07var.c"
                    skip_spaces_and_lf(info);
                    # 968 "07var.c"
                    parse_sharp_v5(info);
                    # 970 "07var.c"
                    no_comma_288=info->no_comma;
                    # 971 "07var.c"
                    info->no_comma=(_Bool)1;
                    # 972 "07var.c"
                    exp_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=expression_v13(info))));
                    if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 973 "07var.c"
                    info->no_comma=no_comma_288;
                    # 975 "07var.c"
                    variable_name2_290=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value341=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value340=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 975, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_287->v1),(char*)come_increment_ref_count(variable_name_287->v2),(struct sNode*)come_increment_ref_count(exp_289)))));
                    come_call_finalizer3(right_value340,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value341,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 977 "07var.c"
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_283,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_290));
                    if(exp_289) { exp_289 = come_decrement_ref_count2(exp_289, ((struct sNode*)exp_289)->finalize, ((struct sNode*)exp_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(variable_name2_290,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 1008 "07var.c"
                while(_while_condtional33=*info->p==44,                _while_condtional33) {
                    # 981 "07var.c"
                    info->p++;
                    # 982 "07var.c"
                    skip_spaces_and_lf(info);
                    # 984 "07var.c"
                    variable_name_291=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value342=parse_variable_name((struct sType*)come_increment_ref_count(base_type_284),(_Bool)0,info))));
                    come_call_finalizer3(right_value342,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 986 "07var.c"
                    parse_sharp_v5(info);
                    # 1006 "07var.c"
                    # 988 "07var.c"
                    if(_if_conditional399=*info->p==61,                    _if_conditional399) {
                        # 989 "07var.c"
                        info->p++;
                        # 990 "07var.c"
                        skip_spaces_and_lf(info);
                        # 992 "07var.c"
                        parse_sharp_v5(info);
                        # 994 "07var.c"
                        no_comma_292=info->no_comma;
                        # 995 "07var.c"
                        info->no_comma=(_Bool)1;
                        # 996 "07var.c"
                        exp_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=expression_v13(info))));
                        if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 997 "07var.c"
                        info->no_comma=no_comma_292;
                        # 999 "07var.c"
                        variable_name2_294=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value345=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value344=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 999, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_291->v1),(char*)come_increment_ref_count(variable_name_291->v2),(struct sNode*)come_increment_ref_count(exp_293)))));
                        come_call_finalizer3(right_value344,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value345,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1001 "07var.c"
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_283,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_294));
                        if(exp_293) { exp_293 = come_decrement_ref_count2(exp_293, ((struct sNode*)exp_293)->finalize, ((struct sNode*)exp_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(variable_name2_294,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 1004 "07var.c"
                        come_call_finalizer3(variable_name_291,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer3(variable_name_291,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 1008 "07var.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1008, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value348=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value346=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1008, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value347=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_283),(struct sType*)come_increment_ref_count(base_type_284),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=_inf_value5)));
                come_call_finalizer3(right_value346,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value348,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1012 "07var.c"
                __result183__ = __result_obj__ = result_296;
                come_call_finalizer3(multiple_declare_283,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_287,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct sNode*)result_296)->finalize, ((struct sNode*)result_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result183__;
                come_call_finalizer3(multiple_declare_283,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_287,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct sNode*)result_296)->finalize, ((struct sNode*)result_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1171 "07var.c"
                # 1014 "07var.c"
                if(_if_conditional417=!is_type_name_flag_242&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional417) {
                    # 1015 "07var.c"
                    info->p++;
                    # 1016 "07var.c"
                    skip_spaces_and_lf(info);
                    # 1018 "07var.c"
                    parse_sharp_v5(info);
                    # 1019 "07var.c"
                    right_value_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                    if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1020 "07var.c"
                    parse_sharp_v5(info);
                    # 1022 "07var.c"
                    __dec_obj145=right_value_297;
                    right_value_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_297),info))));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1024 "07var.c"
                    parse_sharp_v5(info);
                    # 1026 "07var.c"
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1026, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value362=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value360=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1026, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_297),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value6)));
                    come_call_finalizer3(right_value360,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value362,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1030 "07var.c"
                    __result186__ = __result_obj__ = result_299;
                    if(right_value_297) { right_value_297 = come_decrement_ref_count2(right_value_297, ((struct sNode*)right_value_297)->finalize, ((struct sNode*)right_value_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_299) { result_299 = come_decrement_ref_count2(result_299, ((struct sNode*)result_299)->finalize, ((struct sNode*)result_299)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result186__;
                    if(right_value_297) { right_value_297 = come_decrement_ref_count2(right_value_297, ((struct sNode*)right_value_297)->finalize, ((struct sNode*)right_value_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_299) { result_299 = come_decrement_ref_count2(result_299, ((struct sNode*)result_299)->finalize, ((struct sNode*)result_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1171 "07var.c"
                    # 1032 "07var.c"
                    if(_if_conditional435=!is_type_name_flag_242||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional435) {
                        # 1033 "07var.c"
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1033, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value374=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value372=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1033, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value373=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sNodeBase_sline;
                        _inf_value7->sname=(void*)sNodeBase_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value7)));
                        come_call_finalizer3(right_value372,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value374,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1035 "07var.c"
                        __dec_obj155=node_301;
                        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_301),info))));
                        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1037 "07var.c"
                        __dec_obj156=node_301;
                        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_301),info))));
                        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1039 "07var.c"
                        __result189__ = __result_obj__ = node_301;
                        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result189__;
                        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1042 "07var.c"
                        info->p=head;
                        # 1043 "07var.c"
                        info->sline=head_sline;
                        # 1045 "07var.c"
                        word_302=(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string(""))));
                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1050 "07var.c"
                        # 1046 "07var.c"
                        if(_if_conditional442=xisalpha(*info->p)||*info->p==95,                        _if_conditional442) {
                            # 1047 "07var.c"
                            __dec_obj157=word_302;
                            word_302=(char*)come_increment_ref_count(((char*)(right_value382=parse_word(info))));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 1050 "07var.c"
                        is_type_name_flag_303=is_type_name(word_302,info);
                        # 1052 "07var.c"
                        info->p=head;
                        # 1053 "07var.c"
                        info->sline=head_sline;
                        # 1169 "07var.c"
                        # 1055 "07var.c"
                        if(is_type_name_flag_303) {
                            # 1056 "07var.c"
                            parse_sharp_v5(info);
                            # 1057 "07var.c"
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value383=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_304=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_305=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_306=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value383,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1063 "07var.c"
                            # 1059 "07var.c"
                            if(_if_conditional444=!err_306,                            _if_conditional444) {
                                # 1060 "07var.c"
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                # 1061 "07var.c"
                                exit(2);
                            }
                            # 1063 "07var.c"
                            parse_sharp_v5(info);
                            # 1168 "07var.c"
                            # 1065 "07var.c"
                            if(_if_conditional445=*info->p==61,                            _if_conditional445) {
                                # 1066 "07var.c"
                                info->p++;
                                # 1067 "07var.c"
                                skip_spaces_and_lf(info);
                                # 1069 "07var.c"
                                parse_sharp_v5(info);
                                # 1160 "07var.c"
                                # 1071 "07var.c"
                                if(_if_conditional446=*info->p==123,                                _if_conditional446) {
                                    # 1072 "07var.c"
                                    buf2_307=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1072, "buffer"))))))));
                                    come_call_finalizer3(right_value384,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1074 "07var.c"
                                    buffer_append_char(buf2_307,*info->p);
                                    # 1075 "07var.c"
                                    info->p++;
                                    # 1077 "07var.c"
                                    squort_308=(_Bool)0;
                                    # 1078 "07var.c"
                                    dquort_309=(_Bool)0;
                                    # 1079 "07var.c"
                                    nest_310=1;
                                    # 1134 "07var.c"
                                    while(_while_condtional34=1,                                    _while_condtional34) {
                                        # 1133 "07var.c"
                                        # 1081 "07var.c"
                                        if(_if_conditional447=*info->p==0,                                        _if_conditional447) {
                                            # 1082 "07var.c"
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            # 1083 "07var.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1133 "07var.c"
                                            # 1085 "07var.c"
                                            if(_if_conditional448=*info->p==92,                                            _if_conditional448) {
                                                # 1086 "07var.c"
                                                buffer_append_char(buf2_307,*info->p);
                                                # 1087 "07var.c"
                                                info->p++;
                                                # 1091 "07var.c"
                                                # 1088 "07var.c"
                                                if(_if_conditional449=*info->p==10,                                                _if_conditional449) {
                                                    # 1089 "07var.c"
                                                    info->sline++;
                                                }
                                                # 1091 "07var.c"
                                                buffer_append_char(buf2_307,*info->p);
                                                # 1092 "07var.c"
                                                info->p++;
                                            }
                                            else {
                                                # 1133 "07var.c"
                                                # 1094 "07var.c"
                                                if(_if_conditional450=!squort_308&&*info->p==34,                                                _if_conditional450) {
                                                    # 1095 "07var.c"
                                                    buffer_append_char(buf2_307,*info->p);
                                                    # 1096 "07var.c"
                                                    info->p++;
                                                    # 1097 "07var.c"
                                                    dquort_309=!dquort_309;
                                                }
                                                else {
                                                    # 1133 "07var.c"
                                                    # 1099 "07var.c"
                                                    if(_if_conditional451=!dquort_309&&*info->p==39,                                                    _if_conditional451) {
                                                        # 1100 "07var.c"
                                                        buffer_append_char(buf2_307,*info->p);
                                                        # 1101 "07var.c"
                                                        info->p++;
                                                        # 1102 "07var.c"
                                                        squort_308=!squort_308;
                                                    }
                                                    else {
                                                        # 1133 "07var.c"
                                                        # 1104 "07var.c"
                                                        if(_if_conditional452=squort_308||dquort_309,                                                        _if_conditional452) {
                                                            # 1105 "07var.c"
                                                            # 1105 "07var.c"
                                                            if(_if_conditional453=*info->p==10,                                                            _if_conditional453) {
                                                                # 1105 "07var.c"
                                                                info->sline++;
                                                            }
                                                            # 1106 "07var.c"
                                                            buffer_append_char(buf2_307,*info->p);
                                                            # 1107 "07var.c"
                                                            info->p++;
                                                        }
                                                        else {
                                                            # 1133 "07var.c"
                                                            # 1109 "07var.c"
                                                            if(_if_conditional454=*info->p==123,                                                            _if_conditional454) {
                                                                # 1110 "07var.c"
                                                                nest_310++;
                                                                # 1111 "07var.c"
                                                                buffer_append_char(buf2_307,*info->p);
                                                                # 1112 "07var.c"
                                                                info->p++;
                                                            }
                                                            else {
                                                                # 1133 "07var.c"
                                                                # 1114 "07var.c"
                                                                if(_if_conditional455=*info->p==125,                                                                _if_conditional455) {
                                                                    # 1115 "07var.c"
                                                                    nest_310--;
                                                                    # 1116 "07var.c"
                                                                    buffer_append_char(buf2_307,*info->p);
                                                                    # 1117 "07var.c"
                                                                    info->p++;
                                                                    # 1123 "07var.c"
                                                                    # 1119 "07var.c"
                                                                    if(_if_conditional456=nest_310==0,                                                                    _if_conditional456) {
                                                                        # 1120 "07var.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1121 "07var.c"
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    # 1133 "07var.c"
                                                                    # 1124 "07var.c"
                                                                    if(_if_conditional457=*info->p==10,                                                                    _if_conditional457) {
                                                                        # 1125 "07var.c"
                                                                        buffer_append_char(buf2_307,*info->p);
                                                                        # 1126 "07var.c"
                                                                        info->p++;
                                                                        # 1127 "07var.c"
                                                                        info->sline++;
                                                                    }
                                                                    else {
                                                                        # 1130 "07var.c"
                                                                        buffer_append_char(buf2_307,*info->p);
                                                                        # 1131 "07var.c"
                                                                        info->p++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 1134 "07var.c"
                                    array_initializer_311=(char*)come_increment_ref_count(((char*)(right_value386=buffer_to_string(buf2_307))));
                                    right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1136 "07var.c"
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1136, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value388=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value387=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1136, "sStoreNode")))),(char*)come_increment_ref_count(name_305),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_304),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_311),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=_inf_value8)));
                                    come_call_finalizer3(right_value387,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value388,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1140 "07var.c"
                                    __result192__ = __result_obj__ = result_313;
                                    come_call_finalizer3(buf2_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_311 = come_decrement_ref_count2(array_initializer_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_313) { result_313 = come_decrement_ref_count2(result_313, ((struct sNode*)result_313)->finalize, ((struct sNode*)result_313)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result192__;
                                    come_call_finalizer3(buf2_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_311 = come_decrement_ref_count2(array_initializer_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_313) { result_313 = come_decrement_ref_count2(result_313, ((struct sNode*)result_313)->finalize, ((struct sNode*)result_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1143 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1144 "07var.c"
                                    right_value_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
                                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1145 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1147 "07var.c"
                                    right_values_315=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value400=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value399=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1147, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value399,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value400,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1152 "07var.c"
                                    while(_while_condtional35=*info->p==44,                                    _while_condtional35) {
                                        # 1150 "07var.c"
                                        anonymous_var_nameX2213_316 = come_decrement_ref_count2(anonymous_var_nameX2213_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 1152 "07var.c"
                                    __dec_obj165=right_value_314;
                                    right_value_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_314),info))));
                                    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1154 "07var.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1154, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value403=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value402=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1154, "sStoreNode")))),(char*)come_increment_ref_count(name_305),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_304),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_314),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=_inf_value9)));
                                    come_call_finalizer3(right_value402,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value403,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1158 "07var.c"
                                    __result195__ = __result_obj__ = result_318;
                                    if(right_value_314) { right_value_314 = come_decrement_ref_count2(right_value_314, ((struct sNode*)right_value_314)->finalize, ((struct sNode*)right_value_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(result_318) { result_318 = come_decrement_ref_count2(result_318, ((struct sNode*)result_318)->finalize, ((struct sNode*)result_318)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result195__;
                                    if(right_value_314) { right_value_314 = come_decrement_ref_count2(right_value_314, ((struct sNode*)right_value_314)->finalize, ((struct sNode*)right_value_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(result_318) { result_318 = come_decrement_ref_count2(result_318, ((struct sNode*)result_318)->finalize, ((struct sNode*)result_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                            }
                            else {
                                # 1162 "07var.c"
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1162, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value414=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value413=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1162, "sStoreNode")))),(char*)come_increment_ref_count(name_305),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_304),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sNodeBase_sline;
                                _inf_value10->sname=(void*)sNodeBase_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=_inf_value10)));
                                come_call_finalizer3(right_value413,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value414,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1166 "07var.c"
                                __result198__ = __result_obj__ = result_320;
                                if(result_320) { result_320 = come_decrement_ref_count2(result_320, ((struct sNode*)result_320)->finalize, ((struct sNode*)result_320)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result198__;
                                if(result_320) { result_320 = come_decrement_ref_count2(result_320, ((struct sNode*)result_320)->finalize, ((struct sNode*)result_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 1171 "07var.c"
    __result199__ = __result_obj__ = ((struct sNode*)(right_value424=string_node_v5(buf,head,head_sline,info)));
    if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result199__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional344=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional344) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional345=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional345) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional353;
void* right_value291;
struct list_item$1charph* litem_262;
char* __dec_obj112;
_Bool _if_conditional354;
void* right_value292;
struct list_item$1charph* litem_263;
char* __dec_obj113;
void* right_value293;
struct list_item$1charph* litem_264;
char* __dec_obj114;
struct list$1charph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
memset(&litem_262, 0, sizeof(struct list_item$1charph*));
right_value292 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1charph*));
right_value293 = (void*)0;
memset(&litem_264, 0, sizeof(struct list_item$1charph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional353=self->len==0,                _if_conditional353) {
                    # 217 "./neo-c.h"
                    litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value291,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_262->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_262->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj112=litem_262->item;
                    litem_262->item=(char*)come_increment_ref_count(item);
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_262;
                    # 224 "./neo-c.h"
                    self->head=litem_262;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional354=self->len==1,                    _if_conditional354) {
                        # 227 "./neo-c.h"
                        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value292=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value292,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_263->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_263->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj113=litem_263->item;
                        litem_263->item=(char*)come_increment_ref_count(item);
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_263;
                        # 234 "./neo-c.h"
                        self->head->next=litem_263;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value293=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value293,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_264->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_264->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj114=litem_264->item;
                        litem_264->item=(char*)come_increment_ref_count(item);
                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_264;
                        # 244 "./neo-c.h"
                        self->tail=litem_264;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result171__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result171__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional374=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional374) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional375=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional375) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj123;
char* __dec_obj124;
struct tuple3$3sTypephcharphvoidp* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1771 "./neo-c.h"
                __dec_obj123=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1772 "./neo-c.h"
                __dec_obj124=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1773 "./neo-c.h"
                self->v3=v3;
                # 1775 "./neo-c.h"
                __result175__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result175__;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional376=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional376) {
                        # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional377=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional377) {
                        # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional378;
void* right_value317;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_276;
struct tuple3$3sTypephcharphsNodeph* __dec_obj125;
_Bool _if_conditional379;
void* right_value318;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_277;
struct tuple3$3sTypephcharphsNodeph* __dec_obj126;
void* right_value319;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_278;
struct tuple3$3sTypephcharphsNodeph* __dec_obj127;
struct list$1tuple3$3sTypephcharphsNodephph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
memset(&litem_276, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value318 = (void*)0;
memset(&litem_277, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value319 = (void*)0;
memset(&litem_278, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional378=self->len==0,                _if_conditional378) {
                    # 217 "./neo-c.h"
                    litem_276=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value317=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(right_value317,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_276->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_276->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj125=litem_276->item;
                    litem_276->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj125,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_276;
                    # 224 "./neo-c.h"
                    self->head=litem_276;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional379=self->len==1,                    _if_conditional379) {
                        # 227 "./neo-c.h"
                        litem_277=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value318=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value318,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_277->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_277->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj126=litem_277->item;
                        litem_277->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj126,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_277;
                        # 234 "./neo-c.h"
                        self->head->next=litem_277;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_278=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value319=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value319,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_278->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_278->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj127=litem_278->item;
                        litem_278->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj127,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_278;
                        # 244 "./neo-c.h"
                        self->tail=litem_278;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result176__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result176__;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj135;
char* __dec_obj136;
struct sNode* __dec_obj137;
struct tuple3$3sTypephcharphsNodeph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1771 "./neo-c.h"
                        __dec_obj135=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 1772 "./neo-c.h"
                        __dec_obj136=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1773 "./neo-c.h"
                        __dec_obj137=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1775 "./neo-c.h"
                        __result180__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result180__;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sLoadNode_finalize"
                            # 0 "sLoadNode_finalize"
                            if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional436) {
                                # 0 "sLoadNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sLoadNode_finalize"
                            # 1 "sLoadNode_finalize"
                            if(_if_conditional437=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional437) {
                                # 1 "sLoadNode_finalize"
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional438;
struct sLoadNode* __result187__;
void* right_value375;
struct sLoadNode* result_300;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value376;
char* __dec_obj153;
_Bool _if_conditional441;
void* right_value377;
char* __dec_obj154;
struct sLoadNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
memset(&result_300, 0, sizeof(struct sLoadNode*));
right_value376 = (void*)0;
right_value377 = (void*)0;
                            # 3 "sLoadNode_clone"
                            # 2 "sLoadNode_clone"
                            if(_if_conditional438=self==(void*)0,                            _if_conditional438) {
                                # 2 "sLoadNode_clone"
                                __result187__ = __result_obj__ = (void*)0;
                                return __result187__;
                            }
                            # 3 "sLoadNode_clone"
                            result_300=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value375=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value375,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sLoadNode_clone"
                            # 4 "sLoadNode_clone"
                            if(_if_conditional439=self!=((void*)0),                            _if_conditional439) {
                                # 4 "sLoadNode_clone"
                                result_300->sline=self->sline;
                            }
                            # 6 "sLoadNode_clone"
                            # 5 "sLoadNode_clone"
                            if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional440) {
                                # 5 "sLoadNode_clone"
                                __dec_obj153=result_300->sname;
                                result_300->sname=(char*)come_increment_ref_count(((char*)(right_value376=string_clone(self->sname))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sLoadNode_clone"
                            # 6 "sLoadNode_clone"
                            if(_if_conditional441=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional441) {
                                # 6 "sLoadNode_clone"
                                __dec_obj154=result_300->name;
                                result_300->name=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->name))));
                                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sLoadNode_clone"
                            __result188__ = __result_obj__ = result_300;
                            come_call_finalizer3(result_300,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result188__;
                            come_call_finalizer3(result_300,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional492;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sStoreNode_finalize"
                                    # 0 "sStoreNode_finalize"
                                    if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional492) {
                                        # 0 "sStoreNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sStoreNode_finalize"
                                    # 1 "sStoreNode_finalize"
                                    if(_if_conditional493=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional493) {
                                        # 1 "sStoreNode_finalize"
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sStoreNode_finalize"
                                    # 2 "sStoreNode_finalize"
                                    if(_if_conditional494=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional494) {
                                        # 2 "sStoreNode_finalize"
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sStoreNode_finalize"
                                    # 3 "sStoreNode_finalize"
                                    if(_if_conditional495=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional495) {
                                        # 3 "sStoreNode_finalize"
                                        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sStoreNode_finalize"
                                    # 4 "sStoreNode_finalize"
                                    if(_if_conditional496=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional496) {
                                        # 4 "sStoreNode_finalize"
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 6 "sStoreNode_finalize"
                                    # 5 "sStoreNode_finalize"
                                    if(_if_conditional497=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional497) {
                                        # 5 "sStoreNode_finalize"
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sStoreNode_finalize"
                                    # 6 "sStoreNode_finalize"
                                    if(_if_conditional498=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional498) {
                                        # 6 "sStoreNode_finalize"
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional499;
struct sStoreNode* __result196__;
void* right_value415;
struct sStoreNode* result_319;
_Bool _if_conditional500;
_Bool _if_conditional501;
void* right_value416;
char* __dec_obj173;
_Bool _if_conditional502;
void* right_value417;
char* __dec_obj174;
_Bool _if_conditional503;
void* right_value418;
struct list$1charph* __dec_obj175;
_Bool _if_conditional504;
void* right_value419;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj176;
_Bool _if_conditional505;
void* right_value420;
struct sNode* __dec_obj177;
_Bool _if_conditional506;
void* right_value421;
struct sType* __dec_obj178;
_Bool _if_conditional507;
void* right_value422;
char* __dec_obj179;
_Bool _if_conditional508;
struct sStoreNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
memset(&result_319, 0, sizeof(struct sStoreNode*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
                                    # 3 "sStoreNode_clone"
                                    # 2 "sStoreNode_clone"
                                    if(_if_conditional499=self==(void*)0,                                    _if_conditional499) {
                                        # 2 "sStoreNode_clone"
                                        __result196__ = __result_obj__ = (void*)0;
                                        return __result196__;
                                    }
                                    # 3 "sStoreNode_clone"
                                    result_319=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value415=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value415,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sStoreNode_clone"
                                    # 4 "sStoreNode_clone"
                                    if(_if_conditional500=self!=((void*)0),                                    _if_conditional500) {
                                        # 4 "sStoreNode_clone"
                                        result_319->sline=self->sline;
                                    }
                                    # 6 "sStoreNode_clone"
                                    # 5 "sStoreNode_clone"
                                    if(_if_conditional501=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional501) {
                                        # 5 "sStoreNode_clone"
                                        __dec_obj173=result_319->sname;
                                        result_319->sname=(char*)come_increment_ref_count(((char*)(right_value416=string_clone(self->sname))));
                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sStoreNode_clone"
                                    # 6 "sStoreNode_clone"
                                    if(_if_conditional502=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional502) {
                                        # 6 "sStoreNode_clone"
                                        __dec_obj174=result_319->name;
                                        result_319->name=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->name))));
                                        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sStoreNode_clone"
                                    # 7 "sStoreNode_clone"
                                    if(_if_conditional503=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional503) {
                                        # 7 "sStoreNode_clone"
                                        __dec_obj175=result_319->multiple_assign;
                                        result_319->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value418=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj175,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value418,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sStoreNode_clone"
                                    # 8 "sStoreNode_clone"
                                    if(_if_conditional504=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional504) {
                                        # 8 "sStoreNode_clone"
                                        __dec_obj176=result_319->multiple_declare;
                                        result_319->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value419=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj176,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value419,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sStoreNode_clone"
                                    # 9 "sStoreNode_clone"
                                    if(_if_conditional505=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional505) {
                                        # 9 "sStoreNode_clone"
                                        __dec_obj177=result_319->right_value;
                                        result_319->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=sNode_clone(self->right_value))));
                                        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 11 "sStoreNode_clone"
                                    # 10 "sStoreNode_clone"
                                    if(_if_conditional506=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional506) {
                                        # 10 "sStoreNode_clone"
                                        __dec_obj178=result_319->type;
                                        result_319->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value421,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sStoreNode_clone"
                                    # 11 "sStoreNode_clone"
                                    if(_if_conditional507=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional507) {
                                        # 11 "sStoreNode_clone"
                                        __dec_obj179=result_319->array_initializer;
                                        result_319->array_initializer=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(self->array_initializer))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 13 "sStoreNode_clone"
                                    # 12 "sStoreNode_clone"
                                    if(_if_conditional508=self!=((void*)0),                                    _if_conditional508) {
                                        # 12 "sStoreNode_clone"
                                        result_319->alloc=self->alloc;
                                    }
                                    # 13 "sStoreNode_clone"
                                    __result197__ = __result_obj__ = result_319;
                                    come_call_finalizer3(result_319,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result197__;
                                    come_call_finalizer3(result_319,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

