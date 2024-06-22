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
struct sReturnNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sLineNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sSNameNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sFuncNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerFuncNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerLineNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerSNameNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
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
struct sFunCallNode
{
    int sline;
    char* sname;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

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

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

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

void come_init_v5();

void come_final_v5();

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

char* sReturnNode_kind(struct sReturnNode* self);

_Bool sReturnNode_terminated(struct sReturnNode* self);

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

_Bool sLineNode_terminated(struct sLineNode* self);

char* sLineNode_kind(struct sLineNode* self);

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

_Bool sSNameNode_terminated(struct sSNameNode* self);

char* sSNameNode_kind(struct sSNameNode* self);

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

_Bool sFuncNode_terminated(struct sFuncNode* self);

char* sFuncNode_kind(struct sFuncNode* self);

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

_Bool sCallerFuncNode_terminated(struct sCallerFuncNode* self);

char* sCallerFuncNode_kind(struct sCallerFuncNode* self);

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_terminated(struct sCallerLineNode* self);

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind(struct sCallerLineNode* self);

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_terminated(struct sCallerSNameNode* self);

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind(struct sCallerSNameNode* self);

struct sNode* expression_node_v1(struct sInfo* info);

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sFunCallNode_terminated(struct sFunCallNode* self);

char* sFunCallNode_kind(struct sFunCallNode* self);

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sNode* expression_v5(struct sInfo* info);

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static int list$1sNodeph_length(struct list$1sNodeph* self);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

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










void come_init_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
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
void* right_value132;
char* __dec_obj41;
void* right_value133;
struct sType* type2_107;
void* right_value134;
struct sType* type3_108;
void* right_value135;
struct sType* __dec_obj42;
_Bool _if_conditional160;
void* right_value136;
char* __dec_obj43;
void* right_value137;
char* __dec_obj44;
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
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&type2_107, 0, sizeof(struct sType*));
right_value134 = (void*)0;
memset(&type3_108, 0, sizeof(struct sType*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    # 13 "05call.c"
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 18 "05call.c"
    # 14 "05call.c"
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        # 15 "05call.c"
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 21 "05call.c"
    # 18 "05call.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 19 "05call.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 21 "05call.c"
    klass_78=type->mClass;
    # 22 "05call.c"
    class_name_79=klass_78->mName;
    # 24 "05call.c"
    operator_fun_80=((void*)0);
    # 26 "05call.c"
    # 82 "05call.c"
    # 27 "05call.c"
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        # 28 "05call.c"
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 30 "05call.c"
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 32 "05call.c"
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 33 "05call.c"
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 35 "05call.c"
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        # 62 "05call.c"
        # 38 "05call.c"
        if(generics_fun_87) {
            # 43 "05call.c"
            # 39 "05call.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 40 "05call.c"
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            # 43 "05call.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
        else {
            # 61 "05call.c"
            # 46 "05call.c"
            if(_if_conditional149=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional149) {
                # 47 "05call.c"
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 48 "05call.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 50 "05call.c"
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 61 "05call.c"
                # 52 "05call.c"
                if(_if_conditional151=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional151) {
                    # 53 "05call.c"
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 54 "05call.c"
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 56 "05call.c"
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 59 "05call.c"
                    operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 64 "05call.c"
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 66 "05call.c"
        # 77 "05call.c"
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            # 68 "05call.c"
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 69 "05call.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            # 75 "05call.c"
            # 71 "05call.c"
            if(operator_fun_80) {
                # 72 "05call.c"
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 73 "05call.c"
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 80 "05call.c"
        # 77 "05call.c"
        if(_if_conditional153=operator_fun_80==((void*)0),        _if_conditional153) {
            # 78 "05call.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    # 82 "05call.c"
    result_101=(_Bool)0;
    # 118 "05call.c"
    # 84 "05call.c"
    if(operator_fun_80) {
        # 85 "05call.c"
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 85, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 86 "05call.c"
        # 87 "05call.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05call.c", 87, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 96 "05call.c"
        # 88 "05call.c"
        if(_if_conditional159=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05call.c", 88, 1))->mHeap&&left_value->type->mHeap,        _if_conditional159) {
            # 89 "05call.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05call.c", 89, 2)),left_value->type,left_value,info);
            # 90 "05call.c"
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 93 "05call.c"
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 96 "05call.c"
        __dec_obj41=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s(%s)",fun_name2_81,left_value2_103))));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 98 "05call.c"
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(operator_fun_80->mResultType))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 100 "05call.c"
        type3_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=solve_generics(type2_107,generics_type_77,info))));
        come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 102 "05call.c"
        __dec_obj42=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type3_108))));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 103 "05call.c"
        come_value_102->var=((void*)0);
        # 109 "05call.c"
        # 105 "05call.c"
        if(type3_108->mHeap) {
            # 106 "05call.c"
            __dec_obj43=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value136=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(type3_108),info))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 109 "05call.c"
        __dec_obj44=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value137=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 111 "05call.c"
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        # 113 "05call.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        # 115 "05call.c"
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 118 "05call.c"
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
_Bool _if_conditional161;
void* right_value138;
struct list_item$1CVALUEph* litem_109;
struct CVALUE* __dec_obj45;
_Bool _if_conditional163;
void* right_value139;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj46;
void* right_value140;
struct list_item$1CVALUEph* litem_111;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1CVALUEph*));
right_value139 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1CVALUEph*));
right_value140 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1CVALUEph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                # 217 "./neo-c.h"
                litem_109=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value138=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value138,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_109->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_109->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj45=litem_109->item;
                litem_109->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_109;
                # 224 "./neo-c.h"
                self->head=litem_109;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 227 "./neo-c.h"
                    litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value139=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value139,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_110->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_110->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj46=litem_110->item;
                    litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_110;
                    # 234 "./neo-c.h"
                    self->head->next=litem_110;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value140=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value140,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_111->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_111->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj47=litem_111->item;
                    litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_111;
                    # 244 "./neo-c.h"
                    self->tail=litem_111;
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
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional162) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj48;
void* right_value141;
char* __dec_obj49;
void* right_value142;
char* __dec_obj50;
struct sReturnNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
    # 128 "05call.c"
    __dec_obj48=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    # 129 "05call.c"
    __dec_obj49=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value141=string_clone(value_source))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 131 "05call.c"
    self->sline=info->sline;
    # 132 "05call.c"
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 135 "05call.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__;
void* right_value143;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    # 137 "05call.c"
    __result86__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sReturnNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sReturnNode_terminated(struct sReturnNode* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    # 142 "05call.c"
    __result87__ = (_Bool)0;
    return __result87__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional167;
struct sFun* come_fun_112;
void* right_value144;
struct sType* result_type_113;
void* right_value145;
struct sType* result_type2_114;
struct sType* result_type3_115;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool __result88__;
void* right_value146;
struct CVALUE* come_value_116;
_Bool _if_conditional170;
int right_value_id_117;
_Bool _if_conditional171;
void* right_value147;
struct sType* come_value_type_118;
void* right_value148;
struct sType* __dec_obj51;
static int num_result_119=0;
void* right_value149;
char* var_name_120;
int num_result_stack_121;
_Bool _if_conditional172;
void* right_value150;
void* right_value151;
_Bool _if_conditional173;
void* right_value152;
struct sFun* come_fun_122;
_Bool _if_conditional174;
void* right_value153;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_112, 0, sizeof(struct sFun*));
right_value144 = (void*)0;
memset(&result_type_113, 0, sizeof(struct sType*));
right_value145 = (void*)0;
memset(&result_type2_114, 0, sizeof(struct sType*));
memset(&result_type3_115, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value_id_117, 0, sizeof(int));
right_value147 = (void*)0;
memset(&come_value_type_118, 0, sizeof(struct sType*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&var_name_120, 0, sizeof(char*));
memset(&num_result_stack_121, 0, sizeof(int));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&come_fun_122, 0, sizeof(struct sFun*));
right_value153 = (void*)0;
    # 223 "05call.c"
    # 147 "05call.c"
    if(self->value) {
        # 148 "05call.c"
        come_fun_112=info->come_fun;
        # 150 "05call.c"
        result_type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(come_fun_112->mResultType))));
        come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 152 "05call.c"
        result_type2_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=solve_generics(result_type_113,info->generics_type,info))));
        come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 154 "05call.c"
        result_type3_115=result_type2_114->mNoSolvedGenericsType->v1;
        # 162 "05call.c"
        # 155 "05call.c"
        if(result_type2_114->mNoSolvedGenericsType->v1) {
            # 156 "05call.c"
            result_type3_115=result_type2_114->mNoSolvedGenericsType->v1;
        }
        else {
            # 159 "05call.c"
            result_type3_115=result_type2_114;
        }
        # 166 "05call.c"
        # 162 "05call.c"
        if(_if_conditional169=!node_compile(self->value,info),        _if_conditional169) {
            # 163 "05call.c"
            __result88__ = (_Bool)0;
            come_call_finalizer3(result_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_114,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result88__;
        }
        # 166 "05call.c"
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 167 "05call.c"
        dec_stack_ptr(1,info);
        # 177 "05call.c"
        # 169 "05call.c"
        if(_if_conditional170=come_value_116->type->mHeap&&come_value_116->var==((void*)0),        _if_conditional170) {
            # 170 "05call.c"
            right_value_id_117=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_116->c_value));
            # 175 "05call.c"
            # 172 "05call.c"
            if(_if_conditional171=right_value_id_117!=-1,            _if_conditional171) {
                # 173 "05call.c"
                remove_object_from_right_values(right_value_id_117,info);
            }
        }
        # 177 "05call.c"
        come_value_type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=solve_generics(come_value_116->type,info->generics_type,info))));
        come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 179 "05call.c"
        __dec_obj51=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(come_value_116->type))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 181 "05call.c"
        # 182 "05call.c"
        var_name_120=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("__result%d__",++num_result_119))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 183 "05call.c"
        num_result_stack_121=num_result_119;
        # 194 "05call.c"
        # 184 "05call.c"
        if(_if_conditional172=result_type2_114->mPointerNum>0,        _if_conditional172) {
            # 185 "05call.c"
            check_assign_type("result type",result_type2_114,come_value_116->type,come_value_116,(_Bool)0,(_Bool)1,info);
            # 187 "05call.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value150=make_define_var(result_type2_114,var_name_120,(_Bool)0,info))));
            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 188 "05call.c"
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_120,come_value_116->c_value);
        }
        else {
            # 191 "05call.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value151=make_define_var(result_type2_114,var_name_120,(_Bool)0,info))));
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 192 "05call.c"
            add_come_code(info,"%s = %s;\n",var_name_120,come_value_116->c_value);
        }
        # 194 "05call.c"
        add_last_code_to_source(info);
        # 196 "05call.c"
        free_objects_on_return(come_fun_112->mBlock,info,come_value_116->var,(_Bool)0);
        # 197 "05call.c"
        free_right_value_objects(info,(_Bool)0);
        # 199 "05call.c"
        caller_end(info);
        # 206 "05call.c"
        # 201 "05call.c"
        if(_if_conditional173=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional173) {
            # 202 "05call.c"
            free_objects(info->gv_table,((void*)0),info);
            # 203 "05call.c"
            add_come_code(info,((char*)(right_value152=xsprintf("come_heap_final();\n"))));
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 206 "05call.c"
        add_come_code(info,"return __result%d__;\n",num_result_stack_121);
        come_call_finalizer3(result_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_120 = come_decrement_ref_count2(var_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 209 "05call.c"
        come_fun_122=info->come_fun;
        # 210 "05call.c"
        caller_end(info);
        # 212 "05call.c"
        add_last_code_to_source(info);
        # 213 "05call.c"
        free_objects_on_return(come_fun_122->mBlock,info,((void*)0),(_Bool)0);
        # 214 "05call.c"
        free_right_value_objects(info,(_Bool)0);
        # 220 "05call.c"
        # 216 "05call.c"
        if(_if_conditional174=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional174) {
            # 217 "05call.c"
            free_objects(info->gv_table,((void*)0),info);
            # 218 "05call.c"
            add_come_code(info,((char*)(right_value153=xsprintf("come_heap_final();\n"))));
            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 220 "05call.c"
        add_come_code(info,"return;\n");
    }
    # 223 "05call.c"
    info->last_statment_is_return=(_Bool)1;
    # 225 "05call.c"
    __result89__ = (_Bool)1;
    return __result89__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __dec_obj52;
struct sLineNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
    # 236 "05call.c"
    self->sline=info->sline;
    # 237 "05call.c"
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 240 "05call.c"
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLineNode_terminated(struct sLineNode* self){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 242 "05call.c"
    __result91__ = (_Bool)0;
    return __result91__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* right_value155;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 247 "05call.c"
    __result92__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sLineNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
struct CVALUE* come_value_123;
void* right_value157;
char* __dec_obj53;
void* right_value158;
void* right_value159;
struct sType* __dec_obj54;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    # 252 "05call.c"
    come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 252, "CVALUE"))));
    come_call_finalizer3(right_value156,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 254 "05call.c"
    __dec_obj53=come_value_123->c_value;
    come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%d",info->sline))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 255 "05call.c"
    __dec_obj54=come_value_123->type;
    come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 255, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 256 "05call.c"
    come_value_123->var=((void*)0);
    # 258 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
    # 260 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_123->c_value);
    # 262 "05call.c"
    __result93__ = (_Bool)1;
    come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value160;
char* __dec_obj55;
struct sSNameNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    # 273 "05call.c"
    self->sline=info->sline;
    # 274 "05call.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 277 "05call.c"
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSNameNode_terminated(struct sSNameNode* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    # 279 "05call.c"
    __result95__ = (_Bool)0;
    return __result95__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* right_value161;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    # 284 "05call.c"
    __result96__ = __result_obj__ = ((char*)(right_value161=__builtin_string("sSNameNode")));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
struct CVALUE* come_value_124;
void* right_value163;
char* __dec_obj56;
void* right_value164;
void* right_value165;
struct sType* __dec_obj57;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 289 "05call.c"
    come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 289, "CVALUE"))));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 291 "05call.c"
    __dec_obj56=come_value_124->c_value;
    come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("\"%s\"",info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 292 "05call.c"
    __dec_obj57=come_value_124->type;
    come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 292, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 293 "05call.c"
    come_value_124->var=((void*)0);
    # 295 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
    # 297 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_124->c_value);
    # 299 "05call.c"
    __result97__ = (_Bool)1;
    come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* __dec_obj58;
struct sFuncNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 310 "05call.c"
    self->sline=info->sline;
    # 311 "05call.c"
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 314 "05call.c"
    __result98__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFuncNode_terminated(struct sFuncNode* self){
void* __result_obj__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    # 316 "05call.c"
    __result99__ = (_Bool)0;
    return __result99__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* right_value167;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    # 321 "05call.c"
    __result100__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sFuncNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value168;
struct CVALUE* come_value_125;
void* right_value169;
char* __dec_obj59;
void* right_value170;
void* right_value171;
struct sType* __dec_obj60;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
    # 326 "05call.c"
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 326, "CVALUE"))));
    come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 328 "05call.c"
    __dec_obj59=come_value_125->c_value;
    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 329 "05call.c"
    __dec_obj60=come_value_125->type;
    come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 329, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 331 "05call.c"
    come_value_125->var=((void*)0);
    # 333 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
    # 335 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_125->c_value);
    # 337 "05call.c"
    __result101__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __dec_obj61;
struct sCallerFuncNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    # 348 "05call.c"
    self->sline=info->sline;
    # 349 "05call.c"
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 352 "05call.c"
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result102__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerFuncNode_terminated(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    # 354 "05call.c"
    __result103__ = (_Bool)0;
    return __result103__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* right_value173;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
    # 359 "05call.c"
    __result104__ = __result_obj__ = ((char*)(right_value173=__builtin_string("sCallerFuncNode")));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result104__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value174;
struct CVALUE* come_value_126;
_Bool _if_conditional187;
void* right_value175;
char* __dec_obj62;
void* right_value176;
char* __dec_obj63;
void* right_value177;
void* right_value178;
struct sType* __dec_obj64;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    # 364 "05call.c"
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 364, "CVALUE"))));
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 372 "05call.c"
    # 366 "05call.c"
    if(info->caller_fun) {
        # 367 "05call.c"
        __dec_obj62=come_value_126->c_value;
        come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 370 "05call.c"
        __dec_obj63=come_value_126->c_value;
        come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("\"\""))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 372 "05call.c"
    __dec_obj64=come_value_126->type;
    come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 372, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 374 "05call.c"
    come_value_126->var=((void*)0);
    # 376 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
    # 378 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_126->c_value);
    # 380 "05call.c"
    __result105__ = (_Bool)1;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __dec_obj65;
struct sCallerLineNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    # 391 "05call.c"
    self->sline=info->sline;
    # 392 "05call.c"
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 395 "05call.c"
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerLineNode_terminated(struct sCallerLineNode* self){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 397 "05call.c"
    __result107__ = (_Bool)0;
    return __result107__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value180;
struct CVALUE* come_value_127;
void* right_value181;
char* __dec_obj66;
void* right_value182;
void* right_value183;
struct sType* __dec_obj67;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&come_value_127, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 402 "05call.c"
    come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 402, "CVALUE"))));
    come_call_finalizer3(right_value180,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 404 "05call.c"
    __dec_obj66=come_value_127->c_value;
    come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%d",info->caller_line))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 405 "05call.c"
    __dec_obj67=come_value_127->type;
    come_value_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value182=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 405, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value182,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 406 "05call.c"
    come_value_127->var=((void*)0);
    # 408 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
    # 410 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_127->c_value);
    # 412 "05call.c"
    __result108__ = (_Bool)1;
    come_call_finalizer3(come_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(come_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* right_value184;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    # 417 "05call.c"
    __result109__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sCallerLineNode")));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __dec_obj68;
struct sCallerSNameNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    # 428 "05call.c"
    self->sline=info->sline;
    # 429 "05call.c"
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 432 "05call.c"
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerSNameNode_terminated(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 434 "05call.c"
    __result111__ = (_Bool)0;
    return __result111__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value186;
struct CVALUE* come_value_128;
void* right_value187;
char* __dec_obj69;
void* right_value188;
void* right_value189;
struct sType* __dec_obj70;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&come_value_128, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
    # 439 "05call.c"
    come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 439, "CVALUE"))));
    come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 441 "05call.c"
    __dec_obj69=come_value_128->c_value;
    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 442 "05call.c"
    __dec_obj70=come_value_128->type;
    come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 442, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 443 "05call.c"
    come_value_128->var=((void*)0);
    # 445 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
    # 447 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_128->c_value);
    # 449 "05call.c"
    __result112__ = (_Bool)1;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* right_value190;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
    # 454 "05call.c"
    __result113__ = __result_obj__ = ((char*)(right_value190=__builtin_string("sCallerSNameNode")));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    # 462 "05call.c"
    skip_spaces_and_lf(info);
    # 463 "05call.c"
    parse_sharp_v5(info);
    # 465 "05call.c"
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    # 466 "05call.c"
    stackframe();
    # 467 "05call.c"
    exit(3);
    # 468 "05call.c"
    __result114__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result114__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
