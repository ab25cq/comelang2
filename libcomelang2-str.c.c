// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef unsigned int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
extern char* gCallerSName;
extern char* gCallerSName2;
extern char* gCallerSName3;
extern char* gCallerSName4;
extern char* gCallerSName5;
extern char* gCallerSName6;
extern char* gCallerSName7;
extern char* gCallerSName8;
extern char* gCallerSName9;
extern char* gCallerSName10;
extern int gCallerSLine;
extern int gCallerSLine2;
extern int gCallerSLine3;
extern int gCallerSLine4;
extern int gCallerSLine5;
extern int gCallerSLine6;
extern int gCallerSLine7;
extern int gCallerSLine8;
extern int gCallerSLine9;
extern int gCallerSLine10;
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
struct optional$2intbool
{
    int v1;
    _Bool v2;
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
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
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
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
};
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre16;
typedef struct real_pcre16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(long int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(long int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(long int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(long int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(long int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(long int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef unsigned int wint_t;
typedef struct anonymous_typeX2 mbstate_t;
struct tm;
typedef unsigned int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre* re;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

long double strtof128(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf128(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(unsigned int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, unsigned int __wchar);

long int mbstowcs(unsigned int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const unsigned int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void come_show_stackframe();

void come_clear_stackframe();

char* come_get_stackframe();

void stackframe();

void* come_null_check(void* mem, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(long int count, long int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

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

long int size_t_clone(long self);

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

char* size_t_to_string(long int self);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct real_pcre* pcre_compile(const char* anonymous_var_nameX182, int anonymous_var_nameX183, const char** anonymous_var_nameX184, int* anonymous_var_nameX185, const unsigned char* anonymous_var_nameX186);

struct real_pcre16* pcre16_compile(const unsigned short int* anonymous_var_nameX187, int anonymous_var_nameX188, const char** anonymous_var_nameX189, int* anonymous_var_nameX190, const unsigned char* anonymous_var_nameX191);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX192, int anonymous_var_nameX193, const char** anonymous_var_nameX194, int* anonymous_var_nameX195, const unsigned char* anonymous_var_nameX196);

struct real_pcre* pcre_compile2(const char* anonymous_var_nameX197, int anonymous_var_nameX198, int* anonymous_var_nameX199, const char** anonymous_var_nameX200, int* anonymous_var_nameX201, const unsigned char* anonymous_var_nameX202);

struct real_pcre16* pcre16_compile2(const unsigned short int* anonymous_var_nameX203, int anonymous_var_nameX204, int* anonymous_var_nameX205, const char** anonymous_var_nameX206, int* anonymous_var_nameX207, const unsigned char* anonymous_var_nameX208);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX209, int anonymous_var_nameX210, int* anonymous_var_nameX211, const char** anonymous_var_nameX212, int* anonymous_var_nameX213, const unsigned char* anonymous_var_nameX214);

int pcre_config(int anonymous_var_nameX215, void* anonymous_var_nameX216);

int pcre16_config(int anonymous_var_nameX217, void* anonymous_var_nameX218);

int pcre32_config(int anonymous_var_nameX219, void* anonymous_var_nameX220);

int pcre_copy_named_substring(const struct real_pcre* anonymous_var_nameX221, const char* anonymous_var_nameX222, int* anonymous_var_nameX223, int anonymous_var_nameX224, const char* anonymous_var_nameX225, char* anonymous_var_nameX226, int anonymous_var_nameX227);

int pcre16_copy_named_substring(const struct real_pcre16* anonymous_var_nameX228, const unsigned short int* anonymous_var_nameX229, int* anonymous_var_nameX230, int anonymous_var_nameX231, const unsigned short int* anonymous_var_nameX232, unsigned short int* anonymous_var_nameX233, int anonymous_var_nameX234);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX235, const unsigned int* anonymous_var_nameX236, int* anonymous_var_nameX237, int anonymous_var_nameX238, const unsigned int* anonymous_var_nameX239, unsigned int* anonymous_var_nameX240, int anonymous_var_nameX241);

int pcre_copy_substring(const char* anonymous_var_nameX242, int* anonymous_var_nameX243, int anonymous_var_nameX244, int anonymous_var_nameX245, char* anonymous_var_nameX246, int anonymous_var_nameX247);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX248, int* anonymous_var_nameX249, int anonymous_var_nameX250, int anonymous_var_nameX251, unsigned short int* anonymous_var_nameX252, int anonymous_var_nameX253);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX254, int* anonymous_var_nameX255, int anonymous_var_nameX256, int anonymous_var_nameX257, unsigned int* anonymous_var_nameX258, int anonymous_var_nameX259);

int pcre_dfa_exec(const struct real_pcre* anonymous_var_nameX260, const struct pcre_extra* anonymous_var_nameX261, const char* anonymous_var_nameX262, int anonymous_var_nameX263, int anonymous_var_nameX264, int anonymous_var_nameX265, int* anonymous_var_nameX266, int anonymous_var_nameX267, int* anonymous_var_nameX268, int anonymous_var_nameX269);

int pcre16_dfa_exec(const struct real_pcre16* anonymous_var_nameX270, const struct pcre16_extra* anonymous_var_nameX271, const unsigned short int* anonymous_var_nameX272, int anonymous_var_nameX273, int anonymous_var_nameX274, int anonymous_var_nameX275, int* anonymous_var_nameX276, int anonymous_var_nameX277, int* anonymous_var_nameX278, int anonymous_var_nameX279);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX280, const struct pcre32_extra* anonymous_var_nameX281, const unsigned int* anonymous_var_nameX282, int anonymous_var_nameX283, int anonymous_var_nameX284, int anonymous_var_nameX285, int* anonymous_var_nameX286, int anonymous_var_nameX287, int* anonymous_var_nameX288, int anonymous_var_nameX289);

int pcre_exec(const struct real_pcre* anonymous_var_nameX290, const struct pcre_extra* anonymous_var_nameX291, const char* anonymous_var_nameX292, int anonymous_var_nameX293, int anonymous_var_nameX294, int anonymous_var_nameX295, int* anonymous_var_nameX296, int anonymous_var_nameX297);

int pcre16_exec(const struct real_pcre16* anonymous_var_nameX298, const struct pcre16_extra* anonymous_var_nameX299, const unsigned short int* anonymous_var_nameX300, int anonymous_var_nameX301, int anonymous_var_nameX302, int anonymous_var_nameX303, int* anonymous_var_nameX304, int anonymous_var_nameX305);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX306, const struct pcre32_extra* anonymous_var_nameX307, const unsigned int* anonymous_var_nameX308, int anonymous_var_nameX309, int anonymous_var_nameX310, int anonymous_var_nameX311, int* anonymous_var_nameX312, int anonymous_var_nameX313);

int pcre_jit_exec(const struct real_pcre* anonymous_var_nameX314, const struct pcre_extra* anonymous_var_nameX315, const char* anonymous_var_nameX316, int anonymous_var_nameX317, int anonymous_var_nameX318, int anonymous_var_nameX319, int* anonymous_var_nameX320, int anonymous_var_nameX321, struct real_pcre_jit_stack* anonymous_var_nameX322);

int pcre16_jit_exec(const struct real_pcre16* anonymous_var_nameX323, const struct pcre16_extra* anonymous_var_nameX324, const unsigned short int* anonymous_var_nameX325, int anonymous_var_nameX326, int anonymous_var_nameX327, int anonymous_var_nameX328, int* anonymous_var_nameX329, int anonymous_var_nameX330, struct real_pcre16_jit_stack* anonymous_var_nameX331);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX332, const struct pcre32_extra* anonymous_var_nameX333, const unsigned int* anonymous_var_nameX334, int anonymous_var_nameX335, int anonymous_var_nameX336, int anonymous_var_nameX337, int* anonymous_var_nameX338, int anonymous_var_nameX339, struct real_pcre32_jit_stack* anonymous_var_nameX340);

void pcre_free_substring(const char* anonymous_var_nameX341);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX342);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX343);

void pcre_free_substring_list(const char** anonymous_var_nameX344);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX345);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX346);

int pcre_fullinfo(const struct real_pcre* anonymous_var_nameX347, const struct pcre_extra* anonymous_var_nameX348, int anonymous_var_nameX349, void* anonymous_var_nameX350);

int pcre16_fullinfo(const struct real_pcre16* anonymous_var_nameX351, const struct pcre16_extra* anonymous_var_nameX352, int anonymous_var_nameX353, void* anonymous_var_nameX354);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX355, const struct pcre32_extra* anonymous_var_nameX356, int anonymous_var_nameX357, void* anonymous_var_nameX358);

int pcre_get_named_substring(const struct real_pcre* anonymous_var_nameX359, const char* anonymous_var_nameX360, int* anonymous_var_nameX361, int anonymous_var_nameX362, const char* anonymous_var_nameX363, const char** anonymous_var_nameX364);

int pcre16_get_named_substring(const struct real_pcre16* anonymous_var_nameX365, const unsigned short int* anonymous_var_nameX366, int* anonymous_var_nameX367, int anonymous_var_nameX368, const unsigned short int* anonymous_var_nameX369, const unsigned short int** anonymous_var_nameX370);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX371, const unsigned int* anonymous_var_nameX372, int* anonymous_var_nameX373, int anonymous_var_nameX374, const unsigned int* anonymous_var_nameX375, const unsigned int** anonymous_var_nameX376);

int pcre_get_stringnumber(const struct real_pcre* anonymous_var_nameX377, const char* anonymous_var_nameX378);

int pcre16_get_stringnumber(const struct real_pcre16* anonymous_var_nameX379, const unsigned short int* anonymous_var_nameX380);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX381, const unsigned int* anonymous_var_nameX382);

int pcre_get_stringtable_entries(const struct real_pcre* anonymous_var_nameX383, const char* anonymous_var_nameX384, char** anonymous_var_nameX385, char** anonymous_var_nameX386);

int pcre16_get_stringtable_entries(const struct real_pcre16* anonymous_var_nameX387, const unsigned short int* anonymous_var_nameX388, unsigned short int** anonymous_var_nameX389, unsigned short int** anonymous_var_nameX390);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX391, const unsigned int* anonymous_var_nameX392, unsigned int** anonymous_var_nameX393, unsigned int** anonymous_var_nameX394);

int pcre_get_substring(const char* anonymous_var_nameX395, int* anonymous_var_nameX396, int anonymous_var_nameX397, int anonymous_var_nameX398, const char** anonymous_var_nameX399);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX400, int* anonymous_var_nameX401, int anonymous_var_nameX402, int anonymous_var_nameX403, const unsigned short int** anonymous_var_nameX404);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX405, int* anonymous_var_nameX406, int anonymous_var_nameX407, int anonymous_var_nameX408, const unsigned int** anonymous_var_nameX409);

int pcre_get_substring_list(const char* anonymous_var_nameX410, int* anonymous_var_nameX411, int anonymous_var_nameX412, const char*** anonymous_var_nameX413);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX414, int* anonymous_var_nameX415, int anonymous_var_nameX416, const unsigned short int*** anonymous_var_nameX417);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX418, int* anonymous_var_nameX419, int anonymous_var_nameX420, const unsigned int*** anonymous_var_nameX421);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre* anonymous_var_nameX422, int anonymous_var_nameX423);

int pcre16_refcount(struct real_pcre16* anonymous_var_nameX424, int anonymous_var_nameX425);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX426, int anonymous_var_nameX427);

struct pcre_extra* pcre_study(const struct real_pcre* anonymous_var_nameX428, int anonymous_var_nameX429, const char** anonymous_var_nameX430);

struct pcre16_extra* pcre16_study(const struct real_pcre16* anonymous_var_nameX431, int anonymous_var_nameX432, const char** anonymous_var_nameX433);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX434, int anonymous_var_nameX435, const char** anonymous_var_nameX436);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX437);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX438);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX439);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre* anonymous_var_nameX440, struct pcre_extra* anonymous_var_nameX441, const unsigned char* anonymous_var_nameX442);

int pcre16_pattern_to_host_byte_order(struct real_pcre16* anonymous_var_nameX443, struct pcre16_extra* anonymous_var_nameX444, const unsigned char* anonymous_var_nameX445);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX446, struct pcre32_extra* anonymous_var_nameX447, const unsigned char* anonymous_var_nameX448);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX449, const unsigned short int* anonymous_var_nameX450, int anonymous_var_nameX451, int* anonymous_var_nameX452, int anonymous_var_nameX453);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX454, const unsigned int* anonymous_var_nameX455, int anonymous_var_nameX456, int* anonymous_var_nameX457, int anonymous_var_nameX458);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX459, int anonymous_var_nameX460);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX461, int anonymous_var_nameX462);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX463, int anonymous_var_nameX464);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX465);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX466);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX467);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX468, struct real_pcre_jit_stack* (*anonymous_var_nameX469)(void*), void* anonymous_var_nameX470);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX471, struct real_pcre16_jit_stack* (*anonymous_var_nameX472)(void*), void* anonymous_var_nameX473);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX474, struct real_pcre32_jit_stack* (*anonymous_var_nameX475)(void*), void* anonymous_var_nameX476);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* __dest, const unsigned int* __src);

unsigned int* wcsncpy(unsigned int* __dest, const unsigned int* __src, long int __n);

unsigned int* wcscat(unsigned int* __dest, const unsigned int* __src);

unsigned int* wcsncat(unsigned int* __dest, const unsigned int* __src, long int __n);

int wcscmp(const unsigned int* __s1, const unsigned int* __s2);

int wcsncmp(const unsigned int* __s1, const unsigned int* __s2, long int __n);

int wcscasecmp(const unsigned int* __s1, const unsigned int* __s2);

int wcsncasecmp(const unsigned int* __s1, const unsigned int* __s2, long int __n);

int wcscasecmp_l(const unsigned int* __s1, const unsigned int* __s2, struct __locale_struct* __loc);

int wcsncasecmp_l(const unsigned int* __s1, const unsigned int* __s2, long int __n, struct __locale_struct* __loc);

int wcscoll(const unsigned int* __s1, const unsigned int* __s2);

long int wcsxfrm(unsigned int* __s1, const unsigned int* __s2, long int __n);

int wcscoll_l(const unsigned int* __s1, const unsigned int* __s2, struct __locale_struct* __loc);

long int wcsxfrm_l(unsigned int* __s1, const unsigned int* __s2, long int __n, struct __locale_struct* __loc);

unsigned int* wcsdup(const unsigned int* __s);

unsigned int* wcschr(const unsigned int* __wcs, unsigned int __wc);

unsigned int* wcsrchr(const unsigned int* __wcs, unsigned int __wc);

unsigned int* wcschrnul(const unsigned int* __s, unsigned int __wc);

long int wcscspn(const unsigned int* __wcs, const unsigned int* __reject);

long int wcsspn(const unsigned int* __wcs, const unsigned int* __accept);

unsigned int* wcspbrk(const unsigned int* __wcs, const unsigned int* __accept);

unsigned int* wcsstr(const unsigned int* __haystack, const unsigned int* __needle);

unsigned int* wcstok(unsigned int* __s, const unsigned int* __delim, unsigned int** __ptr);

long int wcslen(const unsigned int* __s);

unsigned int* wcswcs(const unsigned int* __haystack, const unsigned int* __needle);

long int wcsnlen(const unsigned int* __s, long int __maxlen);

unsigned int* wmemchr(const unsigned int* __s, unsigned int __c, long int __n);

int wmemcmp(const unsigned int* __s1, const unsigned int* __s2, long int __n);

unsigned int* wmemcpy(unsigned int* __s1, const unsigned int* __s2, long int __n);

unsigned int* wmemmove(unsigned int* __s1, const unsigned int* __s2, long int __n);

unsigned int* wmemset(unsigned int* __s, unsigned int __c, long int __n);

unsigned int* wmempcpy(unsigned int* __s1, const unsigned int* __s2, long int __n);

unsigned int btowc(int __c);

int wctob(unsigned int __c);

int mbsinit(const struct anonymous_typeX2* __ps);

long int mbrtowc(unsigned int* __pwc, const char* __s, long int __n, struct anonymous_typeX2* __p);

long int wcrtomb(char* __s, unsigned int __wc, struct anonymous_typeX2* __ps);

long int __mbrlen(const char* __s, long int __n, struct anonymous_typeX2* __ps);

long int mbrlen(const char* __s, long int __n, struct anonymous_typeX2* __ps);

long int mbsrtowcs(unsigned int* __dst, const char** __src, long int __len, struct anonymous_typeX2* __ps);

long int wcsrtombs(char* __dst, const unsigned int** __src, long int __len, struct anonymous_typeX2* __ps);

long int mbsnrtowcs(unsigned int* __dst, const char** __src, long int __nmc, long int __len, struct anonymous_typeX2* __ps);

long int wcsnrtombs(char* __dst, const unsigned int** __src, long int __nwc, long int __len, struct anonymous_typeX2* __ps);

int wcwidth(unsigned int __c);

int wcswidth(const unsigned int* __s, long int __n);

double wcstod(const unsigned int* __nptr, unsigned int** __endptr);

float wcstof(const unsigned int* __nptr, unsigned int** __endptr);

long double wcstold(const unsigned int* __nptr, unsigned int** __endptr);

float wcstof32(const unsigned int* __nptr, unsigned int** __endptr);

double wcstof64(const unsigned int* __nptr, unsigned int** __endptr);

long double wcstof128(const unsigned int* __nptr, unsigned int** __endptr);

double wcstof32x(const unsigned int* __nptr, unsigned int** __endptr);

long double wcstof64x(const unsigned int* __nptr, unsigned int** __endptr);

long int wcstol(const unsigned int* __nptr, unsigned int** __endptr, int __base);

unsigned long int wcstoul(const unsigned int* __nptr, unsigned int** __endptr, int __base);

long long int wcstoll(const unsigned int* __nptr, unsigned int** __endptr, int __base);

unsigned long long int wcstoull(const unsigned int* __nptr, unsigned int** __endptr, int __base);

long long int wcstoq(const unsigned int* __nptr, unsigned int** __endptr, int __base);

unsigned long long int wcstouq(const unsigned int* __nptr, unsigned int** __endptr, int __base);

long int wcstol_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int wcstoul_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);

long long int wcstoll_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int wcstoull_l(const unsigned int* __nptr, unsigned int** __endptr, int __base, struct __locale_struct* __loc);

double wcstod_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

float wcstof_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

long double wcstold_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

float wcstof32_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

double wcstof64_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

long double wcstof128_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

double wcstof32x_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

long double wcstof64x_l(const unsigned int* __nptr, unsigned int** __endptr, struct __locale_struct* __loc);

unsigned int* wcpcpy(unsigned int* __dest, const unsigned int* __src);

unsigned int* wcpncpy(unsigned int* __dest, const unsigned int* __src, long int __n);

struct _IO_FILE* open_wmemstream(unsigned int** __bufloc, long int* __sizeloc);

int fwide(struct _IO_FILE* __fp, int __mode);

int fwprintf(struct _IO_FILE* __stream, const unsigned int* __format, ...);

int wprintf(const unsigned int* __format, ...);

int swprintf(unsigned int* __s, long int __n, const unsigned int* __format, ...);

int vfwprintf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);

int vwprintf(const unsigned int* __format, va_list __arg);

int vswprintf(unsigned int* __s, long int __n, const unsigned int* __format, va_list __arg);

int fwscanf(struct _IO_FILE* __stream, const unsigned int* __format, ...);

int wscanf(const unsigned int* __format, ...);

int swscanf(const unsigned int* __s, const unsigned int* __format, ...);

int __isoc99_fwscanf(struct _IO_FILE* __stream, const unsigned int* __format, ...);

int __isoc99_wscanf(const unsigned int* __format, ...);

int __isoc99_swscanf(const unsigned int* __s, const unsigned int* __format, ...);

int vfwscanf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);

int vwscanf(const unsigned int* __format, va_list __arg);

int vswscanf(const unsigned int* __s, const unsigned int* __format, va_list __arg);

int __isoc99_vfwscanf(struct _IO_FILE* __s, const unsigned int* __format, va_list __arg);

int __isoc99_vwscanf(const unsigned int* __format, va_list __arg);

int __isoc99_vswscanf(const unsigned int* __s, const unsigned int* __format, va_list __arg);

unsigned int fgetwc(struct _IO_FILE* __stream);

unsigned int getwc(struct _IO_FILE* __stream);

unsigned int getwchar();

unsigned int fputwc(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int putwc(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int putwchar(unsigned int __wc);

unsigned int* fgetws(unsigned int* __ws, int __n, struct _IO_FILE* __stream);

int fputws(const unsigned int* __ws, struct _IO_FILE* __stream);

unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int getwc_unlocked(struct _IO_FILE* __stream);

unsigned int getwchar_unlocked();

unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);

unsigned int fputwc_unlocked(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int putwc_unlocked(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int putwchar_unlocked(unsigned int __wc);

unsigned int* fgetws_unlocked(unsigned int* __ws, int __n, struct _IO_FILE* __stream);

int fputws_unlocked(const unsigned int* __ws, struct _IO_FILE* __stream);

long int wcsftime(unsigned int* __s, long int __maxsize, const unsigned int* __format, const struct tm* __tp);

long int wcsftime_l(unsigned int* __s, long int __maxsize, const unsigned int* __format, const struct tm* __tp, struct __locale_struct* __loc);

long int __sysconf(int __name);

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

void come_regex_finalize(struct come_regex* reg);

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* come_regex_clone(struct come_regex* reg);

char* come_regex_to_string(struct come_regex* regex);

char* string_lower_case(char* str);

char* string_upper_case(char* str);

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);

unsigned int* __builtin_wstring(char* str);

int charp_index_count(char* str, char* search_str, int count, int default_value);

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);

int charp_rindex(char* str, char* search_str, int default_value);

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);

