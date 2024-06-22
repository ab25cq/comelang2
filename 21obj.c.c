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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sForceDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sIsPointer
{
    int sline;
    char* sname;
    struct sType* type;
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

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated(struct sNullNodeX* self);

char* sNullNodeX_kind(struct sNullNodeX* self);

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

_Bool sNewNode_terminated(struct sNewNode* self);

char* sNewNode_kind(struct sNewNode* self);

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

_Bool sImplementsNode_terminated(struct sImplementsNode* self);

char* sImplementsNode_kind(struct sImplementsNode* self);

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated(struct sTrueNode* self);

char* sTrueNode_kind(struct sTrueNode* self);

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated(struct sFalseNode* self);

char* sFalseNode_kind(struct sFalseNode* self);

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

_Bool sSizeOfNode_terminated(struct sSizeOfNode* self);

char* sSizeOfNode_kind(struct sSizeOfNode* self);

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sSizeOfExpNode_terminated(struct sSizeOfExpNode* self);

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

_Bool sTypeOfNode_terminated(struct sTypeOfNode* self);

char* sTypeOfNode_kind(struct sTypeOfNode* self);

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sTypeOfExpNode_terminated(struct sTypeOfExpNode* self);

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

_Bool sDynamicTypeOfNode_terminated(struct sDynamicTypeOfNode* self);

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

_Bool sAlignOfNode_terminated(struct sAlignOfNode* self);

char* sAlignOfNode_kind(struct sAlignOfNode* self);

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignOfExpNode_terminated(struct sAlignOfExpNode* self);

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

_Bool sAlignOfNode2_terminated(struct sAlignOfNode2* self);

char* sAlignOfNode2_kind(struct sAlignOfNode2* self);

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated(struct sAlignOfExpNode2* self);

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

_Bool sAlignAsNode_terminated(struct sAlignAsNode* self);

char* sAlignAsNode_kind(struct sAlignAsNode* self);

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignAsExpNode_terminated(struct sAlignAsExpNode* self);

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

_Bool sDeleteNode_terminated(struct sDeleteNode* self);

char* sDeleteNode_kind(struct sDeleteNode* self);

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

_Bool sForceDeleteNode_terminated(struct sForceDeleteNode* self);

char* sForceDeleteNode_kind(struct sForceDeleteNode* self);

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

_Bool sDelegateNode_terminated(struct sDelegateNode* self);

char* sDelegateNode_kind(struct sDelegateNode* self);

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

_Bool sShareNode_terminated(struct sShareNode* self);

char* sShareNode_kind(struct sShareNode* self);

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

_Bool sBorrowNode_terminated(struct sBorrowNode* self);

char* sBorrowNode_kind(struct sBorrowNode* self);

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

_Bool sCloneNode_terminated(struct sCloneNode* self);

char* sCloneNode_kind(struct sCloneNode* self);

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

_Bool sDupeNode_terminated(struct sDupeNode* self);

char* sDupeNode_kind(struct sDupeNode* self);

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

_Bool sDummyHeapNode_terminated(struct sDummyHeapNode* self);

char* sDummyHeapNode_kind(struct sDummyHeapNode* self);

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

_Bool sGCIncNode_terminated(struct sGCIncNode* self);

char* sGCIncNode_kind(struct sGCIncNode* self);

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

_Bool sGCDecNode_terminated(struct sGCDecNode* self);

char* sGCDecNode_kind(struct sGCDecNode* self);

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

_Bool sIsHeap_terminated(struct sIsHeap* self);

char* sIsHeap_kind(struct sIsHeap* self);

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

_Bool sIsPointer_terminated(struct sIsPointer* self);

char* sIsPointer_kind(struct sIsPointer* self);

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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










struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sNullNodeX* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 7 "21obj.c"
    self->sline=info->sline;
    # 8 "21obj.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 11 "21obj.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullNodeX_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sNullNodeX_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(struct sNullNodeX* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 13 "21obj.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sNullNodeX_kind(struct sNullNodeX* self){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 18 "21obj.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sNullNodeX")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "21obj.c"
    __result55__ = (_Bool)1;
    return __result55__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value116;
struct sType* __dec_obj36;
void* right_value117;
char* __dec_obj37;
struct sNewNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
    # 33 "21obj.c"
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 35 "21obj.c"
    self->sline=info->sline;
    # 36 "21obj.c"
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 39 "21obj.c"
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNewNode_terminated(struct sNewNode* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 41 "21obj.c"
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__;
void* right_value118;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
    # 46 "21obj.c"
    __result76__ = __result_obj__ = ((char*)(right_value118=__builtin_string("sNewNode")));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_77;
void* right_value119;
struct CVALUE* come_value_78;
void* right_value120;
void* right_value121;
struct buffer* num_string_79;
struct list$1sNodeph* o2_saved_80;
struct sNode* it_83;
_Bool _if_conditional119;
_Bool __result84__;
void* right_value122;
struct CVALUE* cvalue_86;
void* right_value123;
void* right_value124;
struct sType* type2_87;
void* right_value125;
char* type_name_90;
void* right_value126;
char* type_name2_91;
void* right_value127;
void* right_value128;
char* __dec_obj38;
_Bool _if_conditional120;
void* right_value129;
char* __dec_obj39;
void* right_value130;
struct sType* __dec_obj40;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_77, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&num_string_79, 0, sizeof(struct buffer*));
memset(&o2_saved_80, 0, sizeof(struct list$1sNodeph*));
memset(&it_83, 0, sizeof(struct sNode*));
right_value122 = (void*)0;
memset(&cvalue_86, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&type2_87, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&type_name_90, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&type_name2_91, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    # 51 "21obj.c"
    type_77=self->type;
    # 53 "21obj.c"
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 53, "CVALUE"))));
    come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 55 "21obj.c"
    num_string_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 55, "buffer"))))))));
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value121,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 57 "21obj.c"
    buffer_append_str(num_string_79,"1");
    # 70 "21obj.c"
    for(    o2_saved_80=(struct list$1sNodeph*)come_increment_ref_count((type_77->mArrayNum)),it_83=list$1sNodeph_begin((o2_saved_80));    !list$1sNodeph_end((o2_saved_80));    it_83=list$1sNodeph_next((o2_saved_80))    ){
        # 64 "21obj.c"
        # 60 "21obj.c"
        if(_if_conditional119=!node_compile(it_83,info),        _if_conditional119) {
            # 61 "21obj.c"
            __result84__ = (_Bool)0;
            come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result84__;
        }
        # 64 "21obj.c"
        cvalue_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value122,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 65 "21obj.c"
        dec_stack_ptr(1,info);
        # 67 "21obj.c"
        buffer_append_str(num_string_79,((char*)(right_value123=xsprintf("*(%s)",cvalue_86->c_value))));
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(cvalue_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    # 70 "21obj.c"
    type2_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=solve_generics(type_77,info->generics_type,info))));
    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 77 "21obj.c"
    list$1sNodeph_reset(type2_87->mArrayNum);
    # 79 "21obj.c"
    type_name_90=(char*)come_increment_ref_count(((char*)(right_value125=make_type_name_string(type2_87,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 81 "21obj.c"
    type_name2_91=(char*)come_increment_ref_count(((char*)(right_value126=make_come_type_name_string(type2_87,info))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 83 "21obj.c"
    __dec_obj38=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_90,type_name_90,((char*)(right_value127=buffer_to_string(num_string_79))),info->sname,info->sline,type_name2_91))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 85 "21obj.c"
    type2_87->mHeap=(_Bool)1;
    # 86 "21obj.c"
    type2_87->mPointerNum++;
    # 93 "21obj.c"
    # 88 "21obj.c"
    if(type2_87->mNoSolvedGenericsType->v1) {
        # 89 "21obj.c"
        type2_87->mNoSolvedGenericsType->v1->mPointerNum++;
        # 90 "21obj.c"
        type2_87->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    # 93 "21obj.c"
    __dec_obj39=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value129=append_object_to_right_values(come_value_78->c_value,(struct sType*)come_increment_ref_count(type2_87),info))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 94 "21obj.c"
    __dec_obj40=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(type2_87))));
    come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 95 "21obj.c"
    come_value_78->var=((void*)0);
    # 97 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_78->c_value);
    # 99 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    # 101 "21obj.c"
    __result87__ = (_Bool)1;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result56__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value93;
char* __dec_obj20;
_Bool _if_conditional49;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
void* right_value110;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value112;
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
void* right_value113;
struct sNode* __dec_obj33;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value114;
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
void* right_value115;
char* __dec_obj35;
_Bool _if_conditional110;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            # 2 "sType_clone"
            __result56__ = __result_obj__ = (void*)0;
            return __result56__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional39=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional39) {
            # 5 "sType_clone"
            __dec_obj16=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional43) {
            # 6 "sType_clone"
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional47) {
            # 7 "sType_clone"
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional48) {
            # 8 "sType_clone"
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional49) {
            # 9 "sType_clone"
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional50) {
            # 10 "sType_clone"
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional64) {
            # 12 "sType_clone"
            __dec_obj26=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional65) {
            # 13 "sType_clone"
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional69) {
            # 14 "sType_clone"
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional71=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional71) {
            # 16 "sType_clone"
            __dec_obj32=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional96) {
            # 41 "sType_clone"
            __dec_obj33=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional99) {
            # 44 "sType_clone"
            __dec_obj34=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional109) {
            # 54 "sType_clone"
            __dec_obj35=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result73__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
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
            if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional21) {
                # 0 "sType_finalize"
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional23) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional25) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional26) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional27) {
                # 4 "sType_finalize"
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional28) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional30) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional31) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional33) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional34) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional35) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional36) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional37) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
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
                    if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional24) {
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
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional29) {
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
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional32) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result57__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value87;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    # 131 "./neo-c.h"
                    __result57__ = __result_obj__ = ((void*)0);
                    return __result57__;
                }
                # 133 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_55=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "./neo-c.h"
                __result60__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional41;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            # 147 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                # 157 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result59__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result59__;
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
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result61__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional44=self==(void*)0,                _if_conditional44) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result61__ = __result_obj__ = (void*)0;
                    return __result61__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional46) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj17=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result62__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional45) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result63__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value101;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    # 131 "./neo-c.h"
                    __result63__ = __result_obj__ = ((void*)0);
                    return __result63__;
                }
                # 133 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_63=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_63->item)))));
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional52;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional52=self->len==0,                        _if_conditional52) {
                            # 147 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional53=self->len==1,                            _if_conditional53) {
                                # 157 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result65__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result65__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result66__;
void* right_value100;
struct sNode* result_67;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            # 2 "sNode_clone"
                            __result66__ = __result_obj__ = (void*)0;
                            return __result66__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional55) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result67__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result67__;
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
_Bool _if_conditional66;
struct list$1charph* __result69__;
void* right_value104;
void* right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value109;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    # 131 "./neo-c.h"
                    __result69__ = __result_obj__ = ((void*)0);
                    return __result69__;
                }
                # 133 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_71=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_71->item)))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "./neo-c.h"
                __result72__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional67;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional67=self->len==0,                        _if_conditional67) {
                            # 147 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional68=self->len==1,                            _if_conditional68) {
                                # 157 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result71__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result71__;
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

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional113=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional113) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional114=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional114) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional115;
struct sNode* result_81;
struct sNode* __result77__;
_Bool _if_conditional116;
struct sNode* __result78__;
struct sNode* result_82;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sNode*));
memset(&result_82, 0, sizeof(struct sNode*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional115=self==((void*)0),        _if_conditional115) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_81,0,sizeof(struct sNode*));
            # 279 "./neo-c.h"
            __result77__ = __result_obj__ = result_81;
            return __result77__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result78__ = __result_obj__ = self->it->item;
            return __result78__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_82,0,sizeof(struct sNode*));
        # 289 "./neo-c.h"
        __result79__ = __result_obj__ = result_82;
        return __result79__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result80__ = self==((void*)0)||self->it==((void*)0);
        return __result80__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional117;
struct sNode* result_84;
struct sNode* __result81__;
_Bool _if_conditional118;
struct sNode* __result82__;
struct sNode* result_85;
struct sNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sNode*));
memset(&result_85, 0, sizeof(struct sNode*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional117=self==((void*)0)||self->it==((void*)0),        _if_conditional117) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_84,0,sizeof(struct sNode*));
            # 296 "./neo-c.h"
            __result81__ = __result_obj__ = result_84;
            return __result81__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result82__ = __result_obj__ = self->it->item;
            return __result82__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_85,0,sizeof(struct sNode*));
        # 307 "./neo-c.h"
        __result83__ = __result_obj__ = result_85;
        return __result83__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_88;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_89;
struct list$1sNodeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_88, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_89, 0, sizeof(struct list_item$1sNodeph*));
        # 420 "./neo-c.h"
        it_88=self->head;
        # 427 "./neo-c.h"
        while(_while_condtional16=it_88!=((void*)0),        _while_condtional16) {
            # 422 "./neo-c.h"
            prev_it_89=it_88;
            # 423 "./neo-c.h"
            it_88=it_88->next;
            # 424 "./neo-c.h"
            come_call_finalizer3(prev_it_89,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 427 "./neo-c.h"
        self->head=((void*)0);
        # 428 "./neo-c.h"
        self->tail=((void*)0);
        # 430 "./neo-c.h"
        self->len=0;
        # 432 "./neo-c.h"
        __result85__ = __result_obj__ = self;
        return __result85__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value131;
struct list_item$1CVALUEph* litem_92;
struct CVALUE* __dec_obj41;
_Bool _if_conditional123;
void* right_value132;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj42;
void* right_value133;
struct list_item$1CVALUEph* litem_94;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1CVALUEph*));
right_value132 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1CVALUEph*));
right_value133 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional121=self->len==0,        _if_conditional121) {
            # 217 "./neo-c.h"
            litem_92=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value131,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_92->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_92->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj41=litem_92->item;
            litem_92->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_92;
            # 224 "./neo-c.h"
            self->head=litem_92;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional123=self->len==1,            _if_conditional123) {
                # 227 "./neo-c.h"
                litem_93=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value132,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_93->prev=self->head;
                # 230 "./neo-c.h"
                litem_93->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj42=litem_93->item;
                litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_93;
                # 234 "./neo-c.h"
                self->head->next=litem_93;
            }
            else {
                # 237 "./neo-c.h"
                litem_94=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_94->prev=self->tail;
                # 240 "./neo-c.h"
                litem_94->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj43=litem_94->item;
                litem_94->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj43,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_94;
                # 244 "./neo-c.h"
                self->tail=litem_94;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result86__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result86__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional122=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional122) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value134;
