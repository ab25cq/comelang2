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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
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
    struct sType* type;
    int sline;
    char* sname;
};
struct sSizeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sTypeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sTypeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDynamicTypeOfNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode2
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode2
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignAsNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignAsExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sForceDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDelegateNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sShareNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDupeNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sIsPointer
{
    struct sType* type;
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

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated();

char* sNullNodeX_kind();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

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
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

char* sNewNode_kind();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

char* sImplementsNode_kind();

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

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

char* sTrueNode_kind();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

char* sFalseNode_kind();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

char* sSizeOfNode_kind();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info);

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info);

_Bool sSizeOfExpNode_terminated();

char* sSizeOfExpNode_kind();

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info);

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info);

_Bool sTypeOfNode_terminated();

char* sTypeOfNode_kind();

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info);

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info);

_Bool sTypeOfExpNode_terminated();

char* sTypeOfExpNode_kind();

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info);

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info);

_Bool sDynamicTypeOfNode_terminated();

char* sDynamicTypeOfNode_kind();

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info);

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info);

_Bool sAlignOfNode_terminated();

char* sAlignOfNode_kind();

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info);

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info);

_Bool sAlignOfExpNode_terminated();

char* sAlignOfExpNode_kind();

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info);

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info);

_Bool sAlignOfNode2_terminated();

char* sAlignOfNode2_kind();

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info);

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated();

char* sAlignOfExpNode2_kind();

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info);

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info);

_Bool sAlignAsNode_terminated();

char* sAlignAsNode_kind();

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info);

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info);

_Bool sAlignAsExpNode_terminated();

char* sAlignAsExpNode_kind();

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

char* sDeleteNode_kind();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info);

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info);

_Bool sForceDeleteNode_terminated();

char* sForceDeleteNode_kind();

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info);

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info);

_Bool sDelegateNode_terminated();

char* sDelegateNode_kind();

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

int sShareNode_sline(struct sShareNode* self, struct sInfo* info);

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info);

_Bool sShareNode_terminated();

char* sShareNode_kind();

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

char* sBorrowNode_kind();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

char* sCloneNode_kind();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info);

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info);

_Bool sDupeNode_terminated();

char* sDupeNode_kind();

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

char* sDummyHeapNode_kind();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

char* sGCIncNode_kind();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

char* sGCDecNode_kind();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

char* sIsHeap_kind();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

int sIsPointer_sline(struct sIsPointer* self, struct sInfo* info);

char* sIsPointer_sname(struct sIsPointer* self, struct sInfo* info);

_Bool sIsPointer_terminated();

char* sIsPointer_kind();

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










struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sNullNodeX* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 11 "21obj.c"
    self->sline=info->sline;
    # 12 "21obj.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 14 "21obj.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 19 "21obj.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 24 "21obj.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sNullNodeX")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 30 "21obj.c"
    __result55__ = (_Bool)1;
    return __result55__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 35 "21obj.c"
    __result56__ = self->sline;
    return __result56__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value81;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 40 "21obj.c"
    __result57__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self->sname)));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value117;
struct sType* __dec_obj36;
void* right_value118;
char* __dec_obj37;
struct sNewNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
    # 52 "21obj.c"
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 54 "21obj.c"
    self->sline=info->sline;
    # 55 "21obj.c"
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 57 "21obj.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result58__;
void* right_value82;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value89;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value94;
char* __dec_obj20;
_Bool _if_conditional49;
void* right_value95;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
void* right_value103;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value104;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
void* right_value111;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value113;
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
void* right_value114;
struct sNode* __dec_obj33;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value115;
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
void* right_value116;
char* __dec_obj35;
_Bool _if_conditional110;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            # 2 "sType_clone"
            __result58__ = __result_obj__ = (void*)0;
            return __result58__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional43) {
            # 6 "sType_clone"
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional47) {
            # 7 "sType_clone"
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional48) {
            # 8 "sType_clone"
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional49) {
            # 9 "sType_clone"
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional50) {
            # 10 "sType_clone"
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional65) {
            # 13 "sType_clone"
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional69) {
            # 14 "sType_clone"
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result75__ = __result_obj__ = result_47;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
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
            if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional21) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional23) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional25) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional28) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional30) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional31) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional33) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    # 123 "./neo-c.h"
                    it_48=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
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
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
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
                    if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional24) {
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
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
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
                    # 123 "./neo-c.h"
                    it_52=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
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
                            if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional32) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result59__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value88;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    # 140 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 142 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_55=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(it_55->item)))));
                    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 151 "./neo-c.h"
                __result62__ = __result_obj__ = result_54;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value85;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value86;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value87;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            # 156 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                # 166 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result61__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result63__;
void* right_value90;
struct tuple1$1sTypeph* result_59;
_Bool _if_conditional46;
void* right_value91;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_59, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional44=self==(void*)0,                _if_conditional44) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result63__ = __result_obj__ = (void*)0;
                    return __result63__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_59=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional46) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj17=result_59->v1;
                    result_59->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result64__ = __result_obj__ = result_59;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional45) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result65__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* result_60;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional11;
void* right_value102;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    # 140 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 142 "./neo-c.h"
                result_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_61=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional11=it_61!=((void*)0),                _while_condtional11) {
                    # 146 "./neo-c.h"
                    list$1sNodeph_add(result_60,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(it_61->item)))));
                    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./neo-c.h"
                    it_61=it_61->next;
                }
                # 151 "./neo-c.h"
                __result70__ = __result_obj__ = result_60;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result70__;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value98;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value99;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj23;
void* right_value100;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional52=self->len==0,                        _if_conditional52) {
                            # 156 "./neo-c.h"
                            litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional53=self->len==1,                            _if_conditional53) {
                                # 166 "./neo-c.h"
                                litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result67__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result67__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result68__;
void* right_value101;
struct sNode* result_65;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_65, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            # 2 "sNode_clone"
                            __result68__ = __result_obj__ = (void*)0;
                            return __result68__;
                        }
                        # 3 "sNode_clone"
                        result_65=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional55) {
                            # 4 "sNode_clone"
                            result_65->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 5 "sNode_clone"
                            result_65->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 6 "sNode_clone"
                            result_65->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 7 "sNode_clone"
                            result_65->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 8 "sNode_clone"
                            result_65->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 9 "sNode_clone"
                            result_65->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 10 "sNode_clone"
                            result_65->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 11 "sNode_clone"
                            result_65->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result69__ = __result_obj__ = result_65;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result69__;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1charph* __result71__;
void* right_value105;
void* right_value106;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional12;
void* right_value110;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    # 140 "./neo-c.h"
                    __result71__ = __result_obj__ = ((void*)0);
                    return __result71__;
                }
                # 142 "./neo-c.h"
                result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_67=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional12=it_67!=((void*)0),                _while_condtional12) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value110=string_clone(it_67->item)))));
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_67=it_67->next;
                }
                # 151 "./neo-c.h"
                __result74__ = __result_obj__ = result_66;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result72__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value107;
struct list_item$1charph* litem_68;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value108;
struct list_item$1charph* litem_69;
char* __dec_obj28;
void* right_value109;
struct list_item$1charph* litem_70;
char* __dec_obj29;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional67=self->len==0,                        _if_conditional67) {
                            # 156 "./neo-c.h"
                            litem_68=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                            if(_if_conditional68=self->len==1,                            _if_conditional68) {
                                # 166 "./neo-c.h"
                                litem_69=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result73__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result73__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 62 "21obj.c"
    __result77__ = self->sline;
    return __result77__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value119;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    # 67 "21obj.c"
    __result78__ = __result_obj__ = ((char*)(right_value119=__builtin_string(self->sname)));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    # 72 "21obj.c"
    __result79__ = (_Bool)0;
    return __result79__;
}

char* sNewNode_kind(){
void* __result_obj__;
void* right_value120;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
    # 77 "21obj.c"
    __result80__ = __result_obj__ = ((char*)(right_value120=__builtin_string("sNewNode")));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_71;
void* right_value121;
struct CVALUE* come_value_72;
void* right_value122;
void* right_value123;
struct buffer* num_string_73;
struct list$1sNodeph* o2_saved_74;
struct sNode* it_77;
_Bool _if_conditional119;
_Bool __result88__;
void* right_value124;
struct CVALUE* cvalue_80;
void* right_value125;
void* right_value126;
struct sType* type2_81;
void* right_value127;
char* type_name_84;
void* right_value128;
char* type_name2_85;
void* right_value129;
void* right_value130;
char* __dec_obj38;
_Bool _if_conditional120;
void* right_value131;
char* __dec_obj39;
void* right_value132;
struct sType* __dec_obj40;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_71, 0, sizeof(struct sType*));
right_value121 = (void*)0;
memset(&come_value_72, 0, sizeof(struct CVALUE*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&num_string_73, 0, sizeof(struct buffer*));
memset(&o2_saved_74, 0, sizeof(struct list$1sNodeph*));
memset(&it_77, 0, sizeof(struct sNode*));
right_value124 = (void*)0;
memset(&cvalue_80, 0, sizeof(struct CVALUE*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&type2_81, 0, sizeof(struct sType*));
right_value127 = (void*)0;
memset(&type_name_84, 0, sizeof(char*));
right_value128 = (void*)0;
memset(&type_name2_85, 0, sizeof(char*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
    # 82 "21obj.c"
    type_71=self->type;
    # 84 "21obj.c"
    come_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 84, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 86 "21obj.c"
    num_string_73=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value123=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 86, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 88 "21obj.c"
    buffer_append_str(num_string_73,"1");
    # 101 "21obj.c"
    for(    o2_saved_74=(struct list$1sNodeph*)come_increment_ref_count((type_71->mArrayNum)),it_77=list$1sNodeph_begin((o2_saved_74));    !list$1sNodeph_end((o2_saved_74));    it_77=list$1sNodeph_next((o2_saved_74))    ){
        # 95 "21obj.c"
        # 91 "21obj.c"
        if(_if_conditional119=!node_compile(it_77,info),        _if_conditional119) {
            # 92 "21obj.c"
            __result88__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result88__;
        }
        # 95 "21obj.c"
        cvalue_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 96 "21obj.c"
        dec_stack_ptr(1,info);
        # 98 "21obj.c"
        buffer_append_str(num_string_73,((char*)(right_value125=xsprintf("*(%s)",cvalue_80->c_value))));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,cvalue_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 101 "21obj.c"
    type2_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=solve_generics(type_71,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 108 "21obj.c"
    list$1sNodeph_reset(type2_81->mArrayNum);
    # 110 "21obj.c"
    type_name_84=(char*)come_increment_ref_count(((char*)(right_value127=make_type_name_string(type2_81,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 112 "21obj.c"
    type_name2_85=(char*)come_increment_ref_count(((char*)(right_value128=make_come_type_name_string(type2_81,info))));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 114 "21obj.c"
    __dec_obj38=come_value_72->c_value;
    come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_84,type_name_84,((char*)(right_value129=buffer_to_string(num_string_73))),info->sname,info->sline,type_name2_85))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 116 "21obj.c"
    type2_81->mHeap=(_Bool)1;
    # 117 "21obj.c"
    type2_81->mPointerNum++;
    # 124 "21obj.c"
    # 119 "21obj.c"
    if(type2_81->mNoSolvedGenericsType->v1) {
        # 120 "21obj.c"
        type2_81->mNoSolvedGenericsType->v1->mPointerNum++;
        # 121 "21obj.c"
        type2_81->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    # 124 "21obj.c"
    __dec_obj39=come_value_72->c_value;
    come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value131=append_object_to_right_values(come_value_72->c_value,(struct sType*)come_increment_ref_count(type2_81),info))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 125 "21obj.c"
    __dec_obj40=come_value_72->type;
    come_value_72->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type2_81))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 126 "21obj.c"
    come_value_72->var=((void*)0);
    # 128 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_72->c_value);
    # 130 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    # 132 "21obj.c"
    __result91__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_84 = come_decrement_ref_count2(type_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_85 = come_decrement_ref_count2(type_name2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_84 = come_decrement_ref_count2(type_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_85 = come_decrement_ref_count2(type_name2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional115;
struct sNode* result_75;
struct sNode* __result81__;
_Bool _if_conditional116;
struct sNode* __result82__;
struct sNode* result_76;
struct sNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(struct sNode*));
memset(&result_76, 0, sizeof(struct sNode*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional115=self==((void*)0),        _if_conditional115) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_75,0,sizeof(struct sNode*));
            # 288 "./neo-c.h"
            __result81__ = __result_obj__ = result_75;
            return __result81__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result82__ = __result_obj__ = self->it->item;
            return __result82__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_76,0,sizeof(struct sNode*));
        # 298 "./neo-c.h"
        __result83__ = __result_obj__ = result_76;
        return __result83__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result84__ = self==((void*)0)||self->it==((void*)0);
        return __result84__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional117;
struct sNode* result_78;
struct sNode* __result85__;
_Bool _if_conditional118;
struct sNode* __result86__;
struct sNode* result_79;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct sNode*));
memset(&result_79, 0, sizeof(struct sNode*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional117=self==((void*)0)||self->it==((void*)0),        _if_conditional117) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_78,0,sizeof(struct sNode*));
            # 305 "./neo-c.h"
            __result85__ = __result_obj__ = result_78;
            return __result85__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result86__ = __result_obj__ = self->it->item;
            return __result86__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_79,0,sizeof(struct sNode*));
        # 316 "./neo-c.h"
        __result87__ = __result_obj__ = result_79;
        return __result87__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_82;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_83;
struct list$1sNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_82, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_83, 0, sizeof(struct list_item$1sNodeph*));
        # 433 "./neo-c.h"
        it_82=self->head;
        # 440 "./neo-c.h"
        while(_while_condtional13=it_82!=((void*)0),        _while_condtional13) {
            # 435 "./neo-c.h"
            prev_it_83=it_82;
            # 436 "./neo-c.h"
            it_82=it_82->next;
            # 437 "./neo-c.h"
            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 440 "./neo-c.h"
        self->head=((void*)0);
        # 441 "./neo-c.h"
        self->tail=((void*)0);
        # 443 "./neo-c.h"
        self->len=0;
        # 445 "./neo-c.h"
        __result89__ = __result_obj__ = self;
        return __result89__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value133;
struct list_item$1CVALUEph* litem_86;
struct CVALUE* __dec_obj41;
_Bool _if_conditional123;
void* right_value134;
struct list_item$1CVALUEph* litem_87;
struct CVALUE* __dec_obj42;
void* right_value135;
struct list_item$1CVALUEph* litem_88;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1CVALUEph*));
right_value134 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1CVALUEph*));
right_value135 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional121=self->len==0,        _if_conditional121) {
            # 226 "./neo-c.h"
            litem_86=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_86->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_86->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj41=litem_86->item;
            litem_86->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_86;
            # 233 "./neo-c.h"
            self->head=litem_86;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional123=self->len==1,            _if_conditional123) {
                # 236 "./neo-c.h"
                litem_87=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_87->prev=self->head;
                # 239 "./neo-c.h"
                litem_87->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj42=litem_87->item;
                litem_87->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_87;
                # 243 "./neo-c.h"
                self->head->next=litem_87;
            }
            else {
                # 246 "./neo-c.h"
                litem_88=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_88->prev=self->tail;
                # 249 "./neo-c.h"
                litem_88->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj43=litem_88->item;
                litem_88->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_88;
                # 253 "./neo-c.h"
                self->tail=litem_88;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result90__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result90__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional122=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional122) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value136;
void* right_value137;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value141;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value141 = (void*)0;
    # 137 "21obj.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 137, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value137=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value136=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 137, "sNewNode")))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result94__ = __result_obj__ = ((struct sNode*)(right_value141=_inf_value1));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sNewNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNewNode_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result94__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value142;
struct sNode* __dec_obj46;
void* right_value143;
struct sType* __dec_obj47;
void* right_value144;
char* __dec_obj48;
struct sImplementsNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
    # 150 "21obj.c"
    __dec_obj46=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(obj_exp))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 151 "21obj.c"
    __dec_obj47=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(inf_type))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 153 "21obj.c"
    self->sline=info->sline;
    # 154 "21obj.c"
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 156 "21obj.c"
    __result95__ = __result_obj__ = self;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result95__;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    # 161 "21obj.c"
    __result96__ = self->sline;
    return __result96__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value145;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
    # 166 "21obj.c"
    __result97__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self->sname)));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    # 171 "21obj.c"
    __result98__ = (_Bool)0;
    return __result98__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
void* right_value146;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    # 176 "21obj.c"
    __result99__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sImplementsNode")));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value147;