int charp_rindex_count(char* str, char* search_str, int count, int default_value);

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);

char* charp_strip(char* self);

char* charp_printable(char* str);

char* wchar_tp_to_string(unsigned int* wstr);

unsigned int* charp_to_wstring(char* str);

int wchar_tp_length(unsigned int* str);

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);

unsigned int* wchar_tp_reverse(unsigned int* str);

unsigned int* wchar_tp_multiply(unsigned int* str, int n);

unsigned int* wchar_tp_printable(unsigned int* str);

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);

static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);

int wstring_compare(unsigned int* left, unsigned int* right);

unsigned int come_regex_get_hash_key(struct come_regex* reg);

_Bool wchar_tp_equals(unsigned int left, unsigned int right);

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);

unsigned int* wstring_operator_mult(unsigned int* str, int n);

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);

int charp_index(char* str, char* search_str, int default_value);

int charp_index_regex(char* self, struct come_regex* reg, int default_value);

char* charp_replace(char* self, int index, char c);

char* charp_multiply(char* str, int n);

char* charp_sub(char* self, struct come_regex* reg, char* replace);

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);

struct list$1charph* charp_split_str(char* self, char* str);

struct list$1charph* charp_scan(char* self, struct come_regex* reg);

struct list$1charph* charp_split(char* self, struct come_regex* reg);

_Bool charp_match(char* self, struct come_regex* reg);

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);

_Bool charp_match_count(char* self, struct come_regex* reg, int count);

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

unsigned int wchar_tp_get_hash_key(unsigned int* value);

_Bool wstring_equals(unsigned int* left, unsigned int* right);

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);

unsigned int wchar_t_get_hash_key(unsigned int value);

_Bool wchar_t_equals(unsigned int left, unsigned int right);

char* wchar_t_to_string(unsigned int wc);

char* string_chomp(char* str);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result1__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result2__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result3__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result4__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result4__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result5__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result5__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result6__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result6__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline void die(char* msg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    (gCallerSName = "./comelang2.h", gCallerSLine = 106,perror(msg));
    __freed_obj__ = 0;
    (gCallerSName = "./comelang2.h", gCallerSLine = 107,exit(4));
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2008))));
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2010))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2010))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2011))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2011))->memory, "./comelang2.h", 2011))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result7__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2018))));
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2020))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2020))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2021))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2021))->memory, "./comelang2.h", 2021))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result8__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2028))));
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2030))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2030))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2031))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2031))->memory, "./comelang2.h", 2031))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result9__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2038))));
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2040))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2040))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2041))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2041))->memory, "./comelang2.h", 2041))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result10__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2048))));
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2050))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2050))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2051))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2051))->memory, "./comelang2.h", 2051))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result11__;
    __freed_obj__ = 0;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value10;
unsigned int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result12__ = __result_obj__ = ((unsigned int*)(right_value10=(gCallerSName = "./comelang2-str.h", gCallerSLine = 47,wchar_tp_substring(str,head,tail))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result12__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result13__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 53,charp_index_count(str,search_str,count,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result13__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result14__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 59,charp_index_regex_count(self,reg,count,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result14__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result15__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 65,charp_rindex(str,search_str,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result15__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result16__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 71,charp_rindex_regex(self,reg,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result16__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result17__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 77,charp_rindex_count(str,search_str,default_value,-1));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result17__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value11;
struct list$1charph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result18__ = __result_obj__ = ((struct list$1charph*)(right_value11=(gCallerSName = "./comelang2-str.h", gCallerSLine = 83,charp_scan_block(self,reg,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result18__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value12;
struct list$1charph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result19__ = __result_obj__ = ((struct list$1charph*)(right_value12=(gCallerSName = "./comelang2-str.h", gCallerSLine = 89,charp_scan_block_count(self,reg,count,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result19__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result20__ = __result_obj__ = ((struct list$1charph*)(right_value13=(gCallerSName = "./comelang2-str.h", gCallerSLine = 95,charp_split_block(self,reg,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result20__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value14;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result21__ = __result_obj__ = ((struct list$1charph*)(right_value14=(gCallerSName = "./comelang2-str.h", gCallerSLine = 101,charp_split_block_count(self,reg,count,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result21__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result22__ = __result_obj__ = ((struct list$1charph*)(right_value15=(gCallerSName = "./comelang2-str.h", gCallerSLine = 107,charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result22__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_strip(char* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value16;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result23__ = __result_obj__ = ((char*)(right_value16=(gCallerSName = "./comelang2-str.h", gCallerSLine = 113,charp_strip(self))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result23__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_printable(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value17;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result24__ = __result_obj__ = ((char*)(right_value17=(gCallerSName = "./comelang2-str.h", gCallerSLine = 119,string_printable(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result24__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* string_to_wstring(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value18;
unsigned int* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result25__ = __result_obj__ = ((unsigned int*)(right_value18=(gCallerSName = "./comelang2-str.h", gCallerSLine = 125,charp_to_wstring(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result25__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* wstring_to_string(unsigned int* wstr){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value19;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result26__ = __result_obj__ = ((char*)(right_value19=(gCallerSName = "./comelang2-str.h", gCallerSLine = 133,wchar_tp_to_string(wstr))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result26__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int wstring_length(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result27__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 139,wchar_tp_length(str));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result27__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value20;
unsigned int* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result28__ = __result_obj__ = ((unsigned int*)(right_value20=(gCallerSName = "./comelang2-str.h", gCallerSLine = 145,wchar_tp_delete(str,head,tail))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result28__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result29__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 151,wchar_tp_index(str,search_str,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result29__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result30__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 157,wchar_tp_rindex(str,search_str,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result30__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value21;
unsigned int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result31__ = __result_obj__ = ((unsigned int*)(right_value21=(gCallerSName = "./comelang2-str.h", gCallerSLine = 163,wchar_tp_reverse(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result31__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value22;
unsigned int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result32__ = __result_obj__ = ((unsigned int*)(right_value22=(gCallerSName = "./comelang2-str.h", gCallerSLine = 169,wchar_tp_multiply(str,n))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result32__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value23;
unsigned int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result33__ = __result_obj__ = ((unsigned int*)(right_value23=(gCallerSName = "./comelang2-str.h", gCallerSLine = 175,wchar_tp_printable(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result33__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result34__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 197,wchar_tp_get_hash_key(value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result34__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result35__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 209,charp_match_group_strings(self,reg,count,group_strings));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result35__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_index(char* str, char* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result36__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 215,charp_index(str,search_str,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result36__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result37__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 221,charp_index_regex(self,reg,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result37__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_replace(char* self, int index, char c){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result38__ = __result_obj__ = ((char*)(right_value24=(gCallerSName = "./comelang2-str.h", gCallerSLine = 228,charp_replace(self,index,c))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result38__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_multiply(char* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result39__ = __result_obj__ = ((char*)(right_value25=(gCallerSName = "./comelang2-str.h", gCallerSLine = 234,charp_multiply(str,n))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result39__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value26;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result40__ = __result_obj__ = ((char*)(right_value26=(gCallerSName = "./comelang2-str.h", gCallerSLine = 240,charp_sub(self,reg,replace))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result40__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value27;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result41__ = __result_obj__ = ((char*)(right_value27=(gCallerSName = "./comelang2-str.h", gCallerSLine = 246,charp_sub_count(self,reg,replace,count))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result41__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value28;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result42__ = __result_obj__ = ((struct list$1charph*)(right_value28=(gCallerSName = "./comelang2-str.h", gCallerSLine = 252,charp_split_str(self,str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result42__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value29;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result43__ = __result_obj__ = ((struct list$1charph*)(right_value29=(gCallerSName = "./comelang2-str.h", gCallerSLine = 258,charp_scan(self,reg))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result43__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value30;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result44__ = __result_obj__ = ((struct list$1charph*)(right_value30=(gCallerSName = "./comelang2-str.h", gCallerSLine = 264,charp_split(self,reg))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result44__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result45__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 270,charp_match(self,reg));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result45__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value31;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result46__ = __result_obj__ = ((struct list$1charph*)(right_value31=(gCallerSName = "./comelang2-str.h", gCallerSLine = 276,charp_split_maxsplit(self,reg,maxsplit))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result46__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result47__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 282,charp_rindex_regex_count(self,reg,count,default_value));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result47__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result48__ = (gCallerSName = "./comelang2-str.h", gCallerSLine = 288,charp_match_count(self,reg,count));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result48__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value32;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result49__ = __result_obj__ = ((char*)(right_value32=(gCallerSName = "./comelang2-str.h", gCallerSLine = 294,charp_sub_block(self,reg,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result49__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value33;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result50__ = __result_obj__ = ((char*)(right_value33=(gCallerSName = "./comelang2-str.h", gCallerSLine = 300,charp_sub_block_count(self,reg,count,parent,block))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result50__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline char* charp_chomp(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value35;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result52__ = __result_obj__ = ((char*)(right_value35=(gCallerSName = "./comelang2-str.h", gCallerSLine = 318,string_chomp(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result52__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}









































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_5;
int erro_ofs_6;
int options_7;
void* right_value36;
char* __dec_obj6;
_Bool _if_conditional5;
struct come_regex* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_6, 0, sizeof(int));
memset(&options_7, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_7=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __freed_obj__ = 0;
    __dec_obj6=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str=(char*)come_increment_ref_count(((char*)(right_value36=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 24,__builtin_string(str)))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 26))->ignore_case=ignore_case;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 27))->multiline=multiline;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 28))->global=global;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 29))->extended=extended;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 30))->dotall=dotall;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 31))->anchored=anchored;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 32))->dollar_endonly=dollar_endonly;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 34))->options=options_7;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 36))->re=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 36,pcre_compile(str,options_7,&err_5,&erro_ofs_6,((void*)0)));
    __freed_obj__ = 0;
    if(_if_conditional5=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 49))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional5) {
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 39,printf("regex error (%s)\n",str));
        __freed_obj__ = 0;
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 40,exit(1));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result53__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result53__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

void come_regex_finalize(struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    if(_if_conditional6=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 57))->str,    __freed_obj__ = 0, 
    _if_conditional6) {
        if(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str && !__freed_obj__) { ((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str = come_decrement_ref_count(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional7=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 60))->re,    __freed_obj__ = 0, 
    _if_conditional7) {
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 58,free(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 58))->re));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value37;
void* right_value38;
struct come_regex* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result54__ = __result_obj__ = ((struct come_regex*)(right_value38=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 64,come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value37=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 64)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy))));
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result54__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value39;
void* right_value40;
struct come_regex* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result55__ = __result_obj__ = ((struct come_regex*)(right_value40=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 69,come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value39=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 69)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy))));
    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result55__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
struct come_regex* __result56__;
void* right_value41;
struct come_regex* result_8;
void* right_value42;
char* __dec_obj7;
const char* err_9;
int erro_ofs_10;
_Bool _if_conditional9;
struct come_regex* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct come_regex*));
memset(&right_value42, 0, sizeof(void*));
memset(&erro_ofs_10, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    if(_if_conditional8=reg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        __result56__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_8=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value41=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 79))));
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj7=((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 81))->str;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 81))->str=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 81))->str))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 83))->ignore_case=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 83))->ignore_case;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 84))->multiline=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 84))->multiline;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 85))->global=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 85))->global;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 86))->extended=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 86))->extended;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 87))->dotall=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 87))->dotall;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 88))->anchored=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 88))->anchored;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 89))->dollar_endonly=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 89))->dollar_endonly;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 90))->ungreedy=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 90))->ungreedy;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 92))->options=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 92))->options;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 97))->re=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 97,pcre_compile(((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 97))->str,((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 97))->options,&err_9,&erro_ofs_10,((void*)0)));
    __freed_obj__ = 0;
    if(_if_conditional9=((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 104))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional9) {
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 100,printf("regex compile error(%s)\n",((struct come_regex*)come_null_check(result_8, "libcomelang2-str.c", 100))->str));
        __freed_obj__ = 0;
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 101,exit(1));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result57__ = __result_obj__ = result_8;
    if(result_8 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result57__;
    __freed_obj__ = 0;
    if(result_8 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* come_regex_to_string(struct come_regex* regex){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value43;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result58__ = __result_obj__ = ((char*)(right_value43=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 109,__builtin_string(((struct come_regex*)come_null_check(regex, "libcomelang2-str.c", 109))->str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result58__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* string_lower_case(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value44;
char* result_11;
int i_12;
_Bool _for_condtionalA1;
_Bool _if_conditional10;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&result_11, 0, sizeof(char*));
memset(&i_12, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_11=(char*)come_increment_ref_count(((char*)(right_value44=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 114,__builtin_string(str)))));
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_12=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    i_12<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 121,strlen(str)) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    i_12++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional10=str[i_12]>=65&&str[i_12]<=90,        __freed_obj__ = 0, 
        _if_conditional10) {
            result_11[i_12]=str[i_12]-65+97;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result59__ = __result_obj__ = result_11;
    if(result_11 && !__freed_obj__) { result_11 = come_decrement_ref_count(result_11, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result59__;
    __freed_obj__ = 0;
    if(result_11 && !__freed_obj__) { result_11 = come_decrement_ref_count(result_11, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* string_upper_case(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value45;
char* result_13;
int i_14;
_Bool _for_condtionalA2;
_Bool _if_conditional11;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_13, 0, sizeof(char*));
memset(&i_14, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_13=(char*)come_increment_ref_count(((char*)(right_value45=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 126,__builtin_string(str)))));
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_14=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    i_14<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 133,strlen(str)) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    i_14++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional11=str[i_14]>=97&&str[i_14]<=122,        __freed_obj__ = 0, 
        _if_conditional11) {
            result_13[i_14]=str[i_14]-97+65;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result60__ = __result_obj__ = result_13;
    if(result_13 && !__freed_obj__) { result_13 = come_decrement_ref_count(result_13, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result60__;
    __freed_obj__ = 0;
    if(result_13 && !__freed_obj__) { result_13 = come_decrement_ref_count(result_13, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
void* right_value46;
unsigned int* __result61__;
int len_15;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
void* right_value47;
unsigned int* __result62__;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
void* right_value48;
unsigned int* __result63__;
_Bool _if_conditional19;
void* right_value49;
unsigned int* __result64__;
void* right_value50;
unsigned int* result_16;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&len_15, 0, sizeof(int));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&result_16, 0, sizeof(unsigned int*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    if(_if_conditional12=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional12) {
        __result61__ = __result_obj__ = ((unsigned int*)(right_value46=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 141,__builtin_wstring(""))));
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result61__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_15=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 144,wcslen(str));
    __freed_obj__ = 0;
    if(_if_conditional13=head<0,    __freed_obj__ = 0, 
    _if_conditional13) {
        head+=len_15;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional14=tail<0,    __freed_obj__ = 0, 
    _if_conditional14) {
        tail+=len_15+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional15=head>tail,    __freed_obj__ = 0, 
    _if_conditional15) {
        __result62__ = __result_obj__ = ((unsigned int*)(right_value47=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 154,__builtin_wstring(""))));
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result62__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional16=head<0,    __freed_obj__ = 0, 
    _if_conditional16) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional17=tail>=len_15,    __freed_obj__ = 0, 
    _if_conditional17) {
        tail=len_15;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional18=head==tail,    __freed_obj__ = 0, 
    _if_conditional18) {
        __result63__ = __result_obj__ = ((unsigned int*)(right_value48=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 166,__builtin_wstring(""))));
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result63__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional19=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional19) {
        __result64__ = __result_obj__ = ((unsigned int*)(right_value49=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 170,__builtin_wstring(""))));
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result64__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_16=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value50=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str.c", 173))));
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 175,memcpy(result_16,str+head,sizeof(unsigned int)*(tail-head)));
    __freed_obj__ = 0;
    result_16[tail-head]=0;
    __freed_obj__ = 0;
    __result65__ = __result_obj__ = result_16;
    if(result_16 && !__freed_obj__) { result_16 = come_decrement_ref_count(result_16, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result65__;
    __freed_obj__ = 0;
    if(result_16 && !__freed_obj__) { result_16 = come_decrement_ref_count(result_16, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* __builtin_wstring(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
unsigned int* __result66__;
int len_17;
void* right_value51;
unsigned int* wstr_18;
int ret_19;
_Bool _if_conditional21;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_17, 0, sizeof(int));
memset(&right_value51, 0, sizeof(void*));
memset(&wstr_18, 0, sizeof(unsigned int*));
memset(&ret_19, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    if(_if_conditional20=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional20) {
        __result66__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_17=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 186,strlen(str));
    __freed_obj__ = 0;
    wstr_18=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value51=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_17+1)), "libcomelang2-str.c", 188))));
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ret_19=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 190,mbstowcs(wstr_18,str,len_17+1));
    __freed_obj__ = 0;
    wstr_18[ret_19]=0;
    __freed_obj__ = 0;
    if(_if_conditional21=ret_19<0,    __freed_obj__ = 0, 
    _if_conditional21) {
        wstr_18[0]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = wstr_18;
    if(wstr_18 && !__freed_obj__) { wstr_18 = come_decrement_ref_count(wstr_18, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result67__;
    __freed_obj__ = 0;
    if(wstr_18 && !__freed_obj__) { wstr_18 = come_decrement_ref_count(wstr_18, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int n_20;
int len_21;
int i_22;
_Bool _for_condtionalA3;
int len2_23;
int j_24;
_Bool _for_condtionalA4;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
int __result68__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&n_20, 0, sizeof(int));
memset(&len_21, 0, sizeof(int));
memset(&i_22, 0, sizeof(int));
memset(&len2_23, 0, sizeof(int));
memset(&j_24, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    n_20=0;
    __freed_obj__ = 0;
    len_21=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 203,strlen(str));
    __freed_obj__ = 0;
    for(
    i_22=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    i_22<len_21 ,    __freed_obj__ = 0, 
    _for_condtionalA3;    i_22++ ,    __freed_obj__ = 0, 
    0    ){
        len2_23=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 205,strlen(search_str));
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        j_24=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        j_24<len2_23 ,        __freed_obj__ = 0, 
        _for_condtionalA4;        j_24++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional22=str[i_22+j_24]!=search_str[j_24],            __freed_obj__ = 0, 
            _if_conditional22) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=j_24==len2_23,        __freed_obj__ = 0, 
        _if_conditional23) {
            n_20++;
            __freed_obj__ = 0;
            if(_if_conditional24=n_20==count,            __freed_obj__ = 0, 
            _if_conditional24) {
                __result68__ = i_22;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result68__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result69__ = default_value;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result69__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int ovec_max_25;
int result_29;
int offset_30;
const char* err_31;
int erro_ofs_32;
int options_33;
char* str_34;
struct real_pcre* re_35;
int n_36;
_Bool _while_condtional1;
int options_37;
int len_38;
int regex_result_39;
int i_40;
_Bool _for_condtionalA5;
int i_41;
_Bool _for_condtionalA6;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_25, 0, sizeof(int));
memset(&result_29, 0, sizeof(int));
memset(&offset_30, 0, sizeof(int));
memset(&erro_ofs_32, 0, sizeof(int));
memset(&options_33, 0, sizeof(int));
memset(&str_34, 0, sizeof(char*));
memset(&re_35, 0, sizeof(struct real_pcre*));
memset(&n_36, 0, sizeof(int));
memset(&options_37, 0, sizeof(int));
memset(&len_38, 0, sizeof(int));
memset(&regex_result_39, 0, sizeof(int));
memset(&i_40, 0, sizeof(int));
memset(&i_41, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    ovec_max_25=16;
    __freed_obj__ = 0;
    int start_26[ovec_max_25];
    memset(&start_26, 0, sizeof(int)    *(ovec_max_25)    );
    __freed_obj__ = 0;
    int end_27[ovec_max_25];
    memset(&end_27, 0, sizeof(int)    *(ovec_max_25)    );
    __freed_obj__ = 0;
    int ovec_value_28[ovec_max_25*3];
    memset(&ovec_value_28, 0, sizeof(int)    *(ovec_max_25*3)    );
    __freed_obj__ = 0;
    result_29=default_value;
    __freed_obj__ = 0;
    offset_30=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_33=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 239))->options;
    __freed_obj__ = 0;
    str_34=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 240))->str;
    __freed_obj__ = 0;
    re_35=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 242))->re;
    __freed_obj__ = 0;
    n_36=0;
    __freed_obj__ = 0;
    while(_while_condtional1=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional1) {
        options_37=2097152;
        __freed_obj__ = 0;
        len_38=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 248,strlen(self));
        __freed_obj__ = 0;
        regex_result_39=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 249,pcre_exec(re_35,(struct pcre_extra*)0,self,len_38,offset_30,options_37,ovec_value_28,ovec_max_25*3));
        __freed_obj__ = 0;
        for(
        i_40=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        i_40<ovec_max_25 ,        __freed_obj__ = 0, 
        _for_condtionalA5;        i_40++ ,        __freed_obj__ = 0, 
        0        ){
            start_26[i_40]=ovec_value_28[i_40*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_41=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        i_41<ovec_max_25 ,        __freed_obj__ = 0, 
        _for_condtionalA6;        i_41++ ,        __freed_obj__ = 0, 
        0        ){
            end_27[i_41]=ovec_value_28[i_41*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=regex_result_39>0,        __freed_obj__ = 0, 
        _if_conditional25) {
            n_36++;
            __freed_obj__ = 0;
            if(_if_conditional26=offset_30==end_27[0],            __freed_obj__ = 0, 
            _if_conditional26) {
                offset_30++;
                __freed_obj__ = 0;
            }
            else {
                offset_30=end_27[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional27=n_36==count,            __freed_obj__ = 0, 
            _if_conditional27) {
                result_29=start_26[0];
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result70__ = result_29;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result70__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_rindex(char* str, char* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_42;
char* p_43;
_Bool _while_condtional2;
_Bool _if_conditional28;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_42, 0, sizeof(int));
memset(&p_43, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    len_42=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 287,strlen(search_str));
    __freed_obj__ = 0;
    p_43=str+(gCallerSName = "libcomelang2-str.c", gCallerSLine = 288,strlen(str))-len_42;
    __freed_obj__ = 0;
    while(_while_condtional2=p_43>=str,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional28=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 295,strncmp(p_43,search_str,len_42))==0,        __freed_obj__ = 0, 
        _if_conditional28) {
            __result71__ = p_43-str;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result71__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_43--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result72__ = default_value;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result72__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_44;
int erro_ofs_45;
int options_46;
char* str_47;
struct real_pcre* re_48;
void* right_value52;
char* self2_49;
int ovec_max_50;
int result_54;
int offset_55;
_Bool _while_condtional3;
int options_56;
int len_57;
int regex_result_58;
int i_59;
_Bool _for_condtionalA7;
int i_60;
_Bool _for_condtionalA8;
_Bool _if_conditional29;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_45, 0, sizeof(int));
memset(&options_46, 0, sizeof(int));
memset(&str_47, 0, sizeof(char*));
memset(&re_48, 0, sizeof(struct real_pcre*));
memset(&right_value52, 0, sizeof(void*));
memset(&self2_49, 0, sizeof(char*));
memset(&ovec_max_50, 0, sizeof(int));
memset(&result_54, 0, sizeof(int));
memset(&offset_55, 0, sizeof(int));
memset(&options_56, 0, sizeof(int));
memset(&len_57, 0, sizeof(int));
memset(&regex_result_58, 0, sizeof(int));
memset(&i_59, 0, sizeof(int));
memset(&i_60, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_46=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 306))->options;
    __freed_obj__ = 0;
    str_47=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 307))->str;
    __freed_obj__ = 0;
    re_48=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 309))->re;
    __freed_obj__ = 0;
    self2_49=(char*)come_increment_ref_count(((char*)(right_value52=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 311,charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 311)))))));
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ovec_max_50=16;
    __freed_obj__ = 0;
    int start_51[ovec_max_50];
    memset(&start_51, 0, sizeof(int)    *(ovec_max_50)    );
    __freed_obj__ = 0;
    int end_52[ovec_max_50];
    memset(&end_52, 0, sizeof(int)    *(ovec_max_50)    );
    __freed_obj__ = 0;
    int ovec_value_53[ovec_max_50*3];
    memset(&ovec_value_53, 0, sizeof(int)    *(ovec_max_50*3)    );
    __freed_obj__ = 0;
    result_54=default_value;
    __freed_obj__ = 0;
    offset_55=0;
    __freed_obj__ = 0;
    while(_while_condtional3=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional3) {
        options_56=2097152;
        __freed_obj__ = 0;
        len_57=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 324,strlen(self2_49));
        __freed_obj__ = 0;
        regex_result_58=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 325,pcre_exec(re_48,(struct pcre_extra*)0,self2_49,len_57,offset_55,options_56,ovec_value_53,ovec_max_50*3));
        __freed_obj__ = 0;
        for(
        i_59=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        i_59<ovec_max_50 ,        __freed_obj__ = 0, 
        _for_condtionalA7;        i_59++ ,        __freed_obj__ = 0, 
        0        ){
            start_51[i_59]=ovec_value_53[i_59*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_60=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        i_60<ovec_max_50 ,        __freed_obj__ = 0, 
        _for_condtionalA8;        i_60++ ,        __freed_obj__ = 0, 
        0        ){
            end_52[i_60]=ovec_value_53[i_60*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=regex_result_58==1||regex_result_58>0,        __freed_obj__ = 0, 
        _if_conditional29) {
            result_54=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 337,strlen(self))-1-start_51[0];
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result73__ = result_54;
    if(self2_49 && !__freed_obj__) { self2_49 = come_decrement_ref_count(self2_49, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result73__;
    __freed_obj__ = 0;
    if(self2_49 && !__freed_obj__) { self2_49 = come_decrement_ref_count(self2_49, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_61;
char* p_62;
int n_63;
_Bool _while_condtional4;
_Bool _if_conditional30;
_Bool _if_conditional31;
int __result74__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_61, 0, sizeof(int));
memset(&p_62, 0, sizeof(char*));
memset(&n_63, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    len_61=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 353,strlen(search_str));
    __freed_obj__ = 0;
    p_62=str+(gCallerSName = "libcomelang2-str.c", gCallerSLine = 354,strlen(str))-len_61;
    __freed_obj__ = 0;
    n_63=0;
    __freed_obj__ = 0;
    while(_while_condtional4=p_62>=str,    __freed_obj__ = 0, 
    _while_condtional4) {
        if(_if_conditional30=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 366,strncmp(p_62,search_str,len_61))==0,        __freed_obj__ = 0, 
        _if_conditional30) {
            n_63++;
            __freed_obj__ = 0;
            if(_if_conditional31=n_63==count,            __freed_obj__ = 0, 
            _if_conditional31) {
                __result74__ = p_62-str;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_62--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result75__ = default_value;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result75__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value53;
void* right_value54;
struct list$1charph* result_66;
int offset_67;
int ovec_max_68;
const char* err_72;
int erro_ofs_73;
int options_74;
char* str_75;
struct real_pcre* re_76;
_Bool _while_condtional6;
int options_77;
int len_78;
int regex_result_79;
int i_80;
_Bool _for_condtionalA9;
int i_81;
_Bool _for_condtionalA10;
_Bool _if_conditional33;
void* right_value55;
char* str_82;
void* right_value56;
void* right_value57;
struct list$1charph* group_strings_83;
void* right_value58;
char* str2_84;
_Bool _if_conditional34;
struct list$1charph* __result77__;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value62;
char* str_88;
void* right_value63;
void* right_value64;
struct list$1charph* group_strings_89;
int i_90;
_Bool _for_condtionalA11;
void* right_value65;
char* match_string_91;
void* right_value66;
char* str2_92;
_Bool _if_conditional39;
struct list$1charph* __result79__;
_Bool _if_conditional40;
struct list$1charph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&offset_67, 0, sizeof(int));
memset(&ovec_max_68, 0, sizeof(int));
memset(&erro_ofs_73, 0, sizeof(int));
memset(&options_74, 0, sizeof(int));
memset(&str_75, 0, sizeof(char*));
memset(&re_76, 0, sizeof(struct real_pcre*));
memset(&options_77, 0, sizeof(int));
memset(&len_78, 0, sizeof(int));
memset(&regex_result_79, 0, sizeof(int));
memset(&i_80, 0, sizeof(int));
memset(&i_81, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&str_82, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&group_strings_83, 0, sizeof(struct list$1charph*));
memset(&right_value58, 0, sizeof(void*));
memset(&str2_84, 0, sizeof(char*));
memset(&right_value62, 0, sizeof(void*));
memset(&str_88, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&group_strings_89, 0, sizeof(struct list$1charph*));
memset(&i_90, 0, sizeof(int));
memset(&right_value65, 0, sizeof(void*));
memset(&match_string_91, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&str2_92, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 374,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 374))), "libcomelang2-str.c", 374))))))));
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_67=0;
    __freed_obj__ = 0;
    ovec_max_68=16;
    __freed_obj__ = 0;
    int start_69[ovec_max_68];
    memset(&start_69, 0, sizeof(int)    *(ovec_max_68)    );
    __freed_obj__ = 0;
    int end_70[ovec_max_68];
    memset(&end_70, 0, sizeof(int)    *(ovec_max_68)    );
    __freed_obj__ = 0;
    int ovec_value_71[ovec_max_68*3];
    memset(&ovec_value_71, 0, sizeof(int)    *(ovec_max_68*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_74=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 386))->options;
    __freed_obj__ = 0;
    str_75=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 387))->str;
    __freed_obj__ = 0;
    re_76=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 389))->re;
    __freed_obj__ = 0;
    while(_while_condtional6=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional6) {
        options_77=2097152;
        __freed_obj__ = 0;
        len_78=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 393,strlen(self));
        __freed_obj__ = 0;
        regex_result_79=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 394,pcre_exec(re_76,(struct pcre_extra*)0,self,len_78,offset_67,options_77,ovec_value_71,ovec_max_68*3));
        __freed_obj__ = 0;
        for(
        i_80=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        i_80<ovec_max_68 ,        __freed_obj__ = 0, 
        _for_condtionalA9;        i_80++ ,        __freed_obj__ = 0, 
        0        ){
            start_69[i_80]=ovec_value_71[i_80*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_81=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        i_81<ovec_max_68 ,        __freed_obj__ = 0, 
        _for_condtionalA10;        i_81++ ,        __freed_obj__ = 0, 
        0        ){
            end_70[i_81]=ovec_value_71[i_81*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=regex_result_79==1,        __freed_obj__ = 0, 
        _if_conditional33) {
            str_82=(char*)come_increment_ref_count(((char*)(right_value55=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 406,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 406)),start_69[0],end_70[0])))));
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            group_strings_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 408,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value56=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 408))), "libcomelang2-str.c", 408))))))));
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_84=(char*)come_increment_ref_count(((char*)(right_value58=block(parent,str_82,group_strings_83))));
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional34=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 416))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional34) {
                __result77__ = __result_obj__ = result_66;
                if(str_82 && !__freed_obj__) { str_82 = come_decrement_ref_count(str_82, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_83 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_84 && !__freed_obj__) { str2_84 = come_decrement_ref_count(str2_84, (void*)0, (void*)0, 0, 0, 0); }
                if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result77__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 416,list$1charph_push_back(((struct list$1charph*)come_null_check(result_66, "libcomelang2-str.c", 416)),(char*)come_increment_ref_count(str2_84)));
            __freed_obj__ = 0;
            if(_if_conditional37=offset_67==end_70[0],            __freed_obj__ = 0, 
            _if_conditional37) {
                offset_67++;
                __freed_obj__ = 0;
            }
            else {
                offset_67=end_70[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_82 && !__freed_obj__) { str_82 = come_decrement_ref_count(str_82, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_83 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_84 && !__freed_obj__) { str2_84 = come_decrement_ref_count(str2_84, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional38=regex_result_79>1,            __freed_obj__ = 0, 
            _if_conditional38) {
                str_88=(char*)come_increment_ref_count(((char*)(right_value62=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 427,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 427)),start_69[0],end_70[0])))));
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                group_strings_89=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value64=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 429,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value63=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 429))), "libcomelang2-str.c", 429))))))));
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_90=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA11=                i_90<regex_result_79 ,                __freed_obj__ = 0, 
                _for_condtionalA11;                i_90++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_91=(char*)come_increment_ref_count(((char*)(right_value65=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 431,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 431)),start_69[i_90],end_70[i_90])))));
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 432,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_89, "libcomelang2-str.c", 432)),(char*)come_increment_ref_count(match_string_91)));
                    __freed_obj__ = 0;
                    if(match_string_91 && !__freed_obj__) { match_string_91 = come_decrement_ref_count(match_string_91, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_92=(char*)come_increment_ref_count(((char*)(right_value66=block(parent,str_88,group_strings_89))));
                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional39=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 441))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional39) {
                    __result79__ = __result_obj__ = result_66;
                    if(str_88 && !__freed_obj__) { str_88 = come_decrement_ref_count(str_88, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_89 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_92 && !__freed_obj__) { str2_92 = come_decrement_ref_count(str2_92, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 441,list$1charph_push_back(((struct list$1charph*)come_null_check(result_66, "libcomelang2-str.c", 441)),(char*)come_increment_ref_count(str2_92)));
                __freed_obj__ = 0;
                if(_if_conditional40=offset_67==end_70[0],                __freed_obj__ = 0, 
                _if_conditional40) {
                    offset_67++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_67=end_70[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_88 && !__freed_obj__) { str_88 = come_decrement_ref_count(str_88, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_89 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_92 && !__freed_obj__) { str2_92 = come_decrement_ref_count(str2_92, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result80__ = __result_obj__ = result_66;
    if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result80__;
    __freed_obj__ = 0;
    if(result_66 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 171))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 172))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 173))->len=0;
        __freed_obj__ = 0;
        __result76__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result76__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_64;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_64, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1charph*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            it_64=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional5=it_64!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional5) {
                prev_it_65=it_64;
                __freed_obj__ = 0;
                it_64=((struct list_item$1charph*)come_null_check(it_64, "./comelang2.h", 193))->next;
                __freed_obj__ = 0;
                if(prev_it_65 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    if(_if_conditional32=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional32) {
                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional35;
void* right_value59;
struct list_item$1charph* litem_85;
char* __dec_obj8;
_Bool _if_conditional36;
void* right_value60;
struct list_item$1charph* litem_86;
char* __dec_obj9;
void* right_value61;
struct list_item$1charph* litem_87;
char* __dec_obj10;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
memset(&right_value60, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional35=((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len==0,                __freed_obj__ = 0, 
                _if_conditional35) {
                    litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 293))));
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 295))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 296))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj8=((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 297))->item;
                    ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 297))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_85;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 300))->head=litem_85;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional36=((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional36) {
                        litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 303))));
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 305))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 305))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 306))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj9=((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 307))->item;
                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 307))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 309))->tail=litem_86;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 310))->head, "./comelang2.h", 310))->next=litem_86;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 313))));
                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 315))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 315))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 316))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj10=((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 317))->item;
                        ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 317))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 319))->tail, "./comelang2.h", 319))->next=litem_87;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 320))->tail=litem_87;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len++;
                __freed_obj__ = 0;
                __result78__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result78__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value67;