static int num_method_generics_129=0;
void* right_value191;
char* fun_name3_130;
struct list$1sTypeph* method_generics_types_before_131;
struct list$1sTypeph* __dec_obj71;
struct sGenericsFun* generics_fun_132;
_Bool _if_conditional194;
void* right_value192;
_Bool _if_conditional195;
void* right_value193;
char* __result115__;
struct list$1sTypeph* __dec_obj72;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
memset(&fun_name3_130, 0, sizeof(char*));
memset(&method_generics_types_before_131, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_132, 0, sizeof(struct sGenericsFun*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 473 "05call.c"
    # 474 "05call.c"
    fun_name3_130=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s_method_generics%d",fun_name,num_method_generics_129++))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 476 "05call.c"
    method_generics_types_before_131=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 477 "05call.c"
    __dec_obj71=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 479 "05call.c"
    generics_fun_132=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    # 488 "05call.c"
    # 481 "05call.c"
    if(generics_fun_132) {
        # 486 "05call.c"
        # 482 "05call.c"
        if(_if_conditional195=!create_method_generics_fun((char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(fun_name3_130)))),generics_fun_132,info),        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional195) {
            # 483 "05call.c"
            err_msg(info,"%s not found",fun_name3_130);
            # 484 "05call.c"
            __result115__ = __result_obj__ = ((char*)(right_value193=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_130 = come_decrement_ref_count2(fun_name3_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_131,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result115__;
        }
    }
    # 488 "05call.c"
    __dec_obj72=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_131);
    come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 490 "05call.c"
    __result116__ = __result_obj__ = fun_name3_130;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_130 = come_decrement_ref_count2(fun_name3_130, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_131,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_130 = come_decrement_ref_count2(fun_name3_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_131,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj73;
void* right_value204;
struct list$1tuple2$2charphsNodephph* __dec_obj79;
void* right_value205;
char* __dec_obj80;
struct list$1sTypeph* __dec_obj81;
struct sFunCallNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    # 502 "05call.c"
    __dec_obj73=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(fun_name))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 503 "05call.c"
    __dec_obj79=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value204=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj79,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value204,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 504 "05call.c"
    self->guard_break=guard_break;
    # 505 "05call.c"
    self->sline=info->sline;
    # 506 "05call.c"
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(info->sname))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 507 "05call.c"
    __dec_obj81=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 510 "05call.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 512 "05call.c"
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__;
void* right_value206;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    # 517 "05call.c"
    __result125__ = __result_obj__ = ((char*)(right_value206=__builtin_string("sFunCallNode")));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_143;
struct list$1tuple2$2charphsNodephph* params_144;
struct sVar* var__145;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sType* lambda_type_146;
void* right_value207;
struct sType* result_type_147;
void* right_value208;
void* right_value209;
struct list$1CVALUEph* come_params_150;
_Bool _if_conditional220;
_Bool __result129__;
int i_151;
struct list$1tuple2$2charphsNodephph* o2_saved_152;
struct tuple2$2charphsNodeph* it_155;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_158;
struct sNode* node_159;
_Bool _if_conditional225;
_Bool __result137__;
void* right_value210;
struct CVALUE* come_value_160;
_Bool _if_conditional226;
void* right_value211;
void* right_value212;
void* right_value213;
_Bool _if_conditional227;
void* right_value214;
void* right_value215;
struct buffer* buf_161;
int j_162;
struct list$1CVALUEph* o2_saved_163;
struct CVALUE* it_166;
_Bool _if_conditional233;
void* right_value216;
struct CVALUE* come_value_169;
void* right_value217;
char* __dec_obj82;
_Bool _if_conditional234;
void* right_value218;
char* __dec_obj83;
void* right_value219;
struct sType* __dec_obj84;
_Bool _if_conditional235;
void* right_value220;
char* __dec_obj85;
_Bool _if_conditional236;
void* right_value221;
void* right_value222;
struct list$1CVALUEph* come_params_170;
struct list$1tuple2$2charphsNodephph* o2_saved_171;
struct tuple2$2charphsNodeph* it_172;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_173;
struct sNode* node_174;
_Bool _if_conditional237;
_Bool __result147__;
void* right_value223;
struct CVALUE* come_value_175;
void* right_value224;
void* right_value225;
struct buffer* buf_176;
int j_177;
struct list$1CVALUEph* o2_saved_178;
struct CVALUE* it_179;
_Bool _if_conditional238;
void* right_value226;
struct CVALUE* come_value_180;
void* right_value227;
char* __dec_obj86;
_Bool _if_conditional239;
void* right_value228;
void* right_value229;
struct sType* __dec_obj87;
_Bool _if_conditional240;
void* right_value230;
void* right_value231;
struct sType* __dec_obj88;
_Bool _if_conditional241;
void* right_value232;
void* right_value233;
struct sType* __dec_obj89;
_Bool _if_conditional242;
void* right_value234;
void* right_value235;
struct sType* __dec_obj90;
_Bool __result148__;
_Bool _if_conditional243;
void* right_value236;
char* __dec_obj91;
_Bool _if_conditional244;
void* right_value237;
char* __dec_obj92;
_Bool _if_conditional245;
char* p_181;
int version_182;
_Bool _while_condtional23;
_Bool _if_conditional246;
char* p2_183;
_Bool _while_condtional24;
int i_185;
void* right_value238;
char* new_fun_name_186;
_Bool _if_conditional247;
void* right_value239;
char* __dec_obj93;
_Bool _if_conditional248;
void* right_value240;
char* new_fun_name_187;
_Bool _if_conditional249;
void* right_value241;
char* __dec_obj94;
_Bool _if_conditional250;
_Bool __result149__;
int i_188;
void* right_value242;
char* new_fun_name_189;
_Bool _if_conditional251;
void* right_value243;
char* __dec_obj95;
struct sFun* fun_192;
_Bool _if_conditional256;
_Bool __result154__;
void* right_value244;
struct sType* result_type_193;
void* right_value245;
void* right_value246;
struct list$1sTypeph* param_types_194;
struct list$1sTypeph* o2_saved_195;
struct sType* it_198;
void* right_value247;
void* right_value248;
struct sType* it2_201;
void* right_value252;
void* right_value253;
struct sType* __dec_obj99;
void* right_value254;
void* right_value255;
struct list$1CVALUEph* come_params_205;
int i_206;
struct list$1tuple2$2charphsNodephph* o2_saved_210;
struct tuple2$2charphsNodeph* it_211;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_212;
struct sNode* node_213;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool __result164__;
void* right_value259;
struct CVALUE* come_value_214;
int n_215;
struct list$1charph* o2_saved_216;
char* it_219;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value260;
void* right_value261;
void* right_value262;
_Bool _if_conditional274;
int i_224;
struct list$1tuple2$2charphsNodephph* o2_saved_225;
struct tuple2$2charphsNodeph* it_226;
struct tuple2$2charphsNodeph* multiple_assign_var8;
char* label_227;
struct sNode* node_228;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool __result174__;
void* right_value263;
struct CVALUE* come_value_229;
_Bool _while_condtional27;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool __result177__;
void* right_value264;
struct CVALUE* come_value_233;
_Bool _while_condtional29;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value265;
void* right_value266;
void* right_value267;
_Bool _if_conditional287;
_Bool _while_condtional30;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value268;
char* default_param_237;
char* param_name_238;
_Bool _if_conditional292;
struct buffer* source_239;
char* p_240;
char* head_241;
int sline_242;
void* right_value269;
struct buffer* __dec_obj104;
void* right_value270;
struct sNode* node_243;
_Bool _if_conditional293;
_Bool __result180__;
struct buffer* __dec_obj105;
void* right_value271;
struct CVALUE* come_value_244;
_Bool _if_conditional294;
void* right_value272;
void* right_value273;
void* right_value274;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool __result181__;
_Bool _if_conditional297;
_Bool __result182__;
void* right_value275;
void* right_value276;
struct buffer* buf_245;
int j_246;
struct list$1CVALUEph* o2_saved_247;
struct CVALUE* it_248;
_Bool _if_conditional298;
void* right_value277;
struct CVALUE* come_value_249;
void* right_value278;
char* __dec_obj106;
void* right_value279;
struct sType* __dec_obj107;
_Bool _if_conditional299;
void* right_value280;
char* __dec_obj108;
_Bool _if_conditional300;
_Bool _if_conditional301;
void* right_value281;
char* __dec_obj109;
_Bool _if_conditional302;
void* right_value282;
void* right_value283;
char* __dec_obj110;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_143, 0, sizeof(char*));
memset(&params_144, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__145, 0, sizeof(struct sVar*));
memset(&lambda_type_146, 0, sizeof(struct sType*));
right_value207 = (void*)0;
memset(&result_type_147, 0, sizeof(struct sType*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&come_params_150, 0, sizeof(struct list$1CVALUEph*));
memset(&i_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_155, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_158, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&label_158, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&buf_161, 0, sizeof(struct buffer*));
memset(&j_162, 0, sizeof(int));
memset(&o2_saved_163, 0, sizeof(struct list$1CVALUEph*));
memset(&it_166, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
memset(&come_value_169, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&come_params_170, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_171, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_172, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_173, 0, sizeof(char*));
memset(&node_174, 0, sizeof(struct sNode*));
memset(&label_173, 0, sizeof(char*));
memset(&node_174, 0, sizeof(struct sNode*));
right_value223 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&buf_176, 0, sizeof(struct buffer*));
memset(&j_177, 0, sizeof(int));
memset(&o2_saved_178, 0, sizeof(struct list$1CVALUEph*));
memset(&it_179, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&p_181, 0, sizeof(char*));
memset(&version_182, 0, sizeof(int));
memset(&p2_183, 0, sizeof(char*));
memset(&i_185, 0, sizeof(int));
right_value238 = (void*)0;
memset(&new_fun_name_186, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&new_fun_name_187, 0, sizeof(char*));
right_value241 = (void*)0;
memset(&i_188, 0, sizeof(int));
right_value242 = (void*)0;
memset(&new_fun_name_189, 0, sizeof(char*));
right_value243 = (void*)0;
memset(&fun_192, 0, sizeof(struct sFun*));
right_value244 = (void*)0;
memset(&result_type_193, 0, sizeof(struct sType*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&param_types_194, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_195, 0, sizeof(struct list$1sTypeph*));
memset(&it_198, 0, sizeof(struct sType*));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&it2_201, 0, sizeof(struct sType*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&come_params_205, 0, sizeof(struct list$1CVALUEph*));
memset(&i_206, 0, sizeof(int));
memset(&o2_saved_210, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_211, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_212, 0, sizeof(char*));
memset(&node_213, 0, sizeof(struct sNode*));
memset(&label_212, 0, sizeof(char*));
memset(&node_213, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
memset(&n_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1charph*));
memset(&it_219, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&i_224, 0, sizeof(int));
memset(&o2_saved_225, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_226, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_227, 0, sizeof(char*));
memset(&node_228, 0, sizeof(struct sNode*));
memset(&label_227, 0, sizeof(char*));
memset(&node_228, 0, sizeof(struct sNode*));
right_value263 = (void*)0;
memset(&come_value_229, 0, sizeof(struct CVALUE*));
right_value264 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&default_param_237, 0, sizeof(char*));
memset(&param_name_238, 0, sizeof(char*));
memset(&source_239, 0, sizeof(struct buffer*));
memset(&p_240, 0, sizeof(char*));
memset(&head_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&node_243, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
memset(&come_value_244, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&buf_245, 0, sizeof(struct buffer*));
memset(&j_246, 0, sizeof(int));
memset(&o2_saved_247, 0, sizeof(struct list$1CVALUEph*));
memset(&it_248, 0, sizeof(struct CVALUE*));
right_value277 = (void*)0;
memset(&come_value_249, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
    # 522 "05call.c"
    fun_name_143=(char*)come_increment_ref_count(self->fun_name);
    # 523 "05call.c"
    params_144=self->params;
    # 525 "05call.c"
    var__145=get_variable_from_table(info->lv_table,fun_name_143);
    # 531 "05call.c"
    # 527 "05call.c"
    if(_if_conditional217=var__145==((void*)0),    _if_conditional217) {
        # 528 "05call.c"
        var__145=get_variable_from_table(info->gv_table,fun_name_143);
    }
    # 941 "05call.c"
    # 531 "05call.c"
    if(var__145) {
        # 532 "05call.c"
        lambda_type_146=var__145->mType;
        # 534 "05call.c"
        result_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(lambda_type_146->mResultType->v1))));
        come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 535 "05call.c"
        result_type_147->mStatic=(_Bool)0;
        # 537 "05call.c"
        come_params_150=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value209=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value208=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 537, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value208,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value209,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 544 "05call.c"
        # 539 "05call.c"
        if(_if_conditional220=list$1sTypeph_length(lambda_type_146->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_144)&&!lambda_type_146->mVarArgs,        _if_conditional220) {
            # 540 "05call.c"
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_143,list$1sTypeph_length(lambda_type_146->mParamTypes),list$1tuple2$2charphsNodephph_length(params_144));
            # 541 "05call.c"
            __result129__ = (_Bool)0;
            come_call_finalizer3(result_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_150,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result129__;
        }
        # 544 "05call.c"
        i_151=0;
        # 568 "05call.c"
        for(        o2_saved_152=(params_144),it_155=list$1tuple2$2charphsNodephph_begin((o2_saved_152));        !list$1tuple2$2charphsNodephph_end((o2_saved_152));        it_155=list$1tuple2$2charphsNodephph_next((o2_saved_152))        ){
            # 546 "05call.c"
            multiple_assign_var5=it_155;
            label_158=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_159=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            # 552 "05call.c"
            # 548 "05call.c"
            if(_if_conditional225=!node_compile(node_159,info),            _if_conditional225) {
                # 549 "05call.c"
                __result137__ = (_Bool)0;
                label_158 = come_decrement_ref_count2(label_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_159) { node_159 = come_decrement_ref_count2(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_150,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result137__;
            }
            # 552 "05call.c"
            come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 562 "05call.c"
            # 553 "05call.c"
            if(_if_conditional226=lambda_type_146->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_151), "05call.c", 553, 3))==((void*)0),            _if_conditional226) {
            }
            else {
                # 556 "05call.c"
                check_assign_type(((char*)(right_value213=xsprintf("\%s calling param #\%s",((char*)(right_value211=string_to_string(fun_name_143))),((char*)(right_value212=int_to_string(i_151)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_151), "05call.c", 556, 4)),come_value_160->type,come_value_160,(_Bool)0,(_Bool)1,info);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 560 "05call.c"
                # 557 "05call.c"
                if(_if_conditional227=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_151), "05call.c", 557, 5))->mHeap&&come_value_160->type->mHeap,                _if_conditional227) {
                    # 558 "05call.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_151), "05call.c", 558, 6)),come_value_160->type,come_value_160,info);
                }
            }
            # 562 "05call.c"
            list$1CVALUEph_push_back(come_params_150,(struct CVALUE*)come_increment_ref_count(come_value_160));
            # 563 "05call.c"
            dec_stack_ptr(1,info);
            # 565 "05call.c"
            i_151++;
            label_158 = come_decrement_ref_count2(label_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_159) { node_159 = come_decrement_ref_count2(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 568 "05call.c"
        buf_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value215=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value214=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 568, "buffer"))))))));
        come_call_finalizer3(right_value214,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value215,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 570 "05call.c"
        buffer_append_str(buf_161,var__145->mCValueName);
        # 571 "05call.c"
        buffer_append_str(buf_161,"(");
        # 573 "05call.c"
        j_162=0;
        # 583 "05call.c"
        for(        o2_saved_163=(struct list$1CVALUEph*)come_increment_ref_count((come_params_150)),it_166=list$1CVALUEph_begin((o2_saved_163));        !list$1CVALUEph_end((o2_saved_163));        it_166=list$1CVALUEph_next((o2_saved_163))        ){
            # 575 "05call.c"
            buffer_append_str(buf_161,it_166->c_value);
            # 581 "05call.c"
            # 577 "05call.c"
            if(_if_conditional233=j_162!=list$1CVALUEph_length(come_params_150)-1,            _if_conditional233) {
                # 578 "05call.c"
                buffer_append_str(buf_161,",");
            }
            # 581 "05call.c"
            j_162++;
        }
        come_call_finalizer3(o2_saved_163,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 583 "05call.c"
        buffer_append_str(buf_161,")");
        # 585 "05call.c"
        come_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 585, "CVALUE"))));
        come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 586 "05call.c"
        __dec_obj82=come_value_169->c_value;
        come_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value217=buffer_to_string(buf_161))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 592 "05call.c"
        # 588 "05call.c"
        if(lambda_type_146->mResultType->v1->mHeap) {
            # 589 "05call.c"
            __dec_obj83=come_value_169->c_value;
            come_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value218=append_object_to_right_values(come_value_169->c_value,(struct sType*)come_increment_ref_count(lambda_type_146->mResultType->v1),info))));
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 592 "05call.c"
        __dec_obj84=come_value_169->type;
        come_value_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(result_type_147))));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 593 "05call.c"
        come_value_169->type->mStatic=(_Bool)0;
        # 594 "05call.c"
        come_value_169->var=((void*)0);
        # 596 "05call.c"
        add_come_last_code(info,"%s;\n",come_value_169->c_value);
        # 598 "05call.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
        come_call_finalizer3(result_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_150,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 605 "05call.c"
        # 601 "05call.c"
        if(_if_conditional235=list$1sTypeph_length(self->method_generics_types)>0,        _if_conditional235) {
            # 602 "05call.c"
            __dec_obj85=fun_name_143;
            fun_name_143=(char*)come_increment_ref_count(((char*)(right_value220=make_method_generics_function((char*)come_increment_ref_count(fun_name_143),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info))));
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 725 "05call.c"
        # 605 "05call.c"
        if(_if_conditional236=string_operator_equals(fun_name_143,"__builtin_memmove")||string_operator_equals(fun_name_143,"__builtin_memset")||string_operator_equals(fun_name_143,"__builtin_ffs")||string_operator_equals(fun_name_143,"__builtin_ffsl")||string_operator_equals(fun_name_143,"__builtin_ffsll"),        _if_conditional236) {
            # 607 "05call.c"
            come_params_170=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value222=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value221=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 607, "list$1CVALUEph"))))))));
            come_call_finalizer3(right_value221,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value222,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 621 "05call.c"
            for(            o2_saved_171=(params_144),it_172=list$1tuple2$2charphsNodephph_begin((o2_saved_171));            !list$1tuple2$2charphsNodephph_end((o2_saved_171));            it_172=list$1tuple2$2charphsNodephph_next((o2_saved_171))            ){
                # 609 "05call.c"
                multiple_assign_var6=it_172;
                label_173=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_174=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                # 615 "05call.c"
                # 611 "05call.c"
                if(_if_conditional237=!node_compile(node_174,info),                _if_conditional237) {
                    # 612 "05call.c"
                    __result147__ = (_Bool)0;
                    label_173 = come_decrement_ref_count2(label_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_170,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result147__;
                }
                # 615 "05call.c"
                come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 616 "05call.c"
                dec_stack_ptr(1,info);
                # 618 "05call.c"
                list$1CVALUEph_push_back(come_params_170,(struct CVALUE*)come_increment_ref_count(come_value_175));
                label_173 = come_decrement_ref_count2(label_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 621 "05call.c"
            buf_176=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value225=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value224=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 621, "buffer"))))))));
            come_call_finalizer3(right_value224,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value225,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 623 "05call.c"
            buffer_append_str(buf_176,fun_name_143);
            # 624 "05call.c"
            buffer_append_str(buf_176,"(");
            # 626 "05call.c"
            j_177=0;
            # 636 "05call.c"
            for(            o2_saved_178=(struct list$1CVALUEph*)come_increment_ref_count((come_params_170)),it_179=list$1CVALUEph_begin((o2_saved_178));            !list$1CVALUEph_end((o2_saved_178));            it_179=list$1CVALUEph_next((o2_saved_178))            ){
                # 628 "05call.c"
                buffer_append_str(buf_176,it_179->c_value);
                # 634 "05call.c"
                # 630 "05call.c"
                if(_if_conditional238=j_177!=list$1CVALUEph_length(come_params_170)-1,                _if_conditional238) {
                    # 631 "05call.c"
                    buffer_append_str(buf_176,",");
                }
                # 634 "05call.c"
                j_177++;
            }
            come_call_finalizer3(o2_saved_178,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 636 "05call.c"
            buffer_append_str(buf_176,")");
            # 638 "05call.c"
            come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 638, "CVALUE"))));
            come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 639 "05call.c"
            __dec_obj86=come_value_180->c_value;
            come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value227=buffer_to_string(buf_176))));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 654 "05call.c"
            # 641 "05call.c"
            if(_if_conditional239=string_operator_equals(fun_name_143,"__builtin_memmove")||string_operator_equals(fun_name_143,"__builtin_memset"),            _if_conditional239) {
                # 642 "05call.c"
                __dec_obj87=come_value_180->type;
                come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 642, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 654 "05call.c"
                # 644 "05call.c"
                if(_if_conditional240=string_operator_equals(fun_name_143,"__builtin_ffs"),                _if_conditional240) {
                    # 645 "05call.c"
                    __dec_obj88=come_value_180->type;
                    come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 645, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 654 "05call.c"
                    # 647 "05call.c"
                    if(_if_conditional241=string_operator_equals(fun_name_143,"__builtin_ffsl"),                    _if_conditional241) {
                        # 648 "05call.c"
                        __dec_obj89=come_value_180->type;
                        come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 648, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 654 "05call.c"
                        # 650 "05call.c"
                        if(_if_conditional242=string_operator_equals(fun_name_143,"__builtin_ffsll"),                        _if_conditional242) {
                            # 651 "05call.c"
                            __dec_obj90=come_value_180->type;
                            come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 651, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            # 654 "05call.c"
            come_value_180->var=((void*)0);
            # 656 "05call.c"
            add_come_last_code(info,"%s;\n",come_value_180->c_value);
            # 658 "05call.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
            # 660 "05call.c"
            __result148__ = (_Bool)1;
            come_call_finalizer3(come_params_170,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_176,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result148__;
            come_call_finalizer3(come_params_170,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_176,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 725 "05call.c"
            # 662 "05call.c"
            if(_if_conditional243=string_operator_equals(fun_name_143,"string"),            _if_conditional243) {
                # 663 "05call.c"
                __dec_obj91=fun_name_143;
                fun_name_143=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("__builtin_string"))));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 725 "05call.c"
                # 665 "05call.c"
                if(_if_conditional244=string_operator_equals(fun_name_143,"wstring"),                _if_conditional244) {
                    # 666 "05call.c"
                    __dec_obj92=fun_name_143;
                    fun_name_143=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("__builtin_wstring"))));
                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 725 "05call.c"
                    # 668 "05call.c"
                    if(_if_conditional245=string_operator_equals(fun_name_143,"inherit"),                    _if_conditional245) {
                        # 669 "05call.c"
                        p_181=info->come_fun->mName;
                        # 671 "05call.c"
                        version_182=0;
                        # 687 "05call.c"
                        while(_while_condtional23=*p_181,                        _while_condtional23) {
                            # 685 "05call.c"
                            # 673 "05call.c"
                            if(_if_conditional246=*p_181==95&&*(p_181+1)==118&&xisdigit(*(p_181+2)),                            _if_conditional246) {
                                # 674 "05call.c"
                                p2_183=p_181+2;
                                # 675 "05call.c"
                                version_182=0;
                                # 680 "05call.c"
                                while(_while_condtional24=xisdigit(*p2_183),                                _while_condtional24) {
                                    # 677 "05call.c"
                                    version_182=version_182*10+(*p2_183-48);
                                    # 678 "05call.c"
                                    p2_183++;
                                }
                                # 680 "05call.c"
                                break;
                            }
                            else {
                                # 683 "05call.c"
                                p_181++;
                            }
                        }
                        # 687 "05call.c"
                        char real_fun_name_184[2048];
                        memset(&real_fun_name_184, 0, sizeof(char)                        *(2048)                        );
                        # 688 "05call.c"
                        memcpy(real_fun_name_184,info->come_fun->mName,p_181-info->come_fun->mName);
                        # 689 "05call.c"
                        real_fun_name_184[p_181-info->come_fun->mName]=0;
                        # 691 "05call.c"
                        # 701 "05call.c"
                        for(                        i_185=version_182-1;                        i_185>=1;                        i_185--                        ){
                            # 693 "05call.c"
                            new_fun_name_186=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s_v%d",real_fun_name_184,i_185))));
                            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 699 "05call.c"
                            # 695 "05call.c"
                            if(_if_conditional247=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_186),                            _if_conditional247) {
                                # 696 "05call.c"
                                __dec_obj93=fun_name_143;
                                fun_name_143=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(new_fun_name_186))));
                                __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 697 "05call.c"
                                new_fun_name_186 = come_decrement_ref_count2(new_fun_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_186 = come_decrement_ref_count2(new_fun_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 713 "05call.c"
                        # 701 "05call.c"
                        if(_if_conditional248=i_185==0,                        _if_conditional248) {
                            # 702 "05call.c"
                            new_fun_name_187=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s",real_fun_name_184))));
                            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 708 "05call.c"
                            # 704 "05call.c"
                            if(_if_conditional249=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_187),                            _if_conditional249) {
                                # 705 "05call.c"
                                __dec_obj94=fun_name_143;
                                fun_name_143=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(new_fun_name_187))));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 712 "05call.c"
                            # 708 "05call.c"
                            if(_if_conditional250=string_operator_equals(fun_name_143,info->come_fun->mName),                            _if_conditional250) {
                                # 709 "05call.c"
                                err_msg(info,"invalid inherit");
                                # 710 "05call.c"
                                __result149__ = (_Bool)0;
                                new_fun_name_187 = come_decrement_ref_count2(new_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result149__;
                            }
                            new_fun_name_187 = come_decrement_ref_count2(new_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 723 "05call.c"
                        for(                        i_188=128;                        i_188>=1;                        i_188--                        ){
                            # 716 "05call.c"
                            new_fun_name_189=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s_v%d",fun_name_143,i_188))));
                            right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 722 "05call.c"
                            # 718 "05call.c"
                            if(_if_conditional251=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_189),                            _if_conditional251) {
                                # 719 "05call.c"
                                __dec_obj95=fun_name_143;
                                fun_name_143=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(new_fun_name_189))));
                                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 720 "05call.c"
                                new_fun_name_189 = come_decrement_ref_count2(new_fun_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_189 = come_decrement_ref_count2(new_fun_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        # 725 "05call.c"
        fun_192=map$2charphsFunph_at(info->funcs,fun_name_143,((void*)0));
        # 732 "05call.c"
        # 727 "05call.c"
        if(_if_conditional256=fun_192==((void*)0),        _if_conditional256) {
            # 728 "05call.c"
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_143);
            # 729 "05call.c"
            __result154__ = (_Bool)1;
            fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result154__;
        }
        # 732 "05call.c"
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(fun_192->mResultType))));
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 733 "05call.c"
        result_type_193->mStatic=(_Bool)0;
        # 735 "05call.c"
        param_types_194=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value246=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value245=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 735, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value245,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value246,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 741 "05call.c"
        for(        o2_saved_195=(struct list$1sTypeph*)come_increment_ref_count((fun_192->mParamTypes)),it_198=list$1sTypeph_begin((o2_saved_195));        !list$1sTypeph_end((o2_saved_195));        it_198=list$1sTypeph_next((o2_saved_195))        ){
            # 737 "05call.c"
            it2_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=solve_generics(((struct sType*)(right_value247=sType_clone(it_198))),info->generics_type,info))));
            come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 738 "05call.c"
            list$1sTypeph_push_back(param_types_194,(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(it2_201)))));
            come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(it2_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_195,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 741 "05call.c"
        __dec_obj99=result_type_193;
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=solve_generics(result_type_193,info->generics_type,info))));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 743 "05call.c"
        come_params_205=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value255=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value254=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 743, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value254,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value255,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 749 "05call.c"
        for(        i_206=0;        i_206<list$1sTypeph_length(fun_192->mParamTypes);        i_206++        ){
            # 746 "05call.c"
            list$1CVALUEph_add(come_params_205,((void*)0));
        }
        # 782 "05call.c"
        for(        o2_saved_210=(params_144),it_211=list$1tuple2$2charphsNodephph_begin((o2_saved_210));        !list$1tuple2$2charphsNodephph_end((o2_saved_210));        it_211=list$1tuple2$2charphsNodephph_next((o2_saved_210))        ){
            # 750 "05call.c"
            multiple_assign_var7=it_211;
            label_212=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_213=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            # 780 "05call.c"
            # 752 "05call.c"
            if(_if_conditional265=fun_192->mVarArgs||string_operator_equals(fun_name_143,"__builtin_va_start"),            _if_conditional265) {
            }
            else {
                # 780 "05call.c"
                # 754 "05call.c"
                if(label_212) {
                    # 759 "05call.c"
                    # 755 "05call.c"
                    if(_if_conditional267=!node_compile(node_213,info),                    _if_conditional267) {
                        # 756 "05call.c"
                        __result164__ = (_Bool)0;
                        label_212 = come_decrement_ref_count2(label_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_213) { node_213 = come_decrement_ref_count2(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result164__;
                    }
                    # 759 "05call.c"
                    come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value259,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 760 "05call.c"
                    dec_stack_ptr(1,info);
                    # 762 "05call.c"
                    n_215=0;
                    # 771 "05call.c"
                    for(                    o2_saved_216=(struct list$1charph*)come_increment_ref_count((fun_192->mParamNames)),it_219=list$1charph_begin((o2_saved_216));                    !list$1charph_end((o2_saved_216));                    it_219=list$1charph_next((o2_saved_216))                    ){
                        # 768 "05call.c"
                        # 764 "05call.c"
                        if(_if_conditional272=string_operator_equals(label_212,it_219),                        _if_conditional272) {
                            # 765 "05call.c"
                            break;
                        }
                        # 768 "05call.c"
                        n_215++;
                    }
                    come_call_finalizer3(o2_saved_216,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    # 774 "05call.c"
                    # 771 "05call.c"
                    if(_if_conditional273=list$1sTypephp_operator_load_element(param_types_194,n_215),                    _if_conditional273) {
                        # 772 "05call.c"
                        check_assign_type(((char*)(right_value262=xsprintf("\%s param num \%s is assinged to",((char*)(right_value260=string_to_string(fun_name_143))),((char*)(right_value261=int_to_string(n_215)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,n_215), "05call.c", 772, 7)),come_value_214->type,come_value_214,(_Bool)0,(_Bool)1,info);
                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 778 "05call.c"
                    # 774 "05call.c"
                    if(_if_conditional274=list$1sTypephp_operator_load_element(param_types_194,n_215)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,n_215), "05call.c", 774, 8))->mHeap&&come_value_214->type->mHeap,                    _if_conditional274) {
                        # 775 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,n_215), "05call.c", 775, 9)),come_value_214->type,come_value_214,info);
                    }
                    # 778 "05call.c"
                    list$1CVALUEph_replace(come_params_205,n_215,(struct CVALUE*)come_increment_ref_count(come_value_214));
                    come_call_finalizer3(come_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_212 = come_decrement_ref_count2(label_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_213) { node_213 = come_decrement_ref_count2(node_213, ((struct sNode*)node_213)->finalize, ((struct sNode*)node_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 782 "05call.c"
        i_224=0;
        # 837 "05call.c"
        for(        o2_saved_225=(params_144),it_226=list$1tuple2$2charphsNodephph_begin((o2_saved_225));        !list$1tuple2$2charphsNodephph_end((o2_saved_225));        it_226=list$1tuple2$2charphsNodephph_next((o2_saved_225))        ){
            # 784 "05call.c"
            multiple_assign_var8=it_226;
            label_227=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_228=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            # 835 "05call.c"
            # 786 "05call.c"
            if(_if_conditional278=fun_192->mVarArgs||string_operator_equals(fun_name_143,"__builtin_va_start"),            _if_conditional278) {
                # 791 "05call.c"
                # 787 "05call.c"
                if(_if_conditional279=!node_compile(node_228,info),                _if_conditional279) {
                    # 788 "05call.c"
                    __result174__ = (_Bool)0;
                    label_227 = come_decrement_ref_count2(label_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result174__;
                }
                # 791 "05call.c"
                come_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value263,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 792 "05call.c"
                dec_stack_ptr(1,info);
                # 803 "05call.c"
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    # 801 "05call.c"
                    # 795 "05call.c"
                    if(_if_conditional282=list$1CVALUEphp_operator_load_element(come_params_205,i_224)==((void*)0),                    _if_conditional282) {
                        # 796 "05call.c"
                        break;
                    }
                    else {
                        # 799 "05call.c"
                        i_224++;
                    }
                }
                # 803 "05call.c"
                list$1CVALUEph_replace(come_params_205,i_224,(struct CVALUE*)come_increment_ref_count(come_value_229));
                # 804 "05call.c"
                i_224++;
                come_call_finalizer3(come_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 835 "05call.c"
                # 806 "05call.c"
                if(label_227) {
                }
                else {
                    # 813 "05call.c"
                    # 809 "05call.c"
                    if(_if_conditional284=!node_compile(node_228,info),                    _if_conditional284) {
                        # 810 "05call.c"
                        __result177__ = (_Bool)0;
                        label_227 = come_decrement_ref_count2(label_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result177__;
                    }
                    # 813 "05call.c"
                    come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value264,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 814 "05call.c"
                    dec_stack_ptr(1,info);
                    # 825 "05call.c"
                    while(_while_condtional29=(_Bool)1,                    _while_condtional29) {
                        # 823 "05call.c"
                        # 817 "05call.c"
                        if(_if_conditional285=list$1CVALUEphp_operator_load_element(come_params_205,i_224)==((void*)0),                        _if_conditional285) {
                            # 818 "05call.c"
                            break;
                        }
                        else {
                            # 821 "05call.c"
                            i_224++;
                        }
                    }
                    # 828 "05call.c"
                    # 825 "05call.c"
                    if(_if_conditional286=list$1sTypephp_operator_load_element(param_types_194,i_224),                    _if_conditional286) {
                        # 826 "05call.c"
                        check_assign_type(((char*)(right_value267=xsprintf("\%s param num \%s is assinged to",((char*)(right_value265=string_to_string(fun_name_143))),((char*)(right_value266=int_to_string(i_224)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 826, 10)),come_value_233->type,come_value_233,(_Bool)0,(_Bool)1,info);
                        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 832 "05call.c"
                    # 828 "05call.c"
                    if(_if_conditional287=list$1sTypephp_operator_load_element(param_types_194,i_224)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 828, 11))->mHeap&&come_value_233->type->mHeap,                    _if_conditional287) {
                        # 829 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 829, 12)),come_value_233->type,come_value_233,info);
                    }
                    # 832 "05call.c"
                    list$1CVALUEph_replace(come_params_205,i_224,(struct CVALUE*)come_increment_ref_count(come_value_233));
                    # 833 "05call.c"
                    i_224++;
                    come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_227 = come_decrement_ref_count2(label_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 846 "05call.c"
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            # 844 "05call.c"
            # 838 "05call.c"
            if(_if_conditional288=list$1CVALUEphp_operator_load_element(come_params_205,i_224)==((void*)0),            _if_conditional288) {
                # 839 "05call.c"
                break;
            }
            else {
                # 842 "05call.c"
                i_224++;
            }
        }
        # 892 "05call.c"
        # 846 "05call.c"
        if(_if_conditional289=list$1tuple2$2charphsNodephph_length(params_144)<list$1sTypeph_length(fun_192->mParamTypes),        _if_conditional289) {
            # 890 "05call.c"
            for(            ;            i_224<list$1sTypeph_length(fun_192->mParamTypes);            i_224++            ){
                # 849 "05call.c"
                default_param_237=(char*)come_increment_ref_count(((char*)(right_value268=string_clone(list$1charphp_operator_load_element(fun_192->mParamDefaultParametors,i_224)))));
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 850 "05call.c"
                param_name_238=((char*)come_null_check(list$1charphp_operator_load_element(fun_192->mParamNames,i_224), "05call.c", 850, 13));
                # 889 "05call.c"
                # 852 "05call.c"
                if(_if_conditional292=default_param_237&&string_operator_not_equals(default_param_237,"")&&list$1CVALUEphp_operator_load_element(come_params_205,i_224)==((void*)0),                _if_conditional292) {
                    # 853 "05call.c"
                    source_239=(struct buffer*)come_increment_ref_count(info->source);
                    # 854 "05call.c"
                    p_240=info->p;
                    # 855 "05call.c"
                    head_241=info->head;
                    # 856 "05call.c"
                    sline_242=info->sline;
                    # 858 "05call.c"
                    __dec_obj104=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=string_to_buffer(default_param_237))));
                    come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 859 "05call.c"
                    info->p=info->source->buf;
                    # 860 "05call.c"
                    info->head=info->source->buf;
                    # 862 "05call.c"
                    node_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
                    if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 868 "05call.c"
                    # 864 "05call.c"
                    if(_if_conditional293=!node_compile(node_243,info),                    _if_conditional293) {
                        # 865 "05call.c"
                        __result180__ = (_Bool)0;
                        come_call_finalizer3(source_239,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_243) { node_243 = come_decrement_ref_count2(node_243, ((struct sNode*)node_243)->finalize, ((struct sNode*)node_243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_237 = come_decrement_ref_count2(default_param_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result180__;
                    }
                    # 868 "05call.c"
                    __dec_obj105=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_239);
                    come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    # 869 "05call.c"
                    info->p=p_240;
                    # 870 "05call.c"
                    info->head=head_241;
                    # 871 "05call.c"
                    info->sline=sline_242;
                    # 873 "05call.c"
                    come_value_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 877 "05call.c"
                    # 874 "05call.c"
                    if(_if_conditional294=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 874, 14)),                    _if_conditional294) {
                        # 875 "05call.c"
                        check_assign_type(((char*)(right_value274=xsprintf("\%s param num \%s is assinged to",((char*)(right_value272=string_to_string(fun_name_143))),((char*)(right_value273=int_to_string(i_224)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 875, 15)),come_value_244->type,come_value_244,(_Bool)0,(_Bool)1,info);
                        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 880 "05call.c"
                    # 877 "05call.c"
                    if(_if_conditional295=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 877, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 877, 17))->mHeap&&come_value_244->type->mHeap,                    _if_conditional295) {
                        # 878 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_194,i_224), "05call.c", 878, 18)),come_value_244->type,come_value_244,info);
                    }
                    # 880 "05call.c"
                    list$1CVALUEph_replace(come_params_205,i_224,(struct CVALUE*)come_increment_ref_count(come_value_244));
                    # 881 "05call.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_239,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_243) { node_243 = come_decrement_ref_count2(node_243, ((struct sNode*)node_243)->finalize, ((struct sNode*)node_243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 888 "05call.c"
                    # 884 "05call.c"
                    if(_if_conditional296=list$1CVALUEphp_operator_load_element(come_params_205,i_224)==((void*)0),                    _if_conditional296) {
                        # 885 "05call.c"
                        err_msg(info,"require parametor(%s) %d",fun_192->mName,i_224);
                        # 886 "05call.c"
                        __result181__ = (_Bool)0;
                        default_param_237 = come_decrement_ref_count2(default_param_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result181__;
                    }
                }
                default_param_237 = come_decrement_ref_count2(default_param_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 898 "05call.c"
        # 892 "05call.c"
        if(_if_conditional297=list$1sTypeph_length(fun_192->mParamTypes)!=list$1CVALUEph_length(come_params_205)&&!fun_192->mVarArgs&&string_operator_not_equals(fun_name_143,"__builtin_va_start")&&string_operator_not_equals(fun_name_143,"__builtin_va_end"),        _if_conditional297) {
            # 894 "05call.c"
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_143,list$1sTypeph_length(fun_192->mParamTypes),list$1tuple2$2charphsNodephph_length(params_144));
            # 895 "05call.c"
            __result182__ = (_Bool)0;
            come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result182__;
        }
        # 898 "05call.c"
        buf_245=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 898, "buffer"))))))));
        come_call_finalizer3(right_value275,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value276,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 900 "05call.c"
        buffer_append_str(buf_245,fun_name_143);
        # 901 "05call.c"
        buffer_append_str(buf_245,"(");
        # 903 "05call.c"
        j_246=0;
        # 913 "05call.c"
        for(        o2_saved_247=(struct list$1CVALUEph*)come_increment_ref_count((come_params_205)),it_248=list$1CVALUEph_begin((o2_saved_247));        !list$1CVALUEph_end((o2_saved_247));        it_248=list$1CVALUEph_next((o2_saved_247))        ){
            # 905 "05call.c"
            buffer_append_str(buf_245,it_248->c_value);
            # 911 "05call.c"
            # 907 "05call.c"
            if(_if_conditional298=j_246!=list$1CVALUEph_length(come_params_205)-1,            _if_conditional298) {
                # 908 "05call.c"
                buffer_append_str(buf_245,",");
            }
            # 911 "05call.c"
            j_246++;
        }
        come_call_finalizer3(o2_saved_247,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 913 "05call.c"
        buffer_append_str(buf_245,")");
        # 915 "05call.c"
        come_value_249=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 915, "CVALUE"))));
        come_call_finalizer3(right_value277,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 916 "05call.c"
        __dec_obj106=come_value_249->c_value;
        come_value_249->c_value=(char*)come_increment_ref_count(((char*)(right_value278=buffer_to_string(buf_245))));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 917 "05call.c"
        __dec_obj107=come_value_249->type;
        come_value_249->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(result_type_193))));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 918 "05call.c"
        come_value_249->type->mStatic=(_Bool)0;
        # 919 "05call.c"
        come_value_249->var=((void*)0);
        # 925 "05call.c"
        # 921 "05call.c"
        if(fun_192->mResultType->mHeap) {
            # 922 "05call.c"
            __dec_obj108=come_value_249->c_value;
            come_value_249->c_value=(char*)come_increment_ref_count(((char*)(right_value280=append_object_to_right_values(come_value_249->c_value,(struct sType*)come_increment_ref_count(result_type_193),info))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 932 "05call.c"
        # 925 "05call.c"
        if(_if_conditional300=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional300) {
            # 930 "05call.c"
            # 927 "05call.c"
            if(_if_conditional301=string_operator_not_equals(fun_name_143,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_143,"null_check")&&string_operator_not_equals(fun_name_143,"come_push_stackframe")&&string_operator_not_equals(fun_name_143,"come_pop_stackframe"),            _if_conditional301) {
                # 928 "05call.c"
                __dec_obj109=come_value_249->c_value;
                come_value_249->c_value=(char*)come_increment_ref_count(((char*)(right_value281=append_stackframe(come_value_249->c_value,come_value_249->type,info))));
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        # 936 "05call.c"
        # 932 "05call.c"
        if(_if_conditional302=!self->guard_break&&result_type_193->mGuardValue&&result_type_193->mPointerNum>0,        _if_conditional302) {
            # 933 "05call.c"
            __dec_obj110=come_value_249->c_value;
            come_value_249->c_value=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value282=make_type_name_string(result_type_193,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_249->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 936 "05call.c"
        add_come_last_code(info,"%s;\n",come_value_249->c_value);
        # 938 "05call.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
        come_call_finalizer3(result_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_194,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_245,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 941 "05call.c"
    __result183__ = (_Bool)1;
    fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result183__;
    fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional196;
struct list$1tuple2$2charphsNodephph* __result117__;
void* right_value195;
void* right_value196;
struct list$1tuple2$2charphsNodephph* result_135;
struct list_item$1tuple2$2charphsNodephph* it_136;
_Bool _while_condtional20;
void* right_value203;
struct list$1tuple2$2charphsNodephph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&result_135, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_136, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value203 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional196=self==((void*)0),        _if_conditional196) {
            # 131 "./neo-c.h"
            __result117__ = __result_obj__ = ((void*)0);
            return __result117__;
        }
        # 133 "./neo-c.h"
        result_135=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value196=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value195=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value195,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value196,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_136=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional20=it_136!=((void*)0),        _while_condtional20) {
            # 137 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_135,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value203=tuple2$2charphsNodephp_clone(it_136->item)))));
            come_call_finalizer3(right_value203,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_136=it_136->next;
        }
        # 142 "./neo-c.h"
        __result122__ = __result_obj__ = result_135;
        come_call_finalizer3(result_135,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer3(result_135,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result118__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_133;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsNodephph* prev_it_134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_133, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_134, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 114 "./neo-c.h"
                it_133=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional19=it_133!=((void*)0),                _while_condtional19) {
                    # 116 "./neo-c.h"
                    prev_it_134=it_133;
                    # 117 "./neo-c.h"
                    it_133=it_133->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_134,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional197=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional197) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional200;
void* right_value197;
struct list_item$1tuple2$2charphsNodephph* litem_137;
struct tuple2$2charphsNodeph* __dec_obj74;
_Bool _if_conditional203;
void* right_value198;
struct list_item$1tuple2$2charphsNodephph* litem_138;
struct tuple2$2charphsNodeph* __dec_obj75;
void* right_value199;
struct list_item$1tuple2$2charphsNodephph* litem_139;
struct tuple2$2charphsNodeph* __dec_obj76;
struct list$1tuple2$2charphsNodephph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value198 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value199 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional200=self->len==0,                _if_conditional200) {
                    # 147 "./neo-c.h"
                    litem_137=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value197=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value197,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_137->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_137->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj74=litem_137->item;
                    litem_137->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj74,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_137;
                    # 154 "./neo-c.h"
                    self->head=litem_137;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional203=self->len==1,                    _if_conditional203) {
                        # 157 "./neo-c.h"
                        litem_138=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value198=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value198,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_138->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_138->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj75=litem_138->item;
                        litem_138->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj75,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_138;
                        # 164 "./neo-c.h"
                        self->head->next=litem_138;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_139=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value199=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value199,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_139->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_139->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj76=litem_139->item;
                        litem_139->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj76,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_139;
                        # 174 "./neo-c.h"
                        self->tail=litem_139;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result119__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result119__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsNodephp_finalize"
                            # 0 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional206=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional206) {
                                # 0 "tuple2$2charphsNodephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsNodephp_finalize"
                            # 1 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional207=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional207) {
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional208;
struct tuple2$2charphsNodeph* __result120__;
void* right_value200;
struct tuple2$2charphsNodeph* result_140;
_Bool _if_conditional211;
void* right_value201;
char* __dec_obj77;
_Bool _if_conditional212;
void* right_value202;
struct sNode* __dec_obj78;
struct tuple2$2charphsNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_140, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value201 = (void*)0;
right_value202 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional208=self==(void*)0,                _if_conditional208) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result120__ = __result_obj__ = (void*)0;
                    return __result120__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_140=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value200=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value200,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional211=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional211) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj77=result_140->v1;
                    result_140->v1=(char*)come_increment_ref_count(((char*)(right_value201=string_clone(self->v1))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional212=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional212) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj78=result_140->v2;
                    result_140->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value202=sNode_clone(self->v2))));
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result121__ = __result_obj__ = result_140;
                come_call_finalizer3(result_140,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result121__;
                come_call_finalizer3(result_140,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsNodeph_finalize"
                    # 0 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional209=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional209) {
                        # 0 "tuple2$2charphsNodeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsNodeph_finalize"
                    # 1 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional210=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional210) {
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_141;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_141, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_142, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        # 114 "./neo-c.h"
        it_141=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional21=it_141!=((void*)0),        _while_condtional21) {
            # 116 "./neo-c.h"
            prev_it_142=it_141;
            # 117 "./neo-c.h"
            it_141=it_141->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_142,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result126__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_148;
_Bool _while_condtional22;
struct list_item$1CVALUEph* prev_it_149;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_148, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_149, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "./neo-c.h"
                it_148=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional22=it_148!=((void*)0),                _while_condtional22) {
                    # 116 "./neo-c.h"
                    prev_it_149=it_148;
                    # 117 "./neo-c.h"
                    it_148=it_148->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_149,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional219;
int __result127__;
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional219=self==((void*)0),            _if_conditional219) {
                # 352 "./neo-c.h"
                __result127__ = 0;
                return __result127__;
            }
            # 354 "./neo-c.h"
            __result128__ = self->len;
            return __result128__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional221;
struct tuple2$2charphsNodeph* result_153;
struct tuple2$2charphsNodeph* __result130__;
_Bool _if_conditional222;
struct tuple2$2charphsNodeph* __result131__;
struct tuple2$2charphsNodeph* result_154;
struct tuple2$2charphsNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_154, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional221=self==((void*)0),            _if_conditional221) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_153,0,sizeof(struct tuple2$2charphsNodeph*));
                # 279 "./neo-c.h"
                __result130__ = __result_obj__ = result_153;
                return __result130__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result131__ = __result_obj__ = self->it->item;
                return __result131__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_154,0,sizeof(struct tuple2$2charphsNodeph*));
            # 289 "./neo-c.h"
            __result132__ = __result_obj__ = result_154;
            return __result132__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result133__ = self==((void*)0)||self->it==((void*)0);
            return __result133__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* result_156;
struct tuple2$2charphsNodeph* __result134__;
_Bool _if_conditional224;
struct tuple2$2charphsNodeph* __result135__;
struct tuple2$2charphsNodeph* result_157;
struct tuple2$2charphsNodeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_157, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional223=self==((void*)0)||self->it==((void*)0),            _if_conditional223) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_156,0,sizeof(struct tuple2$2charphsNodeph*));
                # 296 "./neo-c.h"
                __result134__ = __result_obj__ = result_156;
                return __result134__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result135__ = __result_obj__ = self->it->item;
                return __result135__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_157,0,sizeof(struct tuple2$2charphsNodeph*));
            # 307 "./neo-c.h"
            __result136__ = __result_obj__ = result_157;
            return __result136__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct CVALUE* result_164;
struct CVALUE* __result138__;
_Bool _if_conditional229;
struct CVALUE* __result139__;
struct CVALUE* result_165;
struct CVALUE* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct CVALUE*));
memset(&result_165, 0, sizeof(struct CVALUE*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional228=self==((void*)0),            _if_conditional228) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_164,0,sizeof(struct CVALUE*));
                # 279 "./neo-c.h"
                __result138__ = __result_obj__ = result_164;
                return __result138__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result139__ = __result_obj__ = self->it->item;
                return __result139__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_165,0,sizeof(struct CVALUE*));
            # 289 "./neo-c.h"
            __result140__ = __result_obj__ = result_165;
            return __result140__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result141__ = self==((void*)0)||self->it==((void*)0);
            return __result141__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct CVALUE* result_167;
struct CVALUE* __result142__;
_Bool _if_conditional231;
struct CVALUE* __result143__;
struct CVALUE* result_168;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct CVALUE*));
memset(&result_168, 0, sizeof(struct CVALUE*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional230=self==((void*)0)||self->it==((void*)0),            _if_conditional230) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_167,0,sizeof(struct CVALUE*));
                # 296 "./neo-c.h"
                __result142__ = __result_obj__ = result_167;
                return __result142__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result143__ = __result_obj__ = self->it->item;
                return __result143__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_168,0,sizeof(struct CVALUE*));
            # 307 "./neo-c.h"
            __result144__ = __result_obj__ = result_168;
            return __result144__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional232;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional232=self==((void*)0),                _if_conditional232) {
                    # 352 "./neo-c.h"
                    __result145__ = 0;
                    return __result145__;
                }
                # 354 "./neo-c.h"
                __result146__ = self->len;
                return __result146__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_190;