struct sNode* obj_exp_90;
void* right_value148;
struct sType* inf_type_91;
_Bool _if_conditional133;
_Bool __result100__;
void* right_value149;
struct CVALUE* come_value_92;
void* right_value150;
struct sType* type_93;
struct sClass* klass_94;
void* right_value151;
struct CVALUE* come_value2_95;
void* right_value152;
struct sType* type2_96;
void* right_value153;
char* type_name_97;
void* right_value154;
char* type_name2_98;
static int inf_num_99=0;
void* right_value155;
char* buf_100;
void* right_value156;
char* buf2_101;
void* right_value157;
struct sType* typeX_102;
void* right_value158;
void* right_value159;
int i_103;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_107;
struct sType* field_type_108;
void* right_value160;
char* method_name_109;
struct sFun* fun_112;
_Bool _if_conditional159;
struct sClass* klass2_118;
_Bool _while_condtional18;
void* right_value161;
char* __dec_obj49;
_Bool _if_conditional169;
void* right_value162;
char* __dec_obj50;
void* right_value163;
struct sType* type3_119;
void* right_value164;
struct sType* __dec_obj51;
void* right_value165;
char* __dec_obj52;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&obj_exp_90, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&inf_type_91, 0, sizeof(struct sType*));
right_value149 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
memset(&type_93, 0, sizeof(struct sType*));
memset(&klass_94, 0, sizeof(struct sClass*));
right_value151 = (void*)0;
memset(&come_value2_95, 0, sizeof(struct CVALUE*));
right_value152 = (void*)0;
memset(&type2_96, 0, sizeof(struct sType*));
right_value153 = (void*)0;
memset(&type_name_97, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&type_name2_98, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&buf_100, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&buf2_101, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&typeX_102, 0, sizeof(struct sType*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&i_103, 0, sizeof(int));
memset(&name_107, 0, sizeof(char*));
memset(&field_type_108, 0, sizeof(struct sType*));
memset(&name_107, 0, sizeof(char*));
memset(&field_type_108, 0, sizeof(struct sType*));
right_value160 = (void*)0;
memset(&method_name_109, 0, sizeof(char*));
memset(&fun_112, 0, sizeof(struct sFun*));
memset(&klass2_118, 0, sizeof(struct sClass*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&type3_119, 0, sizeof(struct sType*));
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 181 "21obj.c"
    obj_exp_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(self->obj_exp))));
    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 182 "21obj.c"
    inf_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(self->inf_type))));
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 188 "21obj.c"
    # 184 "21obj.c"
    if(_if_conditional133=!node_compile(obj_exp_90,info),    _if_conditional133) {
        # 185 "21obj.c"
        __result100__ = (_Bool)0;
        if(obj_exp_90) { obj_exp_90 = come_decrement_ref_count2(obj_exp_90, ((struct sNode*)obj_exp_90)->finalize, ((struct sNode*)obj_exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sType_finalize,inf_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result100__;
    }
    # 188 "21obj.c"
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 189 "21obj.c"
    dec_stack_ptr(1,info);
    # 191 "21obj.c"
    type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(come_value_92->type))));
    come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 192 "21obj.c"
    type_93->mPointerNum--;
    # 193 "21obj.c"
    type_93->mHeap=(_Bool)0;
    # 195 "21obj.c"
    klass_94=inf_type_91->mClass;
    # 197 "21obj.c"
    come_value2_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 197, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 199 "21obj.c"
    type2_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(inf_type_91))));
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 201 "21obj.c"
    type_name_97=(char*)come_increment_ref_count(((char*)(right_value153=make_type_name_string(inf_type_91,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 202 "21obj.c"
    type_name2_98=(char*)come_increment_ref_count(((char*)(right_value154=make_type_name_string(type_93,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 204 "21obj.c"
    # 206 "21obj.c"
    buf_100=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s* _inf_value%d;\n",type_name_97,++inf_num_99))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 207 "21obj.c"
    add_come_code_at_function_head(info,buf_100);
    # 208 "21obj.c"
    buf2_101=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s* _inf_obj_value%d;\n",type_name2_98,inf_num_99))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 209 "21obj.c"
    add_come_code_at_function_head(info,buf2_101);
    # 211 "21obj.c"
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_99,type_name_97,type_name_97,info->sname,info->sline,type_name_97);
    # 212 "21obj.c"
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_99,come_value_92->c_value);
    # 213 "21obj.c"
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_99,inf_num_99);
    # 215 "21obj.c"
    typeX_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(type_93))));
    come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 216 "21obj.c"
    typeX_102->mPointerNum++;
    # 218 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value158=create_finalizer_automatically(typeX_102,"finalize",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 219 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value159=create_cloner_automatically(typeX_102,"clone",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 249 "21obj.c"
    for(    i_103=1;    i_103<list$1tuple2$2charphsTypephph_length(klass_94->mFields);    i_103++    ){
        # 222 "21obj.c"
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_94->mFields,i_103), "21obj.c", 222, 0));
        name_107=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_108=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 224 "21obj.c"
        method_name_109=(char*)come_increment_ref_count(((char*)(right_value160=create_method_name(type_93,(_Bool)0,name_107,info,(_Bool)1))));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 226 "21obj.c"
        fun_112=map$2charphsFunph_at(info->funcs,method_name_109,((void*)0));
        # 247 "21obj.c"
        # 228 "21obj.c"
        if(_if_conditional159=fun_112==((void*)0),        _if_conditional159) {
            # 229 "21obj.c"
            klass2_118=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_93->mClass->mName), "21obj.c", 229, 1));
            # 242 "21obj.c"
            while(_while_condtional18=map$2charphsClassphp_operator_load_element(info->classes,klass2_118->mParentClassName),            _while_condtional18) {
                # 231 "21obj.c"
                klass2_118=map$2charphsClassphp_operator_load_element(info->classes,klass2_118->mParentClassName);
                # 233 "21obj.c"
                __dec_obj49=method_name_109;
                method_name_109=(char*)come_increment_ref_count(((char*)(right_value161=create_method_name_using_class(klass2_118,(_Bool)0,name_107,info,(_Bool)1))));
                __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 235 "21obj.c"
                fun_112=map$2charphsFunph_at(info->funcs,method_name_109,((void*)0));
                # 240 "21obj.c"
                # 237 "21obj.c"
                if(fun_112) {
                    # 238 "21obj.c"
                    break;
                }
            }
            # 242 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_99,name_107,method_name_109);
        }
        else {
            # 245 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_99,name_107,method_name_109);
        }
        name_107 = come_decrement_ref_count2(name_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        method_name_109 = come_decrement_ref_count2(method_name_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 249 "21obj.c"
    __dec_obj50=come_value2_95->c_value;
    come_value2_95->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("_inf_value%d",inf_num_99))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 250 "21obj.c"
    type3_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(inf_type_91))));
    come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 251 "21obj.c"
    type3_119->mPointerNum++;
    # 252 "21obj.c"
    type3_119->mHeap=(_Bool)1;
    # 253 "21obj.c"
    type2_96->mHeap=(_Bool)1;
    # 254 "21obj.c"
    __dec_obj51=come_value2_95->type;
    come_value2_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(type2_96))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 255 "21obj.c"
    __dec_obj52=come_value2_95->c_value;
    come_value2_95->c_value=(char*)come_increment_ref_count(((char*)(right_value165=append_object_to_right_values(come_value2_95->c_value,(struct sType*)come_increment_ref_count(type3_119),info))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 256 "21obj.c"
    come_value2_95->type->mPointerNum++;
    # 257 "21obj.c"
    come_value2_95->var=((void*)0);
    # 259 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_95->c_value);
    # 261 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_95));
    # 263 "21obj.c"
    __result113__ = (_Bool)1;
    if(obj_exp_90) { obj_exp_90 = come_decrement_ref_count2(obj_exp_90, ((struct sNode*)obj_exp_90)->finalize, ((struct sNode*)obj_exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_98 = come_decrement_ref_count2(type_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_100 = come_decrement_ref_count2(buf_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_101 = come_decrement_ref_count2(buf2_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result113__;
    if(obj_exp_90) { obj_exp_90 = come_decrement_ref_count2(obj_exp_90, ((struct sNode*)obj_exp_90)->finalize, ((struct sNode*)obj_exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_98 = come_decrement_ref_count2(type_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_100 = come_decrement_ref_count2(buf_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_101 = come_decrement_ref_count2(buf2_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional135=self==((void*)0),        _if_conditional135) {
            # 365 "./neo-c.h"
            __result101__ = 0;
            return __result101__;
        }
        # 367 "./neo-c.h"
        __result102__ = self->len;
        return __result102__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional136;
struct list_item$1tuple2$2charphsTypephph* it_104;
int i_105;
_Bool _while_condtional14;
_Bool _if_conditional137;
struct tuple2$2charphsTypeph* __result103__;
struct tuple2$2charphsTypeph* default_value_106;
struct tuple2$2charphsTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional136=position<0,            _if_conditional136) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_104=self->head;
            # 687 "./neo-c.h"
            i_105=0;
            # 694 "./neo-c.h"
            while(_while_condtional14=it_104!=((void*)0),            _while_condtional14) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional137=position==i_105,                _if_conditional137) {
                    # 690 "./neo-c.h"
                    __result103__ = __result_obj__ = it_104->item;
                    return __result103__;
                }
                # 692 "./neo-c.h"
                it_104=it_104->next;
                # 693 "./neo-c.h"
                i_105++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_106,0,sizeof(struct tuple2$2charphsTypeph*));
            # 698 "./neo-c.h"
            __result104__ = __result_obj__ = default_value_106;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_106, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result104__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_110;
unsigned int it_111;
_Bool _while_condtional15;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sFun* __result105__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sFun* __result106__;
struct sFun* __result107__;
struct sFun* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_110, 0, sizeof(unsigned int));
memset(&it_111, 0, sizeof(unsigned int));
            # 1226 "./neo-c.h"
            hash_110=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./neo-c.h"
            it_111=hash_110;
            # 1251 "./neo-c.h"
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                # 1249 "./neo-c.h"
                # 1230 "./neo-c.h"
                if(_if_conditional140=self->item_existance[it_111],                _if_conditional140) {
                    # 1237 "./neo-c.h"
                    # 1232 "./neo-c.h"
                    if(_if_conditional141=string_equals(self->keys[it_111],key),                    _if_conditional141) {
                        # 1234 "./neo-c.h"
                        __result105__ = __result_obj__ = self->items[it_111];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                    }
                    # 1237 "./neo-c.h"
                    it_111++;
                    # 1245 "./neo-c.h"
                    # 1239 "./neo-c.h"
                    if(_if_conditional157=it_111>=self->size,                    _if_conditional157) {
                        # 1240 "./neo-c.h"
                        it_111=0;
                    }
                    else {
                        # 1245 "./neo-c.h"
                        # 1242 "./neo-c.h"
                        if(_if_conditional158=it_111==hash_110,                        _if_conditional158) {
                            # 1243 "./neo-c.h"
                            __result106__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result106__;
                        }
                    }
                }
                else {
                    # 1247 "./neo-c.h"
                    __result107__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                }
            }
            # 1251 "./neo-c.h"
            __result108__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result108__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional144) {
                                # 2 "sFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional145) {
                                # 3 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional146) {
                                # 4 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional147=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional147) {
                                # 5 "sFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional148=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional148) {
                                # 6 "sFun_finalize"
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional151=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional151) {
                                # 7 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional152=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional152) {
                                # 8 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional153=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional153) {
                                # 9 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional154=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional154) {
                                # 10 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional150=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional150) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_113;
unsigned int hash_114;
unsigned int it_115;
_Bool _while_condtional16;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sClass* __result109__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_113, 0, sizeof(struct sClass*));
memset(&hash_114, 0, sizeof(unsigned int));
memset(&it_115, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_113,0,sizeof(struct sClass*));
                # 1547 "./neo-c.h"
                hash_114=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_115=hash_114;
                # 1572 "./neo-c.h"
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional160=self->item_existance[it_115],                    _if_conditional160) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional161=string_equals(self->keys[it_115],key),                        _if_conditional161) {
                            # 1555 "./neo-c.h"
                            __result109__ = __result_obj__ = self->items[it_115];
                            come_call_finalizer2(sClass_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result109__;
                        }
                        # 1558 "./neo-c.h"
                        it_115++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional167=it_115>=self->size,                        _if_conditional167) {
                            # 1561 "./neo-c.h"
                            it_115=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional168=it_115==hash_114,                            _if_conditional168) {
                                # 1564 "./neo-c.h"
                                __result110__ = __result_obj__ = default_value_113;
                                come_call_finalizer2(sClass_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result111__ = __result_obj__ = default_value_113;
                        come_call_finalizer2(sClass_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
                # 1572 "./neo-c.h"
                __result112__ = __result_obj__ = default_value_113;
                come_call_finalizer2(sClass_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer2(sClass_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_116;
_Bool _while_condtional17;
struct list_item$1tuple2$2charphsTypephph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 123 "./neo-c.h"
                                        it_116=self->head;
                                        # 129 "./neo-c.h"
                                        while(_while_condtional17=it_116!=((void*)0),                                        _while_condtional17) {
                                            # 125 "./neo-c.h"
                                            prev_it_117=it_116;
                                            # 126 "./neo-c.h"
                                            it_116=it_116->next;
                                            # 127 "./neo-c.h"
                                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* __dec_obj53;
struct sTrueNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 274 "21obj.c"
    self->sline=info->sline;
    # 275 "21obj.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 277 "21obj.c"
    __result114__ = __result_obj__ = self;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result114__;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    # 282 "21obj.c"
    __result115__ = self->sline;
    return __result115__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    # 287 "21obj.c"
    __result116__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self->sname)));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    # 292 "21obj.c"
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sTrueNode_kind(){
void* __result_obj__;
void* right_value168;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
    # 297 "21obj.c"
    __result118__ = __result_obj__ = ((char*)(right_value168=__builtin_string("sTrueNode")));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value169;
struct CVALUE* come_value_120;
void* right_value170;
char* __dec_obj54;
void* right_value171;
void* right_value172;
struct sType* __dec_obj55;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
    # 302 "21obj.c"
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 302, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 304 "21obj.c"
    __dec_obj54=come_value_120->c_value;
    come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("(_Bool)1"))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 305 "21obj.c"
    __dec_obj55=come_value_120->type;
    come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 305, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 306 "21obj.c"
    come_value_120->var=((void*)0);
    # 308 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_120->c_value);
    # 310 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
    # 312 "21obj.c"
    __result119__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result119__;
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value173;
void* right_value174;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value177;
struct sNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value177 = (void*)0;
    # 317 "21obj.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 317, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value174=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value173=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 317, "sTrueNode")))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result122__ = __result_obj__ = ((struct sNode*)(right_value177=_inf_value2));
    come_call_finalizer2(sTrueNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTrueNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result122__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value178;
char* __dec_obj57;
struct sFalseNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    # 327 "21obj.c"
    self->sline=info->sline;
    # 328 "21obj.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 330 "21obj.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result123__;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 335 "21obj.c"
    __result124__ = self->sline;
    return __result124__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    # 340 "21obj.c"
    __result125__ = __result_obj__ = ((char*)(right_value179=__builtin_string(self->sname)));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    # 345 "21obj.c"
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sFalseNode_kind(){
void* __result_obj__;
void* right_value180;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    # 350 "21obj.c"
    __result127__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sFalseNode")));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value181;
struct CVALUE* come_value_122;
void* right_value182;
char* __dec_obj58;
void* right_value183;
void* right_value184;
struct sType* __dec_obj59;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
    # 355 "21obj.c"
    come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 355, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 357 "21obj.c"
    __dec_obj58=come_value_122->c_value;
    come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("(_Bool)0"))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 358 "21obj.c"
    __dec_obj59=come_value_122->type;
    come_value_122->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 358, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 359 "21obj.c"
    come_value_122->var=((void*)0);
    # 361 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_122->c_value);
    # 363 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
    # 365 "21obj.c"
    __result128__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value185;
void* right_value186;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value189;
struct sNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value189 = (void*)0;
    # 370 "21obj.c"
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 370, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value186=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value185=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 370, "sFalseNode")))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result131__ = __result_obj__ = ((struct sNode*)(right_value189=_inf_value3));
    come_call_finalizer2(sFalseNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFalseNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value189) { right_value189 = come_decrement_ref_count2(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result131__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value190;
struct sType* __dec_obj61;
void* right_value191;
char* __dec_obj62;
struct sSizeOfNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 381 "21obj.c"
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 383 "21obj.c"
    self->sline=info->sline;
    # 384 "21obj.c"
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 386 "21obj.c"
    __result132__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result132__;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 391 "21obj.c"
    __result133__ = self->sline;
    return __result133__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    # 396 "21obj.c"
    __result134__ = __result_obj__ = ((char*)(right_value192=__builtin_string(self->sname)));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    # 401 "21obj.c"
    __result135__ = (_Bool)0;
    return __result135__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
void* right_value193;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    # 406 "21obj.c"
    __result136__ = __result_obj__ = ((char*)(right_value193=__builtin_string("sSizeOfNode")));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_124;
void* right_value194;
struct CVALUE* come_value_125;
void* right_value195;
struct sType* type2_126;
void* right_value196;
char* type_name_127;
void* right_value197;
char* __dec_obj63;
void* right_value198;
void* right_value199;
struct sType* __dec_obj64;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_124, 0, sizeof(struct sType*));
right_value194 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
memset(&type2_126, 0, sizeof(struct sType*));
right_value196 = (void*)0;
memset(&type_name_127, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    # 411 "21obj.c"
    type_124=self->type;
    # 413 "21obj.c"
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 413, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 415 "21obj.c"
    type2_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=solve_generics(type_124,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 417 "21obj.c"
    type_name_127=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(type2_126,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 419 "21obj.c"
    __dec_obj63=come_value_125->c_value;
    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("sizeof(%s)",type_name_127))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 420 "21obj.c"
    __dec_obj64=come_value_125->type;
    come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 420, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 421 "21obj.c"
    come_value_125->type->mUnsigned=(_Bool)1;
    # 422 "21obj.c"
    come_value_125->var=((void*)0);
    # 424 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_125->c_value);
    # 426 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
    # 428 "21obj.c"
    __result137__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_127 = come_decrement_ref_count2(type_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_127 = come_decrement_ref_count2(type_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value200;
struct sNode* __dec_obj65;
void* right_value201;
char* __dec_obj66;
struct sSizeOfExpNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    # 439 "21obj.c"
    __dec_obj65=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(exp))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 441 "21obj.c"
    self->sline=info->sline;
    # 442 "21obj.c"
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 444 "21obj.c"
    __result138__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result138__;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 449 "21obj.c"
    __result139__ = self->sline;
    return __result139__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    # 454 "21obj.c"
    __result140__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    # 459 "21obj.c"
    __result141__ = (_Bool)0;
    return __result141__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
void* right_value203;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    # 464 "21obj.c"
    __result142__ = __result_obj__ = ((char*)(right_value203=__builtin_string("sSizeOfExpNode")));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_128;
_Bool _if_conditional184;
_Bool __result143__;
void* right_value204;
struct CVALUE* come_value_129;
void* right_value205;
struct CVALUE* come_value2_130;
void* right_value206;
char* __dec_obj67;
void* right_value207;
void* right_value208;
struct sType* __dec_obj68;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_128, 0, sizeof(struct sNode*));
right_value204 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value205 = (void*)0;
memset(&come_value2_130, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 469 "21obj.c"
    exp_128=(struct sNode*)come_increment_ref_count(self->exp);
    # 475 "21obj.c"
    # 471 "21obj.c"
    if(_if_conditional184=!node_compile(exp_128,info),    _if_conditional184) {
        # 472 "21obj.c"
        __result143__ = (_Bool)0;
        if(exp_128) { exp_128 = come_decrement_ref_count2(exp_128, ((struct sNode*)exp_128)->finalize, ((struct sNode*)exp_128)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result143__;
    }
    # 475 "21obj.c"
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 476 "21obj.c"
    dec_stack_ptr(1,info);
    # 478 "21obj.c"
    come_value2_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 478, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 480 "21obj.c"
    __dec_obj67=come_value2_130->c_value;
    come_value2_130->c_value=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("sizeof(%s)",come_value_129->c_value))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 481 "21obj.c"
    __dec_obj68=come_value2_130->type;
    come_value2_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value207=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 481, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 482 "21obj.c"
    come_value2_130->type->mUnsigned=(_Bool)1;
    # 483 "21obj.c"
    come_value2_130->var=((void*)0);
    # 485 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_130->c_value);
    # 487 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_130));
    # 489 "21obj.c"
    __result144__ = (_Bool)1;
    if(exp_128) { exp_128 = come_decrement_ref_count2(exp_128, ((struct sNode*)exp_128)->finalize, ((struct sNode*)exp_128)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    if(exp_128) { exp_128 = come_decrement_ref_count2(exp_128, ((struct sNode*)exp_128)->finalize, ((struct sNode*)exp_128)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value209;
struct sType* __dec_obj69;
void* right_value210;
char* __dec_obj70;
struct sTypeOfNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
right_value210 = (void*)0;
    # 500 "21obj.c"
    __dec_obj69=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 502 "21obj.c"
    self->sline=info->sline;
    # 503 "21obj.c"
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 505 "21obj.c"
    __result145__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    # 510 "21obj.c"
    __result146__ = self->sline;
    return __result146__;
}

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value211;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
    # 515 "21obj.c"
    __result147__ = __result_obj__ = ((char*)(right_value211=__builtin_string(self->sname)));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 520 "21obj.c"
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sTypeOfNode_kind(){
void* __result_obj__;
void* right_value212;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    # 525 "21obj.c"
    __result149__ = __result_obj__ = ((char*)(right_value212=__builtin_string("sTypeOfNode")));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_131;
void* right_value213;
struct CVALUE* come_value_132;
void* right_value214;
struct sType* type2_133;
void* right_value215;
char* type_name_134;
void* right_value216;
char* __dec_obj71;
void* right_value217;
void* right_value218;
struct sType* __dec_obj72;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_131, 0, sizeof(struct sType*));
right_value213 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&type2_133, 0, sizeof(struct sType*));
right_value215 = (void*)0;
memset(&type_name_134, 0, sizeof(char*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    # 530 "21obj.c"
    type_131=self->type;
    # 532 "21obj.c"
    come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 532, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 534 "21obj.c"
    type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(type_131,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 536 "21obj.c"
    type_name_134=(char*)come_increment_ref_count(((char*)(right_value215=make_type_name_string(type2_133,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 538 "21obj.c"
    __dec_obj71=come_value_132->c_value;
    come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("\"%s\"",type_name_134))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 539 "21obj.c"
    __dec_obj72=come_value_132->type;
    come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 539, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 540 "21obj.c"
    come_value_132->var=((void*)0);
    # 542 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_132->c_value);
    # 544 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
    # 546 "21obj.c"
    __result150__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_134 = come_decrement_ref_count2(type_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result150__;
    come_call_finalizer2(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_134 = come_decrement_ref_count2(type_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value219;
struct sNode* __dec_obj73;
void* right_value220;
char* __dec_obj74;
struct sTypeOfExpNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    # 557 "21obj.c"
    __dec_obj73=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(exp))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 559 "21obj.c"
    self->sline=info->sline;
    # 560 "21obj.c"
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 562 "21obj.c"
    __result151__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result151__;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    # 567 "21obj.c"
    __result152__ = self->sline;
    return __result152__;
}

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value221;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    # 572 "21obj.c"
    __result153__ = __result_obj__ = ((char*)(right_value221=__builtin_string(self->sname)));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
}

_Bool sTypeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 577 "21obj.c"
    __result154__ = (_Bool)0;
    return __result154__;
}

char* sTypeOfExpNode_kind(){
void* __result_obj__;
void* right_value222;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    # 582 "21obj.c"
    __result155__ = __result_obj__ = ((char*)(right_value222=__builtin_string("sTypeOfExpNode")));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_135;
_Bool _if_conditional189;
_Bool __result156__;
void* right_value223;
struct CVALUE* come_value_136;
void* right_value224;
struct sType* type_137;
void* right_value225;
struct sType* type2_138;
void* right_value226;
char* type_name_139;
void* right_value227;
char* __dec_obj75;
void* right_value228;
void* right_value229;
struct sType* __dec_obj76;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_135, 0, sizeof(struct sNode*));
right_value223 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
memset(&type_137, 0, sizeof(struct sType*));
right_value225 = (void*)0;
memset(&type2_138, 0, sizeof(struct sType*));
right_value226 = (void*)0;
memset(&type_name_139, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
    # 587 "21obj.c"
    exp_135=(struct sNode*)come_increment_ref_count(self->exp);
    # 593 "21obj.c"
    # 589 "21obj.c"
    if(_if_conditional189=!node_compile(exp_135,info),    _if_conditional189) {
        # 590 "21obj.c"
        __result156__ = (_Bool)0;
        if(exp_135) { exp_135 = come_decrement_ref_count2(exp_135, ((struct sNode*)exp_135)->finalize, ((struct sNode*)exp_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result156__;
    }
    # 593 "21obj.c"
    come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 594 "21obj.c"
    dec_stack_ptr(1,info);
    # 596 "21obj.c"
    type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(come_value_136->type))));
    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 598 "21obj.c"
    type2_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=solve_generics(type_137,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 600 "21obj.c"
    type_name_139=(char*)come_increment_ref_count(((char*)(right_value226=make_type_name_string(type2_138,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 602 "21obj.c"
    __dec_obj75=come_value_136->c_value;
    come_value_136->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("\"%s\"",type_name_139))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 603 "21obj.c"
    __dec_obj76=come_value_136->type;
    come_value_136->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 603, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 604 "21obj.c"
    come_value_136->var=((void*)0);
    # 606 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_136->c_value);
    # 608 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
    # 610 "21obj.c"
    __result157__ = (_Bool)1;
    if(exp_135) { exp_135 = come_decrement_ref_count2(exp_135, ((struct sNode*)exp_135)->finalize, ((struct sNode*)exp_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_139 = come_decrement_ref_count2(type_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result157__;
    if(exp_135) { exp_135 = come_decrement_ref_count2(exp_135, ((struct sNode*)exp_135)->finalize, ((struct sNode*)exp_135)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_139 = come_decrement_ref_count2(type_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value230;
struct sNode* __dec_obj77;
void* right_value231;
char* __dec_obj78;
struct sDynamicTypeOfNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
    # 621 "21obj.c"
    __dec_obj77=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(exp))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 623 "21obj.c"
    self->sline=info->sline;
    # 624 "21obj.c"
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 626 "21obj.c"
    __result158__ = __result_obj__ = self;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result158__;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sDynamicTypeOfNode_finalize"
        # 0 "sDynamicTypeOfNode_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->exp!=((void*)0),        _if_conditional190) {
            # 0 "sDynamicTypeOfNode_finalize"
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 2 "sDynamicTypeOfNode_finalize"
        # 1 "sDynamicTypeOfNode_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional191) {
            # 1 "sDynamicTypeOfNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    # 631 "21obj.c"
    __result159__ = self->sline;
    return __result159__;
}

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value232;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
    # 636 "21obj.c"
    __result160__ = __result_obj__ = ((char*)(right_value232=__builtin_string(self->sname)));
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sDynamicTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 641 "21obj.c"
    __result161__ = (_Bool)0;
    return __result161__;
}

char* sDynamicTypeOfNode_kind(){
void* __result_obj__;
void* right_value233;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    # 646 "21obj.c"
    __result162__ = __result_obj__ = ((char*)(right_value233=__builtin_string("sDynamicTypeOfNode")));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_140;
_Bool _if_conditional192;
_Bool __result163__;
void* right_value234;
struct CVALUE* come_value_141;
_Bool _if_conditional193;
void* right_value235;
struct sType* type_142;
void* right_value236;
struct sType* type2_143;
void* right_value237;
char* type_name_144;
void* right_value238;
char* __dec_obj79;
void* right_value239;
void* right_value240;
struct sType* __dec_obj80;
_Bool __result164__;
void* right_value241;
struct CVALUE* come_value2_145;
void* right_value242;
char* __dec_obj81;
void* right_value243;
void* right_value244;
struct sType* __dec_obj82;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_140, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
memset(&come_value_141, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
memset(&type_142, 0, sizeof(struct sType*));
right_value236 = (void*)0;
memset(&type2_143, 0, sizeof(struct sType*));
right_value237 = (void*)0;
memset(&type_name_144, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_value2_145, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    # 651 "21obj.c"
    exp_140=(struct sNode*)come_increment_ref_count(self->exp);
    # 657 "21obj.c"
    # 653 "21obj.c"
    if(_if_conditional192=!node_compile(exp_140,info),    _if_conditional192) {
        # 654 "21obj.c"
        __result163__ = (_Bool)0;
        if(exp_140) { exp_140 = come_decrement_ref_count2(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result163__;
    }
    # 657 "21obj.c"
    come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 658 "21obj.c"
    dec_stack_ptr(1,info);
    # 689 "21obj.c"
    # 660 "21obj.c"
    if(_if_conditional193=!come_value_141->type->mHeap,    _if_conditional193) {
        # 661 "21obj.c"
        type_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(come_value_141->type))));
        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 663 "21obj.c"
        type2_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=solve_generics(type_142,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 665 "21obj.c"
        type_name_144=(char*)come_increment_ref_count(((char*)(right_value237=make_type_name_string(type2_143,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 667 "21obj.c"
        __dec_obj79=come_value_141->c_value;
        come_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("\"%s\"",type_name_144))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 668 "21obj.c"
        __dec_obj80=come_value_141->type;
        come_value_141->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 668, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 669 "21obj.c"
        come_value_141->var=((void*)0);
        # 671 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_141->c_value);
        # 673 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
        # 675 "21obj.c"
        __result164__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,type_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_144 = come_decrement_ref_count2(type_name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_140) { exp_140 = come_decrement_ref_count2(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result164__;
        come_call_finalizer2(sType_finalize,type_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_144 = come_decrement_ref_count2(type_name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 678 "21obj.c"
        come_value2_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 678, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 680 "21obj.c"
        __dec_obj81=come_value2_145->c_value;
        come_value2_145->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("come_dynamic_typeof(%s)",come_value_141->c_value))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 681 "21obj.c"
        __dec_obj82=come_value2_145->type;
        come_value2_145->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 681, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 682 "21obj.c"
        come_value2_145->var=((void*)0);
        # 684 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value2_145->c_value);
        # 686 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_145));
        come_call_finalizer2(CVALUE_finalize,come_value2_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 689 "21obj.c"
    __result165__ = (_Bool)1;
    if(exp_140) { exp_140 = come_decrement_ref_count2(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result165__;
    if(exp_140) { exp_140 = come_decrement_ref_count2(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sType* __dec_obj83;
void* right_value246;
char* __dec_obj84;
struct sAlignOfNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    # 700 "21obj.c"
    __dec_obj83=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 702 "21obj.c"
    self->sline=info->sline;
    # 703 "21obj.c"
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 705 "21obj.c"
    __result166__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result166__;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 710 "21obj.c"
    __result167__ = self->sline;
    return __result167__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value247;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    # 715 "21obj.c"
    __result168__ = __result_obj__ = ((char*)(right_value247=__builtin_string(self->sname)));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 720 "21obj.c"
    __result169__ = (_Bool)0;
    return __result169__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
void* right_value248;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
    # 725 "21obj.c"
    __result170__ = __result_obj__ = ((char*)(right_value248=__builtin_string("sAlignOfNode")));
    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_146;
void* right_value249;
struct CVALUE* come_value_147;
void* right_value250;
struct sType* type2_148;
void* right_value251;
char* type_name_149;
void* right_value252;
char* __dec_obj85;
void* right_value253;
void* right_value254;
struct sType* __dec_obj86;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_146, 0, sizeof(struct sType*));
right_value249 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
memset(&type2_148, 0, sizeof(struct sType*));
right_value251 = (void*)0;
memset(&type_name_149, 0, sizeof(char*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    # 730 "21obj.c"
    type_146=self->type;
    # 732 "21obj.c"
    come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 732, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 734 "21obj.c"
    type2_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=solve_generics(type_146,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 736 "21obj.c"
    type_name_149=(char*)come_increment_ref_count(((char*)(right_value251=make_type_name_string(type2_148,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 738 "21obj.c"
    __dec_obj85=come_value_147->c_value;
    come_value_147->c_value=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("_Alignof(%s)",type_name_149))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 739 "21obj.c"
    __dec_obj86=come_value_147->type;
    come_value_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 739, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 740 "21obj.c"
    come_value_147->type->mUnsigned=(_Bool)1;
    # 741 "21obj.c"
    come_value_147->var=((void*)0);
    # 743 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_147->c_value);
    # 745 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
    # 747 "21obj.c"
    __result171__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_149 = come_decrement_ref_count2(type_name_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_149 = come_decrement_ref_count2(type_name_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value255;
struct sNode* __dec_obj87;
void* right_value256;
char* __dec_obj88;
struct sAlignOfExpNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
right_value256 = (void*)0;
    # 758 "21obj.c"
    __dec_obj87=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(exp))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 760 "21obj.c"
    self->sline=info->sline;
    # 761 "21obj.c"
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 763 "21obj.c"
    __result172__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result172__;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 768 "21obj.c"
    __result173__ = self->sline;
    return __result173__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value257;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
    # 773 "21obj.c"
    __result174__ = __result_obj__ = ((char*)(right_value257=__builtin_string(self->sname)));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    # 778 "21obj.c"
    __result175__ = (_Bool)0;
    return __result175__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
void* right_value258;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
    # 783 "21obj.c"
    __result176__ = __result_obj__ = ((char*)(right_value258=__builtin_string("sAlignOfExpNode")));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_150;
_Bool _if_conditional198;
_Bool __result177__;
void* right_value259;
struct CVALUE* come_value_151;
void* right_value260;
struct CVALUE* come_value2_152;
void* right_value261;
char* __dec_obj89;
void* right_value262;
void* right_value263;
struct sType* __dec_obj90;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_150, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
memset(&come_value_151, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
memset(&come_value2_152, 0, sizeof(struct CVALUE*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 788 "21obj.c"
    exp_150=(struct sNode*)come_increment_ref_count(self->exp);
    # 794 "21obj.c"
    # 790 "21obj.c"
    if(_if_conditional198=!node_compile(exp_150,info),    _if_conditional198) {
        # 791 "21obj.c"
        __result177__ = (_Bool)0;
        if(exp_150) { exp_150 = come_decrement_ref_count2(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result177__;
    }
    # 794 "21obj.c"
    come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 795 "21obj.c"
    dec_stack_ptr(1,info);
    # 797 "21obj.c"
    come_value2_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 797, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 799 "21obj.c"
    __dec_obj89=come_value2_152->c_value;
    come_value2_152->c_value=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("_AlignOf(%s)",come_value_151->c_value))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 800 "21obj.c"
    __dec_obj90=come_value2_152->type;
    come_value2_152->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 800, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 801 "21obj.c"
    come_value2_152->type->mUnsigned=(_Bool)1;
    # 802 "21obj.c"
    come_value2_152->var=((void*)0);
    # 804 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_152->c_value);
    # 806 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_152));
    # 808 "21obj.c"
    __result178__ = (_Bool)1;
    if(exp_150) { exp_150 = come_decrement_ref_count2(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result178__;
    if(exp_150) { exp_150 = come_decrement_ref_count2(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value264;
struct sType* __dec_obj91;
void* right_value265;
char* __dec_obj92;
struct sAlignOfNode2* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    # 819 "21obj.c"
    __dec_obj91=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 821 "21obj.c"
    self->sline=info->sline;
    # 822 "21obj.c"
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 824 "21obj.c"
    __result179__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result179__;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
int __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 829 "21obj.c"
    __result180__ = self->sline;
    return __result180__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value266;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
    # 834 "21obj.c"
    __result181__ = __result_obj__ = ((char*)(right_value266=__builtin_string(self->sname)));
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    # 839 "21obj.c"
    __result182__ = (_Bool)0;
    return __result182__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
void* right_value267;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
    # 844 "21obj.c"
    __result183__ = __result_obj__ = ((char*)(right_value267=__builtin_string("sAlignOfNode2")));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_153;
void* right_value268;
struct CVALUE* come_value_154;
void* right_value269;
struct sType* type2_155;
void* right_value270;
char* type_name_156;
void* right_value271;
char* __dec_obj93;
void* right_value272;
void* right_value273;
struct sType* __dec_obj94;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_153, 0, sizeof(struct sType*));
right_value268 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
memset(&type2_155, 0, sizeof(struct sType*));
right_value270 = (void*)0;
memset(&type_name_156, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
    # 849 "21obj.c"
    type_153=self->type;
    # 851 "21obj.c"
    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 851, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 853 "21obj.c"
    type2_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=solve_generics(type_153,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 855 "21obj.c"
    type_name_156=(char*)come_increment_ref_count(((char*)(right_value270=make_type_name_string(type2_155,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 857 "21obj.c"
    __dec_obj93=come_value_154->c_value;
    come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("__alignof__(%s)",type_name_156))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 858 "21obj.c"
    __dec_obj94=come_value_154->type;
    come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 858, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 859 "21obj.c"
    come_value_154->type->mUnsigned=(_Bool)1;
    # 860 "21obj.c"
    come_value_154->var=((void*)0);
    # 862 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_154->c_value);
    # 864 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
    # 866 "21obj.c"
    __result184__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_156 = come_decrement_ref_count2(type_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result184__;
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_156 = come_decrement_ref_count2(type_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value274;
struct sNode* __dec_obj95;
void* right_value275;
char* __dec_obj96;
struct sAlignOfExpNode2* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    # 877 "21obj.c"
    __dec_obj95=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNode_clone(exp))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 879 "21obj.c"
    self->sline=info->sline;
    # 880 "21obj.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 882 "21obj.c"
    __result185__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 887 "21obj.c"
    __result186__ = self->sline;
    return __result186__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value276;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
    # 892 "21obj.c"
    __result187__ = __result_obj__ = ((char*)(right_value276=__builtin_string(self->sname)));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result187__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    # 897 "21obj.c"
    __result188__ = (_Bool)0;
    return __result188__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
void* right_value277;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    # 902 "21obj.c"
    __result189__ = __result_obj__ = ((char*)(right_value277=__builtin_string("sAlignOfExpNode2")));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result189__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_157;
_Bool _if_conditional203;
_Bool __result190__;
void* right_value278;
struct CVALUE* come_value_158;
void* right_value279;
struct CVALUE* come_value2_159;
void* right_value280;
char* __dec_obj97;
void* right_value281;
void* right_value282;
struct sType* __dec_obj98;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_157, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
right_value279 = (void*)0;
memset(&come_value2_159, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
    # 907 "21obj.c"
    exp_157=(struct sNode*)come_increment_ref_count(self->exp);
    # 913 "21obj.c"
    # 909 "21obj.c"
    if(_if_conditional203=!node_compile(exp_157,info),    _if_conditional203) {
        # 910 "21obj.c"
        __result190__ = (_Bool)0;
        if(exp_157) { exp_157 = come_decrement_ref_count2(exp_157, ((struct sNode*)exp_157)->finalize, ((struct sNode*)exp_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result190__;
    }
    # 913 "21obj.c"
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 914 "21obj.c"
    dec_stack_ptr(1,info);
    # 916 "21obj.c"
    come_value2_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 916, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 918 "21obj.c"
    __dec_obj97=come_value2_159->c_value;
    come_value2_159->c_value=(char*)come_increment_ref_count(((char*)(right_value280=xsprintf("__alignof__(%s)",come_value_158->c_value))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 919 "21obj.c"
    __dec_obj98=come_value2_159->type;
    come_value2_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 919, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 920 "21obj.c"
    come_value2_159->type->mUnsigned=(_Bool)1;
    # 921 "21obj.c"
    come_value2_159->var=((void*)0);
    # 923 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_159->c_value);
    # 925 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_159));
    # 927 "21obj.c"
    __result191__ = (_Bool)1;
    if(exp_157) { exp_157 = come_decrement_ref_count2(exp_157, ((struct sNode*)exp_157)->finalize, ((struct sNode*)exp_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result191__;
    if(exp_157) { exp_157 = come_decrement_ref_count2(exp_157, ((struct sNode*)exp_157)->finalize, ((struct sNode*)exp_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value283;
struct sType* __dec_obj99;
void* right_value284;
char* __dec_obj100;
struct sAlignAsNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
right_value284 = (void*)0;
    # 938 "21obj.c"
    __dec_obj99=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 940 "21obj.c"
    self->sline=info->sline;
    # 941 "21obj.c"
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(info->sname))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 943 "21obj.c"
    __result192__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result192__;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    # 948 "21obj.c"
    __result193__ = self->sline;
    return __result193__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value285;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
    # 953 "21obj.c"
    __result194__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result194__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    # 958 "21obj.c"
    __result195__ = (_Bool)0;
    return __result195__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
void* right_value286;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
    # 963 "21obj.c"
    __result196__ = __result_obj__ = ((char*)(right_value286=__builtin_string("sAlignAsNode")));
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_160;
void* right_value287;
struct CVALUE* come_value_161;
void* right_value288;
struct sType* type2_162;
void* right_value289;
char* type_name_163;
void* right_value290;
char* __dec_obj101;
void* right_value291;
void* right_value292;
struct sType* __dec_obj102;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_160, 0, sizeof(struct sType*));
right_value287 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value288 = (void*)0;
memset(&type2_162, 0, sizeof(struct sType*));
right_value289 = (void*)0;
memset(&type_name_163, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
    # 968 "21obj.c"
    type_160=self->type;
    # 970 "21obj.c"
    come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 970, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 972 "21obj.c"
    type2_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=solve_generics(type_160,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 974 "21obj.c"
    type_name_163=(char*)come_increment_ref_count(((char*)(right_value289=make_type_name_string(type2_162,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 976 "21obj.c"
    __dec_obj101=come_value_161->c_value;
    come_value_161->c_value=(char*)come_increment_ref_count(((char*)(right_value290=xsprintf("_Alignas(%s)",type_name_163))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 977 "21obj.c"
    __dec_obj102=come_value_161->type;
    come_value_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value291=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 977, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 978 "21obj.c"
    come_value_161->type->mUnsigned=(_Bool)1;
    # 979 "21obj.c"
    come_value_161->var=((void*)0);
    # 981 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    # 983 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    # 985 "21obj.c"
    __result197__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result197__;
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value293;
struct sNode* __dec_obj103;
void* right_value294;
char* __dec_obj104;
struct sAlignAsExpNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
right_value294 = (void*)0;
    # 996 "21obj.c"
    __dec_obj103=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=sNode_clone(exp))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 998 "21obj.c"
    self->sline=info->sline;
    # 999 "21obj.c"
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1001 "21obj.c"
    __result198__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result198__;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1006 "21obj.c"
    __result199__ = self->sline;
    return __result199__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value295;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    # 1011 "21obj.c"
    __result200__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result200__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1016 "21obj.c"
    __result201__ = (_Bool)0;
    return __result201__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
void* right_value296;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
    # 1021 "21obj.c"
    __result202__ = __result_obj__ = ((char*)(right_value296=__builtin_string("sAlignAsExpNode")));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result202__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_164;
_Bool _if_conditional208;
_Bool __result203__;
void* right_value297;
struct CVALUE* come_value_165;
void* right_value298;
struct CVALUE* come_value2_166;
void* right_value299;
char* __dec_obj105;
void* right_value300;
void* right_value301;
struct sType* __dec_obj106;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_164, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
right_value298 = (void*)0;
memset(&come_value2_166, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
    # 1027 "21obj.c"
    exp_164=(struct sNode*)come_increment_ref_count(self->exp);
    # 1033 "21obj.c"
    # 1029 "21obj.c"
    if(_if_conditional208=!node_compile(exp_164,info),    _if_conditional208) {
        # 1030 "21obj.c"
        __result203__ = (_Bool)0;
        if(exp_164) { exp_164 = come_decrement_ref_count2(exp_164, ((struct sNode*)exp_164)->finalize, ((struct sNode*)exp_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result203__;
    }
    # 1033 "21obj.c"
    come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1034 "21obj.c"
    dec_stack_ptr(1,info);
    # 1036 "21obj.c"
    come_value2_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1036, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1038 "21obj.c"
    __dec_obj105=come_value2_166->c_value;
    come_value2_166->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("_Alignas(%s)",come_value_165->c_value))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1039 "21obj.c"
    __dec_obj106=come_value2_166->type;
    come_value2_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1039, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1040 "21obj.c"
    come_value2_166->type->mUnsigned=(_Bool)1;
    # 1041 "21obj.c"
    come_value2_166->var=((void*)0);
    # 1043 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_166->c_value);
    # 1045 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_166));
    # 1047 "21obj.c"
    __result204__ = (_Bool)1;
    if(exp_164) { exp_164 = come_decrement_ref_count2(exp_164, ((struct sNode*)exp_164)->finalize, ((struct sNode*)exp_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result204__;
    if(exp_164) { exp_164 = come_decrement_ref_count2(exp_164, ((struct sNode*)exp_164)->finalize, ((struct sNode*)exp_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value302;
struct sNode* __dec_obj107;
void* right_value303;
char* __dec_obj108;
struct sDeleteNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
right_value303 = (void*)0;
    # 1058 "21obj.c"
    __dec_obj107=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1060 "21obj.c"
    self->sline=info->sline;
    # 1061 "21obj.c"
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1063 "21obj.c"
    __result205__ = __result_obj__ = self;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result205__;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1068 "21obj.c"
    __result206__ = self->sline;
    return __result206__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value304;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
    # 1073 "21obj.c"
    __result207__ = __result_obj__ = ((char*)(right_value304=__builtin_string(self->sname)));
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result207__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1078 "21obj.c"
    __result208__ = (_Bool)0;
    return __result208__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
void* right_value305;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
    # 1083 "21obj.c"
    __result209__ = __result_obj__ = ((char*)(right_value305=__builtin_string("sDeleteNode")));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result209__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_167;
_Bool _if_conditional211;
_Bool __result210__;
void* right_value306;
struct CVALUE* come_value_168;
_Bool __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_167, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
    # 1088 "21obj.c"
    node_167=self->node;
    # 1094 "21obj.c"
    # 1090 "21obj.c"
    if(_if_conditional211=!node_compile(node_167,info),    _if_conditional211) {
        # 1091 "21obj.c"
        __result210__ = (_Bool)0;
        return __result210__;
    }
    # 1094 "21obj.c"
    come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value306=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1095 "21obj.c"
    dec_stack_ptr(1,info);
    # 1097 "21obj.c"
    free_object(come_value_168->type,come_value_168->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    # 1099 "21obj.c"
    __result211__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result211__;
    come_call_finalizer2(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value307;
struct sNode* __dec_obj109;
void* right_value308;
char* __dec_obj110;
struct sForceDeleteNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
right_value308 = (void*)0;
    # 1110 "21obj.c"
    __dec_obj109=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(node))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1112 "21obj.c"
    self->sline=info->sline;
    # 1113 "21obj.c"
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string(info->sname))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1115 "21obj.c"
    __result212__ = __result_obj__ = self;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result212__;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1120 "21obj.c"
    __result213__ = self->sline;
    return __result213__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value309;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    # 1125 "21obj.c"
    __result214__ = __result_obj__ = ((char*)(right_value309=__builtin_string(self->sname)));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1130 "21obj.c"
    __result215__ = (_Bool)0;
    return __result215__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
void* right_value310;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
    # 1135 "21obj.c"
    __result216__ = __result_obj__ = ((char*)(right_value310=__builtin_string("sForceDeleteNode")));
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result216__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_169;
_Bool _if_conditional214;
_Bool __result217__;
void* right_value311;
struct CVALUE* come_value_170;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_169, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&come_value_170, 0, sizeof(struct CVALUE*));
    # 1140 "21obj.c"
    node_169=self->node;
    # 1146 "21obj.c"
    # 1142 "21obj.c"
    if(_if_conditional214=!node_compile(node_169,info),    _if_conditional214) {
        # 1143 "21obj.c"
        __result217__ = (_Bool)0;
        return __result217__;
    }
    # 1146 "21obj.c"
    come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1147 "21obj.c"
    dec_stack_ptr(1,info);
    # 1149 "21obj.c"
    free_object(come_value_170->type,come_value_170->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    # 1151 "21obj.c"
    __result218__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result218__;
    come_call_finalizer2(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value312;
struct sNode* __dec_obj111;
void* right_value313;
char* __dec_obj112;
struct sDelegateNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
    # 1162 "21obj.c"
    __dec_obj111=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(node))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1164 "21obj.c"
    self->sline=info->sline;
    # 1165 "21obj.c"
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string(info->sname))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1167 "21obj.c"
    __result219__ = __result_obj__ = self;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result219__;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
int __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1172 "21obj.c"
    __result220__ = self->sline;
    return __result220__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value314;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
    # 1177 "21obj.c"
    __result221__ = __result_obj__ = ((char*)(right_value314=__builtin_string(self->sname)));
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result221__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __result222__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1182 "21obj.c"
    __result222__ = (_Bool)0;
    return __result222__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
void* right_value315;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
    # 1187 "21obj.c"
    __result223__ = __result_obj__ = ((char*)(right_value315=__builtin_string("sDelegateNode")));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result223__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_171;
_Bool _if_conditional217;
_Bool __result224__;
void* right_value316;
struct CVALUE* come_value_172;
_Bool _if_conditional218;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_171, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
    # 1192 "21obj.c"
    node_171=self->node;
    # 1198 "21obj.c"
    # 1194 "21obj.c"
    if(_if_conditional217=!node_compile(node_171,info),    _if_conditional217) {
        # 1195 "21obj.c"
        __result224__ = (_Bool)0;
        return __result224__;
    }
    # 1198 "21obj.c"
    come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1199 "21obj.c"
    dec_stack_ptr(1,info);
    # 1201 "21obj.c"
    come_value_172->type->mDelegate=(_Bool)1;
    # 1213 "21obj.c"
    # 1203 "21obj.c"
    if(come_value_172->var) {
        # 1204 "21obj.c"
        come_value_172->var->mType->mDelegate=(_Bool)1;
    }
    # 1213 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
    # 1215 "21obj.c"
    __result225__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result225__;
    come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value317;
struct sNode* __dec_obj113;
void* right_value318;
char* __dec_obj114;
struct sShareNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
right_value318 = (void*)0;
    # 1225 "21obj.c"
    __dec_obj113=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(node))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1227 "21obj.c"
    self->sline=info->sline;
    # 1228 "21obj.c"
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value318=__builtin_string(info->sname))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1230 "21obj.c"
    __result226__ = __result_obj__ = self;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result226__;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
int __result227__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1235 "21obj.c"
    __result227__ = self->sline;
    return __result227__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value319;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
    # 1240 "21obj.c"
    __result228__ = __result_obj__ = ((char*)(right_value319=__builtin_string(self->sname)));
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1245 "21obj.c"
    __result229__ = (_Bool)0;
    return __result229__;
}

char* sShareNode_kind(){
void* __result_obj__;
void* right_value320;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
    # 1250 "21obj.c"
    __result230__ = __result_obj__ = ((char*)(right_value320=__builtin_string("sShareNode")));
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_173;
_Bool _if_conditional221;
_Bool __result231__;
void* right_value321;
struct CVALUE* come_value_174;
_Bool _if_conditional222;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_173, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
    # 1255 "21obj.c"
    node_173=self->node;
    # 1261 "21obj.c"
    # 1257 "21obj.c"
    if(_if_conditional221=!node_compile(node_173,info),    _if_conditional221) {
        # 1258 "21obj.c"
        __result231__ = (_Bool)0;
        return __result231__;
    }
    # 1261 "21obj.c"
    come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1262 "21obj.c"
    dec_stack_ptr(1,info);
    # 1264 "21obj.c"
    come_value_174->type->mShare=(_Bool)1;
    # 1270 "21obj.c"
    # 1266 "21obj.c"
    if(come_value_174->var) {
        # 1267 "21obj.c"
        come_value_174->var->mType->mShare=(_Bool)1;
    }
    # 1270 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
    # 1272 "21obj.c"
    __result232__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result232__;
    come_call_finalizer2(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value322;
struct sNode* __dec_obj115;
void* right_value323;
char* __dec_obj116;
struct sBorrowNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    # 1283 "21obj.c"
    __dec_obj115=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(node))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1285 "21obj.c"
    self->sline=info->sline;
    # 1286 "21obj.c"
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string(info->sname))));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1288 "21obj.c"
    __result233__ = __result_obj__ = self;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result233__;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
int __result234__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1293 "21obj.c"
    __result234__ = self->sline;
    return __result234__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value324;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    # 1298 "21obj.c"
    __result235__ = __result_obj__ = ((char*)(right_value324=__builtin_string(self->sname)));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result235__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __result236__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1303 "21obj.c"
    __result236__ = (_Bool)0;
    return __result236__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
void* right_value325;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
    # 1308 "21obj.c"
    __result237__ = __result_obj__ = ((char*)(right_value325=__builtin_string("sBorrowNode")));
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result237__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_175;
_Bool _if_conditional225;
_Bool __result238__;
void* right_value326;
struct CVALUE* come_value_176;
int right_value_id_177;
_Bool _if_conditional226;
_Bool __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_175, 0, sizeof(struct sNode*));
right_value326 = (void*)0;
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&right_value_id_177, 0, sizeof(int));
    # 1313 "21obj.c"
    node_175=self->node;
    # 1319 "21obj.c"
    # 1315 "21obj.c"
    if(_if_conditional225=!node_compile(node_175,info),    _if_conditional225) {
        # 1316 "21obj.c"
        __result238__ = (_Bool)0;
        return __result238__;
    }
    # 1319 "21obj.c"
    come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1320 "21obj.c"
    dec_stack_ptr(1,info);
    # 1322 "21obj.c"
    come_value_176->type->mHeap=(_Bool)0;
    # 1324 "21obj.c"
    right_value_id_177=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_176->c_value));
    # 1330 "21obj.c"
    # 1326 "21obj.c"
    if(_if_conditional226=right_value_id_177!=-1,    _if_conditional226) {
        # 1327 "21obj.c"
        remove_object_from_right_values(right_value_id_177,info);
    }
    # 1330 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_176));
    # 1332 "21obj.c"
    __result239__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result239__;
    come_call_finalizer2(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value327;
struct sNode* __dec_obj117;
void* right_value328;
char* __dec_obj118;
struct sCloneNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
right_value328 = (void*)0;
    # 1343 "21obj.c"
    __dec_obj117=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(node))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1345 "21obj.c"
    self->sline=info->sline;
    # 1346 "21obj.c"
    __dec_obj118=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string(info->sname))));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1348 "21obj.c"
    __result240__ = __result_obj__ = self;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result240__;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1353 "21obj.c"
    __result241__ = self->sline;
    return __result241__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value329;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
    # 1358 "21obj.c"
    __result242__ = __result_obj__ = ((char*)(right_value329=__builtin_string(self->sname)));
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __result243__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1363 "21obj.c"
    __result243__ = (_Bool)0;
    return __result243__;
}

char* sCloneNode_kind(){
void* __result_obj__;
void* right_value330;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
    # 1368 "21obj.c"
    __result244__ = __result_obj__ = ((char*)(right_value330=__builtin_string("sCloneNode")));
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_178;
_Bool _if_conditional229;
_Bool __result245__;
void* right_value331;
struct CVALUE* left_value_179;
void* right_value332;
struct sType* left_type_180;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value333;
struct CVALUE* come_value_181;
void* right_value334;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_182;
char* c_value_183;
char* __dec_obj119;
void* right_value335;
struct sType* __dec_obj120;
void* right_value336;
char* __dec_obj121;
_Bool __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
right_value331 = (void*)0;
memset(&left_value_179, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
memset(&left_type_180, 0, sizeof(struct sType*));
right_value333 = (void*)0;
memset(&come_value_181, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
memset(&result_type_182, 0, sizeof(struct sType*));
memset(&c_value_183, 0, sizeof(char*));
memset(&result_type_182, 0, sizeof(struct sType*));
memset(&c_value_183, 0, sizeof(char*));
right_value335 = (void*)0;
right_value336 = (void*)0;
    # 1373 "21obj.c"
    node_178=self->node;
    # 1379 "21obj.c"
    # 1375 "21obj.c"
    if(_if_conditional229=!node_compile(node_178,info),    _if_conditional229) {
        # 1376 "21obj.c"
        __result245__ = (_Bool)0;
        return __result245__;
    }
    # 1379 "21obj.c"
    left_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1380 "21obj.c"
    dec_stack_ptr(1,info);
    # 1382 "21obj.c"
    left_value_179->type->mClone=(_Bool)1;
    # 1384 "21obj.c"
    left_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(left_value_179->type))));
    come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1407 "21obj.c"
    # 1386 "21obj.c"
    if(_if_conditional230=left_type_180->mPointerNum==1&&string_operator_equals(left_type_180->mClass->mName,"void")&&left_type_180->mHeap==(_Bool)0,    _if_conditional230) {
        # 1387 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_179));
    }
    else {
        # 1407 "21obj.c"
        # 1389 "21obj.c"
        if(_if_conditional231=left_type_180->mPointerNum==0,        _if_conditional231) {
            # 1390 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_179));
        }
        else {
            # 1407 "21obj.c"
            # 1392 "21obj.c"
            if(_if_conditional232=left_type_180->mPointerNum>0,            _if_conditional232) {
                # 1393 "21obj.c"
                come_value_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1393, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1395 "21obj.c"
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value334=clone_object(left_type_180,left_value_179->c_value,info)));
                result_type_182=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_183=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1396 "21obj.c"
                __dec_obj119=come_value_181->c_value;
                come_value_181->c_value=(char*)come_increment_ref_count(c_value_183);
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1397 "21obj.c"
                __dec_obj120=come_value_181->type;
                come_value_181->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(left_type_180))));
                come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1398 "21obj.c"
                come_value_181->type->mHeap=(_Bool)1;
                # 1399 "21obj.c"
                come_value_181->type->mClone=(_Bool)1;
                # 1400 "21obj.c"
                come_value_181->var=((void*)0);
                # 1402 "21obj.c"
                __dec_obj121=come_value_181->c_value;
                come_value_181->c_value=(char*)come_increment_ref_count(((char*)(right_value336=append_object_to_right_values(come_value_181->c_value,(struct sType*)come_increment_ref_count(left_type_180),info))));
                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1404 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
                come_call_finalizer2(CVALUE_finalize,come_value_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_183 = come_decrement_ref_count2(c_value_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1407 "21obj.c"
    __result246__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result246__;
    come_call_finalizer2(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value337;
struct sNode* __dec_obj122;
void* right_value338;
char* __dec_obj123;
struct sDupeNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
right_value338 = (void*)0;
    # 1418 "21obj.c"
    __dec_obj122=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=sNode_clone(node))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1420 "21obj.c"
    self->sline=info->sline;
    # 1421 "21obj.c"
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string(info->sname))));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1423 "21obj.c"
    __result247__ = __result_obj__ = self;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result247__;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1428 "21obj.c"
    __result248__ = self->sline;
    return __result248__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value339;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
    # 1433 "21obj.c"
    __result249__ = __result_obj__ = ((char*)(right_value339=__builtin_string(self->sname)));
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result249__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1438 "21obj.c"
    __result250__ = (_Bool)0;
    return __result250__;
}

char* sDupeNode_kind(){
void* __result_obj__;
void* right_value340;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value340 = (void*)0;
    # 1443 "21obj.c"
    __result251__ = __result_obj__ = ((char*)(right_value340=__builtin_string("sDupeNode")));
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result251__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_184;
_Bool _if_conditional237;
_Bool __result252__;
void* right_value341;
struct CVALUE* left_value_185;
void* right_value342;
struct sType* left_type_186;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value343;
struct CVALUE* come_value_187;
void* right_value344;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_188;
char* c_value_189;
char* __dec_obj124;
void* right_value345;
struct sType* __dec_obj125;
void* right_value346;
char* __dec_obj126;
_Bool __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_184, 0, sizeof(struct sNode*));
right_value341 = (void*)0;
memset(&left_value_185, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
memset(&left_type_186, 0, sizeof(struct sType*));
right_value343 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value344 = (void*)0;
memset(&result_type_188, 0, sizeof(struct sType*));
memset(&c_value_189, 0, sizeof(char*));
memset(&result_type_188, 0, sizeof(struct sType*));
memset(&c_value_189, 0, sizeof(char*));
right_value345 = (void*)0;
right_value346 = (void*)0;
    # 1448 "21obj.c"
    node_184=self->node;
    # 1454 "21obj.c"
    # 1450 "21obj.c"
    if(_if_conditional237=!node_compile(node_184,info),    _if_conditional237) {
        # 1451 "21obj.c"
        __result252__ = (_Bool)0;
        return __result252__;
    }
    # 1454 "21obj.c"
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1455 "21obj.c"
    dec_stack_ptr(1,info);
    # 1457 "21obj.c"
    left_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(left_value_185->type))));
    come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1479 "21obj.c"
    # 1459 "21obj.c"
    if(_if_conditional238=left_type_186->mPointerNum==0,    _if_conditional238) {
        # 1460 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_185));
    }
    else {
        # 1479 "21obj.c"
        # 1462 "21obj.c"
        if(_if_conditional239=left_type_186->mPointerNum>0&&left_type_186->mHeap==(_Bool)0,        _if_conditional239) {
            # 1463 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_185));
        }
        else {
            # 1479 "21obj.c"
            # 1465 "21obj.c"
            if(_if_conditional240=left_type_186->mPointerNum>0,            _if_conditional240) {
                # 1466 "21obj.c"
                come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value343=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1466, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1468 "21obj.c"
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value344=clone_object(left_type_186,left_value_185->c_value,info)));
                result_type_188=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_189=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1469 "21obj.c"
                __dec_obj124=come_value_187->c_value;
                come_value_187->c_value=(char*)come_increment_ref_count(c_value_189);
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1470 "21obj.c"
                __dec_obj125=come_value_187->type;
                come_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(left_type_186))));
                come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1471 "21obj.c"
                come_value_187->type->mHeap=(_Bool)1;
                # 1472 "21obj.c"
                come_value_187->var=((void*)0);
                # 1474 "21obj.c"
                __dec_obj126=come_value_187->c_value;
                come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value346=append_object_to_right_values(come_value_187->c_value,(struct sType*)come_increment_ref_count(left_type_186),info))));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1476 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
                come_call_finalizer2(CVALUE_finalize,come_value_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_189 = come_decrement_ref_count2(c_value_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1479 "21obj.c"
    __result253__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result253__;
    come_call_finalizer2(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value347;
struct sNode* __dec_obj127;
void* right_value348;
char* __dec_obj128;
struct sDummyHeapNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
right_value348 = (void*)0;
    # 1490 "21obj.c"
    __dec_obj127=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=sNode_clone(node))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1492 "21obj.c"
    self->sline=info->sline;
    # 1493 "21obj.c"
    __dec_obj128=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value348=__builtin_string(info->sname))));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1495 "21obj.c"
    __result254__ = __result_obj__ = self;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result254__;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1500 "21obj.c"
    __result255__ = self->sline;
    return __result255__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value349;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
    # 1505 "21obj.c"
    __result256__ = __result_obj__ = ((char*)(right_value349=__builtin_string(self->sname)));
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result256__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __result257__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1510 "21obj.c"
    __result257__ = (_Bool)0;
    return __result257__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
void* right_value350;
char* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
    # 1515 "21obj.c"
    __result258__ = __result_obj__ = ((char*)(right_value350=__builtin_string("sDummyHeapNode")));
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result258__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_190;
_Bool _if_conditional243;
_Bool __result259__;
void* right_value351;
struct CVALUE* come_value_191;
_Bool __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_190, 0, sizeof(struct sNode*));
right_value351 = (void*)0;
memset(&come_value_191, 0, sizeof(struct CVALUE*));
    # 1520 "21obj.c"
    node_190=self->node;
    # 1526 "21obj.c"
    # 1522 "21obj.c"
    if(_if_conditional243=!node_compile(node_190,info),    _if_conditional243) {
        # 1523 "21obj.c"
        __result259__ = (_Bool)0;
        return __result259__;
    }
    # 1526 "21obj.c"
    come_value_191=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value351=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1527 "21obj.c"
    dec_stack_ptr(1,info);
    # 1529 "21obj.c"
    come_value_191->type->mHeap=(_Bool)1;
    # 1531 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
    # 1533 "21obj.c"
    __result260__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result260__;
    come_call_finalizer2(CVALUE_finalize,come_value_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value352;
struct sNode* __dec_obj129;
void* right_value353;
char* __dec_obj130;
struct sGCIncNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
right_value353 = (void*)0;
    # 1544 "21obj.c"
    __dec_obj129=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=sNode_clone(node))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1546 "21obj.c"
    self->sline=info->sline;
    # 1547 "21obj.c"
    __dec_obj130=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string(info->sname))));
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1549 "21obj.c"
    __result261__ = __result_obj__ = self;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result261__;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1554 "21obj.c"
    __result262__ = self->sline;
    return __result262__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value354;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
    # 1559 "21obj.c"
    __result263__ = __result_obj__ = ((char*)(right_value354=__builtin_string(self->sname)));
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result263__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __result264__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1564 "21obj.c"
    __result264__ = (_Bool)0;
    return __result264__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
void* right_value355;
char* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
    # 1569 "21obj.c"
    __result265__ = __result_obj__ = ((char*)(right_value355=__builtin_string("sGCIncNode")));
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result265__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_192;
_Bool _if_conditional246;
_Bool __result266__;
void* right_value356;
struct CVALUE* come_value_193;
struct sType* type_194;
_Bool _if_conditional247;
void* right_value357;
char* type_name_195;
void* right_value358;
char* __dec_obj131;
_Bool __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_192, 0, sizeof(struct sNode*));
right_value356 = (void*)0;
memset(&come_value_193, 0, sizeof(struct CVALUE*));
memset(&type_194, 0, sizeof(struct sType*));
right_value357 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
right_value358 = (void*)0;
    # 1574 "21obj.c"
    node_192=self->node;
    # 1580 "21obj.c"
    # 1576 "21obj.c"
    if(_if_conditional246=!node_compile(node_192,info),    _if_conditional246) {
        # 1577 "21obj.c"
        __result266__ = (_Bool)0;
        return __result266__;
    }
    # 1580 "21obj.c"
    come_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value356=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1581 "21obj.c"
    dec_stack_ptr(1,info);
    # 1583 "21obj.c"
    type_194=come_value_193->type;
    # 1590 "21obj.c"
    # 1585 "21obj.c"
    if(come_value_193->type->mHeap) {
        # 1586 "21obj.c"
        type_name_195=(char*)come_increment_ref_count(((char*)(right_value357=make_type_name_string(type_194,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1587 "21obj.c"
        __dec_obj131=come_value_193->c_value;
        come_value_193->c_value=(char*)come_increment_ref_count(((char*)(right_value358=increment_ref_count_object(come_value_193->type,come_value_193->c_value,info))));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1590 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
    # 1592 "21obj.c"
    __result267__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result267__;
    come_call_finalizer2(CVALUE_finalize,come_value_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value359;
struct sNode* __dec_obj132;
void* right_value360;
char* __dec_obj133;
struct sGCDecNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
right_value360 = (void*)0;
    # 1603 "21obj.c"
    __dec_obj132=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(node))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1605 "21obj.c"
    self->sline=info->sline;
    # 1606 "21obj.c"
    __dec_obj133=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(info->sname))));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1608 "21obj.c"
    __result268__ = __result_obj__ = self;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result268__;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1613 "21obj.c"
    __result269__ = self->sline;
    return __result269__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value361;
char* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
    # 1618 "21obj.c"
    __result270__ = __result_obj__ = ((char*)(right_value361=__builtin_string(self->sname)));
    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result270__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __result271__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1623 "21obj.c"
    __result271__ = (_Bool)0;
    return __result271__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
void* right_value362;
char* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
    # 1628 "21obj.c"
    __result272__ = __result_obj__ = ((char*)(right_value362=__builtin_string("sGCDecNode")));
    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result272__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_196;
_Bool _if_conditional250;
_Bool __result273__;
void* right_value363;
struct CVALUE* come_value_197;
struct sType* type_198;
_Bool __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_196, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
memset(&come_value_197, 0, sizeof(struct CVALUE*));
memset(&type_198, 0, sizeof(struct sType*));
    # 1633 "21obj.c"
    node_196=self->node;
    # 1639 "21obj.c"
    # 1635 "21obj.c"
    if(_if_conditional250=!node_compile(node_196,info),    _if_conditional250) {
        # 1636 "21obj.c"
        __result273__ = (_Bool)0;
        return __result273__;
    }
    # 1639 "21obj.c"
    come_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value363=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1640 "21obj.c"
    dec_stack_ptr(1,info);
    # 1642 "21obj.c"
    type_198=come_value_197->type;
    # 1644 "21obj.c"
    decrement_ref_count_object(type_198,come_value_197->c_value,info,(_Bool)0);
    # 1646 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_197));
    # 1648 "21obj.c"
    __result274__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result274__;
    come_call_finalizer2(CVALUE_finalize,come_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value364;
struct sType* __dec_obj134;
void* right_value365;
char* __dec_obj135;
struct sIsHeap* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
right_value365 = (void*)0;
    # 1659 "21obj.c"
    __dec_obj134=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1661 "21obj.c"
    self->sline=info->sline;
    # 1662 "21obj.c"
    __dec_obj135=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string(info->sname))));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1664 "21obj.c"
    __result275__ = __result_obj__ = self;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result275__;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1669 "21obj.c"
    __result276__ = self->sline;
    return __result276__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
void* right_value366;
char* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
    # 1674 "21obj.c"
    __result277__ = __result_obj__ = ((char*)(right_value366=__builtin_string(self->sname)));
    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result277__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __result278__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1679 "21obj.c"
    __result278__ = (_Bool)0;
    return __result278__;
}

char* sIsHeap_kind(){
void* __result_obj__;
void* right_value367;
char* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
    # 1684 "21obj.c"
    __result279__ = __result_obj__ = ((char*)(right_value367=__builtin_string("sIsHeap")));
    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result279__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_199;
_Bool _if_conditional253;
void* right_value368;
struct CVALUE* come_value_200;
void* right_value369;
char* __dec_obj136;
void* right_value370;
void* right_value371;
struct sType* __dec_obj137;
void* right_value372;
struct CVALUE* come_value_201;
void* right_value373;
char* __dec_obj138;
void* right_value374;
void* right_value375;
struct sType* __dec_obj139;
_Bool __result280__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_199, 0, sizeof(struct sType*));
right_value368 = (void*)0;
memset(&come_value_200, 0, sizeof(struct CVALUE*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&come_value_201, 0, sizeof(struct CVALUE*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
    # 1689 "21obj.c"
    node_199=self->type;
    # 1714 "21obj.c"
    # 1691 "21obj.c"
    if(self->type->mHeap) {
        # 1692 "21obj.c"
        come_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value368=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1692, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1694 "21obj.c"
        __dec_obj136=come_value_200->c_value;
        come_value_200->c_value=(char*)come_increment_ref_count(((char*)(right_value369=xsprintf("1"))));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1695 "21obj.c"
        __dec_obj137=come_value_200->type;
        come_value_200->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value370=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1695, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1696 "21obj.c"
        come_value_200->var=((void*)0);
        # 1698 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_200));
        # 1700 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_200->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1703 "21obj.c"
        come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value372=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1703, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1705 "21obj.c"
        __dec_obj138=come_value_201->c_value;
        come_value_201->c_value=(char*)come_increment_ref_count(((char*)(right_value373=xsprintf("0"))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1706 "21obj.c"
        __dec_obj139=come_value_201->type;
        come_value_201->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value375=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value374=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1706, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1707 "21obj.c"
        come_value_201->var=((void*)0);
        # 1709 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_201));
        # 1711 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_201->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1714 "21obj.c"
    __result280__ = (_Bool)1;
    return __result280__;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value376;
struct sType* __dec_obj140;
void* right_value377;
char* __dec_obj141;
struct sIsPointer* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
right_value377 = (void*)0;
    # 1725 "21obj.c"
    __dec_obj140=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1727 "21obj.c"
    self->sline=info->sline;
    # 1728 "21obj.c"
    __dec_obj141=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value377=__builtin_string(info->sname))));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1730 "21obj.c"
    __result281__ = __result_obj__ = self;
    come_call_finalizer2(sIsPointer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result281__;
    come_call_finalizer2(sIsPointer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsPointer_sline(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1735 "21obj.c"
    __result282__ = self->sline;
    return __result282__;
}

char* sIsPointer_sname(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
void* right_value378;
char* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
    # 1740 "21obj.c"
    __result283__ = __result_obj__ = ((char*)(right_value378=__builtin_string(self->sname)));
    right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result283__;
}

_Bool sIsPointer_terminated(){
void* __result_obj__;
_Bool __result284__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1745 "21obj.c"
    __result284__ = (_Bool)0;
    return __result284__;
}

char* sIsPointer_kind(){
void* __result_obj__;
void* right_value379;
char* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
right_value379 = (void*)0;
    # 1750 "21obj.c"
    __result285__ = __result_obj__ = ((char*)(right_value379=__builtin_string("sIsPointer")));
    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result285__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_202;
_Bool _if_conditional256;
void* right_value380;
struct CVALUE* come_value_203;
void* right_value381;
char* __dec_obj142;
void* right_value382;
void* right_value383;
struct sType* __dec_obj143;
void* right_value384;
struct CVALUE* come_value_204;
void* right_value385;
char* __dec_obj144;
void* right_value386;
void* right_value387;
struct sType* __dec_obj145;
_Bool __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_202, 0, sizeof(struct sType*));
right_value380 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
    # 1755 "21obj.c"
    node_202=self->type;
    # 1780 "21obj.c"
    # 1757 "21obj.c"
    if(_if_conditional256=self->type->mPointerNum>0,    _if_conditional256) {
        # 1758 "21obj.c"
        come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value380=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1758, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1760 "21obj.c"
        __dec_obj142=come_value_203->c_value;
        come_value_203->c_value=(char*)come_increment_ref_count(((char*)(right_value381=xsprintf("1"))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1761 "21obj.c"
        __dec_obj143=come_value_203->type;
        come_value_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1761, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1762 "21obj.c"
        come_value_203->var=((void*)0);
        # 1764 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
        # 1766 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_203->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1769 "21obj.c"
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value384=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1769, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1771 "21obj.c"
        __dec_obj144=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(((char*)(right_value385=xsprintf("0"))));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1772 "21obj.c"
        __dec_obj145=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value386=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1772, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1773 "21obj.c"
        come_value_204->var=((void*)0);
        # 1775 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        # 1777 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1780 "21obj.c"
    __result286__ = (_Bool)1;
    return __result286__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional257;
void* right_value388;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_205;
char* name_206;
_Bool err_207;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value389;
struct sType* inf_type_208;
void* right_value390;
struct sNode* node_209;
void* right_value391;
void* right_value392;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value397;
struct sNode* __result289__;
void* right_value398;
void* right_value399;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value403;
struct sNode* obj_212;
void* right_value404;
char* fun_name_213;
void* right_value405;
void* right_value406;
struct sNode* __result292__;
void* right_value407;
void* right_value408;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value412;
struct sNode* __result295__;
_Bool _if_conditional283;
void* right_value413;
void* right_value414;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value417;
struct sNode* __result298__;
_Bool _if_conditional288;
void* right_value418;
void* right_value419;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value422;
struct sNode* __result301__;
_Bool _if_conditional293;
void* right_value423;
struct sNode* node_217;
void* right_value424;
void* right_value425;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value429;
struct sNode* __result304__;
_Bool _if_conditional300;
void* right_value430;
struct sNode* node_219;
void* right_value431;
void* right_value432;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value436;
struct sNode* __result307__;
_Bool _if_conditional307;
void* right_value437;
struct sNode* node_221;
void* right_value438;
void* right_value439;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value443;
struct sNode* __result310__;
_Bool _if_conditional314;
void* right_value444;
struct sNode* node_223;
void* right_value445;
void* right_value446;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value450;
struct sNode* __result313__;
_Bool _if_conditional321;
void* right_value451;
struct sNode* node_225;
void* right_value452;
void* right_value453;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value457;
struct sNode* __result316__;
_Bool _if_conditional328;
void* right_value458;
struct sNode* node_227;
void* right_value459;
void* right_value460;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value464;
struct sNode* __result319__;
_Bool _if_conditional335;
void* right_value465;
struct sNode* node_229;
void* right_value466;
void* right_value467;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value471;
struct sNode* __result322__;
_Bool _if_conditional342;
void* right_value472;
struct sNode* node_231;
void* right_value473;
void* right_value474;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value478;
struct sNode* __result325__;
_Bool _if_conditional349;
void* right_value479;
struct sNode* node_233;
void* right_value480;
void* right_value481;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value485;
struct sNode* __result328__;
_Bool _if_conditional356;
void* right_value486;
struct sNode* node_235;
void* right_value487;
void* right_value488;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value492;
struct sNode* __result331__;
_Bool _if_conditional363;
void* right_value493;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_237;
char* param_name_238;
_Bool err_239;
_Bool _if_conditional364;
void* right_value494;
struct sType* type2_240;
void* right_value495;
void* right_value496;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value500;
struct sNode* __result334__;
_Bool _if_conditional371;
void* right_value501;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_242;
char* param_name_243;
_Bool err_244;
_Bool _if_conditional372;
void* right_value502;
struct sType* type2_245;
void* right_value503;
void* right_value504;
struct sNode* _inf_value20;
struct sIsPointer* _inf_obj_value20;
void* right_value508;
struct sNode* __result337__;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value509;
void* right_value510;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value513;
struct sNode* __result340__;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value514;
struct sNode* node_248;
struct sNode* __result341__;
void* right_value515;
void* right_value516;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value519;
struct sNode* __result344__;
_Bool _if_conditional391;
void* right_value520;
void* right_value521;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value524;
struct sNode* __result347__;
_Bool _if_conditional396;
void* right_value525;
void* right_value526;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value529;
struct sNode* __result350__;
_Bool _if_conditional401;
void* right_value530;
void* right_value531;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value534;
struct sNode* __result353__;
_Bool _if_conditional406;
void* right_value535;
void* right_value536;
struct sNode* _inf_value26;
struct sNullNodeX* _inf_obj_value26;
void* right_value539;
struct sNode* __result356__;
_Bool _if_conditional411;
_Bool is_type_name_flag_254;
char* p_255;
int sline_256;
_Bool _if_conditional412;
void* right_value540;
char* word_257;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value541;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_258;
char* name_259;
_Bool err_260;
_Bool _if_conditional415;
void* right_value542;
void* right_value543;
struct sNode* _inf_value27;
struct sSizeOfNode* _inf_obj_value27;
void* right_value547;
struct sNode* __result359__;
void* right_value548;
struct sNode* exp_262;
void* right_value549;
void* right_value550;
struct sNode* _inf_value28;
struct sSizeOfExpNode* _inf_obj_value28;
void* right_value554;
struct sNode* __result362__;
_Bool _if_conditional428;
_Bool is_type_name_flag_264;
char* p_265;
int sline_266;
_Bool _if_conditional429;
void* right_value555;
char* word_267;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value556;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_268;
char* name_269;
_Bool err_270;
_Bool _if_conditional432;
void* right_value557;
void* right_value558;
struct sNode* _inf_value29;
struct sTypeOfNode* _inf_obj_value29;
void* right_value562;
struct sNode* __result365__;
void* right_value563;
struct sNode* exp_272;
void* right_value564;
void* right_value565;
struct sNode* _inf_value30;
struct sTypeOfExpNode* _inf_obj_value30;
void* right_value569;
struct sNode* __result368__;
_Bool _if_conditional445;
_Bool is_type_name_flag_274;
char* p_275;
int sline_276;
_Bool _if_conditional446;
void* right_value570;
char* word_277;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value571;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_278;
char* name_279;
_Bool err_280;
_Bool _if_conditional449;
void* right_value572;
void* right_value573;
struct sNode* _inf_value31;
struct sAlignOfNode* _inf_obj_value31;
void* right_value577;
struct sNode* __result371__;
void* right_value578;
struct sNode* exp_282;
void* right_value579;
void* right_value580;
struct sNode* _inf_value32;
struct sAlignOfExpNode* _inf_obj_value32;
void* right_value584;
struct sNode* __result374__;
_Bool _if_conditional462;
_Bool is_type_name_flag_284;
char* p_285;
int sline_286;
_Bool _if_conditional463;
void* right_value585;
char* word_287;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value586;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_288;
char* name_289;
_Bool err_290;
_Bool _if_conditional466;
void* right_value587;
void* right_value588;
struct sNode* _inf_value33;
struct sAlignOfNode2* _inf_obj_value33;
void* right_value592;
struct sNode* __result377__;
void* right_value593;
struct sNode* exp_292;
void* right_value594;
void* right_value595;
struct sNode* _inf_value34;
struct sAlignOfExpNode2* _inf_obj_value34;
void* right_value599;
struct sNode* __result380__;
_Bool _if_conditional479;
_Bool is_type_name_flag_294;
char* p_295;
int sline_296;
_Bool _if_conditional480;
void* right_value600;
char* word_297;
_Bool _if_conditional481;
_Bool _if_conditional482;
void* right_value601;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_298;
char* name_299;
_Bool err_300;
_Bool _if_conditional483;
void* right_value602;
void* right_value603;
struct sNode* _inf_value35;
struct sAlignAsNode* _inf_obj_value35;
void* right_value607;
struct sNode* __result383__;
void* right_value608;
struct sNode* exp_302;
void* right_value609;
void* right_value610;
struct sNode* _inf_value36;
struct sAlignAsExpNode* _inf_obj_value36;
void* right_value614;
struct sNode* __result386__;
void* right_value615;
struct sNode* __result387__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
right_value389 = (void*)0;
memset(&inf_type_208, 0, sizeof(struct sType*));
right_value390 = (void*)0;
memset(&node_209, 0, sizeof(struct sNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value403 = (void*)0;
memset(&obj_212, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
memset(&fun_name_213, 0, sizeof(char*));
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&node_217, 0, sizeof(struct sNode*));
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&node_219, 0, sizeof(struct sNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
memset(&node_221, 0, sizeof(struct sNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&node_223, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&node_225, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&node_227, 0, sizeof(struct sNode*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&node_229, 0, sizeof(struct sNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
memset(&node_231, 0, sizeof(struct sNode*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&node_233, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&param_type_237, 0, sizeof(struct sType*));
memset(&param_name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
memset(&param_type_237, 0, sizeof(struct sType*));
memset(&param_name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
right_value494 = (void*)0;
memset(&type2_240, 0, sizeof(struct sType*));
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&param_type_242, 0, sizeof(struct sType*));
memset(&param_name_243, 0, sizeof(char*));
memset(&err_244, 0, sizeof(_Bool));
memset(&param_type_242, 0, sizeof(struct sType*));
memset(&param_name_243, 0, sizeof(char*));
memset(&err_244, 0, sizeof(_Bool));
right_value502 = (void*)0;
memset(&type2_245, 0, sizeof(struct sType*));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value539 = (void*)0;
memset(&is_type_name_flag_254, 0, sizeof(_Bool));
memset(&p_255, 0, sizeof(char*));
memset(&sline_256, 0, sizeof(int));
right_value540 = (void*)0;
memset(&word_257, 0, sizeof(char*));
right_value541 = (void*)0;
memset(&type_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
memset(&type_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
memset(&exp_262, 0, sizeof(struct sNode*));
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value554 = (void*)0;
memset(&is_type_name_flag_264, 0, sizeof(_Bool));
memset(&p_265, 0, sizeof(char*));
memset(&sline_266, 0, sizeof(int));
right_value555 = (void*)0;
memset(&word_267, 0, sizeof(char*));
right_value556 = (void*)0;
memset(&type_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
memset(&type_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&exp_272, 0, sizeof(struct sNode*));
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value569 = (void*)0;
memset(&is_type_name_flag_274, 0, sizeof(_Bool));
memset(&p_275, 0, sizeof(char*));
memset(&sline_276, 0, sizeof(int));
right_value570 = (void*)0;
memset(&word_277, 0, sizeof(char*));
right_value571 = (void*)0;
memset(&type_278, 0, sizeof(struct sType*));
memset(&name_279, 0, sizeof(char*));
memset(&err_280, 0, sizeof(_Bool));
memset(&type_278, 0, sizeof(struct sType*));
memset(&name_279, 0, sizeof(char*));
memset(&err_280, 0, sizeof(_Bool));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
memset(&exp_282, 0, sizeof(struct sNode*));
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value584 = (void*)0;
memset(&is_type_name_flag_284, 0, sizeof(_Bool));
memset(&p_285, 0, sizeof(char*));
memset(&sline_286, 0, sizeof(int));
right_value585 = (void*)0;
memset(&word_287, 0, sizeof(char*));
right_value586 = (void*)0;
memset(&type_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
memset(&type_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
right_value587 = (void*)0;
right_value588 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&exp_292, 0, sizeof(struct sNode*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value599 = (void*)0;
memset(&is_type_name_flag_294, 0, sizeof(_Bool));
memset(&p_295, 0, sizeof(char*));
memset(&sline_296, 0, sizeof(int));
right_value600 = (void*)0;
memset(&word_297, 0, sizeof(char*));
right_value601 = (void*)0;
memset(&type_298, 0, sizeof(struct sType*));
memset(&name_299, 0, sizeof(char*));
memset(&err_300, 0, sizeof(_Bool));
memset(&type_298, 0, sizeof(struct sType*));
memset(&name_299, 0, sizeof(char*));
memset(&err_300, 0, sizeof(_Bool));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&exp_302, 0, sizeof(struct sNode*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
    # 2183 "21obj.c"
    # 1785 "21obj.c"
    if(_if_conditional257=charp_operator_equals(buf,"new"),    _if_conditional257) {
        # 1786 "21obj.c"
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value388=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_205=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_206=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_207=multiple_assign_var4->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1792 "21obj.c"
        # 1787 "21obj.c"
        if(_if_conditional260=!err_207,        _if_conditional260) {
            # 1788 "21obj.c"
            err_msg(info,"parse_type failed");
            # 1789 "21obj.c"
            exit(2);
        }
        # 1815 "21obj.c"
        # 1792 "21obj.c"
        if(_if_conditional261=*info->p==40,        _if_conditional261) {
            # 1811 "21obj.c"
            # 1793 "21obj.c"
            if(type_205->mClass->mProtocol) {
                # 1794 "21obj.c"
                info->p++;
                # 1795 "21obj.c"
                skip_spaces_and_lf(info);
                # 1797 "21obj.c"
                inf_type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(type_205))));
                come_call_finalizer2(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1799 "21obj.c"
                node_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=expression_v13(info))));
                if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1801 "21obj.c"
                expected_next_character(41,info);
                # 1803 "21obj.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1803, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value392=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value391=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1803, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_209),(struct sType*)come_increment_ref_count(inf_type_208),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result289__ = __result_obj__ = ((struct sNode*)(right_value397=_inf_value4));
                come_call_finalizer2(sType_finalize,inf_type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sImplementsNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sImplementsNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result289__;
                come_call_finalizer2(sType_finalize,inf_type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1806 "21obj.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1806, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value399=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value398=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1806, "sNewNode")))),(struct sType*)come_increment_ref_count(type_205),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=_inf_value5)));
                come_call_finalizer2(sNewNode_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNewNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1807 "21obj.c"
                fun_name_213=(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string("initialize"))));
                right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1809 "21obj.c"
                __result292__ = __result_obj__ = ((struct sNode*)(right_value406=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(obj_212)))),(char*)come_increment_ref_count(fun_name_213),info)));
                if(obj_212) { obj_212 = come_decrement_ref_count2(obj_212, ((struct sNode*)obj_212)->finalize, ((struct sNode*)obj_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_213 = come_decrement_ref_count2(fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result292__;
                if(obj_212) { obj_212 = come_decrement_ref_count2(obj_212, ((struct sNode*)obj_212)->finalize, ((struct sNode*)obj_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_213 = come_decrement_ref_count2(fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 1813 "21obj.c"
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1813, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value408=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value407=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1813, "sNewNode")))),(struct sType*)come_increment_ref_count(type_205),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result295__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value6));
            come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sNewNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNewNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result295__;
        }
        come_call_finalizer2(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 2183 "21obj.c"
        # 1816 "21obj.c"
        if(_if_conditional283=charp_operator_equals(buf,"true"),        _if_conditional283) {
            # 1817 "21obj.c"
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1817, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value414=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value413=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1817, "sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result298__ = __result_obj__ = ((struct sNode*)(right_value417=_inf_value7));
            come_call_finalizer2(sTrueNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTrueNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result298__;
        }
        else {
            # 2183 "21obj.c"
            # 1819 "21obj.c"
            if(_if_conditional288=charp_operator_equals(buf,"false"),            _if_conditional288) {
                # 1820 "21obj.c"
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1820, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value419=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value418=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1820, "sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result301__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value8));
                come_call_finalizer2(sFalseNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFalseNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result301__;
            }
            else {
                # 2183 "21obj.c"
                # 1822 "21obj.c"
                if(_if_conditional293=charp_operator_equals(buf,"delete"),                _if_conditional293) {
                    # 1823 "21obj.c"
                    node_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=expression_v13(info))));
                    if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1825 "21obj.c"
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1825, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value425=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value424=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1825, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_217),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result304__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value9));
                    if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sDeleteNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDeleteNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result304__;
                    if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2183 "21obj.c"
                    # 1827 "21obj.c"
                    if(_if_conditional300=charp_operator_equals(buf,"force_delete"),                    _if_conditional300) {
                        # 1828 "21obj.c"
                        node_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=expression_v13(info))));
                        if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1830 "21obj.c"
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1830, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value432=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value431=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1830, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_219),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result307__ = __result_obj__ = ((struct sNode*)(right_value436=_inf_value10));
                        if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result307__;
                        if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2183 "21obj.c"
                        # 1833 "21obj.c"
                        if(_if_conditional307=charp_operator_equals(buf,"borrow"),                        _if_conditional307) {
                            # 1834 "21obj.c"
                            node_221=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=expression_v13(info))));
                            if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1836 "21obj.c"
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1836, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value439=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value438=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1836, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_221),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result310__ = __result_obj__ = ((struct sNode*)(right_value443=_inf_value11));
                            if(node_221) { node_221 = come_decrement_ref_count2(node_221, ((struct sNode*)node_221)->finalize, ((struct sNode*)node_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sBorrowNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sBorrowNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result310__;
                            if(node_221) { node_221 = come_decrement_ref_count2(node_221, ((struct sNode*)node_221)->finalize, ((struct sNode*)node_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2183 "21obj.c"
                            # 1838 "21obj.c"
                            if(_if_conditional314=charp_operator_equals(buf,"delegate"),                            _if_conditional314) {
                                # 1839 "21obj.c"
                                node_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=expression_v13(info))));
                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1841 "21obj.c"
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1841, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value446=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value445=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1841, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_223),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result313__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value12));
                                if(node_223) { node_223 = come_decrement_ref_count2(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sDelegateNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sDelegateNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result313__;
                                if(node_223) { node_223 = come_decrement_ref_count2(node_223, ((struct sNode*)node_223)->finalize, ((struct sNode*)node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2183 "21obj.c"
                                # 1843 "21obj.c"
                                if(_if_conditional321=charp_operator_equals(buf,"share"),                                _if_conditional321) {
                                    # 1844 "21obj.c"
                                    node_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=expression_v13(info))));
                                    if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1846 "21obj.c"
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1846, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value453=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value452=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1846, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_225),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result316__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value13));
                                    if(node_225) { node_225 = come_decrement_ref_count2(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sShareNode_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sShareNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result316__;
                                    if(node_225) { node_225 = come_decrement_ref_count2(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2183 "21obj.c"
                                    # 1848 "21obj.c"
                                    if(_if_conditional328=charp_operator_equals(buf,"clone"),                                    _if_conditional328) {
                                        # 1849 "21obj.c"
                                        node_227=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=expression_v13(info))));
                                        if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1851 "21obj.c"
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1851, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value460=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value459=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1851, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_227),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result319__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value14));
                                        if(node_227) { node_227 = come_decrement_ref_count2(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sCloneNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sCloneNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result319__;
                                        if(node_227) { node_227 = come_decrement_ref_count2(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2183 "21obj.c"
                                        # 1853 "21obj.c"
                                        if(_if_conditional335=charp_operator_equals(buf,"dupe"),                                        _if_conditional335) {
                                            # 1854 "21obj.c"
                                            node_229=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=expression_v13(info))));
                                            if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 1856 "21obj.c"
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1856, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value467=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value466=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1856, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_229),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result322__ = __result_obj__ = ((struct sNode*)(right_value471=_inf_value15));
                                            if(node_229) { node_229 = come_decrement_ref_count2(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sDupeNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sDupeNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result322__;
                                            if(node_229) { node_229 = come_decrement_ref_count2(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 2183 "21obj.c"
                                            # 1858 "21obj.c"
                                            if(_if_conditional342=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional342) {
                                                # 1859 "21obj.c"
                                                node_231=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=expression_v13(info))));
                                                if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1861 "21obj.c"
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1861, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value474=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value473=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1861, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_231),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result325__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value16));
                                                if(node_231) { node_231 = come_decrement_ref_count2(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result325__;
                                                if(node_231) { node_231 = come_decrement_ref_count2(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 2183 "21obj.c"
                                                # 1863 "21obj.c"
                                                if(_if_conditional349=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional349) {
                                                    # 1864 "21obj.c"
                                                    info->p++;
                                                    # 1865 "21obj.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1867 "21obj.c"
                                                    node_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=expression_v13(info))));
                                                    if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1869 "21obj.c"
                                                    expected_next_character(41,info);
                                                    # 1871 "21obj.c"
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1871, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value481=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value480=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1871, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_233),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result328__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value17));
                                                    if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result328__;
                                                    if(node_233) { node_233 = come_decrement_ref_count2(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 2183 "21obj.c"
                                                    # 1873 "21obj.c"
                                                    if(_if_conditional356=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional356) {
                                                        # 1874 "21obj.c"
                                                        info->p++;
                                                        # 1875 "21obj.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1877 "21obj.c"
                                                        node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=expression_v13(info))));
                                                        if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1879 "21obj.c"
                                                        expected_next_character(41,info);
                                                        # 1881 "21obj.c"
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1881, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value488=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value487=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1881, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_235),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result331__ = __result_obj__ = ((struct sNode*)(right_value492=_inf_value18));
                                                        if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result331__;
                                                        if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 2183 "21obj.c"
                                                        # 1883 "21obj.c"
                                                        if(_if_conditional363=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional363) {
                                                            # 1884 "21obj.c"
                                                            info->p++;
                                                            # 1885 "21obj.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1887 "21obj.c"
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value493=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_237=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_238=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_239=multiple_assign_var5->v3;
                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 1893 "21obj.c"
                                                            # 1888 "21obj.c"
                                                            if(_if_conditional364=!err_239,                                                            _if_conditional364) {
                                                                # 1889 "21obj.c"
                                                                err_msg(info,"parse_type failed");
                                                                # 1890 "21obj.c"
                                                                exit(2);
                                                            }
                                                            # 1893 "21obj.c"
                                                            type2_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value494=solve_generics(param_type_237,info->generics_type,info))));
                                                            come_call_finalizer2(sType_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 1895 "21obj.c"
                                                            expected_next_character(41,info);
                                                            # 1897 "21obj.c"
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1897, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value496=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value495=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1897, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_240),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result334__ = __result_obj__ = ((struct sNode*)(right_value500=_inf_value19));
                                                            come_call_finalizer2(sType_finalize,param_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_238 = come_decrement_ref_count2(param_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result334__;
                                                            come_call_finalizer2(sType_finalize,param_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_238 = come_decrement_ref_count2(param_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            # 2183 "21obj.c"
                                                            # 1899 "21obj.c"
                                                            if(_if_conditional371=charp_operator_equals(buf,"ispointer")&&*info->p==40,                                                            _if_conditional371) {
                                                                # 1900 "21obj.c"
                                                                info->p++;
                                                                # 1901 "21obj.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1903 "21obj.c"
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value501=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_242=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_243=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_244=multiple_assign_var6->v3;
                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1909 "21obj.c"
                                                                # 1904 "21obj.c"
                                                                if(_if_conditional372=!err_244,                                                                _if_conditional372) {
                                                                    # 1905 "21obj.c"
                                                                    err_msg(info,"parse_type failed");
                                                                    # 1906 "21obj.c"
                                                                    exit(2);
                                                                }
                                                                # 1909 "21obj.c"
                                                                type2_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value502=solve_generics(param_type_242,info->generics_type,info))));
                                                                come_call_finalizer2(sType_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 1911 "21obj.c"
                                                                expected_next_character(41,info);
                                                                # 1913 "21obj.c"
                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1913, "struct sNode");
                                                                _inf_obj_value20=come_increment_ref_count(((struct sIsPointer*)(right_value504=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value503=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1913, "sIsPointer")))),(struct sType*)come_increment_ref_count(type2_245),info))));
                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                _inf_value20->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value20->clone=(void*)sIsPointer_clone;
                                                                _inf_value20->compile=(void*)sIsPointer_compile;
                                                                _inf_value20->sline=(void*)sIsPointer_sline;
                                                                _inf_value20->sname=(void*)sIsPointer_sname;
                                                                _inf_value20->terminated=(void*)sIsPointer_terminated;
                                                                _inf_value20->kind=(void*)sIsPointer_kind;
                                                                __result337__ = __result_obj__ = ((struct sNode*)(right_value508=_inf_value20));
                                                                come_call_finalizer2(sType_finalize,param_type_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                param_name_243 = come_decrement_ref_count2(param_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,type2_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sIsPointer_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sIsPointer_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value508) { right_value508 = come_decrement_ref_count2(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result337__;
                                                                come_call_finalizer2(sType_finalize,param_type_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                param_name_243 = come_decrement_ref_count2(param_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(sType_finalize,type2_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                # 2183 "21obj.c"
                                                                # 1915 "21obj.c"
                                                                if(_if_conditional379=charp_operator_equals(buf,"using"),                                                                _if_conditional379) {
                                                                    # 1970 "21obj.c"
                                                                    # 1916 "21obj.c"
                                                                    if(_if_conditional380=strmemcmp(info->p,"neo-c"),                                                                    _if_conditional380) {
                                                                        # 1917 "21obj.c"
                                                                        info->p+=strlen("neo-c");
                                                                        # 1918 "21obj.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1920 "21obj.c"
                                                                        gComeC=(_Bool)0;
                                                                        # 1922 "21obj.c"
                                                                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1922, "struct sNode");
                                                                        _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value510=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value509=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1922, "sNullNodeX")))),info))));
                                                                        _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                        _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                        _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                        _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                        _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                        _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                        _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                        _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                        __result340__ = __result_obj__ = ((struct sNode*)(right_value513=_inf_value21));
                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result340__;
                                                                    }
                                                                    else {
                                                                        # 1970 "21obj.c"
                                                                        # 1924 "21obj.c"
                                                                        if(_if_conditional385=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                        _if_conditional385) {
                                                                            # 1925 "21obj.c"
                                                                            info->p+=strlen("c");
                                                                            # 1926 "21obj.c"
                                                                            skip_spaces_and_lf(info);
                                                                            # 1928 "21obj.c"
                                                                            gComeC=(_Bool)1;
                                                                            # 1940 "21obj.c"
                                                                            # 1930 "21obj.c"
                                                                            if(_if_conditional386=*info->p==123,                                                                            _if_conditional386) {
                                                                                # 1931 "21obj.c"
                                                                                node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=parse_normal_block(info))));
                                                                                if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1933 "21obj.c"
                                                                                gComeC=(_Bool)0;
                                                                                # 1935 "21obj.c"
                                                                                __result341__ = __result_obj__ = node_248;
                                                                                if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result341__;
                                                                                if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                # 1938 "21obj.c"
                                                                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1938, "struct sNode");
                                                                                _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value516=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value515=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1938, "sNullNodeX")))),info))));
                                                                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                                __result344__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value22));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result344__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1970 "21obj.c"
                                                                            # 1941 "21obj.c"
                                                                            if(_if_conditional391=strmemcmp(info->p,"gc"),                                                                            _if_conditional391) {
                                                                                # 1942 "21obj.c"
                                                                                info->p+=strlen("gc");
                                                                                # 1943 "21obj.c"
                                                                                skip_spaces_and_lf(info);
                                                                                # 1945 "21obj.c"
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1945, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value521=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value520=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1945, "sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result347__ = __result_obj__ = ((struct sNode*)(right_value524=_inf_value23));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result347__;
                                                                            }
                                                                            else {
                                                                                # 1970 "21obj.c"
                                                                                # 1947 "21obj.c"
                                                                                if(_if_conditional396=strmemcmp(info->p,"no-gc"),                                                                                _if_conditional396) {
                                                                                    # 1948 "21obj.c"
                                                                                    info->p+=strlen("no-gc");
                                                                                    # 1949 "21obj.c"
                                                                                    skip_spaces_and_lf(info);
                                                                                    # 1952 "21obj.c"
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1952, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value526=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value525=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1952, "sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result350__ = __result_obj__ = ((struct sNode*)(right_value529=_inf_value24));
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result350__;
                                                                                }
                                                                                else {
                                                                                    # 1970 "21obj.c"
                                                                                    # 1954 "21obj.c"
                                                                                    if(_if_conditional401=strmemcmp(info->p,"unsafe"),                                                                                    _if_conditional401) {
                                                                                        # 1955 "21obj.c"
                                                                                        info->p+=strlen("unsafe");
                                                                                        # 1956 "21obj.c"
                                                                                        skip_spaces_and_lf(info);
                                                                                        # 1958 "21obj.c"
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1958, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value531=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value530=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1958, "sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result353__ = __result_obj__ = ((struct sNode*)(right_value534=_inf_value25));
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result353__;
                                                                                    }
                                                                                    else {
                                                                                        # 1970 "21obj.c"
                                                                                        # 1960 "21obj.c"
                                                                                        if(_if_conditional406=strmemcmp(info->p,"no-null-check"),                                                                                        _if_conditional406) {
                                                                                            # 1961 "21obj.c"
                                                                                            info->p+=strlen("no-null-check");
                                                                                            # 1962 "21obj.c"
                                                                                            skip_spaces_and_lf(info);
                                                                                            # 1964 "21obj.c"
                                                                                            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1964, "struct sNode");
                                                                                            _inf_obj_value26=come_increment_ref_count(((struct sNullNodeX*)(right_value536=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value535=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1964, "sNullNodeX")))),info))));
                                                                                            _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                            _inf_value26->finalize=(void*)sNullNodeX_finalize;
                                                                                            _inf_value26->clone=(void*)sNullNodeX_clone;
                                                                                            _inf_value26->compile=(void*)sNullNodeX_compile;
                                                                                            _inf_value26->sline=(void*)sNullNodeX_sline;
                                                                                            _inf_value26->sname=(void*)sNullNodeX_sname;
                                                                                            _inf_value26->terminated=(void*)sNullNodeX_terminated;
                                                                                            _inf_value26->kind=(void*)sNullNodeX_kind;
                                                                                            __result356__ = __result_obj__ = ((struct sNode*)(right_value539=_inf_value26));
                                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result356__;
                                                                                        }
                                                                                        else {
                                                                                            # 1967 "21obj.c"
                                                                                            err_msg(info,"invalid using");
                                                                                            # 1968 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 2183 "21obj.c"
                                                                    # 1971 "21obj.c"
                                                                    if(_if_conditional411=charp_operator_equals(buf,"sizeof"),                                                                    _if_conditional411) {
                                                                        # 1972 "21obj.c"
                                                                        expected_next_character(40,info);
                                                                        # 1975 "21obj.c"
                                                                        is_type_name_flag_254=(_Bool)0;
                                                                        # 1992 "21obj.c"
                                                                        {
                                                                            # 1977 "21obj.c"
                                                                            p_255=info->p;
                                                                            # 1978 "21obj.c"
                                                                            sline_256=info->sline;
                                                                            # 1988 "21obj.c"
                                                                            # 1980 "21obj.c"
                                                                            if(_if_conditional412=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional412) {
                                                                                # 1981 "21obj.c"
                                                                                word_257=(char*)come_increment_ref_count(((char*)(right_value540=parse_word(info))));
                                                                                right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1986 "21obj.c"
                                                                                # 1983 "21obj.c"
                                                                                if(_if_conditional413=is_type_name(word_257,info),                                                                                _if_conditional413) {
                                                                                    # 1984 "21obj.c"
                                                                                    is_type_name_flag_254=(_Bool)1;
                                                                                }
                                                                                word_257 = come_decrement_ref_count2(word_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 1988 "21obj.c"
                                                                            info->p=p_255;
                                                                            # 1989 "21obj.c"
                                                                            info->sline=sline_256;
                                                                        }
                                                                        # 2010 "21obj.c"
                                                                        # 1992 "21obj.c"
                                                                        if(is_type_name_flag_254) {
                                                                            # 1993 "21obj.c"
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value541=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_258=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_259=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_260=multiple_assign_var7->v3;
                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            # 1999 "21obj.c"
                                                                            # 1994 "21obj.c"
                                                                            if(_if_conditional415=!err_260,                                                                            _if_conditional415) {
                                                                                # 1995 "21obj.c"
                                                                                err_msg(info,"parse type");
                                                                                # 1996 "21obj.c"
                                                                                exit(2);
                                                                            }
                                                                            # 1999 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 2001 "21obj.c"
                                                                            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2001, "struct sNode");
                                                                            _inf_obj_value27=come_increment_ref_count(((struct sSizeOfNode*)(right_value543=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value542=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 2001, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_258),info))));
                                                                            _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                            _inf_value27->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value27->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value27->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value27->sline=(void*)sSizeOfNode_sline;
                                                                            _inf_value27->sname=(void*)sSizeOfNode_sname;
                                                                            _inf_value27->terminated=(void*)sSizeOfNode_terminated;
                                                                            _inf_value27->kind=(void*)sSizeOfNode_kind;
                                                                            __result359__ = __result_obj__ = ((struct sNode*)(right_value547=_inf_value27));
                                                                            come_call_finalizer2(sType_finalize,type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result359__;
                                                                            come_call_finalizer2(sType_finalize,type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            # 2004 "21obj.c"
                                                                            exp_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value548=expression_v13(info))));
                                                                            if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            # 2006 "21obj.c"
                                                                            expected_next_character(41,info);
                                                                            # 2008 "21obj.c"
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2008, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value550=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value549=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 2008, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_262),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value28->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value28->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value28->sline=(void*)sSizeOfExpNode_sline;
                                                                            _inf_value28->sname=(void*)sSizeOfExpNode_sname;
                                                                            _inf_value28->terminated=(void*)sSizeOfExpNode_terminated;
                                                                            _inf_value28->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result362__ = __result_obj__ = ((struct sNode*)(right_value554=_inf_value28));
                                                                            if(exp_262) { exp_262 = come_decrement_ref_count2(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result362__;
                                                                            if(exp_262) { exp_262 = come_decrement_ref_count2(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 2183 "21obj.c"
                                                                        # 2011 "21obj.c"
                                                                        if(_if_conditional428=charp_operator_equals(buf,"typeof"),                                                                        _if_conditional428) {
                                                                            # 2012 "21obj.c"
                                                                            expected_next_character(40,info);
                                                                            # 2015 "21obj.c"
                                                                            is_type_name_flag_264=(_Bool)0;
                                                                            # 2032 "21obj.c"
                                                                            {
                                                                                # 2017 "21obj.c"
                                                                                p_265=info->p;
                                                                                # 2018 "21obj.c"
                                                                                sline_266=info->sline;
                                                                                # 2028 "21obj.c"
                                                                                # 2020 "21obj.c"
                                                                                if(_if_conditional429=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional429) {
                                                                                    # 2021 "21obj.c"
                                                                                    word_267=(char*)come_increment_ref_count(((char*)(right_value555=parse_word(info))));
                                                                                    right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 2026 "21obj.c"
                                                                                    # 2023 "21obj.c"
                                                                                    if(_if_conditional430=is_type_name(word_267,info),                                                                                    _if_conditional430) {
                                                                                        # 2024 "21obj.c"
                                                                                        is_type_name_flag_264=(_Bool)1;
                                                                                    }
                                                                                    word_267 = come_decrement_ref_count2(word_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2028 "21obj.c"
                                                                                info->p=p_265;
                                                                                # 2029 "21obj.c"
                                                                                info->sline=sline_266;
                                                                            }
                                                                            # 2050 "21obj.c"
                                                                            # 2032 "21obj.c"
                                                                            if(is_type_name_flag_264) {
                                                                                # 2033 "21obj.c"
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value556=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_268=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_269=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_270=multiple_assign_var8->v3;
                                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 2039 "21obj.c"
                                                                                # 2034 "21obj.c"
                                                                                if(_if_conditional432=!err_270,                                                                                _if_conditional432) {
                                                                                    # 2035 "21obj.c"
                                                                                    err_msg(info,"parse type");
                                                                                    # 2036 "21obj.c"
                                                                                    exit(2);
                                                                                }
                                                                                # 2039 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 2041 "21obj.c"
                                                                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2041, "struct sNode");
                                                                                _inf_obj_value29=come_increment_ref_count(((struct sTypeOfNode*)(right_value558=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value557=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 2041, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_268),info))));
                                                                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                _inf_value29->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value29->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value29->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value29->sline=(void*)sTypeOfNode_sline;
                                                                                _inf_value29->sname=(void*)sTypeOfNode_sname;
                                                                                _inf_value29->terminated=(void*)sTypeOfNode_terminated;
                                                                                _inf_value29->kind=(void*)sTypeOfNode_kind;
                                                                                __result365__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value29));
                                                                                come_call_finalizer2(sType_finalize,type_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result365__;
                                                                                come_call_finalizer2(sType_finalize,type_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                # 2044 "21obj.c"
                                                                                exp_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=expression_v13(info))));
                                                                                if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 2046 "21obj.c"
                                                                                expected_next_character(41,info);
                                                                                # 2048 "21obj.c"
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2048, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value565=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value564=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 2048, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_272),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value30->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value30->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value30->sline=(void*)sTypeOfExpNode_sline;
                                                                                _inf_value30->sname=(void*)sTypeOfExpNode_sname;
                                                                                _inf_value30->terminated=(void*)sTypeOfExpNode_terminated;
                                                                                _inf_value30->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result368__ = __result_obj__ = ((struct sNode*)(right_value569=_inf_value30));
                                                                                if(exp_272) { exp_272 = come_decrement_ref_count2(exp_272, ((struct sNode*)exp_272)->finalize, ((struct sNode*)exp_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result368__;
                                                                                if(exp_272) { exp_272 = come_decrement_ref_count2(exp_272, ((struct sNode*)exp_272)->finalize, ((struct sNode*)exp_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 2183 "21obj.c"
                                                                            # 2062 "21obj.c"
                                                                            if(_if_conditional445=charp_operator_equals(buf,"_Alignof"),                                                                            _if_conditional445) {
                                                                                # 2063 "21obj.c"
                                                                                expected_next_character(40,info);
                                                                                # 2066 "21obj.c"
                                                                                is_type_name_flag_274=(_Bool)0;
                                                                                # 2083 "21obj.c"
                                                                                {
                                                                                    # 2068 "21obj.c"
                                                                                    p_275=info->p;
                                                                                    # 2069 "21obj.c"
                                                                                    sline_276=info->sline;
                                                                                    # 2079 "21obj.c"
                                                                                    # 2071 "21obj.c"
                                                                                    if(_if_conditional446=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional446) {
                                                                                        # 2072 "21obj.c"
                                                                                        word_277=(char*)come_increment_ref_count(((char*)(right_value570=parse_word(info))));
                                                                                        right_value570 = come_decrement_ref_count2(right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        # 2077 "21obj.c"
                                                                                        # 2074 "21obj.c"
                                                                                        if(_if_conditional447=is_type_name(word_277,info),                                                                                        _if_conditional447) {
                                                                                            # 2075 "21obj.c"
                                                                                            is_type_name_flag_274=(_Bool)1;
                                                                                        }
                                                                                        word_277 = come_decrement_ref_count2(word_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2079 "21obj.c"
                                                                                    info->p=p_275;
                                                                                    # 2080 "21obj.c"
                                                                                    info->sline=sline_276;
                                                                                }
                                                                                # 2101 "21obj.c"
                                                                                # 2083 "21obj.c"
                                                                                if(is_type_name_flag_274) {
                                                                                    # 2084 "21obj.c"
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value571=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_278=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_279=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_280=multiple_assign_var9->v3;
                                                                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 2090 "21obj.c"
                                                                                    # 2085 "21obj.c"
                                                                                    if(_if_conditional449=!err_280,                                                                                    _if_conditional449) {
                                                                                        # 2086 "21obj.c"
                                                                                        err_msg(info,"parse type");
                                                                                        # 2087 "21obj.c"
                                                                                        exit(2);
                                                                                    }
                                                                                    # 2090 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 2092 "21obj.c"
                                                                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2092, "struct sNode");
                                                                                    _inf_obj_value31=come_increment_ref_count(((struct sAlignOfNode*)(right_value573=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value572=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 2092, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_278),info))));
                                                                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                    _inf_value31->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value31->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value31->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value31->sline=(void*)sAlignOfNode_sline;
                                                                                    _inf_value31->sname=(void*)sAlignOfNode_sname;
                                                                                    _inf_value31->terminated=(void*)sAlignOfNode_terminated;
                                                                                    _inf_value31->kind=(void*)sAlignOfNode_kind;
                                                                                    __result371__ = __result_obj__ = ((struct sNode*)(right_value577=_inf_value31));
                                                                                    come_call_finalizer2(sType_finalize,type_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_279 = come_decrement_ref_count2(name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result371__;
                                                                                    come_call_finalizer2(sType_finalize,type_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_279 = come_decrement_ref_count2(name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    # 2095 "21obj.c"
                                                                                    exp_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value578=expression_v13(info))));
                                                                                    if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    # 2097 "21obj.c"
                                                                                    expected_next_character(41,info);
                                                                                    # 2099 "21obj.c"
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2099, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value580=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value579=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 2099, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_282),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignOfExpNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignOfExpNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result374__ = __result_obj__ = ((struct sNode*)(right_value584=_inf_value32));
                                                                                    if(exp_282) { exp_282 = come_decrement_ref_count2(exp_282, ((struct sNode*)exp_282)->finalize, ((struct sNode*)exp_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result374__;
                                                                                    if(exp_282) { exp_282 = come_decrement_ref_count2(exp_282, ((struct sNode*)exp_282)->finalize, ((struct sNode*)exp_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 2183 "21obj.c"
                                                                                # 2102 "21obj.c"
                                                                                if(_if_conditional462=charp_operator_equals(buf,"__alignof__"),                                                                                _if_conditional462) {
                                                                                    # 2103 "21obj.c"
                                                                                    expected_next_character(40,info);
                                                                                    # 2106 "21obj.c"
                                                                                    is_type_name_flag_284=(_Bool)0;
                                                                                    # 2123 "21obj.c"
                                                                                    {
                                                                                        # 2108 "21obj.c"
                                                                                        p_285=info->p;
                                                                                        # 2109 "21obj.c"
                                                                                        sline_286=info->sline;
                                                                                        # 2119 "21obj.c"
                                                                                        # 2111 "21obj.c"
                                                                                        if(_if_conditional463=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional463) {
                                                                                            # 2112 "21obj.c"
                                                                                            word_287=(char*)come_increment_ref_count(((char*)(right_value585=parse_word(info))));
                                                                                            right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            # 2117 "21obj.c"
                                                                                            # 2114 "21obj.c"
                                                                                            if(_if_conditional464=is_type_name(word_287,info),                                                                                            _if_conditional464) {
                                                                                                # 2115 "21obj.c"
                                                                                                is_type_name_flag_284=(_Bool)1;
                                                                                            }
                                                                                            word_287 = come_decrement_ref_count2(word_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2119 "21obj.c"
                                                                                        info->p=p_285;
                                                                                        # 2120 "21obj.c"
                                                                                        info->sline=sline_286;
                                                                                    }
                                                                                    # 2141 "21obj.c"
                                                                                    # 2123 "21obj.c"
                                                                                    if(is_type_name_flag_284) {
                                                                                        # 2124 "21obj.c"
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value586=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_288=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_289=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_290=multiple_assign_var10->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 2130 "21obj.c"
                                                                                        # 2125 "21obj.c"
                                                                                        if(_if_conditional466=!err_290,                                                                                        _if_conditional466) {
                                                                                            # 2126 "21obj.c"
                                                                                            err_msg(info,"parse type");
                                                                                            # 2127 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                        # 2130 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 2132 "21obj.c"
                                                                                        _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2132, "struct sNode");
                                                                                        _inf_obj_value33=come_increment_ref_count(((struct sAlignOfNode2*)(right_value588=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value587=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 2132, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_288),info))));
                                                                                        _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                        _inf_value33->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value33->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value33->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value33->sline=(void*)sAlignOfNode2_sline;
                                                                                        _inf_value33->sname=(void*)sAlignOfNode2_sname;
                                                                                        _inf_value33->terminated=(void*)sAlignOfNode2_terminated;
                                                                                        _inf_value33->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result377__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value33));
                                                                                        come_call_finalizer2(sType_finalize,type_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result377__;
                                                                                        come_call_finalizer2(sType_finalize,type_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        # 2135 "21obj.c"
                                                                                        exp_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=expression_v13(info))));
                                                                                        if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        # 2137 "21obj.c"
                                                                                        expected_next_character(41,info);
                                                                                        # 2139 "21obj.c"
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2139, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value595=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value594=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 2139, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_292),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value34->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value34->sline=(void*)sAlignOfExpNode2_sline;
                                                                                        _inf_value34->sname=(void*)sAlignOfExpNode2_sname;
                                                                                        _inf_value34->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result380__ = __result_obj__ = ((struct sNode*)(right_value599=_inf_value34));
                                                                                        if(exp_292) { exp_292 = come_decrement_ref_count2(exp_292, ((struct sNode*)exp_292)->finalize, ((struct sNode*)exp_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result380__;
                                                                                        if(exp_292) { exp_292 = come_decrement_ref_count2(exp_292, ((struct sNode*)exp_292)->finalize, ((struct sNode*)exp_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 2183 "21obj.c"
                                                                                    # 2142 "21obj.c"
                                                                                    if(_if_conditional479=charp_operator_equals(buf,"_Alignas"),                                                                                    _if_conditional479) {
                                                                                        # 2143 "21obj.c"
                                                                                        expected_next_character(40,info);
                                                                                        # 2146 "21obj.c"
                                                                                        is_type_name_flag_294=(_Bool)0;
                                                                                        # 2163 "21obj.c"
                                                                                        {
                                                                                            # 2148 "21obj.c"
                                                                                            p_295=info->p;
                                                                                            # 2149 "21obj.c"
                                                                                            sline_296=info->sline;
                                                                                            # 2159 "21obj.c"
                                                                                            # 2151 "21obj.c"
                                                                                            if(_if_conditional480=xisalpha(*info->p)||*info->p==95,                                                                                            _if_conditional480) {
                                                                                                # 2152 "21obj.c"
                                                                                                word_297=(char*)come_increment_ref_count(((char*)(right_value600=parse_word(info))));
                                                                                                right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 2157 "21obj.c"
                                                                                                # 2154 "21obj.c"
                                                                                                if(_if_conditional481=is_type_name(word_297,info),                                                                                                _if_conditional481) {
                                                                                                    # 2155 "21obj.c"
                                                                                                    is_type_name_flag_294=(_Bool)1;
                                                                                                }
                                                                                                word_297 = come_decrement_ref_count2(word_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2159 "21obj.c"
                                                                                            info->p=p_295;
                                                                                            # 2160 "21obj.c"
                                                                                            info->sline=sline_296;
                                                                                        }
                                                                                        # 2181 "21obj.c"
                                                                                        # 2163 "21obj.c"
                                                                                        if(is_type_name_flag_294) {
                                                                                            # 2164 "21obj.c"
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value601=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_298=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_299=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_300=multiple_assign_var11->v3;
                                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 2170 "21obj.c"
                                                                                            # 2165 "21obj.c"
                                                                                            if(_if_conditional483=!err_300,                                                                                            _if_conditional483) {
                                                                                                # 2166 "21obj.c"
                                                                                                err_msg(info,"parse type");
                                                                                                # 2167 "21obj.c"
                                                                                                exit(2);
                                                                                            }
                                                                                            # 2170 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 2172 "21obj.c"
                                                                                            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2172, "struct sNode");
                                                                                            _inf_obj_value35=come_increment_ref_count(((struct sAlignAsNode*)(right_value603=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value602=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2172, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_298),info))));
                                                                                            _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                            _inf_value35->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value35->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value35->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value35->sline=(void*)sAlignAsNode_sline;
                                                                                            _inf_value35->sname=(void*)sAlignAsNode_sname;
                                                                                            _inf_value35->terminated=(void*)sAlignAsNode_terminated;
                                                                                            _inf_value35->kind=(void*)sAlignAsNode_kind;
                                                                                            __result383__ = __result_obj__ = ((struct sNode*)(right_value607=_inf_value35));
                                                                                            come_call_finalizer2(sType_finalize,type_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result383__;
                                                                                            come_call_finalizer2(sType_finalize,type_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            # 2175 "21obj.c"
                                                                                            exp_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=expression_v13(info))));
                                                                                            if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            # 2177 "21obj.c"
                                                                                            expected_next_character(41,info);
                                                                                            # 2179 "21obj.c"
                                                                                            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2179, "struct sNode");
                                                                                            _inf_obj_value36=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value610=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value609=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2179, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_302),info))));
                                                                                            _inf_value36->_protocol_obj=_inf_obj_value36;
                                                                                            _inf_value36->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value36->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value36->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value36->sline=(void*)sAlignAsExpNode_sline;
                                                                                            _inf_value36->sname=(void*)sAlignAsExpNode_sname;
                                                                                            _inf_value36->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                            _inf_value36->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result386__ = __result_obj__ = ((struct sNode*)(right_value614=_inf_value36));
                                                                                            if(exp_302) { exp_302 = come_decrement_ref_count2(exp_302, ((struct sNode*)exp_302)->finalize, ((struct sNode*)exp_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result386__;
                                                                                            if(exp_302) { exp_302 = come_decrement_ref_count2(exp_302, ((struct sNode*)exp_302)->finalize, ((struct sNode*)exp_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    # 2183 "21obj.c"
    __result387__ = __result_obj__ = ((struct sNode*)(right_value615=string_node_v20(buf,head,head_sline,info)));
    if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result387__;
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
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                if(_if_conditional277=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional277) {
                    # 0 "sNewNode_finalize"
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sNewNode_finalize"
                # 1 "sNewNode_finalize"
                if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional278) {
                    # 1 "sNewNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional279;
struct sNewNode* __result293__;
void* right_value409;
struct sNewNode* result_214;
_Bool _if_conditional280;
void* right_value410;
struct sType* __dec_obj151;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value411;
char* __dec_obj152;
struct sNewNode* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
right_value409 = (void*)0;
memset(&result_214, 0, sizeof(struct sNewNode*));
right_value410 = (void*)0;
right_value411 = (void*)0;
                # 3 "sNewNode_clone"
                # 2 "sNewNode_clone"
                if(_if_conditional279=self==(void*)0,                _if_conditional279) {
                    # 2 "sNewNode_clone"
                    __result293__ = __result_obj__ = (void*)0;
                    return __result293__;
                }
                # 3 "sNewNode_clone"
                result_214=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value409=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer2(sNewNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sNewNode_clone"
                # 4 "sNewNode_clone"
                if(_if_conditional280=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional280) {
                    # 4 "sNewNode_clone"
                    __dec_obj151=result_214->type;
                    result_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value410=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sNewNode_clone"
                # 5 "sNewNode_clone"
                if(_if_conditional281=self!=((void*)0),                _if_conditional281) {
                    # 5 "sNewNode_clone"
                    result_214->sline=self->sline;
                }
                # 7 "sNewNode_clone"
                # 6 "sNewNode_clone"
                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional282) {
                    # 6 "sNewNode_clone"
                    __dec_obj152=result_214->sname;
                    result_214->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                __result294__ = __result_obj__ = result_214;
                come_call_finalizer2(sNewNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result294__;
                come_call_finalizer2(sNewNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sTrueNode* __result296__;
void* right_value415;
struct sTrueNode* result_215;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value416;
char* __dec_obj153;
struct sTrueNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
memset(&result_215, 0, sizeof(struct sTrueNode*));
right_value416 = (void*)0;
                # 3 "sTrueNode_clone"
                # 2 "sTrueNode_clone"
                if(_if_conditional285=self==(void*)0,                _if_conditional285) {
                    # 2 "sTrueNode_clone"
                    __result296__ = __result_obj__ = (void*)0;
                    return __result296__;
                }
                # 3 "sTrueNode_clone"
                result_215=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value415=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer2(sTrueNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sTrueNode_clone"
                # 4 "sTrueNode_clone"
                if(_if_conditional286=self!=((void*)0),                _if_conditional286) {
                    # 4 "sTrueNode_clone"
                    result_215->sline=self->sline;
                }
                # 6 "sTrueNode_clone"
                # 5 "sTrueNode_clone"
                if(_if_conditional287=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional287) {
                    # 5 "sTrueNode_clone"
                    __dec_obj153=result_215->sname;
                    result_215->sname=(char*)come_increment_ref_count(((char*)(right_value416=string_clone(self->sname))));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTrueNode_clone"
                __result297__ = __result_obj__ = result_215;
                come_call_finalizer2(sTrueNode_finalize,result_215, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result297__;
                come_call_finalizer2(sTrueNode_finalize,result_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sFalseNode* __result299__;
void* right_value420;
struct sFalseNode* result_216;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value421;
char* __dec_obj154;
struct sFalseNode* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_216, 0, sizeof(struct sFalseNode*));
right_value421 = (void*)0;
                    # 3 "sFalseNode_clone"
                    # 2 "sFalseNode_clone"
                    if(_if_conditional290=self==(void*)0,                    _if_conditional290) {
                        # 2 "sFalseNode_clone"
                        __result299__ = __result_obj__ = (void*)0;
                        return __result299__;
                    }
                    # 3 "sFalseNode_clone"
                    result_216=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value420=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer2(sFalseNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sFalseNode_clone"
                    # 4 "sFalseNode_clone"
                    if(_if_conditional291=self!=((void*)0),                    _if_conditional291) {
                        # 4 "sFalseNode_clone"
                        result_216->sline=self->sline;
                    }
                    # 6 "sFalseNode_clone"
                    # 5 "sFalseNode_clone"
                    if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional292) {
                        # 5 "sFalseNode_clone"
                        __dec_obj154=result_216->sname;
                        result_216->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->sname))));
                        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sFalseNode_clone"
                    __result300__ = __result_obj__ = result_216;
                    come_call_finalizer2(sFalseNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result300__;
                    come_call_finalizer2(sFalseNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sDeleteNode_finalize"
                        # 0 "sDeleteNode_finalize"
                        if(_if_conditional294=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional294) {
                            # 0 "sDeleteNode_finalize"
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sDeleteNode_finalize"
                        # 1 "sDeleteNode_finalize"
                        if(_if_conditional295=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional295) {
                            # 1 "sDeleteNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional296;
struct sDeleteNode* __result302__;
void* right_value426;
struct sDeleteNode* result_218;
_Bool _if_conditional297;
void* right_value427;
struct sNode* __dec_obj155;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value428;
char* __dec_obj156;
struct sDeleteNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
right_value426 = (void*)0;
memset(&result_218, 0, sizeof(struct sDeleteNode*));
right_value427 = (void*)0;
right_value428 = (void*)0;
                        # 3 "sDeleteNode_clone"
                        # 2 "sDeleteNode_clone"
                        if(_if_conditional296=self==(void*)0,                        _if_conditional296) {
                            # 2 "sDeleteNode_clone"
                            __result302__ = __result_obj__ = (void*)0;
                            return __result302__;
                        }
                        # 3 "sDeleteNode_clone"
                        result_218=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value426=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer2(sDeleteNode_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sDeleteNode_clone"
                        # 4 "sDeleteNode_clone"
                        if(_if_conditional297=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional297) {
                            # 4 "sDeleteNode_clone"
                            __dec_obj155=result_218->node;
                            result_218->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=sNode_clone(self->node))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sDeleteNode_clone"
                        # 5 "sDeleteNode_clone"
                        if(_if_conditional298=self!=((void*)0),                        _if_conditional298) {
                            # 5 "sDeleteNode_clone"
                            result_218->sline=self->sline;
                        }
                        # 7 "sDeleteNode_clone"
                        # 6 "sDeleteNode_clone"
                        if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional299) {
                            # 6 "sDeleteNode_clone"
                            __dec_obj156=result_218->sname;
                            result_218->sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(self->sname))));
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sDeleteNode_clone"
                        __result303__ = __result_obj__ = result_218;
                        come_call_finalizer2(sDeleteNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result303__;
                        come_call_finalizer2(sDeleteNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sForceDeleteNode_finalize"
                            # 0 "sForceDeleteNode_finalize"
                            if(_if_conditional301=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional301) {
                                # 0 "sForceDeleteNode_finalize"
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sForceDeleteNode_finalize"
                            # 1 "sForceDeleteNode_finalize"
                            if(_if_conditional302=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional302) {
                                # 1 "sForceDeleteNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional303;
struct sForceDeleteNode* __result305__;
void* right_value433;
struct sForceDeleteNode* result_220;
_Bool _if_conditional304;
void* right_value434;
struct sNode* __dec_obj157;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value435;
char* __dec_obj158;
struct sForceDeleteNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
memset(&result_220, 0, sizeof(struct sForceDeleteNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
                            # 3 "sForceDeleteNode_clone"
                            # 2 "sForceDeleteNode_clone"
                            if(_if_conditional303=self==(void*)0,                            _if_conditional303) {
                                # 2 "sForceDeleteNode_clone"
                                __result305__ = __result_obj__ = (void*)0;
                                return __result305__;
                            }
                            # 3 "sForceDeleteNode_clone"
                            result_220=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value433=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer2(sForceDeleteNode_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sForceDeleteNode_clone"
                            # 4 "sForceDeleteNode_clone"
                            if(_if_conditional304=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional304) {
                                # 4 "sForceDeleteNode_clone"
                                __dec_obj157=result_220->node;
                                result_220->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(self->node))));
                                if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sForceDeleteNode_clone"
                            # 5 "sForceDeleteNode_clone"
                            if(_if_conditional305=self!=((void*)0),                            _if_conditional305) {
                                # 5 "sForceDeleteNode_clone"
                                result_220->sline=self->sline;
                            }
                            # 7 "sForceDeleteNode_clone"
                            # 6 "sForceDeleteNode_clone"
                            if(_if_conditional306=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional306) {
                                # 6 "sForceDeleteNode_clone"
                                __dec_obj158=result_220->sname;
                                result_220->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(self->sname))));
                                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sForceDeleteNode_clone"
                            __result306__ = __result_obj__ = result_220;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result306__;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sBorrowNode_finalize"
                                # 0 "sBorrowNode_finalize"
                                if(_if_conditional308=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional308) {
                                    # 0 "sBorrowNode_finalize"
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sBorrowNode_finalize"
                                # 1 "sBorrowNode_finalize"
                                if(_if_conditional309=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional309) {
                                    # 1 "sBorrowNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional310;
struct sBorrowNode* __result308__;
void* right_value440;
struct sBorrowNode* result_222;
_Bool _if_conditional311;
void* right_value441;
struct sNode* __dec_obj159;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value442;
char* __dec_obj160;
struct sBorrowNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
memset(&result_222, 0, sizeof(struct sBorrowNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
                                # 3 "sBorrowNode_clone"
                                # 2 "sBorrowNode_clone"
                                if(_if_conditional310=self==(void*)0,                                _if_conditional310) {
                                    # 2 "sBorrowNode_clone"
                                    __result308__ = __result_obj__ = (void*)0;
                                    return __result308__;
                                }
                                # 3 "sBorrowNode_clone"
                                result_222=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value440=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer2(sBorrowNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sBorrowNode_clone"
                                # 4 "sBorrowNode_clone"
                                if(_if_conditional311=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional311) {
                                    # 4 "sBorrowNode_clone"
                                    __dec_obj159=result_222->node;
                                    result_222->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=sNode_clone(self->node))));
                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sBorrowNode_clone"
                                # 5 "sBorrowNode_clone"
                                if(_if_conditional312=self!=((void*)0),                                _if_conditional312) {
                                    # 5 "sBorrowNode_clone"
                                    result_222->sline=self->sline;
                                }
                                # 7 "sBorrowNode_clone"
                                # 6 "sBorrowNode_clone"
                                if(_if_conditional313=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional313) {
                                    # 6 "sBorrowNode_clone"
                                    __dec_obj160=result_222->sname;
                                    result_222->sname=(char*)come_increment_ref_count(((char*)(right_value442=string_clone(self->sname))));
                                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sBorrowNode_clone"
                                __result309__ = __result_obj__ = result_222;
                                come_call_finalizer2(sBorrowNode_finalize,result_222, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result309__;
                                come_call_finalizer2(sBorrowNode_finalize,result_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sDelegateNode_finalize"
                                    # 0 "sDelegateNode_finalize"
                                    if(_if_conditional315=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional315) {
                                        # 0 "sDelegateNode_finalize"
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sDelegateNode_finalize"
                                    # 1 "sDelegateNode_finalize"
                                    if(_if_conditional316=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional316) {
                                        # 1 "sDelegateNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sDelegateNode* __result311__;
void* right_value447;
struct sDelegateNode* result_224;
_Bool _if_conditional318;
void* right_value448;
struct sNode* __dec_obj161;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value449;
char* __dec_obj162;
struct sDelegateNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
right_value447 = (void*)0;
memset(&result_224, 0, sizeof(struct sDelegateNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
                                    # 3 "sDelegateNode_clone"
                                    # 2 "sDelegateNode_clone"
                                    if(_if_conditional317=self==(void*)0,                                    _if_conditional317) {
                                        # 2 "sDelegateNode_clone"
                                        __result311__ = __result_obj__ = (void*)0;
                                        return __result311__;
                                    }
                                    # 3 "sDelegateNode_clone"
                                    result_224=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value447=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer2(sDelegateNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sDelegateNode_clone"
                                    # 4 "sDelegateNode_clone"
                                    if(_if_conditional318=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional318) {
                                        # 4 "sDelegateNode_clone"
                                        __dec_obj161=result_224->node;
                                        result_224->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=sNode_clone(self->node))));
                                        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sDelegateNode_clone"
                                    # 5 "sDelegateNode_clone"
                                    if(_if_conditional319=self!=((void*)0),                                    _if_conditional319) {
                                        # 5 "sDelegateNode_clone"
                                        result_224->sline=self->sline;
                                    }
                                    # 7 "sDelegateNode_clone"
                                    # 6 "sDelegateNode_clone"
                                    if(_if_conditional320=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional320) {
                                        # 6 "sDelegateNode_clone"
                                        __dec_obj162=result_224->sname;
                                        result_224->sname=(char*)come_increment_ref_count(((char*)(right_value449=string_clone(self->sname))));
                                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sDelegateNode_clone"
                                    __result312__ = __result_obj__ = result_224;
                                    come_call_finalizer2(sDelegateNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result312__;
                                    come_call_finalizer2(sDelegateNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sShareNode_finalize"
                                        # 0 "sShareNode_finalize"
                                        if(_if_conditional322=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional322) {
                                            # 0 "sShareNode_finalize"
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sShareNode_finalize"
                                        # 1 "sShareNode_finalize"
                                        if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional323) {
                                            # 1 "sShareNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sShareNode* __result314__;
void* right_value454;
struct sShareNode* result_226;
_Bool _if_conditional325;
void* right_value455;
struct sNode* __dec_obj163;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value456;
char* __dec_obj164;
struct sShareNode* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&result_226, 0, sizeof(struct sShareNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                                        # 3 "sShareNode_clone"
                                        # 2 "sShareNode_clone"
                                        if(_if_conditional324=self==(void*)0,                                        _if_conditional324) {
                                            # 2 "sShareNode_clone"
                                            __result314__ = __result_obj__ = (void*)0;
                                            return __result314__;
                                        }
                                        # 3 "sShareNode_clone"
                                        result_226=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value454=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer2(sShareNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sShareNode_clone"
                                        # 4 "sShareNode_clone"
                                        if(_if_conditional325=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional325) {
                                            # 4 "sShareNode_clone"
                                            __dec_obj163=result_226->node;
                                            result_226->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=sNode_clone(self->node))));
                                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sShareNode_clone"
                                        # 5 "sShareNode_clone"
                                        if(_if_conditional326=self!=((void*)0),                                        _if_conditional326) {
                                            # 5 "sShareNode_clone"
                                            result_226->sline=self->sline;
                                        }
                                        # 7 "sShareNode_clone"
                                        # 6 "sShareNode_clone"
                                        if(_if_conditional327=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional327) {
                                            # 6 "sShareNode_clone"
                                            __dec_obj164=result_226->sname;
                                            result_226->sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->sname))));
                                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sShareNode_clone"
                                        __result315__ = __result_obj__ = result_226;
                                        come_call_finalizer2(sShareNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result315__;
                                        come_call_finalizer2(sShareNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCloneNode_finalize"
                                            # 0 "sCloneNode_finalize"
                                            if(_if_conditional329=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional329) {
                                                # 0 "sCloneNode_finalize"
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sCloneNode_finalize"
                                            # 1 "sCloneNode_finalize"
                                            if(_if_conditional330=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional330) {
                                                # 1 "sCloneNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional331;
struct sCloneNode* __result317__;
void* right_value461;
struct sCloneNode* result_228;
_Bool _if_conditional332;
void* right_value462;
struct sNode* __dec_obj165;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value463;
char* __dec_obj166;
struct sCloneNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value461 = (void*)0;
memset(&result_228, 0, sizeof(struct sCloneNode*));
right_value462 = (void*)0;
right_value463 = (void*)0;
                                            # 3 "sCloneNode_clone"
                                            # 2 "sCloneNode_clone"
                                            if(_if_conditional331=self==(void*)0,                                            _if_conditional331) {
                                                # 2 "sCloneNode_clone"
                                                __result317__ = __result_obj__ = (void*)0;
                                                return __result317__;
                                            }
                                            # 3 "sCloneNode_clone"
                                            result_228=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value461=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer2(sCloneNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCloneNode_clone"
                                            # 4 "sCloneNode_clone"
                                            if(_if_conditional332=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional332) {
                                                # 4 "sCloneNode_clone"
                                                __dec_obj165=result_228->node;
                                                result_228->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=sNode_clone(self->node))));
                                                if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sCloneNode_clone"
                                            # 5 "sCloneNode_clone"
                                            if(_if_conditional333=self!=((void*)0),                                            _if_conditional333) {
                                                # 5 "sCloneNode_clone"
                                                result_228->sline=self->sline;
                                            }
                                            # 7 "sCloneNode_clone"
                                            # 6 "sCloneNode_clone"
                                            if(_if_conditional334=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional334) {
                                                # 6 "sCloneNode_clone"
                                                __dec_obj166=result_228->sname;
                                                result_228->sname=(char*)come_increment_ref_count(((char*)(right_value463=string_clone(self->sname))));
                                                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value463 = come_decrement_ref_count2(right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCloneNode_clone"
                                            __result318__ = __result_obj__ = result_228;
                                            come_call_finalizer2(sCloneNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result318__;
                                            come_call_finalizer2(sCloneNode_finalize,result_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sDupeNode_finalize"
                                                # 0 "sDupeNode_finalize"
                                                if(_if_conditional336=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional336) {
                                                    # 0 "sDupeNode_finalize"
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 2 "sDupeNode_finalize"
                                                # 1 "sDupeNode_finalize"
                                                if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional337) {
                                                    # 1 "sDupeNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sDupeNode* __result320__;
void* right_value468;
struct sDupeNode* result_230;
_Bool _if_conditional339;
void* right_value469;
struct sNode* __dec_obj167;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value470;
char* __dec_obj168;
struct sDupeNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value468 = (void*)0;
memset(&result_230, 0, sizeof(struct sDupeNode*));
right_value469 = (void*)0;
right_value470 = (void*)0;
                                                # 3 "sDupeNode_clone"
                                                # 2 "sDupeNode_clone"
                                                if(_if_conditional338=self==(void*)0,                                                _if_conditional338) {
                                                    # 2 "sDupeNode_clone"
                                                    __result320__ = __result_obj__ = (void*)0;
                                                    return __result320__;
                                                }
                                                # 3 "sDupeNode_clone"
                                                result_230=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value468=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer2(sDupeNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sDupeNode_clone"
                                                # 4 "sDupeNode_clone"
                                                if(_if_conditional339=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional339) {
                                                    # 4 "sDupeNode_clone"
                                                    __dec_obj167=result_230->node;
                                                    result_230->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=sNode_clone(self->node))));
                                                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 6 "sDupeNode_clone"
                                                # 5 "sDupeNode_clone"
                                                if(_if_conditional340=self!=((void*)0),                                                _if_conditional340) {
                                                    # 5 "sDupeNode_clone"
                                                    result_230->sline=self->sline;
                                                }
                                                # 7 "sDupeNode_clone"
                                                # 6 "sDupeNode_clone"
                                                if(_if_conditional341=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional341) {
                                                    # 6 "sDupeNode_clone"
                                                    __dec_obj168=result_230->sname;
                                                    result_230->sname=(char*)come_increment_ref_count(((char*)(right_value470=string_clone(self->sname))));
                                                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sDupeNode_clone"
                                                __result321__ = __result_obj__ = result_230;
                                                come_call_finalizer2(sDupeNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result321__;
                                                come_call_finalizer2(sDupeNode_finalize,result_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sDummyHeapNode_finalize"
                                                    # 0 "sDummyHeapNode_finalize"
                                                    if(_if_conditional343=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional343) {
                                                        # 0 "sDummyHeapNode_finalize"
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 2 "sDummyHeapNode_finalize"
                                                    # 1 "sDummyHeapNode_finalize"
                                                    if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional344) {
                                                        # 1 "sDummyHeapNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional345;
struct sDummyHeapNode* __result323__;
void* right_value475;
struct sDummyHeapNode* result_232;
_Bool _if_conditional346;
void* right_value476;
struct sNode* __dec_obj169;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value477;
char* __dec_obj170;
struct sDummyHeapNode* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value475 = (void*)0;
memset(&result_232, 0, sizeof(struct sDummyHeapNode*));
right_value476 = (void*)0;
right_value477 = (void*)0;
                                                    # 3 "sDummyHeapNode_clone"
                                                    # 2 "sDummyHeapNode_clone"
                                                    if(_if_conditional345=self==(void*)0,                                                    _if_conditional345) {
                                                        # 2 "sDummyHeapNode_clone"
                                                        __result323__ = __result_obj__ = (void*)0;
                                                        return __result323__;
                                                    }
                                                    # 3 "sDummyHeapNode_clone"
                                                    result_232=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value475=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer2(sDummyHeapNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sDummyHeapNode_clone"
                                                    # 4 "sDummyHeapNode_clone"
                                                    if(_if_conditional346=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional346) {
                                                        # 4 "sDummyHeapNode_clone"
                                                        __dec_obj169=result_232->node;
                                                        result_232->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->node))));
                                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 6 "sDummyHeapNode_clone"
                                                    # 5 "sDummyHeapNode_clone"
                                                    if(_if_conditional347=self!=((void*)0),                                                    _if_conditional347) {
                                                        # 5 "sDummyHeapNode_clone"
                                                        result_232->sline=self->sline;
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    # 6 "sDummyHeapNode_clone"
                                                    if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional348) {
                                                        # 6 "sDummyHeapNode_clone"
                                                        __dec_obj170=result_232->sname;
                                                        result_232->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                                                        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    __result324__ = __result_obj__ = result_232;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_232, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result324__;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sGCIncNode_finalize"
                                                        # 0 "sGCIncNode_finalize"
                                                        if(_if_conditional350=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional350) {
                                                            # 0 "sGCIncNode_finalize"
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        # 2 "sGCIncNode_finalize"
                                                        # 1 "sGCIncNode_finalize"
                                                        if(_if_conditional351=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional351) {
                                                            # 1 "sGCIncNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional352;
struct sGCIncNode* __result326__;
void* right_value482;
struct sGCIncNode* result_234;
_Bool _if_conditional353;
void* right_value483;
struct sNode* __dec_obj171;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value484;
char* __dec_obj172;
struct sGCIncNode* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value482 = (void*)0;
memset(&result_234, 0, sizeof(struct sGCIncNode*));
right_value483 = (void*)0;
right_value484 = (void*)0;
                                                        # 3 "sGCIncNode_clone"
                                                        # 2 "sGCIncNode_clone"
                                                        if(_if_conditional352=self==(void*)0,                                                        _if_conditional352) {
                                                            # 2 "sGCIncNode_clone"
                                                            __result326__ = __result_obj__ = (void*)0;
                                                            return __result326__;
                                                        }
                                                        # 3 "sGCIncNode_clone"
                                                        result_234=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value482=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer2(sGCIncNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sGCIncNode_clone"
                                                        # 4 "sGCIncNode_clone"
                                                        if(_if_conditional353=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional353) {
                                                            # 4 "sGCIncNode_clone"
                                                            __dec_obj171=result_234->node;
                                                            result_234->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=sNode_clone(self->node))));
                                                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 6 "sGCIncNode_clone"
                                                        # 5 "sGCIncNode_clone"
                                                        if(_if_conditional354=self!=((void*)0),                                                        _if_conditional354) {
                                                            # 5 "sGCIncNode_clone"
                                                            result_234->sline=self->sline;
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        # 6 "sGCIncNode_clone"
                                                        if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional355) {
                                                            # 6 "sGCIncNode_clone"
                                                            __dec_obj172=result_234->sname;
                                                            result_234->sname=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(self->sname))));
                                                            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        __result327__ = __result_obj__ = result_234;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_234, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result327__;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sGCDecNode_finalize"
                                                            # 0 "sGCDecNode_finalize"
                                                            if(_if_conditional357=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional357) {
                                                                # 0 "sGCDecNode_finalize"
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            # 2 "sGCDecNode_finalize"
                                                            # 1 "sGCDecNode_finalize"
                                                            if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional358) {
                                                                # 1 "sGCDecNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional359;
struct sGCDecNode* __result329__;
void* right_value489;
struct sGCDecNode* result_236;
_Bool _if_conditional360;
void* right_value490;
struct sNode* __dec_obj173;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value491;
char* __dec_obj174;
struct sGCDecNode* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value489 = (void*)0;
memset(&result_236, 0, sizeof(struct sGCDecNode*));
right_value490 = (void*)0;
right_value491 = (void*)0;
                                                            # 3 "sGCDecNode_clone"
                                                            # 2 "sGCDecNode_clone"
                                                            if(_if_conditional359=self==(void*)0,                                                            _if_conditional359) {
                                                                # 2 "sGCDecNode_clone"
                                                                __result329__ = __result_obj__ = (void*)0;
                                                                return __result329__;
                                                            }
                                                            # 3 "sGCDecNode_clone"
                                                            result_236=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value489=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer2(sGCDecNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sGCDecNode_clone"
                                                            # 4 "sGCDecNode_clone"
                                                            if(_if_conditional360=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional360) {
                                                                # 4 "sGCDecNode_clone"
                                                                __dec_obj173=result_236->node;
                                                                result_236->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=sNode_clone(self->node))));
                                                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 6 "sGCDecNode_clone"
                                                            # 5 "sGCDecNode_clone"
                                                            if(_if_conditional361=self!=((void*)0),                                                            _if_conditional361) {
                                                                # 5 "sGCDecNode_clone"
                                                                result_236->sline=self->sline;
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            # 6 "sGCDecNode_clone"
                                                            if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional362) {
                                                                # 6 "sGCDecNode_clone"
                                                                __dec_obj174=result_236->sname;
                                                                result_236->sname=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->sname))));
                                                                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            __result330__ = __result_obj__ = result_236;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_236, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result330__;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "sIsHeap_finalize"
                                                                # 0 "sIsHeap_finalize"
                                                                if(_if_conditional365=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional365) {
                                                                    # 0 "sIsHeap_finalize"
                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                # 2 "sIsHeap_finalize"
                                                                # 1 "sIsHeap_finalize"
                                                                if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional366) {
                                                                    # 1 "sIsHeap_finalize"
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional367;
struct sIsHeap* __result332__;
void* right_value497;
struct sIsHeap* result_241;
_Bool _if_conditional368;
void* right_value498;
struct sType* __dec_obj175;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value499;
char* __dec_obj176;
struct sIsHeap* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
memset(&result_241, 0, sizeof(struct sIsHeap*));
right_value498 = (void*)0;
right_value499 = (void*)0;
                                                                # 3 "sIsHeap_clone"
                                                                # 2 "sIsHeap_clone"
                                                                if(_if_conditional367=self==(void*)0,                                                                _if_conditional367) {
                                                                    # 2 "sIsHeap_clone"
                                                                    __result332__ = __result_obj__ = (void*)0;
                                                                    return __result332__;
                                                                }
                                                                # 3 "sIsHeap_clone"
                                                                result_241=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value497=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer2(sIsHeap_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 5 "sIsHeap_clone"
                                                                # 4 "sIsHeap_clone"
                                                                if(_if_conditional368=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional368) {
                                                                    # 4 "sIsHeap_clone"
                                                                    __dec_obj175=result_241->type;
                                                                    result_241->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value498=sType_clone(self->type))));
                                                                    come_call_finalizer2(sType_finalize,__dec_obj175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(sType_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 6 "sIsHeap_clone"
                                                                # 5 "sIsHeap_clone"
                                                                if(_if_conditional369=self!=((void*)0),                                                                _if_conditional369) {
                                                                    # 5 "sIsHeap_clone"
                                                                    result_241->sline=self->sline;
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                # 6 "sIsHeap_clone"
                                                                if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional370) {
                                                                    # 6 "sIsHeap_clone"
                                                                    __dec_obj176=result_241->sname;
                                                                    result_241->sname=(char*)come_increment_ref_count(((char*)(right_value499=string_clone(self->sname))));
                                                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                __result333__ = __result_obj__ = result_241;
                                                                come_call_finalizer2(sIsHeap_finalize,result_241, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result333__;
                                                                come_call_finalizer2(sIsHeap_finalize,result_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsPointer_finalize(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "sIsPointer_finalize"
                                                                    # 0 "sIsPointer_finalize"
                                                                    if(_if_conditional373=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional373) {
                                                                        # 0 "sIsPointer_finalize"
                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    # 2 "sIsPointer_finalize"
                                                                    # 1 "sIsPointer_finalize"
                                                                    if(_if_conditional374=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional374) {
                                                                        # 1 "sIsPointer_finalize"
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sIsPointer* __result335__;
void* right_value505;
struct sIsPointer* result_246;
_Bool _if_conditional376;
void* right_value506;
struct sType* __dec_obj177;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value507;
char* __dec_obj178;
struct sIsPointer* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value505 = (void*)0;
memset(&result_246, 0, sizeof(struct sIsPointer*));
right_value506 = (void*)0;
right_value507 = (void*)0;
                                                                    # 3 "sIsPointer_clone"
                                                                    # 2 "sIsPointer_clone"
                                                                    if(_if_conditional375=self==(void*)0,                                                                    _if_conditional375) {
                                                                        # 2 "sIsPointer_clone"
                                                                        __result335__ = __result_obj__ = (void*)0;
                                                                        return __result335__;
                                                                    }
                                                                    # 3 "sIsPointer_clone"
                                                                    result_246=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value505=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"))));
                                                                    come_call_finalizer2(sIsPointer_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    # 5 "sIsPointer_clone"
                                                                    # 4 "sIsPointer_clone"
                                                                    if(_if_conditional376=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional376) {
                                                                        # 4 "sIsPointer_clone"
                                                                        __dec_obj177=result_246->type;
                                                                        result_246->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value506=sType_clone(self->type))));
                                                                        come_call_finalizer2(sType_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sType_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 6 "sIsPointer_clone"
                                                                    # 5 "sIsPointer_clone"
                                                                    if(_if_conditional377=self!=((void*)0),                                                                    _if_conditional377) {
                                                                        # 5 "sIsPointer_clone"
                                                                        result_246->sline=self->sline;
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    # 6 "sIsPointer_clone"
                                                                    if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional378) {
                                                                        # 6 "sIsPointer_clone"
                                                                        __dec_obj178=result_246->sname;
                                                                        result_246->sname=(char*)come_increment_ref_count(((char*)(right_value507=string_clone(self->sname))));
                                                                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value507 = come_decrement_ref_count2(right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    __result336__ = __result_obj__ = result_246;
                                                                    come_call_finalizer2(sIsPointer_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result336__;
                                                                    come_call_finalizer2(sIsPointer_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                # 0 "sSizeOfNode_finalize"
                                                                                if(_if_conditional416=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional416) {
                                                                                    # 0 "sSizeOfNode_finalize"
                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfNode_finalize"
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional417) {
                                                                                    # 1 "sSizeOfNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional418;
struct sSizeOfNode* __result357__;
void* right_value544;
struct sSizeOfNode* result_261;
_Bool _if_conditional419;
void* right_value545;
struct sType* __dec_obj185;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value546;
char* __dec_obj186;
struct sSizeOfNode* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
right_value544 = (void*)0;
memset(&result_261, 0, sizeof(struct sSizeOfNode*));
right_value545 = (void*)0;
right_value546 = (void*)0;
                                                                                # 3 "sSizeOfNode_clone"
                                                                                # 2 "sSizeOfNode_clone"
                                                                                if(_if_conditional418=self==(void*)0,                                                                                _if_conditional418) {
                                                                                    # 2 "sSizeOfNode_clone"
                                                                                    __result357__ = __result_obj__ = (void*)0;
                                                                                    return __result357__;
                                                                                }
                                                                                # 3 "sSizeOfNode_clone"
                                                                                result_261=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value544=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                                come_call_finalizer2(sSizeOfNode_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfNode_clone"
                                                                                # 4 "sSizeOfNode_clone"
                                                                                if(_if_conditional419=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional419) {
                                                                                    # 4 "sSizeOfNode_clone"
                                                                                    __dec_obj185=result_261->type;
                                                                                    result_261->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value545=sType_clone(self->type))));
                                                                                    come_call_finalizer2(sType_finalize,__dec_obj185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sType_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 6 "sSizeOfNode_clone"
                                                                                # 5 "sSizeOfNode_clone"
                                                                                if(_if_conditional420=self!=((void*)0),                                                                                _if_conditional420) {
                                                                                    # 5 "sSizeOfNode_clone"
                                                                                    result_261->sline=self->sline;
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                # 6 "sSizeOfNode_clone"
                                                                                if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional421) {
                                                                                    # 6 "sSizeOfNode_clone"
                                                                                    __dec_obj186=result_261->sname;
                                                                                    result_261->sname=(char*)come_increment_ref_count(((char*)(right_value546=string_clone(self->sname))));
                                                                                    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                __result358__ = __result_obj__ = result_261;
                                                                                come_call_finalizer2(sSizeOfNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result358__;
                                                                                come_call_finalizer2(sSizeOfNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional422;
_Bool _if_conditional423;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                # 0 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional422=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional422) {
                                                                                    # 0 "sSizeOfExpNode_finalize"
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                # 2 "sSizeOfExpNode_finalize"
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional423=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional423) {
                                                                                    # 1 "sSizeOfExpNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional424;
struct sSizeOfExpNode* __result360__;
void* right_value551;
struct sSizeOfExpNode* result_263;
_Bool _if_conditional425;
void* right_value552;
struct sNode* __dec_obj187;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value553;
char* __dec_obj188;
struct sSizeOfExpNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value551 = (void*)0;
memset(&result_263, 0, sizeof(struct sSizeOfExpNode*));
right_value552 = (void*)0;
right_value553 = (void*)0;
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                # 2 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional424=self==(void*)0,                                                                                _if_conditional424) {
                                                                                    # 2 "sSizeOfExpNode_clone"
                                                                                    __result360__ = __result_obj__ = (void*)0;
                                                                                    return __result360__;
                                                                                }
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                result_263=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value551=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                # 4 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional425=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional425) {
                                                                                    # 4 "sSizeOfExpNode_clone"
                                                                                    __dec_obj187=result_263->exp;
                                                                                    result_263->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value552=sNode_clone(self->exp))));
                                                                                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional426=self!=((void*)0),                                                                                _if_conditional426) {
                                                                                    # 5 "sSizeOfExpNode_clone"
                                                                                    result_263->sline=self->sline;
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional427) {
                                                                                    # 6 "sSizeOfExpNode_clone"
                                                                                    __dec_obj188=result_263->sname;
                                                                                    result_263->sname=(char*)come_increment_ref_count(((char*)(right_value553=string_clone(self->sname))));
                                                                                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                __result361__ = __result_obj__ = result_263;
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result361__;
                                                                                come_call_finalizer2(sSizeOfExpNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional433;
_Bool _if_conditional434;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    # 0 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional433=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional433) {
                                                                                        # 0 "sTypeOfNode_finalize"
                                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfNode_finalize"
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional434) {
                                                                                        # 1 "sTypeOfNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional435;
struct sTypeOfNode* __result363__;
void* right_value559;
struct sTypeOfNode* result_271;
_Bool _if_conditional436;
void* right_value560;
struct sType* __dec_obj189;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value561;
char* __dec_obj190;
struct sTypeOfNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value559 = (void*)0;
memset(&result_271, 0, sizeof(struct sTypeOfNode*));
right_value560 = (void*)0;
right_value561 = (void*)0;
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    # 2 "sTypeOfNode_clone"
                                                                                    if(_if_conditional435=self==(void*)0,                                                                                    _if_conditional435) {
                                                                                        # 2 "sTypeOfNode_clone"
                                                                                        __result363__ = __result_obj__ = (void*)0;
                                                                                        return __result363__;
                                                                                    }
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    result_271=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value559=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    # 4 "sTypeOfNode_clone"
                                                                                    if(_if_conditional436=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional436) {
                                                                                        # 4 "sTypeOfNode_clone"
                                                                                        __dec_obj189=result_271->type;
                                                                                        result_271->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value560=sType_clone(self->type))));
                                                                                        come_call_finalizer2(sType_finalize,__dec_obj189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sType_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    if(_if_conditional437=self!=((void*)0),                                                                                    _if_conditional437) {
                                                                                        # 5 "sTypeOfNode_clone"
                                                                                        result_271->sline=self->sline;
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional438) {
                                                                                        # 6 "sTypeOfNode_clone"
                                                                                        __dec_obj190=result_271->sname;
                                                                                        result_271->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(self->sname))));
                                                                                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    __result364__ = __result_obj__ = result_271;
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result364__;
                                                                                    come_call_finalizer2(sTypeOfNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    # 0 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional439=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional439) {
                                                                                        # 0 "sTypeOfExpNode_finalize"
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    # 2 "sTypeOfExpNode_finalize"
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional440) {
                                                                                        # 1 "sTypeOfExpNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional441;
struct sTypeOfExpNode* __result366__;
void* right_value566;
struct sTypeOfExpNode* result_273;
_Bool _if_conditional442;
void* right_value567;
struct sNode* __dec_obj191;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value568;
char* __dec_obj192;
struct sTypeOfExpNode* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value566 = (void*)0;
memset(&result_273, 0, sizeof(struct sTypeOfExpNode*));
right_value567 = (void*)0;
right_value568 = (void*)0;
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    # 2 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional441=self==(void*)0,                                                                                    _if_conditional441) {
                                                                                        # 2 "sTypeOfExpNode_clone"
                                                                                        __result366__ = __result_obj__ = (void*)0;
                                                                                        return __result366__;
                                                                                    }
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    result_273=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value566=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    # 4 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional442=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional442) {
                                                                                        # 4 "sTypeOfExpNode_clone"
                                                                                        __dec_obj191=result_273->exp;
                                                                                        result_273->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value567=sNode_clone(self->exp))));
                                                                                        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value567) { right_value567 = come_decrement_ref_count2(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional443=self!=((void*)0),                                                                                    _if_conditional443) {
                                                                                        # 5 "sTypeOfExpNode_clone"
                                                                                        result_273->sline=self->sline;
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional444) {
                                                                                        # 6 "sTypeOfExpNode_clone"
                                                                                        __dec_obj192=result_273->sname;
                                                                                        result_273->sname=(char*)come_increment_ref_count(((char*)(right_value568=string_clone(self->sname))));
                                                                                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    __result367__ = __result_obj__ = result_273;
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result367__;
                                                                                    come_call_finalizer2(sTypeOfExpNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional450;
_Bool _if_conditional451;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        # 0 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional450=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional450) {
                                                                                            # 0 "sAlignOfNode_finalize"
                                                                                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfNode_finalize"
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional451) {
                                                                                            # 1 "sAlignOfNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional452;
struct sAlignOfNode* __result369__;
void* right_value574;
struct sAlignOfNode* result_281;
_Bool _if_conditional453;
void* right_value575;
struct sType* __dec_obj193;
_Bool _if_conditional454;
_Bool _if_conditional455;
void* right_value576;
char* __dec_obj194;
struct sAlignOfNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value574 = (void*)0;
memset(&result_281, 0, sizeof(struct sAlignOfNode*));
right_value575 = (void*)0;
right_value576 = (void*)0;
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        # 2 "sAlignOfNode_clone"
                                                                                        if(_if_conditional452=self==(void*)0,                                                                                        _if_conditional452) {
                                                                                            # 2 "sAlignOfNode_clone"
                                                                                            __result369__ = __result_obj__ = (void*)0;
                                                                                            return __result369__;
                                                                                        }
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        result_281=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value574=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        # 4 "sAlignOfNode_clone"
                                                                                        if(_if_conditional453=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional453) {
                                                                                            # 4 "sAlignOfNode_clone"
                                                                                            __dec_obj193=result_281->type;
                                                                                            result_281->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value575=sType_clone(self->type))));
                                                                                            come_call_finalizer2(sType_finalize,__dec_obj193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sType_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        if(_if_conditional454=self!=((void*)0),                                                                                        _if_conditional454) {
                                                                                            # 5 "sAlignOfNode_clone"
                                                                                            result_281->sline=self->sline;
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional455) {
                                                                                            # 6 "sAlignOfNode_clone"
                                                                                            __dec_obj194=result_281->sname;
                                                                                            result_281->sname=(char*)come_increment_ref_count(((char*)(right_value576=string_clone(self->sname))));
                                                                                            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value576 = come_decrement_ref_count2(right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        __result370__ = __result_obj__ = result_281;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result370__;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional456;
_Bool _if_conditional457;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        # 0 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional456=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional456) {
                                                                                            # 0 "sAlignOfExpNode_finalize"
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        # 2 "sAlignOfExpNode_finalize"
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional457) {
                                                                                            # 1 "sAlignOfExpNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional458;
struct sAlignOfExpNode* __result372__;
void* right_value581;
struct sAlignOfExpNode* result_283;
_Bool _if_conditional459;
void* right_value582;
struct sNode* __dec_obj195;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value583;
char* __dec_obj196;
struct sAlignOfExpNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value581 = (void*)0;
memset(&result_283, 0, sizeof(struct sAlignOfExpNode*));
right_value582 = (void*)0;
right_value583 = (void*)0;
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        # 2 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional458=self==(void*)0,                                                                                        _if_conditional458) {
                                                                                            # 2 "sAlignOfExpNode_clone"
                                                                                            __result372__ = __result_obj__ = (void*)0;
                                                                                            return __result372__;
                                                                                        }
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        result_283=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value581=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        # 4 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional459=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional459) {
                                                                                            # 4 "sAlignOfExpNode_clone"
                                                                                            __dec_obj195=result_283->exp;
                                                                                            result_283->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=sNode_clone(self->exp))));
                                                                                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional460=self!=((void*)0),                                                                                        _if_conditional460) {
                                                                                            # 5 "sAlignOfExpNode_clone"
                                                                                            result_283->sline=self->sline;
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional461=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional461) {
                                                                                            # 6 "sAlignOfExpNode_clone"
                                                                                            __dec_obj196=result_283->sname;
                                                                                            result_283->sname=(char*)come_increment_ref_count(((char*)(right_value583=string_clone(self->sname))));
                                                                                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        __result373__ = __result_obj__ = result_283;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result373__;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional467;
_Bool _if_conditional468;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            # 0 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional467=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional467) {
                                                                                                # 0 "sAlignOfNode2_finalize"
                                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfNode2_finalize"
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional468) {
                                                                                                # 1 "sAlignOfNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional469;
struct sAlignOfNode2* __result375__;
void* right_value589;
struct sAlignOfNode2* result_291;
_Bool _if_conditional470;
void* right_value590;
struct sType* __dec_obj197;
_Bool _if_conditional471;
_Bool _if_conditional472;
void* right_value591;
char* __dec_obj198;
struct sAlignOfNode2* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value589 = (void*)0;
memset(&result_291, 0, sizeof(struct sAlignOfNode2*));
right_value590 = (void*)0;
right_value591 = (void*)0;
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            # 2 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional469=self==(void*)0,                                                                                            _if_conditional469) {
                                                                                                # 2 "sAlignOfNode2_clone"
                                                                                                __result375__ = __result_obj__ = (void*)0;
                                                                                                return __result375__;
                                                                                            }
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            result_291=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value589=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            # 4 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional470=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional470) {
                                                                                                # 4 "sAlignOfNode2_clone"
                                                                                                __dec_obj197=result_291->type;
                                                                                                result_291->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value590=sType_clone(self->type))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional471=self!=((void*)0),                                                                                            _if_conditional471) {
                                                                                                # 5 "sAlignOfNode2_clone"
                                                                                                result_291->sline=self->sline;
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional472=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional472) {
                                                                                                # 6 "sAlignOfNode2_clone"
                                                                                                __dec_obj198=result_291->sname;
                                                                                                result_291->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                                                                                                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            __result376__ = __result_obj__ = result_291;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result376__;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            # 0 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional473=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional473) {
                                                                                                # 0 "sAlignOfExpNode2_finalize"
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            # 2 "sAlignOfExpNode2_finalize"
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional474=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional474) {
                                                                                                # 1 "sAlignOfExpNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional475;
struct sAlignOfExpNode2* __result378__;
void* right_value596;
struct sAlignOfExpNode2* result_293;
_Bool _if_conditional476;
void* right_value597;
struct sNode* __dec_obj199;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value598;
char* __dec_obj200;
struct sAlignOfExpNode2* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value596 = (void*)0;
memset(&result_293, 0, sizeof(struct sAlignOfExpNode2*));
right_value597 = (void*)0;
right_value598 = (void*)0;
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            # 2 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional475=self==(void*)0,                                                                                            _if_conditional475) {
                                                                                                # 2 "sAlignOfExpNode2_clone"
                                                                                                __result378__ = __result_obj__ = (void*)0;
                                                                                                return __result378__;
                                                                                            }
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            result_293=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value596=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            # 4 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional476=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional476) {
                                                                                                # 4 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj199=result_293->exp;
                                                                                                result_293->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=sNode_clone(self->exp))));
                                                                                                if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value597) { right_value597 = come_decrement_ref_count2(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional477=self!=((void*)0),                                                                                            _if_conditional477) {
                                                                                                # 5 "sAlignOfExpNode2_clone"
                                                                                                result_293->sline=self->sline;
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional478) {
                                                                                                # 6 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj200=result_293->sname;
                                                                                                result_293->sname=(char*)come_increment_ref_count(((char*)(right_value598=string_clone(self->sname))));
                                                                                                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            __result379__ = __result_obj__ = result_293;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_293, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result379__;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional484;
_Bool _if_conditional485;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                # 0 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional484=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional484) {
                                                                                                    # 0 "sAlignAsNode_finalize"
                                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsNode_finalize"
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional485) {
                                                                                                    # 1 "sAlignAsNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional486;
struct sAlignAsNode* __result381__;
void* right_value604;
struct sAlignAsNode* result_301;
_Bool _if_conditional487;
void* right_value605;
struct sType* __dec_obj201;
_Bool _if_conditional488;
_Bool _if_conditional489;
void* right_value606;
char* __dec_obj202;
struct sAlignAsNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value604 = (void*)0;
memset(&result_301, 0, sizeof(struct sAlignAsNode*));
right_value605 = (void*)0;
right_value606 = (void*)0;
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                # 2 "sAlignAsNode_clone"
                                                                                                if(_if_conditional486=self==(void*)0,                                                                                                _if_conditional486) {
                                                                                                    # 2 "sAlignAsNode_clone"
                                                                                                    __result381__ = __result_obj__ = (void*)0;
                                                                                                    return __result381__;
                                                                                                }
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                result_301=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value604=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                # 4 "sAlignAsNode_clone"
                                                                                                if(_if_conditional487=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional487) {
                                                                                                    # 4 "sAlignAsNode_clone"
                                                                                                    __dec_obj201=result_301->type;
                                                                                                    result_301->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value605=sType_clone(self->type))));
                                                                                                    come_call_finalizer2(sType_finalize,__dec_obj201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sType_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                if(_if_conditional488=self!=((void*)0),                                                                                                _if_conditional488) {
                                                                                                    # 5 "sAlignAsNode_clone"
                                                                                                    result_301->sline=self->sline;
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                if(_if_conditional489=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional489) {
                                                                                                    # 6 "sAlignAsNode_clone"
                                                                                                    __dec_obj202=result_301->sname;
                                                                                                    result_301->sname=(char*)come_increment_ref_count(((char*)(right_value606=string_clone(self->sname))));
                                                                                                    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value606 = come_decrement_ref_count2(right_value606, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                __result382__ = __result_obj__ = result_301;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result382__;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional490;
_Bool _if_conditional491;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                # 0 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional490=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional490) {
                                                                                                    # 0 "sAlignAsExpNode_finalize"
                                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                # 2 "sAlignAsExpNode_finalize"
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional491=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional491) {
                                                                                                    # 1 "sAlignAsExpNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional492;
struct sAlignAsExpNode* __result384__;
void* right_value611;
struct sAlignAsExpNode* result_303;
_Bool _if_conditional493;
void* right_value612;
struct sNode* __dec_obj203;
_Bool _if_conditional494;
_Bool _if_conditional495;
void* right_value613;
char* __dec_obj204;
struct sAlignAsExpNode* __result385__;
memset(&__result_obj__, 0, sizeof(void*));
right_value611 = (void*)0;
memset(&result_303, 0, sizeof(struct sAlignAsExpNode*));
right_value612 = (void*)0;
right_value613 = (void*)0;
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                # 2 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional492=self==(void*)0,                                                                                                _if_conditional492) {
                                                                                                    # 2 "sAlignAsExpNode_clone"
                                                                                                    __result384__ = __result_obj__ = (void*)0;
                                                                                                    return __result384__;
                                                                                                }
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                result_303=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value611=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                # 4 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional493=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional493) {
                                                                                                    # 4 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj203=result_303->exp;
                                                                                                    result_303->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value612=sNode_clone(self->exp))));
                                                                                                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional494=self!=((void*)0),                                                                                                _if_conditional494) {
                                                                                                    # 5 "sAlignAsExpNode_clone"
                                                                                                    result_303->sline=self->sline;
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional495=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional495) {
                                                                                                    # 6 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj204=result_303->sname;
                                                                                                    result_303->sname=(char*)come_increment_ref_count(((char*)(right_value613=string_clone(self->sname))));
                                                                                                    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                __result385__ = __result_obj__ = result_303;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result385__;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value616;
void* right_value617;
struct sNode* _inf_value37;
struct sNullNodeX* _inf_obj_value37;
void* right_value620;
struct sNode* __result390__;
void* right_value621;
struct sNode* __result391__;
memset(&__result_obj__, 0, sizeof(void*));
right_value616 = (void*)0;
right_value617 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
    # 2233 "21obj.c"
    # 2188 "21obj.c"
    if(_if_conditional496=charp_operator_equals(buf,"using"),    _if_conditional496) {
        # 2230 "21obj.c"
        # 2189 "21obj.c"
        if(_if_conditional497=strmemcmp(info->p,"neo-c"),        _if_conditional497) {
            # 2190 "21obj.c"
            info->p+=strlen("neo-c");
            # 2191 "21obj.c"
            skip_spaces_and_lf(info);
            # 2193 "21obj.c"
            gComeC=(_Bool)0;
        }
        else {
            # 2230 "21obj.c"
            # 2195 "21obj.c"
            if(_if_conditional498=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional498) {
                # 2196 "21obj.c"
                info->p+=strlen("c");
                # 2197 "21obj.c"
                skip_spaces_and_lf(info);
                # 2212 "21obj.c"
                # 2199 "21obj.c"
                if(_if_conditional499=*info->p==123,                _if_conditional499) {
                    # 2200 "21obj.c"
                    info->p++;
                    # 2201 "21obj.c"
                    skip_spaces_and_lf(info);
                    # 2203 "21obj.c"
                    gComeC=(_Bool)1;
                    # 2205 "21obj.c"
                    transpile_toplevel((_Bool)1,info);
                    # 2207 "21obj.c"
                    gComeC=(_Bool)0;
                }
                else {
                    # 2210 "21obj.c"
                    gComeC=(_Bool)1;
                }
            }
            else {
                # 2230 "21obj.c"
                # 2213 "21obj.c"
                if(_if_conditional500=strmemcmp(info->p,"gc"),                _if_conditional500) {
                    # 2214 "21obj.c"
                    info->p+=strlen("gc");
                    # 2215 "21obj.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 2230 "21obj.c"
                    # 2217 "21obj.c"
                    if(_if_conditional501=strmemcmp(info->p,"no-gc"),                    _if_conditional501) {
                        # 2218 "21obj.c"
                        info->p+=strlen("no-gc");
                        # 2219 "21obj.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 2230 "21obj.c"
                        # 2221 "21obj.c"
                        if(_if_conditional502=strmemcmp(info->p,"unsafe"),                        _if_conditional502) {
                            # 2222 "21obj.c"
                            info->p+=strlen("unsafe");
                            # 2223 "21obj.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 2226 "21obj.c"
                            err_msg(info,"invalid using");
                            # 2227 "21obj.c"
                            exit(2);
                        }
                    }
                }
            }
        }
        # 2230 "21obj.c"
        _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2230, "struct sNode");
        _inf_obj_value37=come_increment_ref_count(((struct sNullNodeX*)(right_value617=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value616=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 2230, "sNullNodeX")))),info))));
        _inf_value37->_protocol_obj=_inf_obj_value37;
        _inf_value37->finalize=(void*)sNullNodeX_finalize;
        _inf_value37->clone=(void*)sNullNodeX_clone;
        _inf_value37->compile=(void*)sNullNodeX_compile;
        _inf_value37->sline=(void*)sNullNodeX_sline;
        _inf_value37->sname=(void*)sNullNodeX_sname;
        _inf_value37->terminated=(void*)sNullNodeX_terminated;
        _inf_value37->kind=(void*)sNullNodeX_kind;
        __result390__ = __result_obj__ = ((struct sNode*)(right_value620=_inf_value37));
        come_call_finalizer2(sNullNodeX_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNodeX_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result390__;
    }
    # 2233 "21obj.c"
    __result391__ = __result_obj__ = ((struct sNode*)(right_value621=top_level_v93(buf,head,head_sline,info)));
    if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result391__;
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
struct sNullNodeX* __result388__;
void* right_value618;
struct sNullNodeX* result_304;
_Bool _if_conditional505;
_Bool _if_conditional506;
void* right_value619;
char* __dec_obj205;
struct sNullNodeX* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
right_value618 = (void*)0;
memset(&result_304, 0, sizeof(struct sNullNodeX*));
right_value619 = (void*)0;
            # 3 "sNullNodeX_clone"
            # 2 "sNullNodeX_clone"
            if(_if_conditional504=self==(void*)0,            _if_conditional504) {
                # 2 "sNullNodeX_clone"
                __result388__ = __result_obj__ = (void*)0;
                return __result388__;
            }
            # 3 "sNullNodeX_clone"
            result_304=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value618=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "sNullNodeX"))));
            come_call_finalizer2(sNullNodeX_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sNullNodeX_clone"
            # 4 "sNullNodeX_clone"
            if(_if_conditional505=self!=((void*)0),            _if_conditional505) {
                # 4 "sNullNodeX_clone"
                result_304->sline=self->sline;
            }
            # 6 "sNullNodeX_clone"
            # 5 "sNullNodeX_clone"
            if(_if_conditional506=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional506) {
                # 5 "sNullNodeX_clone"
                __dec_obj205=result_304->sname;
                result_304->sname=(char*)come_increment_ref_count(((char*)(right_value619=string_clone(self->sname))));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNullNodeX_clone"
            __result389__ = __result_obj__ = result_304;
            come_call_finalizer2(sNullNodeX_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result389__;
            come_call_finalizer2(sNullNodeX_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional507;
void* right_value622;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_305;
char* name2_306;
_Bool err_307;
_Bool _if_conditional508;
void* right_value623;
struct sType* inf_type_308;
void* right_value624;
void* right_value625;
struct sNode* _inf_value38;
struct sImplementsNode* _inf_obj_value38;
void* right_value630;
struct sNode* __result394__;
_Bool _if_conditional517;
_Bool _while_condtional19;
void* right_value631;
struct sNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
right_value622 = (void*)0;
memset(&type3_305, 0, sizeof(struct sType*));
memset(&name2_306, 0, sizeof(char*));
memset(&err_307, 0, sizeof(_Bool));
memset(&type3_305, 0, sizeof(struct sType*));
memset(&name2_306, 0, sizeof(char*));
memset(&err_307, 0, sizeof(_Bool));
right_value623 = (void*)0;
memset(&inf_type_308, 0, sizeof(struct sType*));
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
    # 2260 "21obj.c"
    # 2238 "21obj.c"
    if(_if_conditional507=strmemcmp(info->p,"implements"),    _if_conditional507) {
        # 2239 "21obj.c"
        info->p+=strlen("implements");
        # 2240 "21obj.c"
        skip_spaces_and_lf(info);
        # 2242 "21obj.c"
        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value622=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_305=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_306=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_307=multiple_assign_var12->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2248 "21obj.c"
        # 2243 "21obj.c"
        if(_if_conditional508=!err_307,        _if_conditional508) {
            # 2244 "21obj.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 2245 "21obj.c"
            exit(2);
        }
        # 2248 "21obj.c"
        inf_type_308=(struct sType*)come_increment_ref_count(((struct sType*)(right_value623=sType_clone(type3_305))));
        come_call_finalizer2(sType_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2250 "21obj.c"
        _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2250, "struct sNode");
        _inf_obj_value38=come_increment_ref_count(((struct sImplementsNode*)(right_value625=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value624=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2250, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_308),info))));
        _inf_value38->_protocol_obj=_inf_obj_value38;
        _inf_value38->finalize=(void*)sImplementsNode_finalize;
        _inf_value38->clone=(void*)sImplementsNode_clone;
        _inf_value38->compile=(void*)sImplementsNode_compile;
        _inf_value38->sline=(void*)sImplementsNode_sline;
        _inf_value38->sname=(void*)sImplementsNode_sname;
        _inf_value38->terminated=(void*)sImplementsNode_terminated;
        _inf_value38->kind=(void*)sImplementsNode_kind;
        __result394__ = __result_obj__ = ((struct sNode*)(right_value630=_inf_value38));
        come_call_finalizer2(sType_finalize,type3_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_306 = come_decrement_ref_count2(name2_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sImplementsNode_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sImplementsNode_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value630) { right_value630 = come_decrement_ref_count2(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result394__;
        come_call_finalizer2(sType_finalize,type3_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_306 = come_decrement_ref_count2(name2_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 2260 "21obj.c"
        # 2252 "21obj.c"
        if(_if_conditional517=*info->p==64,        _if_conditional517) {
            # 2253 "21obj.c"
            info->p++;
            # 2257 "21obj.c"
            while(_while_condtional19=xisalnum(*info->p)||*info->p==95,            _while_condtional19) {
                # 2255 "21obj.c"
                info->p++;
            }
            # 2257 "21obj.c"
            skip_spaces_and_lf(info);
        }
    }
    # 2260 "21obj.c"
    __result395__ = __result_obj__ = ((struct sNode*)(right_value631=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result395__;
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
            if(_if_conditional509=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional509) {
                # 0 "sImplementsNode_finalize"
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 2 "sImplementsNode_finalize"
            # 1 "sImplementsNode_finalize"
            if(_if_conditional510=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional510) {
                # 1 "sImplementsNode_finalize"
                come_call_finalizer2(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sImplementsNode_finalize"
            # 2 "sImplementsNode_finalize"
            if(_if_conditional511=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional511) {
                # 2 "sImplementsNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional512;
struct sImplementsNode* __result392__;
void* right_value626;
struct sImplementsNode* result_309;
_Bool _if_conditional513;
void* right_value627;
struct sNode* __dec_obj206;
_Bool _if_conditional514;
void* right_value628;
struct sType* __dec_obj207;
_Bool _if_conditional515;
_Bool _if_conditional516;
void* right_value629;
char* __dec_obj208;
struct sImplementsNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
right_value626 = (void*)0;
memset(&result_309, 0, sizeof(struct sImplementsNode*));
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value629 = (void*)0;
            # 3 "sImplementsNode_clone"
            # 2 "sImplementsNode_clone"
            if(_if_conditional512=self==(void*)0,            _if_conditional512) {
                # 2 "sImplementsNode_clone"
                __result392__ = __result_obj__ = (void*)0;
                return __result392__;
            }
            # 3 "sImplementsNode_clone"
            result_309=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value626=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer2(sImplementsNode_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sImplementsNode_clone"
            # 4 "sImplementsNode_clone"
            if(_if_conditional513=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional513) {
                # 4 "sImplementsNode_clone"
                __dec_obj206=result_309->obj_exp;
                result_309->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=sNode_clone(self->obj_exp))));
                if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 6 "sImplementsNode_clone"
            # 5 "sImplementsNode_clone"
            if(_if_conditional514=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional514) {
                # 5 "sImplementsNode_clone"
                __dec_obj207=result_309->inf_type;
                result_309->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value628=sType_clone(self->inf_type))));
                come_call_finalizer2(sType_finalize,__dec_obj207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sImplementsNode_clone"
            # 6 "sImplementsNode_clone"
            if(_if_conditional515=self!=((void*)0),            _if_conditional515) {
                # 6 "sImplementsNode_clone"
                result_309->sline=self->sline;
            }
            # 8 "sImplementsNode_clone"
            # 7 "sImplementsNode_clone"
            if(_if_conditional516=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional516) {
                # 7 "sImplementsNode_clone"
                __dec_obj208=result_309->sname;
                result_309->sname=(char*)come_increment_ref_count(((char*)(right_value629=string_clone(self->sname))));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sImplementsNode_clone"
            __result393__ = __result_obj__ = result_309;
            come_call_finalizer2(sImplementsNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result393__;
            come_call_finalizer2(sImplementsNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