void* right_value135;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value139;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value139 = (void*)0;
    # 107 "21obj.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 107, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value135=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value134=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 107, "sNewNode")))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result90__ = __result_obj__ = ((struct sNode*)(right_value139=_inf_value1));
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(right_value134,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value135,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result90__;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value140;
struct sNode* __dec_obj46;
void* right_value141;
struct sType* __dec_obj47;
void* right_value142;
char* __dec_obj48;
struct sImplementsNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
    # 117 "21obj.c"
    __dec_obj46=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=sNode_clone(obj_exp))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 118 "21obj.c"
    __dec_obj47=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(inf_type))));
    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 120 "21obj.c"
    self->sline=info->sline;
    # 121 "21obj.c"
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 124 "21obj.c"
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sImplementsNode_terminated(struct sImplementsNode* self){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    # 126 "21obj.c"
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__;
void* right_value143;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    # 131 "21obj.c"
    __result93__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sImplementsNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct sNode* obj_exp_96;
void* right_value145;
struct sType* inf_type_97;
_Bool _if_conditional133;
_Bool __result94__;
void* right_value146;
struct CVALUE* come_value_98;
void* right_value147;
struct sType* type_99;
struct sClass* klass_100;
void* right_value148;
struct CVALUE* come_value2_101;
void* right_value149;
struct sType* type2_102;
void* right_value150;
char* type_name_103;
void* right_value151;
char* type_name2_104;
static int inf_num_105=0;
void* right_value152;
char* buf_106;
void* right_value153;
char* buf2_107;
void* right_value154;
struct sType* typeX_108;
void* right_value155;
void* right_value156;
int i_109;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_113;
struct sType* field_type_114;
void* right_value157;
char* method_name_115;
struct sFun* fun_118;
_Bool _if_conditional159;
struct sClass* klass2_124;
_Bool _while_condtional21;
void* right_value158;
char* __dec_obj49;
_Bool _if_conditional169;
void* right_value159;
char* __dec_obj50;
void* right_value160;
struct sType* type3_125;
void* right_value161;
struct sType* __dec_obj51;
void* right_value162;
char* __dec_obj52;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&obj_exp_96, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
memset(&inf_type_97, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
memset(&type_99, 0, sizeof(struct sType*));
memset(&klass_100, 0, sizeof(struct sClass*));
right_value148 = (void*)0;
memset(&come_value2_101, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
memset(&type2_102, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&type_name_103, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&type_name2_104, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&buf_106, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&buf2_107, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&typeX_108, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&i_109, 0, sizeof(int));
memset(&name_113, 0, sizeof(char*));
memset(&field_type_114, 0, sizeof(struct sType*));
memset(&name_113, 0, sizeof(char*));
memset(&field_type_114, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&method_name_115, 0, sizeof(char*));
memset(&fun_118, 0, sizeof(struct sFun*));
memset(&klass2_124, 0, sizeof(struct sClass*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&type3_125, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
    # 136 "21obj.c"
    obj_exp_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(self->obj_exp))));
    if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 137 "21obj.c"
    inf_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(self->inf_type))));
    come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 143 "21obj.c"
    # 139 "21obj.c"
    if(_if_conditional133=!node_compile(obj_exp_96,info),    _if_conditional133) {
        # 140 "21obj.c"
        __result94__ = (_Bool)0;
        if(obj_exp_96) { obj_exp_96 = come_decrement_ref_count2(obj_exp_96, ((struct sNode*)obj_exp_96)->finalize, ((struct sNode*)obj_exp_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    # 143 "21obj.c"
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 144 "21obj.c"
    dec_stack_ptr(1,info);
    # 146 "21obj.c"
    type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(come_value_98->type))));
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 147 "21obj.c"
    type_99->mPointerNum--;
    # 148 "21obj.c"
    type_99->mHeap=(_Bool)0;
    # 150 "21obj.c"
    klass_100=inf_type_97->mClass;
    # 152 "21obj.c"
    come_value2_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 152, "CVALUE"))));
    come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 154 "21obj.c"
    type2_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(inf_type_97))));
    come_call_finalizer3(right_value149,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 156 "21obj.c"
    type_name_103=(char*)come_increment_ref_count(((char*)(right_value150=make_type_name_string(inf_type_97,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 157 "21obj.c"
    type_name2_104=(char*)come_increment_ref_count(((char*)(right_value151=make_type_name_string(type_99,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 159 "21obj.c"
    # 161 "21obj.c"
    buf_106=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s* _inf_value%d;\n",type_name_103,++inf_num_105))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 162 "21obj.c"
    add_come_code_at_function_head(info,buf_106);
    # 163 "21obj.c"
    buf2_107=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s* _inf_obj_value%d;\n",type_name2_104,inf_num_105))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 164 "21obj.c"
    add_come_code_at_function_head(info,buf2_107);
    # 166 "21obj.c"
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_105,type_name_103,type_name_103,info->sname,info->sline,type_name_103);
    # 167 "21obj.c"
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_105,come_value_98->c_value);
    # 168 "21obj.c"
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_105,inf_num_105);
    # 170 "21obj.c"
    typeX_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type_99))));
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 171 "21obj.c"
    typeX_108->mPointerNum++;
    # 173 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value155=create_finalizer_automatically(typeX_108,"finalize",info)));
    come_call_finalizer3(right_value155,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 174 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value156=create_cloner_automatically(typeX_108,"clone",info)));
    come_call_finalizer3(right_value156,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 204 "21obj.c"
    for(    i_109=1;    i_109<list$1tuple2$2charphsTypephph_length(klass_100->mFields);    i_109++    ){
        # 177 "21obj.c"
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_100->mFields,i_109), "21obj.c", 177, 0));
        name_113=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_114=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 179 "21obj.c"
        method_name_115=(char*)come_increment_ref_count(((char*)(right_value157=create_method_name(type_99,(_Bool)0,name_113,info,(_Bool)1))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 181 "21obj.c"
        fun_118=map$2charphsFunph_at(info->funcs,method_name_115,((void*)0));
        # 202 "21obj.c"
        # 183 "21obj.c"
        if(_if_conditional159=fun_118==((void*)0),        _if_conditional159) {
            # 184 "21obj.c"
            klass2_124=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_99->mClass->mName), "21obj.c", 184, 1));
            # 197 "21obj.c"
            while(_while_condtional21=map$2charphsClassphp_operator_load_element(info->classes,klass2_124->mParentClassName),            _while_condtional21) {
                # 186 "21obj.c"
                klass2_124=map$2charphsClassphp_operator_load_element(info->classes,klass2_124->mParentClassName);
                # 188 "21obj.c"
                __dec_obj49=method_name_115;
                method_name_115=(char*)come_increment_ref_count(((char*)(right_value158=create_method_name_using_class(klass2_124,(_Bool)0,name_113,info,(_Bool)1))));
                __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 190 "21obj.c"
                fun_118=map$2charphsFunph_at(info->funcs,method_name_115,((void*)0));
                # 195 "21obj.c"
                # 192 "21obj.c"
                if(fun_118) {
                    # 193 "21obj.c"
                    break;
                }
            }
            # 197 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_105,name_113,method_name_115);
        }
        else {
            # 200 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_105,name_113,method_name_115);
        }
        name_113 = come_decrement_ref_count2(name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_115 = come_decrement_ref_count2(method_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 204 "21obj.c"
    __dec_obj50=come_value2_101->c_value;
    come_value2_101->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("_inf_value%d",inf_num_105))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 205 "21obj.c"
    type3_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(inf_type_97))));
    come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 206 "21obj.c"
    type3_125->mPointerNum++;
    # 207 "21obj.c"
    type3_125->mHeap=(_Bool)1;
    # 208 "21obj.c"
    type2_102->mHeap=(_Bool)1;
    # 209 "21obj.c"
    __dec_obj51=come_value2_101->type;
    come_value2_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type2_102))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 210 "21obj.c"
    __dec_obj52=come_value2_101->c_value;
    come_value2_101->c_value=(char*)come_increment_ref_count(((char*)(right_value162=append_object_to_right_values(come_value2_101->c_value,(struct sType*)come_increment_ref_count(type3_125),info))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 211 "21obj.c"
    come_value2_101->type->mPointerNum++;
    # 212 "21obj.c"
    come_value2_101->var=((void*)0);
    # 214 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_101->c_value);
    # 216 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_101));
    # 218 "21obj.c"
    __result107__ = (_Bool)1;
    if(obj_exp_96) { obj_exp_96 = come_decrement_ref_count2(obj_exp_96, ((struct sNode*)obj_exp_96)->finalize, ((struct sNode*)obj_exp_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_103 = come_decrement_ref_count2(type_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_104 = come_decrement_ref_count2(type_name2_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_106 = come_decrement_ref_count2(buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_107 = come_decrement_ref_count2(buf2_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_125,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result107__;
    if(obj_exp_96) { obj_exp_96 = come_decrement_ref_count2(obj_exp_96, ((struct sNode*)obj_exp_96)->finalize, ((struct sNode*)obj_exp_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_103 = come_decrement_ref_count2(type_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_104 = come_decrement_ref_count2(type_name2_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_106 = come_decrement_ref_count2(buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_107 = come_decrement_ref_count2(buf2_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_125,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple2$2sFunpcharphp_finalize"
        # 0 "tuple2$2sFunpcharphp_finalize"
        if(_if_conditional134=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional134) {
            # 0 "tuple2$2sFunpcharphp_finalize"
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional135;
int __result95__;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional135=self==((void*)0),        _if_conditional135) {
            # 352 "./neo-c.h"
            __result95__ = 0;
            return __result95__;
        }
        # 354 "./neo-c.h"
        __result96__ = self->len;
        return __result96__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional136;
struct list_item$1tuple2$2charphsTypephph* it_110;
int i_111;
_Bool _while_condtional17;
_Bool _if_conditional137;
struct tuple2$2charphsTypeph* __result97__;
struct tuple2$2charphsTypeph* default_value_112;
struct tuple2$2charphsTypeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_111, 0, sizeof(int));
memset(&default_value_112, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional136=position<0,            _if_conditional136) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_110=self->head;
            # 674 "./neo-c.h"
            i_111=0;
            # 681 "./neo-c.h"
            while(_while_condtional17=it_110!=((void*)0),            _while_condtional17) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional137=position==i_111,                _if_conditional137) {
                    # 677 "./neo-c.h"
                    __result97__ = __result_obj__ = it_110->item;
                    return __result97__;
                }
                # 679 "./neo-c.h"
                it_110=it_110->next;
                # 680 "./neo-c.h"
                i_111++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_112,0,sizeof(struct tuple2$2charphsTypeph*));
            # 685 "./neo-c.h"
            __result98__ = __result_obj__ = default_value_112;
            come_call_finalizer3(default_value_112,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer3(default_value_112,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional138;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2charphsTypephp_finalize"
                # 0 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional138=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional138) {
                    # 0 "tuple2$2charphsTypephp_finalize"
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2charphsTypephp_finalize"
                # 1 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional139=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional139) {
                    # 1 "tuple2$2charphsTypephp_finalize"
                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional18;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sFun* __result99__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sFun* __result100__;
struct sFun* __result101__;
struct sFun* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_116=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_117=hash_116;
            # 1226 "./neo-c.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional140=self->item_existance[it_117],                _if_conditional140) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional141=string_equals(self->keys[it_117],key),                    _if_conditional141) {
                        # 1209 "./neo-c.h"
                        __result99__ = __result_obj__ = self->items[it_117];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result99__;
                    }
                    # 1212 "./neo-c.h"
                    it_117++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional157=it_117>=self->size,                    _if_conditional157) {
                        # 1215 "./neo-c.h"
                        it_117=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional158=it_117==hash_116,                        _if_conditional158) {
                            # 1218 "./neo-c.h"
                            __result100__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result100__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result101__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result101__;
                }
            }
            # 1226 "./neo-c.h"
            __result102__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result102__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFun_finalize"
                            # 0 "sFun_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional142) {
                                # 0 "sFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFun_finalize"
                            # 1 "sFun_finalize"
                            if(_if_conditional143=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional143) {
                                # 1 "sFun_finalize"
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional144) {
                                # 2 "sFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional145) {
                                # 3 "sFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional146) {
                                # 4 "sFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional147=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional147) {
                                # 5 "sFun_finalize"
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional148=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional148) {
                                # 6 "sFun_finalize"
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional151=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional151) {
                                # 7 "sFun_finalize"
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional152=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional152) {
                                # 8 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional153=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional153) {
                                # 9 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional154=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional154) {
                                # 10 "sFun_finalize"
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 12 "sFun_finalize"
                            # 11 "sFun_finalize"
                            if(_if_conditional155=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional155) {
                                # 11 "sFun_finalize"
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 13 "sFun_finalize"
                            # 12 "sFun_finalize"
                            if(_if_conditional156=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional156) {
                                # 12 "sFun_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sBlock_finalize"
                                    # 0 "sBlock_finalize"
                                    if(_if_conditional149=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional149) {
                                        # 0 "sBlock_finalize"
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional150=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional150) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_119;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional19;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sClass* __result103__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sClass* __result104__;
struct sClass* __result105__;
struct sClass* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_119, 0, sizeof(struct sClass*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_119,0,sizeof(struct sClass*));
                # 1522 "./neo-c.h"
                hash_120=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_121=hash_120;
                # 1547 "./neo-c.h"
                while(_while_condtional19=(_Bool)1,                _while_condtional19) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional160=self->item_existance[it_121],                    _if_conditional160) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional161=string_equals(self->keys[it_121],key),                        _if_conditional161) {
                            # 1530 "./neo-c.h"
                            __result103__ = __result_obj__ = self->items[it_121];
                            come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 0, 0, (void*)0);
                            return __result103__;
                        }
                        # 1533 "./neo-c.h"
                        it_121++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional167=it_121>=self->size,                        _if_conditional167) {
                            # 1536 "./neo-c.h"
                            it_121=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional168=it_121==hash_120,                            _if_conditional168) {
                                # 1539 "./neo-c.h"
                                __result104__ = __result_obj__ = default_value_119;
                                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result104__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result105__ = __result_obj__ = default_value_119;
                        come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                    }
                }
                # 1547 "./neo-c.h"
                __result106__ = __result_obj__ = default_value_119;
                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result106__;
                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sClass_finalize"
                                # 0 "sClass_finalize"
                                if(_if_conditional162=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional162) {
                                    # 0 "sClass_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sClass_finalize"
                                # 1 "sClass_finalize"
                                if(_if_conditional163=self!=((void*)0)&&self->mFields!=((void*)0),                                _if_conditional163) {
                                    # 1 "sClass_finalize"
                                    come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sClass_finalize"
                                # 2 "sClass_finalize"
                                if(_if_conditional165=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional165) {
                                    # 2 "sClass_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sClass_finalize"
                                # 3 "sClass_finalize"
                                if(_if_conditional166=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                _if_conditional166) {
                                    # 3 "sClass_finalize"
                                    self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_122;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 114 "./neo-c.h"
                                        it_122=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional20=it_122!=((void*)0),                                        _while_condtional20) {
                                            # 116 "./neo-c.h"
                                            prev_it_123=it_122;
                                            # 117 "./neo-c.h"
                                            it_122=it_122->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                if(_if_conditional164=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional164) {
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj53;
struct sTrueNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    # 227 "21obj.c"
    self->sline=info->sline;
    # 228 "21obj.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 231 "21obj.c"
    __result108__ = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTrueNode_terminated(struct sTrueNode* self){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    # 233 "21obj.c"
    __result109__ = (_Bool)0;
    return __result109__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__;
void* right_value164;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 238 "21obj.c"
    __result110__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sTrueNode")));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
struct CVALUE* come_value_126;
void* right_value166;
char* __dec_obj54;
void* right_value167;
void* right_value168;
struct sType* __dec_obj55;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    # 243 "21obj.c"
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 243, "CVALUE"))));
    come_call_finalizer3(right_value165,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 245 "21obj.c"
    __dec_obj54=come_value_126->c_value;
    come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("(_Bool)1"))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 246 "21obj.c"
    __dec_obj55=come_value_126->type;
    come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 246, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 247 "21obj.c"
    come_value_126->var=((void*)0);
    # 249 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_126->c_value);
    # 251 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
    # 253 "21obj.c"
    __result111__ = (_Bool)1;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value169;
void* right_value170;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value173;
struct sNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value173 = (void*)0;
    # 259 "21obj.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 259, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value170=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value169=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 259, "sTrueNode")))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result114__ = __result_obj__ = ((struct sNode*)(right_value173=_inf_value2));
    come_call_finalizer3(right_value169,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result114__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value174;
char* __dec_obj57;
struct sFalseNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
    # 266 "21obj.c"
    self->sline=info->sline;
    # 267 "21obj.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 270 "21obj.c"
    __result115__ = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFalseNode_terminated(struct sFalseNode* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 272 "21obj.c"
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__;
void* right_value175;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    # 277 "21obj.c"
    __result117__ = __result_obj__ = ((char*)(right_value175=__builtin_string("sFalseNode")));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value176;
struct CVALUE* come_value_128;
void* right_value177;
char* __dec_obj58;
void* right_value178;
void* right_value179;
struct sType* __dec_obj59;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
memset(&come_value_128, 0, sizeof(struct CVALUE*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
    # 282 "21obj.c"
    come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 282, "CVALUE"))));
    come_call_finalizer3(right_value176,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 284 "21obj.c"
    __dec_obj58=come_value_128->c_value;
    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(_Bool)0"))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 285 "21obj.c"
    __dec_obj59=come_value_128->type;
    come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 285, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 286 "21obj.c"
    come_value_128->var=((void*)0);
    # 288 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_128->c_value);
    # 290 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
    # 292 "21obj.c"
    __result118__ = (_Bool)1;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value180;
void* right_value181;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value184;
struct sNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value184 = (void*)0;
    # 298 "21obj.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 298, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value181=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value180=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 298, "sFalseNode")))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result121__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value3));
    come_call_finalizer3(right_value180,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result121__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value185;
struct sType* __dec_obj61;
void* right_value186;
char* __dec_obj62;
struct sSizeOfNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
    # 307 "21obj.c"
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(type))));
    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 309 "21obj.c"
    self->sline=info->sline;
    # 310 "21obj.c"
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 313 "21obj.c"
    __result122__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSizeOfNode_terminated(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    # 315 "21obj.c"
    __result123__ = (_Bool)0;
    return __result123__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__;
void* right_value187;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    # 320 "21obj.c"
    __result124__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sSizeOfNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_130;
void* right_value188;
struct CVALUE* come_value_131;
void* right_value189;
struct sType* type2_132;
void* right_value190;
char* type_name_133;
void* right_value191;
char* __dec_obj63;
void* right_value192;
void* right_value193;
struct sType* __dec_obj64;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_130, 0, sizeof(struct sType*));
right_value188 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
memset(&type2_132, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&type_name_133, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 325 "21obj.c"
    type_130=self->type;
    # 327 "21obj.c"
    come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 327, "CVALUE"))));
    come_call_finalizer3(right_value188,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 329 "21obj.c"
    type2_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=solve_generics(type_130,info->generics_type,info))));
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 331 "21obj.c"
    type_name_133=(char*)come_increment_ref_count(((char*)(right_value190=make_type_name_string(type2_132,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 333 "21obj.c"
    __dec_obj63=come_value_131->c_value;
    come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("sizeof(%s)",type_name_133))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 334 "21obj.c"
    __dec_obj64=come_value_131->type;
    come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value192=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 334, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value192,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 335 "21obj.c"
    come_value_131->type->mUnsigned=(_Bool)1;
    # 336 "21obj.c"
    come_value_131->var=((void*)0);
    # 338 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_131->c_value);
    # 340 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
    # 342 "21obj.c"
    __result125__ = (_Bool)1;
    come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_133 = come_decrement_ref_count2(type_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result125__;
    come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_133 = come_decrement_ref_count2(type_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value194;
struct sNode* __dec_obj65;
void* right_value195;
char* __dec_obj66;
struct sSizeOfExpNode* __result126__;
struct sSizeOfExpNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
    # 352 "21obj.c"
    __dec_obj65=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(exp))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 354 "21obj.c"
    self->sline=info->sline;
    # 355 "21obj.c"
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 357 "21obj.c"
    __result126__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result126__;
    # 360 "21obj.c"
    __result127__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result127__;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSizeOfExpNode_terminated(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 362 "21obj.c"
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__;
void* right_value196;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    # 367 "21obj.c"
    __result129__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sSizeOfExpNode")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_134;
_Bool _if_conditional184;
_Bool __result130__;
void* right_value197;
struct CVALUE* come_value_135;
void* right_value198;
struct CVALUE* come_value2_136;
void* right_value199;
char* __dec_obj67;
void* right_value200;
void* right_value201;
struct sType* __dec_obj68;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_134, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
memset(&come_value_135, 0, sizeof(struct CVALUE*));
right_value198 = (void*)0;
memset(&come_value2_136, 0, sizeof(struct CVALUE*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
    # 372 "21obj.c"
    exp_134=(struct sNode*)come_increment_ref_count(self->exp);
    # 378 "21obj.c"
    # 374 "21obj.c"
    if(_if_conditional184=!node_compile(exp_134,info),    _if_conditional184) {
        # 375 "21obj.c"
        __result130__ = (_Bool)0;
        if(exp_134) { exp_134 = come_decrement_ref_count2(exp_134, ((struct sNode*)exp_134)->finalize, ((struct sNode*)exp_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result130__;
    }
    # 378 "21obj.c"
    come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value197,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 379 "21obj.c"
    dec_stack_ptr(1,info);
    # 381 "21obj.c"
    come_value2_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 381, "CVALUE"))));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 383 "21obj.c"
    __dec_obj67=come_value2_136->c_value;
    come_value2_136->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("sizeof(%s)",come_value_135->c_value))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 384 "21obj.c"
    __dec_obj68=come_value2_136->type;
    come_value2_136->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 384, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 385 "21obj.c"
    come_value2_136->type->mUnsigned=(_Bool)1;
    # 386 "21obj.c"
    come_value2_136->var=((void*)0);
    # 388 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_136->c_value);
    # 390 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_136));
    # 392 "21obj.c"
    __result131__ = (_Bool)1;
    if(exp_134) { exp_134 = come_decrement_ref_count2(exp_134, ((struct sNode*)exp_134)->finalize, ((struct sNode*)exp_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result131__;
    if(exp_134) { exp_134 = come_decrement_ref_count2(exp_134, ((struct sNode*)exp_134)->finalize, ((struct sNode*)exp_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value202;
struct sType* __dec_obj69;
void* right_value203;
char* __dec_obj70;
struct sTypeOfNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    # 402 "21obj.c"
    __dec_obj69=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type))));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 404 "21obj.c"
    self->sline=info->sline;
    # 405 "21obj.c"
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 408 "21obj.c"
    __result132__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result132__;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTypeOfNode_terminated(struct sTypeOfNode* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 410 "21obj.c"
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__;
void* right_value204;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    # 415 "21obj.c"
    __result134__ = __result_obj__ = ((char*)(right_value204=__builtin_string("sTypeOfNode")));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_137;
void* right_value205;
struct CVALUE* come_value_138;
void* right_value206;
struct sType* type2_139;
void* right_value207;
char* type_name_140;
void* right_value208;
char* __dec_obj71;
void* right_value209;
void* right_value210;
struct sType* __dec_obj72;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_137, 0, sizeof(struct sType*));
right_value205 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
memset(&type2_139, 0, sizeof(struct sType*));
right_value207 = (void*)0;
memset(&type_name_140, 0, sizeof(char*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
    # 420 "21obj.c"
    type_137=self->type;
    # 422 "21obj.c"
    come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 422, "CVALUE"))));
    come_call_finalizer3(right_value205,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 424 "21obj.c"
    type2_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=solve_generics(type_137,info->generics_type,info))));
    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 426 "21obj.c"
    type_name_140=(char*)come_increment_ref_count(((char*)(right_value207=make_type_name_string(type2_139,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 428 "21obj.c"
    __dec_obj71=come_value_138->c_value;
    come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("\"%s\"",type_name_140))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 429 "21obj.c"
    __dec_obj72=come_value_138->type;
    come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 429, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 430 "21obj.c"
    come_value_138->var=((void*)0);
    # 432 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_138->c_value);
    # 434 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
    # 436 "21obj.c"
    __result135__ = (_Bool)1;
    come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_139,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_140 = come_decrement_ref_count2(type_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result135__;
    come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_139,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_140 = come_decrement_ref_count2(type_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value211;
struct sNode* __dec_obj73;
void* right_value212;
char* __dec_obj74;
struct sTypeOfExpNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    # 446 "21obj.c"
    __dec_obj73=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value211=sNode_clone(exp))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 448 "21obj.c"
    self->sline=info->sline;
    # 449 "21obj.c"
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 452 "21obj.c"
    __result136__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result136__;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sTypeOfExpNode_terminated(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    # 454 "21obj.c"
    __result137__ = (_Bool)0;
    return __result137__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__;
void* right_value213;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    # 459 "21obj.c"
    __result138__ = __result_obj__ = ((char*)(right_value213=__builtin_string("sTypeOfExpNode")));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_141;
_Bool _if_conditional189;
_Bool __result139__;
void* right_value214;
struct CVALUE* come_value_142;
void* right_value215;
struct sType* type_143;
void* right_value216;
struct sType* type2_144;
void* right_value217;
char* type_name_145;
void* right_value218;
char* __dec_obj75;
void* right_value219;
void* right_value220;
struct sType* __dec_obj76;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_141, 0, sizeof(struct sNode*));
right_value214 = (void*)0;
memset(&come_value_142, 0, sizeof(struct CVALUE*));
right_value215 = (void*)0;
memset(&type_143, 0, sizeof(struct sType*));
right_value216 = (void*)0;
memset(&type2_144, 0, sizeof(struct sType*));
right_value217 = (void*)0;
memset(&type_name_145, 0, sizeof(char*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
    # 464 "21obj.c"
    exp_141=(struct sNode*)come_increment_ref_count(self->exp);
    # 470 "21obj.c"
    # 466 "21obj.c"
    if(_if_conditional189=!node_compile(exp_141,info),    _if_conditional189) {
        # 467 "21obj.c"
        __result139__ = (_Bool)0;
        if(exp_141) { exp_141 = come_decrement_ref_count2(exp_141, ((struct sNode*)exp_141)->finalize, ((struct sNode*)exp_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result139__;
    }
    # 470 "21obj.c"
    come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 471 "21obj.c"
    dec_stack_ptr(1,info);
    # 473 "21obj.c"
    type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(come_value_142->type))));
    come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 475 "21obj.c"
    type2_144=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=solve_generics(type_143,info->generics_type,info))));
    come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 477 "21obj.c"
    type_name_145=(char*)come_increment_ref_count(((char*)(right_value217=make_type_name_string(type2_144,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 479 "21obj.c"
    __dec_obj75=come_value_142->c_value;
    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("\"%s\"",type_name_145))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 480 "21obj.c"
    __dec_obj76=come_value_142->type;
    come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 480, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 481 "21obj.c"
    come_value_142->var=((void*)0);
    # 483 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_142->c_value);
    # 485 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
    # 487 "21obj.c"
    __result140__ = (_Bool)1;
    if(exp_141) { exp_141 = come_decrement_ref_count2(exp_141, ((struct sNode*)exp_141)->finalize, ((struct sNode*)exp_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_145 = come_decrement_ref_count2(type_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result140__;
    if(exp_141) { exp_141 = come_decrement_ref_count2(exp_141, ((struct sNode*)exp_141)->finalize, ((struct sNode*)exp_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_145 = come_decrement_ref_count2(type_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value221;
struct sNode* __dec_obj77;
void* right_value222;
char* __dec_obj78;
struct sDynamicTypeOfNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
    # 497 "21obj.c"
    __dec_obj77=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=sNode_clone(exp))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value221) { right_value221 = come_decrement_ref_count2(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 499 "21obj.c"
    self->sline=info->sline;
    # 500 "21obj.c"
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 503 "21obj.c"
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDynamicTypeOfNode_terminated(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    # 505 "21obj.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__;
void* right_value223;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
    # 510 "21obj.c"
    __result143__ = __result_obj__ = ((char*)(right_value223=__builtin_string("sDynamicTypeOfNode")));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_146;
_Bool _if_conditional192;
_Bool __result144__;
void* right_value224;
struct CVALUE* come_value_147;
_Bool _if_conditional193;
void* right_value225;
struct sType* type_148;
void* right_value226;
struct sType* type2_149;
void* right_value227;
char* type_name_150;
void* right_value228;
char* __dec_obj79;
void* right_value229;
void* right_value230;
struct sType* __dec_obj80;
_Bool __result145__;
void* right_value231;
struct CVALUE* come_value2_151;
void* right_value232;
char* __dec_obj81;
void* right_value233;
void* right_value234;
struct sType* __dec_obj82;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_146, 0, sizeof(struct sNode*));
right_value224 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
memset(&type_148, 0, sizeof(struct sType*));
right_value226 = (void*)0;
memset(&type2_149, 0, sizeof(struct sType*));
right_value227 = (void*)0;
memset(&type_name_150, 0, sizeof(char*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&come_value2_151, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
    # 515 "21obj.c"
    exp_146=(struct sNode*)come_increment_ref_count(self->exp);
    # 521 "21obj.c"
    # 517 "21obj.c"
    if(_if_conditional192=!node_compile(exp_146,info),    _if_conditional192) {
        # 518 "21obj.c"
        __result144__ = (_Bool)0;
        if(exp_146) { exp_146 = come_decrement_ref_count2(exp_146, ((struct sNode*)exp_146)->finalize, ((struct sNode*)exp_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result144__;
    }
    # 521 "21obj.c"
    come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value224,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 522 "21obj.c"
    dec_stack_ptr(1,info);
    # 553 "21obj.c"
    # 524 "21obj.c"
    if(_if_conditional193=!come_value_147->type->mHeap,    _if_conditional193) {
        # 525 "21obj.c"
        type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(come_value_147->type))));
        come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 527 "21obj.c"
        type2_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=solve_generics(type_148,info->generics_type,info))));
        come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 529 "21obj.c"
        type_name_150=(char*)come_increment_ref_count(((char*)(right_value227=make_type_name_string(type2_149,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 531 "21obj.c"
        __dec_obj79=come_value_147->c_value;
        come_value_147->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("\"%s\"",type_name_150))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 532 "21obj.c"
        __dec_obj80=come_value_147->type;
        come_value_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 532, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 533 "21obj.c"
        come_value_147->var=((void*)0);
        # 535 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_147->c_value);
        # 537 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
        # 539 "21obj.c"
        __result145__ = (_Bool)1;
        come_call_finalizer3(type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_149,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_150 = come_decrement_ref_count2(type_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_146) { exp_146 = come_decrement_ref_count2(exp_146, ((struct sNode*)exp_146)->finalize, ((struct sNode*)exp_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result145__;
        come_call_finalizer3(type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_149,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_150 = come_decrement_ref_count2(type_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 542 "21obj.c"
        come_value2_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 542, "CVALUE"))));
        come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 544 "21obj.c"
        __dec_obj81=come_value2_151->c_value;
        come_value2_151->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("come_dynamic_typeof(%s)",come_value_147->c_value))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 545 "21obj.c"
        __dec_obj82=come_value2_151->type;
        come_value2_151->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 545, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 546 "21obj.c"
        come_value2_151->var=((void*)0);
        # 548 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value2_151->c_value);
        # 550 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_151));
        come_call_finalizer3(come_value2_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 553 "21obj.c"
    __result146__ = (_Bool)1;
    if(exp_146) { exp_146 = come_decrement_ref_count2(exp_146, ((struct sNode*)exp_146)->finalize, ((struct sNode*)exp_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
    if(exp_146) { exp_146 = come_decrement_ref_count2(exp_146, ((struct sNode*)exp_146)->finalize, ((struct sNode*)exp_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sDynamicTypeOfNode_finalize"
        # 0 "sDynamicTypeOfNode_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional190) {
            # 0 "sDynamicTypeOfNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sDynamicTypeOfNode_finalize"
        # 1 "sDynamicTypeOfNode_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->exp!=((void*)0),        _if_conditional191) {
            # 1 "sDynamicTypeOfNode_finalize"
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value235;
struct sType* __dec_obj83;
void* right_value236;
char* __dec_obj84;
struct sAlignOfNode* __result147__;
struct sAlignOfNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
right_value236 = (void*)0;
    # 563 "21obj.c"
    __dec_obj83=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(type))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 565 "21obj.c"
    self->sline=info->sline;
    # 566 "21obj.c"
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 568 "21obj.c"
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result147__;
    # 571 "21obj.c"
    __result148__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignOfNode_terminated(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 573 "21obj.c"
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__;
void* right_value237;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
    # 578 "21obj.c"
    __result150__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sAlignOfNode")));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_152;
void* right_value238;
struct CVALUE* come_value_153;
void* right_value239;
struct sType* type2_154;
void* right_value240;
char* type_name_155;
void* right_value241;
char* __dec_obj85;
void* right_value242;
void* right_value243;
struct sType* __dec_obj86;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_152, 0, sizeof(struct sType*));
right_value238 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
memset(&type2_154, 0, sizeof(struct sType*));
right_value240 = (void*)0;
memset(&type_name_155, 0, sizeof(char*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
    # 583 "21obj.c"
    type_152=self->type;
    # 585 "21obj.c"
    come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 585, "CVALUE"))));
    come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 587 "21obj.c"
    type2_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=solve_generics(type_152,info->generics_type,info))));
    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 589 "21obj.c"
    type_name_155=(char*)come_increment_ref_count(((char*)(right_value240=make_type_name_string(type2_154,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 591 "21obj.c"
    __dec_obj85=come_value_153->c_value;
    come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("_Alignof(%s)",type_name_155))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 592 "21obj.c"
    __dec_obj86=come_value_153->type;
    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 592, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 593 "21obj.c"
    come_value_153->type->mUnsigned=(_Bool)1;
    # 594 "21obj.c"
    come_value_153->var=((void*)0);
    # 596 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_153->c_value);
    # 598 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
    # 600 "21obj.c"
    __result151__ = (_Bool)1;
    come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_155 = come_decrement_ref_count2(type_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result151__;
    come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_155 = come_decrement_ref_count2(type_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value244;
struct sNode* __dec_obj87;
void* right_value245;
char* __dec_obj88;
struct sAlignOfExpNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    # 610 "21obj.c"
    __dec_obj87=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(exp))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 612 "21obj.c"
    self->sline=info->sline;
    # 613 "21obj.c"
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 616 "21obj.c"
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result152__;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignOfExpNode_terminated(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 618 "21obj.c"
    __result153__ = (_Bool)0;
    return __result153__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__;
void* right_value246;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    # 623 "21obj.c"
    __result154__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sAlignOfExpNode")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_156;
_Bool _if_conditional198;
_Bool __result155__;
void* right_value247;
struct CVALUE* come_value_157;
void* right_value248;
struct CVALUE* come_value2_158;
void* right_value249;
char* __dec_obj89;
void* right_value250;
void* right_value251;
struct sType* __dec_obj90;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_156, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_157, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
memset(&come_value2_158, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 628 "21obj.c"
    exp_156=(struct sNode*)come_increment_ref_count(self->exp);
    # 634 "21obj.c"
    # 630 "21obj.c"
    if(_if_conditional198=!node_compile(exp_156,info),    _if_conditional198) {
        # 631 "21obj.c"
        __result155__ = (_Bool)0;
        if(exp_156) { exp_156 = come_decrement_ref_count2(exp_156, ((struct sNode*)exp_156)->finalize, ((struct sNode*)exp_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result155__;
    }
    # 634 "21obj.c"
    come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 635 "21obj.c"
    dec_stack_ptr(1,info);
    # 637 "21obj.c"
    come_value2_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 637, "CVALUE"))));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 639 "21obj.c"
    __dec_obj89=come_value2_158->c_value;
    come_value2_158->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("_AlignOf(%s)",come_value_157->c_value))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 640 "21obj.c"
    __dec_obj90=come_value2_158->type;
    come_value2_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 640, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 641 "21obj.c"
    come_value2_158->type->mUnsigned=(_Bool)1;
    # 642 "21obj.c"
    come_value2_158->var=((void*)0);
    # 644 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_158->c_value);
    # 646 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_158));
    # 648 "21obj.c"
    __result156__ = (_Bool)1;
    if(exp_156) { exp_156 = come_decrement_ref_count2(exp_156, ((struct sNode*)exp_156)->finalize, ((struct sNode*)exp_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    if(exp_156) { exp_156 = come_decrement_ref_count2(exp_156, ((struct sNode*)exp_156)->finalize, ((struct sNode*)exp_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value252;
struct sType* __dec_obj91;
void* right_value253;
char* __dec_obj92;
struct sAlignOfNode2* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    # 658 "21obj.c"
    __dec_obj91=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type))));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 660 "21obj.c"
    self->sline=info->sline;
    # 661 "21obj.c"
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 664 "21obj.c"
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignOfNode2_terminated(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    # 666 "21obj.c"
    __result158__ = (_Bool)0;
    return __result158__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__;
void* right_value254;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
    # 671 "21obj.c"
    __result159__ = __result_obj__ = ((char*)(right_value254=__builtin_string("sAlignOfNode2")));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_159;
void* right_value255;
struct CVALUE* come_value_160;
void* right_value256;
struct sType* type2_161;
void* right_value257;
char* type_name_162;
void* right_value258;
char* __dec_obj93;
void* right_value259;
void* right_value260;
struct sType* __dec_obj94;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_159, 0, sizeof(struct sType*));
right_value255 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value256 = (void*)0;
memset(&type2_161, 0, sizeof(struct sType*));
right_value257 = (void*)0;
memset(&type_name_162, 0, sizeof(char*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
    # 676 "21obj.c"
    type_159=self->type;
    # 678 "21obj.c"
    come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 678, "CVALUE"))));
    come_call_finalizer3(right_value255,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 680 "21obj.c"
    type2_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=solve_generics(type_159,info->generics_type,info))));
    come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 682 "21obj.c"
    type_name_162=(char*)come_increment_ref_count(((char*)(right_value257=make_type_name_string(type2_161,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 684 "21obj.c"
    __dec_obj93=come_value_160->c_value;
    come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("__alignof__(%s)",type_name_162))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 685 "21obj.c"
    __dec_obj94=come_value_160->type;
    come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value259=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 685, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 686 "21obj.c"
    come_value_160->type->mUnsigned=(_Bool)1;
    # 687 "21obj.c"
    come_value_160->var=((void*)0);
    # 689 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_160->c_value);
    # 691 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
    # 693 "21obj.c"
    __result160__ = (_Bool)1;
    come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_162 = come_decrement_ref_count2(type_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_162 = come_decrement_ref_count2(type_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value261;
struct sNode* __dec_obj95;
void* right_value262;
char* __dec_obj96;
struct sAlignOfExpNode2* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
right_value262 = (void*)0;
    # 703 "21obj.c"
    __dec_obj95=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(exp))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 705 "21obj.c"
    self->sline=info->sline;
    # 706 "21obj.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 709 "21obj.c"
    __result161__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result161__;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignOfExpNode2_terminated(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 711 "21obj.c"
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__;
void* right_value263;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
    # 716 "21obj.c"
    __result163__ = __result_obj__ = ((char*)(right_value263=__builtin_string("sAlignOfExpNode2")));
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_163;
_Bool _if_conditional203;
_Bool __result164__;
void* right_value264;
struct CVALUE* come_value_164;
void* right_value265;
struct CVALUE* come_value2_165;
void* right_value266;
char* __dec_obj97;
void* right_value267;
void* right_value268;
struct sType* __dec_obj98;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_163, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
memset(&come_value2_165, 0, sizeof(struct CVALUE*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
    # 721 "21obj.c"
    exp_163=(struct sNode*)come_increment_ref_count(self->exp);
    # 727 "21obj.c"
    # 723 "21obj.c"
    if(_if_conditional203=!node_compile(exp_163,info),    _if_conditional203) {
        # 724 "21obj.c"
        __result164__ = (_Bool)0;
        if(exp_163) { exp_163 = come_decrement_ref_count2(exp_163, ((struct sNode*)exp_163)->finalize, ((struct sNode*)exp_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result164__;
    }
    # 727 "21obj.c"
    come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value264,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 728 "21obj.c"
    dec_stack_ptr(1,info);
    # 730 "21obj.c"
    come_value2_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 730, "CVALUE"))));
    come_call_finalizer3(right_value265,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 732 "21obj.c"
    __dec_obj97=come_value2_165->c_value;
    come_value2_165->c_value=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("__alignof__(%s)",come_value_164->c_value))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 733 "21obj.c"
    __dec_obj98=come_value2_165->type;
    come_value2_165->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 733, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 734 "21obj.c"
    come_value2_165->type->mUnsigned=(_Bool)1;
    # 735 "21obj.c"
    come_value2_165->var=((void*)0);
    # 737 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_165->c_value);
    # 739 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_165));
    # 741 "21obj.c"
    __result165__ = (_Bool)1;
    if(exp_163) { exp_163 = come_decrement_ref_count2(exp_163, ((struct sNode*)exp_163)->finalize, ((struct sNode*)exp_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
    if(exp_163) { exp_163 = come_decrement_ref_count2(exp_163, ((struct sNode*)exp_163)->finalize, ((struct sNode*)exp_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value269;
struct sType* __dec_obj99;
void* right_value270;
char* __dec_obj100;
struct sAlignAsNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
    # 751 "21obj.c"
    __dec_obj99=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(type))));
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 753 "21obj.c"
    self->sline=info->sline;
    # 754 "21obj.c"
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(info->sname))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 757 "21obj.c"
    __result166__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result166__;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignAsNode_terminated(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 759 "21obj.c"
    __result167__ = (_Bool)0;
    return __result167__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__;
void* right_value271;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
    # 764 "21obj.c"
    __result168__ = __result_obj__ = ((char*)(right_value271=__builtin_string("sAlignAsNode")));
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_166;
void* right_value272;
struct CVALUE* come_value_167;
void* right_value273;
struct sType* type2_168;
void* right_value274;
char* type_name_169;
void* right_value275;
char* __dec_obj101;
void* right_value276;
void* right_value277;
struct sType* __dec_obj102;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_166, 0, sizeof(struct sType*));
right_value272 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
memset(&type2_168, 0, sizeof(struct sType*));
right_value274 = (void*)0;
memset(&type_name_169, 0, sizeof(char*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
    # 769 "21obj.c"
    type_166=self->type;
    # 771 "21obj.c"
    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 771, "CVALUE"))));
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 773 "21obj.c"
    type2_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=solve_generics(type_166,info->generics_type,info))));
    come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 775 "21obj.c"
    type_name_169=(char*)come_increment_ref_count(((char*)(right_value274=make_type_name_string(type2_168,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 777 "21obj.c"
    __dec_obj101=come_value_167->c_value;
    come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("_Alignas(%s)",type_name_169))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 778 "21obj.c"
    __dec_obj102=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 778, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 779 "21obj.c"
    come_value_167->type->mUnsigned=(_Bool)1;
    # 780 "21obj.c"
    come_value_167->var=((void*)0);
    # 782 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_167->c_value);
    # 784 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    # 786 "21obj.c"
    __result169__ = (_Bool)1;
    come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result169__;
    come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sNode* __dec_obj103;
void* right_value279;
char* __dec_obj104;
struct sAlignAsExpNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 796 "21obj.c"
    __dec_obj103=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(exp))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 798 "21obj.c"
    self->sline=info->sline;
    # 799 "21obj.c"
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 802 "21obj.c"
    __result170__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result170__;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignAsExpNode_terminated(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    # 804 "21obj.c"
    __result171__ = (_Bool)0;
    return __result171__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__;
void* right_value280;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
    # 809 "21obj.c"
    __result172__ = __result_obj__ = ((char*)(right_value280=__builtin_string("sAlignAsExpNode")));
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result172__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_170;
_Bool _if_conditional208;
_Bool __result173__;
void* right_value281;
struct CVALUE* come_value_171;
void* right_value282;
struct CVALUE* come_value2_172;
void* right_value283;
char* __dec_obj105;
void* right_value284;
void* right_value285;
struct sType* __dec_obj106;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_170, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
memset(&come_value2_172, 0, sizeof(struct CVALUE*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
    # 814 "21obj.c"
    exp_170=(struct sNode*)come_increment_ref_count(self->exp);
    # 820 "21obj.c"
    # 816 "21obj.c"
    if(_if_conditional208=!node_compile(exp_170,info),    _if_conditional208) {
        # 817 "21obj.c"
        __result173__ = (_Bool)0;
        if(exp_170) { exp_170 = come_decrement_ref_count2(exp_170, ((struct sNode*)exp_170)->finalize, ((struct sNode*)exp_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result173__;
    }
    # 820 "21obj.c"
    come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value281,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 821 "21obj.c"
    dec_stack_ptr(1,info);
    # 823 "21obj.c"
    come_value2_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 823, "CVALUE"))));
    come_call_finalizer3(right_value282,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 825 "21obj.c"
    __dec_obj105=come_value2_172->c_value;
    come_value2_172->c_value=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("_Alignas(%s)",come_value_171->c_value))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 826 "21obj.c"
    __dec_obj106=come_value2_172->type;
    come_value2_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value284=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 826, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value284,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value285,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 827 "21obj.c"
    come_value2_172->type->mUnsigned=(_Bool)1;
    # 828 "21obj.c"
    come_value2_172->var=((void*)0);
    # 830 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_172->c_value);
    # 832 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_172));
    # 834 "21obj.c"
    __result174__ = (_Bool)1;
    if(exp_170) { exp_170 = come_decrement_ref_count2(exp_170, ((struct sNode*)exp_170)->finalize, ((struct sNode*)exp_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result174__;
    if(exp_170) { exp_170 = come_decrement_ref_count2(exp_170, ((struct sNode*)exp_170)->finalize, ((struct sNode*)exp_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value286;
struct sNode* __dec_obj107;
void* right_value287;
char* __dec_obj108;
struct sDeleteNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    # 844 "21obj.c"
    __dec_obj107=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 846 "21obj.c"
    self->sline=info->sline;
    # 847 "21obj.c"
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 850 "21obj.c"
    __result175__ = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result175__;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDeleteNode_terminated(struct sDeleteNode* self){
void* __result_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    # 852 "21obj.c"
    __result176__ = (_Bool)0;
    return __result176__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__;
void* right_value288;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    # 857 "21obj.c"
    __result177__ = __result_obj__ = ((char*)(right_value288=__builtin_string("sDeleteNode")));
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_173;
_Bool _if_conditional211;
_Bool __result178__;
void* right_value289;
struct CVALUE* come_value_174;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_173, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
    # 862 "21obj.c"
    node_173=self->node;
    # 868 "21obj.c"
    # 864 "21obj.c"
    if(_if_conditional211=!node_compile(node_173,info),    _if_conditional211) {
        # 865 "21obj.c"
        __result178__ = (_Bool)0;
        return __result178__;
    }
    # 868 "21obj.c"
    come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value289,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 869 "21obj.c"
    dec_stack_ptr(1,info);
    # 871 "21obj.c"
    free_object(come_value_174->type,come_value_174->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    # 873 "21obj.c"
    __result179__ = (_Bool)1;
    come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result179__;
    come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value290;
struct sNode* __dec_obj109;
void* right_value291;
char* __dec_obj110;
struct sForceDeleteNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
right_value291 = (void*)0;
    # 883 "21obj.c"
    __dec_obj109=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(node))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 885 "21obj.c"
    self->sline=info->sline;
    # 886 "21obj.c"
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(info->sname))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 889 "21obj.c"
    __result180__ = __result_obj__ = self;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result180__;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sForceDeleteNode_terminated(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    # 891 "21obj.c"
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__;
void* right_value292;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    # 896 "21obj.c"
    __result182__ = __result_obj__ = ((char*)(right_value292=__builtin_string("sForceDeleteNode")));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_175;
_Bool _if_conditional214;
_Bool __result183__;
void* right_value293;
struct CVALUE* come_value_176;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_175, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&come_value_176, 0, sizeof(struct CVALUE*));
    # 901 "21obj.c"
    node_175=self->node;
    # 907 "21obj.c"
    # 903 "21obj.c"
    if(_if_conditional214=!node_compile(node_175,info),    _if_conditional214) {
        # 904 "21obj.c"
        __result183__ = (_Bool)0;
        return __result183__;
    }
    # 907 "21obj.c"
    come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 908 "21obj.c"
    dec_stack_ptr(1,info);
    # 910 "21obj.c"
    free_object(come_value_176->type,come_value_176->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    # 912 "21obj.c"
    __result184__ = (_Bool)1;
    come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
    come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value294;
struct sNode* __dec_obj111;
void* right_value295;
char* __dec_obj112;
struct sDelegateNode* __result185__;
struct sDelegateNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
right_value295 = (void*)0;
    # 922 "21obj.c"
    __dec_obj111=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(node))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 924 "21obj.c"
    self->sline=info->sline;
    # 925 "21obj.c"
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(info->sname))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 927 "21obj.c"
    __result185__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    # 930 "21obj.c"
    __result186__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result186__;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDelegateNode_terminated(struct sDelegateNode* self){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    # 932 "21obj.c"
    __result187__ = (_Bool)0;
    return __result187__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__;
void* right_value296;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
    # 937 "21obj.c"
    __result188__ = __result_obj__ = ((char*)(right_value296=__builtin_string("sDelegateNode")));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_177;
_Bool _if_conditional217;
_Bool __result189__;
void* right_value297;
struct CVALUE* come_value_178;
_Bool _if_conditional218;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_177, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
    # 942 "21obj.c"
    node_177=self->node;
    # 948 "21obj.c"
    # 944 "21obj.c"
    if(_if_conditional217=!node_compile(node_177,info),    _if_conditional217) {
        # 945 "21obj.c"
        __result189__ = (_Bool)0;
        return __result189__;
    }
    # 948 "21obj.c"
    come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value297,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 949 "21obj.c"
    dec_stack_ptr(1,info);
    # 951 "21obj.c"
    come_value_178->type->mDelegate=(_Bool)1;
    # 963 "21obj.c"
    # 953 "21obj.c"
    if(come_value_178->var) {
        # 954 "21obj.c"
        come_value_178->var->mType->mDelegate=(_Bool)1;
    }
    # 963 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
    # 965 "21obj.c"
    __result190__ = (_Bool)1;
    come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result190__;
    come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value298;
struct sNode* __dec_obj113;
void* right_value299;
char* __dec_obj114;
struct sShareNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
right_value299 = (void*)0;
    # 975 "21obj.c"
    __dec_obj113=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(node))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 977 "21obj.c"
    self->sline=info->sline;
    # 978 "21obj.c"
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value299=__builtin_string(info->sname))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 981 "21obj.c"
    __result191__ = __result_obj__ = self;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result191__;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sShareNode_terminated(struct sShareNode* self){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    # 983 "21obj.c"
    __result192__ = (_Bool)0;
    return __result192__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__;
void* right_value300;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
    # 988 "21obj.c"
    __result193__ = __result_obj__ = ((char*)(right_value300=__builtin_string("sShareNode")));
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result193__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_179;
_Bool _if_conditional221;
_Bool __result194__;
void* right_value301;
struct CVALUE* come_value_180;
_Bool _if_conditional222;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_179, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
    # 993 "21obj.c"
    node_179=self->node;
    # 999 "21obj.c"
    # 995 "21obj.c"
    if(_if_conditional221=!node_compile(node_179,info),    _if_conditional221) {
        # 996 "21obj.c"
        __result194__ = (_Bool)0;
        return __result194__;
    }
    # 999 "21obj.c"
    come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value301,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1000 "21obj.c"
    dec_stack_ptr(1,info);
    # 1002 "21obj.c"
    come_value_180->type->mShare=(_Bool)1;
    # 1008 "21obj.c"
    # 1004 "21obj.c"
    if(come_value_180->var) {
        # 1005 "21obj.c"
        come_value_180->var->mType->mShare=(_Bool)1;
    }
    # 1008 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    # 1010 "21obj.c"
    __result195__ = (_Bool)1;
    come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result195__;
    come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value302;
struct sNode* __dec_obj115;
void* right_value303;
char* __dec_obj116;
struct sBorrowNode* __result196__;
struct sBorrowNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
right_value303 = (void*)0;
    # 1020 "21obj.c"
    __dec_obj115=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(node))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1022 "21obj.c"
    self->sline=info->sline;
    # 1023 "21obj.c"
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(info->sname))));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1025 "21obj.c"
    __result196__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result196__;
    # 1028 "21obj.c"
    __result197__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result197__;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sBorrowNode_terminated(struct sBorrowNode* self){
void* __result_obj__;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1030 "21obj.c"
    __result198__ = (_Bool)0;
    return __result198__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__;
void* right_value304;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
    # 1035 "21obj.c"
    __result199__ = __result_obj__ = ((char*)(right_value304=__builtin_string("sBorrowNode")));
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result199__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_181;
_Bool _if_conditional225;
_Bool __result200__;
void* right_value305;
struct CVALUE* come_value_182;
int right_value_id_183;
_Bool _if_conditional226;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_181, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
memset(&right_value_id_183, 0, sizeof(int));
    # 1040 "21obj.c"
    node_181=self->node;
    # 1046 "21obj.c"
    # 1042 "21obj.c"
    if(_if_conditional225=!node_compile(node_181,info),    _if_conditional225) {
        # 1043 "21obj.c"
        __result200__ = (_Bool)0;
        return __result200__;
    }
    # 1046 "21obj.c"
    come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value305=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value305,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1047 "21obj.c"
    dec_stack_ptr(1,info);
    # 1049 "21obj.c"
    come_value_182->type->mHeap=(_Bool)0;
    # 1051 "21obj.c"
    right_value_id_183=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_182->c_value));
    # 1057 "21obj.c"
    # 1053 "21obj.c"
    if(_if_conditional226=right_value_id_183!=-1,    _if_conditional226) {
        # 1054 "21obj.c"
        remove_object_from_right_values(right_value_id_183,info);
    }
    # 1057 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
    # 1059 "21obj.c"
    __result201__ = (_Bool)1;
    come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result201__;
    come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value306;
struct sNode* __dec_obj117;
void* right_value307;
char* __dec_obj118;
struct sCloneNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
    # 1069 "21obj.c"
    __dec_obj117=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(node))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1071 "21obj.c"
    self->sline=info->sline;
    # 1072 "21obj.c"
    __dec_obj118=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1075 "21obj.c"
    __result202__ = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result202__;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCloneNode_terminated(struct sCloneNode* self){
void* __result_obj__;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1077 "21obj.c"
    __result203__ = (_Bool)0;
    return __result203__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__;
void* right_value308;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
    # 1082 "21obj.c"
    __result204__ = __result_obj__ = ((char*)(right_value308=__builtin_string("sCloneNode")));
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result204__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_184;
_Bool _if_conditional229;
_Bool __result205__;
void* right_value309;
struct CVALUE* left_value_185;
void* right_value310;
struct sType* left_type_186;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value311;
struct CVALUE* come_value_187;
void* right_value312;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_188;
char* c_value_189;
char* __dec_obj119;
void* right_value313;
struct sType* __dec_obj120;
void* right_value314;
char* __dec_obj121;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_184, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
memset(&left_value_185, 0, sizeof(struct CVALUE*));
right_value310 = (void*)0;
memset(&left_type_186, 0, sizeof(struct sType*));
right_value311 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
memset(&result_type_188, 0, sizeof(struct sType*));
memset(&c_value_189, 0, sizeof(char*));
memset(&result_type_188, 0, sizeof(struct sType*));
memset(&c_value_189, 0, sizeof(char*));
right_value313 = (void*)0;
right_value314 = (void*)0;
    # 1087 "21obj.c"
    node_184=self->node;
    # 1093 "21obj.c"
    # 1089 "21obj.c"
    if(_if_conditional229=!node_compile(node_184,info),    _if_conditional229) {
        # 1090 "21obj.c"
        __result205__ = (_Bool)0;
        return __result205__;
    }
    # 1093 "21obj.c"
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value309,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1094 "21obj.c"
    dec_stack_ptr(1,info);
    # 1096 "21obj.c"
    left_value_185->type->mClone=(_Bool)1;
    # 1098 "21obj.c"
    left_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(left_value_185->type))));
    come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1121 "21obj.c"
    # 1100 "21obj.c"
    if(_if_conditional230=left_type_186->mPointerNum==1&&string_operator_equals(left_type_186->mClass->mName,"void")&&left_type_186->mHeap==(_Bool)0,    _if_conditional230) {
        # 1101 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_185));
    }
    else {
        # 1121 "21obj.c"
        # 1103 "21obj.c"
        if(_if_conditional231=left_type_186->mPointerNum==0,        _if_conditional231) {
            # 1104 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_185));
        }
        else {
            # 1121 "21obj.c"
            # 1106 "21obj.c"
            if(_if_conditional232=left_type_186->mPointerNum>0,            _if_conditional232) {
                # 1107 "21obj.c"
                come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1107, "CVALUE"))));
                come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1109 "21obj.c"
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value312=clone_object(left_type_186,left_value_185->c_value,info)));
                result_type_188=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_189=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value312,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1110 "21obj.c"
                __dec_obj119=come_value_187->c_value;
                come_value_187->c_value=(char*)come_increment_ref_count(c_value_189);
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1111 "21obj.c"
                __dec_obj120=come_value_187->type;
                come_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_type_186))));
                come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1112 "21obj.c"
                come_value_187->type->mHeap=(_Bool)1;
                # 1113 "21obj.c"
                come_value_187->type->mClone=(_Bool)1;
                # 1114 "21obj.c"
                come_value_187->var=((void*)0);
                # 1116 "21obj.c"
                __dec_obj121=come_value_187->c_value;
                come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value314=append_object_to_right_values(come_value_187->c_value,(struct sType*)come_increment_ref_count(left_type_186),info))));
                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1118 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
                come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_188,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_189 = come_decrement_ref_count2(c_value_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1121 "21obj.c"
    __result206__ = (_Bool)1;
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_186,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_186,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional233;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional233=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional233) {
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2sTypephcharphp_finalize"
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional234=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional234) {
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value315;
struct sNode* __dec_obj122;
void* right_value316;
char* __dec_obj123;
struct sDupeNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
right_value316 = (void*)0;
    # 1131 "21obj.c"
    __dec_obj122=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(node))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1133 "21obj.c"
    self->sline=info->sline;
    # 1134 "21obj.c"
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1137 "21obj.c"
    __result207__ = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result207__;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDupeNode_terminated(struct sDupeNode* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1139 "21obj.c"
    __result208__ = (_Bool)0;
    return __result208__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__;
void* right_value317;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
    # 1144 "21obj.c"
    __result209__ = __result_obj__ = ((char*)(right_value317=__builtin_string("sDupeNode")));
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result209__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_190;
_Bool _if_conditional237;
_Bool __result210__;
void* right_value318;
struct CVALUE* left_value_191;
void* right_value319;
struct sType* left_type_192;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value320;
struct CVALUE* come_value_193;
void* right_value321;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_194;
char* c_value_195;
char* __dec_obj124;
void* right_value322;
struct sType* __dec_obj125;
void* right_value323;
char* __dec_obj126;
_Bool __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_190, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
memset(&left_value_191, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
memset(&left_type_192, 0, sizeof(struct sType*));
right_value320 = (void*)0;
memset(&come_value_193, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&c_value_195, 0, sizeof(char*));
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&c_value_195, 0, sizeof(char*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    # 1149 "21obj.c"
    node_190=self->node;
    # 1155 "21obj.c"
    # 1151 "21obj.c"
    if(_if_conditional237=!node_compile(node_190,info),    _if_conditional237) {
        # 1152 "21obj.c"
        __result210__ = (_Bool)0;
        return __result210__;
    }
    # 1155 "21obj.c"
    left_value_191=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value318,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1156 "21obj.c"
    dec_stack_ptr(1,info);
    # 1158 "21obj.c"
    left_type_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(left_value_191->type))));
    come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1180 "21obj.c"
    # 1160 "21obj.c"
    if(_if_conditional238=left_type_192->mPointerNum==0,    _if_conditional238) {
        # 1161 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_191));
    }
    else {
        # 1180 "21obj.c"
        # 1163 "21obj.c"
        if(_if_conditional239=left_type_192->mPointerNum>0&&left_type_192->mHeap==(_Bool)0,        _if_conditional239) {
            # 1164 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_191));
        }
        else {
            # 1180 "21obj.c"
            # 1166 "21obj.c"
            if(_if_conditional240=left_type_192->mPointerNum>0,            _if_conditional240) {
                # 1167 "21obj.c"
                come_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1167, "CVALUE"))));
                come_call_finalizer3(right_value320,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1169 "21obj.c"
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value321=clone_object(left_type_192,left_value_191->c_value,info)));
                result_type_194=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_195=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value321,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1170 "21obj.c"
                __dec_obj124=come_value_193->c_value;
                come_value_193->c_value=(char*)come_increment_ref_count(c_value_195);
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1171 "21obj.c"
                __dec_obj125=come_value_193->type;
                come_value_193->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(left_type_192))));
                come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1172 "21obj.c"
                come_value_193->type->mHeap=(_Bool)1;
                # 1173 "21obj.c"
                come_value_193->var=((void*)0);
                # 1175 "21obj.c"
                __dec_obj126=come_value_193->c_value;
                come_value_193->c_value=(char*)come_increment_ref_count(((char*)(right_value323=append_object_to_right_values(come_value_193->c_value,(struct sType*)come_increment_ref_count(left_type_192),info))));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1177 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
                come_call_finalizer3(come_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_195 = come_decrement_ref_count2(c_value_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1180 "21obj.c"
    __result211__ = (_Bool)1;
    come_call_finalizer3(left_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result211__;
    come_call_finalizer3(left_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value324;
struct sNode* __dec_obj127;
void* right_value325;
char* __dec_obj128;
struct sDummyHeapNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
right_value325 = (void*)0;
    # 1190 "21obj.c"
    __dec_obj127=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(node))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1192 "21obj.c"
    self->sline=info->sline;
    # 1193 "21obj.c"
    __dec_obj128=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string(info->sname))));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1196 "21obj.c"
    __result212__ = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result212__;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDummyHeapNode_terminated(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1198 "21obj.c"
    __result213__ = (_Bool)0;
    return __result213__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__;
void* right_value326;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value326 = (void*)0;
    # 1203 "21obj.c"
    __result214__ = __result_obj__ = ((char*)(right_value326=__builtin_string("sDummyHeapNode")));
    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_196;
_Bool _if_conditional243;
_Bool __result215__;
void* right_value327;
struct CVALUE* come_value_197;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_196, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
memset(&come_value_197, 0, sizeof(struct CVALUE*));
    # 1208 "21obj.c"
    node_196=self->node;
    # 1214 "21obj.c"
    # 1210 "21obj.c"
    if(_if_conditional243=!node_compile(node_196,info),    _if_conditional243) {
        # 1211 "21obj.c"
        __result215__ = (_Bool)0;
        return __result215__;
    }
    # 1214 "21obj.c"
    come_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value327,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1215 "21obj.c"
    dec_stack_ptr(1,info);
    # 1217 "21obj.c"
    come_value_197->type->mHeap=(_Bool)1;
    # 1219 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_197));
    # 1221 "21obj.c"
    __result216__ = (_Bool)1;
    come_call_finalizer3(come_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result216__;
    come_call_finalizer3(come_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value328;
struct sNode* __dec_obj129;
void* right_value329;
char* __dec_obj130;
struct sGCIncNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
right_value329 = (void*)0;
    # 1231 "21obj.c"
    __dec_obj129=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(node))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1233 "21obj.c"
    self->sline=info->sline;
    # 1234 "21obj.c"
    __dec_obj130=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(info->sname))));
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1237 "21obj.c"
    __result217__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result217__;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGCIncNode_terminated(struct sGCIncNode* self){
void* __result_obj__;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1239 "21obj.c"
    __result218__ = (_Bool)0;
    return __result218__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__;
void* right_value330;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
    # 1244 "21obj.c"
    __result219__ = __result_obj__ = ((char*)(right_value330=__builtin_string("sGCIncNode")));
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result219__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_198;
_Bool _if_conditional246;
_Bool __result220__;
void* right_value331;
struct CVALUE* come_value_199;
struct sType* type_200;
_Bool _if_conditional247;
void* right_value332;
char* type_name_201;
void* right_value333;
char* __dec_obj131;
_Bool __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_198, 0, sizeof(struct sNode*));
right_value331 = (void*)0;
memset(&come_value_199, 0, sizeof(struct CVALUE*));
memset(&type_200, 0, sizeof(struct sType*));
right_value332 = (void*)0;
memset(&type_name_201, 0, sizeof(char*));
right_value333 = (void*)0;
    # 1249 "21obj.c"
    node_198=self->node;
    # 1255 "21obj.c"
    # 1251 "21obj.c"
    if(_if_conditional246=!node_compile(node_198,info),    _if_conditional246) {
        # 1252 "21obj.c"
        __result220__ = (_Bool)0;
        return __result220__;
    }
    # 1255 "21obj.c"
    come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value331,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1256 "21obj.c"
    dec_stack_ptr(1,info);
    # 1258 "21obj.c"
    type_200=come_value_199->type;
    # 1265 "21obj.c"
    # 1260 "21obj.c"
    if(come_value_199->type->mHeap) {
        # 1261 "21obj.c"
        type_name_201=(char*)come_increment_ref_count(((char*)(right_value332=make_type_name_string(type_200,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1262 "21obj.c"
        __dec_obj131=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(((char*)(right_value333=increment_ref_count_object(come_value_199->type,come_value_199->c_value,info))));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_201 = come_decrement_ref_count2(type_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1265 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_199));
    # 1267 "21obj.c"
    __result221__ = (_Bool)1;
    come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result221__;
    come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value334;
struct sNode* __dec_obj132;
void* right_value335;
char* __dec_obj133;
struct sGCDecNode* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
right_value335 = (void*)0;
    # 1277 "21obj.c"
    __dec_obj132=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=sNode_clone(node))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1279 "21obj.c"
    self->sline=info->sline;
    # 1280 "21obj.c"
    __dec_obj133=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(info->sname))));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1283 "21obj.c"
    __result222__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result222__;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGCDecNode_terminated(struct sGCDecNode* self){
void* __result_obj__;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1285 "21obj.c"
    __result223__ = (_Bool)0;
    return __result223__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__;
void* right_value336;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    # 1290 "21obj.c"
    __result224__ = __result_obj__ = ((char*)(right_value336=__builtin_string("sGCDecNode")));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result224__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_202;
_Bool _if_conditional250;
_Bool __result225__;
void* right_value337;
struct CVALUE* come_value_203;
struct sType* type_204;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_202, 0, sizeof(struct sNode*));
right_value337 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&type_204, 0, sizeof(struct sType*));
    # 1295 "21obj.c"
    node_202=self->node;
    # 1301 "21obj.c"
    # 1297 "21obj.c"
    if(_if_conditional250=!node_compile(node_202,info),    _if_conditional250) {
        # 1298 "21obj.c"
        __result225__ = (_Bool)0;
        return __result225__;
    }
    # 1301 "21obj.c"
    come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value337,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1302 "21obj.c"
    dec_stack_ptr(1,info);
    # 1304 "21obj.c"
    type_204=come_value_203->type;
    # 1306 "21obj.c"
    decrement_ref_count_object(type_204,come_value_203->c_value,info,(_Bool)0);
    # 1308 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
    # 1310 "21obj.c"
    __result226__ = (_Bool)1;
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result226__;
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value338;
struct sType* __dec_obj134;
void* right_value339;
char* __dec_obj135;
struct sIsHeap* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value338 = (void*)0;
right_value339 = (void*)0;
    # 1320 "21obj.c"
    __dec_obj134=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(type))));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1322 "21obj.c"
    self->sline=info->sline;
    # 1323 "21obj.c"
    __dec_obj135=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(info->sname))));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1326 "21obj.c"
    __result227__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result227__;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sIsHeap_terminated(struct sIsHeap* self){
void* __result_obj__;
_Bool __result228__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1328 "21obj.c"
    __result228__ = (_Bool)0;
    return __result228__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__;
void* right_value340;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value340 = (void*)0;
    # 1333 "21obj.c"
    __result229__ = __result_obj__ = ((char*)(right_value340=__builtin_string("sIsHeap")));
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result229__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_205;
_Bool _if_conditional253;
void* right_value341;
struct CVALUE* come_value_206;
void* right_value342;
char* __dec_obj136;
void* right_value343;
void* right_value344;
struct sType* __dec_obj137;
void* right_value345;
struct CVALUE* come_value_207;
void* right_value346;
char* __dec_obj138;
void* right_value347;
void* right_value348;
struct sType* __dec_obj139;
_Bool __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_205, 0, sizeof(struct sType*));
right_value341 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
    # 1338 "21obj.c"
    node_205=self->type;
    # 1363 "21obj.c"
    # 1340 "21obj.c"
    if(self->type->mHeap) {
        # 1341 "21obj.c"
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1341, "CVALUE"))));
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1343 "21obj.c"
        __dec_obj136=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value342=xsprintf("1"))));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1344 "21obj.c"
        __dec_obj137=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value343=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1344, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value344,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1345 "21obj.c"
        come_value_206->var=((void*)0);
        # 1347 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        # 1349 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1352 "21obj.c"
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value345=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1352, "CVALUE"))));
        come_call_finalizer3(right_value345,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1354 "21obj.c"
        __dec_obj138=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value346=xsprintf("0"))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1355 "21obj.c"
        __dec_obj139=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value347=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1355, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1356 "21obj.c"
        come_value_207->var=((void*)0);
        # 1358 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        # 1360 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1363 "21obj.c"
    __result230__ = (_Bool)1;
    return __result230__;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value349;
struct sType* __dec_obj140;
void* right_value350;
char* __dec_obj141;
struct sIsPointer* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
right_value350 = (void*)0;
    # 1373 "21obj.c"
    __dec_obj140=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(type))));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1375 "21obj.c"
    self->sline=info->sline;
    # 1376 "21obj.c"
    __dec_obj141=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value350=__builtin_string(info->sname))));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1379 "21obj.c"
    __result231__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result231__;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sIsPointer_terminated(struct sIsPointer* self){
void* __result_obj__;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1381 "21obj.c"
    __result232__ = (_Bool)0;
    return __result232__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__;
void* right_value351;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
    # 1386 "21obj.c"
    __result233__ = __result_obj__ = ((char*)(right_value351=__builtin_string("sIsPointer")));
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result233__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_208;
_Bool _if_conditional256;
void* right_value352;
struct CVALUE* come_value_209;
void* right_value353;
char* __dec_obj142;
void* right_value354;
void* right_value355;
struct sType* __dec_obj143;
void* right_value356;
struct CVALUE* come_value_210;
void* right_value357;
char* __dec_obj144;
void* right_value358;
void* right_value359;
struct sType* __dec_obj145;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_208, 0, sizeof(struct sType*));
right_value352 = (void*)0;
memset(&come_value_209, 0, sizeof(struct CVALUE*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
    # 1391 "21obj.c"
    node_208=self->type;
    # 1416 "21obj.c"
    # 1393 "21obj.c"
    if(_if_conditional256=self->type->mPointerNum>0,    _if_conditional256) {
        # 1394 "21obj.c"
        come_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value352=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1394, "CVALUE"))));
        come_call_finalizer3(right_value352,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1396 "21obj.c"
        __dec_obj142=come_value_209->c_value;
        come_value_209->c_value=(char*)come_increment_ref_count(((char*)(right_value353=xsprintf("1"))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1397 "21obj.c"
        __dec_obj143=come_value_209->type;
        come_value_209->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value354=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1397, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value354,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value355,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1398 "21obj.c"
        come_value_209->var=((void*)0);
        # 1400 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_209));
        # 1402 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_209->c_value);
        come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1405 "21obj.c"
        come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value356=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1405, "CVALUE"))));
        come_call_finalizer3(right_value356,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1407 "21obj.c"
        __dec_obj144=come_value_210->c_value;
        come_value_210->c_value=(char*)come_increment_ref_count(((char*)(right_value357=xsprintf("0"))));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1408 "21obj.c"
        __dec_obj145=come_value_210->type;
        come_value_210->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value359=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value358=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1408, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value358,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value359,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1409 "21obj.c"
        come_value_210->var=((void*)0);
        # 1411 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_210));
        # 1413 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_210->c_value);
        come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1416 "21obj.c"
    __result234__ = (_Bool)1;
    return __result234__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional257;
void* right_value360;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_211;
char* name_212;
_Bool err_213;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value361;
struct sType* inf_type_214;
void* right_value362;
struct sNode* node_215;
void* right_value363;
void* right_value364;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value369;
struct sNode* __result237__;
void* right_value370;
void* right_value371;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value375;
struct sNode* obj_218;
void* right_value376;
char* fun_name_219;
void* right_value377;
void* right_value378;
struct sNode* __result240__;
void* right_value379;
void* right_value380;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value384;
struct sNode* __result243__;
_Bool _if_conditional283;
void* right_value385;
void* right_value386;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value389;
struct sNode* __result246__;
_Bool _if_conditional288;
void* right_value390;
void* right_value391;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value394;
struct sNode* __result249__;
_Bool _if_conditional293;
void* right_value395;
struct sNode* node_223;
void* right_value396;
void* right_value397;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value401;
struct sNode* __result252__;
_Bool _if_conditional300;
void* right_value402;
struct sNode* node_225;
void* right_value403;
void* right_value404;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value408;
struct sNode* __result255__;
_Bool _if_conditional307;
void* right_value409;
struct sNode* node_227;
void* right_value410;
void* right_value411;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value415;
struct sNode* __result258__;
_Bool _if_conditional314;
void* right_value416;
struct sNode* node_229;
void* right_value417;
void* right_value418;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value422;
struct sNode* __result261__;
_Bool _if_conditional321;
void* right_value423;
struct sNode* node_231;
void* right_value424;
void* right_value425;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value429;
struct sNode* __result264__;
_Bool _if_conditional328;
void* right_value430;
struct sNode* node_233;
void* right_value431;
void* right_value432;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value436;
struct sNode* __result267__;
_Bool _if_conditional335;
void* right_value437;
struct sNode* node_235;
void* right_value438;
void* right_value439;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value443;
struct sNode* __result270__;
_Bool _if_conditional342;
void* right_value444;
struct sNode* node_237;
void* right_value445;
void* right_value446;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value450;
struct sNode* __result273__;
_Bool _if_conditional349;
void* right_value451;
struct sNode* node_239;
void* right_value452;
void* right_value453;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value457;
struct sNode* __result276__;
_Bool _if_conditional356;
void* right_value458;
struct sNode* node_241;
void* right_value459;
void* right_value460;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value464;
struct sNode* __result279__;
_Bool _if_conditional363;
void* right_value465;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_243;
char* param_name_244;
_Bool err_245;
_Bool _if_conditional364;
void* right_value466;
struct sType* type2_246;
void* right_value467;
void* right_value468;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value472;
struct sNode* __result282__;
_Bool _if_conditional371;
void* right_value473;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_248;
char* param_name_249;
_Bool err_250;
_Bool _if_conditional372;
void* right_value474;
struct sType* type2_251;
void* right_value475;
void* right_value476;
struct sNode* _inf_value20;
struct sIsPointer* _inf_obj_value20;
void* right_value480;
struct sNode* __result285__;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value481;
void* right_value482;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value485;
struct sNode* __result288__;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value486;
struct sNode* node_254;
struct sNode* __result289__;
void* right_value487;
void* right_value488;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value491;
struct sNode* __result292__;
_Bool _if_conditional391;
void* right_value492;
void* right_value493;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value496;
struct sNode* __result295__;
_Bool _if_conditional396;
void* right_value497;
void* right_value498;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value501;
struct sNode* __result298__;
_Bool _if_conditional401;
void* right_value502;
void* right_value503;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value506;
struct sNode* __result301__;
_Bool _if_conditional406;
void* right_value507;
void* right_value508;
struct sNode* _inf_value26;
struct sNullNodeX* _inf_obj_value26;
void* right_value511;
struct sNode* __result304__;
_Bool _if_conditional411;
_Bool is_type_name_flag_260;
char* p_261;
int sline_262;
_Bool _if_conditional412;
void* right_value512;
char* word_263;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value513;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_264;
char* name_265;
_Bool err_266;
_Bool _if_conditional415;
void* right_value514;
void* right_value515;
struct sNode* _inf_value27;
struct sSizeOfNode* _inf_obj_value27;
void* right_value519;
struct sNode* __result307__;
void* right_value520;
struct sNode* exp_268;
void* right_value521;
void* right_value522;
struct sNode* _inf_value28;
struct sSizeOfExpNode* _inf_obj_value28;
void* right_value526;
struct sNode* __result310__;
_Bool _if_conditional428;
_Bool is_type_name_flag_270;
char* p_271;
int sline_272;
_Bool _if_conditional429;
void* right_value527;
char* word_273;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value528;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_274;
char* name_275;
_Bool err_276;
_Bool _if_conditional432;
void* right_value529;
void* right_value530;
struct sNode* _inf_value29;
struct sTypeOfNode* _inf_obj_value29;
void* right_value534;
struct sNode* __result313__;
void* right_value535;
struct sNode* exp_278;
void* right_value536;
void* right_value537;
struct sNode* _inf_value30;
struct sTypeOfExpNode* _inf_obj_value30;
void* right_value541;
struct sNode* __result316__;
_Bool _if_conditional445;
_Bool is_type_name_flag_280;
char* p_281;
int sline_282;
_Bool _if_conditional446;
void* right_value542;
char* word_283;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value543;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_284;
char* name_285;
_Bool err_286;
_Bool _if_conditional449;
void* right_value544;
void* right_value545;
struct sNode* _inf_value31;
struct sAlignOfNode* _inf_obj_value31;
void* right_value549;
struct sNode* __result319__;
void* right_value550;
struct sNode* exp_288;
void* right_value551;
void* right_value552;
struct sNode* _inf_value32;
struct sAlignOfExpNode* _inf_obj_value32;
void* right_value556;
struct sNode* __result322__;
_Bool _if_conditional462;
_Bool is_type_name_flag_290;
char* p_291;
int sline_292;
_Bool _if_conditional463;
void* right_value557;
char* word_293;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value558;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_294;
char* name_295;
_Bool err_296;
_Bool _if_conditional466;
void* right_value559;
void* right_value560;
struct sNode* _inf_value33;
struct sAlignOfNode2* _inf_obj_value33;
void* right_value564;
struct sNode* __result325__;
void* right_value565;
struct sNode* exp_298;
void* right_value566;
void* right_value567;
struct sNode* _inf_value34;
struct sAlignOfExpNode2* _inf_obj_value34;
void* right_value571;
struct sNode* __result328__;
_Bool _if_conditional479;
_Bool is_type_name_flag_300;
char* p_301;
int sline_302;
_Bool _if_conditional480;
void* right_value572;
char* word_303;
_Bool _if_conditional481;
_Bool _if_conditional482;
void* right_value573;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_304;
char* name_305;
_Bool err_306;
_Bool _if_conditional483;
void* right_value574;
void* right_value575;
struct sNode* _inf_value35;
struct sAlignAsNode* _inf_obj_value35;
void* right_value579;
struct sNode* __result331__;
void* right_value580;
struct sNode* exp_308;
void* right_value581;
void* right_value582;
struct sNode* _inf_value36;
struct sAlignAsExpNode* _inf_obj_value36;
void* right_value586;
struct sNode* __result334__;
void* right_value587;
struct sNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
right_value361 = (void*)0;
memset(&inf_type_214, 0, sizeof(struct sType*));
right_value362 = (void*)0;
memset(&node_215, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value375 = (void*)0;
memset(&obj_218, 0, sizeof(struct sNode*));
right_value376 = (void*)0;
memset(&fun_name_219, 0, sizeof(char*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&node_223, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&node_225, 0, sizeof(struct sNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&node_227, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&node_229, 0, sizeof(struct sNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&node_231, 0, sizeof(struct sNode*));
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&node_233, 0, sizeof(struct sNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&node_237, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&node_239, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&node_241, 0, sizeof(struct sNode*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&param_type_243, 0, sizeof(struct sType*));
memset(&param_name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&param_type_243, 0, sizeof(struct sType*));
memset(&param_name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
right_value466 = (void*)0;
memset(&type2_246, 0, sizeof(struct sType*));
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&param_type_248, 0, sizeof(struct sType*));
memset(&param_name_249, 0, sizeof(char*));
memset(&err_250, 0, sizeof(_Bool));
memset(&param_type_248, 0, sizeof(struct sType*));
memset(&param_name_249, 0, sizeof(char*));
memset(&err_250, 0, sizeof(_Bool));
right_value474 = (void*)0;
memset(&type2_251, 0, sizeof(struct sType*));
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&node_254, 0, sizeof(struct sNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
right_value508 = (void*)0;
right_value511 = (void*)0;
memset(&is_type_name_flag_260, 0, sizeof(_Bool));
memset(&p_261, 0, sizeof(char*));
memset(&sline_262, 0, sizeof(int));
right_value512 = (void*)0;
memset(&word_263, 0, sizeof(char*));
right_value513 = (void*)0;
memset(&type_264, 0, sizeof(struct sType*));
memset(&name_265, 0, sizeof(char*));
memset(&err_266, 0, sizeof(_Bool));
memset(&type_264, 0, sizeof(struct sType*));
memset(&name_265, 0, sizeof(char*));
memset(&err_266, 0, sizeof(_Bool));
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&exp_268, 0, sizeof(struct sNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value526 = (void*)0;
memset(&is_type_name_flag_270, 0, sizeof(_Bool));
memset(&p_271, 0, sizeof(char*));
memset(&sline_272, 0, sizeof(int));
right_value527 = (void*)0;
memset(&word_273, 0, sizeof(char*));
right_value528 = (void*)0;
memset(&type_274, 0, sizeof(struct sType*));
memset(&name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
memset(&type_274, 0, sizeof(struct sType*));
memset(&name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
memset(&exp_278, 0, sizeof(struct sNode*));
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value541 = (void*)0;
memset(&is_type_name_flag_280, 0, sizeof(_Bool));
memset(&p_281, 0, sizeof(char*));
memset(&sline_282, 0, sizeof(int));
right_value542 = (void*)0;
memset(&word_283, 0, sizeof(char*));
right_value543 = (void*)0;
memset(&type_284, 0, sizeof(struct sType*));
memset(&name_285, 0, sizeof(char*));
memset(&err_286, 0, sizeof(_Bool));
memset(&type_284, 0, sizeof(struct sType*));
memset(&name_285, 0, sizeof(char*));
memset(&err_286, 0, sizeof(_Bool));
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
memset(&exp_288, 0, sizeof(struct sNode*));
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value556 = (void*)0;
memset(&is_type_name_flag_290, 0, sizeof(_Bool));
memset(&p_291, 0, sizeof(char*));
memset(&sline_292, 0, sizeof(int));
right_value557 = (void*)0;
memset(&word_293, 0, sizeof(char*));
right_value558 = (void*)0;
memset(&type_294, 0, sizeof(struct sType*));
memset(&name_295, 0, sizeof(char*));
memset(&err_296, 0, sizeof(_Bool));
memset(&type_294, 0, sizeof(struct sType*));
memset(&name_295, 0, sizeof(char*));
memset(&err_296, 0, sizeof(_Bool));
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&exp_298, 0, sizeof(struct sNode*));
right_value566 = (void*)0;
right_value567 = (void*)0;
right_value571 = (void*)0;
memset(&is_type_name_flag_300, 0, sizeof(_Bool));
memset(&p_301, 0, sizeof(char*));
memset(&sline_302, 0, sizeof(int));
right_value572 = (void*)0;
memset(&word_303, 0, sizeof(char*));
right_value573 = (void*)0;
memset(&type_304, 0, sizeof(struct sType*));
memset(&name_305, 0, sizeof(char*));
memset(&err_306, 0, sizeof(_Bool));
memset(&type_304, 0, sizeof(struct sType*));
memset(&name_305, 0, sizeof(char*));
memset(&err_306, 0, sizeof(_Bool));
right_value574 = (void*)0;
right_value575 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&exp_308, 0, sizeof(struct sNode*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
    # 1820 "21obj.c"
    # 1422 "21obj.c"
    if(_if_conditional257=charp_operator_equals(buf,"new"),    _if_conditional257) {
        # 1423 "21obj.c"
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value360=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_211=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_212=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_213=multiple_assign_var4->v3;
        come_call_finalizer3(right_value360,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1429 "21obj.c"
        # 1424 "21obj.c"
        if(_if_conditional260=!err_213,        _if_conditional260) {
            # 1425 "21obj.c"
            err_msg(info,"parse_type failed");
            # 1426 "21obj.c"
            exit(2);
        }
        # 1452 "21obj.c"
        # 1429 "21obj.c"
        if(_if_conditional261=*info->p==40,        _if_conditional261) {
            # 1448 "21obj.c"
            # 1430 "21obj.c"
            if(type_211->mClass->mProtocol) {
                # 1431 "21obj.c"
                info->p++;
                # 1432 "21obj.c"
                skip_spaces_and_lf(info);
                # 1434 "21obj.c"
                inf_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value361=sType_clone(type_211))));
                come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1436 "21obj.c"
                node_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=expression_v13(info))));
                if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1438 "21obj.c"
                expected_next_character(41,info);
                # 1440 "21obj.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1440, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value364=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value363=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1440, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_215),(struct sType*)come_increment_ref_count(inf_type_214),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result237__ = __result_obj__ = ((struct sNode*)(right_value369=_inf_value4));
                come_call_finalizer3(inf_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_215) { node_215 = come_decrement_ref_count2(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value363,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value364,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result237__;
                come_call_finalizer3(inf_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_215) { node_215 = come_decrement_ref_count2(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1443 "21obj.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1443, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value371=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value370=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1443, "sNewNode")))),(struct sType*)come_increment_ref_count(type_211),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=_inf_value5)));
                come_call_finalizer3(right_value370,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value371,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1444 "21obj.c"
                fun_name_219=(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string("initialize"))));
                right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1446 "21obj.c"
                __result240__ = __result_obj__ = ((struct sNode*)(right_value378=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(obj_218)))),(char*)come_increment_ref_count(fun_name_219),info)));
                if(obj_218) { obj_218 = come_decrement_ref_count2(obj_218, ((struct sNode*)obj_218)->finalize, ((struct sNode*)obj_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_219 = come_decrement_ref_count2(fun_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result240__;
                if(obj_218) { obj_218 = come_decrement_ref_count2(obj_218, ((struct sNode*)obj_218)->finalize, ((struct sNode*)obj_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_219 = come_decrement_ref_count2(fun_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 1450 "21obj.c"
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1450, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value380=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value379=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1450, "sNewNode")))),(struct sType*)come_increment_ref_count(type_211),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result243__ = __result_obj__ = ((struct sNode*)(right_value384=_inf_value6));
            come_call_finalizer3(type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value379,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value380,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result243__;
        }
        come_call_finalizer3(type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1820 "21obj.c"
        # 1453 "21obj.c"
        if(_if_conditional283=charp_operator_equals(buf,"true"),        _if_conditional283) {
            # 1454 "21obj.c"
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1454, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value386=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value385=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1454, "sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result246__ = __result_obj__ = ((struct sNode*)(right_value389=_inf_value7));
            come_call_finalizer3(right_value385,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value386,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result246__;
        }
        else {
            # 1820 "21obj.c"
            # 1456 "21obj.c"
            if(_if_conditional288=charp_operator_equals(buf,"false"),            _if_conditional288) {
                # 1457 "21obj.c"
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1457, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value391=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value390=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1457, "sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result249__ = __result_obj__ = ((struct sNode*)(right_value394=_inf_value8));
                come_call_finalizer3(right_value390,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value391,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result249__;
            }
            else {
                # 1820 "21obj.c"
                # 1459 "21obj.c"
                if(_if_conditional293=charp_operator_equals(buf,"delete"),                _if_conditional293) {
                    # 1460 "21obj.c"
                    node_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=expression_v13(info))));
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1462 "21obj.c"
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1462, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value397=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value396=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1462, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_223),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sNodeBase_sline;
                    _inf_value9->sname=(void*)sNodeBase_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result252__ = __result_obj__ = ((struct sNode*)(right_value401=_inf_value9));
                    if(node_223) { node_223 = come_decrement_ref_count2(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value396,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value397,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result252__;
                    if(node_223) { node_223 = come_decrement_ref_count2(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1820 "21obj.c"
                    # 1464 "21obj.c"
                    if(_if_conditional300=charp_operator_equals(buf,"force_delete"),                    _if_conditional300) {
                        # 1465 "21obj.c"
                        node_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=expression_v13(info))));
                        if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1467 "21obj.c"
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1467, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value404=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value403=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1467, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_225),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sNodeBase_sline;
                        _inf_value10->sname=(void*)sNodeBase_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result255__ = __result_obj__ = ((struct sNode*)(right_value408=_inf_value10));
                        if(node_225) { node_225 = come_decrement_ref_count2(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value403,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value404,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result255__;
                        if(node_225) { node_225 = come_decrement_ref_count2(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1820 "21obj.c"
                        # 1470 "21obj.c"
                        if(_if_conditional307=charp_operator_equals(buf,"borrow"),                        _if_conditional307) {
                            # 1471 "21obj.c"
                            node_227=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_v13(info))));
                            if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1473 "21obj.c"
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1473, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value411=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value410=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1473, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_227),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sNodeBase_sline;
                            _inf_value11->sname=(void*)sNodeBase_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result258__ = __result_obj__ = ((struct sNode*)(right_value415=_inf_value11));
                            if(node_227) { node_227 = come_decrement_ref_count2(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value410,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value411,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result258__;
                            if(node_227) { node_227 = come_decrement_ref_count2(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1820 "21obj.c"
                            # 1475 "21obj.c"
                            if(_if_conditional314=charp_operator_equals(buf,"delegate"),                            _if_conditional314) {
                                # 1476 "21obj.c"
                                node_229=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=expression_v13(info))));
                                if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1478 "21obj.c"
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1478, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value418=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value417=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1478, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_229),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sNodeBase_sline;
                                _inf_value12->sname=(void*)sNodeBase_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result261__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value12));
                                if(node_229) { node_229 = come_decrement_ref_count2(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value417,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value418,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result261__;
                                if(node_229) { node_229 = come_decrement_ref_count2(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 1820 "21obj.c"
                                # 1480 "21obj.c"
                                if(_if_conditional321=charp_operator_equals(buf,"share"),                                _if_conditional321) {
                                    # 1481 "21obj.c"
                                    node_231=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=expression_v13(info))));
                                    if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1483 "21obj.c"
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1483, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value425=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value424=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1483, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_231),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sNodeBase_sline;
                                    _inf_value13->sname=(void*)sNodeBase_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result264__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value13));
                                    if(node_231) { node_231 = come_decrement_ref_count2(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value424,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value425,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result264__;
                                    if(node_231) { node_231 = come_decrement_ref_count2(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1820 "21obj.c"
                                    # 1485 "21obj.c"
                                    if(_if_conditional328=charp_operator_equals(buf,"clone"),                                    _if_conditional328) {
                                        # 1486 "21obj.c"
                                        node_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=expression_v13(info))));
                                        if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1488 "21obj.c"
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1488, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value432=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value431=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1488, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_233),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sNodeBase_sline;
                                        _inf_value14->sname=(void*)sNodeBase_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result267__ = __result_obj__ = ((struct sNode*)(right_value436=_inf_value14));
                                        if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value431,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value432,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result267__;
                                        if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1820 "21obj.c"
                                        # 1490 "21obj.c"
                                        if(_if_conditional335=charp_operator_equals(buf,"dupe"),                                        _if_conditional335) {
                                            # 1491 "21obj.c"
                                            node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=expression_v13(info))));
                                            if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 1493 "21obj.c"
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1493, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value439=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value438=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1493, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_235),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sNodeBase_sline;
                                            _inf_value15->sname=(void*)sNodeBase_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result270__ = __result_obj__ = ((struct sNode*)(right_value443=_inf_value15));
                                            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(right_value438,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value439,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result270__;
                                            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 1820 "21obj.c"
                                            # 1495 "21obj.c"
                                            if(_if_conditional342=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional342) {
                                                # 1496 "21obj.c"
                                                node_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=expression_v13(info))));
                                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1498 "21obj.c"
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1498, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value446=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value445=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1498, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_237),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sNodeBase_sline;
                                                _inf_value16->sname=(void*)sNodeBase_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result273__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value16));
                                                if(node_237) { node_237 = come_decrement_ref_count2(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(right_value445,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value446,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result273__;
                                                if(node_237) { node_237 = come_decrement_ref_count2(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1820 "21obj.c"
                                                # 1500 "21obj.c"
                                                if(_if_conditional349=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional349) {
                                                    # 1501 "21obj.c"
                                                    info->p++;
                                                    # 1502 "21obj.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1504 "21obj.c"
                                                    node_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=expression_v13(info))));
                                                    if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1506 "21obj.c"
                                                    expected_next_character(41,info);
                                                    # 1508 "21obj.c"
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1508, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value453=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value452=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1508, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_239),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sNodeBase_sline;
                                                    _inf_value17->sname=(void*)sNodeBase_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result276__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value17));
                                                    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value452,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value453,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result276__;
                                                    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 1820 "21obj.c"
                                                    # 1510 "21obj.c"
                                                    if(_if_conditional356=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional356) {
                                                        # 1511 "21obj.c"
                                                        info->p++;
                                                        # 1512 "21obj.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1514 "21obj.c"
                                                        node_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=expression_v13(info))));
                                                        if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1516 "21obj.c"
                                                        expected_next_character(41,info);
                                                        # 1518 "21obj.c"
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1518, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value460=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value459=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1518, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_241),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sNodeBase_sline;
                                                        _inf_value18->sname=(void*)sNodeBase_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result279__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value18));
                                                        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value459,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value460,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result279__;
                                                        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 1820 "21obj.c"
                                                        # 1520 "21obj.c"
                                                        if(_if_conditional363=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional363) {
                                                            # 1521 "21obj.c"
                                                            info->p++;
                                                            # 1522 "21obj.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1524 "21obj.c"
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value465=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_243=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_244=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_245=multiple_assign_var5->v3;
                                                            come_call_finalizer3(right_value465,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 1530 "21obj.c"
                                                            # 1525 "21obj.c"
                                                            if(_if_conditional364=!err_245,                                                            _if_conditional364) {
                                                                # 1526 "21obj.c"
                                                                err_msg(info,"parse_type failed");
                                                                # 1527 "21obj.c"
                                                                exit(2);
                                                            }
                                                            # 1530 "21obj.c"
                                                            type2_246=(struct sType*)come_increment_ref_count(((struct sType*)(right_value466=solve_generics(param_type_243,info->generics_type,info))));
                                                            come_call_finalizer3(right_value466,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 1532 "21obj.c"
                                                            expected_next_character(41,info);
                                                            # 1534 "21obj.c"
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1534, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value468=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value467=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1534, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_246),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sNodeBase_sline;
                                                            _inf_value19->sname=(void*)sNodeBase_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result282__ = __result_obj__ = ((struct sNode*)(right_value472=_inf_value19));
                                                            come_call_finalizer3(param_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_244 = come_decrement_ref_count2(param_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_246,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value467,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value468,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result282__;
                                                            come_call_finalizer3(param_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_244 = come_decrement_ref_count2(param_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_246,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            # 1820 "21obj.c"
                                                            # 1536 "21obj.c"
                                                            if(_if_conditional371=charp_operator_equals(buf,"ispointer")&&*info->p==40,                                                            _if_conditional371) {
                                                                # 1537 "21obj.c"
                                                                info->p++;
                                                                # 1538 "21obj.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1540 "21obj.c"
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value473=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_248=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_249=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_250=multiple_assign_var6->v3;
                                                                come_call_finalizer3(right_value473,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1546 "21obj.c"
                                                                # 1541 "21obj.c"
                                                                if(_if_conditional372=!err_250,                                                                _if_conditional372) {
                                                                    # 1542 "21obj.c"
                                                                    err_msg(info,"parse_type failed");
                                                                    # 1543 "21obj.c"
                                                                    exit(2);
                                                                }
                                                                # 1546 "21obj.c"
                                                                type2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value474=solve_generics(param_type_248,info->generics_type,info))));
                                                                come_call_finalizer3(right_value474,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1548 "21obj.c"
                                                                expected_next_character(41,info);
                                                                # 1550 "21obj.c"
                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1550, "struct sNode");
                                                                _inf_obj_value20=come_increment_ref_count(((struct sIsPointer*)(right_value476=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value475=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1550, "sIsPointer")))),(struct sType*)come_increment_ref_count(type2_251),info))));
                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                _inf_value20->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value20->clone=(void*)sIsPointer_clone;
                                                                _inf_value20->compile=(void*)sIsPointer_compile;
                                                                _inf_value20->sline=(void*)sNodeBase_sline;
                                                                _inf_value20->sname=(void*)sNodeBase_sname;
                                                                _inf_value20->terminated=(void*)sIsPointer_terminated;
                                                                _inf_value20->kind=(void*)sIsPointer_kind;
                                                                __result285__ = __result_obj__ = ((struct sNode*)(right_value480=_inf_value20));
                                                                come_call_finalizer3(param_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_249 = come_decrement_ref_count2(param_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value475,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value476,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result285__;
                                                                come_call_finalizer3(param_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_249 = come_decrement_ref_count2(param_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                # 1820 "21obj.c"
                                                                # 1552 "21obj.c"
                                                                if(_if_conditional379=charp_operator_equals(buf,"using"),                                                                _if_conditional379) {
                                                                    # 1607 "21obj.c"
                                                                    # 1553 "21obj.c"
                                                                    if(_if_conditional380=strmemcmp(info->p,"neo-c"),                                                                    _if_conditional380) {
                                                                        # 1554 "21obj.c"
                                                                        info->p+=strlen("neo-c");
                                                                        # 1555 "21obj.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1557 "21obj.c"
                                                                        gComeC=(_Bool)0;
                                                                        # 1559 "21obj.c"
                                                                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559, "struct sNode");
                                                                        _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value482=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value481=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1559, "sNullNodeX")))),info))));
                                                                        _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                        _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                        _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                        _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                        _inf_value21->sline=(void*)sNodeBase_sline;
                                                                        _inf_value21->sname=(void*)sNodeBase_sname;
                                                                        _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                        _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                        __result288__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value21));
                                                                        come_call_finalizer3(right_value481,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer3(right_value482,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result288__;
                                                                    }
                                                                    else {
                                                                        # 1607 "21obj.c"
                                                                        # 1561 "21obj.c"
                                                                        if(_if_conditional385=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                        _if_conditional385) {
                                                                            # 1562 "21obj.c"
                                                                            info->p+=strlen("c");
                                                                            # 1563 "21obj.c"
                                                                            skip_spaces_and_lf(info);
                                                                            # 1565 "21obj.c"
                                                                            gComeC=(_Bool)1;
                                                                            # 1577 "21obj.c"
                                                                            # 1567 "21obj.c"
                                                                            if(_if_conditional386=*info->p==123,                                                                            _if_conditional386) {
                                                                                # 1568 "21obj.c"
                                                                                node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=parse_normal_block(info))));
                                                                                if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1570 "21obj.c"
                                                                                gComeC=(_Bool)0;
                                                                                # 1572 "21obj.c"
                                                                                __result289__ = __result_obj__ = node_254;
                                                                                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result289__;
                                                                                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                # 1575 "21obj.c"
                                                                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1575, "struct sNode");
                                                                                _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value488=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value487=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1575, "sNullNodeX")))),info))));
                                                                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value22->sline=(void*)sNodeBase_sline;
                                                                                _inf_value22->sname=(void*)sNodeBase_sname;
                                                                                _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                                __result292__ = __result_obj__ = ((struct sNode*)(right_value491=_inf_value22));
                                                                                come_call_finalizer3(right_value487,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value488,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result292__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1607 "21obj.c"
                                                                            # 1578 "21obj.c"
                                                                            if(_if_conditional391=strmemcmp(info->p,"gc"),                                                                            _if_conditional391) {
                                                                                # 1579 "21obj.c"
                                                                                info->p+=strlen("gc");
                                                                                # 1580 "21obj.c"
                                                                                skip_spaces_and_lf(info);
                                                                                # 1582 "21obj.c"
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1582, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value493=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value492=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1582, "sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNodeBase_sline;
                                                                                _inf_value23->sname=(void*)sNodeBase_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result295__ = __result_obj__ = ((struct sNode*)(right_value496=_inf_value23));
                                                                                come_call_finalizer3(right_value492,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value493,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result295__;
                                                                            }
                                                                            else {
                                                                                # 1607 "21obj.c"
                                                                                # 1584 "21obj.c"
                                                                                if(_if_conditional396=strmemcmp(info->p,"no-gc"),                                                                                _if_conditional396) {
                                                                                    # 1585 "21obj.c"
                                                                                    info->p+=strlen("no-gc");
                                                                                    # 1586 "21obj.c"
                                                                                    skip_spaces_and_lf(info);
                                                                                    # 1589 "21obj.c"
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1589, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value498=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value497=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1589, "sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value24->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result298__ = __result_obj__ = ((struct sNode*)(right_value501=_inf_value24));
                                                                                    come_call_finalizer3(right_value497,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value498,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result298__;
                                                                                }
                                                                                else {
                                                                                    # 1607 "21obj.c"
                                                                                    # 1591 "21obj.c"
                                                                                    if(_if_conditional401=strmemcmp(info->p,"unsafe"),                                                                                    _if_conditional401) {
                                                                                        # 1592 "21obj.c"
                                                                                        info->p+=strlen("unsafe");
                                                                                        # 1593 "21obj.c"
                                                                                        skip_spaces_and_lf(info);
                                                                                        # 1595 "21obj.c"
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1595, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value503=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value502=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1595, "sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value25->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result301__ = __result_obj__ = ((struct sNode*)(right_value506=_inf_value25));
                                                                                        come_call_finalizer3(right_value502,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value503,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result301__;
                                                                                    }
                                                                                    else {
                                                                                        # 1607 "21obj.c"
                                                                                        # 1597 "21obj.c"
                                                                                        if(_if_conditional406=strmemcmp(info->p,"no-null-check"),                                                                                        _if_conditional406) {
                                                                                            # 1598 "21obj.c"
                                                                                            info->p+=strlen("no-null-check");
                                                                                            # 1599 "21obj.c"
                                                                                            skip_spaces_and_lf(info);
                                                                                            # 1601 "21obj.c"
                                                                                            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1601, "struct sNode");
                                                                                            _inf_obj_value26=come_increment_ref_count(((struct sNullNodeX*)(right_value508=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value507=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1601, "sNullNodeX")))),info))));
                                                                                            _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                            _inf_value26->finalize=(void*)sNullNodeX_finalize;
                                                                                            _inf_value26->clone=(void*)sNullNodeX_clone;
                                                                                            _inf_value26->compile=(void*)sNullNodeX_compile;
                                                                                            _inf_value26->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value26->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value26->terminated=(void*)sNullNodeX_terminated;
                                                                                            _inf_value26->kind=(void*)sNullNodeX_kind;
                                                                                            __result304__ = __result_obj__ = ((struct sNode*)(right_value511=_inf_value26));
                                                                                            come_call_finalizer3(right_value507,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value508,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result304__;
                                                                                        }
                                                                                        else {
                                                                                            # 1604 "21obj.c"
                                                                                            err_msg(info,"invalid using");
                                                                                            # 1605 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1820 "21obj.c"
                                                                    # 1608 "21obj.c"
                                                                    if(_if_conditional411=charp_operator_equals(buf,"sizeof"),                                                                    _if_conditional411) {
                                                                        # 1609 "21obj.c"
                                                                        expected_next_character(40,info);
                                                                        # 1612 "21obj.c"
                                                                        is_type_name_flag_260=(_Bool)0;
                                                                        # 1629 "21obj.c"
                                                                        {
                                                                            # 1614 "21obj.c"
                                                                            p_261=info->p;
                                                                            # 1615 "21obj.c"
                                                                            sline_262=info->sline;
                                                                            # 1625 "21obj.c"
                                                                            # 1617 "21obj.c"
                                                                            if(_if_conditional412=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional412) {
                                                                                # 1618 "21obj.c"
                                                                                word_263=(char*)come_increment_ref_count(((char*)(right_value512=parse_word(info))));
                                                                                right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1623 "21obj.c"
                                                                                # 1620 "21obj.c"
                                                                                if(_if_conditional413=is_type_name(word_263,info),                                                                                _if_conditional413) {
                                                                                    # 1621 "21obj.c"
                                                                                    is_type_name_flag_260=(_Bool)1;
                                                                                }
                                                                                word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 1625 "21obj.c"
                                                                            info->p=p_261;
                                                                            # 1626 "21obj.c"
                                                                            info->sline=sline_262;
                                                                        }
                                                                        # 1647 "21obj.c"
                                                                        # 1629 "21obj.c"
                                                                        if(is_type_name_flag_260) {
                                                                            # 1630 "21obj.c"
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value513=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_264=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_265=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_266=multiple_assign_var7->v3;
                                                                            come_call_finalizer3(right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            # 1636 "21obj.c"
                                                                            # 1631 "21obj.c"
                                                                            if(_if_conditional415=!err_266,                                                                            _if_conditional415) {
                                                                                # 1632 "21obj.c"
                                                                                err_msg(info,"parse type");
                                                                                # 1633 "21obj.c"
                                                                                exit(2);
                                                                            }
                                                                            # 1636 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 1638 "21obj.c"
                                                                            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1638, "struct sNode");
                                                                            _inf_obj_value27=come_increment_ref_count(((struct sSizeOfNode*)(right_value515=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value514=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1638, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_264),info))));
                                                                            _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                            _inf_value27->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value27->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value27->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value27->sline=(void*)sNodeBase_sline;
                                                                            _inf_value27->sname=(void*)sNodeBase_sname;
                                                                            _inf_value27->terminated=(void*)sSizeOfNode_terminated;
                                                                            _inf_value27->kind=(void*)sSizeOfNode_kind;
                                                                            __result307__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value27));
                                                                            come_call_finalizer3(type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_265 = come_decrement_ref_count2(name_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer3(right_value514,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value515,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result307__;
                                                                            come_call_finalizer3(type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_265 = come_decrement_ref_count2(name_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            # 1641 "21obj.c"
                                                                            exp_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=expression_v13(info))));
                                                                            if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            # 1643 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 1645 "21obj.c"
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1645, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value522=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value521=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1645, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_268),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value28->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value28->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value28->sline=(void*)sNodeBase_sline;
                                                                            _inf_value28->sname=(void*)sNodeBase_sname;
                                                                            _inf_value28->terminated=(void*)sSizeOfExpNode_terminated;
                                                                            _inf_value28->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result310__ = __result_obj__ = ((struct sNode*)(right_value526=_inf_value28));
                                                                            if(exp_268) { exp_268 = come_decrement_ref_count2(exp_268, ((struct sNode*)exp_268)->finalize, ((struct sNode*)exp_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer3(right_value521,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value522,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result310__;
                                                                            if(exp_268) { exp_268 = come_decrement_ref_count2(exp_268, ((struct sNode*)exp_268)->finalize, ((struct sNode*)exp_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1820 "21obj.c"
                                                                        # 1648 "21obj.c"
                                                                        if(_if_conditional428=charp_operator_equals(buf,"typeof"),                                                                        _if_conditional428) {
                                                                            # 1649 "21obj.c"
                                                                            expected_next_character(40,info);
                                                                            # 1652 "21obj.c"
                                                                            is_type_name_flag_270=(_Bool)0;
                                                                            # 1669 "21obj.c"
                                                                            {
                                                                                # 1654 "21obj.c"
                                                                                p_271=info->p;
                                                                                # 1655 "21obj.c"
                                                                                sline_272=info->sline;
                                                                                # 1665 "21obj.c"
                                                                                # 1657 "21obj.c"
                                                                                if(_if_conditional429=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional429) {
                                                                                    # 1658 "21obj.c"
                                                                                    word_273=(char*)come_increment_ref_count(((char*)(right_value527=parse_word(info))));
                                                                                    right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1663 "21obj.c"
                                                                                    # 1660 "21obj.c"
                                                                                    if(_if_conditional430=is_type_name(word_273,info),                                                                                    _if_conditional430) {
                                                                                        # 1661 "21obj.c"
                                                                                        is_type_name_flag_270=(_Bool)1;
                                                                                    }
                                                                                    word_273 = come_decrement_ref_count2(word_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 1665 "21obj.c"
                                                                                info->p=p_271;
                                                                                # 1666 "21obj.c"
                                                                                info->sline=sline_272;
                                                                            }
                                                                            # 1687 "21obj.c"
                                                                            # 1669 "21obj.c"
                                                                            if(is_type_name_flag_270) {
                                                                                # 1670 "21obj.c"
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value528=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_274=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_275=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_276=multiple_assign_var8->v3;
                                                                                come_call_finalizer3(right_value528,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 1676 "21obj.c"
                                                                                # 1671 "21obj.c"
                                                                                if(_if_conditional432=!err_276,                                                                                _if_conditional432) {
                                                                                    # 1672 "21obj.c"
                                                                                    err_msg(info,"parse type");
                                                                                    # 1673 "21obj.c"
                                                                                    exit(2);
                                                                                }
                                                                                # 1676 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 1678 "21obj.c"
                                                                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1678, "struct sNode");
                                                                                _inf_obj_value29=come_increment_ref_count(((struct sTypeOfNode*)(right_value530=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value529=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1678, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_274),info))));
                                                                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                _inf_value29->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value29->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value29->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value29->sline=(void*)sNodeBase_sline;
                                                                                _inf_value29->sname=(void*)sNodeBase_sname;
                                                                                _inf_value29->terminated=(void*)sTypeOfNode_terminated;
                                                                                _inf_value29->kind=(void*)sTypeOfNode_kind;
                                                                                __result313__ = __result_obj__ = ((struct sNode*)(right_value534=_inf_value29));
                                                                                come_call_finalizer3(type_274,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_275 = come_decrement_ref_count2(name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer3(right_value529,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value530,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result313__;
                                                                                come_call_finalizer3(type_274,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_275 = come_decrement_ref_count2(name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                # 1681 "21obj.c"
                                                                                exp_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value535=expression_v13(info))));
                                                                                if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1683 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 1685 "21obj.c"
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1685, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value537=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value536=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1685, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_278),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value30->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value30->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value30->sline=(void*)sNodeBase_sline;
                                                                                _inf_value30->sname=(void*)sNodeBase_sname;
                                                                                _inf_value30->terminated=(void*)sTypeOfExpNode_terminated;
                                                                                _inf_value30->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result316__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value30));
                                                                                if(exp_278) { exp_278 = come_decrement_ref_count2(exp_278, ((struct sNode*)exp_278)->finalize, ((struct sNode*)exp_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer3(right_value536,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value537,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result316__;
                                                                                if(exp_278) { exp_278 = come_decrement_ref_count2(exp_278, ((struct sNode*)exp_278)->finalize, ((struct sNode*)exp_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1820 "21obj.c"
                                                                            # 1699 "21obj.c"
                                                                            if(_if_conditional445=charp_operator_equals(buf,"_Alignof"),                                                                            _if_conditional445) {
                                                                                # 1700 "21obj.c"
                                                                                expected_next_character(40,info);
                                                                                # 1703 "21obj.c"
                                                                                is_type_name_flag_280=(_Bool)0;
                                                                                # 1720 "21obj.c"
                                                                                {
                                                                                    # 1705 "21obj.c"
                                                                                    p_281=info->p;
                                                                                    # 1706 "21obj.c"
                                                                                    sline_282=info->sline;
                                                                                    # 1716 "21obj.c"
                                                                                    # 1708 "21obj.c"
                                                                                    if(_if_conditional446=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional446) {
                                                                                        # 1709 "21obj.c"
                                                                                        word_283=(char*)come_increment_ref_count(((char*)(right_value542=parse_word(info))));
                                                                                        right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        # 1714 "21obj.c"
                                                                                        # 1711 "21obj.c"
                                                                                        if(_if_conditional447=is_type_name(word_283,info),                                                                                        _if_conditional447) {
                                                                                            # 1712 "21obj.c"
                                                                                            is_type_name_flag_280=(_Bool)1;
                                                                                        }
                                                                                        word_283 = come_decrement_ref_count2(word_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 1716 "21obj.c"
                                                                                    info->p=p_281;
                                                                                    # 1717 "21obj.c"
                                                                                    info->sline=sline_282;
                                                                                }
                                                                                # 1738 "21obj.c"
                                                                                # 1720 "21obj.c"
                                                                                if(is_type_name_flag_280) {
                                                                                    # 1721 "21obj.c"
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value543=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_284=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_285=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_286=multiple_assign_var9->v3;
                                                                                    come_call_finalizer3(right_value543,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 1727 "21obj.c"
                                                                                    # 1722 "21obj.c"
                                                                                    if(_if_conditional449=!err_286,                                                                                    _if_conditional449) {
                                                                                        # 1723 "21obj.c"
                                                                                        err_msg(info,"parse type");
                                                                                        # 1724 "21obj.c"
                                                                                        exit(2);
                                                                                    }
                                                                                    # 1727 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 1729 "21obj.c"
                                                                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1729, "struct sNode");
                                                                                    _inf_obj_value31=come_increment_ref_count(((struct sAlignOfNode*)(right_value545=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value544=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1729, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_284),info))));
                                                                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                    _inf_value31->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value31->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value31->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value31->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value31->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value31->terminated=(void*)sAlignOfNode_terminated;
                                                                                    _inf_value31->kind=(void*)sAlignOfNode_kind;
                                                                                    __result319__ = __result_obj__ = ((struct sNode*)(right_value549=_inf_value31));
                                                                                    come_call_finalizer3(type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value544,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value545,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result319__;
                                                                                    come_call_finalizer3(type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_285 = come_decrement_ref_count2(name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    # 1732 "21obj.c"
                                                                                    exp_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=expression_v13(info))));
                                                                                    if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    # 1734 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 1736 "21obj.c"
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1736, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value552=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value551=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1736, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_288),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value32->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value32->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result322__ = __result_obj__ = ((struct sNode*)(right_value556=_inf_value32));
                                                                                    if(exp_288) { exp_288 = come_decrement_ref_count2(exp_288, ((struct sNode*)exp_288)->finalize, ((struct sNode*)exp_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer3(right_value551,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value552,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result322__;
                                                                                    if(exp_288) { exp_288 = come_decrement_ref_count2(exp_288, ((struct sNode*)exp_288)->finalize, ((struct sNode*)exp_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1820 "21obj.c"
                                                                                # 1739 "21obj.c"
                                                                                if(_if_conditional462=charp_operator_equals(buf,"__alignof__"),                                                                                _if_conditional462) {
                                                                                    # 1740 "21obj.c"
                                                                                    expected_next_character(40,info);
                                                                                    # 1743 "21obj.c"
                                                                                    is_type_name_flag_290=(_Bool)0;
                                                                                    # 1760 "21obj.c"
                                                                                    {
                                                                                        # 1745 "21obj.c"
                                                                                        p_291=info->p;
                                                                                        # 1746 "21obj.c"
                                                                                        sline_292=info->sline;
                                                                                        # 1756 "21obj.c"
                                                                                        # 1748 "21obj.c"
                                                                                        if(_if_conditional463=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional463) {
                                                                                            # 1749 "21obj.c"
                                                                                            word_293=(char*)come_increment_ref_count(((char*)(right_value557=parse_word(info))));
                                                                                            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            # 1754 "21obj.c"
                                                                                            # 1751 "21obj.c"
                                                                                            if(_if_conditional464=is_type_name(word_293,info),                                                                                            _if_conditional464) {
                                                                                                # 1752 "21obj.c"
                                                                                                is_type_name_flag_290=(_Bool)1;
                                                                                            }
                                                                                            word_293 = come_decrement_ref_count2(word_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 1756 "21obj.c"
                                                                                        info->p=p_291;
                                                                                        # 1757 "21obj.c"
                                                                                        info->sline=sline_292;
                                                                                    }
                                                                                    # 1778 "21obj.c"
                                                                                    # 1760 "21obj.c"
                                                                                    if(is_type_name_flag_290) {
                                                                                        # 1761 "21obj.c"
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value558=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_294=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_295=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_296=multiple_assign_var10->v3;
                                                                                        come_call_finalizer3(right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 1767 "21obj.c"
                                                                                        # 1762 "21obj.c"
                                                                                        if(_if_conditional466=!err_296,                                                                                        _if_conditional466) {
                                                                                            # 1763 "21obj.c"
                                                                                            err_msg(info,"parse type");
                                                                                            # 1764 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                        # 1767 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 1769 "21obj.c"
                                                                                        _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1769, "struct sNode");
                                                                                        _inf_obj_value33=come_increment_ref_count(((struct sAlignOfNode2*)(right_value560=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value559=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1769, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_294),info))));
                                                                                        _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                        _inf_value33->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value33->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value33->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value33->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value33->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value33->terminated=(void*)sAlignOfNode2_terminated;
                                                                                        _inf_value33->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result325__ = __result_obj__ = ((struct sNode*)(right_value564=_inf_value33));
                                                                                        come_call_finalizer3(type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_295 = come_decrement_ref_count2(name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value559,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value560,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result325__;
                                                                                        come_call_finalizer3(type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_295 = come_decrement_ref_count2(name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        # 1772 "21obj.c"
                                                                                        exp_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=expression_v13(info))));
                                                                                        if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        # 1774 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 1776 "21obj.c"
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1776, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value567=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value566=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1776, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_298),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value34->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value34->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value34->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value34->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result328__ = __result_obj__ = ((struct sNode*)(right_value571=_inf_value34));
                                                                                        if(exp_298) { exp_298 = come_decrement_ref_count2(exp_298, ((struct sNode*)exp_298)->finalize, ((struct sNode*)exp_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer3(right_value566,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value567,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result328__;
                                                                                        if(exp_298) { exp_298 = come_decrement_ref_count2(exp_298, ((struct sNode*)exp_298)->finalize, ((struct sNode*)exp_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 1820 "21obj.c"
                                                                                    # 1779 "21obj.c"
                                                                                    if(_if_conditional479=charp_operator_equals(buf,"_Alignas"),                                                                                    _if_conditional479) {
                                                                                        # 1780 "21obj.c"
                                                                                        expected_next_character(40,info);
                                                                                        # 1783 "21obj.c"
                                                                                        is_type_name_flag_300=(_Bool)0;
                                                                                        # 1800 "21obj.c"
                                                                                        {
                                                                                            # 1785 "21obj.c"
                                                                                            p_301=info->p;
                                                                                            # 1786 "21obj.c"
                                                                                            sline_302=info->sline;
                                                                                            # 1796 "21obj.c"
                                                                                            # 1788 "21obj.c"
                                                                                            if(_if_conditional480=xisalpha(*info->p)||*info->p==95,                                                                                            _if_conditional480) {
                                                                                                # 1789 "21obj.c"
                                                                                                word_303=(char*)come_increment_ref_count(((char*)(right_value572=parse_word(info))));
                                                                                                right_value572 = come_decrement_ref_count2(right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1794 "21obj.c"
                                                                                                # 1791 "21obj.c"
                                                                                                if(_if_conditional481=is_type_name(word_303,info),                                                                                                _if_conditional481) {
                                                                                                    # 1792 "21obj.c"
                                                                                                    is_type_name_flag_300=(_Bool)1;
                                                                                                }
                                                                                                word_303 = come_decrement_ref_count2(word_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 1796 "21obj.c"
                                                                                            info->p=p_301;
                                                                                            # 1797 "21obj.c"
                                                                                            info->sline=sline_302;
                                                                                        }
                                                                                        # 1818 "21obj.c"
                                                                                        # 1800 "21obj.c"
                                                                                        if(is_type_name_flag_300) {
                                                                                            # 1801 "21obj.c"
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value573=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_304=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_305=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_306=multiple_assign_var11->v3;
                                                                                            come_call_finalizer3(right_value573,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 1807 "21obj.c"
                                                                                            # 1802 "21obj.c"
                                                                                            if(_if_conditional483=!err_306,                                                                                            _if_conditional483) {
                                                                                                # 1803 "21obj.c"
                                                                                                err_msg(info,"parse type");
                                                                                                # 1804 "21obj.c"
                                                                                                exit(2);
                                                                                            }
                                                                                            # 1807 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 1809 "21obj.c"
                                                                                            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1809, "struct sNode");
                                                                                            _inf_obj_value35=come_increment_ref_count(((struct sAlignAsNode*)(right_value575=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value574=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1809, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_304),info))));
                                                                                            _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                            _inf_value35->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value35->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value35->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value35->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value35->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value35->terminated=(void*)sAlignAsNode_terminated;
                                                                                            _inf_value35->kind=(void*)sAlignAsNode_kind;
                                                                                            __result331__ = __result_obj__ = ((struct sNode*)(right_value579=_inf_value35));
                                                                                            come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value574,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value575,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result331__;
                                                                                            come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            # 1812 "21obj.c"
                                                                                            exp_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=expression_v13(info))));
                                                                                            if(right_value580) { right_value580 = come_decrement_ref_count2(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            # 1814 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 1816 "21obj.c"
                                                                                            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1816, "struct sNode");
                                                                                            _inf_obj_value36=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value582=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value581=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1816, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_308),info))));
                                                                                            _inf_value36->_protocol_obj=_inf_obj_value36;
                                                                                            _inf_value36->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value36->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value36->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value36->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value36->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value36->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                            _inf_value36->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result334__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value36));
                                                                                            if(exp_308) { exp_308 = come_decrement_ref_count2(exp_308, ((struct sNode*)exp_308)->finalize, ((struct sNode*)exp_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer3(right_value581,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value582,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result334__;
                                                                                            if(exp_308) { exp_308 = come_decrement_ref_count2(exp_308, ((struct sNode*)exp_308)->finalize, ((struct sNode*)exp_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 1820 "21obj.c"
    __result335__ = __result_obj__ = ((struct sNode*)(right_value587=string_node_v20(buf,head,head_sline,info)));
    if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result335__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional258=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional258) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional259=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional259) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sNewNode_finalize"
                # 0 "sNewNode_finalize"
                if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional277) {
                    # 0 "sNewNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sNewNode_finalize"
                # 1 "sNewNode_finalize"
                if(_if_conditional278=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional278) {
                    # 1 "sNewNode_finalize"
                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional279;
struct sNewNode* __result241__;
void* right_value381;
struct sNewNode* result_220;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value382;
char* __dec_obj151;
_Bool _if_conditional282;
void* right_value383;
struct sType* __dec_obj152;
struct sNewNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_220, 0, sizeof(struct sNewNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
                # 3 "sNewNode_clone"
                # 2 "sNewNode_clone"
                if(_if_conditional279=self==(void*)0,                _if_conditional279) {
                    # 2 "sNewNode_clone"
                    __result241__ = __result_obj__ = (void*)0;
                    return __result241__;
                }
                # 3 "sNewNode_clone"
                result_220=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value381=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer3(right_value381,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sNewNode_clone"
                # 4 "sNewNode_clone"
                if(_if_conditional280=self!=((void*)0),                _if_conditional280) {
                    # 4 "sNewNode_clone"
                    result_220->sline=self->sline;
                }
                # 6 "sNewNode_clone"
                # 5 "sNewNode_clone"
                if(_if_conditional281=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional281) {
                    # 5 "sNewNode_clone"
                    __dec_obj151=result_220->sname;
                    result_220->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                # 6 "sNewNode_clone"
                if(_if_conditional282=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional282) {
                    # 6 "sNewNode_clone"
                    __dec_obj152=result_220->type;
                    result_220->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value383=sType_clone(self->type))));
                    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                __result242__ = __result_obj__ = result_220;
                come_call_finalizer3(result_220,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result242__;
                come_call_finalizer3(result_220,sNewNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sTrueNode_finalize"
                # 0 "sTrueNode_finalize"
                if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional284) {
                    # 0 "sTrueNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sTrueNode* __result244__;
void* right_value387;
struct sTrueNode* result_221;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value388;
char* __dec_obj153;
struct sTrueNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
memset(&result_221, 0, sizeof(struct sTrueNode*));
right_value388 = (void*)0;
                # 3 "sTrueNode_clone"
                # 2 "sTrueNode_clone"
                if(_if_conditional285=self==(void*)0,                _if_conditional285) {
                    # 2 "sTrueNode_clone"
                    __result244__ = __result_obj__ = (void*)0;
                    return __result244__;
                }
                # 3 "sTrueNode_clone"
                result_221=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value387=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer3(right_value387,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sTrueNode_clone"
                # 4 "sTrueNode_clone"
                if(_if_conditional286=self!=((void*)0),                _if_conditional286) {
                    # 4 "sTrueNode_clone"
                    result_221->sline=self->sline;
                }
                # 6 "sTrueNode_clone"
                # 5 "sTrueNode_clone"
                if(_if_conditional287=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional287) {
                    # 5 "sTrueNode_clone"
                    __dec_obj153=result_221->sname;
                    result_221->sname=(char*)come_increment_ref_count(((char*)(right_value388=string_clone(self->sname))));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTrueNode_clone"
                __result245__ = __result_obj__ = result_221;
                come_call_finalizer3(result_221,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result245__;
                come_call_finalizer3(result_221,sTrueNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sFalseNode_finalize"
                    # 0 "sFalseNode_finalize"
                    if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional289) {
                        # 0 "sFalseNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional290;
struct sFalseNode* __result247__;
void* right_value392;
struct sFalseNode* result_222;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value393;
char* __dec_obj154;
struct sFalseNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
memset(&result_222, 0, sizeof(struct sFalseNode*));
right_value393 = (void*)0;
                    # 3 "sFalseNode_clone"
                    # 2 "sFalseNode_clone"
                    if(_if_conditional290=self==(void*)0,                    _if_conditional290) {
                        # 2 "sFalseNode_clone"
                        __result247__ = __result_obj__ = (void*)0;
                        return __result247__;
                    }
                    # 3 "sFalseNode_clone"
                    result_222=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value392=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer3(right_value392,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sFalseNode_clone"
                    # 4 "sFalseNode_clone"
                    if(_if_conditional291=self!=((void*)0),                    _if_conditional291) {
                        # 4 "sFalseNode_clone"
                        result_222->sline=self->sline;
                    }
                    # 6 "sFalseNode_clone"
                    # 5 "sFalseNode_clone"
                    if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional292) {
                        # 5 "sFalseNode_clone"
                        __dec_obj154=result_222->sname;
                        result_222->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(self->sname))));
                        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sFalseNode_clone"
                    __result248__ = __result_obj__ = result_222;
                    come_call_finalizer3(result_222,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result248__;
                    come_call_finalizer3(result_222,sFalseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sDeleteNode_finalize"
                        # 0 "sDeleteNode_finalize"
                        if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional294) {
                            # 0 "sDeleteNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sDeleteNode_finalize"
                        # 1 "sDeleteNode_finalize"
                        if(_if_conditional295=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional295) {
                            # 1 "sDeleteNode_finalize"
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional296;
struct sDeleteNode* __result250__;
void* right_value398;
struct sDeleteNode* result_224;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value399;
char* __dec_obj155;
_Bool _if_conditional299;
void* right_value400;
struct sNode* __dec_obj156;
struct sDeleteNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_224, 0, sizeof(struct sDeleteNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
                        # 3 "sDeleteNode_clone"
                        # 2 "sDeleteNode_clone"
                        if(_if_conditional296=self==(void*)0,                        _if_conditional296) {
                            # 2 "sDeleteNode_clone"
                            __result250__ = __result_obj__ = (void*)0;
                            return __result250__;
                        }
                        # 3 "sDeleteNode_clone"
                        result_224=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value398=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer3(right_value398,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sDeleteNode_clone"
                        # 4 "sDeleteNode_clone"
                        if(_if_conditional297=self!=((void*)0),                        _if_conditional297) {
                            # 4 "sDeleteNode_clone"
                            result_224->sline=self->sline;
                        }
                        # 6 "sDeleteNode_clone"
                        # 5 "sDeleteNode_clone"
                        if(_if_conditional298=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional298) {
                            # 5 "sDeleteNode_clone"
                            __dec_obj155=result_224->sname;
                            result_224->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sDeleteNode_clone"
                        # 6 "sDeleteNode_clone"
                        if(_if_conditional299=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional299) {
                            # 6 "sDeleteNode_clone"
                            __dec_obj156=result_224->node;
                            result_224->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(self->node))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sDeleteNode_clone"
                        __result251__ = __result_obj__ = result_224;
                        come_call_finalizer3(result_224,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result251__;
                        come_call_finalizer3(result_224,sDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sForceDeleteNode_finalize"
                            # 0 "sForceDeleteNode_finalize"
                            if(_if_conditional301=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional301) {
                                # 0 "sForceDeleteNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sForceDeleteNode_finalize"
                            # 1 "sForceDeleteNode_finalize"
                            if(_if_conditional302=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional302) {
                                # 1 "sForceDeleteNode_finalize"
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional303;
struct sForceDeleteNode* __result253__;
void* right_value405;
struct sForceDeleteNode* result_226;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value406;
char* __dec_obj157;
_Bool _if_conditional306;
void* right_value407;
struct sNode* __dec_obj158;
struct sForceDeleteNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_226, 0, sizeof(struct sForceDeleteNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
                            # 3 "sForceDeleteNode_clone"
                            # 2 "sForceDeleteNode_clone"
                            if(_if_conditional303=self==(void*)0,                            _if_conditional303) {
                                # 2 "sForceDeleteNode_clone"
                                __result253__ = __result_obj__ = (void*)0;
                                return __result253__;
                            }
                            # 3 "sForceDeleteNode_clone"
                            result_226=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value405=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer3(right_value405,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sForceDeleteNode_clone"
                            # 4 "sForceDeleteNode_clone"
                            if(_if_conditional304=self!=((void*)0),                            _if_conditional304) {
                                # 4 "sForceDeleteNode_clone"
                                result_226->sline=self->sline;
                            }
                            # 6 "sForceDeleteNode_clone"
                            # 5 "sForceDeleteNode_clone"
                            if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional305) {
                                # 5 "sForceDeleteNode_clone"
                                __dec_obj157=result_226->sname;
                                result_226->sname=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(self->sname))));
                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sForceDeleteNode_clone"
                            # 6 "sForceDeleteNode_clone"
                            if(_if_conditional306=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional306) {
                                # 6 "sForceDeleteNode_clone"
                                __dec_obj158=result_226->node;
                                result_226->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->node))));
                                if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sForceDeleteNode_clone"
                            __result254__ = __result_obj__ = result_226;
                            come_call_finalizer3(result_226,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result254__;
                            come_call_finalizer3(result_226,sForceDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sBorrowNode_finalize"
                                # 0 "sBorrowNode_finalize"
                                if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional308) {
                                    # 0 "sBorrowNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sBorrowNode_finalize"
                                # 1 "sBorrowNode_finalize"
                                if(_if_conditional309=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional309) {
                                    # 1 "sBorrowNode_finalize"
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional310;
struct sBorrowNode* __result256__;
void* right_value412;
struct sBorrowNode* result_228;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value413;
char* __dec_obj159;
_Bool _if_conditional313;
void* right_value414;
struct sNode* __dec_obj160;
struct sBorrowNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_228, 0, sizeof(struct sBorrowNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
                                # 3 "sBorrowNode_clone"
                                # 2 "sBorrowNode_clone"
                                if(_if_conditional310=self==(void*)0,                                _if_conditional310) {
                                    # 2 "sBorrowNode_clone"
                                    __result256__ = __result_obj__ = (void*)0;
                                    return __result256__;
                                }
                                # 3 "sBorrowNode_clone"
                                result_228=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value412=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer3(right_value412,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sBorrowNode_clone"
                                # 4 "sBorrowNode_clone"
                                if(_if_conditional311=self!=((void*)0),                                _if_conditional311) {
                                    # 4 "sBorrowNode_clone"
                                    result_228->sline=self->sline;
                                }
                                # 6 "sBorrowNode_clone"
                                # 5 "sBorrowNode_clone"
                                if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional312) {
                                    # 5 "sBorrowNode_clone"
                                    __dec_obj159=result_228->sname;
                                    result_228->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sBorrowNode_clone"
                                # 6 "sBorrowNode_clone"
                                if(_if_conditional313=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional313) {
                                    # 6 "sBorrowNode_clone"
                                    __dec_obj160=result_228->node;
                                    result_228->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->node))));
                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sBorrowNode_clone"
                                __result257__ = __result_obj__ = result_228;
                                come_call_finalizer3(result_228,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result257__;
                                come_call_finalizer3(result_228,sBorrowNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sDelegateNode_finalize"
                                    # 0 "sDelegateNode_finalize"
                                    if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional315) {
                                        # 0 "sDelegateNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sDelegateNode_finalize"
                                    # 1 "sDelegateNode_finalize"
                                    if(_if_conditional316=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional316) {
                                        # 1 "sDelegateNode_finalize"
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sDelegateNode* __result259__;
void* right_value419;
struct sDelegateNode* result_230;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value420;
char* __dec_obj161;
_Bool _if_conditional320;
void* right_value421;
struct sNode* __dec_obj162;
struct sDelegateNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
memset(&result_230, 0, sizeof(struct sDelegateNode*));
right_value420 = (void*)0;
right_value421 = (void*)0;
                                    # 3 "sDelegateNode_clone"
                                    # 2 "sDelegateNode_clone"
                                    if(_if_conditional317=self==(void*)0,                                    _if_conditional317) {
                                        # 2 "sDelegateNode_clone"
                                        __result259__ = __result_obj__ = (void*)0;
                                        return __result259__;
                                    }
                                    # 3 "sDelegateNode_clone"
                                    result_230=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value419=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer3(right_value419,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sDelegateNode_clone"
                                    # 4 "sDelegateNode_clone"
                                    if(_if_conditional318=self!=((void*)0),                                    _if_conditional318) {
                                        # 4 "sDelegateNode_clone"
                                        result_230->sline=self->sline;
                                    }
                                    # 6 "sDelegateNode_clone"
                                    # 5 "sDelegateNode_clone"
                                    if(_if_conditional319=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional319) {
                                        # 5 "sDelegateNode_clone"
                                        __dec_obj161=result_230->sname;
                                        result_230->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sDelegateNode_clone"
                                    # 6 "sDelegateNode_clone"
                                    if(_if_conditional320=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional320) {
                                        # 6 "sDelegateNode_clone"
                                        __dec_obj162=result_230->node;
                                        result_230->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(self->node))));
                                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sDelegateNode_clone"
                                    __result260__ = __result_obj__ = result_230;
                                    come_call_finalizer3(result_230,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result260__;
                                    come_call_finalizer3(result_230,sDelegateNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sShareNode_finalize"
                                        # 0 "sShareNode_finalize"
                                        if(_if_conditional322=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional322) {
                                            # 0 "sShareNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sShareNode_finalize"
                                        # 1 "sShareNode_finalize"
                                        if(_if_conditional323=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional323) {
                                            # 1 "sShareNode_finalize"
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sShareNode* __result262__;
void* right_value426;
struct sShareNode* result_232;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value427;
char* __dec_obj163;
_Bool _if_conditional327;
void* right_value428;
struct sNode* __dec_obj164;
struct sShareNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value426 = (void*)0;
memset(&result_232, 0, sizeof(struct sShareNode*));
right_value427 = (void*)0;
right_value428 = (void*)0;
                                        # 3 "sShareNode_clone"
                                        # 2 "sShareNode_clone"
                                        if(_if_conditional324=self==(void*)0,                                        _if_conditional324) {
                                            # 2 "sShareNode_clone"
                                            __result262__ = __result_obj__ = (void*)0;
                                            return __result262__;
                                        }
                                        # 3 "sShareNode_clone"
                                        result_232=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value426=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer3(right_value426,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sShareNode_clone"
                                        # 4 "sShareNode_clone"
                                        if(_if_conditional325=self!=((void*)0),                                        _if_conditional325) {
                                            # 4 "sShareNode_clone"
                                            result_232->sline=self->sline;
                                        }
                                        # 6 "sShareNode_clone"
                                        # 5 "sShareNode_clone"
                                        if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional326) {
                                            # 5 "sShareNode_clone"
                                            __dec_obj163=result_232->sname;
                                            result_232->sname=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->sname))));
                                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sShareNode_clone"
                                        # 6 "sShareNode_clone"
                                        if(_if_conditional327=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional327) {
                                            # 6 "sShareNode_clone"
                                            __dec_obj164=result_232->node;
                                            result_232->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=sNode_clone(self->node))));
                                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sShareNode_clone"
                                        __result263__ = __result_obj__ = result_232;
                                        come_call_finalizer3(result_232,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result263__;
                                        come_call_finalizer3(result_232,sShareNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCloneNode_finalize"
                                            # 0 "sCloneNode_finalize"
                                            if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional329) {
                                                # 0 "sCloneNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sCloneNode_finalize"
                                            # 1 "sCloneNode_finalize"
                                            if(_if_conditional330=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional330) {
                                                # 1 "sCloneNode_finalize"
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional331;
struct sCloneNode* __result265__;
void* right_value433;
struct sCloneNode* result_234;
_Bool _if_conditional332;
_Bool _if_conditional333;
void* right_value434;
char* __dec_obj165;
_Bool _if_conditional334;
void* right_value435;
struct sNode* __dec_obj166;
struct sCloneNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
memset(&result_234, 0, sizeof(struct sCloneNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
                                            # 3 "sCloneNode_clone"
                                            # 2 "sCloneNode_clone"
                                            if(_if_conditional331=self==(void*)0,                                            _if_conditional331) {
                                                # 2 "sCloneNode_clone"
                                                __result265__ = __result_obj__ = (void*)0;
                                                return __result265__;
                                            }
                                            # 3 "sCloneNode_clone"
                                            result_234=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value433=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer3(right_value433,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCloneNode_clone"
                                            # 4 "sCloneNode_clone"
                                            if(_if_conditional332=self!=((void*)0),                                            _if_conditional332) {
                                                # 4 "sCloneNode_clone"
                                                result_234->sline=self->sline;
                                            }
                                            # 6 "sCloneNode_clone"
                                            # 5 "sCloneNode_clone"
                                            if(_if_conditional333=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional333) {
                                                # 5 "sCloneNode_clone"
                                                __dec_obj165=result_234->sname;
                                                result_234->sname=(char*)come_increment_ref_count(((char*)(right_value434=string_clone(self->sname))));
                                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCloneNode_clone"
                                            # 6 "sCloneNode_clone"
                                            if(_if_conditional334=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional334) {
                                                # 6 "sCloneNode_clone"
                                                __dec_obj166=result_234->node;
                                                result_234->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=sNode_clone(self->node))));
                                                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sCloneNode_clone"
                                            __result266__ = __result_obj__ = result_234;
                                            come_call_finalizer3(result_234,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result266__;
                                            come_call_finalizer3(result_234,sCloneNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sDupeNode_finalize"
                                                # 0 "sDupeNode_finalize"
                                                if(_if_conditional336=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional336) {
                                                    # 0 "sDupeNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sDupeNode_finalize"
                                                # 1 "sDupeNode_finalize"
                                                if(_if_conditional337=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional337) {
                                                    # 1 "sDupeNode_finalize"
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sDupeNode* __result268__;
void* right_value440;
struct sDupeNode* result_236;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value441;
char* __dec_obj167;
_Bool _if_conditional341;
void* right_value442;
struct sNode* __dec_obj168;
struct sDupeNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
memset(&result_236, 0, sizeof(struct sDupeNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
                                                # 3 "sDupeNode_clone"
                                                # 2 "sDupeNode_clone"
                                                if(_if_conditional338=self==(void*)0,                                                _if_conditional338) {
                                                    # 2 "sDupeNode_clone"
                                                    __result268__ = __result_obj__ = (void*)0;
                                                    return __result268__;
                                                }
                                                # 3 "sDupeNode_clone"
                                                result_236=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value440=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer3(right_value440,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sDupeNode_clone"
                                                # 4 "sDupeNode_clone"
                                                if(_if_conditional339=self!=((void*)0),                                                _if_conditional339) {
                                                    # 4 "sDupeNode_clone"
                                                    result_236->sline=self->sline;
                                                }
                                                # 6 "sDupeNode_clone"
                                                # 5 "sDupeNode_clone"
                                                if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional340) {
                                                    # 5 "sDupeNode_clone"
                                                    __dec_obj167=result_236->sname;
                                                    result_236->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sDupeNode_clone"
                                                # 6 "sDupeNode_clone"
                                                if(_if_conditional341=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional341) {
                                                    # 6 "sDupeNode_clone"
                                                    __dec_obj168=result_236->node;
                                                    result_236->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(self->node))));
                                                    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 7 "sDupeNode_clone"
                                                __result269__ = __result_obj__ = result_236;
                                                come_call_finalizer3(result_236,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result269__;
                                                come_call_finalizer3(result_236,sDupeNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sDummyHeapNode_finalize"
                                                    # 0 "sDummyHeapNode_finalize"
                                                    if(_if_conditional343=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional343) {
                                                        # 0 "sDummyHeapNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sDummyHeapNode_finalize"
                                                    # 1 "sDummyHeapNode_finalize"
                                                    if(_if_conditional344=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional344) {
                                                        # 1 "sDummyHeapNode_finalize"
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional345;
struct sDummyHeapNode* __result271__;
void* right_value447;
struct sDummyHeapNode* result_238;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value448;
char* __dec_obj169;
_Bool _if_conditional348;
void* right_value449;
struct sNode* __dec_obj170;
struct sDummyHeapNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value447 = (void*)0;
memset(&result_238, 0, sizeof(struct sDummyHeapNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
                                                    # 3 "sDummyHeapNode_clone"
                                                    # 2 "sDummyHeapNode_clone"
                                                    if(_if_conditional345=self==(void*)0,                                                    _if_conditional345) {
                                                        # 2 "sDummyHeapNode_clone"
                                                        __result271__ = __result_obj__ = (void*)0;
                                                        return __result271__;
                                                    }
                                                    # 3 "sDummyHeapNode_clone"
                                                    result_238=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value447=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer3(right_value447,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sDummyHeapNode_clone"
                                                    # 4 "sDummyHeapNode_clone"
                                                    if(_if_conditional346=self!=((void*)0),                                                    _if_conditional346) {
                                                        # 4 "sDummyHeapNode_clone"
                                                        result_238->sline=self->sline;
                                                    }
                                                    # 6 "sDummyHeapNode_clone"
                                                    # 5 "sDummyHeapNode_clone"
                                                    if(_if_conditional347=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional347) {
                                                        # 5 "sDummyHeapNode_clone"
                                                        __dec_obj169=result_238->sname;
                                                        result_238->sname=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(self->sname))));
                                                        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    # 6 "sDummyHeapNode_clone"
                                                    if(_if_conditional348=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional348) {
                                                        # 6 "sDummyHeapNode_clone"
                                                        __dec_obj170=result_238->node;
                                                        result_238->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value449=sNode_clone(self->node))));
                                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    __result272__ = __result_obj__ = result_238;
                                                    come_call_finalizer3(result_238,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result272__;
                                                    come_call_finalizer3(result_238,sDummyHeapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sGCIncNode_finalize"
                                                        # 0 "sGCIncNode_finalize"
                                                        if(_if_conditional350=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional350) {
                                                            # 0 "sGCIncNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sGCIncNode_finalize"
                                                        # 1 "sGCIncNode_finalize"
                                                        if(_if_conditional351=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional351) {
                                                            # 1 "sGCIncNode_finalize"
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional352;
struct sGCIncNode* __result274__;
void* right_value454;
struct sGCIncNode* result_240;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value455;
char* __dec_obj171;
_Bool _if_conditional355;
void* right_value456;
struct sNode* __dec_obj172;
struct sGCIncNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&result_240, 0, sizeof(struct sGCIncNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                                                        # 3 "sGCIncNode_clone"
                                                        # 2 "sGCIncNode_clone"
                                                        if(_if_conditional352=self==(void*)0,                                                        _if_conditional352) {
                                                            # 2 "sGCIncNode_clone"
                                                            __result274__ = __result_obj__ = (void*)0;
                                                            return __result274__;
                                                        }
                                                        # 3 "sGCIncNode_clone"
                                                        result_240=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value454=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer3(right_value454,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sGCIncNode_clone"
                                                        # 4 "sGCIncNode_clone"
                                                        if(_if_conditional353=self!=((void*)0),                                                        _if_conditional353) {
                                                            # 4 "sGCIncNode_clone"
                                                            result_240->sline=self->sline;
                                                        }
                                                        # 6 "sGCIncNode_clone"
                                                        # 5 "sGCIncNode_clone"
                                                        if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional354) {
                                                            # 5 "sGCIncNode_clone"
                                                            __dec_obj171=result_240->sname;
                                                            result_240->sname=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(self->sname))));
                                                            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        # 6 "sGCIncNode_clone"
                                                        if(_if_conditional355=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional355) {
                                                            # 6 "sGCIncNode_clone"
                                                            __dec_obj172=result_240->node;
                                                            result_240->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value456=sNode_clone(self->node))));
                                                            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        __result275__ = __result_obj__ = result_240;
                                                        come_call_finalizer3(result_240,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result275__;
                                                        come_call_finalizer3(result_240,sGCIncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sGCDecNode_finalize"
                                                            # 0 "sGCDecNode_finalize"
                                                            if(_if_conditional357=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional357) {
                                                                # 0 "sGCDecNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "sGCDecNode_finalize"
                                                            # 1 "sGCDecNode_finalize"
                                                            if(_if_conditional358=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional358) {
                                                                # 1 "sGCDecNode_finalize"
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional359;
struct sGCDecNode* __result277__;
void* right_value461;
struct sGCDecNode* result_242;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value462;
char* __dec_obj173;
_Bool _if_conditional362;
void* right_value463;
struct sNode* __dec_obj174;
struct sGCDecNode* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value461 = (void*)0;
memset(&result_242, 0, sizeof(struct sGCDecNode*));
right_value462 = (void*)0;
right_value463 = (void*)0;
                                                            # 3 "sGCDecNode_clone"
                                                            # 2 "sGCDecNode_clone"
                                                            if(_if_conditional359=self==(void*)0,                                                            _if_conditional359) {
                                                                # 2 "sGCDecNode_clone"
                                                                __result277__ = __result_obj__ = (void*)0;
                                                                return __result277__;
                                                            }
                                                            # 3 "sGCDecNode_clone"
                                                            result_242=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value461=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer3(right_value461,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sGCDecNode_clone"
                                                            # 4 "sGCDecNode_clone"
                                                            if(_if_conditional360=self!=((void*)0),                                                            _if_conditional360) {
                                                                # 4 "sGCDecNode_clone"
                                                                result_242->sline=self->sline;
                                                            }
                                                            # 6 "sGCDecNode_clone"
                                                            # 5 "sGCDecNode_clone"
                                                            if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional361) {
                                                                # 5 "sGCDecNode_clone"
                                                                __dec_obj173=result_242->sname;
                                                                result_242->sname=(char*)come_increment_ref_count(((char*)(right_value462=string_clone(self->sname))));
                                                                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            # 6 "sGCDecNode_clone"
                                                            if(_if_conditional362=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional362) {
                                                                # 6 "sGCDecNode_clone"
                                                                __dec_obj174=result_242->node;
                                                                result_242->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=sNode_clone(self->node))));
                                                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            __result278__ = __result_obj__ = result_242;
                                                            come_call_finalizer3(result_242,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result278__;
                                                            come_call_finalizer3(result_242,sGCDecNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "sIsHeap_finalize"
                                                                # 0 "sIsHeap_finalize"
                                                                if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional365) {
                                                                    # 0 "sIsHeap_finalize"
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                # 2 "sIsHeap_finalize"
                                                                # 1 "sIsHeap_finalize"
                                                                if(_if_conditional366=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional366) {
                                                                    # 1 "sIsHeap_finalize"
                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional367;
struct sIsHeap* __result280__;
void* right_value469;
struct sIsHeap* result_247;
_Bool _if_conditional368;
_Bool _if_conditional369;
void* right_value470;
char* __dec_obj175;
_Bool _if_conditional370;
void* right_value471;
struct sType* __dec_obj176;
struct sIsHeap* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value469 = (void*)0;
memset(&result_247, 0, sizeof(struct sIsHeap*));
right_value470 = (void*)0;
right_value471 = (void*)0;
                                                                # 3 "sIsHeap_clone"
                                                                # 2 "sIsHeap_clone"
                                                                if(_if_conditional367=self==(void*)0,                                                                _if_conditional367) {
                                                                    # 2 "sIsHeap_clone"
                                                                    __result280__ = __result_obj__ = (void*)0;
                                                                    return __result280__;
                                                                }
                                                                # 3 "sIsHeap_clone"
                                                                result_247=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value469=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer3(right_value469,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 5 "sIsHeap_clone"
                                                                # 4 "sIsHeap_clone"
                                                                if(_if_conditional368=self!=((void*)0),                                                                _if_conditional368) {
                                                                    # 4 "sIsHeap_clone"
                                                                    result_247->sline=self->sline;
                                                                }
                                                                # 6 "sIsHeap_clone"
                                                                # 5 "sIsHeap_clone"
                                                                if(_if_conditional369=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional369) {
                                                                    # 5 "sIsHeap_clone"
                                                                    __dec_obj175=result_247->sname;
                                                                    result_247->sname=(char*)come_increment_ref_count(((char*)(right_value470=string_clone(self->sname))));
                                                                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                # 6 "sIsHeap_clone"
                                                                if(_if_conditional370=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional370) {
                                                                    # 6 "sIsHeap_clone"
                                                                    __dec_obj176=result_247->type;
                                                                    result_247->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value471=sType_clone(self->type))));
                                                                    come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value471,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                __result281__ = __result_obj__ = result_247;
                                                                come_call_finalizer3(result_247,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result281__;
                                                                come_call_finalizer3(result_247,sIsHeap_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsPointer_finalize(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "sIsPointer_finalize"
                                                                    # 0 "sIsPointer_finalize"
                                                                    if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional373) {
                                                                        # 0 "sIsPointer_finalize"
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    # 2 "sIsPointer_finalize"
                                                                    # 1 "sIsPointer_finalize"
                                                                    if(_if_conditional374=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional374) {
                                                                        # 1 "sIsPointer_finalize"
                                                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sIsPointer* __result283__;
void* right_value477;
struct sIsPointer* result_252;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value478;
char* __dec_obj177;
_Bool _if_conditional378;
void* right_value479;
struct sType* __dec_obj178;
struct sIsPointer* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value477 = (void*)0;
memset(&result_252, 0, sizeof(struct sIsPointer*));
right_value478 = (void*)0;
right_value479 = (void*)0;
                                                                    # 3 "sIsPointer_clone"
                                                                    # 2 "sIsPointer_clone"
                                                                    if(_if_conditional375=self==(void*)0,                                                                    _if_conditional375) {
                                                                        # 2 "sIsPointer_clone"
                                                                        __result283__ = __result_obj__ = (void*)0;
                                                                        return __result283__;
                                                                    }
                                                                    # 3 "sIsPointer_clone"
                                                                    result_252=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value477=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"))));
                                                                    come_call_finalizer3(right_value477,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    # 5 "sIsPointer_clone"
                                                                    # 4 "sIsPointer_clone"
                                                                    if(_if_conditional376=self!=((void*)0),                                                                    _if_conditional376) {
                                                                        # 4 "sIsPointer_clone"
                                                                        result_252->sline=self->sline;
                                                                    }
                                                                    # 6 "sIsPointer_clone"
                                                                    # 5 "sIsPointer_clone"
                                                                    if(_if_conditional377=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional377) {
                                                                        # 5 "sIsPointer_clone"
                                                                        __dec_obj177=result_252->sname;
                                                                        result_252->sname=(char*)come_increment_ref_count(((char*)(right_value478=string_clone(self->sname))));
                                                                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    # 6 "sIsPointer_clone"
                                                                    if(_if_conditional378=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional378) {
                                                                        # 6 "sIsPointer_clone"
                                                                        __dec_obj178=result_252->type;
                                                                        result_252->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value479=sType_clone(self->type))));
                                                                        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer3(right_value479,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    __result284__ = __result_obj__ = result_252;
                                                                    come_call_finalizer3(result_252,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result284__;
                                                                    come_call_finalizer3(result_252,sIsPointer_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                # 0 "sSizeOfNode_finalize"
                                                                                if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional416) {
                                                                                    # 0 "sSizeOfNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfNode_finalize"
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                if(_if_conditional417=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional417) {
                                                                                    # 1 "sSizeOfNode_finalize"
                                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional418;
struct sSizeOfNode* __result305__;
void* right_value516;
struct sSizeOfNode* result_267;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value517;
char* __dec_obj185;
_Bool _if_conditional421;
void* right_value518;
struct sType* __dec_obj186;
struct sSizeOfNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value516 = (void*)0;
memset(&result_267, 0, sizeof(struct sSizeOfNode*));
right_value517 = (void*)0;
right_value518 = (void*)0;
                                                                                # 3 "sSizeOfNode_clone"
                                                                                # 2 "sSizeOfNode_clone"
                                                                                if(_if_conditional418=self==(void*)0,                                                                                _if_conditional418) {
                                                                                    # 2 "sSizeOfNode_clone"
                                                                                    __result305__ = __result_obj__ = (void*)0;
                                                                                    return __result305__;
                                                                                }
                                                                                # 3 "sSizeOfNode_clone"
                                                                                result_267=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value516=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                                come_call_finalizer3(right_value516,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfNode_clone"
                                                                                # 4 "sSizeOfNode_clone"
                                                                                if(_if_conditional419=self!=((void*)0),                                                                                _if_conditional419) {
                                                                                    # 4 "sSizeOfNode_clone"
                                                                                    result_267->sline=self->sline;
                                                                                }
                                                                                # 6 "sSizeOfNode_clone"
                                                                                # 5 "sSizeOfNode_clone"
                                                                                if(_if_conditional420=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional420) {
                                                                                    # 5 "sSizeOfNode_clone"
                                                                                    __dec_obj185=result_267->sname;
                                                                                    result_267->sname=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->sname))));
                                                                                    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                # 6 "sSizeOfNode_clone"
                                                                                if(_if_conditional421=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional421) {
                                                                                    # 6 "sSizeOfNode_clone"
                                                                                    __dec_obj186=result_267->type;
                                                                                    result_267->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value518=sType_clone(self->type))));
                                                                                    come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value518,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                __result306__ = __result_obj__ = result_267;
                                                                                come_call_finalizer3(result_267,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result306__;
                                                                                come_call_finalizer3(result_267,sSizeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional422;
_Bool _if_conditional423;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                # 0 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional422) {
                                                                                    # 0 "sSizeOfExpNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfExpNode_finalize"
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional423=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional423) {
                                                                                    # 1 "sSizeOfExpNode_finalize"
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional424;
struct sSizeOfExpNode* __result308__;
void* right_value523;
struct sSizeOfExpNode* result_269;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value524;
char* __dec_obj187;
_Bool _if_conditional427;
void* right_value525;
struct sNode* __dec_obj188;
struct sSizeOfExpNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
right_value523 = (void*)0;
memset(&result_269, 0, sizeof(struct sSizeOfExpNode*));
right_value524 = (void*)0;
right_value525 = (void*)0;
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                # 2 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional424=self==(void*)0,                                                                                _if_conditional424) {
                                                                                    # 2 "sSizeOfExpNode_clone"
                                                                                    __result308__ = __result_obj__ = (void*)0;
                                                                                    return __result308__;
                                                                                }
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                result_269=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value523=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                                come_call_finalizer3(right_value523,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                # 4 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional425=self!=((void*)0),                                                                                _if_conditional425) {
                                                                                    # 4 "sSizeOfExpNode_clone"
                                                                                    result_269->sline=self->sline;
                                                                                }
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional426=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional426) {
                                                                                    # 5 "sSizeOfExpNode_clone"
                                                                                    __dec_obj187=result_269->sname;
                                                                                    result_269->sname=(char*)come_increment_ref_count(((char*)(right_value524=string_clone(self->sname))));
                                                                                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional427=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional427) {
                                                                                    # 6 "sSizeOfExpNode_clone"
                                                                                    __dec_obj188=result_269->exp;
                                                                                    result_269->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=sNode_clone(self->exp))));
                                                                                    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                __result309__ = __result_obj__ = result_269;
                                                                                come_call_finalizer3(result_269,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result309__;
                                                                                come_call_finalizer3(result_269,sSizeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional433;
_Bool _if_conditional434;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    # 0 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional433=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional433) {
                                                                                        # 0 "sTypeOfNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfNode_finalize"
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional434=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional434) {
                                                                                        # 1 "sTypeOfNode_finalize"
                                                                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional435;
struct sTypeOfNode* __result311__;
void* right_value531;
struct sTypeOfNode* result_277;
_Bool _if_conditional436;
_Bool _if_conditional437;
void* right_value532;
char* __dec_obj189;
_Bool _if_conditional438;
void* right_value533;
struct sType* __dec_obj190;
struct sTypeOfNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
right_value531 = (void*)0;
memset(&result_277, 0, sizeof(struct sTypeOfNode*));
right_value532 = (void*)0;
right_value533 = (void*)0;
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    # 2 "sTypeOfNode_clone"
                                                                                    if(_if_conditional435=self==(void*)0,                                                                                    _if_conditional435) {
                                                                                        # 2 "sTypeOfNode_clone"
                                                                                        __result311__ = __result_obj__ = (void*)0;
                                                                                        return __result311__;
                                                                                    }
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    result_277=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value531=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                    come_call_finalizer3(right_value531,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    # 4 "sTypeOfNode_clone"
                                                                                    if(_if_conditional436=self!=((void*)0),                                                                                    _if_conditional436) {
                                                                                        # 4 "sTypeOfNode_clone"
                                                                                        result_277->sline=self->sline;
                                                                                    }
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    if(_if_conditional437=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional437) {
                                                                                        # 5 "sTypeOfNode_clone"
                                                                                        __dec_obj189=result_277->sname;
                                                                                        result_277->sname=(char*)come_increment_ref_count(((char*)(right_value532=string_clone(self->sname))));
                                                                                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    if(_if_conditional438=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional438) {
                                                                                        # 6 "sTypeOfNode_clone"
                                                                                        __dec_obj190=result_277->type;
                                                                                        result_277->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value533=sType_clone(self->type))));
                                                                                        come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    __result312__ = __result_obj__ = result_277;
                                                                                    come_call_finalizer3(result_277,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result312__;
                                                                                    come_call_finalizer3(result_277,sTypeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    # 0 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional439=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional439) {
                                                                                        # 0 "sTypeOfExpNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfExpNode_finalize"
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional440=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional440) {
                                                                                        # 1 "sTypeOfExpNode_finalize"
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional441;
struct sTypeOfExpNode* __result314__;
void* right_value538;
struct sTypeOfExpNode* result_279;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value539;
char* __dec_obj191;
_Bool _if_conditional444;
void* right_value540;
struct sNode* __dec_obj192;
struct sTypeOfExpNode* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
right_value538 = (void*)0;
memset(&result_279, 0, sizeof(struct sTypeOfExpNode*));
right_value539 = (void*)0;
right_value540 = (void*)0;
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    # 2 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional441=self==(void*)0,                                                                                    _if_conditional441) {
                                                                                        # 2 "sTypeOfExpNode_clone"
                                                                                        __result314__ = __result_obj__ = (void*)0;
                                                                                        return __result314__;
                                                                                    }
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    result_279=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value538=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                    come_call_finalizer3(right_value538,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    # 4 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional442=self!=((void*)0),                                                                                    _if_conditional442) {
                                                                                        # 4 "sTypeOfExpNode_clone"
                                                                                        result_279->sline=self->sline;
                                                                                    }
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional443) {
                                                                                        # 5 "sTypeOfExpNode_clone"
                                                                                        __dec_obj191=result_279->sname;
                                                                                        result_279->sname=(char*)come_increment_ref_count(((char*)(right_value539=string_clone(self->sname))));
                                                                                        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value539 = come_decrement_ref_count2(right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional444=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional444) {
                                                                                        # 6 "sTypeOfExpNode_clone"
                                                                                        __dec_obj192=result_279->exp;
                                                                                        result_279->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=sNode_clone(self->exp))));
                                                                                        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    __result315__ = __result_obj__ = result_279;
                                                                                    come_call_finalizer3(result_279,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result315__;
                                                                                    come_call_finalizer3(result_279,sTypeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional450;
_Bool _if_conditional451;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        # 0 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional450=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional450) {
                                                                                            # 0 "sAlignOfNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfNode_finalize"
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional451=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional451) {
                                                                                            # 1 "sAlignOfNode_finalize"
                                                                                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional452;
struct sAlignOfNode* __result317__;
void* right_value546;
struct sAlignOfNode* result_287;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value547;
char* __dec_obj193;
_Bool _if_conditional455;
void* right_value548;
struct sType* __dec_obj194;
struct sAlignOfNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value546 = (void*)0;
memset(&result_287, 0, sizeof(struct sAlignOfNode*));
right_value547 = (void*)0;
right_value548 = (void*)0;
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        # 2 "sAlignOfNode_clone"
                                                                                        if(_if_conditional452=self==(void*)0,                                                                                        _if_conditional452) {
                                                                                            # 2 "sAlignOfNode_clone"
                                                                                            __result317__ = __result_obj__ = (void*)0;
                                                                                            return __result317__;
                                                                                        }
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        result_287=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value546=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                        come_call_finalizer3(right_value546,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        # 4 "sAlignOfNode_clone"
                                                                                        if(_if_conditional453=self!=((void*)0),                                                                                        _if_conditional453) {
                                                                                            # 4 "sAlignOfNode_clone"
                                                                                            result_287->sline=self->sline;
                                                                                        }
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        if(_if_conditional454=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional454) {
                                                                                            # 5 "sAlignOfNode_clone"
                                                                                            __dec_obj193=result_287->sname;
                                                                                            result_287->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                                                                                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        if(_if_conditional455=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional455) {
                                                                                            # 6 "sAlignOfNode_clone"
                                                                                            __dec_obj194=result_287->type;
                                                                                            result_287->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value548=sType_clone(self->type))));
                                                                                            come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value548,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        __result318__ = __result_obj__ = result_287;
                                                                                        come_call_finalizer3(result_287,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result318__;
                                                                                        come_call_finalizer3(result_287,sAlignOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional456;
_Bool _if_conditional457;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        # 0 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional456=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional456) {
                                                                                            # 0 "sAlignOfExpNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfExpNode_finalize"
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional457=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional457) {
                                                                                            # 1 "sAlignOfExpNode_finalize"
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional458;
struct sAlignOfExpNode* __result320__;
void* right_value553;
struct sAlignOfExpNode* result_289;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value554;
char* __dec_obj195;
_Bool _if_conditional461;
void* right_value555;
struct sNode* __dec_obj196;
struct sAlignOfExpNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value553 = (void*)0;
memset(&result_289, 0, sizeof(struct sAlignOfExpNode*));
right_value554 = (void*)0;
right_value555 = (void*)0;
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        # 2 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional458=self==(void*)0,                                                                                        _if_conditional458) {
                                                                                            # 2 "sAlignOfExpNode_clone"
                                                                                            __result320__ = __result_obj__ = (void*)0;
                                                                                            return __result320__;
                                                                                        }
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        result_289=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value553=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                        come_call_finalizer3(right_value553,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        # 4 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional459=self!=((void*)0),                                                                                        _if_conditional459) {
                                                                                            # 4 "sAlignOfExpNode_clone"
                                                                                            result_289->sline=self->sline;
                                                                                        }
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional460) {
                                                                                            # 5 "sAlignOfExpNode_clone"
                                                                                            __dec_obj195=result_289->sname;
                                                                                            result_289->sname=(char*)come_increment_ref_count(((char*)(right_value554=string_clone(self->sname))));
                                                                                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional461=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional461) {
                                                                                            # 6 "sAlignOfExpNode_clone"
                                                                                            __dec_obj196=result_289->exp;
                                                                                            result_289->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value555=sNode_clone(self->exp))));
                                                                                            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        __result321__ = __result_obj__ = result_289;
                                                                                        come_call_finalizer3(result_289,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result321__;
                                                                                        come_call_finalizer3(result_289,sAlignOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional467;
_Bool _if_conditional468;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            # 0 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional467=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional467) {
                                                                                                # 0 "sAlignOfNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfNode2_finalize"
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional468=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional468) {
                                                                                                # 1 "sAlignOfNode2_finalize"
                                                                                                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional469;
struct sAlignOfNode2* __result323__;
void* right_value561;
struct sAlignOfNode2* result_297;
_Bool _if_conditional470;
_Bool _if_conditional471;
void* right_value562;
char* __dec_obj197;
_Bool _if_conditional472;
void* right_value563;
struct sType* __dec_obj198;
struct sAlignOfNode2* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value561 = (void*)0;
memset(&result_297, 0, sizeof(struct sAlignOfNode2*));
right_value562 = (void*)0;
right_value563 = (void*)0;
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            # 2 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional469=self==(void*)0,                                                                                            _if_conditional469) {
                                                                                                # 2 "sAlignOfNode2_clone"
                                                                                                __result323__ = __result_obj__ = (void*)0;
                                                                                                return __result323__;
                                                                                            }
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            result_297=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value561=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                            come_call_finalizer3(right_value561,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            # 4 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional470=self!=((void*)0),                                                                                            _if_conditional470) {
                                                                                                # 4 "sAlignOfNode2_clone"
                                                                                                result_297->sline=self->sline;
                                                                                            }
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional471=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional471) {
                                                                                                # 5 "sAlignOfNode2_clone"
                                                                                                __dec_obj197=result_297->sname;
                                                                                                result_297->sname=(char*)come_increment_ref_count(((char*)(right_value562=string_clone(self->sname))));
                                                                                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional472=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional472) {
                                                                                                # 6 "sAlignOfNode2_clone"
                                                                                                __dec_obj198=result_297->type;
                                                                                                result_297->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value563=sType_clone(self->type))));
                                                                                                come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer3(right_value563,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            __result324__ = __result_obj__ = result_297;
                                                                                            come_call_finalizer3(result_297,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result324__;
                                                                                            come_call_finalizer3(result_297,sAlignOfNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            # 0 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional473=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional473) {
                                                                                                # 0 "sAlignOfExpNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfExpNode2_finalize"
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional474=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional474) {
                                                                                                # 1 "sAlignOfExpNode2_finalize"
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional475;
struct sAlignOfExpNode2* __result326__;
void* right_value568;
struct sAlignOfExpNode2* result_299;
_Bool _if_conditional476;
_Bool _if_conditional477;
void* right_value569;
char* __dec_obj199;
_Bool _if_conditional478;
void* right_value570;
struct sNode* __dec_obj200;
struct sAlignOfExpNode2* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value568 = (void*)0;
memset(&result_299, 0, sizeof(struct sAlignOfExpNode2*));
right_value569 = (void*)0;
right_value570 = (void*)0;
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            # 2 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional475=self==(void*)0,                                                                                            _if_conditional475) {
                                                                                                # 2 "sAlignOfExpNode2_clone"
                                                                                                __result326__ = __result_obj__ = (void*)0;
                                                                                                return __result326__;
                                                                                            }
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            result_299=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value568=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                            come_call_finalizer3(right_value568,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            # 4 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional476=self!=((void*)0),                                                                                            _if_conditional476) {
                                                                                                # 4 "sAlignOfExpNode2_clone"
                                                                                                result_299->sline=self->sline;
                                                                                            }
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional477=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional477) {
                                                                                                # 5 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj199=result_299->sname;
                                                                                                result_299->sname=(char*)come_increment_ref_count(((char*)(right_value569=string_clone(self->sname))));
                                                                                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional478=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional478) {
                                                                                                # 6 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj200=result_299->exp;
                                                                                                result_299->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=sNode_clone(self->exp))));
                                                                                                if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            __result327__ = __result_obj__ = result_299;
                                                                                            come_call_finalizer3(result_299,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result327__;
                                                                                            come_call_finalizer3(result_299,sAlignOfExpNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional484;
_Bool _if_conditional485;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                # 0 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional484=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional484) {
                                                                                                    # 0 "sAlignAsNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsNode_finalize"
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional485=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional485) {
                                                                                                    # 1 "sAlignAsNode_finalize"
                                                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional486;
struct sAlignAsNode* __result329__;
void* right_value576;
struct sAlignAsNode* result_307;
_Bool _if_conditional487;
_Bool _if_conditional488;
void* right_value577;
char* __dec_obj201;
_Bool _if_conditional489;
void* right_value578;
struct sType* __dec_obj202;
struct sAlignAsNode* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value576 = (void*)0;
memset(&result_307, 0, sizeof(struct sAlignAsNode*));
right_value577 = (void*)0;
right_value578 = (void*)0;
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                # 2 "sAlignAsNode_clone"
                                                                                                if(_if_conditional486=self==(void*)0,                                                                                                _if_conditional486) {
                                                                                                    # 2 "sAlignAsNode_clone"
                                                                                                    __result329__ = __result_obj__ = (void*)0;
                                                                                                    return __result329__;
                                                                                                }
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                result_307=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value576=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                                come_call_finalizer3(right_value576,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                # 4 "sAlignAsNode_clone"
                                                                                                if(_if_conditional487=self!=((void*)0),                                                                                                _if_conditional487) {
                                                                                                    # 4 "sAlignAsNode_clone"
                                                                                                    result_307->sline=self->sline;
                                                                                                }
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                if(_if_conditional488=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional488) {
                                                                                                    # 5 "sAlignAsNode_clone"
                                                                                                    __dec_obj201=result_307->sname;
                                                                                                    result_307->sname=(char*)come_increment_ref_count(((char*)(right_value577=string_clone(self->sname))));
                                                                                                    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                if(_if_conditional489=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional489) {
                                                                                                    # 6 "sAlignAsNode_clone"
                                                                                                    __dec_obj202=result_307->type;
                                                                                                    result_307->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value578=sType_clone(self->type))));
                                                                                                    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer3(right_value578,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                __result330__ = __result_obj__ = result_307;
                                                                                                come_call_finalizer3(result_307,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result330__;
                                                                                                come_call_finalizer3(result_307,sAlignAsNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional490;
_Bool _if_conditional491;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                # 0 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional490=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional490) {
                                                                                                    # 0 "sAlignAsExpNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsExpNode_finalize"
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional491=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional491) {
                                                                                                    # 1 "sAlignAsExpNode_finalize"
                                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional492;
struct sAlignAsExpNode* __result332__;
void* right_value583;
struct sAlignAsExpNode* result_309;
_Bool _if_conditional493;
_Bool _if_conditional494;
void* right_value584;
char* __dec_obj203;
_Bool _if_conditional495;
void* right_value585;
struct sNode* __dec_obj204;
struct sAlignAsExpNode* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value583 = (void*)0;
memset(&result_309, 0, sizeof(struct sAlignAsExpNode*));
right_value584 = (void*)0;
right_value585 = (void*)0;
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                # 2 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional492=self==(void*)0,                                                                                                _if_conditional492) {
                                                                                                    # 2 "sAlignAsExpNode_clone"
                                                                                                    __result332__ = __result_obj__ = (void*)0;
                                                                                                    return __result332__;
                                                                                                }
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                result_309=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value583=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                                come_call_finalizer3(right_value583,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                # 4 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional493=self!=((void*)0),                                                                                                _if_conditional493) {
                                                                                                    # 4 "sAlignAsExpNode_clone"
                                                                                                    result_309->sline=self->sline;
                                                                                                }
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional494=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional494) {
                                                                                                    # 5 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj203=result_309->sname;
                                                                                                    result_309->sname=(char*)come_increment_ref_count(((char*)(right_value584=string_clone(self->sname))));
                                                                                                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value584 = come_decrement_ref_count2(right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional495=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional495) {
                                                                                                    # 6 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj204=result_309->exp;
                                                                                                    result_309->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=sNode_clone(self->exp))));
                                                                                                    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                __result333__ = __result_obj__ = result_309;
                                                                                                come_call_finalizer3(result_309,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result333__;
                                                                                                come_call_finalizer3(result_309,sAlignAsExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
void* right_value588;
void* right_value589;
struct sNode* _inf_value37;
struct sNullNodeX* _inf_obj_value37;
void* right_value592;
struct sNode* __result338__;
void* right_value593;
struct sNode* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
    # 1870 "21obj.c"
    # 1825 "21obj.c"
    if(_if_conditional496=charp_operator_equals(buf,"using"),    _if_conditional496) {
        # 1867 "21obj.c"
        # 1826 "21obj.c"
        if(_if_conditional497=strmemcmp(info->p,"neo-c"),        _if_conditional497) {
            # 1827 "21obj.c"
            info->p+=strlen("neo-c");
            # 1828 "21obj.c"
            skip_spaces_and_lf(info);
            # 1830 "21obj.c"
            gComeC=(_Bool)0;
        }
        else {
            # 1867 "21obj.c"
            # 1832 "21obj.c"
            if(_if_conditional498=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional498) {
                # 1833 "21obj.c"
                info->p+=strlen("c");
                # 1834 "21obj.c"
                skip_spaces_and_lf(info);
                # 1849 "21obj.c"
                # 1836 "21obj.c"
                if(_if_conditional499=*info->p==123,                _if_conditional499) {
                    # 1837 "21obj.c"
                    info->p++;
                    # 1838 "21obj.c"
                    skip_spaces_and_lf(info);
                    # 1840 "21obj.c"
                    gComeC=(_Bool)1;
                    # 1842 "21obj.c"
                    transpile_toplevel((_Bool)1,info);
                    # 1844 "21obj.c"
                    gComeC=(_Bool)0;
                }
                else {
                    # 1847 "21obj.c"
                    gComeC=(_Bool)1;
                }
            }
            else {
                # 1867 "21obj.c"
                # 1850 "21obj.c"
                if(_if_conditional500=strmemcmp(info->p,"gc"),                _if_conditional500) {
                    # 1851 "21obj.c"
                    info->p+=strlen("gc");
                    # 1852 "21obj.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 1867 "21obj.c"
                    # 1854 "21obj.c"
                    if(_if_conditional501=strmemcmp(info->p,"no-gc"),                    _if_conditional501) {
                        # 1855 "21obj.c"
                        info->p+=strlen("no-gc");
                        # 1856 "21obj.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 1867 "21obj.c"
                        # 1858 "21obj.c"
                        if(_if_conditional502=strmemcmp(info->p,"unsafe"),                        _if_conditional502) {
                            # 1859 "21obj.c"
                            info->p+=strlen("unsafe");
                            # 1860 "21obj.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 1863 "21obj.c"
                            err_msg(info,"invalid using");
                            # 1864 "21obj.c"
                            exit(2);
                        }
                    }
                }
            }
        }
        # 1867 "21obj.c"
        _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1867, "struct sNode");
        _inf_obj_value37=come_increment_ref_count(((struct sNullNodeX*)(right_value589=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value588=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1867, "sNullNodeX")))),info))));
        _inf_value37->_protocol_obj=_inf_obj_value37;
        _inf_value37->finalize=(void*)sNullNodeX_finalize;
        _inf_value37->clone=(void*)sNullNodeX_clone;
        _inf_value37->compile=(void*)sNullNodeX_compile;
        _inf_value37->sline=(void*)sNodeBase_sline;
        _inf_value37->sname=(void*)sNodeBase_sname;
        _inf_value37->terminated=(void*)sNullNodeX_terminated;
        _inf_value37->kind=(void*)sNullNodeX_kind;
        __result338__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value37));
        come_call_finalizer3(right_value588,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value589,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result338__;
    }
    # 1870 "21obj.c"
    __result339__ = __result_obj__ = ((struct sNode*)(right_value593=top_level_v93(buf,head,head_sline,info)));
    if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result339__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional503;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sNullNodeX_finalize"
            # 0 "sNullNodeX_finalize"
            if(_if_conditional503=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional503) {
                # 0 "sNullNodeX_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional504;
struct sNullNodeX* __result336__;
void* right_value590;
struct sNullNodeX* result_310;
_Bool _if_conditional505;
_Bool _if_conditional506;
void* right_value591;
char* __dec_obj205;
struct sNullNodeX* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value590 = (void*)0;
memset(&result_310, 0, sizeof(struct sNullNodeX*));
right_value591 = (void*)0;
            # 3 "sNullNodeX_clone"
            # 2 "sNullNodeX_clone"
            if(_if_conditional504=self==(void*)0,            _if_conditional504) {
                # 2 "sNullNodeX_clone"
                __result336__ = __result_obj__ = (void*)0;
                return __result336__;
            }
            # 3 "sNullNodeX_clone"
            result_310=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value590=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "sNullNodeX"))));
            come_call_finalizer3(right_value590,sNullNodeX_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sNullNodeX_clone"
            # 4 "sNullNodeX_clone"
            if(_if_conditional505=self!=((void*)0),            _if_conditional505) {
                # 4 "sNullNodeX_clone"
                result_310->sline=self->sline;
            }
            # 6 "sNullNodeX_clone"
            # 5 "sNullNodeX_clone"
            if(_if_conditional506=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional506) {
                # 5 "sNullNodeX_clone"
                __dec_obj205=result_310->sname;
                result_310->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNullNodeX_clone"
            __result337__ = __result_obj__ = result_310;
            come_call_finalizer3(result_310,sNullNodeX_finalize, 0, 0, 1, 0, (void*)0);
            return __result337__;
            come_call_finalizer3(result_310,sNullNodeX_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional507;
void* right_value594;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_311;
char* name2_312;
_Bool err_313;
_Bool _if_conditional508;
void* right_value595;
struct sType* inf_type_314;
void* right_value596;
void* right_value597;
struct sNode* _inf_value38;
struct sImplementsNode* _inf_obj_value38;
void* right_value602;
struct sNode* __result342__;
_Bool _if_conditional517;
_Bool _while_condtional22;
void* right_value603;
struct sNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value594 = (void*)0;
memset(&type3_311, 0, sizeof(struct sType*));
memset(&name2_312, 0, sizeof(char*));
memset(&err_313, 0, sizeof(_Bool));
memset(&type3_311, 0, sizeof(struct sType*));
memset(&name2_312, 0, sizeof(char*));
memset(&err_313, 0, sizeof(_Bool));
right_value595 = (void*)0;
memset(&inf_type_314, 0, sizeof(struct sType*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
    # 1897 "21obj.c"
    # 1875 "21obj.c"
    if(_if_conditional507=strmemcmp(info->p,"implements"),    _if_conditional507) {
        # 1876 "21obj.c"
        info->p+=strlen("implements");
        # 1877 "21obj.c"
        skip_spaces_and_lf(info);
        # 1879 "21obj.c"
        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value594=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_311=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_312=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_313=multiple_assign_var12->v3;
        come_call_finalizer3(right_value594,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1885 "21obj.c"
        # 1880 "21obj.c"
        if(_if_conditional508=!err_313,        _if_conditional508) {
            # 1881 "21obj.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1882 "21obj.c"
            exit(2);
        }
        # 1885 "21obj.c"
        inf_type_314=(struct sType*)come_increment_ref_count(((struct sType*)(right_value595=sType_clone(type3_311))));
        come_call_finalizer3(right_value595,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1887 "21obj.c"
        _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1887, "struct sNode");
        _inf_obj_value38=come_increment_ref_count(((struct sImplementsNode*)(right_value597=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value596=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1887, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_314),info))));
        _inf_value38->_protocol_obj=_inf_obj_value38;
        _inf_value38->finalize=(void*)sImplementsNode_finalize;
        _inf_value38->clone=(void*)sImplementsNode_clone;
        _inf_value38->compile=(void*)sImplementsNode_compile;
        _inf_value38->sline=(void*)sNodeBase_sline;
        _inf_value38->sname=(void*)sNodeBase_sname;
        _inf_value38->terminated=(void*)sImplementsNode_terminated;
        _inf_value38->kind=(void*)sImplementsNode_kind;
        __result342__ = __result_obj__ = ((struct sNode*)(right_value602=_inf_value38));
        come_call_finalizer3(type3_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_312 = come_decrement_ref_count2(name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value596,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value597,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value602) { right_value602 = come_decrement_ref_count2(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result342__;
        come_call_finalizer3(type3_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_312 = come_decrement_ref_count2(name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1897 "21obj.c"
        # 1889 "21obj.c"
        if(_if_conditional517=*info->p==64,        _if_conditional517) {
            # 1890 "21obj.c"
            info->p++;
            # 1894 "21obj.c"
            while(_while_condtional22=xisalnum(*info->p)||*info->p==95,            _while_condtional22) {
                # 1892 "21obj.c"
                info->p++;
            }
            # 1894 "21obj.c"
            skip_spaces_and_lf(info);
        }
    }
    # 1897 "21obj.c"
    __result343__ = __result_obj__ = ((struct sNode*)(right_value603=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result343__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sImplementsNode_finalize"
            # 0 "sImplementsNode_finalize"
            if(_if_conditional509=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional509) {
                # 0 "sImplementsNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sImplementsNode_finalize"
            # 1 "sImplementsNode_finalize"
            if(_if_conditional510=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional510) {
                # 1 "sImplementsNode_finalize"
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 3 "sImplementsNode_finalize"
            # 2 "sImplementsNode_finalize"
            if(_if_conditional511=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional511) {
                # 2 "sImplementsNode_finalize"
                come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional512;
struct sImplementsNode* __result340__;
void* right_value598;
struct sImplementsNode* result_315;
_Bool _if_conditional513;
_Bool _if_conditional514;
void* right_value599;
char* __dec_obj206;
_Bool _if_conditional515;
void* right_value600;
struct sNode* __dec_obj207;
_Bool _if_conditional516;
void* right_value601;
struct sType* __dec_obj208;
struct sImplementsNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value598 = (void*)0;
memset(&result_315, 0, sizeof(struct sImplementsNode*));
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
            # 3 "sImplementsNode_clone"
            # 2 "sImplementsNode_clone"
            if(_if_conditional512=self==(void*)0,            _if_conditional512) {
                # 2 "sImplementsNode_clone"
                __result340__ = __result_obj__ = (void*)0;
                return __result340__;
            }
            # 3 "sImplementsNode_clone"
            result_315=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value598=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer3(right_value598,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sImplementsNode_clone"
            # 4 "sImplementsNode_clone"
            if(_if_conditional513=self!=((void*)0),            _if_conditional513) {
                # 4 "sImplementsNode_clone"
                result_315->sline=self->sline;
            }
            # 6 "sImplementsNode_clone"
            # 5 "sImplementsNode_clone"
            if(_if_conditional514=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional514) {
                # 5 "sImplementsNode_clone"
                __dec_obj206=result_315->sname;
                result_315->sname=(char*)come_increment_ref_count(((char*)(right_value599=string_clone(self->sname))));
                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sImplementsNode_clone"
            # 6 "sImplementsNode_clone"
            if(_if_conditional515=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional515) {
                # 6 "sImplementsNode_clone"
                __dec_obj207=result_315->obj_exp;
                result_315->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value600=sNode_clone(self->obj_exp))));
                if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 8 "sImplementsNode_clone"
            # 7 "sImplementsNode_clone"
            if(_if_conditional516=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional516) {
                # 7 "sImplementsNode_clone"
                __dec_obj208=result_315->inf_type;
                result_315->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value601=sType_clone(self->inf_type))));
                come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value601,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sImplementsNode_clone"
            __result341__ = __result_obj__ = result_315;
            come_call_finalizer3(result_315,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result341__;
            come_call_finalizer3(result_315,sImplementsNode_finalize, 0, 0, 0, 0, (void*)0);
}