unsigned int it_191;
_Bool _while_condtional25;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sFun* __result150__;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sFun* __result151__;
struct sFun* __result152__;
struct sFun* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_190, 0, sizeof(unsigned int));
memset(&it_191, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_190=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_191=hash_190;
            # 1226 "./neo-c.h"
            while(_while_condtional25=(_Bool)1,            _while_condtional25) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional252=self->item_existance[it_191],                _if_conditional252) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional253=string_equals(self->keys[it_191],key),                    _if_conditional253) {
                        # 1209 "./neo-c.h"
                        __result150__ = __result_obj__ = self->items[it_191];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result150__;
                    }
                    # 1212 "./neo-c.h"
                    it_191++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional254=it_191>=self->size,                    _if_conditional254) {
                        # 1215 "./neo-c.h"
                        it_191=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional255=it_191==hash_190,                        _if_conditional255) {
                            # 1218 "./neo-c.h"
                            __result151__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result151__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result152__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result152__;
                }
            }
            # 1226 "./neo-c.h"
            __result153__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result153__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional257;
struct sType* result_196;
struct sType* __result155__;
_Bool _if_conditional258;
struct sType* __result156__;
struct sType* result_197;
struct sType* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(struct sType*));
memset(&result_197, 0, sizeof(struct sType*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional257=self==((void*)0),            _if_conditional257) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_196,0,sizeof(struct sType*));
                # 279 "./neo-c.h"
                __result155__ = __result_obj__ = result_196;
                return __result155__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result156__ = __result_obj__ = self->it->item;
                return __result156__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_197,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result157__ = __result_obj__ = result_197;
            return __result157__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result158__ = self==((void*)0)||self->it==((void*)0);
            return __result158__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional259;