void* right_value68;
struct list$1charph* result_93;
int offset_94;
int ovec_max_95;
const char* err_99;
int erro_ofs_100;
int options_101;
char* str_102;
struct real_pcre* re_103;
int n_104;
_Bool _while_condtional7;
int options_105;
int len_106;
int regex_result_107;
int i_108;
_Bool _for_condtionalA12;
int i_109;
_Bool _for_condtionalA13;
_Bool _if_conditional41;
void* right_value69;
char* str_110;
void* right_value70;
void* right_value71;
struct list$1charph* group_strings_111;
void* right_value72;
char* str2_112;
_Bool _if_conditional42;
struct list$1charph* __result81__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value73;
char* str_113;
void* right_value74;
void* right_value75;
struct list$1charph* group_strings_114;
int i_115;
_Bool _for_condtionalA14;
void* right_value76;
char* match_string_116;
void* right_value77;
char* str2_117;
_Bool _if_conditional46;
struct list$1charph* __result82__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct list$1charph*));
memset(&offset_94, 0, sizeof(int));
memset(&ovec_max_95, 0, sizeof(int));
memset(&erro_ofs_100, 0, sizeof(int));
memset(&options_101, 0, sizeof(int));
memset(&str_102, 0, sizeof(char*));
memset(&re_103, 0, sizeof(struct real_pcre*));
memset(&n_104, 0, sizeof(int));
memset(&options_105, 0, sizeof(int));
memset(&len_106, 0, sizeof(int));
memset(&regex_result_107, 0, sizeof(int));
memset(&i_108, 0, sizeof(int));
memset(&i_109, 0, sizeof(int));
memset(&right_value69, 0, sizeof(void*));
memset(&str_110, 0, sizeof(char*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&group_strings_111, 0, sizeof(struct list$1charph*));
memset(&right_value72, 0, sizeof(void*));
memset(&str2_112, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&str_113, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&group_strings_114, 0, sizeof(struct list$1charph*));
memset(&i_115, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
memset(&match_string_116, 0, sizeof(char*));
memset(&right_value77, 0, sizeof(void*));
memset(&str2_117, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_93=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 463,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value67=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 463))), "libcomelang2-str.c", 463))))))));
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_94=0;
    __freed_obj__ = 0;
    ovec_max_95=16;
    __freed_obj__ = 0;
    int start_96[ovec_max_95];
    memset(&start_96, 0, sizeof(int)    *(ovec_max_95)    );
    __freed_obj__ = 0;
    int end_97[ovec_max_95];
    memset(&end_97, 0, sizeof(int)    *(ovec_max_95)    );
    __freed_obj__ = 0;
    int ovec_value_98[ovec_max_95*3];
    memset(&ovec_value_98, 0, sizeof(int)    *(ovec_max_95*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_101=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 475))->options;
    __freed_obj__ = 0;
    str_102=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 476))->str;
    __freed_obj__ = 0;
    re_103=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 478))->re;
    __freed_obj__ = 0;
    n_104=0;
    __freed_obj__ = 0;
    while(_while_condtional7=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional7) {
        options_105=2097152;
        __freed_obj__ = 0;
        len_106=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 484,strlen(self));
        __freed_obj__ = 0;
        regex_result_107=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 485,pcre_exec(re_103,(struct pcre_extra*)0,self,len_106,offset_94,options_105,ovec_value_98,ovec_max_95*3));
        __freed_obj__ = 0;
        for(
        i_108=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_108<ovec_max_95 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_108++ ,        __freed_obj__ = 0, 
        0        ){
            start_96[i_108]=ovec_value_98[i_108*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_109=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_109<ovec_max_95 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_109++ ,        __freed_obj__ = 0, 
        0        ){
            end_97[i_109]=ovec_value_98[i_109*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional41=regex_result_107==1,        __freed_obj__ = 0, 
        _if_conditional41) {
            str_110=(char*)come_increment_ref_count(((char*)(right_value69=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 497,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 497)),start_96[0],end_97[0])))));
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            group_strings_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 499,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value70=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 499))), "libcomelang2-str.c", 499))))))));
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_112=(char*)come_increment_ref_count(((char*)(right_value72=block(parent,str_110,group_strings_111))));
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional42=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 507))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional42) {
                __result81__ = __result_obj__ = result_93;
                if(str_110 && !__freed_obj__) { str_110 = come_decrement_ref_count(str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_111 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
                if(result_93 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result81__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 507,list$1charph_push_back(((struct list$1charph*)come_null_check(result_93, "libcomelang2-str.c", 507)),(char*)come_increment_ref_count(str2_112)));
            __freed_obj__ = 0;
            if(_if_conditional43=offset_94==end_97[0],            __freed_obj__ = 0, 
            _if_conditional43) {
                offset_94++;
                __freed_obj__ = 0;
            }
            else {
                offset_94=end_97[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            n_104++;
            __freed_obj__ = 0;
            if(_if_conditional44=n_104==count,            __freed_obj__ = 0, 
            _if_conditional44) {
                if(str_110 && !__freed_obj__) { str_110 = come_decrement_ref_count(str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_111 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_110 && !__freed_obj__) { str_110 = come_decrement_ref_count(str_110, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_111 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional45=regex_result_107>1,            __freed_obj__ = 0, 
            _if_conditional45) {
                str_113=(char*)come_increment_ref_count(((char*)(right_value73=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 523,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 523)),start_96[0],end_97[0])))));
                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                group_strings_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 525,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value74=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 525))), "libcomelang2-str.c", 525))))))));
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_115=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA14=                i_115<regex_result_107 ,                __freed_obj__ = 0, 
                _for_condtionalA14;                i_115++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_116=(char*)come_increment_ref_count(((char*)(right_value76=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 527,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 527)),start_96[i_115],end_97[i_115])))));
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 528,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_114, "libcomelang2-str.c", 528)),(char*)come_increment_ref_count(match_string_116)));
                    __freed_obj__ = 0;
                    if(match_string_116 && !__freed_obj__) { match_string_116 = come_decrement_ref_count(match_string_116, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_117=(char*)come_increment_ref_count(((char*)(right_value77=block(parent,str_113,group_strings_114))));
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional46=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 537))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional46) {
                    __result82__ = __result_obj__ = result_93;
                    if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_117 && !__freed_obj__) { str2_117 = come_decrement_ref_count(str2_117, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_93 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result82__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 537,list$1charph_push_back(((struct list$1charph*)come_null_check(result_93, "libcomelang2-str.c", 537)),(char*)come_increment_ref_count(str2_117)));
                __freed_obj__ = 0;
                if(_if_conditional47=offset_94==end_97[0],                __freed_obj__ = 0, 
                _if_conditional47) {
                    offset_94++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_94=end_97[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                n_104++;
                __freed_obj__ = 0;
                if(_if_conditional48=n_104==count,                __freed_obj__ = 0, 
                _if_conditional48) {
                    if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_117 && !__freed_obj__) { str2_117 = come_decrement_ref_count(str2_117, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_117 && !__freed_obj__) { str2_117 = come_decrement_ref_count(str2_117, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result83__ = __result_obj__ = result_93;
    if(result_93 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result83__;
    __freed_obj__ = 0;
    if(result_93 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_118;
int erro_ofs_119;
int options_120;
char* str_121;
struct real_pcre* re_122;
void* right_value78;
void* right_value79;
struct list$1charph* result_123;
int offset_124;
int ovec_max_125;
_Bool _while_condtional8;
int options_129;
int len_130;
int regex_result_131;
int i_132;
_Bool _for_condtionalA15;
int i_133;
_Bool _for_condtionalA16;
_Bool _if_conditional49;
void* right_value80;
char* str_134;
void* right_value81;
void* right_value82;
struct list$1charph* match_strings_135;
void* right_value83;
char* str2_136;
_Bool _if_conditional50;
struct list$1charph* __result84__;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value84;
char* str_137;
_Bool _if_conditional53;
void* right_value85;
void* right_value86;
struct list$1charph* match_strings_138;
int i_139;
_Bool _for_condtionalA17;
void* right_value87;
char* match_str_140;
void* right_value88;
char* str2_141;
_Bool _if_conditional54;
struct list$1charph* __result85__;
_Bool _if_conditional55;
void* right_value89;
char* str_142;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_143;
void* right_value92;
char* str2_144;
_Bool _if_conditional56;
struct list$1charph* __result86__;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_119, 0, sizeof(int));
memset(&options_120, 0, sizeof(int));
memset(&str_121, 0, sizeof(char*));
memset(&re_122, 0, sizeof(struct real_pcre*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct list$1charph*));
memset(&offset_124, 0, sizeof(int));
memset(&ovec_max_125, 0, sizeof(int));
memset(&options_129, 0, sizeof(int));
memset(&len_130, 0, sizeof(int));
memset(&regex_result_131, 0, sizeof(int));
memset(&i_132, 0, sizeof(int));
memset(&i_133, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&str_134, 0, sizeof(char*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&match_strings_135, 0, sizeof(struct list$1charph*));
memset(&right_value83, 0, sizeof(void*));
memset(&str2_136, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&str_137, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&match_strings_138, 0, sizeof(struct list$1charph*));
memset(&i_139, 0, sizeof(int));
memset(&right_value87, 0, sizeof(void*));
memset(&match_str_140, 0, sizeof(char*));
memset(&right_value88, 0, sizeof(void*));
memset(&str2_141, 0, sizeof(char*));
memset(&right_value89, 0, sizeof(void*));
memset(&str_142, 0, sizeof(char*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&match_strings_143, 0, sizeof(struct list$1charph*));
memset(&right_value92, 0, sizeof(void*));
memset(&str2_144, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_120=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 566))->options;
    __freed_obj__ = 0;
    str_121=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 567))->str;
    __freed_obj__ = 0;
    re_122=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 569))->re;
    __freed_obj__ = 0;
    result_123=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 571,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value78=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 571))), "libcomelang2-str.c", 571))))))));
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_124=0;
    __freed_obj__ = 0;
    ovec_max_125=16;
    __freed_obj__ = 0;
    int start_126[ovec_max_125];
    memset(&start_126, 0, sizeof(int)    *(ovec_max_125)    );
    __freed_obj__ = 0;
    int end_127[ovec_max_125];
    memset(&end_127, 0, sizeof(int)    *(ovec_max_125)    );
    __freed_obj__ = 0;
    int ovec_value_128[ovec_max_125*3];
    memset(&ovec_value_128, 0, sizeof(int)    *(ovec_max_125*3)    );
    __freed_obj__ = 0;
    while(_while_condtional8=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional8) {
        options_129=2097152;
        __freed_obj__ = 0;
        len_130=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 582,strlen(self));
        __freed_obj__ = 0;
        regex_result_131=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 584,pcre_exec(re_122,(struct pcre_extra*)0,self,len_130,offset_124,options_129,ovec_value_128,ovec_max_125*3));
        __freed_obj__ = 0;
        for(
        i_132=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        i_132<ovec_max_125 ,        __freed_obj__ = 0, 
        _for_condtionalA15;        i_132++ ,        __freed_obj__ = 0, 
        0        ){
            start_126[i_132]=ovec_value_128[i_132*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_133=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_133<ovec_max_125 ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_133++ ,        __freed_obj__ = 0, 
        0        ){
            end_127[i_133]=ovec_value_128[i_133*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=regex_result_131==1,        __freed_obj__ = 0, 
        _if_conditional49) {
            str_134=(char*)come_increment_ref_count(((char*)(right_value80=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 596,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 596)),offset_124,start_126[0])))));
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_strings_135=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 598,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value81=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 598))), "libcomelang2-str.c", 598))))))));
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_136=(char*)come_increment_ref_count(((char*)(right_value83=block(parent,str_134,match_strings_135))));
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional50=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 605))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional50) {
                __result84__ = __result_obj__ = result_123;
                if(str_134 && !__freed_obj__) { str_134 = come_decrement_ref_count(str_134, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_135 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_136 && !__freed_obj__) { str2_136 = come_decrement_ref_count(str2_136, (void*)0, (void*)0, 0, 0, 0); }
                if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result84__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 605,list$1charph_push_back(((struct list$1charph*)come_null_check(result_123, "libcomelang2-str.c", 605)),(char*)come_increment_ref_count(str2_136)));
            __freed_obj__ = 0;
            if(_if_conditional51=offset_124==end_127[0],            __freed_obj__ = 0, 
            _if_conditional51) {
                offset_124++;
                __freed_obj__ = 0;
            }
            else {
                offset_124=end_127[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_134 && !__freed_obj__) { str_134 = come_decrement_ref_count(str_134, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_135 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_136 && !__freed_obj__) { str2_136 = come_decrement_ref_count(str2_136, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional52=regex_result_131>1,            __freed_obj__ = 0, 
            _if_conditional52) {
                str_137=(char*)come_increment_ref_count(((char*)(right_value84=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 616,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 616)),offset_124,start_126[0])))));
                if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional53=offset_124==end_127[0],                __freed_obj__ = 0, 
                _if_conditional53) {
                    offset_124++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_124=end_127[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_138=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 625,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 625))), "libcomelang2-str.c", 625))))))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_139=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA17=                i_139<regex_result_131 ,                __freed_obj__ = 0, 
                _for_condtionalA17;                i_139++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_140=(char*)come_increment_ref_count(((char*)(right_value87=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 627,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 627)),start_126[i_139],end_127[i_139])))));
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 628,list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_138, "libcomelang2-str.c", 628)),(char*)come_increment_ref_count(match_str_140)));
                    __freed_obj__ = 0;
                    if(match_str_140 && !__freed_obj__) { match_str_140 = come_decrement_ref_count(match_str_140, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_141=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_137,match_strings_138))));
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional54=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 636))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional54) {
                    __result85__ = __result_obj__ = result_123;
                    if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_141 && !__freed_obj__) { str2_141 = come_decrement_ref_count(str2_141, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result85__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 636,list$1charph_push_back(((struct list$1charph*)come_null_check(result_123, "libcomelang2-str.c", 636)),(char*)come_increment_ref_count(str2_141)));
                __freed_obj__ = 0;
                if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_141 && !__freed_obj__) { str2_141 = come_decrement_ref_count(str2_141, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional55=offset_124<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 656,charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 656)))),    __freed_obj__ = 0, 
    _if_conditional55) {
        str_142=(char*)come_increment_ref_count(((char*)(right_value89=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 646,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 646)),offset_124,-1)))));
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        match_strings_143=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 647,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 647))), "libcomelang2-str.c", 647))))))));
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        str2_144=(char*)come_increment_ref_count(((char*)(right_value92=block(parent,str_142,match_strings_143))));
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional56=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 653))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional56) {
            __result86__ = __result_obj__ = result_123;
            if(str_142 && !__freed_obj__) { str_142 = come_decrement_ref_count(str_142, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_143 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_144 && !__freed_obj__) { str2_144 = come_decrement_ref_count(str2_144, (void*)0, (void*)0, 0, 0, 0); }
            if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result86__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 653,list$1charph_push_back(((struct list$1charph*)come_null_check(result_123, "libcomelang2-str.c", 653)),(char*)come_increment_ref_count(str2_144)));
        __freed_obj__ = 0;
        if(str_142 && !__freed_obj__) { str_142 = come_decrement_ref_count(str_142, (void*)0, (void*)0, 0, 0, 0); }
        if(match_strings_143 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str2_144 && !__freed_obj__) { str2_144 = come_decrement_ref_count(str2_144, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = result_123;
    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result87__;
    __freed_obj__ = 0;
    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_145;
int erro_ofs_146;
int options_147;
char* str_148;
struct real_pcre* re_149;
void* right_value93;
void* right_value94;
struct list$1charph* result_150;
int offset_151;
int ovec_max_152;
int n_156;
_Bool _while_condtional9;
int options_157;
int len_158;
int regex_result_159;
int i_160;
_Bool _for_condtionalA18;
int i_161;
_Bool _for_condtionalA19;
_Bool _if_conditional57;
void* right_value95;
char* str_162;
void* right_value96;
void* right_value97;
struct list$1charph* match_strings_163;
void* right_value98;
char* str2_164;
_Bool _if_conditional58;
struct list$1charph* __result88__;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value99;
char* str_165;
_Bool _if_conditional61;
void* right_value100;
void* right_value101;
struct list$1charph* match_strings_166;
int i_167;
_Bool _for_condtionalA20;
void* right_value102;
char* match_str_168;
void* right_value103;
char* str2_169;
_Bool _if_conditional62;
struct list$1charph* __result89__;
_Bool _if_conditional63;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_146, 0, sizeof(int));
memset(&options_147, 0, sizeof(int));
memset(&str_148, 0, sizeof(char*));
memset(&re_149, 0, sizeof(struct real_pcre*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct list$1charph*));
memset(&offset_151, 0, sizeof(int));
memset(&ovec_max_152, 0, sizeof(int));
memset(&n_156, 0, sizeof(int));
memset(&options_157, 0, sizeof(int));
memset(&len_158, 0, sizeof(int));
memset(&regex_result_159, 0, sizeof(int));
memset(&i_160, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
memset(&right_value95, 0, sizeof(void*));
memset(&str_162, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&match_strings_163, 0, sizeof(struct list$1charph*));
memset(&right_value98, 0, sizeof(void*));
memset(&str2_164, 0, sizeof(char*));
memset(&right_value99, 0, sizeof(void*));
memset(&str_165, 0, sizeof(char*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&match_strings_166, 0, sizeof(struct list$1charph*));
memset(&i_167, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&match_str_168, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&str2_169, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_147=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 664))->options;
    __freed_obj__ = 0;
    str_148=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 665))->str;
    __freed_obj__ = 0;
    re_149=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 667))->re;
    __freed_obj__ = 0;
    result_150=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 669,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value93=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 669))), "libcomelang2-str.c", 669))))))));
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_151=0;
    __freed_obj__ = 0;
    ovec_max_152=16;
    __freed_obj__ = 0;
    int start_153[ovec_max_152];
    memset(&start_153, 0, sizeof(int)    *(ovec_max_152)    );
    __freed_obj__ = 0;
    int end_154[ovec_max_152];
    memset(&end_154, 0, sizeof(int)    *(ovec_max_152)    );
    __freed_obj__ = 0;
    int ovec_value_155[ovec_max_152*3];
    memset(&ovec_value_155, 0, sizeof(int)    *(ovec_max_152*3)    );
    __freed_obj__ = 0;
    n_156=0;
    __freed_obj__ = 0;
    while(_while_condtional9=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional9) {
        options_157=2097152;
        __freed_obj__ = 0;
        len_158=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 682,strlen(self));
        __freed_obj__ = 0;
        regex_result_159=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 684,pcre_exec(re_149,(struct pcre_extra*)0,self,len_158,offset_151,options_157,ovec_value_155,ovec_max_152*3));
        __freed_obj__ = 0;
        for(
        i_160=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_160<ovec_max_152 ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_160++ ,        __freed_obj__ = 0, 
        0        ){
            start_153[i_160]=ovec_value_155[i_160*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_161=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_161<ovec_max_152 ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_161++ ,        __freed_obj__ = 0, 
        0        ){
            end_154[i_161]=ovec_value_155[i_161*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=regex_result_159==1,        __freed_obj__ = 0, 
        _if_conditional57) {
            str_162=(char*)come_increment_ref_count(((char*)(right_value95=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 696,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 696)),offset_151,start_153[0])))));
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_strings_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value97=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 698,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 698))), "libcomelang2-str.c", 698))))))));
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_164=(char*)come_increment_ref_count(((char*)(right_value98=block(parent,str_162,match_strings_163))));
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional58=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 704))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional58) {
                __result88__ = __result_obj__ = result_150;
                if(str_162 && !__freed_obj__) { str_162 = come_decrement_ref_count(str_162, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_163 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_164 && !__freed_obj__) { str2_164 = come_decrement_ref_count(str2_164, (void*)0, (void*)0, 0, 0, 0); }
                if(result_150 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result88__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 704,list$1charph_push_back(((struct list$1charph*)come_null_check(result_150, "libcomelang2-str.c", 704)),(char*)come_increment_ref_count(str2_164)));
            __freed_obj__ = 0;
            if(_if_conditional59=offset_151==end_154[0],            __freed_obj__ = 0, 
            _if_conditional59) {
                offset_151++;
                __freed_obj__ = 0;
            }
            else {
                offset_151=end_154[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_162 && !__freed_obj__) { str_162 = come_decrement_ref_count(str_162, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_163 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_164 && !__freed_obj__) { str2_164 = come_decrement_ref_count(str2_164, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional60=regex_result_159>1,            __freed_obj__ = 0, 
            _if_conditional60) {
                str_165=(char*)come_increment_ref_count(((char*)(right_value99=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 715,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 715)),offset_151,start_153[0])))));
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional61=offset_151==end_154[0],                __freed_obj__ = 0, 
                _if_conditional61) {
                    offset_151++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_151=end_154[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 724,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value100=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 724))), "libcomelang2-str.c", 724))))))));
                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_167=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA20=                i_167<regex_result_159 ,                __freed_obj__ = 0, 
                _for_condtionalA20;                i_167++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_168=(char*)come_increment_ref_count(((char*)(right_value102=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 726,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 726)),start_153[i_167],end_154[i_167])))));
                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 727,list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_166, "libcomelang2-str.c", 727)),(char*)come_increment_ref_count(match_str_168)));
                    __freed_obj__ = 0;
                    if(match_str_168 && !__freed_obj__) { match_str_168 = come_decrement_ref_count(match_str_168, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_169=(char*)come_increment_ref_count(((char*)(right_value103=block(parent,str_165,match_strings_166))));
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional62=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 736))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional62) {
                    __result89__ = __result_obj__ = result_150;
                    if(str_165 && !__freed_obj__) { str_165 = come_decrement_ref_count(str_165, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_166 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_169 && !__freed_obj__) { str2_169 = come_decrement_ref_count(str2_169, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_150 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result89__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 736,list$1charph_push_back(((struct list$1charph*)come_null_check(result_150, "libcomelang2-str.c", 736)),(char*)come_increment_ref_count(str2_169)));
                __freed_obj__ = 0;
                if(str_165 && !__freed_obj__) { str_165 = come_decrement_ref_count(str_165, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_166 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_169 && !__freed_obj__) { str2_169 = come_decrement_ref_count(str2_169, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_156++;
        __freed_obj__ = 0;
        if(_if_conditional63=n_156==count,        __freed_obj__ = 0, 
        _if_conditional63) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = result_150;
    if(result_150 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result90__;
    __freed_obj__ = 0;
    if(result_150 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional64;
_Bool __result91__;
_Bool _if_conditional65;
_Bool __result92__;
_Bool _if_conditional66;
_Bool __result93__;
_Bool _if_conditional67;
_Bool __result94__;
_Bool _if_conditional68;
_Bool __result95__;
_Bool _if_conditional69;
_Bool __result96__;
_Bool _if_conditional70;
_Bool __result97__;
_Bool _if_conditional71;
_Bool __result98__;
_Bool _if_conditional72;
_Bool __result99__;
_Bool _if_conditional73;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    if(_if_conditional64=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 759,strcmp(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 759))->str,((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 759))->str))!=0,    __freed_obj__ = 0, 
    _if_conditional64) {
        __result91__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result91__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional65=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 762))->ignore_case!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 762))->ignore_case,    __freed_obj__ = 0, 
    _if_conditional65) {
        __result92__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result92__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional66=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 765))->multiline!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 765))->multiline,    __freed_obj__ = 0, 
    _if_conditional66) {
        __result93__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result93__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 768))->global!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 768))->global,    __freed_obj__ = 0, 
    _if_conditional67) {
        __result94__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result94__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional68=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 771))->extended!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 771))->extended,    __freed_obj__ = 0, 
    _if_conditional68) {
        __result95__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result95__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional69=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 774))->dotall!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 774))->dotall,    __freed_obj__ = 0, 
    _if_conditional69) {
        __result96__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result96__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional70=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 777))->anchored!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 777))->anchored,    __freed_obj__ = 0, 
    _if_conditional70) {
        __result97__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result97__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional71=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 780))->dollar_endonly!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 780))->dollar_endonly,    __freed_obj__ = 0, 
    _if_conditional71) {
        __result98__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional72=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 783))->ungreedy!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 783))->ungreedy,    __freed_obj__ = 0, 
    _if_conditional72) {
        __result99__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional73=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 787))->options!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 787))->options,    __freed_obj__ = 0, 
    _if_conditional73) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result101__ = (_Bool)1;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result101__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value104;