struct sType* result_199;
struct sType* __result159__;
_Bool _if_conditional260;
struct sType* __result160__;
struct sType* result_200;
struct sType* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_199, 0, sizeof(struct sType*));
memset(&result_200, 0, sizeof(struct sType*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional259=self==((void*)0)||self->it==((void*)0),            _if_conditional259) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_199,0,sizeof(struct sType*));
                # 296 "./neo-c.h"
                __result159__ = __result_obj__ = result_199;
                return __result159__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result160__ = __result_obj__ = self->it->item;
                return __result160__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_200,0,sizeof(struct sType*));
            # 307 "./neo-c.h"
            __result161__ = __result_obj__ = result_200;
            return __result161__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional261;
void* right_value249;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj96;
_Bool _if_conditional262;
void* right_value250;
struct list_item$1sTypeph* litem_203;
struct sType* __dec_obj97;
void* right_value251;
struct list_item$1sTypeph* litem_204;
struct sType* __dec_obj98;
struct list$1sTypeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
right_value250 = (void*)0;
memset(&litem_203, 0, sizeof(struct list_item$1sTypeph*));
right_value251 = (void*)0;
memset(&litem_204, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional261=self->len==0,                _if_conditional261) {
                    # 217 "./neo-c.h"
                    litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value249=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value249,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_202->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_202->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj96=litem_202->item;
                    litem_202->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_202;
                    # 224 "./neo-c.h"
                    self->head=litem_202;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional262=self->len==1,                    _if_conditional262) {
                        # 227 "./neo-c.h"
                        litem_203=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value250=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value250,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_203->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_203->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj97=litem_203->item;
                        litem_203->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_203;
                        # 234 "./neo-c.h"
                        self->head->next=litem_203;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_204=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value251=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value251,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_204->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_204->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj98=litem_204->item;
                        litem_204->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_204;
                        # 244 "./neo-c.h"
                        self->tail=litem_204;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result162__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result162__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional263;
void* right_value256;
struct list_item$1CVALUEph* litem_207;
struct CVALUE* __dec_obj100;
_Bool _if_conditional264;
void* right_value257;
struct list_item$1CVALUEph* litem_208;
struct CVALUE* __dec_obj101;
void* right_value258;
struct list_item$1CVALUEph* litem_209;
struct CVALUE* __dec_obj102;
struct list$1CVALUEph* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1CVALUEph*));
right_value257 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1CVALUEph*));
right_value258 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1CVALUEph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional263=self->len==0,                _if_conditional263) {
                    # 147 "./neo-c.h"
                    litem_207=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value256=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 147, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value256,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_207->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_207->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj100=litem_207->item;
                    litem_207->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_207;
                    # 154 "./neo-c.h"
                    self->head=litem_207;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional264=self->len==1,                    _if_conditional264) {
                        # 157 "./neo-c.h"
                        litem_208=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value257=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 157, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value257,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_208->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_208->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj101=litem_208->item;
                        litem_208->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_208;
                        # 164 "./neo-c.h"
                        self->head->next=litem_208;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_209=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value258=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 167, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value258,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_209->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_209->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj102=litem_209->item;
                        litem_209->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_209;
                        # 174 "./neo-c.h"
                        self->tail=litem_209;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result163__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result163__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional268;
char* result_217;
char* __result165__;
_Bool _if_conditional269;
char* __result166__;
char* result_218;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(char*));
memset(&result_218, 0, sizeof(char*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional268=self==((void*)0),                        _if_conditional268) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_217,0,sizeof(char*));
                            # 279 "./neo-c.h"
                            __result165__ = __result_obj__ = result_217;
                            return __result165__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result166__ = __result_obj__ = self->it->item;
                            return __result166__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_218,0,sizeof(char*));
                        # 289 "./neo-c.h"
                        __result167__ = __result_obj__ = result_218;
                        return __result167__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result168__ = self==((void*)0)||self->it==((void*)0);
                        return __result168__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional270;
char* result_220;
char* __result169__;
_Bool _if_conditional271;
char* __result170__;
char* result_221;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(char*));
memset(&result_221, 0, sizeof(char*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional270=self==((void*)0)||self->it==((void*)0),                        _if_conditional270) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_220,0,sizeof(char*));
                            # 296 "./neo-c.h"
                            __result169__ = __result_obj__ = result_220;
                            return __result169__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result170__ = __result_obj__ = self->it->item;
                            return __result170__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_221,0,sizeof(char*));
                        # 307 "./neo-c.h"
                        __result171__ = __result_obj__ = result_221;
                        return __result171__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct list$1CVALUEph* __result172__;
struct list_item$1CVALUEph* it_222;
int i_223;
_Bool _while_condtional26;
_Bool _if_conditional277;
struct CVALUE* __dec_obj103;
struct list$1CVALUEph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_222, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_223, 0, sizeof(int));
                        # 579 "./neo-c.h"
                        # 575 "./neo-c.h"
                        if(_if_conditional275=position<0,                        _if_conditional275) {
                            # 576 "./neo-c.h"
                            position+=self->len;
                        }
                        # 584 "./neo-c.h"
                        # 579 "./neo-c.h"
                        if(_if_conditional276=position>=self->len,                        _if_conditional276) {
                            # 580 "./neo-c.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 581 "./neo-c.h"
                            __result172__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result172__;
                        }
                        # 584 "./neo-c.h"
                        it_222=self->head;
                        # 585 "./neo-c.h"
                        i_223=0;
                        # 595 "./neo-c.h"
                        while(_while_condtional26=it_222!=((void*)0),                        _while_condtional26) {
                            # 591 "./neo-c.h"
                            # 587 "./neo-c.h"
                            if(_if_conditional277=position==i_223,                            _if_conditional277) {
                                # 588 "./neo-c.h"
                                __dec_obj103=it_222->item;
                                it_222->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                # 589 "./neo-c.h"
                                break;
                            }
                            # 591 "./neo-c.h"
                            it_222=it_222->next;
                            # 592 "./neo-c.h"
                            i_223++;
                        }
                        # 595 "./neo-c.h"
                        __result173__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result173__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional280;
struct list_item$1CVALUEph* it_230;
int i_231;
_Bool _while_condtional28;
_Bool _if_conditional281;
struct CVALUE* __result175__;
struct CVALUE* default_value_232;
struct CVALUE* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_230, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_231, 0, sizeof(int));
memset(&default_value_232, 0, sizeof(struct CVALUE*));
                        # 673 "./neo-c.h"
                        # 669 "./neo-c.h"
                        if(_if_conditional280=position<0,                        _if_conditional280) {
                            # 670 "./neo-c.h"
                            position+=self->len;
                        }
                        # 673 "./neo-c.h"
                        it_230=self->head;
                        # 674 "./neo-c.h"
                        i_231=0;
                        # 681 "./neo-c.h"
                        while(_while_condtional28=it_230!=((void*)0),                        _while_condtional28) {
                            # 679 "./neo-c.h"
                            # 676 "./neo-c.h"
                            if(_if_conditional281=position==i_231,                            _if_conditional281) {
                                # 677 "./neo-c.h"
                                __result175__ = __result_obj__ = it_230->item;
                                return __result175__;
                            }
                            # 679 "./neo-c.h"
                            it_230=it_230->next;
                            # 680 "./neo-c.h"
                            i_231++;
                        }
                        # 683 "./neo-c.h"
                        # 684 "./neo-c.h"
                        memset(&default_value_232,0,sizeof(struct CVALUE*));
                        # 685 "./neo-c.h"
                        __result176__ = __result_obj__ = default_value_232;
                        come_call_finalizer3(default_value_232,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result176__;
                        come_call_finalizer3(default_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional290;
struct list_item$1charph* it_234;
int i_235;
_Bool _while_condtional31;
_Bool _if_conditional291;
char* __result178__;
char* default_value_236;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_234, 0, sizeof(struct list_item$1charph*));
memset(&i_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(char*));
                    # 673 "./neo-c.h"
                    # 669 "./neo-c.h"
                    if(_if_conditional290=position<0,                    _if_conditional290) {
                        # 670 "./neo-c.h"
                        position+=self->len;
                    }
                    # 673 "./neo-c.h"
                    it_234=self->head;
                    # 674 "./neo-c.h"
                    i_235=0;
                    # 681 "./neo-c.h"
                    while(_while_condtional31=it_234!=((void*)0),                    _while_condtional31) {
                        # 679 "./neo-c.h"
                        # 676 "./neo-c.h"
                        if(_if_conditional291=position==i_235,                        _if_conditional291) {
                            # 677 "./neo-c.h"
                            __result178__ = __result_obj__ = it_234->item;
                            return __result178__;
                        }
                        # 679 "./neo-c.h"
                        it_234=it_234->next;
                        # 680 "./neo-c.h"
                        i_235++;
                    }
                    # 683 "./neo-c.h"
                    # 684 "./neo-c.h"
                    memset(&default_value_236,0,sizeof(char*));
                    # 685 "./neo-c.h"
                    __result179__ = __result_obj__ = default_value_236;
                    default_value_236 = come_decrement_ref_count2(default_value_236, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result179__;
                    default_value_236 = come_decrement_ref_count2(default_value_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value284;
void* right_value285;
struct list$1sTypeph* method_generics_types_250;
_Bool _if_conditional303;
_Bool _while_condtional32;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value286;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_251;
char* name_252;
_Bool err_253;
_Bool _if_conditional309;
void* right_value287;
void* right_value288;
void* right_value289;
struct list$1tuple2$2charphsNodephph* params_254;
_Bool _while_condtional33;
_Bool _if_conditional310;
char* p_255;
int sline_256;
_Bool err_flag_257;
void* right_value290;
char* label_258;
_Bool _if_conditional311;
void* right_value291;
char* __dec_obj111;
_Bool _if_conditional312;
char* __dec_obj112;
_Bool no_comma_259;
void* right_value292;
struct sNode* node_260;
void* right_value293;
struct sNode* __dec_obj113;
void* right_value297;
void* right_value298;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool guard_break_264;
_Bool _if_conditional317;
void* right_value299;
void* right_value300;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value306;
struct sNode* node_266;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&method_generics_types_250, 0, sizeof(struct list$1sTypeph*));
right_value286 = (void*)0;
memset(&type_251, 0, sizeof(struct sType*));
memset(&name_252, 0, sizeof(char*));
memset(&err_253, 0, sizeof(_Bool));
memset(&type_251, 0, sizeof(struct sType*));
memset(&name_252, 0, sizeof(char*));
memset(&err_253, 0, sizeof(_Bool));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&params_254, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_255, 0, sizeof(char*));
memset(&sline_256, 0, sizeof(int));
memset(&err_flag_257, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&label_258, 0, sizeof(char*));
right_value291 = (void*)0;
memset(&no_comma_259, 0, sizeof(_Bool));
right_value292 = (void*)0;
memset(&node_260, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&guard_break_264, 0, sizeof(_Bool));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value306 = (void*)0;
memset(&node_266, 0, sizeof(struct sNode*));
    # 949 "05call.c"
    method_generics_types_250=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 949, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value284,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value285,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 981 "05call.c"
    # 951 "05call.c"
    if(_if_conditional303=*info->p==60,    _if_conditional303) {
        # 952 "05call.c"
        info->p++;
        # 953 "05call.c"
        skip_spaces_and_lf(info);
        # 980 "05call.c"
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            # 979 "05call.c"
            # 956 "05call.c"
            if(_if_conditional304=*info->p==0,            _if_conditional304) {
                # 957 "05call.c"
                err_msg(info,"unexpected source end");
                # 958 "05call.c"
                exit(2);
            }
            else {
                # 979 "05call.c"
                # 960 "05call.c"
                if(_if_conditional305=*info->p==62,                _if_conditional305) {
                    # 961 "05call.c"
                    info->p++;
                    # 962 "05call.c"
                    skip_spaces_and_lf(info);
                    # 963 "05call.c"
                    break;
                }
                else {
                    # 979 "05call.c"
                    # 965 "05call.c"
                    if(_if_conditional306=*info->p==44,                    _if_conditional306) {
                        # 966 "05call.c"
                        info->p++;
                        # 967 "05call.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 970 "05call.c"
                        multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value286=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_251=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                        name_252=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        err_253=multiple_assign_var9->v3;
                        come_call_finalizer3(right_value286,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 977 "05call.c"
                        # 972 "05call.c"
                        if(_if_conditional309=!err_253,                        _if_conditional309) {
                            # 973 "05call.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 974 "05call.c"
                            exit(2);
                        }
                        # 977 "05call.c"
                        list$1sTypeph_push_back(method_generics_types_250,(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(type_251)))));
                        come_call_finalizer3(right_value287,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 981 "05call.c"
    expected_next_character(40,info);
    # 983 "05call.c"
    parse_sharp_v5(info);
    # 985 "05call.c"
    params_254=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value289=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value288=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 985, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value288,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value289,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1040 "05call.c"
    while(_while_condtional33=(_Bool)1,    _while_condtional33) {
        # 994 "05call.c"
        # 988 "05call.c"
        if(_if_conditional310=*info->p==41,        _if_conditional310) {
            # 989 "05call.c"
            info->p++;
            # 990 "05call.c"
            skip_spaces_and_lf(info);
            # 991 "05call.c"
            break;
        }
        # 994 "05call.c"
        p_255=info->p;
        # 995 "05call.c"
        sline_256=info->sline;
        # 997 "05call.c"
        err_flag_257=(_Bool)0;
        # 998 "05call.c"
        label_258=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(""))));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1004 "05call.c"
        # 999 "05call.c"
        if(_if_conditional311=xisalpha(*info->p)||*info->p==95,        _if_conditional311) {
            # 1000 "05call.c"
            __dec_obj111=label_258;
            label_258=(char*)come_increment_ref_count(((char*)(right_value291=parse_word(info))));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1001 "05call.c"
            err_flag_257=(_Bool)1;
        }
        # 1015 "05call.c"
        # 1004 "05call.c"
        if(_if_conditional312=err_flag_257==(_Bool)1&&*info->p==58,        _if_conditional312) {
            # 1005 "05call.c"
            info->p++;
            # 1006 "05call.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 1009 "05call.c"
            __dec_obj112=label_258;
            label_258=((void*)0);
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1011 "05call.c"
            info->p=p_255;
            # 1012 "05call.c"
            info->sline=sline_256;
        }
        # 1015 "05call.c"
        no_comma_259=info->no_comma;
        # 1016 "05call.c"
        info->no_comma=(_Bool)1;
        # 1018 "05call.c"
        node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=expression_v13(info))));
        if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1020 "05call.c"
        __dec_obj113=node_260;
        node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_260),info))));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1022 "05call.c"
        info->no_comma=no_comma_259;
        # 1024 "05call.c"
        list$1tuple2$2charphsNodephph_push_back(params_254,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value298=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value297=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1024, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_258),(struct sNode*)come_increment_ref_count(node_260))))));
        come_call_finalizer3(right_value297,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value298,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1026 "05call.c"
        parse_sharp_v5(info);
        # 1038 "05call.c"
        # 1028 "05call.c"
        if(_if_conditional315=*info->p==44,        _if_conditional315) {
            # 1029 "05call.c"
            info->p++;
            # 1030 "05call.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 1038 "05call.c"
            # 1032 "05call.c"
            if(_if_conditional316=*info->p==41,            _if_conditional316) {
                # 1033 "05call.c"
                info->p++;
                # 1034 "05call.c"
                skip_spaces_and_lf(info);
                # 1036 "05call.c"
                label_258 = come_decrement_ref_count2(label_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_258 = come_decrement_ref_count2(label_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1040 "05call.c"
    guard_break_264=(_Bool)0;
    # 1047 "05call.c"
    # 1041 "05call.c"
    if(_if_conditional317=*info->p==63&&*(info->p+1)==63,    _if_conditional317) {
        # 1042 "05call.c"
        info->p+=2;
        # 1043 "05call.c"
        skip_spaces_and_lf(info);
        # 1044 "05call.c"
        guard_break_264=(_Bool)1;
    }
    # 1047 "05call.c"
    parse_sharp_v5(info);
    # 1049 "05call.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1049, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value300=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value299=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1049, "sFunCallNode")))),fun_name,params_254,guard_break_264,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_250),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=_inf_value1)));
    come_call_finalizer3(right_value299,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value300,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1051 "05call.c"
    __result188__ = __result_obj__ = node_266;
    come_call_finalizer3(method_generics_types_250,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_254,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    come_call_finalizer3(method_generics_types_250,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_254,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional307;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional307=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional307) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional308=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional308) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional313;
void* right_value294;
struct list_item$1tuple2$2charphsNodephph* litem_261;
struct tuple2$2charphsNodeph* __dec_obj114;
_Bool _if_conditional314;
void* right_value295;
struct list_item$1tuple2$2charphsNodephph* litem_262;
struct tuple2$2charphsNodeph* __dec_obj115;
void* right_value296;
struct list_item$1tuple2$2charphsNodephph* litem_263;
struct tuple2$2charphsNodeph* __dec_obj116;
struct list$1tuple2$2charphsNodephph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
memset(&litem_261, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value295 = (void*)0;
memset(&litem_262, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value296 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional313=self->len==0,            _if_conditional313) {
                # 217 "./neo-c.h"
                litem_261=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value294=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(right_value294,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_261->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_261->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj114=litem_261->item;
                litem_261->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj114,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_261;
                # 224 "./neo-c.h"
                self->head=litem_261;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional314=self->len==1,                _if_conditional314) {
                    # 227 "./neo-c.h"
                    litem_262=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value295=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value295,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_262->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_262->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj115=litem_262->item;
                    litem_262->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj115,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_262;
                    # 234 "./neo-c.h"
                    self->head->next=litem_262;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_263=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value296=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value296,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_263->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_263->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj116=litem_263->item;
                    litem_263->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj116,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_263;
                    # 244 "./neo-c.h"
                    self->tail=litem_263;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result184__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result184__;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj117;
struct sNode* __dec_obj118;
struct tuple2$2charphsNodeph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1738 "./neo-c.h"
            __dec_obj117=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "./neo-c.h"
            __dec_obj118=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
            # 1741 "./neo-c.h"
            __result185__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result185__;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunCallNode_finalize"
        # 0 "sFunCallNode_finalize"
        if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional318) {
            # 0 "sFunCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunCallNode_finalize"
        # 1 "sFunCallNode_finalize"
        if(_if_conditional319=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional319) {
            # 1 "sFunCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sFunCallNode_finalize"
        # 2 "sFunCallNode_finalize"
        if(_if_conditional320=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional320) {
            # 2 "sFunCallNode_finalize"
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFunCallNode_finalize"
        # 3 "sFunCallNode_finalize"
        if(_if_conditional321=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional321) {
            # 3 "sFunCallNode_finalize"
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sFunCallNode* __result186__;
void* right_value301;
struct sFunCallNode* result_265;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value302;
char* __dec_obj119;
_Bool _if_conditional325;
void* right_value303;
char* __dec_obj120;
_Bool _if_conditional326;
void* right_value304;
struct list$1tuple2$2charphsNodephph* __dec_obj121;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value305;
struct list$1sTypeph* __dec_obj122;
struct sFunCallNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&result_265, 0, sizeof(struct sFunCallNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
        # 3 "sFunCallNode_clone"
        # 2 "sFunCallNode_clone"
        if(_if_conditional322=self==(void*)0,        _if_conditional322) {
            # 2 "sFunCallNode_clone"
            __result186__ = __result_obj__ = (void*)0;
            return __result186__;
        }
        # 3 "sFunCallNode_clone"
        result_265=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value301=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer3(right_value301,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sFunCallNode_clone"
        # 4 "sFunCallNode_clone"
        if(_if_conditional323=self!=((void*)0),        _if_conditional323) {
            # 4 "sFunCallNode_clone"
            result_265->sline=self->sline;
        }
        # 6 "sFunCallNode_clone"
        # 5 "sFunCallNode_clone"
        if(_if_conditional324=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional324) {
            # 5 "sFunCallNode_clone"
            __dec_obj119=result_265->sname;
            result_265->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(self->sname))));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sFunCallNode_clone"
        # 6 "sFunCallNode_clone"
        if(_if_conditional325=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional325) {
            # 6 "sFunCallNode_clone"
            __dec_obj120=result_265->fun_name;
            result_265->fun_name=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->fun_name))));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 8 "sFunCallNode_clone"
        # 7 "sFunCallNode_clone"
        if(_if_conditional326=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional326) {
            # 7 "sFunCallNode_clone"
            __dec_obj121=result_265->params;
            result_265->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value304=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj121,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value304,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sFunCallNode_clone"
        # 8 "sFunCallNode_clone"
        if(_if_conditional327=self!=((void*)0),        _if_conditional327) {
            # 8 "sFunCallNode_clone"
            result_265->guard_break=self->guard_break;
        }
        # 10 "sFunCallNode_clone"
        # 9 "sFunCallNode_clone"
        if(_if_conditional328=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional328) {
            # 9 "sFunCallNode_clone"
            __dec_obj122=result_265->method_generics_types;
            result_265->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value305=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj122,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value305,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 10 "sFunCallNode_clone"
        __result187__ = __result_obj__ = result_265;
        come_call_finalizer3(result_265,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result187__;
        come_call_finalizer3(result_265,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1056 "05call.c"
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    # 1057 "05call.c"
    exit(2);
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1062 "05call.c"
    __result189__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value307;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
    # 1072 "05call.c"
    info->no_output_err=(_Bool)1;
    # 1073 "05call.c"
    ((struct tuple3$3sTypephcharphbool*)(right_value307=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    come_call_finalizer3(right_value307,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1074 "05call.c"
    info->no_output_err=(_Bool)0;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value308;
void* right_value309;
void* right_value310;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* right_value315;
struct sNode* __result192__;
char* head_268;
void* right_value316;
struct sNode* value_269;
char* tail_270;
void* right_value317;
struct sNode* __dec_obj126;
void* right_value318;
struct sNode* __dec_obj127;
void* right_value319;
void* right_value320;
void* right_value321;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* right_value326;
struct sNode* __result195__;
_Bool _if_conditional347;
char* head_273;
int head_sline_274;
char* buf_275;
char* p_276;
int sline_277;
_Bool _if_conditional348;
void* right_value327;
char* __dec_obj131;
void* right_value328;
char* __dec_obj132;
_Bool is_type_name__278;
_Bool define_function_pointer_flag_279;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool lambda_flag_280;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value329;
char* word2_281;
_Bool _if_conditional354;
_Bool fun_name_with_type_name_282;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value330;
char* word2_283;
_Bool _while_condtional34;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool call_method_generics_fun_call_284;
_Bool _if_conditional359;
void* right_value331;
char* __dec_obj133;
_Bool _if_conditional368;
int nest_288;
_Bool _while_condtional36;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value332;
char* __dec_obj134;
_Bool _if_conditional374;
void* right_value333;
struct sNode* __result200__;
_Bool _if_conditional375;
void* right_value334;
struct sNode* node_289;
void* right_value335;
struct sNode* __dec_obj135;
void* right_value336;
struct sNode* __dec_obj136;
struct sNode* __result201__;
_Bool _if_conditional376;
void* right_value337;
void* right_value338;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* right_value343;
struct sNode* __result204__;
_Bool _if_conditional385;
void* right_value344;
void* right_value345;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* right_value350;
struct sNode* __result207__;
_Bool _if_conditional394;
void* right_value351;
void* right_value352;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* right_value357;
struct sNode* __result210__;
_Bool _if_conditional403;
void* right_value358;
void* right_value359;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* right_value364;
struct sNode* __result213__;
_Bool _if_conditional412;
void* right_value365;
void* right_value366;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* right_value371;
struct sNode* __result216__;
_Bool _if_conditional421;
void* right_value372;
void* right_value373;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* right_value378;
struct sNode* __result219__;
_Bool _if_conditional430;
void* right_value379;
struct sNode* node_296;
void* right_value380;
struct sNode* __dec_obj155;
struct sNode* __result220__;
_Bool _if_conditional431;
void* right_value381;
void* right_value382;
struct buffer* fun_name_297;
void* right_value383;
void* right_value384;
struct sType* type_301;
_Bool _if_conditional436;
void* right_value385;
struct sClass* klass_307;
_Bool _if_conditional448;
void* right_value386;
void* right_value387;
struct sType* __dec_obj156;
_Bool _while_condtional40;
_Bool _if_conditional449;
void* right_value388;
char* buf2_308;
void* right_value389;
void* right_value390;
struct sNode* node_309;
void* right_value391;
struct sNode* __dec_obj157;
void* right_value392;
struct sNode* __dec_obj158;
struct sNode* __result229__;
_Bool _if_conditional450;
void* right_value393;
void* right_value394;
struct buffer* fun_name_310;
void* right_value395;
char* buf2_311;
void* right_value396;
void* right_value397;
struct sNode* node_312;
void* right_value398;
struct sNode* __dec_obj159;
void* right_value399;
struct sNode* __dec_obj160;
struct sNode* __result230__;
_Bool _if_conditional451;
void* right_value400;
struct sNode* node_313;
void* right_value401;
struct sNode* __dec_obj161;
void* right_value402;
struct sNode* __dec_obj162;
struct sNode* __result231__;
_Bool _if_conditional452;
void* right_value403;
struct sNode* node_314;
void* right_value404;
struct sNode* __dec_obj163;
void* right_value405;
struct sNode* __dec_obj164;
struct sNode* __result232__;
void* right_value406;
struct sNode* node_315;
void* right_value407;
struct sNode* __dec_obj165;
struct sNode* __result233__;
void* right_value408;
struct sNode* node_316;
void* right_value409;
struct sNode* __dec_obj166;
struct sNode* __result234__;
struct sNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value315 = (void*)0;
memset(&head_268, 0, sizeof(char*));
right_value316 = (void*)0;
memset(&value_269, 0, sizeof(struct sNode*));
memset(&tail_270, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value326 = (void*)0;
memset(&head_273, 0, sizeof(char*));
memset(&head_sline_274, 0, sizeof(int));
memset(&buf_275, 0, sizeof(char*));
memset(&p_276, 0, sizeof(char*));
memset(&sline_277, 0, sizeof(int));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&is_type_name__278, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_279, 0, sizeof(_Bool));
memset(&lambda_flag_280, 0, sizeof(_Bool));
right_value329 = (void*)0;
memset(&word2_281, 0, sizeof(char*));
memset(&fun_name_with_type_name_282, 0, sizeof(_Bool));
right_value330 = (void*)0;
memset(&word2_283, 0, sizeof(char*));
memset(&call_method_generics_fun_call_284, 0, sizeof(_Bool));
right_value331 = (void*)0;
memset(&nest_288, 0, sizeof(int));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&node_289, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&node_296, 0, sizeof(struct sNode*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&fun_name_297, 0, sizeof(struct buffer*));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&type_301, 0, sizeof(struct sType*));
right_value385 = (void*)0;
memset(&klass_307, 0, sizeof(struct sClass*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&buf2_308, 0, sizeof(char*));
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&node_309, 0, sizeof(struct sNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&fun_name_310, 0, sizeof(struct buffer*));
right_value395 = (void*)0;
memset(&buf2_311, 0, sizeof(char*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&node_312, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&node_313, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&node_316, 0, sizeof(struct sNode*));
right_value409 = (void*)0;
    # 1079 "05call.c"
    skip_spaces_and_lf(info);
    # 1080 "05call.c"
    parse_sharp_v5(info);
    # 1378 "05call.c"
    # 1082 "05call.c"
    if(_if_conditional329=parsecmp("return",info),    _if_conditional329) {
        # 1083 "05call.c"
        info->p+=strlen("return");
        # 1084 "05call.c"
        skip_spaces_and_lf(info);
        # 1102 "05call.c"
        # 1086 "05call.c"
        if(_if_conditional330=*info->p==59,        _if_conditional330) {
            # 1087 "05call.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1087, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sReturnNode*)(right_value310=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value308=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1087, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value309=__builtin_string("0")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sReturnNode_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result192__ = __result_obj__ = ((struct sNode*)(right_value315=_inf_value2));
            come_call_finalizer3(right_value308,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value310,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result192__;
        }
        else {
            # 1090 "05call.c"
            head_268=info->p;
            # 1091 "05call.c"
            value_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=expression_v13(info))));
            if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1092 "05call.c"
            tail_270=info->p;
            # 1093 "05call.c"
            __dec_obj126=value_269;
            value_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_269),info))));
            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1094 "05call.c"
            __dec_obj127=value_269;
            value_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_269),info))));
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1096 "05call.c"
            char buf_271[tail_270-head_268+1];
            memset(&buf_271, 0, sizeof(char)            *(tail_270-head_268+1)            );
            # 1097 "05call.c"
            memcpy(buf_271,head_268,tail_270-head_268);
            # 1098 "05call.c"
            buf_271[tail_270-head_268]=0;
            # 1100 "05call.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1100, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sReturnNode*)(right_value321=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value319=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1100, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_269),(char*)come_increment_ref_count(((char*)(right_value320=__builtin_string(buf_271)))),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sReturnNode_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result195__ = __result_obj__ = ((struct sNode*)(right_value326=_inf_value3));
            if(value_269) { value_269 = come_decrement_ref_count2(value_269, ((struct sNode*)value_269)->finalize, ((struct sNode*)value_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value319,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value321,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result195__;
            if(value_269) { value_269 = come_decrement_ref_count2(value_269, ((struct sNode*)value_269)->finalize, ((struct sNode*)value_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        # 1378 "05call.c"
        # 1103 "05call.c"
        if(_if_conditional347=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),        _if_conditional347) {
            # 1104 "05call.c"
            head_273=info->p;
            # 1105 "05call.c"
            head_sline_274=info->sline;
            # 1107 "05call.c"
            # 1123 "05call.c"
            {
                # 1109 "05call.c"
                p_276=info->p;
                # 1110 "05call.c"
                sline_277=info->sline;
                # 1119 "05call.c"
                # 1112 "05call.c"
                if(_if_conditional348=xisalpha(*info->p)||*info->p==95,                _if_conditional348) {
                    # 1113 "05call.c"
                    __dec_obj131=buf_275;
                    buf_275=(char*)come_increment_ref_count(((char*)(right_value327=parse_word(info))));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1116 "05call.c"
                    __dec_obj132=buf_275;
                    buf_275=(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string(""))));
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1119 "05call.c"
                info->p=p_276;
                # 1120 "05call.c"
                info->sline=sline_277;
            }
            # 1123 "05call.c"
            is_type_name__278=is_type_name(buf_275,info);
            # 1126 "05call.c"
            define_function_pointer_flag_279=(_Bool)0;
            # 1148 "05call.c"
            # 1127 "05call.c"
            if(_if_conditional349=string_operator_not_equals(buf_275,"if")&&string_operator_not_equals(buf_275,"while")&&string_operator_not_equals(buf_275,"for")&&string_operator_not_equals(buf_275,"switch")&&string_operator_not_equals(buf_275,"return")&&string_operator_not_equals(buf_275,"sizeof")&&string_operator_not_equals(buf_275,"isheap")&&string_operator_not_equals(buf_275,"guard")&&string_operator_not_equals(buf_275,"ispointer")&&string_operator_not_equals(buf_275,"__typeof__")&&string_operator_not_equals(buf_275,"dynamic_typeof")&&string_operator_not_equals(buf_275,"typeof")&&string_operator_not_equals(buf_275,"gc_inc")&&string_operator_not_equals(buf_275,"gc_dec")&&string_operator_not_equals(buf_275,"case")&&string_operator_not_equals(buf_275,"_Alignof")&&string_operator_not_equals(buf_275,"_Alignas")&&string_operator_not_equals(buf_275,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,            _if_conditional349) {
                # 1129 "05call.c"
                backtrace_parse_type(info);
                # 1143 "05call.c"
                # 1131 "05call.c"
                if(_if_conditional350=*info->p==40,                _if_conditional350) {
                    # 1132 "05call.c"
                    info->p++;
                    # 1133 "05call.c"
                    skip_spaces_and_lf(info);
                    # 1141 "05call.c"
                    # 1135 "05call.c"
                    if(_if_conditional351=*info->p==42,                    _if_conditional351) {
                        # 1136 "05call.c"
                        info->p++;
                        # 1137 "05call.c"
                        skip_spaces_and_lf(info);
                        # 1139 "05call.c"
                        define_function_pointer_flag_279=(_Bool)1;
                    }
                }
                # 1143 "05call.c"
                info->p=head_273;
                # 1144 "05call.c"
                info->sline=head_sline_274;
            }
            # 1148 "05call.c"
            lambda_flag_280=(_Bool)0;
            # 1169 "05call.c"
            # 1149 "05call.c"
            if(_if_conditional352=string_operator_not_equals(buf_275,"if")&&string_operator_not_equals(buf_275,"while")&&string_operator_not_equals(buf_275,"for")&&string_operator_not_equals(buf_275,"switch")&&string_operator_not_equals(buf_275,"return")&&string_operator_not_equals(buf_275,"sizeof")&&string_operator_not_equals(buf_275,"_Alignof")&&string_operator_not_equals(buf_275,"__alignof__")&&string_operator_not_equals(buf_275,"_Alignas")&&string_operator_not_equals(buf_275,"isheap")&&string_operator_not_equals(buf_275,"guard")&&string_operator_not_equals(buf_275,"ispointer")&&string_operator_not_equals(buf_275,"__typeof__")&&string_operator_not_equals(buf_275,"dynamic_typeof")&&string_operator_not_equals(buf_275,"typeof")&&string_operator_not_equals(buf_275,"gc_inc")&&string_operator_not_equals(buf_275,"gc_dec")&&string_operator_not_equals(buf_275,"case")&&is_type_name__278,            _if_conditional352) {
                # 1151 "05call.c"
                info->p=head_273;
                # 1152 "05call.c"
                info->sline=head_sline_274;
                # 1154 "05call.c"
                backtrace_parse_type(info);
                # 1164 "05call.c"
                # 1156 "05call.c"
                if(_if_conditional353=xisalpha(*info->p)||*info->p==95,                _if_conditional353) {
                    # 1157 "05call.c"
                    word2_281=(char*)come_increment_ref_count(((char*)(right_value329=parse_word(info))));
                    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1162 "05call.c"
                    # 1159 "05call.c"
                    if(_if_conditional354=string_operator_equals(word2_281,"lambda"),                    _if_conditional354) {
                        # 1160 "05call.c"
                        lambda_flag_280=(_Bool)1;
                    }
                    word2_281 = come_decrement_ref_count2(word2_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 1164 "05call.c"
                info->p=head_273;
                # 1165 "05call.c"
                info->sline=head_sline_274;
            }
            # 1169 "05call.c"
            fun_name_with_type_name_282=(_Bool)0;
            # 1198 "05call.c"
            # 1170 "05call.c"
            if(_if_conditional355=string_operator_not_equals(buf_275,"if")&&string_operator_not_equals(buf_275,"while")&&string_operator_not_equals(buf_275,"for")&&string_operator_not_equals(buf_275,"switch")&&string_operator_not_equals(buf_275,"return")&&string_operator_not_equals(buf_275,"sizeof")&&string_operator_not_equals(buf_275,"_Alignof")&&string_operator_not_equals(buf_275,"__alignof__")&&string_operator_not_equals(buf_275,"_Alignas")&&string_operator_not_equals(buf_275,"isheap")&&string_operator_not_equals(buf_275,"guard")&&string_operator_not_equals(buf_275,"ispointer")&&string_operator_not_equals(buf_275,"dynamic_typeof")&&string_operator_not_equals(buf_275,"__typeof__")&&string_operator_not_equals(buf_275,"typeof")&&string_operator_not_equals(buf_275,"gc_inc")&&string_operator_not_equals(buf_275,"gc_dec")&&string_operator_not_equals(buf_275,"case"),            _if_conditional355) {
                # 1172 "05call.c"
                info->p=head_273;
                # 1173 "05call.c"
                info->sline=head_sline_274;
                # 1175 "05call.c"
                info->no_output_err=(_Bool)1;
                # 1180 "05call.c"
                # 1177 "05call.c"
                if(_if_conditional356=xisalpha(*info->p)||*info->p==95,                _if_conditional356) {
                    # 1178 "05call.c"
                    word2_283=(char*)come_increment_ref_count(((char*)(right_value330=parse_word(info))));
                    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    word2_283 = come_decrement_ref_count2(word2_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 1184 "05call.c"
                while(_while_condtional34=*info->p==42,                _while_condtional34) {
                    # 1181 "05call.c"
                    info->p++;
                    # 1182 "05call.c"
                    skip_spaces_and_lf(info);
                }
                # 1192 "05call.c"
                # 1184 "05call.c"
                if(_if_conditional357=*info->p==58&&*(info->p+1)==58,                _if_conditional357) {
                    # 1185 "05call.c"
                    info->p+=2;
                    # 1186 "05call.c"
                    skip_spaces_and_lf(info);
                    # 1190 "05call.c"
                    # 1187 "05call.c"
                    if(_if_conditional358=xisalpha(*info->p)||*info->p==95,                    _if_conditional358) {
                        # 1188 "05call.c"
                        fun_name_with_type_name_282=(_Bool)1;
                    }
                }
                # 1192 "05call.c"
                info->no_output_err=(_Bool)0;
                # 1194 "05call.c"
                info->p=head_273;
                # 1195 "05call.c"
                info->sline=head_sline_274;
            }
            # 1198 "05call.c"
            call_method_generics_fun_call_284=(_Bool)0;
            # 1239 "05call.c"
            {
                # 1200 "05call.c"
                info->p=head_273;
                # 1201 "05call.c"
                info->sline=head_sline_274;
                # 1207 "05call.c"
                # 1203 "05call.c"
                if(_if_conditional359=xisalpha(*info->p)||*info->p==95,                _if_conditional359) {
                    # 1204 "05call.c"
                    __dec_obj133=buf_275;
                    buf_275=(char*)come_increment_ref_count(((char*)(right_value331=parse_word(info))));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1235 "05call.c"
                # 1207 "05call.c"
                if(_if_conditional368=!is_type_name(buf_275,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_275)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_275)==((void*)0)&&*info->p==60,                _if_conditional368) {
                    # 1208 "05call.c"
                    nest_288=0;
                    # 1230 "05call.c"
                    while(_while_condtional36=*info->p,                    _while_condtional36) {
                        # 1228 "05call.c"
                        # 1210 "05call.c"
                        if(_if_conditional369=*info->p==60,                        _if_conditional369) {
                            # 1211 "05call.c"
                            info->p++;
                            # 1212 "05call.c"
                            nest_288++;
                        }
                        else {
                            # 1228 "05call.c"
                            # 1214 "05call.c"
                            if(_if_conditional370=*info->p==62,                            _if_conditional370) {
                                # 1215 "05call.c"
                                info->p++;
                                # 1216 "05call.c"
                                nest_288--;
                                # 1221 "05call.c"
                                # 1218 "05call.c"
                                if(_if_conditional371=nest_288==0,                                _if_conditional371) {
                                    # 1219 "05call.c"
                                    break;
                                }
                            }
                            else {
                                # 1228 "05call.c"
                                # 1222 "05call.c"
                                if(_if_conditional372=*info->p==10||*info->p==59,                                _if_conditional372) {
                                    # 1223 "05call.c"
                                    break;
                                }
                                else {
                                    # 1226 "05call.c"
                                    info->p++;
                                }
                            }
                        }
                    }
                    # 1233 "05call.c"
                    # 1230 "05call.c"
                    if(_if_conditional373=*info->p==40,                    _if_conditional373) {
                        # 1231 "05call.c"
                        call_method_generics_fun_call_284=(_Bool)1;
                    }
                }
                # 1235 "05call.c"
                info->p=head_273;
                # 1236 "05call.c"
                info->sline=head_sline_274;
            }
            # 1239 "05call.c"
            __dec_obj134=buf_275;
            buf_275=(char*)come_increment_ref_count(((char*)(right_value332=parse_word(info))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1369 "05call.c"
            # 1241 "05call.c"
            if(lambda_flag_280) {
                # 1242 "05call.c"
                info->p=head_273;
                # 1243 "05call.c"
                info->sline=head_sline_274;
                # 1245 "05call.c"
                __result200__ = __result_obj__ = ((struct sNode*)(right_value333=parse_function(info)));
                buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result200__;
            }
            else {
                # 1369 "05call.c"
                # 1247 "05call.c"
                if(_if_conditional375=(string_operator_equals(buf_275,"string")||string_operator_equals(buf_275,"wstring"))&&*info->p==40,                _if_conditional375) {
                    # 1248 "05call.c"
                    node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=parse_function_call(buf_275,info))));
                    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1250 "05call.c"
                    __dec_obj135=node_289;
                    node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_289),info))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1251 "05call.c"
                    __dec_obj136=node_289;
                    node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_289),info))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1253 "05call.c"
                    __result201__ = __result_obj__ = node_289;
                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result201__;
                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1369 "05call.c"
                    # 1255 "05call.c"
                    if(_if_conditional376=string_operator_equals(buf_275,"__func__"),                    _if_conditional376) {
                        # 1256 "05call.c"
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1256, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sFuncNode*)(right_value338=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value337=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1256, "sFuncNode")))),info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sFuncNode_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result204__ = __result_obj__ = ((struct sNode*)(right_value343=_inf_value4));
                        buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value337,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value338,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result204__;
                    }
                    else {
                        # 1369 "05call.c"
                        # 1258 "05call.c"
                        if(_if_conditional385=string_operator_equals(buf_275,"__line__"),                        _if_conditional385) {
                            # 1259 "05call.c"
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1259, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sLineNode*)(right_value345=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value344=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1259, "sLineNode")))),info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sLineNode_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result207__ = __result_obj__ = ((struct sNode*)(right_value350=_inf_value5));
                            buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value344,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value345,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result207__;
                        }
                        else {
                            # 1369 "05call.c"
                            # 1261 "05call.c"
                            if(_if_conditional394=string_operator_equals(buf_275,"__sname__"),                            _if_conditional394) {
                                # 1262 "05call.c"
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1262, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sSNameNode*)(right_value352=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value351=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1262, "sSNameNode")))),info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sSNameNode_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result210__ = __result_obj__ = ((struct sNode*)(right_value357=_inf_value6));
                                buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value351,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value352,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result210__;
                            }
                            else {
                                # 1369 "05call.c"
                                # 1264 "05call.c"
                                if(_if_conditional403=string_operator_equals(buf_275,"__caller_func__"),                                _if_conditional403) {
                                    # 1265 "05call.c"
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1265, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sCallerFuncNode*)(right_value359=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value358=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1265, "sCallerFuncNode")))),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sCallerFuncNode_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result213__ = __result_obj__ = ((struct sNode*)(right_value364=_inf_value7));
                                    buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value358,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value359,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result213__;
                                }
                                else {
                                    # 1369 "05call.c"
                                    # 1267 "05call.c"
                                    if(_if_conditional412=string_operator_equals(buf_275,"__caller_line__"),                                    _if_conditional412) {
                                        # 1268 "05call.c"
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1268, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count(((struct sCallerLineNode*)(right_value366=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value365=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1268, "sCallerLineNode")))),info))));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sCallerLineNode_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result216__ = __result_obj__ = ((struct sNode*)(right_value371=_inf_value8));
                                        buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value365,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value366,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result216__;
                                    }
                                    else {
                                        # 1369 "05call.c"
                                        # 1270 "05call.c"
                                        if(_if_conditional421=string_operator_equals(buf_275,"__caller_sname__"),                                        _if_conditional421) {
                                            # 1271 "05call.c"
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1271, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sCallerSNameNode*)(right_value373=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value372=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1271, "sCallerSNameNode")))),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sCallerSNameNode_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result219__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value9));
                                            buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value372,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value373,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result219__;
                                        }
                                        else {
                                            # 1369 "05call.c"
                                            # 1273 "05call.c"
                                            if(_if_conditional430=(string_operator_equals(buf_275,"sizeof")||string_operator_equals(buf_275,"_Alignof")||string_operator_equals(buf_275,"_Alignas")||string_operator_equals(buf_275,"__alignof__"))&&*info->p==40,                                            _if_conditional430) {
                                                # 1276 "05call.c"
                                                node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=string_node_v21(buf_275,head_273,head_sline_274,info))));
                                                if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1276 "05call.c"
                                                __dec_obj155=node_296;
                                                node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_296),info))));
                                                if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1278 "05call.c"
                                                __result220__ = __result_obj__ = node_296;
                                                if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                return __result220__;
                                                if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1369 "05call.c"
                                                # 1280 "05call.c"
                                                if(fun_name_with_type_name_282) {
                                                    # 1281 "05call.c"
                                                    fun_name_297=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value382=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1281, "buffer"))))))));
                                                    come_call_finalizer3(right_value381,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value382,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 1283 "05call.c"
                                                    buffer_append_str(fun_name_297,buf_275);
                                                    # 1285 "05call.c"
                                                    type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value384=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value383=buffer_to_string(fun_name_297))))))));
                                                    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value384,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 1299 "05call.c"
                                                    # 1287 "05call.c"
                                                    if(_if_conditional436=type_301==((void*)0),                                                    _if_conditional436) {
                                                        # 1288 "05call.c"
                                                        klass_307=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value385=buffer_to_string(fun_name_297))));
                                                        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1297 "05call.c"
                                                        # 1290 "05call.c"
                                                        if(klass_307) {
                                                            # 1291 "05call.c"
                                                            __dec_obj156=type_301;
                                                            type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value386=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1291, "sType")))),buf_275,(_Bool)0,info))));
                                                            come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value386,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value387,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 1294 "05call.c"
                                                            err_msg(info,"null type(%s)",buf_275);
                                                            # 1295 "05call.c"
                                                            exit(2);
                                                        }
                                                    }
                                                    # 1308 "05call.c"
                                                    while(_while_condtional40=*info->p==42,                                                    _while_condtional40) {
                                                        # 1300 "05call.c"
                                                        info->p++;
                                                        # 1301 "05call.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1306 "05call.c"
                                                        # 1303 "05call.c"
                                                        if(_if_conditional449=type_301->mClass->mStruct==(_Bool)0,                                                        _if_conditional449) {
                                                            # 1304 "05call.c"
                                                            buffer_append_str(fun_name_297,"p");
                                                        }
                                                    }
                                                    # 1308 "05call.c"
                                                    expected_next_character(58,info);
                                                    # 1309 "05call.c"
                                                    expected_next_character(58,info);
                                                    # 1311 "05call.c"
                                                    buffer_append_str(fun_name_297,"_");
                                                    # 1313 "05call.c"
                                                    buf2_308=(char*)come_increment_ref_count(((char*)(right_value388=parse_word(info))));
                                                    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 1315 "05call.c"
                                                    buffer_append_str(fun_name_297,buf2_308);
                                                    # 1317 "05call.c"
                                                    node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=parse_function_call(((char*)(right_value389=buffer_to_string(fun_name_297))),info))));
                                                    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1319 "05call.c"
                                                    __dec_obj157=node_309;
                                                    node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_309),info))));
                                                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1320 "05call.c"
                                                    __dec_obj158=node_309;
                                                    node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_309),info))));
                                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1322 "05call.c"
                                                    __result229__ = __result_obj__ = node_309;
                                                    come_call_finalizer3(fun_name_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_308 = come_decrement_ref_count2(buf2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result229__;
                                                    come_call_finalizer3(fun_name_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_308 = come_decrement_ref_count2(buf2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 1369 "05call.c"
                                                    # 1324 "05call.c"
                                                    if(_if_conditional450=*info->p==58&&*(info->p+1)==58,                                                    _if_conditional450) {
                                                        # 1325 "05call.c"
                                                        info->p+=2;
                                                        # 1326 "05call.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1328 "05call.c"
                                                        fun_name_310=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value394=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value393=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1328, "buffer"))))))));
                                                        come_call_finalizer3(right_value393,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value394,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 1330 "05call.c"
                                                        buffer_append_str(fun_name_310,buf_275);
                                                        # 1332 "05call.c"
                                                        buffer_append_str(fun_name_310,"_");
                                                        # 1334 "05call.c"
                                                        buf2_311=(char*)come_increment_ref_count(((char*)(right_value395=parse_word(info))));
                                                        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1336 "05call.c"
                                                        buffer_append_str(fun_name_310,buf2_311);
                                                        # 1338 "05call.c"
                                                        node_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=parse_function_call(((char*)(right_value396=buffer_to_string(fun_name_310))),info))));
                                                        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1340 "05call.c"
                                                        __dec_obj159=node_312;
                                                        node_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_312),info))));
                                                        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1341 "05call.c"
                                                        __dec_obj160=node_312;
                                                        node_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_312),info))));
                                                        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1343 "05call.c"
                                                        __result230__ = __result_obj__ = node_312;
                                                        come_call_finalizer3(fun_name_310,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_311 = come_decrement_ref_count2(buf2_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result230__;
                                                        come_call_finalizer3(fun_name_310,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_311 = come_decrement_ref_count2(buf2_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 1369 "05call.c"
                                                        # 1345 "05call.c"
                                                        if(call_method_generics_fun_call_284) {
                                                            # 1346 "05call.c"
                                                            node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=parse_function_call(buf_275,info))));
                                                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 1348 "05call.c"
                                                            __dec_obj161=node_313;
                                                            node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_313),info))));
                                                            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 1349 "05call.c"
                                                            __dec_obj162=node_313;
                                                            node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_313),info))));
                                                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 1351 "05call.c"
                                                            __result231__ = __result_obj__ = node_313;
                                                            if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result231__;
                                                            if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            # 1369 "05call.c"
                                                            # 1353 "05call.c"
                                                            if(_if_conditional452=string_operator_not_equals(buf_275,"if")&&string_operator_not_equals(buf_275,"while")&&string_operator_not_equals(buf_275,"for")&&string_operator_not_equals(buf_275,"switch")&&string_operator_not_equals(buf_275,"return")&&string_operator_not_equals(buf_275,"sizeof")&&string_operator_not_equals(buf_275,"isheap")&&string_operator_not_equals(buf_275,"ispointer")&&string_operator_not_equals(buf_275,"guard")&&string_operator_not_equals(buf_275,"__typeof__")&&string_operator_not_equals(buf_275,"dynamic_typeof")&&string_operator_not_equals(buf_275,"typeof")&&string_operator_not_equals(buf_275,"gc_inc")&&string_operator_not_equals(buf_275,"gc_dec")&&string_operator_not_equals(buf_275,"case")&&string_operator_not_equals(buf_275,"_Alignof")&&string_operator_not_equals(buf_275,"__alignof__")&&string_operator_not_equals(buf_275,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__278),                                                            _if_conditional452) {
                                                                # 1355 "05call.c"
                                                                node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=parse_function_call(buf_275,info))));
                                                                if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1357 "05call.c"
                                                                __dec_obj163=node_314;
                                                                node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_314),info))));
                                                                if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1358 "05call.c"
                                                                __dec_obj164=node_314;
                                                                node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_314),info))));
                                                                if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1360 "05call.c"
                                                                __result232__ = __result_obj__ = node_314;
                                                                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result232__;
                                                                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                # 1363 "05call.c"
                                                                node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=string_node_v21(buf_275,head_273,head_sline_274,info))));
                                                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1365 "05call.c"
                                                                __dec_obj165=node_315;
                                                                node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_315),info))));
                                                                if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1367 "05call.c"
                                                                __result233__ = __result_obj__ = node_315;
                                                                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result233__;
                                                                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            buf_275 = come_decrement_ref_count2(buf_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1371 "05call.c"
            node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=expression_node_v97(info))));
            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1373 "05call.c"
            __dec_obj166=node_316;
            node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_316),info))));
            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1375 "05call.c"
            __result234__ = __result_obj__ = node_316;
            if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result234__;
            if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 1378 "05call.c"
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    # 1379 "05call.c"
    exit(2);
    # 1381 "05call.c"
    __result235__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result235__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sReturnNode_finalize"
                # 0 "sReturnNode_finalize"
                if(_if_conditional339=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional339) {
                    # 0 "sReturnNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sReturnNode_finalize"
                # 1 "sReturnNode_finalize"
                if(_if_conditional340=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional340) {
                    # 1 "sReturnNode_finalize"
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sReturnNode_finalize"
                # 2 "sReturnNode_finalize"
                if(_if_conditional341=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional341) {
                    # 2 "sReturnNode_finalize"
                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional342;
struct sReturnNode* __result193__;
void* right_value322;
struct sReturnNode* result_272;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value323;
char* __dec_obj128;
_Bool _if_conditional345;
void* right_value324;
struct sNode* __dec_obj129;
_Bool _if_conditional346;
void* right_value325;
char* __dec_obj130;
struct sReturnNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
memset(&result_272, 0, sizeof(struct sReturnNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
                # 3 "sReturnNode_clone"
                # 2 "sReturnNode_clone"
                if(_if_conditional342=self==(void*)0,                _if_conditional342) {
                    # 2 "sReturnNode_clone"
                    __result193__ = __result_obj__ = (void*)0;
                    return __result193__;
                }
                # 3 "sReturnNode_clone"
                result_272=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value322=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                come_call_finalizer3(right_value322,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sReturnNode_clone"
                # 4 "sReturnNode_clone"
                if(_if_conditional343=self!=((void*)0),                _if_conditional343) {
                    # 4 "sReturnNode_clone"
                    result_272->sline=self->sline;
                }
                # 6 "sReturnNode_clone"
                # 5 "sReturnNode_clone"
                if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional344) {
                    # 5 "sReturnNode_clone"
                    __dec_obj128=result_272->sname;
                    result_272->sname=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->sname))));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sReturnNode_clone"
                # 6 "sReturnNode_clone"
                if(_if_conditional345=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional345) {
                    # 6 "sReturnNode_clone"
                    __dec_obj129=result_272->value;
                    result_272->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(self->value))));
                    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sReturnNode_clone"
                # 7 "sReturnNode_clone"
                if(_if_conditional346=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional346) {
                    # 7 "sReturnNode_clone"
                    __dec_obj130=result_272->value_source;
                    result_272->value_source=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(self->value_source))));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sReturnNode_clone"
                __result194__ = __result_obj__ = result_272;
                come_call_finalizer3(result_272,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result194__;
                come_call_finalizer3(result_272,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_285;
unsigned int hash_286;
unsigned int it_287;
_Bool _while_condtional35;
_Bool _if_conditional360;
_Bool _if_conditional361;
struct sVar* __result196__;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct sVar* __result197__;
struct sVar* __result198__;
struct sVar* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_285, 0, sizeof(struct sVar*));
memset(&hash_286, 0, sizeof(unsigned int));
memset(&it_287, 0, sizeof(unsigned int));
                    # 1519 "./neo-c.h"
                    # 1520 "./neo-c.h"
                    memset(&default_value_285,0,sizeof(struct sVar*));
                    # 1522 "./neo-c.h"
                    hash_286=string_get_hash_key(((char*)key))%self->size;
                    # 1523 "./neo-c.h"
                    it_287=hash_286;
                    # 1547 "./neo-c.h"
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        # 1545 "./neo-c.h"
                        # 1526 "./neo-c.h"
                        if(_if_conditional360=self->item_existance[it_287],                        _if_conditional360) {
                            # 1533 "./neo-c.h"
                            # 1528 "./neo-c.h"
                            if(_if_conditional361=string_equals(self->keys[it_287],key),                            _if_conditional361) {
                                # 1530 "./neo-c.h"
                                __result196__ = __result_obj__ = self->items[it_287];
                                come_call_finalizer3(default_value_285,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result196__;
                            }
                            # 1533 "./neo-c.h"
                            it_287++;
                            # 1541 "./neo-c.h"
                            # 1535 "./neo-c.h"
                            if(_if_conditional366=it_287>=self->size,                            _if_conditional366) {
                                # 1536 "./neo-c.h"
                                it_287=0;
                            }
                            else {
                                # 1541 "./neo-c.h"
                                # 1538 "./neo-c.h"
                                if(_if_conditional367=it_287==hash_286,                                _if_conditional367) {
                                    # 1539 "./neo-c.h"
                                    __result197__ = __result_obj__ = default_value_285;
                                    come_call_finalizer3(default_value_285,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result197__;
                                }
                            }
                        }
                        else {
                            # 1543 "./neo-c.h"
                            __result198__ = __result_obj__ = default_value_285;
                            come_call_finalizer3(default_value_285,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                        }
                    }
                    # 1547 "./neo-c.h"
                    __result199__ = __result_obj__ = default_value_285;
                    come_call_finalizer3(default_value_285,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result199__;
                    come_call_finalizer3(default_value_285,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sVar_finalize"
                                    # 0 "sVar_finalize"
                                    if(_if_conditional362=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional362) {
                                        # 0 "sVar_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sVar_finalize"
                                    # 1 "sVar_finalize"
                                    if(_if_conditional363=self!=((void*)0)&&self->mCValueName!=((void*)0),                                    _if_conditional363) {
                                        # 1 "sVar_finalize"
                                        self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sVar_finalize"
                                    # 2 "sVar_finalize"
                                    if(_if_conditional364=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional364) {
                                        # 2 "sVar_finalize"
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sVar_finalize"
                                    # 3 "sVar_finalize"
                                    if(_if_conditional365=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional365) {
                                        # 3 "sVar_finalize"
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFuncNode_finalize"
                            # 0 "sFuncNode_finalize"
                            if(_if_conditional377=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional377) {
                                # 0 "sFuncNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFuncNode_finalize"
                            # 1 "sFuncNode_finalize"
                            if(_if_conditional378=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional378) {
                                # 1 "sFuncNode_finalize"
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sFuncNode_finalize"
                            # 2 "sFuncNode_finalize"
                            if(_if_conditional379=self!=((void*)0)&&self->value_source!=((void*)0),                            _if_conditional379) {
                                # 2 "sFuncNode_finalize"
                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional380;
struct sFuncNode* __result202__;
void* right_value339;
struct sFuncNode* result_290;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value340;
char* __dec_obj137;
_Bool _if_conditional383;
void* right_value341;
struct sNode* __dec_obj138;
_Bool _if_conditional384;
void* right_value342;
char* __dec_obj139;
struct sFuncNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
memset(&result_290, 0, sizeof(struct sFuncNode*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
                            # 3 "sFuncNode_clone"
                            # 2 "sFuncNode_clone"
                            if(_if_conditional380=self==(void*)0,                            _if_conditional380) {
                                # 2 "sFuncNode_clone"
                                __result202__ = __result_obj__ = (void*)0;
                                return __result202__;
                            }
                            # 3 "sFuncNode_clone"
                            result_290=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value339=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            come_call_finalizer3(right_value339,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sFuncNode_clone"
                            # 4 "sFuncNode_clone"
                            if(_if_conditional381=self!=((void*)0),                            _if_conditional381) {
                                # 4 "sFuncNode_clone"
                                result_290->sline=self->sline;
                            }
                            # 6 "sFuncNode_clone"
                            # 5 "sFuncNode_clone"
                            if(_if_conditional382=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional382) {
                                # 5 "sFuncNode_clone"
                                __dec_obj137=result_290->sname;
                                result_290->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->sname))));
                                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sFuncNode_clone"
                            # 6 "sFuncNode_clone"
                            if(_if_conditional383=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional383) {
                                # 6 "sFuncNode_clone"
                                __dec_obj138=result_290->value;
                                result_290->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=sNode_clone(self->value))));
                                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 8 "sFuncNode_clone"
                            # 7 "sFuncNode_clone"
                            if(_if_conditional384=self!=((void*)0)&&self->value_source!=((void*)0),                            _if_conditional384) {
                                # 7 "sFuncNode_clone"
                                __dec_obj139=result_290->value_source;
                                result_290->value_source=(char*)come_increment_ref_count(((char*)(right_value342=string_clone(self->value_source))));
                                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 8 "sFuncNode_clone"
                            __result203__ = __result_obj__ = result_290;
                            come_call_finalizer3(result_290,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result203__;
                            come_call_finalizer3(result_290,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sLineNode_finalize"
                                # 0 "sLineNode_finalize"
                                if(_if_conditional386=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional386) {
                                    # 0 "sLineNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sLineNode_finalize"
                                # 1 "sLineNode_finalize"
                                if(_if_conditional387=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional387) {
                                    # 1 "sLineNode_finalize"
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sLineNode_finalize"
                                # 2 "sLineNode_finalize"
                                if(_if_conditional388=self!=((void*)0)&&self->value_source!=((void*)0),                                _if_conditional388) {
                                    # 2 "sLineNode_finalize"
                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional389;
struct sLineNode* __result205__;
void* right_value346;
struct sLineNode* result_291;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value347;
char* __dec_obj140;
_Bool _if_conditional392;
void* right_value348;
struct sNode* __dec_obj141;
_Bool _if_conditional393;
void* right_value349;
char* __dec_obj142;
struct sLineNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value346 = (void*)0;
memset(&result_291, 0, sizeof(struct sLineNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
                                # 3 "sLineNode_clone"
                                # 2 "sLineNode_clone"
                                if(_if_conditional389=self==(void*)0,                                _if_conditional389) {
                                    # 2 "sLineNode_clone"
                                    __result205__ = __result_obj__ = (void*)0;
                                    return __result205__;
                                }
                                # 3 "sLineNode_clone"
                                result_291=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value346=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                come_call_finalizer3(right_value346,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sLineNode_clone"
                                # 4 "sLineNode_clone"
                                if(_if_conditional390=self!=((void*)0),                                _if_conditional390) {
                                    # 4 "sLineNode_clone"
                                    result_291->sline=self->sline;
                                }
                                # 6 "sLineNode_clone"
                                # 5 "sLineNode_clone"
                                if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional391) {
                                    # 5 "sLineNode_clone"
                                    __dec_obj140=result_291->sname;
                                    result_291->sname=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(self->sname))));
                                    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sLineNode_clone"
                                # 6 "sLineNode_clone"
                                if(_if_conditional392=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional392) {
                                    # 6 "sLineNode_clone"
                                    __dec_obj141=result_291->value;
                                    result_291->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(self->value))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sLineNode_clone"
                                # 7 "sLineNode_clone"
                                if(_if_conditional393=self!=((void*)0)&&self->value_source!=((void*)0),                                _if_conditional393) {
                                    # 7 "sLineNode_clone"
                                    __dec_obj142=result_291->value_source;
                                    result_291->value_source=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(self->value_source))));
                                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sLineNode_clone"
                                __result206__ = __result_obj__ = result_291;
                                come_call_finalizer3(result_291,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result206__;
                                come_call_finalizer3(result_291,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sSNameNode_finalize"
                                    # 0 "sSNameNode_finalize"
                                    if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional395) {
                                        # 0 "sSNameNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sSNameNode_finalize"
                                    # 1 "sSNameNode_finalize"
                                    if(_if_conditional396=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional396) {
                                        # 1 "sSNameNode_finalize"
                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sSNameNode_finalize"
                                    # 2 "sSNameNode_finalize"
                                    if(_if_conditional397=self!=((void*)0)&&self->value_source!=((void*)0),                                    _if_conditional397) {
                                        # 2 "sSNameNode_finalize"
                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional398;
struct sSNameNode* __result208__;
void* right_value353;
struct sSNameNode* result_292;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value354;
char* __dec_obj143;
_Bool _if_conditional401;
void* right_value355;
struct sNode* __dec_obj144;
_Bool _if_conditional402;
void* right_value356;
char* __dec_obj145;
struct sSNameNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
memset(&result_292, 0, sizeof(struct sSNameNode*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
                                    # 3 "sSNameNode_clone"
                                    # 2 "sSNameNode_clone"
                                    if(_if_conditional398=self==(void*)0,                                    _if_conditional398) {
                                        # 2 "sSNameNode_clone"
                                        __result208__ = __result_obj__ = (void*)0;
                                        return __result208__;
                                    }
                                    # 3 "sSNameNode_clone"
                                    result_292=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value353=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    come_call_finalizer3(right_value353,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sSNameNode_clone"
                                    # 4 "sSNameNode_clone"
                                    if(_if_conditional399=self!=((void*)0),                                    _if_conditional399) {
                                        # 4 "sSNameNode_clone"
                                        result_292->sline=self->sline;
                                    }
                                    # 6 "sSNameNode_clone"
                                    # 5 "sSNameNode_clone"
                                    if(_if_conditional400=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional400) {
                                        # 5 "sSNameNode_clone"
                                        __dec_obj143=result_292->sname;
                                        result_292->sname=(char*)come_increment_ref_count(((char*)(right_value354=string_clone(self->sname))));
                                        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sSNameNode_clone"
                                    # 6 "sSNameNode_clone"
                                    if(_if_conditional401=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional401) {
                                        # 6 "sSNameNode_clone"
                                        __dec_obj144=result_292->value;
                                        result_292->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(self->value))));
                                        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sSNameNode_clone"
                                    # 7 "sSNameNode_clone"
                                    if(_if_conditional402=self!=((void*)0)&&self->value_source!=((void*)0),                                    _if_conditional402) {
                                        # 7 "sSNameNode_clone"
                                        __dec_obj145=result_292->value_source;
                                        result_292->value_source=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(self->value_source))));
                                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sSNameNode_clone"
                                    __result209__ = __result_obj__ = result_292;
                                    come_call_finalizer3(result_292,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result209__;
                                    come_call_finalizer3(result_292,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sCallerFuncNode_finalize"
                                        # 0 "sCallerFuncNode_finalize"
                                        if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional404) {
                                            # 0 "sCallerFuncNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sCallerFuncNode_finalize"
                                        # 1 "sCallerFuncNode_finalize"
                                        if(_if_conditional405=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional405) {
                                            # 1 "sCallerFuncNode_finalize"
                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sCallerFuncNode_finalize"
                                        # 2 "sCallerFuncNode_finalize"
                                        if(_if_conditional406=self!=((void*)0)&&self->value_source!=((void*)0),                                        _if_conditional406) {
                                            # 2 "sCallerFuncNode_finalize"
                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional407;
struct sCallerFuncNode* __result211__;
void* right_value360;
struct sCallerFuncNode* result_293;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value361;
char* __dec_obj146;
_Bool _if_conditional410;
void* right_value362;
struct sNode* __dec_obj147;
_Bool _if_conditional411;
void* right_value363;
char* __dec_obj148;
struct sCallerFuncNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
memset(&result_293, 0, sizeof(struct sCallerFuncNode*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
                                        # 3 "sCallerFuncNode_clone"
                                        # 2 "sCallerFuncNode_clone"
                                        if(_if_conditional407=self==(void*)0,                                        _if_conditional407) {
                                            # 2 "sCallerFuncNode_clone"
                                            __result211__ = __result_obj__ = (void*)0;
                                            return __result211__;
                                        }
                                        # 3 "sCallerFuncNode_clone"
                                        result_293=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value360=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        come_call_finalizer3(right_value360,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sCallerFuncNode_clone"
                                        # 4 "sCallerFuncNode_clone"
                                        if(_if_conditional408=self!=((void*)0),                                        _if_conditional408) {
                                            # 4 "sCallerFuncNode_clone"
                                            result_293->sline=self->sline;
                                        }
                                        # 6 "sCallerFuncNode_clone"
                                        # 5 "sCallerFuncNode_clone"
                                        if(_if_conditional409=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional409) {
                                            # 5 "sCallerFuncNode_clone"
                                            __dec_obj146=result_293->sname;
                                            result_293->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(self->sname))));
                                            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sCallerFuncNode_clone"
                                        # 6 "sCallerFuncNode_clone"
                                        if(_if_conditional410=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional410) {
                                            # 6 "sCallerFuncNode_clone"
                                            __dec_obj147=result_293->value;
                                            result_293->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNode_clone(self->value))));
                                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sCallerFuncNode_clone"
                                        # 7 "sCallerFuncNode_clone"
                                        if(_if_conditional411=self!=((void*)0)&&self->value_source!=((void*)0),                                        _if_conditional411) {
                                            # 7 "sCallerFuncNode_clone"
                                            __dec_obj148=result_293->value_source;
                                            result_293->value_source=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->value_source))));
                                            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sCallerFuncNode_clone"
                                        __result212__ = __result_obj__ = result_293;
                                        come_call_finalizer3(result_293,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result212__;
                                        come_call_finalizer3(result_293,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCallerLineNode_finalize"
                                            # 0 "sCallerLineNode_finalize"
                                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional413) {
                                                # 0 "sCallerLineNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sCallerLineNode_finalize"
                                            # 1 "sCallerLineNode_finalize"
                                            if(_if_conditional414=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional414) {
                                                # 1 "sCallerLineNode_finalize"
                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sCallerLineNode_finalize"
                                            # 2 "sCallerLineNode_finalize"
                                            if(_if_conditional415=self!=((void*)0)&&self->value_source!=((void*)0),                                            _if_conditional415) {
                                                # 2 "sCallerLineNode_finalize"
                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional416;
struct sCallerLineNode* __result214__;
void* right_value367;
struct sCallerLineNode* result_294;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value368;
char* __dec_obj149;
_Bool _if_conditional419;
void* right_value369;
struct sNode* __dec_obj150;
_Bool _if_conditional420;
void* right_value370;
char* __dec_obj151;
struct sCallerLineNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
memset(&result_294, 0, sizeof(struct sCallerLineNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
                                            # 3 "sCallerLineNode_clone"
                                            # 2 "sCallerLineNode_clone"
                                            if(_if_conditional416=self==(void*)0,                                            _if_conditional416) {
                                                # 2 "sCallerLineNode_clone"
                                                __result214__ = __result_obj__ = (void*)0;
                                                return __result214__;
                                            }
                                            # 3 "sCallerLineNode_clone"
                                            result_294=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value367=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            come_call_finalizer3(right_value367,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCallerLineNode_clone"
                                            # 4 "sCallerLineNode_clone"
                                            if(_if_conditional417=self!=((void*)0),                                            _if_conditional417) {
                                                # 4 "sCallerLineNode_clone"
                                                result_294->sline=self->sline;
                                            }
                                            # 6 "sCallerLineNode_clone"
                                            # 5 "sCallerLineNode_clone"
                                            if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional418) {
                                                # 5 "sCallerLineNode_clone"
                                                __dec_obj149=result_294->sname;
                                                result_294->sname=(char*)come_increment_ref_count(((char*)(right_value368=string_clone(self->sname))));
                                                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCallerLineNode_clone"
                                            # 6 "sCallerLineNode_clone"
                                            if(_if_conditional419=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional419) {
                                                # 6 "sCallerLineNode_clone"
                                                __dec_obj150=result_294->value;
                                                result_294->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(self->value))));
                                                if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sCallerLineNode_clone"
                                            # 7 "sCallerLineNode_clone"
                                            if(_if_conditional420=self!=((void*)0)&&self->value_source!=((void*)0),                                            _if_conditional420) {
                                                # 7 "sCallerLineNode_clone"
                                                __dec_obj151=result_294->value_source;
                                                result_294->value_source=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->value_source))));
                                                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sCallerLineNode_clone"
                                            __result215__ = __result_obj__ = result_294;
                                            come_call_finalizer3(result_294,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result215__;
                                            come_call_finalizer3(result_294,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sCallerSNameNode_finalize"
                                                # 0 "sCallerSNameNode_finalize"
                                                if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional422) {
                                                    # 0 "sCallerSNameNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sCallerSNameNode_finalize"
                                                # 1 "sCallerSNameNode_finalize"
                                                if(_if_conditional423=self!=((void*)0)&&self->value!=((void*)0),                                                _if_conditional423) {
                                                    # 1 "sCallerSNameNode_finalize"
                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 3 "sCallerSNameNode_finalize"
                                                # 2 "sCallerSNameNode_finalize"
                                                if(_if_conditional424=self!=((void*)0)&&self->value_source!=((void*)0),                                                _if_conditional424) {
                                                    # 2 "sCallerSNameNode_finalize"
                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional425;
struct sCallerSNameNode* __result217__;
void* right_value374;
struct sCallerSNameNode* result_295;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value375;
char* __dec_obj152;
_Bool _if_conditional428;
void* right_value376;
struct sNode* __dec_obj153;
_Bool _if_conditional429;
void* right_value377;
char* __dec_obj154;
struct sCallerSNameNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
memset(&result_295, 0, sizeof(struct sCallerSNameNode*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
                                                # 3 "sCallerSNameNode_clone"
                                                # 2 "sCallerSNameNode_clone"
                                                if(_if_conditional425=self==(void*)0,                                                _if_conditional425) {
                                                    # 2 "sCallerSNameNode_clone"
                                                    __result217__ = __result_obj__ = (void*)0;
                                                    return __result217__;
                                                }
                                                # 3 "sCallerSNameNode_clone"
                                                result_295=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value374=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                come_call_finalizer3(right_value374,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sCallerSNameNode_clone"
                                                # 4 "sCallerSNameNode_clone"
                                                if(_if_conditional426=self!=((void*)0),                                                _if_conditional426) {
                                                    # 4 "sCallerSNameNode_clone"
                                                    result_295->sline=self->sline;
                                                }
                                                # 6 "sCallerSNameNode_clone"
                                                # 5 "sCallerSNameNode_clone"
                                                if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional427) {
                                                    # 5 "sCallerSNameNode_clone"
                                                    __dec_obj152=result_295->sname;
                                                    result_295->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sCallerSNameNode_clone"
                                                # 6 "sCallerSNameNode_clone"
                                                if(_if_conditional428=self!=((void*)0)&&self->value!=((void*)0),                                                _if_conditional428) {
                                                    # 6 "sCallerSNameNode_clone"
                                                    __dec_obj153=result_295->value;
                                                    result_295->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(self->value))));
                                                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 8 "sCallerSNameNode_clone"
                                                # 7 "sCallerSNameNode_clone"
                                                if(_if_conditional429=self!=((void*)0)&&self->value_source!=((void*)0),                                                _if_conditional429) {
                                                    # 7 "sCallerSNameNode_clone"
                                                    __dec_obj154=result_295->value_source;
                                                    result_295->value_source=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->value_source))));
                                                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 8 "sCallerSNameNode_clone"
                                                __result218__ = __result_obj__ = result_295;
                                                come_call_finalizer3(result_295,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result218__;
                                                come_call_finalizer3(result_295,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_298;
unsigned int hash_299;
unsigned int it_300;
_Bool _while_condtional37;
_Bool _if_conditional432;
_Bool _if_conditional433;
struct sType* __result221__;
_Bool _if_conditional434;
_Bool _if_conditional435;
struct sType* __result222__;
struct sType* __result223__;
struct sType* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_298, 0, sizeof(struct sType*));
memset(&hash_299, 0, sizeof(unsigned int));
memset(&it_300, 0, sizeof(unsigned int));
                                                        # 1519 "./neo-c.h"
                                                        # 1520 "./neo-c.h"
                                                        memset(&default_value_298,0,sizeof(struct sType*));
                                                        # 1522 "./neo-c.h"
                                                        hash_299=string_get_hash_key(((char*)key))%self->size;
                                                        # 1523 "./neo-c.h"
                                                        it_300=hash_299;
                                                        # 1547 "./neo-c.h"
                                                        while(_while_condtional37=(_Bool)1,                                                        _while_condtional37) {
                                                            # 1545 "./neo-c.h"
                                                            # 1526 "./neo-c.h"
                                                            if(_if_conditional432=self->item_existance[it_300],                                                            _if_conditional432) {
                                                                # 1533 "./neo-c.h"
                                                                # 1528 "./neo-c.h"
                                                                if(_if_conditional433=string_equals(self->keys[it_300],key),                                                                _if_conditional433) {
                                                                    # 1530 "./neo-c.h"
                                                                    __result221__ = __result_obj__ = self->items[it_300];
                                                                    come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result221__;
                                                                }
                                                                # 1533 "./neo-c.h"
                                                                it_300++;
                                                                # 1541 "./neo-c.h"
                                                                # 1535 "./neo-c.h"
                                                                if(_if_conditional434=it_300>=self->size,                                                                _if_conditional434) {
                                                                    # 1536 "./neo-c.h"
                                                                    it_300=0;
                                                                }
                                                                else {
                                                                    # 1541 "./neo-c.h"
                                                                    # 1538 "./neo-c.h"
                                                                    if(_if_conditional435=it_300==hash_299,                                                                    _if_conditional435) {
                                                                        # 1539 "./neo-c.h"
                                                                        __result222__ = __result_obj__ = default_value_298;
                                                                        come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result222__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1543 "./neo-c.h"
                                                                __result223__ = __result_obj__ = default_value_298;
                                                                come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result223__;
                                                            }
                                                        }
                                                        # 1547 "./neo-c.h"
                                                        __result224__ = __result_obj__ = default_value_298;
                                                        come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result224__;
                                                        come_call_finalizer3(default_value_298,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_302;
unsigned int hash_303;
unsigned int it_304;
_Bool _while_condtional38;
_Bool _if_conditional437;
_Bool _if_conditional438;
struct sClass* __result225__;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct sClass* __result226__;
struct sClass* __result227__;
struct sClass* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_302, 0, sizeof(struct sClass*));
memset(&hash_303, 0, sizeof(unsigned int));
memset(&it_304, 0, sizeof(unsigned int));
                                                            # 1519 "./neo-c.h"
                                                            # 1520 "./neo-c.h"
                                                            memset(&default_value_302,0,sizeof(struct sClass*));
                                                            # 1522 "./neo-c.h"
                                                            hash_303=string_get_hash_key(((char*)key))%self->size;
                                                            # 1523 "./neo-c.h"
                                                            it_304=hash_303;
                                                            # 1547 "./neo-c.h"
                                                            while(_while_condtional38=(_Bool)1,                                                            _while_condtional38) {
                                                                # 1545 "./neo-c.h"
                                                                # 1526 "./neo-c.h"
                                                                if(_if_conditional437=self->item_existance[it_304],                                                                _if_conditional437) {
                                                                    # 1533 "./neo-c.h"
                                                                    # 1528 "./neo-c.h"
                                                                    if(_if_conditional438=string_equals(self->keys[it_304],key),                                                                    _if_conditional438) {
                                                                        # 1530 "./neo-c.h"
                                                                        __result225__ = __result_obj__ = self->items[it_304];
                                                                        come_call_finalizer3(default_value_302,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result225__;
                                                                    }
                                                                    # 1533 "./neo-c.h"
                                                                    it_304++;
                                                                    # 1541 "./neo-c.h"
                                                                    # 1535 "./neo-c.h"
                                                                    if(_if_conditional446=it_304>=self->size,                                                                    _if_conditional446) {
                                                                        # 1536 "./neo-c.h"
                                                                        it_304=0;
                                                                    }
                                                                    else {
                                                                        # 1541 "./neo-c.h"
                                                                        # 1538 "./neo-c.h"
                                                                        if(_if_conditional447=it_304==hash_303,                                                                        _if_conditional447) {
                                                                            # 1539 "./neo-c.h"
                                                                            __result226__ = __result_obj__ = default_value_302;
                                                                            come_call_finalizer3(default_value_302,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result226__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1543 "./neo-c.h"
                                                                    __result227__ = __result_obj__ = default_value_302;
                                                                    come_call_finalizer3(default_value_302,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result227__;
                                                                }
                                                            }
                                                            # 1547 "./neo-c.h"
                                                            __result228__ = __result_obj__ = default_value_302;
                                                            come_call_finalizer3(default_value_302,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result228__;
                                                            come_call_finalizer3(default_value_302,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional444;
_Bool _if_conditional445;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            # 1 "sClass_finalize"
                                                                            # 0 "sClass_finalize"
                                                                            if(_if_conditional439=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional439) {
                                                                                # 0 "sClass_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sClass_finalize"
                                                                            # 1 "sClass_finalize"
                                                                            if(_if_conditional440=self!=((void*)0)&&self->mFields!=((void*)0),                                                                            _if_conditional440) {
                                                                                # 1 "sClass_finalize"
                                                                                come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sClass_finalize"
                                                                            # 2 "sClass_finalize"
                                                                            if(_if_conditional444=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional444) {
                                                                                # 2 "sClass_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sClass_finalize"
                                                                            # 3 "sClass_finalize"
                                                                            if(_if_conditional445=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                                                            _if_conditional445) {
                                                                                # 3 "sClass_finalize"
                                                                                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_305;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_306;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_306, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                    # 114 "./neo-c.h"
                                                                                    it_305=self->head;
                                                                                    # 120 "./neo-c.h"
                                                                                    while(_while_condtional39=it_305!=((void*)0),                                                                                    _while_condtional39) {
                                                                                        # 116 "./neo-c.h"
                                                                                        prev_it_306=it_305;
                                                                                        # 117 "./neo-c.h"
                                                                                        it_305=it_305->next;
                                                                                        # 118 "./neo-c.h"
                                                                                        come_call_finalizer3(prev_it_306,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional441;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                            if(_if_conditional441=self!=((void*)0)&&self->item!=((void*)0),                                                                                            _if_conditional441) {
                                                                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                                                                    if(_if_conditional442=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                    _if_conditional442) {
                                                                                                        # 0 "tuple2$2charphsTypephp_finalize"
                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    # 2 "tuple2$2charphsTypephp_finalize"
                                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                    if(_if_conditional443=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                    _if_conditional443) {
                                                                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    }
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value410;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
    # 1386 "05call.c"
    __result236__ = __result_obj__ = ((struct sNode*)(right_value410=expression_node_v99(info)));
    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result236__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional453;
void* right_value411;
void* right_value412;
struct sNode* __dec_obj167;
struct sNode* __result237__;
_Bool _if_conditional454;
void* right_value413;
void* right_value414;
struct sNode* __dec_obj168;
struct sNode* __result238__;
struct sNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
    # 1408 "05call.c"
    # 1391 "05call.c"
    if(_if_conditional453=strmemcmp(info->p,"or"),    _if_conditional453) {
        # 1392 "05call.c"
        info->p+=strlen("or");
        # 1393 "05call.c"
        skip_spaces_and_lf(info);
        # 1395 "05call.c"
        __dec_obj167=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=sNode_clone(node)))),info))));
        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1397 "05call.c"
        __result237__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result237__;
    }
    else {
        # 1408 "05call.c"
        # 1399 "05call.c"
        if(_if_conditional454=strmemcmp(info->p,"and"),        _if_conditional454) {
            # 1400 "05call.c"
            info->p+=strlen("and");
            # 1401 "05call.c"
            skip_spaces_and_lf(info);
            # 1403 "05call.c"
            __dec_obj168=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(node)))),info))));
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1405 "05call.c"
            __result238__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result238__;
        }
    }
    # 1408 "05call.c"
    __result239__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result239__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value415;
struct sNode* node_317;
void* right_value416;
struct sNode* __dec_obj169;
struct sNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
memset(&node_317, 0, sizeof(struct sNode*));
right_value416 = (void*)0;
    # 1413 "05call.c"
    node_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=expression_node_v99(info))));
    if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1415 "05call.c"
    __dec_obj169=node_317;
    node_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_317),info))));
    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1423 "05call.c"
    __result240__ = __result_obj__ = node_317;
    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result240__;
    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_318;
void* right_value417;
void* right_value418;
struct buffer* buf_319;
_Bool _if_conditional455;
void* right_value419;
char* __dec_obj170;
_Bool _if_conditional456;
int i_320;
_Bool _if_conditional457;
void* right_value420;
char* __dec_obj171;
void* right_value421;
char* __dec_obj172;
int i_321;
_Bool _if_conditional458;
_Bool _if_conditional460;
void* right_value422;
void* right_value423;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_318, 0, sizeof(char*));
right_value417 = (void*)0;
right_value418 = (void*)0;
memset(&buf_319, 0, sizeof(struct buffer*));
right_value419 = (void*)0;
memset(&i_320, 0, sizeof(int));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&i_321, 0, sizeof(int));
right_value422 = (void*)0;
right_value423 = (void*)0;
    # 1430 "05call.c"
    # 1431 "05call.c"
    buf_319=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value417=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1431, "buffer"))))))));
    come_call_finalizer3(right_value417,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value418,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1462 "05call.c"
    # 1432 "05call.c"
    if(_if_conditional455=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional455) {
        # 1433 "05call.c"
        __dec_obj170=struct_name_318;
        struct_name_318=(char*)come_increment_ref_count(((char*)(right_value419=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1445 "05call.c"
        # 1434 "05call.c"
        if(_if_conditional456=!obj_type->mClass->mStruct,        _if_conditional456) {
            # 1444 "05call.c"
            for(            i_320=0;            i_320<obj_type->mOriginalTypeNamePointerNum;            i_320++            ){
                # 1442 "05call.c"
                buffer_append_str(buf_319,"p");
            }
        }
    }
    else {
        # 1462 "05call.c"
        # 1446 "05call.c"
        if(obj_type->mClass->mStruct) {
            # 1447 "05call.c"
            __dec_obj171=struct_name_318;
            struct_name_318=(char*)come_increment_ref_count(((char*)(right_value420=__builtin_string(obj_type->mClass->mName))));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 1450 "05call.c"
            __dec_obj172=struct_name_318;
            struct_name_318=(char*)come_increment_ref_count(((char*)(right_value421=create_generics_name(obj_type,info))));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1460 "05call.c"
            for(            i_321=0;            i_321<obj_type->mPointerNum;            i_321++            ){
                # 1458 "05call.c"
                buffer_append_str(buf_319,"p");
            }
        }
    }
    # 1466 "05call.c"
    # 1462 "05call.c"
    if(obj_type->mArrayPointerType) {
        # 1463 "05call.c"
        buffer_append_str(buf_319,"a");
    }
    # 1470 "05call.c"
    # 1466 "05call.c"
    if(_if_conditional460=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional460) {
        # 1467 "05call.c"
        buffer_append_str(buf_319,"pa");
    }
    # 1470 "05call.c"
    __result243__ = __result_obj__ = ((char*)(right_value423=xsprintf("%s%s_%s",struct_name_318,((char*)(right_value422=buffer_to_string(buf_319))),fun_name)));
    struct_name_318 = come_decrement_ref_count2(struct_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result243__;
    struct_name_318 = come_decrement_ref_count2(struct_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional459;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional459=self==((void*)0),        _if_conditional459) {
            # 352 "./neo-c.h"
            __result241__ = 0;
            return __result241__;
        }
        # 354 "./neo-c.h"
        __result242__ = self->len;
        return __result242__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value424;
char* struct_name_322;
void* right_value425;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&struct_name_322, 0, sizeof(char*));
right_value425 = (void*)0;
    # 1475 "05call.c"
    struct_name_322=(char*)come_increment_ref_count(((char*)(right_value424=__builtin_string(obj_class->mName))));
    right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1477 "05call.c"
    __result244__ = __result_obj__ = ((char*)(right_value425=xsprintf("%s_%s",struct_name_322,fun_name)));
    struct_name_322 = come_decrement_ref_count2(struct_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
    struct_name_322 = come_decrement_ref_count2(struct_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1483 "05call.c"
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    # 1484 "05call.c"
    exit(2);
    # 1486 "05call.c"
    __result245__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result245__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1491 "05call.c"
    __result246__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result246__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