void* right_value105;
struct list$1charph* result_170;
int offset_171;
int ovec_max_172;
const char* err_176;
int erro_ofs_177;
int options_178;
char* str_179;
struct real_pcre* re_180;
_Bool _while_condtional10;
int options_181;
int len_182;
int regex_result_183;
int i_184;
_Bool _for_condtionalA21;
int i_185;
_Bool _for_condtionalA22;
_Bool _if_conditional74;
void* right_value106;
char* str_186;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value107;
char* str_187;
_Bool _if_conditional77;
int i_188;
_Bool _for_condtionalA23;
void* right_value108;
char* match_string_189;
struct list$1charph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&result_170, 0, sizeof(struct list$1charph*));
memset(&offset_171, 0, sizeof(int));
memset(&ovec_max_172, 0, sizeof(int));
memset(&erro_ofs_177, 0, sizeof(int));
memset(&options_178, 0, sizeof(int));
memset(&str_179, 0, sizeof(char*));
memset(&re_180, 0, sizeof(struct real_pcre*));
memset(&options_181, 0, sizeof(int));
memset(&len_182, 0, sizeof(int));
memset(&regex_result_183, 0, sizeof(int));
memset(&i_184, 0, sizeof(int));
memset(&i_185, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&str_186, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&str_187, 0, sizeof(char*));
memset(&i_188, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&match_string_189, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_170=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 792,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 792))), "libcomelang2-str.c", 792))))))));
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_171=0;
    __freed_obj__ = 0;
    ovec_max_172=16;
    __freed_obj__ = 0;
    int start_173[ovec_max_172];
    memset(&start_173, 0, sizeof(int)    *(ovec_max_172)    );
    __freed_obj__ = 0;
    int end_174[ovec_max_172];
    memset(&end_174, 0, sizeof(int)    *(ovec_max_172)    );
    __freed_obj__ = 0;
    int ovec_value_175[ovec_max_172*3];
    memset(&ovec_value_175, 0, sizeof(int)    *(ovec_max_172*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_178=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 804))->options;
    __freed_obj__ = 0;
    str_179=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 805))->str;
    __freed_obj__ = 0;
    re_180=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 807))->re;
    __freed_obj__ = 0;
    while(_while_condtional10=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional10) {
        options_181=2097152;
        __freed_obj__ = 0;
        len_182=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 813,strlen(self));
        __freed_obj__ = 0;
        regex_result_183=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 814,pcre_exec(re_180,(struct pcre_extra*)0,self,len_182,offset_171,options_181,ovec_value_175,ovec_max_172*3));
        __freed_obj__ = 0;
        for(
        i_184=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA21=        i_184<ovec_max_172 ,        __freed_obj__ = 0, 
        _for_condtionalA21;        i_184++ ,        __freed_obj__ = 0, 
        0        ){
            start_173[i_184]=ovec_value_175[i_184*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_185=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_185<ovec_max_172 ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_185++ ,        __freed_obj__ = 0, 
        0        ){
            end_174[i_185]=ovec_value_175[i_185*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=regex_result_183==1,        __freed_obj__ = 0, 
        _if_conditional74) {
            str_186=(char*)come_increment_ref_count(((char*)(right_value106=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 826,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 826)),start_173[0],end_174[0])))));
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 827,list$1charph_push_back(((struct list$1charph*)come_null_check(result_170, "libcomelang2-str.c", 827)),(char*)come_increment_ref_count(str_186)));
            __freed_obj__ = 0;
            if(_if_conditional75=offset_171==end_174[0],            __freed_obj__ = 0, 
            _if_conditional75) {
                offset_171++;
                __freed_obj__ = 0;
            }
            else {
                offset_171=end_174[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_186 && !__freed_obj__) { str_186 = come_decrement_ref_count(str_186, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional76=regex_result_183>1,            __freed_obj__ = 0, 
            _if_conditional76) {
                str_187=(char*)come_increment_ref_count(((char*)(right_value107=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 838,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 838)),start_173[0],end_174[0])))));
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 839,list$1charph_push_back(((struct list$1charph*)come_null_check(result_170, "libcomelang2-str.c", 839)),(char*)come_increment_ref_count(str_187)));
                __freed_obj__ = 0;
                if(_if_conditional77=offset_171==end_174[0],                __freed_obj__ = 0, 
                _if_conditional77) {
                    offset_171++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_171=end_174[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                *num_group_string_in_regex=regex_result_183-1;
                __freed_obj__ = 0;
                for(
                i_188=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA23=                i_188<regex_result_183 ,                __freed_obj__ = 0, 
                _for_condtionalA23;                i_188++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_189=(char*)come_increment_ref_count(((char*)(right_value108=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 850,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 850)),start_173[i_188],end_174[i_188])))));
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 851,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 851)),(char*)come_increment_ref_count(match_string_189)));
                    __freed_obj__ = 0;
                    if(match_string_189 && !__freed_obj__) { match_string_189 = come_decrement_ref_count(match_string_189, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_187 && !__freed_obj__) { str_187 = come_decrement_ref_count(str_187, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result102__ = __result_obj__ = result_170;
    if(result_170 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result102__;
    __freed_obj__ = 0;
    if(result_170 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_strip(char* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value109;
char* result_190;
int len_191;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&result_190, 0, sizeof(char*));
memset(&len_191, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_190=(char*)come_increment_ref_count(((char*)(right_value109=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 866,__builtin_string(self)))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    len_191=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 868,strlen(self));
    __freed_obj__ = 0;
    if(_if_conditional78=self[len_191-1]==10,    __freed_obj__ = 0, 
    _if_conditional78) {
        result_190[len_191-1]=0;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional79=self[len_191-1]==13,        __freed_obj__ = 0, 
        _if_conditional79) {
            result_190[len_191-1]=0;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional80=len_191>2&&self[len_191-2]==13&&self[len_191-1]==10,            __freed_obj__ = 0, 
            _if_conditional80) {
                result_190[len_191-2]=0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = result_190;
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result103__;
    __freed_obj__ = 0;
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_printable(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_192;
void* right_value110;
char* result_193;
int n_194;
int i_195;
_Bool _for_condtionalA24;
char c_196;
_Bool _if_conditional81;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_192, 0, sizeof(int));
memset(&right_value110, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&n_194, 0, sizeof(int));
memset(&i_195, 0, sizeof(int));
memset(&c_196, 0, sizeof(char));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_192=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 885,charp_length(((char*)come_null_check(str, "libcomelang2-str.c", 885))));
    __freed_obj__ = 0;
    result_193=(char*)come_increment_ref_count(((char*)(right_value110=(char*)come_calloc(1, sizeof(char)*(1*(len_192*2+1)), "libcomelang2-str.c", 886))));
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_194=0;
    __freed_obj__ = 0;
    for(
    i_195=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA24=    i_195<len_192 ,    __freed_obj__ = 0, 
    _for_condtionalA24;    i_195++ ,    __freed_obj__ = 0, 
    0    ){
        c_196=str[i_195];
        __freed_obj__ = 0;
        if(_if_conditional81=(c_196>=0&&c_196<32)||c_196==127,        __freed_obj__ = 0, 
        _if_conditional81) {
            result_193[n_194++]=94;
            __freed_obj__ = 0;
            result_193[n_194++]=c_196+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_193[n_194++]=c_196;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_193[n_194]=0;
    __freed_obj__ = 0;
    __result104__ = __result_obj__ = result_193;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result104__;
    __freed_obj__ = 0;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* wchar_tp_to_string(unsigned int* wstr){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_197;
void* right_value111;
char* result_198;
_Bool _if_conditional82;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_197, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_197=16*((gCallerSName = "libcomelang2-str.c", gCallerSLine = 910,wcslen(wstr))+1);
    __freed_obj__ = 0;
    result_198=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_197)), "libcomelang2-str.c", 912))));
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional82=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 919,wcstombs(result_198,wstr,len_197))<0,    __freed_obj__ = 0, 
    _if_conditional82) {
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 916,strncpy(result_198,"",len_197));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = result_198;
    if(result_198 && !__freed_obj__) { result_198 = come_decrement_ref_count(result_198, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result105__;
    __freed_obj__ = 0;
    if(result_198 && !__freed_obj__) { result_198 = come_decrement_ref_count(result_198, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* charp_to_wstring(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value112;
unsigned int* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result106__ = __result_obj__ = ((unsigned int*)(right_value112=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 924,__builtin_wstring(str))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result106__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int wchar_tp_length(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result107__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 929,wcslen(str));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result107__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_199;
_Bool _if_conditional83;
void* right_value113;
void* right_value114;
unsigned int* __result108__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value115;
void* right_value116;
unsigned int* __result109__;
_Bool _if_conditional88;
void* right_value117;
unsigned int* sub_str_200;
void* right_value118;
void* right_value119;
unsigned int* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_199, 0, sizeof(int));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&sub_str_200, 0, sizeof(unsigned int*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    len_199=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 936,wcslen(str));
    __freed_obj__ = 0;
    if(_if_conditional83=len_199==0,    __freed_obj__ = 0, 
    _if_conditional83) {
        __result108__ = __result_obj__ = ((unsigned int*)(right_value114=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 939,string_to_wstring(((char*)come_null_check(((char*)(right_value113=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 939,wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 939)))))), "libcomelang2-str.c", 939))))));
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional84=head<0,    __freed_obj__ = 0, 
    _if_conditional84) {
        head+=len_199;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional85=tail<0,    __freed_obj__ = 0, 
    _if_conditional85) {
        tail+=len_199+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional86=head<0,    __freed_obj__ = 0, 
    _if_conditional86) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional87=tail<0,    __freed_obj__ = 0, 
    _if_conditional87) {
        __result109__ = __result_obj__ = ((unsigned int*)(right_value116=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 955,string_to_wstring(((char*)come_null_check(((char*)(right_value115=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 955,wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 955)))))), "libcomelang2-str.c", 955))))));
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result109__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional88=tail>=len_199,    __freed_obj__ = 0, 
    _if_conditional88) {
        tail=len_199;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_200=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value117=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 962,wchar_tp_substring(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 962)),tail,-1)))));
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 964,memcpy(str+head,sub_str_200,sizeof(unsigned int)*((gCallerSName = "libcomelang2-str.c", gCallerSLine = 964,wstring_length(((unsigned int*)come_null_check(sub_str_200, "libcomelang2-str.c", 964))))+1)));
    __freed_obj__ = 0;
    __result110__ = __result_obj__ = ((unsigned int*)(right_value119=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 966,string_to_wstring(((char*)come_null_check(((char*)(right_value118=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 966,wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 966)))))), "libcomelang2-str.c", 966))))));
    if(sub_str_200 && !__freed_obj__) { sub_str_200 = come_decrement_ref_count(sub_str_200, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result110__;
    __freed_obj__ = 0;
    if(sub_str_200 && !__freed_obj__) { sub_str_200 = come_decrement_ref_count(sub_str_200, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int* head_201;
_Bool _if_conditional89;
int __result111__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_201, 0, sizeof(unsigned int*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    head_201=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 973,wcsstr(str,search_str));
    __freed_obj__ = 0;
    if(_if_conditional89=head_201==((void*)0),    __freed_obj__ = 0, 
    _if_conditional89) {
        __result111__ = default_value;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result111__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result112__ = head_201-str;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result112__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_202;
unsigned int* p_203;
_Bool _while_condtional11;
int len2_204;
_Bool result_205;
int i_206;
_Bool _for_condtionalA25;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result113__;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_202, 0, sizeof(int));
memset(&p_203, 0, sizeof(unsigned int*));
memset(&len2_204, 0, sizeof(int));
memset(&result_205, 0, sizeof(_Bool));
memset(&i_206, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    len_202=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 986,wcslen(search_str));
    __freed_obj__ = 0;
    p_203=str+(gCallerSName = "libcomelang2-str.c", gCallerSLine = 988,wcslen(str))-len_202;
    __freed_obj__ = 0;
    while(_while_condtional11=p_203>=str,    __freed_obj__ = 0, 
    _while_condtional11) {
        len2_204=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 991,wcslen(p_203));
        __freed_obj__ = 0;
        result_205=(_Bool)1;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_206=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA25=        i_206<len_202&&i_206<len2_204 ,        __freed_obj__ = 0, 
        _for_condtionalA25;        i_206++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional90=p_203[i_206]!=search_str[i_206],            __freed_obj__ = 0, 
            _if_conditional90) {
                result_205=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=result_205,        __freed_obj__ = 0, 
        _if_conditional91) {
            __result113__ = (p_203-str);
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_203--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result114__ = default_value;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result114__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_207;
void* right_value120;
unsigned int* result_208;
int i_209;
_Bool _for_condtionalA26;
unsigned int* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_207, 0, sizeof(int));
memset(&right_value120, 0, sizeof(void*));
memset(&result_208, 0, sizeof(unsigned int*));
memset(&i_209, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_207=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1011,wcslen(str));
    __freed_obj__ = 0;
    result_208=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value120=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_207+1)), "libcomelang2-str.c", 1012))));
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_209=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA26=    i_209<len_207 ,    __freed_obj__ = 0, 
    _for_condtionalA26;    i_209++ ,    __freed_obj__ = 0, 
    0    ){
        result_208[i_209]=str[len_207-i_209-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_208[len_207]=0;
    __freed_obj__ = 0;
    __result115__ = __result_obj__ = result_208;
    if(result_208 && !__freed_obj__) { result_208 = come_decrement_ref_count(result_208, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result115__;
    __freed_obj__ = 0;
    if(result_208 && !__freed_obj__) { result_208 = come_decrement_ref_count(result_208, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_210;
void* right_value121;
unsigned int* result_211;
int i_212;
_Bool _for_condtionalA27;
unsigned int* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_210, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&result_211, 0, sizeof(unsigned int*));
memset(&i_212, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_210=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1025,wcslen(str))*n+1;
    __freed_obj__ = 0;
    result_211=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value121=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_210)), "libcomelang2-str.c", 1027))));
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_211[0]=0;
    __freed_obj__ = 0;
    for(
    i_212=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA27=    i_212<n ,    __freed_obj__ = 0, 
    _for_condtionalA27;    i_212++ ,    __freed_obj__ = 0, 
    0    ){
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1032,wcscat(result_211,str));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = result_211;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result116__;
    __freed_obj__ = 0;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_213;
void* right_value122;
unsigned int* result_214;
int n_215;
int i_216;
_Bool _for_condtionalA28;
unsigned int c_217;
_Bool _if_conditional92;
unsigned int* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_213, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&result_214, 0, sizeof(unsigned int*));
memset(&n_215, 0, sizeof(int));
memset(&i_216, 0, sizeof(int));
memset(&c_217, 0, sizeof(unsigned int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_213=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1040,wchar_tp_length(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 1040))));
    __freed_obj__ = 0;
    result_214=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value122=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_213*2+1)), "libcomelang2-str.c", 1041))));
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_215=0;
    __freed_obj__ = 0;
    for(
    i_216=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA28=    i_216<len_213 ,    __freed_obj__ = 0, 
    _for_condtionalA28;    i_216++ ,    __freed_obj__ = 0, 
    0    ){
        c_217=str[i_216];
        __freed_obj__ = 0;
        if(_if_conditional92=(c_217>=0&&c_217<32)||c_217==127,        __freed_obj__ = 0, 
        _if_conditional92) {
            result_214[n_215++]=94;
            __freed_obj__ = 0;
            result_214[n_215++]=c_217+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_214[n_215++]=c_217;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_214[n_215]=0;
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = result_214;
    if(result_214 && !__freed_obj__) { result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result117__;
    __freed_obj__ = 0;
    if(result_214 && !__freed_obj__) { result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_218;
int ovec_max_219;
const char* err_223;
int erro_ofs_224;
int options_225;
char* str_226;
struct real_pcre* re_227;
int n_228;
_Bool _while_condtional12;
int options_229;
int len_230;
int regex_result_231;
int i_232;
_Bool _for_condtionalA29;
int i_233;
_Bool _for_condtionalA30;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result118__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_236;
_Bool _for_condtionalA31;
void* right_value123;
char* match_string_237;
_Bool _if_conditional97;
_Bool __result120__;
_Bool _if_conditional98;
_Bool __result121__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_218, 0, sizeof(int));
memset(&ovec_max_219, 0, sizeof(int));
memset(&erro_ofs_224, 0, sizeof(int));
memset(&options_225, 0, sizeof(int));
memset(&str_226, 0, sizeof(char*));
memset(&re_227, 0, sizeof(struct real_pcre*));
memset(&n_228, 0, sizeof(int));
memset(&options_229, 0, sizeof(int));
memset(&len_230, 0, sizeof(int));
memset(&regex_result_231, 0, sizeof(int));
memset(&i_232, 0, sizeof(int));
memset(&i_233, 0, sizeof(int));
memset(&i_236, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&match_string_237, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_218=0;
    __freed_obj__ = 0;
    ovec_max_219=16;
    __freed_obj__ = 0;
    int start_220[ovec_max_219];
    memset(&start_220, 0, sizeof(int)    *(ovec_max_219)    );
    __freed_obj__ = 0;
    int end_221[ovec_max_219];
    memset(&end_221, 0, sizeof(int)    *(ovec_max_219)    );
    __freed_obj__ = 0;
    int ovec_value_222[ovec_max_219*3];
    memset(&ovec_value_222, 0, sizeof(int)    *(ovec_max_219*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_225=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1075))->options;
    __freed_obj__ = 0;
    str_226=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1076))->str;
    __freed_obj__ = 0;
    re_227=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1078))->re;
    __freed_obj__ = 0;
    n_228=0;
    __freed_obj__ = 0;
    while(_while_condtional12=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional12) {
        options_229=2097152;
        __freed_obj__ = 0;
        len_230=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1084,strlen(self));
        __freed_obj__ = 0;
        regex_result_231=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1086,pcre_exec(re_227,(struct pcre_extra*)0,self,len_230,offset_218,options_229,ovec_value_222,ovec_max_219*3));
        __freed_obj__ = 0;
        for(
        i_232=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA29=        i_232<ovec_max_219 ,        __freed_obj__ = 0, 
        _for_condtionalA29;        i_232++ ,        __freed_obj__ = 0, 
        0        ){
            start_220[i_232]=ovec_value_222[i_232*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_233=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA30=        i_233<ovec_max_219 ,        __freed_obj__ = 0, 
        _for_condtionalA30;        i_233++ ,        __freed_obj__ = 0, 
        0        ){
            end_221[i_233]=ovec_value_222[i_233*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional93=regex_result_231==1||(group_strings==((void*)0)&&regex_result_231>0),        __freed_obj__ = 0, 
        _if_conditional93) {
            n_228++;
            __freed_obj__ = 0;
            if(_if_conditional94=n_228==count,            __freed_obj__ = 0, 
            _if_conditional94) {
                __result118__ = (_Bool)1;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result118__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=offset_218==end_221[0],            __freed_obj__ = 0, 
            _if_conditional95) {
                offset_218++;
                __freed_obj__ = 0;
            }
            else {
                offset_218=end_221[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional96=regex_result_231>1,            __freed_obj__ = 0, 
            _if_conditional96) {
                n_228++;
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1115,list$1charph_reset(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1115))));
                __freed_obj__ = 0;
                for(
                i_236=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA31=                i_236<regex_result_231 ,                __freed_obj__ = 0, 
                _for_condtionalA31;                i_236++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_237=(char*)come_increment_ref_count(((char*)(right_value123=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1117,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1117)),start_220[i_236],end_221[i_236])))));
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1118,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1118)),(char*)come_increment_ref_count(match_string_237)));
                    __freed_obj__ = 0;
                    if(match_string_237 && !__freed_obj__) { match_string_237 = come_decrement_ref_count(match_string_237, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional97=n_228==count,                __freed_obj__ = 0, 
                _if_conditional97) {
                    __result120__ = (_Bool)1;
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result120__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional98=offset_218==end_221[0],                __freed_obj__ = 0, 
                _if_conditional98) {
                    offset_218++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_218=end_221[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result121__ = (_Bool)0;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result121__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result122__ = (_Bool)0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result122__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_234;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_235;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_234, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_235, 0, sizeof(struct list_item$1charph*));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    it_234=((struct list$1charph*)come_null_check(self, "./comelang2.h", 497))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional13=it_234!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        prev_it_235=it_234;
                        __freed_obj__ = 0;
                        it_234=((struct list_item$1charph*)come_null_check(it_234, "./comelang2.h", 500))->next;
                        __freed_obj__ = 0;
                        if(prev_it_235 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 504))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 505))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 507))->len=0;
                    __freed_obj__ = 0;
                    __result119__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result119__;
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result123__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1144,wcscmp(left,right));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result123__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result124__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1149,wcscmp(left,right));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result124__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result125__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1154,string_get_hash_key(((char*)come_null_check(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1154))->str, "libcomelang2-str.c", 1154))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result125__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result126__ = left==right;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result126__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value124;
unsigned int* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result127__ = __result_obj__ = ((unsigned int*)(right_value124=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1165,wchar_tp_multiply(str,n))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result127__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value125;
unsigned int* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result128__ = __result_obj__ = ((unsigned int*)(right_value125=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1170,wchar_tp_multiply(str,n))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result128__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result129__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1175,wcscmp(left,right))==0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result129__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result130__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1180,wcscmp(left,right))==0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result130__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result131__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1185,wcscmp(left,right))!=0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result131__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result132__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1190,wcscmp(left,right))!=0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result132__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result133__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1195,come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1195)),right));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result133__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result134__ = !(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1200,come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1200)),right));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result134__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value126;
unsigned int* result_238;
unsigned int* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&result_238, 0, sizeof(unsigned int*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_238=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value126=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((gCallerSName = "libcomelang2-str.c", gCallerSLine = 1205,wcslen(left))+(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1205,wcslen(right))+1)), "libcomelang2-str.c", 1205))));
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1207,wcscpy(result_238,left));
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1208,wcscat(result_238,right));
    __freed_obj__ = 0;
    __result135__ = __result_obj__ = result_238;
    if(result_238 && !__freed_obj__) { result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result135__;
    __freed_obj__ = 0;
    if(result_238 && !__freed_obj__) { result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value127;
unsigned int* result_239;
unsigned int* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&result_239, 0, sizeof(unsigned int*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_239=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value127=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*((gCallerSName = "libcomelang2-str.c", gCallerSLine = 1215,wcslen(left))+(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1215,wcslen(right))+1)), "libcomelang2-str.c", 1215))));
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1217,wcscpy(result_239,left));
    __freed_obj__ = 0;
    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1218,wcscat(result_239,right));
    __freed_obj__ = 0;
    __result136__ = __result_obj__ = result_239;
    if(result_239 && !__freed_obj__) { result_239 = come_decrement_ref_count(result_239, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result136__;
    __freed_obj__ = 0;
    if(result_239 && !__freed_obj__) { result_239 = come_decrement_ref_count(result_239, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_index(char* str, char* search_str, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
char* head_240;
_Bool _if_conditional99;
int __result137__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_240, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    head_240=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1227,strstr(str,search_str));
    __freed_obj__ = 0;
    if(_if_conditional99=head_240==((void*)0),    __freed_obj__ = 0, 
    _if_conditional99) {
        __result137__ = default_value;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result137__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result138__ = head_240-str;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result138__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int ovec_max_241;
int result_245;
int offset_246;
const char* err_247;
int erro_ofs_248;
int options_249;
char* str_250;
struct real_pcre* re_251;
_Bool _while_condtional14;
int options_252;
int len_253;
int regex_result_254;
int i_255;
_Bool _for_condtionalA32;
int i_256;
_Bool _for_condtionalA33;
_Bool _if_conditional100;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_241, 0, sizeof(int));
memset(&result_245, 0, sizeof(int));
memset(&offset_246, 0, sizeof(int));
memset(&erro_ofs_248, 0, sizeof(int));
memset(&options_249, 0, sizeof(int));
memset(&str_250, 0, sizeof(char*));
memset(&re_251, 0, sizeof(struct real_pcre*));
memset(&options_252, 0, sizeof(int));
memset(&len_253, 0, sizeof(int));
memset(&regex_result_254, 0, sizeof(int));
memset(&i_255, 0, sizeof(int));
memset(&i_256, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    ovec_max_241=16;
    __freed_obj__ = 0;
    int start_242[ovec_max_241];
    memset(&start_242, 0, sizeof(int)    *(ovec_max_241)    );
    __freed_obj__ = 0;
    int end_243[ovec_max_241];
    memset(&end_243, 0, sizeof(int)    *(ovec_max_241)    );
    __freed_obj__ = 0;
    int ovec_value_244[ovec_max_241*3];
    memset(&ovec_value_244, 0, sizeof(int)    *(ovec_max_241*3)    );
    __freed_obj__ = 0;
    result_245=default_value;
    __freed_obj__ = 0;
    offset_246=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_249=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1251))->options;
    __freed_obj__ = 0;
    str_250=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1252))->str;
    __freed_obj__ = 0;
    re_251=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1254))->re;
    __freed_obj__ = 0;
    while(_while_condtional14=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional14) {
        options_252=2097152;
        __freed_obj__ = 0;
        len_253=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1258,strlen(self));
        __freed_obj__ = 0;
        regex_result_254=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1259,pcre_exec(re_251,(struct pcre_extra*)0,self,len_253,offset_246,options_252,ovec_value_244,ovec_max_241*3));
        __freed_obj__ = 0;
        for(
        i_255=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA32=        i_255<ovec_max_241 ,        __freed_obj__ = 0, 
        _for_condtionalA32;        i_255++ ,        __freed_obj__ = 0, 
        0        ){
            start_242[i_255]=ovec_value_244[i_255*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_256=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA33=        i_256<ovec_max_241 ,        __freed_obj__ = 0, 
        _for_condtionalA33;        i_256++ ,        __freed_obj__ = 0, 
        0        ){
            end_243[i_256]=ovec_value_244[i_256*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional100=regex_result_254==1||regex_result_254>0,        __freed_obj__ = 0, 
        _if_conditional100) {
            result_245=start_242[0];
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result139__ = result_245;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result139__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_replace(char* self, int index, char c){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_257;
_Bool _if_conditional101;
void* right_value128;
char* __result140__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value129;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_257, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_257=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1286,strlen(self));
    __freed_obj__ = 0;
    if(_if_conditional101=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1292,strcmp(self,""))==0,    __freed_obj__ = 0, 
    _if_conditional101) {
        __result140__ = __result_obj__ = ((char*)(right_value128=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1289,__builtin_string(self))));
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result140__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional102=index<0,    __freed_obj__ = 0, 
    _if_conditional102) {
        index+=len_257;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional103=index>=len_257,    __freed_obj__ = 0, 
    _if_conditional103) {
        index=len_257-1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional104=index<0,    __freed_obj__ = 0, 
    _if_conditional104) {
        index=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self[index]=c;
    __freed_obj__ = 0;
    __result141__ = __result_obj__ = ((char*)(right_value129=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1306,__builtin_string(self))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result141__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_multiply(char* str, int n){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int len_258;
void* right_value130;
char* result_259;
int i_260;
_Bool _for_condtionalA34;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_258, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&result_259, 0, sizeof(char*));
memset(&i_260, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    len_258=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1311,strlen(str))*n+1;
    __freed_obj__ = 0;
    result_259=(char*)come_increment_ref_count(((char*)(right_value130=(char*)come_calloc(1, sizeof(char)*(1*(len_258)), "libcomelang2-str.c", 1313))));
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_259[0]=0;
    __freed_obj__ = 0;
    for(
    i_260=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA34=    i_260<n ,    __freed_obj__ = 0, 
    _for_condtionalA34;    i_260++ ,    __freed_obj__ = 0, 
    0    ){
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1318,strcat(result_259,str));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result142__ = __result_obj__ = result_259;
    if(result_259 && !__freed_obj__) { result_259 = come_decrement_ref_count(result_259, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result142__;
    __freed_obj__ = 0;
    if(result_259 && !__freed_obj__) { result_259 = come_decrement_ref_count(result_259, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_261;
int ovec_max_262;
const char* err_266;
int erro_ofs_267;
int options_268;
char* str_269;
struct real_pcre* re_270;
void* right_value131;
void* right_value132;
struct buffer* result_271;
_Bool _while_condtional15;
int options_272;
int len_273;
int regex_result_274;
int i_275;
_Bool _for_condtionalA35;
int i_276;
_Bool _for_condtionalA36;
_Bool _if_conditional105;
void* right_value133;
char* str_277;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value134;
char* str_278;
void* right_value135;
char* str_279;
void* right_value136;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_261, 0, sizeof(int));
memset(&ovec_max_262, 0, sizeof(int));
memset(&erro_ofs_267, 0, sizeof(int));
memset(&options_268, 0, sizeof(int));
memset(&str_269, 0, sizeof(char*));
memset(&re_270, 0, sizeof(struct real_pcre*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct buffer*));
memset(&options_272, 0, sizeof(int));
memset(&len_273, 0, sizeof(int));
memset(&regex_result_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
memset(&i_276, 0, sizeof(int));
memset(&right_value133, 0, sizeof(void*));
memset(&str_277, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&str_278, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&str_279, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_261=0;
    __freed_obj__ = 0;
    ovec_max_262=16;
    __freed_obj__ = 0;
    int start_263[ovec_max_262];
    memset(&start_263, 0, sizeof(int)    *(ovec_max_262)    );
    __freed_obj__ = 0;
    int end_264[ovec_max_262];
    memset(&end_264, 0, sizeof(int)    *(ovec_max_262)    );
    __freed_obj__ = 0;
    int ovec_value_265[ovec_max_262*3];
    memset(&ovec_value_265, 0, sizeof(int)    *(ovec_max_262*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_268=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1336))->options;
    __freed_obj__ = 0;
    str_269=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1337))->str;
    __freed_obj__ = 0;
    re_270=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1339))->re;
    __freed_obj__ = 0;
    result_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1341,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1341))), "libcomelang2-str.c", 1341))))))));
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional15=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional15) {
        options_272=2097152;
        __freed_obj__ = 0;
        len_273=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1345,strlen(self));
        __freed_obj__ = 0;
        regex_result_274=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1346,pcre_exec(re_270,(struct pcre_extra*)0,self,len_273,offset_261,options_272,ovec_value_265,ovec_max_262*3));
        __freed_obj__ = 0;
        for(
        i_275=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA35=        i_275<ovec_max_262 ,        __freed_obj__ = 0, 
        _for_condtionalA35;        i_275++ ,        __freed_obj__ = 0, 
        0        ){
            start_263[i_275]=ovec_value_265[i_275*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_276=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA36=        i_276<ovec_max_262 ,        __freed_obj__ = 0, 
        _for_condtionalA36;        i_276++ ,        __freed_obj__ = 0, 
        0        ){
            end_264[i_276]=ovec_value_265[i_276*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional105=regex_result_274==1,        __freed_obj__ = 0, 
        _if_conditional105) {
            str_277=(char*)come_increment_ref_count(((char*)(right_value133=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1358,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1358)),offset_261,start_263[0])))));
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1360,buffer_append_str(((struct buffer*)come_null_check(result_271, "libcomelang2-str.c", 1360)),str_277));
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1361,buffer_append_str(((struct buffer*)come_null_check(result_271, "libcomelang2-str.c", 1361)),replace));
            __freed_obj__ = 0;
            if(_if_conditional106=offset_261==end_264[0],            __freed_obj__ = 0, 
            _if_conditional106) {
                offset_261++;
                __freed_obj__ = 0;
            }
            else {
                offset_261=end_264[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1375))->global,            __freed_obj__ = 0, 
            _if_conditional107) {
                str_278=(char*)come_increment_ref_count(((char*)(right_value134=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1371,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1371)),offset_261,-1)))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1372,buffer_append_str(((struct buffer*)come_null_check(result_271, "libcomelang2-str.c", 1372)),str_278));
                __freed_obj__ = 0;
                if(str_278 && !__freed_obj__) { str_278 = come_decrement_ref_count(str_278, (void*)0, (void*)0, 0, 0, 0); }
                if(str_277 && !__freed_obj__) { str_277 = come_decrement_ref_count(str_277, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_278 && !__freed_obj__) { str_278 = come_decrement_ref_count(str_278, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_277 && !__freed_obj__) { str_277 = come_decrement_ref_count(str_277, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_279=(char*)come_increment_ref_count(((char*)(right_value135=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1378,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1378)),offset_261,-1)))));
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1379,buffer_append_str(((struct buffer*)come_null_check(result_271, "libcomelang2-str.c", 1379)),str_279));
            __freed_obj__ = 0;
            if(str_279 && !__freed_obj__) { str_279 = come_decrement_ref_count(str_279, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_279 && !__freed_obj__) { str_279 = come_decrement_ref_count(str_279, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result143__ = __result_obj__ = ((char*)(right_value136=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1384,buffer_to_string(((struct buffer*)come_null_check(result_271, "libcomelang2-str.c", 1384))))));
    if(result_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result143__;
    __freed_obj__ = 0;
    if(result_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_280;
int ovec_max_281;
const char* err_285;
int erro_ofs_286;
int options_287;
char* str_288;
struct real_pcre* re_289;
void* right_value137;
void* right_value138;
struct buffer* result_290;
int n_291;
_Bool _while_condtional16;
int options_292;
int len_293;
int regex_result_294;
int i_295;
_Bool _for_condtionalA37;
int i_296;
_Bool _for_condtionalA38;
_Bool _if_conditional108;
void* right_value139;
char* str_297;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value140;
char* str_298;
_Bool _if_conditional111;
void* right_value141;
char* str_299;
void* right_value142;
char* str_300;
void* right_value143;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_280, 0, sizeof(int));
memset(&ovec_max_281, 0, sizeof(int));
memset(&erro_ofs_286, 0, sizeof(int));
memset(&options_287, 0, sizeof(int));
memset(&str_288, 0, sizeof(char*));
memset(&re_289, 0, sizeof(struct real_pcre*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct buffer*));
memset(&n_291, 0, sizeof(int));
memset(&options_292, 0, sizeof(int));
memset(&len_293, 0, sizeof(int));
memset(&regex_result_294, 0, sizeof(int));
memset(&i_295, 0, sizeof(int));
memset(&i_296, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&str_297, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&str_298, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&str_299, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&str_300, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_280=0;
    __freed_obj__ = 0;
    ovec_max_281=16;
    __freed_obj__ = 0;
    int start_282[ovec_max_281];
    memset(&start_282, 0, sizeof(int)    *(ovec_max_281)    );
    __freed_obj__ = 0;
    int end_283[ovec_max_281];
    memset(&end_283, 0, sizeof(int)    *(ovec_max_281)    );
    __freed_obj__ = 0;
    int ovec_value_284[ovec_max_281*3];
    memset(&ovec_value_284, 0, sizeof(int)    *(ovec_max_281*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_287=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1399))->options;
    __freed_obj__ = 0;
    str_288=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1400))->str;
    __freed_obj__ = 0;
    re_289=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1402))->re;
    __freed_obj__ = 0;
    result_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1404,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1404))), "libcomelang2-str.c", 1404))))))));
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_291=0;
    __freed_obj__ = 0;
    while(_while_condtional16=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional16) {
        options_292=2097152;
        __freed_obj__ = 0;
        len_293=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1410,strlen(self));
        __freed_obj__ = 0;
        regex_result_294=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1411,pcre_exec(re_289,(struct pcre_extra*)0,self,len_293,offset_280,options_292,ovec_value_284,ovec_max_281*3));
        __freed_obj__ = 0;
        for(
        i_295=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA37=        i_295<ovec_max_281 ,        __freed_obj__ = 0, 
        _for_condtionalA37;        i_295++ ,        __freed_obj__ = 0, 
        0        ){
            start_282[i_295]=ovec_value_284[i_295*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_296=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA38=        i_296<ovec_max_281 ,        __freed_obj__ = 0, 
        _for_condtionalA38;        i_296++ ,        __freed_obj__ = 0, 
        0        ){
            end_283[i_296]=ovec_value_284[i_296*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=regex_result_294==1,        __freed_obj__ = 0, 
        _if_conditional108) {
            n_291++;
            __freed_obj__ = 0;
            str_297=(char*)come_increment_ref_count(((char*)(right_value139=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1424,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1424)),offset_280,start_282[0])))));
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1426,buffer_append_str(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1426)),str_297));
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1427,buffer_append_str(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1427)),replace));
            __freed_obj__ = 0;
            if(_if_conditional109=offset_280==end_283[0],            __freed_obj__ = 0, 
            _if_conditional109) {
                offset_280++;
                __freed_obj__ = 0;
            }
            else {
                offset_280=end_283[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional110=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1441))->global,            __freed_obj__ = 0, 
            _if_conditional110) {
                str_298=(char*)come_increment_ref_count(((char*)(right_value140=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1437,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1437)),offset_280,-1)))));
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1438,buffer_append_str(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1438)),str_298));
                __freed_obj__ = 0;
                if(str_298 && !__freed_obj__) { str_298 = come_decrement_ref_count(str_298, (void*)0, (void*)0, 0, 0, 0); }
                if(str_297 && !__freed_obj__) { str_297 = come_decrement_ref_count(str_297, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_298 && !__freed_obj__) { str_298 = come_decrement_ref_count(str_298, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional111=n_291==count,            __freed_obj__ = 0, 
            _if_conditional111) {
                str_299=(char*)come_increment_ref_count(((char*)(right_value141=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1442,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1442)),offset_280,-1)))));
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1443,buffer_append_str(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1443)),str_299));
                __freed_obj__ = 0;
                if(str_299 && !__freed_obj__) { str_299 = come_decrement_ref_count(str_299, (void*)0, (void*)0, 0, 0, 0); }
                if(str_297 && !__freed_obj__) { str_297 = come_decrement_ref_count(str_297, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_299 && !__freed_obj__) { str_299 = come_decrement_ref_count(str_299, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_297 && !__freed_obj__) { str_297 = come_decrement_ref_count(str_297, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_300=(char*)come_increment_ref_count(((char*)(right_value142=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1449,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1449)),offset_280,-1)))));
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1450,buffer_append_str(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1450)),str_300));
            __freed_obj__ = 0;
            if(str_300 && !__freed_obj__) { str_300 = come_decrement_ref_count(str_300, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_300 && !__freed_obj__) { str_300 = come_decrement_ref_count(str_300, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result144__ = __result_obj__ = ((char*)(right_value143=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1455,buffer_to_string(((struct buffer*)come_null_check(result_290, "libcomelang2-str.c", 1455))))));
    if(result_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result144__;
    __freed_obj__ = 0;
    if(result_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_split_str(char* self, char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value144;
void* right_value145;
struct list$1charph* result_301;
void* right_value146;
void* right_value147;
struct buffer* buf_302;
int i_303;
_Bool _for_condtionalA39;
_Bool _if_conditional112;
void* right_value148;
_Bool _if_conditional113;
void* right_value149;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&result_301, 0, sizeof(struct list$1charph*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&buf_302, 0, sizeof(struct buffer*));
memset(&i_303, 0, sizeof(int));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    result_301=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1463,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1463))), "libcomelang2-str.c", 1463))))))));
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buf_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1465,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value146=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1465))), "libcomelang2-str.c", 1465))))))));
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_303=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA39=    i_303<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1477,charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1477)))) ,    __freed_obj__ = 0, 
    _for_condtionalA39;    i_303++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional112=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1476,strstr(self+i_303,str))==self+i_303,        __freed_obj__ = 0, 
        _if_conditional112) {
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1469,list$1charph_push_back(((struct list$1charph*)come_null_check(result_301, "libcomelang2-str.c", 1469)),(char*)come_increment_ref_count(((char*)(right_value148=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1469,__builtin_string(((struct buffer*)come_null_check(buf_302, "libcomelang2-str.c", 1469))->buf)))))));
            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1470,buffer_reset(((struct buffer*)come_null_check(buf_302, "libcomelang2-str.c", 1470))));
            __freed_obj__ = 0;
            i_303+=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1471,strlen(str))-1;
            __freed_obj__ = 0;
        }
        else {
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1474,buffer_append_char(((struct buffer*)come_null_check(buf_302, "libcomelang2-str.c", 1474)),self[i_303]));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional113=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1481,buffer_length(((struct buffer*)come_null_check(buf_302, "libcomelang2-str.c", 1481))))!=0,    __freed_obj__ = 0, 
    _if_conditional113) {
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1478,list$1charph_push_back(((struct list$1charph*)come_null_check(result_301, "libcomelang2-str.c", 1478)),(char*)come_increment_ref_count(((char*)(right_value149=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1478,__builtin_string(((struct buffer*)come_null_check(buf_302, "libcomelang2-str.c", 1478))->buf)))))));
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result145__ = __result_obj__ = result_301;
    if(result_301 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(buf_302 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result145__;
    __freed_obj__ = 0;
    if(result_301 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_302 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value150;
void* right_value151;
struct list$1charph* result_304;
int offset_305;
int ovec_max_306;
const char* err_310;
int erro_ofs_311;
int options_312;
char* str_313;
struct real_pcre* re_314;
_Bool _while_condtional17;
int options_315;
int len_316;
int regex_result_317;
int i_318;
_Bool _for_condtionalA40;
int i_319;
_Bool _for_condtionalA41;
_Bool _if_conditional114;
void* right_value152;
char* str_320;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value153;
char* str_321;
_Bool _if_conditional117;
int i_322;
_Bool _for_condtionalA42;
void* right_value154;
char* match_string_323;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&result_304, 0, sizeof(struct list$1charph*));
memset(&offset_305, 0, sizeof(int));
memset(&ovec_max_306, 0, sizeof(int));
memset(&erro_ofs_311, 0, sizeof(int));
memset(&options_312, 0, sizeof(int));
memset(&str_313, 0, sizeof(char*));
memset(&re_314, 0, sizeof(struct real_pcre*));
memset(&options_315, 0, sizeof(int));
memset(&len_316, 0, sizeof(int));
memset(&regex_result_317, 0, sizeof(int));
memset(&i_318, 0, sizeof(int));
memset(&i_319, 0, sizeof(int));
memset(&right_value152, 0, sizeof(void*));
memset(&str_320, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&str_321, 0, sizeof(char*));
memset(&i_322, 0, sizeof(int));
memset(&right_value154, 0, sizeof(void*));
memset(&match_string_323, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_304=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1486,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1486))), "libcomelang2-str.c", 1486))))))));
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_305=0;
    __freed_obj__ = 0;
    ovec_max_306=16;
    __freed_obj__ = 0;
    int start_307[ovec_max_306];
    memset(&start_307, 0, sizeof(int)    *(ovec_max_306)    );
    __freed_obj__ = 0;
    int end_308[ovec_max_306];
    memset(&end_308, 0, sizeof(int)    *(ovec_max_306)    );
    __freed_obj__ = 0;
    int ovec_value_309[ovec_max_306*3];
    memset(&ovec_value_309, 0, sizeof(int)    *(ovec_max_306*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_312=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1498))->options;
    __freed_obj__ = 0;
    str_313=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1499))->str;
    __freed_obj__ = 0;
    re_314=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1501))->re;
    __freed_obj__ = 0;
    while(_while_condtional17=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional17) {
        options_315=2097152;
        __freed_obj__ = 0;
        len_316=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1506,strlen(self));
        __freed_obj__ = 0;
        regex_result_317=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1507,pcre_exec(re_314,(struct pcre_extra*)0,self,len_316,offset_305,options_315,ovec_value_309,ovec_max_306*3));
        __freed_obj__ = 0;
        for(
        i_318=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA40=        i_318<ovec_max_306 ,        __freed_obj__ = 0, 
        _for_condtionalA40;        i_318++ ,        __freed_obj__ = 0, 
        0        ){
            start_307[i_318]=ovec_value_309[i_318*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_319=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA41=        i_319<ovec_max_306 ,        __freed_obj__ = 0, 
        _for_condtionalA41;        i_319++ ,        __freed_obj__ = 0, 
        0        ){
            end_308[i_319]=ovec_value_309[i_319*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=regex_result_317==1,        __freed_obj__ = 0, 
        _if_conditional114) {
            str_320=(char*)come_increment_ref_count(((char*)(right_value152=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1519,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1519)),start_307[0],end_308[0])))));
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1521,list$1charph_push_back(((struct list$1charph*)come_null_check(result_304, "libcomelang2-str.c", 1521)),(char*)come_increment_ref_count(str_320)));
            __freed_obj__ = 0;
            if(_if_conditional115=offset_305==end_308[0],            __freed_obj__ = 0, 
            _if_conditional115) {
                offset_305++;
                __freed_obj__ = 0;
            }
            else {
                offset_305=end_308[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_320 && !__freed_obj__) { str_320 = come_decrement_ref_count(str_320, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional116=regex_result_317>1,            __freed_obj__ = 0, 
            _if_conditional116) {
                str_321=(char*)come_increment_ref_count(((char*)(right_value153=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1532,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1532)),start_307[0],end_308[0])))));
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1533,list$1charph_push_back(((struct list$1charph*)come_null_check(result_304, "libcomelang2-str.c", 1533)),(char*)come_increment_ref_count(str_321)));
                __freed_obj__ = 0;
                if(_if_conditional117=offset_305==end_308[0],                __freed_obj__ = 0, 
                _if_conditional117) {
                    offset_305++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_305=end_308[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_322=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA42=                i_322<regex_result_317 ,                __freed_obj__ = 0, 
                _for_condtionalA42;                i_322++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_323=(char*)come_increment_ref_count(((char*)(right_value154=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1543,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1543)),start_307[i_322],end_308[i_322])))));
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1544,list$1charph_push_back(((struct list$1charph*)come_null_check(result_304, "libcomelang2-str.c", 1544)),(char*)come_increment_ref_count(match_string_323)));
                    __freed_obj__ = 0;
                    if(match_string_323 && !__freed_obj__) { match_string_323 = come_decrement_ref_count(match_string_323, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_321 && !__freed_obj__) { str_321 = come_decrement_ref_count(str_321, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = result_304;
    if(result_304 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result146__;
    __freed_obj__ = 0;
    if(result_304 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_324;
int erro_ofs_325;
int options_326;
char* str_327;
struct real_pcre* re_328;
void* right_value155;
void* right_value156;
struct list$1charph* result_329;
int offset_330;
int ovec_max_331;
_Bool _while_condtional18;
int options_335;
int len_336;
int regex_result_337;
int i_338;
_Bool _for_condtionalA43;
int i_339;
_Bool _for_condtionalA44;
_Bool _if_conditional118;
void* right_value157;
char* str_340;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value158;
char* str_341;
_Bool _if_conditional121;
int i_342;
_Bool _for_condtionalA45;
void* right_value159;
char* match_str_343;
_Bool _if_conditional122;
void* right_value160;
char* str_344;
struct list$1charph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_325, 0, sizeof(int));
memset(&options_326, 0, sizeof(int));
memset(&str_327, 0, sizeof(char*));
memset(&re_328, 0, sizeof(struct real_pcre*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&result_329, 0, sizeof(struct list$1charph*));
memset(&offset_330, 0, sizeof(int));
memset(&ovec_max_331, 0, sizeof(int));
memset(&options_335, 0, sizeof(int));
memset(&len_336, 0, sizeof(int));
memset(&regex_result_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
memset(&i_339, 0, sizeof(int));
memset(&right_value157, 0, sizeof(void*));
memset(&str_340, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&str_341, 0, sizeof(char*));
memset(&i_342, 0, sizeof(int));
memset(&right_value159, 0, sizeof(void*));
memset(&match_str_343, 0, sizeof(char*));
memset(&right_value160, 0, sizeof(void*));
memset(&str_344, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_326=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1562))->options;
    __freed_obj__ = 0;
    str_327=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1563))->str;
    __freed_obj__ = 0;
    re_328=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1565))->re;
    __freed_obj__ = 0;
    result_329=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1567,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value155=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1567))), "libcomelang2-str.c", 1567))))))));
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_330=0;
    __freed_obj__ = 0;
    ovec_max_331=16;
    __freed_obj__ = 0;
    int start_332[ovec_max_331];
    memset(&start_332, 0, sizeof(int)    *(ovec_max_331)    );
    __freed_obj__ = 0;
    int end_333[ovec_max_331];
    memset(&end_333, 0, sizeof(int)    *(ovec_max_331)    );
    __freed_obj__ = 0;
    int ovec_value_334[ovec_max_331*3];
    memset(&ovec_value_334, 0, sizeof(int)    *(ovec_max_331*3)    );
    __freed_obj__ = 0;
    while(_while_condtional18=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional18) {
        options_335=2097152;
        __freed_obj__ = 0;
        len_336=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1578,strlen(self));
        __freed_obj__ = 0;
        regex_result_337=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1580,pcre_exec(re_328,(struct pcre_extra*)0,self,len_336,offset_330,options_335,ovec_value_334,ovec_max_331*3));
        __freed_obj__ = 0;
        for(
        i_338=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA43=        i_338<ovec_max_331 ,        __freed_obj__ = 0, 
        _for_condtionalA43;        i_338++ ,        __freed_obj__ = 0, 
        0        ){
            start_332[i_338]=ovec_value_334[i_338*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_339=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA44=        i_339<ovec_max_331 ,        __freed_obj__ = 0, 
        _for_condtionalA44;        i_339++ ,        __freed_obj__ = 0, 
        0        ){
            end_333[i_339]=ovec_value_334[i_339*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=regex_result_337==1,        __freed_obj__ = 0, 
        _if_conditional118) {
            str_340=(char*)come_increment_ref_count(((char*)(right_value157=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1592,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1592)),offset_330,start_332[0])))));
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1593,list$1charph_push_back(((struct list$1charph*)come_null_check(result_329, "libcomelang2-str.c", 1593)),(char*)come_increment_ref_count(str_340)));
            __freed_obj__ = 0;
            if(_if_conditional119=offset_330==end_333[0],            __freed_obj__ = 0, 
            _if_conditional119) {
                offset_330++;
                __freed_obj__ = 0;
            }
            else {
                offset_330=end_333[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_340 && !__freed_obj__) { str_340 = come_decrement_ref_count(str_340, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional120=regex_result_337>1,            __freed_obj__ = 0, 
            _if_conditional120) {
                str_341=(char*)come_increment_ref_count(((char*)(right_value158=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1604,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1604)),offset_330,start_332[0])))));
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1605,list$1charph_push_back(((struct list$1charph*)come_null_check(result_329, "libcomelang2-str.c", 1605)),(char*)come_increment_ref_count(str_341)));
                __freed_obj__ = 0;
                if(_if_conditional121=offset_330==end_333[0],                __freed_obj__ = 0, 
                _if_conditional121) {
                    offset_330++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_330=end_333[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_342=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA45=                i_342<regex_result_337 ,                __freed_obj__ = 0, 
                _for_condtionalA45;                i_342++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_343=(char*)come_increment_ref_count(((char*)(right_value159=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1615,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1615)),start_332[i_342],end_333[i_342])))));
                    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1616,list$1charph_push_back(((struct list$1charph*)come_null_check(result_329, "libcomelang2-str.c", 1616)),(char*)come_increment_ref_count(match_str_343)));
                    __freed_obj__ = 0;
                    if(match_str_343 && !__freed_obj__) { match_str_343 = come_decrement_ref_count(match_str_343, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_341 && !__freed_obj__) { str_341 = come_decrement_ref_count(str_341, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional122=offset_330<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1631,charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1631)))),    __freed_obj__ = 0, 
    _if_conditional122) {
        str_344=(char*)come_increment_ref_count(((char*)(right_value160=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1627,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1627)),offset_330,-1)))));
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1628,list$1charph_push_back(((struct list$1charph*)come_null_check(result_329, "libcomelang2-str.c", 1628)),(char*)come_increment_ref_count(str_344)));
        __freed_obj__ = 0;
        if(str_344 && !__freed_obj__) { str_344 = come_decrement_ref_count(str_344, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = result_329;
    if(result_329 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result147__;
    __freed_obj__ = 0;
    if(result_329 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool charp_match(char* self, struct come_regex* reg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_345;
int ovec_max_346;
const char* err_350;
int erro_ofs_351;
int options_352;
char* str_353;
struct real_pcre* re_354;
_Bool _while_condtional19;
int options_355;
int len_356;
int regex_result_357;
int i_358;
_Bool _for_condtionalA46;
int i_359;
_Bool _for_condtionalA47;
_Bool _if_conditional123;
_Bool __result148__;
_Bool __result149__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_345, 0, sizeof(int));
memset(&ovec_max_346, 0, sizeof(int));
memset(&erro_ofs_351, 0, sizeof(int));
memset(&options_352, 0, sizeof(int));
memset(&str_353, 0, sizeof(char*));
memset(&re_354, 0, sizeof(struct real_pcre*));
memset(&options_355, 0, sizeof(int));
memset(&len_356, 0, sizeof(int));
memset(&regex_result_357, 0, sizeof(int));
memset(&i_358, 0, sizeof(int));
memset(&i_359, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_345=0;
    __freed_obj__ = 0;
    ovec_max_346=16;
    __freed_obj__ = 0;
    int start_347[ovec_max_346];
    memset(&start_347, 0, sizeof(int)    *(ovec_max_346)    );
    __freed_obj__ = 0;
    int end_348[ovec_max_346];
    memset(&end_348, 0, sizeof(int)    *(ovec_max_346)    );
    __freed_obj__ = 0;
    int ovec_value_349[ovec_max_346*3];
    memset(&ovec_value_349, 0, sizeof(int)    *(ovec_max_346*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_352=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1646))->options;
    __freed_obj__ = 0;
    str_353=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1647))->str;
    __freed_obj__ = 0;
    re_354=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1649))->re;
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        options_355=2097152;
        __freed_obj__ = 0;
        len_356=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1653,strlen(self));
        __freed_obj__ = 0;
        regex_result_357=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1655,pcre_exec(re_354,(struct pcre_extra*)0,self,len_356,offset_345,options_355,ovec_value_349,ovec_max_346*3));
        __freed_obj__ = 0;
        for(
        i_358=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA46=        i_358<ovec_max_346 ,        __freed_obj__ = 0, 
        _for_condtionalA46;        i_358++ ,        __freed_obj__ = 0, 
        0        ){
            start_347[i_358]=ovec_value_349[i_358*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_359=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA47=        i_359<ovec_max_346 ,        __freed_obj__ = 0, 
        _for_condtionalA47;        i_359++ ,        __freed_obj__ = 0, 
        0        ){
            end_348[i_359]=ovec_value_349[i_359*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=regex_result_357>0,        __freed_obj__ = 0, 
        _if_conditional123) {
            __result148__ = (_Bool)1;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result148__;
            __freed_obj__ = 0;
        }
        else {
            __result149__ = (_Bool)0;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result149__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result150__ = (_Bool)0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result150__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_360;
int erro_ofs_361;
int options_362;
char* str_363;
struct real_pcre* re_364;
void* right_value161;
void* right_value162;
struct list$1charph* result_365;
int offset_366;
int ovec_max_367;
int n_371;
_Bool _while_condtional20;
int options_372;
int len_373;
int regex_result_374;
int i_375;
_Bool _for_condtionalA48;
int i_376;
_Bool _for_condtionalA49;
_Bool _if_conditional124;
void* right_value163;
char* str_377;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value164;
char* str_378;
_Bool _if_conditional127;
int i_379;
_Bool _for_condtionalA50;
void* right_value165;
char* match_str_380;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value166;
char* str_381;
struct list$1charph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_361, 0, sizeof(int));
memset(&options_362, 0, sizeof(int));
memset(&str_363, 0, sizeof(char*));
memset(&re_364, 0, sizeof(struct real_pcre*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&result_365, 0, sizeof(struct list$1charph*));
memset(&offset_366, 0, sizeof(int));
memset(&ovec_max_367, 0, sizeof(int));
memset(&n_371, 0, sizeof(int));
memset(&options_372, 0, sizeof(int));
memset(&len_373, 0, sizeof(int));
memset(&regex_result_374, 0, sizeof(int));
memset(&i_375, 0, sizeof(int));
memset(&i_376, 0, sizeof(int));
memset(&right_value163, 0, sizeof(void*));
memset(&str_377, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&str_378, 0, sizeof(char*));
memset(&i_379, 0, sizeof(int));
memset(&right_value165, 0, sizeof(void*));
memset(&match_str_380, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&str_381, 0, sizeof(char*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_362=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1684))->options;
    __freed_obj__ = 0;
    str_363=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1685))->str;
    __freed_obj__ = 0;
    re_364=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1687))->re;
    __freed_obj__ = 0;
    result_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1689,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1689))), "libcomelang2-str.c", 1689))))))));
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_366=0;
    __freed_obj__ = 0;
    ovec_max_367=16;
    __freed_obj__ = 0;
    int start_368[ovec_max_367];
    memset(&start_368, 0, sizeof(int)    *(ovec_max_367)    );
    __freed_obj__ = 0;
    int end_369[ovec_max_367];
    memset(&end_369, 0, sizeof(int)    *(ovec_max_367)    );
    __freed_obj__ = 0;
    int ovec_value_370[ovec_max_367*3];
    memset(&ovec_value_370, 0, sizeof(int)    *(ovec_max_367*3)    );
    __freed_obj__ = 0;
    n_371=0;
    __freed_obj__ = 0;
    while(_while_condtional20=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional20) {
        options_372=2097152;
        __freed_obj__ = 0;
        len_373=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1702,strlen(self));
        __freed_obj__ = 0;
        regex_result_374=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1704,pcre_exec(re_364,(struct pcre_extra*)0,self,len_373,offset_366,options_372,ovec_value_370,ovec_max_367*3));
        __freed_obj__ = 0;
        for(
        i_375=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA48=        i_375<ovec_max_367 ,        __freed_obj__ = 0, 
        _for_condtionalA48;        i_375++ ,        __freed_obj__ = 0, 
        0        ){
            start_368[i_375]=ovec_value_370[i_375*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_376=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA49=        i_376<ovec_max_367 ,        __freed_obj__ = 0, 
        _for_condtionalA49;        i_376++ ,        __freed_obj__ = 0, 
        0        ){
            end_369[i_376]=ovec_value_370[i_376*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=regex_result_374==1,        __freed_obj__ = 0, 
        _if_conditional124) {
            str_377=(char*)come_increment_ref_count(((char*)(right_value163=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1716,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1716)),offset_366,start_368[0])))));
            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1717,list$1charph_push_back(((struct list$1charph*)come_null_check(result_365, "libcomelang2-str.c", 1717)),(char*)come_increment_ref_count(str_377)));
            __freed_obj__ = 0;
            if(_if_conditional125=offset_366==end_369[0],            __freed_obj__ = 0, 
            _if_conditional125) {
                offset_366++;
                __freed_obj__ = 0;
            }
            else {
                offset_366=end_369[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_377 && !__freed_obj__) { str_377 = come_decrement_ref_count(str_377, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional126=regex_result_374>1,            __freed_obj__ = 0, 
            _if_conditional126) {
                str_378=(char*)come_increment_ref_count(((char*)(right_value164=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1728,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1728)),offset_366,start_368[0])))));
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1729,list$1charph_push_back(((struct list$1charph*)come_null_check(result_365, "libcomelang2-str.c", 1729)),(char*)come_increment_ref_count(str_378)));
                __freed_obj__ = 0;
                if(_if_conditional127=offset_366==end_369[0],                __freed_obj__ = 0, 
                _if_conditional127) {
                    offset_366++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_366=end_369[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_379=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA50=                i_379<regex_result_374 ,                __freed_obj__ = 0, 
                _for_condtionalA50;                i_379++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_380=(char*)come_increment_ref_count(((char*)(right_value165=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1739,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1739)),start_368[i_379],end_369[i_379])))));
                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1740,list$1charph_push_back(((struct list$1charph*)come_null_check(result_365, "libcomelang2-str.c", 1740)),(char*)come_increment_ref_count(match_str_380)));
                    __freed_obj__ = 0;
                    if(match_str_380 && !__freed_obj__) { match_str_380 = come_decrement_ref_count(match_str_380, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_378 && !__freed_obj__) { str_378 = come_decrement_ref_count(str_378, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_371++;
        __freed_obj__ = 0;
        if(_if_conditional128=maxsplit==n_371,        __freed_obj__ = 0, 
        _if_conditional128) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional129=offset_366<(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1761,charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1761)))),    __freed_obj__ = 0, 
    _if_conditional129) {
        str_381=(char*)come_increment_ref_count(((char*)(right_value166=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1757,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1757)),offset_366,-1)))));
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1758,list$1charph_push_back(((struct list$1charph*)come_null_check(result_365, "libcomelang2-str.c", 1758)),(char*)come_increment_ref_count(str_381)));
        __freed_obj__ = 0;
        if(str_381 && !__freed_obj__) { str_381 = come_decrement_ref_count(str_381, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result151__ = __result_obj__ = result_365;
    if(result_365 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result151__;
    __freed_obj__ = 0;
    if(result_365 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
const char* err_382;
int erro_ofs_383;
int options_384;
char* str_385;
struct real_pcre* re_386;
void* right_value167;
char* self2_387;
int ovec_max_388;
int result_392;
int offset_393;
int n_394;
_Bool _while_condtional21;
int options_395;
int len_396;
int regex_result_397;
int i_398;
_Bool _for_condtionalA51;
int i_399;
_Bool _for_condtionalA52;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_383, 0, sizeof(int));
memset(&options_384, 0, sizeof(int));
memset(&str_385, 0, sizeof(char*));
memset(&re_386, 0, sizeof(struct real_pcre*));
memset(&right_value167, 0, sizeof(void*));
memset(&self2_387, 0, sizeof(char*));
memset(&ovec_max_388, 0, sizeof(int));
memset(&result_392, 0, sizeof(int));
memset(&offset_393, 0, sizeof(int));
memset(&n_394, 0, sizeof(int));
memset(&options_395, 0, sizeof(int));
memset(&len_396, 0, sizeof(int));
memset(&regex_result_397, 0, sizeof(int));
memset(&i_398, 0, sizeof(int));
memset(&i_399, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_384=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1769))->options;
    __freed_obj__ = 0;
    str_385=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1770))->str;
    __freed_obj__ = 0;
    re_386=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1772))->re;
    __freed_obj__ = 0;
    self2_387=(char*)come_increment_ref_count(((char*)(right_value167=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1774,charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 1774)))))));
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ovec_max_388=16;
    __freed_obj__ = 0;
    int start_389[ovec_max_388];
    memset(&start_389, 0, sizeof(int)    *(ovec_max_388)    );
    __freed_obj__ = 0;
    int end_390[ovec_max_388];
    memset(&end_390, 0, sizeof(int)    *(ovec_max_388)    );
    __freed_obj__ = 0;
    int ovec_value_391[ovec_max_388*3];
    memset(&ovec_value_391, 0, sizeof(int)    *(ovec_max_388*3)    );
    __freed_obj__ = 0;
    result_392=default_value;
    __freed_obj__ = 0;
    offset_393=0;
    __freed_obj__ = 0;
    n_394=0;
    __freed_obj__ = 0;
    while(_while_condtional21=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional21) {
        options_395=2097152;
        __freed_obj__ = 0;
        len_396=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1789,strlen(self2_387));
        __freed_obj__ = 0;
        regex_result_397=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1790,pcre_exec(re_386,(struct pcre_extra*)0,self2_387,len_396,offset_393,options_395,ovec_value_391,ovec_max_388*3));
        __freed_obj__ = 0;
        for(
        i_398=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA51=        i_398<ovec_max_388 ,        __freed_obj__ = 0, 
        _for_condtionalA51;        i_398++ ,        __freed_obj__ = 0, 
        0        ){
            start_389[i_398]=ovec_value_391[i_398*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_399=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA52=        i_399<ovec_max_388 ,        __freed_obj__ = 0, 
        _for_condtionalA52;        i_399++ ,        __freed_obj__ = 0, 
        0        ){
            end_390[i_399]=ovec_value_391[i_399*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional130=regex_result_397>0,        __freed_obj__ = 0, 
        _if_conditional130) {
            n_394++;
            __freed_obj__ = 0;
            if(_if_conditional131=offset_393==end_390[0],            __freed_obj__ = 0, 
            _if_conditional131) {
                offset_393++;
                __freed_obj__ = 0;
            }
            else {
                offset_393=end_390[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional132=n_394==count,            __freed_obj__ = 0, 
            _if_conditional132) {
                result_392=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1812,strlen(self))-end_390[0];
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result152__ = result_392;
    if(self2_387 && !__freed_obj__) { self2_387 = come_decrement_ref_count(self2_387, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result152__;
    __freed_obj__ = 0;
    if(self2_387 && !__freed_obj__) { self2_387 = come_decrement_ref_count(self2_387, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_400;
int ovec_max_401;
const char* err_405;
int erro_ofs_406;
int options_407;
char* str_408;
struct real_pcre* re_409;
int n_410;
_Bool _while_condtional22;
int options_411;
int len_412;
int regex_result_413;
int i_414;
_Bool _for_condtionalA53;
int i_415;
_Bool _for_condtionalA54;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result153__;
_Bool _if_conditional135;
_Bool __result154__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_400, 0, sizeof(int));
memset(&ovec_max_401, 0, sizeof(int));
memset(&erro_ofs_406, 0, sizeof(int));
memset(&options_407, 0, sizeof(int));
memset(&str_408, 0, sizeof(char*));
memset(&re_409, 0, sizeof(struct real_pcre*));
memset(&n_410, 0, sizeof(int));
memset(&options_411, 0, sizeof(int));
memset(&len_412, 0, sizeof(int));
memset(&regex_result_413, 0, sizeof(int));
memset(&i_414, 0, sizeof(int));
memset(&i_415, 0, sizeof(int));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_400=0;
    __freed_obj__ = 0;
    ovec_max_401=16;
    __freed_obj__ = 0;
    int start_402[ovec_max_401];
    memset(&start_402, 0, sizeof(int)    *(ovec_max_401)    );
    __freed_obj__ = 0;
    int end_403[ovec_max_401];
    memset(&end_403, 0, sizeof(int)    *(ovec_max_401)    );
    __freed_obj__ = 0;
    int ovec_value_404[ovec_max_401*3];
    memset(&ovec_value_404, 0, sizeof(int)    *(ovec_max_401*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_407=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1838))->options;
    __freed_obj__ = 0;
    str_408=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1839))->str;
    __freed_obj__ = 0;
    re_409=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1841))->re;
    __freed_obj__ = 0;
    n_410=0;
    __freed_obj__ = 0;
    while(_while_condtional22=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional22) {
        options_411=2097152;
        __freed_obj__ = 0;
        len_412=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1847,strlen(self));
        __freed_obj__ = 0;
        regex_result_413=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1849,pcre_exec(re_409,(struct pcre_extra*)0,self,len_412,offset_400,options_411,ovec_value_404,ovec_max_401*3));
        __freed_obj__ = 0;
        for(
        i_414=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA53=        i_414<ovec_max_401 ,        __freed_obj__ = 0, 
        _for_condtionalA53;        i_414++ ,        __freed_obj__ = 0, 
        0        ){
            start_402[i_414]=ovec_value_404[i_414*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_415=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA54=        i_415<ovec_max_401 ,        __freed_obj__ = 0, 
        _for_condtionalA54;        i_415++ ,        __freed_obj__ = 0, 
        0        ){
            end_403[i_415]=ovec_value_404[i_415*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional133=regex_result_413>0,        __freed_obj__ = 0, 
        _if_conditional133) {
            n_410++;
            __freed_obj__ = 0;
            if(_if_conditional134=count==n_410,            __freed_obj__ = 0, 
            _if_conditional134) {
                __result153__ = (_Bool)1;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result153__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional135=offset_400==end_403[0],            __freed_obj__ = 0, 
            _if_conditional135) {
                offset_400++;
                __freed_obj__ = 0;
            }
            else {
                offset_400=end_403[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            __result154__ = (_Bool)0;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result154__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result155__ = (_Bool)0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result155__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_416;
int ovec_max_417;
const char* err_421;
int erro_ofs_422;
int options_423;
char* str_424;
struct real_pcre* re_425;
void* right_value168;
void* right_value169;
struct buffer* result_426;
_Bool _while_condtional23;
int options_427;
int len_428;
int regex_result_429;
int i_430;
_Bool _for_condtionalA55;
int i_431;
_Bool _for_condtionalA56;
_Bool _if_conditional136;
void* right_value170;
char* str_432;
void* right_value171;
void* right_value172;
struct list$1charph* group_strings_433;
void* right_value173;
char* match_string_434;
void* right_value174;
void* right_value175;
char* block_result_435;
_Bool _if_conditional137;
void* right_value176;
char* __result156__;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value177;
char* str_436;
_Bool _if_conditional140;
void* right_value178;
char* str_437;
_Bool _if_conditional141;
void* right_value179;
void* right_value180;
struct list$1charph* group_strings_438;
int i_439;
_Bool _for_condtionalA57;
void* right_value181;
char* match_string_440;
void* right_value182;
char* match_string_441;
void* right_value183;
char* block_result_442;
_Bool _if_conditional142;
void* right_value184;
char* __result157__;
_Bool _if_conditional143;
void* right_value185;
char* str_443;
void* right_value186;
char* str_444;
void* right_value187;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_416, 0, sizeof(int));
memset(&ovec_max_417, 0, sizeof(int));
memset(&erro_ofs_422, 0, sizeof(int));
memset(&options_423, 0, sizeof(int));
memset(&str_424, 0, sizeof(char*));
memset(&re_425, 0, sizeof(struct real_pcre*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&result_426, 0, sizeof(struct buffer*));
memset(&options_427, 0, sizeof(int));
memset(&len_428, 0, sizeof(int));
memset(&regex_result_429, 0, sizeof(int));
memset(&i_430, 0, sizeof(int));
memset(&i_431, 0, sizeof(int));
memset(&right_value170, 0, sizeof(void*));
memset(&str_432, 0, sizeof(char*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&group_strings_433, 0, sizeof(struct list$1charph*));
memset(&right_value173, 0, sizeof(void*));
memset(&match_string_434, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&block_result_435, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&str_436, 0, sizeof(char*));
memset(&right_value178, 0, sizeof(void*));
memset(&str_437, 0, sizeof(char*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&group_strings_438, 0, sizeof(struct list$1charph*));
memset(&i_439, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&match_string_440, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&match_string_441, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&block_result_442, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&str_443, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&str_444, 0, sizeof(char*));
memset(&right_value187, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_416=0;
    __freed_obj__ = 0;
    ovec_max_417=16;
    __freed_obj__ = 0;
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    __freed_obj__ = 0;
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    __freed_obj__ = 0;
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_423=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1896))->options;
    __freed_obj__ = 0;
    str_424=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1897))->str;
    __freed_obj__ = 0;
    re_425=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1899))->re;
    __freed_obj__ = 0;
    result_426=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1901,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1901))), "libcomelang2-str.c", 1901))))))));
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional23=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional23) {
        options_427=2097152;
        __freed_obj__ = 0;
        len_428=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1905,strlen(self));
        __freed_obj__ = 0;
        regex_result_429=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1906,pcre_exec(re_425,(struct pcre_extra*)0,self,len_428,offset_416,options_427,ovec_value_420,ovec_max_417*3));
        __freed_obj__ = 0;
        for(
        i_430=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA55=        i_430<ovec_max_417 ,        __freed_obj__ = 0, 
        _for_condtionalA55;        i_430++ ,        __freed_obj__ = 0, 
        0        ){
            start_418[i_430]=ovec_value_420[i_430*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_431=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA56=        i_431<ovec_max_417 ,        __freed_obj__ = 0, 
        _for_condtionalA56;        i_431++ ,        __freed_obj__ = 0, 
        0        ){
            end_419[i_431]=ovec_value_420[i_431*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=regex_result_429==1,        __freed_obj__ = 0, 
        _if_conditional136) {
            str_432=(char*)come_increment_ref_count(((char*)(right_value170=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1917,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1917)),offset_416,start_418[0])))));
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1919,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1919)),str_432));
            __freed_obj__ = 0;
            group_strings_433=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1921,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1921))), "libcomelang2-str.c", 1921))))))));
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_string_434=(char*)come_increment_ref_count(((char*)(right_value173=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1923,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1923)),start_418[0],end_419[0])))));
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1925,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_433, "libcomelang2-str.c", 1925)),(char*)come_increment_ref_count(((char*)(right_value174=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1925,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1925)),start_418[0],end_419[0])))))));
            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            block_result_435=(char*)come_increment_ref_count(((char*)(right_value175=block(parent,match_string_434,group_strings_433))));
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional137=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1933))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional137) {
                __result156__ = __result_obj__ = ((char*)(right_value176=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1930,buffer_to_string(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1930))))));
                if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_434 && !__freed_obj__) { match_string_434 = come_decrement_ref_count(match_string_434, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_435 && !__freed_obj__) { block_result_435 = come_decrement_ref_count(block_result_435, (void*)0, (void*)0, 0, 0, 0); }
                if(result_426 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result156__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1933,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1933)),block_result_435));
            __freed_obj__ = 0;
            if(_if_conditional138=offset_416==end_419[0],            __freed_obj__ = 0, 
            _if_conditional138) {
                offset_416++;
                __freed_obj__ = 0;
            }
            else {
                offset_416=end_419[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional139=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1947))->global,            __freed_obj__ = 0, 
            _if_conditional139) {
                str_436=(char*)come_increment_ref_count(((char*)(right_value177=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1943,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1943)),offset_416,-1)))));
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1944,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1944)),str_436));
                __freed_obj__ = 0;
                if(str_436 && !__freed_obj__) { str_436 = come_decrement_ref_count(str_436, (void*)0, (void*)0, 0, 0, 0); }
                if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_434 && !__freed_obj__) { match_string_434 = come_decrement_ref_count(match_string_434, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_435 && !__freed_obj__) { block_result_435 = come_decrement_ref_count(block_result_435, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_436 && !__freed_obj__) { str_436 = come_decrement_ref_count(str_436, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_434 && !__freed_obj__) { match_string_434 = come_decrement_ref_count(match_string_434, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_435 && !__freed_obj__) { block_result_435 = come_decrement_ref_count(block_result_435, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional140=regex_result_429>1,            __freed_obj__ = 0, 
            _if_conditional140) {
                str_437=(char*)come_increment_ref_count(((char*)(right_value178=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1950,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1950)),offset_416,start_418[0])))));
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1951,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1951)),str_437));
                __freed_obj__ = 0;
                if(_if_conditional141=offset_416==end_419[0],                __freed_obj__ = 0, 
                _if_conditional141) {
                    offset_416++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_416=end_419[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_438=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value180=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1960,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value179=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1960))), "libcomelang2-str.c", 1960))))))));
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_439=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA57=                i_439<regex_result_429 ,                __freed_obj__ = 0, 
                _for_condtionalA57;                i_439++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_440=(char*)come_increment_ref_count(((char*)(right_value181=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1963,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1963)),start_418[i_439],end_419[i_439])))));
                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1964,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_438, "libcomelang2-str.c", 1964)),(char*)come_increment_ref_count(match_string_440)));
                    __freed_obj__ = 0;
                    if(match_string_440 && !__freed_obj__) { match_string_440 = come_decrement_ref_count(match_string_440, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_441=(char*)come_increment_ref_count(((char*)(right_value182=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1967,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1967)),start_418[0],end_419[0])))));
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                block_result_442=(char*)come_increment_ref_count(((char*)(right_value183=block(parent,match_string_441,group_strings_438))));
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional142=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1974))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional142) {
                    __result157__ = __result_obj__ = ((char*)(right_value184=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1972,buffer_to_string(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1972))))));
                    if(str_437 && !__freed_obj__) { str_437 = come_decrement_ref_count(str_437, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_438 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_441 && !__freed_obj__) { match_string_441 = come_decrement_ref_count(match_string_441, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_442 && !__freed_obj__) { block_result_442 = come_decrement_ref_count(block_result_442, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_426 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result157__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1974,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1974)),block_result_442));
                __freed_obj__ = 0;
                if(_if_conditional143=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1981))->global,                __freed_obj__ = 0, 
                _if_conditional143) {
                    str_443=(char*)come_increment_ref_count(((char*)(right_value185=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1977,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1977)),offset_416,-1)))));
                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1978,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1978)),str_443));
                    __freed_obj__ = 0;
                    if(str_443 && !__freed_obj__) { str_443 = come_decrement_ref_count(str_443, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_437 && !__freed_obj__) { str_437 = come_decrement_ref_count(str_437, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_438 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_441 && !__freed_obj__) { match_string_441 = come_decrement_ref_count(match_string_441, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_442 && !__freed_obj__) { block_result_442 = come_decrement_ref_count(block_result_442, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_443 && !__freed_obj__) { str_443 = come_decrement_ref_count(str_443, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_437 && !__freed_obj__) { str_437 = come_decrement_ref_count(str_437, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_438 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_441 && !__freed_obj__) { match_string_441 = come_decrement_ref_count(match_string_441, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_442 && !__freed_obj__) { block_result_442 = come_decrement_ref_count(block_result_442, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_444=(char*)come_increment_ref_count(((char*)(right_value186=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1984,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1984)),offset_416,-1)))));
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 1985,buffer_append_str(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1985)),str_444));
                __freed_obj__ = 0;
                if(str_444 && !__freed_obj__) { str_444 = come_decrement_ref_count(str_444, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_444 && !__freed_obj__) { str_444 = come_decrement_ref_count(str_444, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result158__ = __result_obj__ = ((char*)(right_value187=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 1989,buffer_to_string(((struct buffer*)come_null_check(result_426, "libcomelang2-str.c", 1989))))));
    if(result_426 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result158__;
    __freed_obj__ = 0;
    if(result_426 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int offset_445;
int ovec_max_446;
const char* err_450;
int erro_ofs_451;
int options_452;
char* str_453;
struct real_pcre* re_454;
void* right_value188;
void* right_value189;
struct buffer* result_455;
int n_456;
_Bool _while_condtional24;
int options_457;
int len_458;
int regex_result_459;
int i_460;
_Bool _for_condtionalA58;
int i_461;
_Bool _for_condtionalA59;
_Bool _if_conditional144;
void* right_value190;
char* str_462;
void* right_value191;
void* right_value192;
struct list$1charph* group_strings_463;
void* right_value193;
void* right_value194;
char* match_string_464;
void* right_value195;
char* block_result_465;
_Bool _if_conditional145;
void* right_value196;
char* __result159__;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value197;
char* str_466;
_Bool _if_conditional148;
void* right_value198;
char* str_467;
_Bool _if_conditional149;
void* right_value199;
char* str_468;
_Bool _if_conditional150;
void* right_value200;
void* right_value201;
struct list$1charph* group_strings_469;
int i_470;
_Bool _for_condtionalA60;
void* right_value202;
char* match_string_471;
void* right_value203;
char* match_string_472;
void* right_value204;
char* block_result_473;
_Bool _if_conditional151;
void* right_value205;
char* __result160__;
_Bool _if_conditional152;
void* right_value206;
char* str_474;
_Bool _if_conditional153;
void* right_value207;
char* str_475;
void* right_value208;
char* str_476;
void* right_value209;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_445, 0, sizeof(int));
memset(&ovec_max_446, 0, sizeof(int));
memset(&erro_ofs_451, 0, sizeof(int));
memset(&options_452, 0, sizeof(int));
memset(&str_453, 0, sizeof(char*));
memset(&re_454, 0, sizeof(struct real_pcre*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&result_455, 0, sizeof(struct buffer*));
memset(&n_456, 0, sizeof(int));
memset(&options_457, 0, sizeof(int));
memset(&len_458, 0, sizeof(int));
memset(&regex_result_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
memset(&i_461, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&str_462, 0, sizeof(char*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&group_strings_463, 0, sizeof(struct list$1charph*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&match_string_464, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&block_result_465, 0, sizeof(char*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&str_466, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&str_467, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
memset(&str_468, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&group_strings_469, 0, sizeof(struct list$1charph*));
memset(&i_470, 0, sizeof(int));
memset(&right_value202, 0, sizeof(void*));
memset(&match_string_471, 0, sizeof(char*));
memset(&right_value203, 0, sizeof(void*));
memset(&match_string_472, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&block_result_473, 0, sizeof(char*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&str_474, 0, sizeof(char*));
memset(&right_value207, 0, sizeof(void*));
memset(&str_475, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&str_476, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    offset_445=0;
    __freed_obj__ = 0;
    ovec_max_446=16;
    __freed_obj__ = 0;
    int start_447[ovec_max_446];
    memset(&start_447, 0, sizeof(int)    *(ovec_max_446)    );
    __freed_obj__ = 0;
    int end_448[ovec_max_446];
    memset(&end_448, 0, sizeof(int)    *(ovec_max_446)    );
    __freed_obj__ = 0;
    int ovec_value_449[ovec_max_446*3];
    memset(&ovec_value_449, 0, sizeof(int)    *(ovec_max_446*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_452=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2004))->options;
    __freed_obj__ = 0;
    str_453=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2005))->str;
    __freed_obj__ = 0;
    re_454=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2007))->re;
    __freed_obj__ = 0;
    result_455=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2009,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value188=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2009))), "libcomelang2-str.c", 2009))))))));
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_456=0;
    __freed_obj__ = 0;
    while(_while_condtional24=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional24) {
        options_457=2097152;
        __freed_obj__ = 0;
        len_458=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2015,strlen(self));
        __freed_obj__ = 0;
        regex_result_459=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2016,pcre_exec(re_454,(struct pcre_extra*)0,self,len_458,offset_445,options_457,ovec_value_449,ovec_max_446*3));
        __freed_obj__ = 0;
        for(
        i_460=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA58=        i_460<ovec_max_446 ,        __freed_obj__ = 0, 
        _for_condtionalA58;        i_460++ ,        __freed_obj__ = 0, 
        0        ){
            start_447[i_460]=ovec_value_449[i_460*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_461=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA59=        i_461<ovec_max_446 ,        __freed_obj__ = 0, 
        _for_condtionalA59;        i_461++ ,        __freed_obj__ = 0, 
        0        ){
            end_448[i_461]=ovec_value_449[i_461*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional144=regex_result_459==1,        __freed_obj__ = 0, 
        _if_conditional144) {
            n_456++;
            __freed_obj__ = 0;
            str_462=(char*)come_increment_ref_count(((char*)(right_value190=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2028,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2028)),offset_445,start_447[0])))));
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2030,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2030)),str_462));
            __freed_obj__ = 0;
            group_strings_463=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2032,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value191=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2032))), "libcomelang2-str.c", 2032))))))));
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2034,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_463, "libcomelang2-str.c", 2034)),(char*)come_increment_ref_count(((char*)(right_value193=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2034,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2034)),start_447[0],end_448[0])))))));
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_string_464=(char*)come_increment_ref_count(((char*)(right_value194=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2036,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2036)),start_447[0],end_448[0])))));
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            block_result_465=(char*)come_increment_ref_count(((char*)(right_value195=block(parent,match_string_464,group_strings_463))));
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional145=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2044))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional145) {
                __result159__ = __result_obj__ = ((char*)(right_value196=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2041,buffer_to_string(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2041))))));
                if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_463 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_464 && !__freed_obj__) { match_string_464 = come_decrement_ref_count(match_string_464, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_465 && !__freed_obj__) { block_result_465 = come_decrement_ref_count(block_result_465, (void*)0, (void*)0, 0, 0, 0); }
                if(result_455 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result159__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2044,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2044)),block_result_465));
            __freed_obj__ = 0;
            if(_if_conditional146=offset_445==end_448[0],            __freed_obj__ = 0, 
            _if_conditional146) {
                offset_445++;
                __freed_obj__ = 0;
            }
            else {
                offset_445=end_448[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional147=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2059))->global,            __freed_obj__ = 0, 
            _if_conditional147) {
                str_466=(char*)come_increment_ref_count(((char*)(right_value197=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2054,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2054)),offset_445,-1)))));
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2055,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2055)),str_466));
                __freed_obj__ = 0;
                if(str_466 && !__freed_obj__) { str_466 = come_decrement_ref_count(str_466, (void*)0, (void*)0, 0, 0, 0); }
                if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_463 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_464 && !__freed_obj__) { match_string_464 = come_decrement_ref_count(match_string_464, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_465 && !__freed_obj__) { block_result_465 = come_decrement_ref_count(block_result_465, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_466 && !__freed_obj__) { str_466 = come_decrement_ref_count(str_466, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional148=n_456==count,            __freed_obj__ = 0, 
            _if_conditional148) {
                str_467=(char*)come_increment_ref_count(((char*)(right_value198=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2060,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2060)),offset_445,-1)))));
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2061,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2061)),str_467));
                __freed_obj__ = 0;
                if(str_467 && !__freed_obj__) { str_467 = come_decrement_ref_count(str_467, (void*)0, (void*)0, 0, 0, 0); }
                if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_463 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_464 && !__freed_obj__) { match_string_464 = come_decrement_ref_count(match_string_464, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_465 && !__freed_obj__) { block_result_465 = come_decrement_ref_count(block_result_465, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_467 && !__freed_obj__) { str_467 = come_decrement_ref_count(str_467, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_463 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_464 && !__freed_obj__) { match_string_464 = come_decrement_ref_count(match_string_464, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_465 && !__freed_obj__) { block_result_465 = come_decrement_ref_count(block_result_465, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional149=regex_result_459>1,            __freed_obj__ = 0, 
            _if_conditional149) {
                n_456++;
                __freed_obj__ = 0;
                str_468=(char*)come_increment_ref_count(((char*)(right_value199=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2069,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2069)),offset_445,start_447[0])))));
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2070,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2070)),str_468));
                __freed_obj__ = 0;
                if(_if_conditional150=offset_445==end_448[0],                __freed_obj__ = 0, 
                _if_conditional150) {
                    offset_445++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_445=end_448[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_469=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2079,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2079))), "libcomelang2-str.c", 2079))))))));
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_470=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA60=                i_470<regex_result_459 ,                __freed_obj__ = 0, 
                _for_condtionalA60;                i_470++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_471=(char*)come_increment_ref_count(((char*)(right_value202=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2082,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2082)),start_447[i_470],end_448[i_470])))));
                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2083,list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_469, "libcomelang2-str.c", 2083)),(char*)come_increment_ref_count(match_string_471)));
                    __freed_obj__ = 0;
                    if(match_string_471 && !__freed_obj__) { match_string_471 = come_decrement_ref_count(match_string_471, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_472=(char*)come_increment_ref_count(((char*)(right_value203=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2086,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2086)),start_447[0],end_448[0])))));
                if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                block_result_473=(char*)come_increment_ref_count(((char*)(right_value204=block(parent,match_string_472,group_strings_469))));
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional151=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2093))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional151) {
                    __result160__ = __result_obj__ = ((char*)(right_value205=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2091,buffer_to_string(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2091))))));
                    if(str_468 && !__freed_obj__) { str_468 = come_decrement_ref_count(str_468, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_469 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_472 && !__freed_obj__) { match_string_472 = come_decrement_ref_count(match_string_472, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_473 && !__freed_obj__) { block_result_473 = come_decrement_ref_count(block_result_473, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_455 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result160__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2093,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2093)),block_result_473));
                __freed_obj__ = 0;
                if(_if_conditional152=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2101))->global,                __freed_obj__ = 0, 
                _if_conditional152) {
                    str_474=(char*)come_increment_ref_count(((char*)(right_value206=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2096,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2096)),offset_445,-1)))));
                    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2097,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2097)),str_474));
                    __freed_obj__ = 0;
                    if(str_474 && !__freed_obj__) { str_474 = come_decrement_ref_count(str_474, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_468 && !__freed_obj__) { str_468 = come_decrement_ref_count(str_468, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_469 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_472 && !__freed_obj__) { match_string_472 = come_decrement_ref_count(match_string_472, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_473 && !__freed_obj__) { block_result_473 = come_decrement_ref_count(block_result_473, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_474 && !__freed_obj__) { str_474 = come_decrement_ref_count(str_474, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional153=n_456==count,                __freed_obj__ = 0, 
                _if_conditional153) {
                    str_475=(char*)come_increment_ref_count(((char*)(right_value207=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2102,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2102)),offset_445,-1)))));
                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2103,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2103)),str_475));
                    __freed_obj__ = 0;
                    if(str_475 && !__freed_obj__) { str_475 = come_decrement_ref_count(str_475, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_468 && !__freed_obj__) { str_468 = come_decrement_ref_count(str_468, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_469 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_472 && !__freed_obj__) { match_string_472 = come_decrement_ref_count(match_string_472, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_473 && !__freed_obj__) { block_result_473 = come_decrement_ref_count(block_result_473, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_475 && !__freed_obj__) { str_475 = come_decrement_ref_count(str_475, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_468 && !__freed_obj__) { str_468 = come_decrement_ref_count(str_468, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_469 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_472 && !__freed_obj__) { match_string_472 = come_decrement_ref_count(match_string_472, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_473 && !__freed_obj__) { block_result_473 = come_decrement_ref_count(block_result_473, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_476=(char*)come_increment_ref_count(((char*)(right_value208=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2109,charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2109)),offset_445,-1)))));
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2110,buffer_append_str(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2110)),str_476));
                __freed_obj__ = 0;
                if(str_476 && !__freed_obj__) { str_476 = come_decrement_ref_count(str_476, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_476 && !__freed_obj__) { str_476 = come_decrement_ref_count(str_476, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result161__ = __result_obj__ = ((char*)(right_value209=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2115,buffer_to_string(((struct buffer*)come_null_check(result_455, "libcomelang2-str.c", 2115))))));
    if(result_455 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result161__;
    __freed_obj__ = 0;
    if(result_455 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int result_477;
unsigned int* p_478;
_Bool _while_condtional25;
unsigned int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_477, 0, sizeof(int));
memset(&p_478, 0, sizeof(unsigned int*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __freed_obj__ = 0;
    result_477=0;
    __freed_obj__ = 0;
    p_478=value;
    __freed_obj__ = 0;
    while(_while_condtional25=*p_478,    __freed_obj__ = 0, 
    _while_condtional25) {
        result_477+=(*p_478);
        __freed_obj__ = 0;
        p_478++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result162__ = result_477;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result162__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result164__ = (gCallerSName = "libcomelang2-str.c", gCallerSLine = 2139,wcscmp(left,right))==0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result164__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result166__ = left==right;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result166__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result167__ = left!=right;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result167__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result168__ = value;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result168__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result169__ = left==right;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result169__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* wchar_t_to_string(unsigned int wc){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value210;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result170__ = __result_obj__ = ((char*)(right_value210=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2169,xsprintf("%ls",wc))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result170__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* string_chomp(char* str){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value211;
char* result_479;
_Bool _if_conditional154;
void* right_value212;
char* __result171__;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value211, 0, sizeof(void*));
memset(&result_479, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_479=(char*)come_increment_ref_count(((char*)(right_value211=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2174,__builtin_string(str)))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional154=result_479[(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2180,string_length(((char*)come_null_check(result_479, "libcomelang2-str.c", 2180))))-1]==10,    __freed_obj__ = 0, 
    _if_conditional154) {
        __result171__ = __result_obj__ = ((char*)(right_value212=(gCallerSName = "libcomelang2-str.c", gCallerSLine = 2177,string_substring(((char*)come_null_check(result_479, "libcomelang2-str.c", 2177)),0,-2))));
        if(result_479 && !__freed_obj__) { result_479 = come_decrement_ref_count(result_479, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = result_479;
    if(result_479 && !__freed_obj__) { result_479 = come_decrement_ref_count(result_479, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result172__;
    __freed_obj__ = 0;
    if(result_479 && !__freed_obj__) { result_479 = come_decrement_ref_count(result_479, (void*)0, (void*)0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

