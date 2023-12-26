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
extern int sys_nerr;
extern const char** sys_errlist;
extern int _sys_nerr;
extern const char** _sys_errlist;
struct obstack;
typedef unsigned int wchar_t;
enum anonymous_typeY5 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY5 idtype_t;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct anonymous_typeX6
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX6 div_t;
struct anonymous_typeX7
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX7 ldiv_t;
struct anonymous_typeX8
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX8 lldiv_t;
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
struct anonymous_typeX9
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX9 __sigset_t;
typedef struct anonymous_typeX9 sigset_t;
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
struct anonymous_typeX10
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX10 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
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
struct anonymous_typeX12
{
};
struct anonymous_typeX14
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ13
{
unsigned long long int __wseq;
struct anonymous_typeX14 __wseq32;
};
struct anonymous_typeX16
{
};
struct anonymous_typeX18
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ17
{
unsigned long long int __g1_start;
struct anonymous_typeX18 __g1_start32;
};
struct __pthread_cond_s
{
    union anonymous_typeZ13 anonymous_var_nameY2;
    union anonymous_typeZ17 anonymous_var_nameY4;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
union anonymous_typeZ19
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ19 pthread_mutexattr_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ21
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ21 pthread_mutex_t;
union anonymous_typeZ22
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ22 pthread_cond_t;
union anonymous_typeZ23
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ23 pthread_rwlock_t;
union anonymous_typeZ24
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ24 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ25
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ25 pthread_barrier_t;
union anonymous_typeZ26
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ26 pthread_barrierattr_t;
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

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char* __s);

char* tmpnam_r(char* __s);

char* tempnam(const char* __dir, const char* __pfx);

int fclose(struct _IO_FILE* __stream);

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

struct _IO_FILE* popen(const char* __command, const char* __modes);

int pclose(struct _IO_FILE* __stream);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX1);

int __overflow(struct _IO_FILE* anonymous_var_nameX2, int anonymous_var_nameX3);

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

int select(int __nfds, struct anonymous_typeX10* __readfds, struct anonymous_typeX10* __writefds, struct anonymous_typeX10* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX10* __readfds, struct anonymous_typeX10* __writefds, struct anonymous_typeX10* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX9* __sigmask);

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

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void free(void* __ptr);

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

struct anonymous_typeX6 div(int __numer, int __denom);

struct anonymous_typeX7 ldiv(long int __numer, long int __denom);

struct anonymous_typeX8 lldiv(long long int __numer, long long int __denom);

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

struct real_pcre* pcre_compile(const char* anonymous_var_nameX121, int anonymous_var_nameX122, const char** anonymous_var_nameX123, int* anonymous_var_nameX124, const unsigned char* anonymous_var_nameX125);

struct real_pcre16* pcre16_compile(const unsigned short int* anonymous_var_nameX126, int anonymous_var_nameX127, const char** anonymous_var_nameX128, int* anonymous_var_nameX129, const unsigned char* anonymous_var_nameX130);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX131, int anonymous_var_nameX132, const char** anonymous_var_nameX133, int* anonymous_var_nameX134, const unsigned char* anonymous_var_nameX135);

struct real_pcre* pcre_compile2(const char* anonymous_var_nameX136, int anonymous_var_nameX137, int* anonymous_var_nameX138, const char** anonymous_var_nameX139, int* anonymous_var_nameX140, const unsigned char* anonymous_var_nameX141);

struct real_pcre16* pcre16_compile2(const unsigned short int* anonymous_var_nameX142, int anonymous_var_nameX143, int* anonymous_var_nameX144, const char** anonymous_var_nameX145, int* anonymous_var_nameX146, const unsigned char* anonymous_var_nameX147);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX148, int anonymous_var_nameX149, int* anonymous_var_nameX150, const char** anonymous_var_nameX151, int* anonymous_var_nameX152, const unsigned char* anonymous_var_nameX153);

int pcre_config(int anonymous_var_nameX154, void* anonymous_var_nameX155);

int pcre16_config(int anonymous_var_nameX156, void* anonymous_var_nameX157);

int pcre32_config(int anonymous_var_nameX158, void* anonymous_var_nameX159);

int pcre_copy_named_substring(const struct real_pcre* anonymous_var_nameX160, const char* anonymous_var_nameX161, int* anonymous_var_nameX162, int anonymous_var_nameX163, const char* anonymous_var_nameX164, char* anonymous_var_nameX165, int anonymous_var_nameX166);

int pcre16_copy_named_substring(const struct real_pcre16* anonymous_var_nameX167, const unsigned short int* anonymous_var_nameX168, int* anonymous_var_nameX169, int anonymous_var_nameX170, const unsigned short int* anonymous_var_nameX171, unsigned short int* anonymous_var_nameX172, int anonymous_var_nameX173);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX174, const unsigned int* anonymous_var_nameX175, int* anonymous_var_nameX176, int anonymous_var_nameX177, const unsigned int* anonymous_var_nameX178, unsigned int* anonymous_var_nameX179, int anonymous_var_nameX180);

int pcre_copy_substring(const char* anonymous_var_nameX181, int* anonymous_var_nameX182, int anonymous_var_nameX183, int anonymous_var_nameX184, char* anonymous_var_nameX185, int anonymous_var_nameX186);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX187, int* anonymous_var_nameX188, int anonymous_var_nameX189, int anonymous_var_nameX190, unsigned short int* anonymous_var_nameX191, int anonymous_var_nameX192);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX193, int* anonymous_var_nameX194, int anonymous_var_nameX195, int anonymous_var_nameX196, unsigned int* anonymous_var_nameX197, int anonymous_var_nameX198);

int pcre_dfa_exec(const struct real_pcre* anonymous_var_nameX199, const struct pcre_extra* anonymous_var_nameX200, const char* anonymous_var_nameX201, int anonymous_var_nameX202, int anonymous_var_nameX203, int anonymous_var_nameX204, int* anonymous_var_nameX205, int anonymous_var_nameX206, int* anonymous_var_nameX207, int anonymous_var_nameX208);

int pcre16_dfa_exec(const struct real_pcre16* anonymous_var_nameX209, const struct pcre16_extra* anonymous_var_nameX210, const unsigned short int* anonymous_var_nameX211, int anonymous_var_nameX212, int anonymous_var_nameX213, int anonymous_var_nameX214, int* anonymous_var_nameX215, int anonymous_var_nameX216, int* anonymous_var_nameX217, int anonymous_var_nameX218);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX219, const struct pcre32_extra* anonymous_var_nameX220, const unsigned int* anonymous_var_nameX221, int anonymous_var_nameX222, int anonymous_var_nameX223, int anonymous_var_nameX224, int* anonymous_var_nameX225, int anonymous_var_nameX226, int* anonymous_var_nameX227, int anonymous_var_nameX228);

int pcre_exec(const struct real_pcre* anonymous_var_nameX229, const struct pcre_extra* anonymous_var_nameX230, const char* anonymous_var_nameX231, int anonymous_var_nameX232, int anonymous_var_nameX233, int anonymous_var_nameX234, int* anonymous_var_nameX235, int anonymous_var_nameX236);

int pcre16_exec(const struct real_pcre16* anonymous_var_nameX237, const struct pcre16_extra* anonymous_var_nameX238, const unsigned short int* anonymous_var_nameX239, int anonymous_var_nameX240, int anonymous_var_nameX241, int anonymous_var_nameX242, int* anonymous_var_nameX243, int anonymous_var_nameX244);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX245, const struct pcre32_extra* anonymous_var_nameX246, const unsigned int* anonymous_var_nameX247, int anonymous_var_nameX248, int anonymous_var_nameX249, int anonymous_var_nameX250, int* anonymous_var_nameX251, int anonymous_var_nameX252);

int pcre_jit_exec(const struct real_pcre* anonymous_var_nameX253, const struct pcre_extra* anonymous_var_nameX254, const char* anonymous_var_nameX255, int anonymous_var_nameX256, int anonymous_var_nameX257, int anonymous_var_nameX258, int* anonymous_var_nameX259, int anonymous_var_nameX260, struct real_pcre_jit_stack* anonymous_var_nameX261);

int pcre16_jit_exec(const struct real_pcre16* anonymous_var_nameX262, const struct pcre16_extra* anonymous_var_nameX263, const unsigned short int* anonymous_var_nameX264, int anonymous_var_nameX265, int anonymous_var_nameX266, int anonymous_var_nameX267, int* anonymous_var_nameX268, int anonymous_var_nameX269, struct real_pcre16_jit_stack* anonymous_var_nameX270);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX271, const struct pcre32_extra* anonymous_var_nameX272, const unsigned int* anonymous_var_nameX273, int anonymous_var_nameX274, int anonymous_var_nameX275, int anonymous_var_nameX276, int* anonymous_var_nameX277, int anonymous_var_nameX278, struct real_pcre32_jit_stack* anonymous_var_nameX279);

void pcre_free_substring(const char* anonymous_var_nameX280);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX281);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX282);

void pcre_free_substring_list(const char** anonymous_var_nameX283);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX284);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX285);

int pcre_fullinfo(const struct real_pcre* anonymous_var_nameX286, const struct pcre_extra* anonymous_var_nameX287, int anonymous_var_nameX288, void* anonymous_var_nameX289);

int pcre16_fullinfo(const struct real_pcre16* anonymous_var_nameX290, const struct pcre16_extra* anonymous_var_nameX291, int anonymous_var_nameX292, void* anonymous_var_nameX293);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX294, const struct pcre32_extra* anonymous_var_nameX295, int anonymous_var_nameX296, void* anonymous_var_nameX297);

int pcre_get_named_substring(const struct real_pcre* anonymous_var_nameX298, const char* anonymous_var_nameX299, int* anonymous_var_nameX300, int anonymous_var_nameX301, const char* anonymous_var_nameX302, const char** anonymous_var_nameX303);

int pcre16_get_named_substring(const struct real_pcre16* anonymous_var_nameX304, const unsigned short int* anonymous_var_nameX305, int* anonymous_var_nameX306, int anonymous_var_nameX307, const unsigned short int* anonymous_var_nameX308, const unsigned short int** anonymous_var_nameX309);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX310, const unsigned int* anonymous_var_nameX311, int* anonymous_var_nameX312, int anonymous_var_nameX313, const unsigned int* anonymous_var_nameX314, const unsigned int** anonymous_var_nameX315);

int pcre_get_stringnumber(const struct real_pcre* anonymous_var_nameX316, const char* anonymous_var_nameX317);

int pcre16_get_stringnumber(const struct real_pcre16* anonymous_var_nameX318, const unsigned short int* anonymous_var_nameX319);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX320, const unsigned int* anonymous_var_nameX321);

int pcre_get_stringtable_entries(const struct real_pcre* anonymous_var_nameX322, const char* anonymous_var_nameX323, char** anonymous_var_nameX324, char** anonymous_var_nameX325);

int pcre16_get_stringtable_entries(const struct real_pcre16* anonymous_var_nameX326, const unsigned short int* anonymous_var_nameX327, unsigned short int** anonymous_var_nameX328, unsigned short int** anonymous_var_nameX329);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX330, const unsigned int* anonymous_var_nameX331, unsigned int** anonymous_var_nameX332, unsigned int** anonymous_var_nameX333);

int pcre_get_substring(const char* anonymous_var_nameX334, int* anonymous_var_nameX335, int anonymous_var_nameX336, int anonymous_var_nameX337, const char** anonymous_var_nameX338);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX339, int* anonymous_var_nameX340, int anonymous_var_nameX341, int anonymous_var_nameX342, const unsigned short int** anonymous_var_nameX343);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX344, int* anonymous_var_nameX345, int anonymous_var_nameX346, int anonymous_var_nameX347, const unsigned int** anonymous_var_nameX348);

int pcre_get_substring_list(const char* anonymous_var_nameX349, int* anonymous_var_nameX350, int anonymous_var_nameX351, const char*** anonymous_var_nameX352);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX353, int* anonymous_var_nameX354, int anonymous_var_nameX355, const unsigned short int*** anonymous_var_nameX356);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX357, int* anonymous_var_nameX358, int anonymous_var_nameX359, const unsigned int*** anonymous_var_nameX360);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre* anonymous_var_nameX361, int anonymous_var_nameX362);

int pcre16_refcount(struct real_pcre16* anonymous_var_nameX363, int anonymous_var_nameX364);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX365, int anonymous_var_nameX366);

struct pcre_extra* pcre_study(const struct real_pcre* anonymous_var_nameX367, int anonymous_var_nameX368, const char** anonymous_var_nameX369);

struct pcre16_extra* pcre16_study(const struct real_pcre16* anonymous_var_nameX370, int anonymous_var_nameX371, const char** anonymous_var_nameX372);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX373, int anonymous_var_nameX374, const char** anonymous_var_nameX375);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX376);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX377);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX378);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre* anonymous_var_nameX379, struct pcre_extra* anonymous_var_nameX380, const unsigned char* anonymous_var_nameX381);

int pcre16_pattern_to_host_byte_order(struct real_pcre16* anonymous_var_nameX382, struct pcre16_extra* anonymous_var_nameX383, const unsigned char* anonymous_var_nameX384);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX385, struct pcre32_extra* anonymous_var_nameX386, const unsigned char* anonymous_var_nameX387);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX388, const unsigned short int* anonymous_var_nameX389, int anonymous_var_nameX390, int* anonymous_var_nameX391, int anonymous_var_nameX392);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX393, const unsigned int* anonymous_var_nameX394, int anonymous_var_nameX395, int* anonymous_var_nameX396, int anonymous_var_nameX397);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX398, int anonymous_var_nameX399);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX400, int anonymous_var_nameX401);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX402, int anonymous_var_nameX403);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX404);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX405);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX406);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX407, struct real_pcre_jit_stack* (*anonymous_var_nameX408)(void*), void* anonymous_var_nameX409);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX410, struct real_pcre16_jit_stack* (*anonymous_var_nameX411)(void*), void* anonymous_var_nameX412);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX413, struct real_pcre32_jit_stack* (*anonymous_var_nameX414)(void*), void* anonymous_var_nameX415);

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
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    __freed_obj__ = 0;
    return __result1__;
    __freed_obj__ = 0;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    __freed_obj__ = 0;
    return __result4__;
    __freed_obj__ = 0;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    __freed_obj__ = 0;
    return __result5__;
    __freed_obj__ = 0;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    __freed_obj__ = 0;
    return __result6__;
    __freed_obj__ = 0;
}
static inline void die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
unsigned int* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    __result7__ = __result_obj__ = ((unsigned int*)(right_value0=wchar_tp_substring(str,head,tail)));
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = charp_index_count(str,search_str,count,default_value);
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result9__ = charp_index_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = charp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result11__ = charp_rindex_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = charp_rindex_count(str,search_str,default_value,-1);
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value1;
struct list$1charph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((struct list$1charph*)(right_value1=charp_scan_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
    __result14__ = __result_obj__ = ((struct list$1charph*)(right_value2=charp_scan_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((struct list$1charph*)(right_value3=charp_split_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
    __result16__ = __result_obj__ = ((struct list$1charph*)(right_value4=charp_split_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value5;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((struct list$1charph*)(right_value5=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}
static inline char* string_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
    __result18__ = __result_obj__ = ((char*)(right_value6=charp_strip(self)));
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}
static inline char* string_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value7;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((char*)(right_value7=string_printable(str)));
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
unsigned int* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
    __result20__ = __result_obj__ = ((unsigned int*)(right_value8=charp_to_wstring(str)));
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value9;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((char*)(right_value9=wchar_tp_to_string(wstr)));
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = wchar_tp_length(str);
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
unsigned int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((unsigned int*)(right_value10=wchar_tp_delete(str,head,tail)));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result24__ = wchar_tp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result25__ = wchar_tp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
unsigned int* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result26__ = __result_obj__ = ((unsigned int*)(right_value11=wchar_tp_reverse(str)));
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
unsigned int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((unsigned int*)(right_value12=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
unsigned int* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result28__ = __result_obj__ = ((unsigned int*)(right_value13=wchar_tp_printable(str)));
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = wchar_tp_get_hash_key(value);
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = charp_match_group_strings(self,reg,count,group_strings);
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = charp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = charp_index_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value14;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value14=charp_replace(self,index,c)));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result34__ = __result_obj__ = ((char*)(right_value15=charp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value16;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((char*)(right_value16=charp_sub(self,reg,replace)));
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    __result36__ = __result_obj__ = ((char*)(right_value17=charp_sub_count(self,reg,replace,count)));
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
struct list$1charph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    __result37__ = __result_obj__ = ((struct list$1charph*)(right_value18=charp_split_str(self,str)));
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
    __result38__ = __result_obj__ = ((struct list$1charph*)(right_value19=charp_scan(self,reg)));
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value20;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((struct list$1charph*)(right_value20=charp_split(self,reg)));
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result40__ = charp_match(self,reg);
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value21;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((struct list$1charph*)(right_value21=charp_split_maxsplit(self,reg,maxsplit)));
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result42__ = charp_rindex_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result43__ = charp_match_count(self,reg,count);
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(right_value22=charp_sub_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result45__ = __result_obj__ = ((char*)(right_value23=charp_sub_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
    __result47__ = __result_obj__ = ((char*)(right_value25=string_chomp(str)));
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}

// body function















































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_0;
int erro_ofs_1;
int options_2;
void* right_value26;
char* __dec_obj1;
_Bool _if_conditional1;
struct come_regex* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_1, 0, sizeof(int));
memset(&options_2, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_2=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __freed_obj__ = 0;
    __dec_obj1=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str=(char*)come_increment_ref_count(((char*)(right_value26=__builtin_string(str))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value26;
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
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 34))->options=options_2;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 36))->re=pcre_compile(str,options_2,&err_0,&erro_ofs_1,((void*)0));
    __freed_obj__ = 0;
    if(_if_conditional1=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 49))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional1) {
        printf("regex error (%s)\n",str);
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result48__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional2=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 57))->str,    __freed_obj__ = 0, 
    _if_conditional2) {
        if(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str && !__freed_obj__) { ((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str = come_decrement_ref_count(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional3=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 60))->re,    __freed_obj__ = 0, 
    _if_conditional3) {
        free(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 58))->re);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value27;
void* right_value28;
struct come_regex* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
    __result49__ = __result_obj__ = ((struct come_regex*)(right_value28=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value27=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 64)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value27;
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value29;
void* right_value30;
struct come_regex* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
    __result50__ = __result_obj__ = ((struct come_regex*)(right_value30=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value29=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 69)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value29;
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
struct come_regex* __result51__;
void* right_value31;
struct come_regex* result_3;
void* right_value32;
char* __dec_obj2;
const char* err_4;
int erro_ofs_5;
_Bool _if_conditional5;
struct come_regex* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct come_regex*));
memset(&right_value32, 0, sizeof(void*));
memset(&erro_ofs_5, 0, sizeof(int));
    if(_if_conditional4=reg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional4) {
        __result51__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_3=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value31=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 79))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value31;
    __freed_obj__ = 0;
    __dec_obj2=((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 81))->str;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 81))->str=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 81))->str))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 83))->ignore_case=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 83))->ignore_case;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 84))->multiline=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 84))->multiline;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 85))->global=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 85))->global;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 86))->extended=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 86))->extended;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 87))->dotall=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 87))->dotall;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 88))->anchored=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 88))->anchored;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 89))->dollar_endonly=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 89))->dollar_endonly;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 90))->ungreedy=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 90))->ungreedy;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 92))->options=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 92))->options;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 97))->re=pcre_compile(((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 97))->str,((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 97))->options,&err_4,&erro_ofs_5,((void*)0));
    __freed_obj__ = 0;
    if(_if_conditional5=((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 104))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional5) {
        printf("regex compile error(%s)\n",((struct come_regex*)come_null_check(result_3, "libcomelang2-str.c", 100))->str);
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value33;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
    __result53__ = __result_obj__ = ((char*)(right_value33=__builtin_string(((struct come_regex*)come_null_check(regex, "libcomelang2-str.c", 109))->str)));
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
}

char* string_lower_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* result_6;
int i_7;
_Bool _for_condtionalA1;
_Bool _if_conditional6;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_6, 0, sizeof(char*));
memset(&i_7, 0, sizeof(int));
    result_6=(char*)come_increment_ref_count(((char*)(right_value34=__builtin_string(str))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    for(
    i_7=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    i_7<strlen(str) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    i_7++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional6=str[i_7]>=65&&str[i_7]<=90,        __freed_obj__ = 0, 
        _if_conditional6) {
            result_6[i_7]=str[i_7]-65+97;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = result_6;
    if(result_6 && !__freed_obj__) { result_6 = come_decrement_ref_count(result_6, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(result_6 && !__freed_obj__) { result_6 = come_decrement_ref_count(result_6, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_upper_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
char* result_8;
int i_9;
_Bool _for_condtionalA2;
_Bool _if_conditional7;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&result_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
    result_8=(char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(str))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    for(
    i_9=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    i_9<strlen(str) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    i_9++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional7=str[i_9]>=97&&str[i_9]<=122,        __freed_obj__ = 0, 
        _if_conditional7) {
            result_8[i_9]=str[i_9]-97+65;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result55__ = __result_obj__ = result_8;
    if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
    if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
void* right_value36;
unsigned int* __result56__;
int len_10;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* right_value37;
unsigned int* __result57__;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
void* right_value38;
unsigned int* __result58__;
_Bool _if_conditional15;
void* right_value39;
unsigned int* __result59__;
void* right_value40;
unsigned int* result_11;
unsigned int* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&len_10, 0, sizeof(int));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&result_11, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    if(_if_conditional8=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        __result56__ = __result_obj__ = ((unsigned int*)(right_value36=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_10=wcslen(str);
    __freed_obj__ = 0;
    if(_if_conditional9=head<0,    __freed_obj__ = 0, 
    _if_conditional9) {
        head+=len_10;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional10=tail<0,    __freed_obj__ = 0, 
    _if_conditional10) {
        tail+=len_10+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional11=head>tail,    __freed_obj__ = 0, 
    _if_conditional11) {
        __result57__ = __result_obj__ = ((unsigned int*)(right_value37=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional12=head<0,    __freed_obj__ = 0, 
    _if_conditional12) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional13=tail>=len_10,    __freed_obj__ = 0, 
    _if_conditional13) {
        tail=len_10;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional14=head==tail,    __freed_obj__ = 0, 
    _if_conditional14) {
        __result58__ = __result_obj__ = ((unsigned int*)(right_value38=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional15=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional15) {
        __result59__ = __result_obj__ = ((unsigned int*)(right_value39=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_11=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value40=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str.c", 173))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value40;
    __freed_obj__ = 0;
    memcpy(result_11,str+head,sizeof(unsigned int)*(tail-head));
    __freed_obj__ = 0;
    result_11[tail-head]=0;
    __freed_obj__ = 0;
    __result60__ = __result_obj__ = result_11;
    if(result_11 && !__freed_obj__) { result_11 = come_decrement_ref_count(result_11, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
    if(result_11 && !__freed_obj__) { result_11 = come_decrement_ref_count(result_11, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
unsigned int* __result61__;
int len_12;
void* right_value41;
unsigned int* wstr_13;
int ret_14;
_Bool _if_conditional17;
unsigned int* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_12, 0, sizeof(int));
memset(&right_value41, 0, sizeof(void*));
memset(&wstr_13, 0, sizeof(unsigned int*));
memset(&ret_14, 0, sizeof(int));
    if(_if_conditional16=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional16) {
        __result61__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_12=strlen(str);
    __freed_obj__ = 0;
    wstr_13=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value41=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_12+1)), "libcomelang2-str.c", 188))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = 0;
    ret_14=mbstowcs(wstr_13,str,len_12+1);
    __freed_obj__ = 0;
    wstr_13[ret_14]=0;
    __freed_obj__ = 0;
    if(_if_conditional17=ret_14<0,    __freed_obj__ = 0, 
    _if_conditional17) {
        wstr_13[0]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = wstr_13;
    if(wstr_13 && !__freed_obj__) { wstr_13 = come_decrement_ref_count(wstr_13, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
    if(wstr_13 && !__freed_obj__) { wstr_13 = come_decrement_ref_count(wstr_13, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int n_15;
int len_16;
int i_17;
_Bool _for_condtionalA3;
int len2_18;
int j_19;
_Bool _for_condtionalA4;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&n_15, 0, sizeof(int));
memset(&len_16, 0, sizeof(int));
memset(&i_17, 0, sizeof(int));
memset(&len2_18, 0, sizeof(int));
memset(&j_19, 0, sizeof(int));
    n_15=0;
    __freed_obj__ = 0;
    len_16=strlen(str);
    __freed_obj__ = 0;
    for(
    i_17=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    i_17<len_16 ,    __freed_obj__ = 0, 
    _for_condtionalA3;    i_17++ ,    __freed_obj__ = 0, 
    0    ){
        len2_18=strlen(search_str);
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        j_19=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        j_19<len2_18 ,        __freed_obj__ = 0, 
        _for_condtionalA4;        j_19++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional18=str[i_17+j_19]!=search_str[j_19],            __freed_obj__ = 0, 
            _if_conditional18) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional19=j_19==len2_18,        __freed_obj__ = 0, 
        _if_conditional19) {
            n_15++;
            __freed_obj__ = 0;
            if(_if_conditional20=n_15==count,            __freed_obj__ = 0, 
            _if_conditional20) {
                __result63__ = i_17;
                __freed_obj__ = 0;
                return __result63__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result64__ = default_value;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int ovec_max_20;
int result_24;
int offset_25;
const char* err_26;
int erro_ofs_27;
int options_28;
char* str_29;
struct real_pcre* re_30;
int n_31;
_Bool _while_condtional1;
int options_32;
int len_33;
int regex_result_34;
int i_35;
_Bool _for_condtionalA5;
int i_36;
_Bool _for_condtionalA6;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_20, 0, sizeof(int));
memset(&result_24, 0, sizeof(int));
memset(&offset_25, 0, sizeof(int));
memset(&erro_ofs_27, 0, sizeof(int));
memset(&options_28, 0, sizeof(int));
memset(&str_29, 0, sizeof(char*));
memset(&re_30, 0, sizeof(struct real_pcre*));
memset(&n_31, 0, sizeof(int));
memset(&options_32, 0, sizeof(int));
memset(&len_33, 0, sizeof(int));
memset(&regex_result_34, 0, sizeof(int));
memset(&i_35, 0, sizeof(int));
memset(&i_36, 0, sizeof(int));
    ovec_max_20=16;
    __freed_obj__ = 0;
    int start_21[ovec_max_20];
    memset(&start_21, 0, sizeof(int)    *(ovec_max_20)    );
    __freed_obj__ = 0;
    int end_22[ovec_max_20];
    memset(&end_22, 0, sizeof(int)    *(ovec_max_20)    );
    __freed_obj__ = 0;
    int ovec_value_23[ovec_max_20*3];
    memset(&ovec_value_23, 0, sizeof(int)    *(ovec_max_20*3)    );
    __freed_obj__ = 0;
    result_24=default_value;
    __freed_obj__ = 0;
    offset_25=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_28=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 239))->options;
    __freed_obj__ = 0;
    str_29=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 240))->str;
    __freed_obj__ = 0;
    re_30=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 242))->re;
    __freed_obj__ = 0;
    n_31=0;
    __freed_obj__ = 0;
    while(_while_condtional1=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional1) {
        options_32=2097152;
        __freed_obj__ = 0;
        len_33=strlen(self);
        __freed_obj__ = 0;
        regex_result_34=pcre_exec(re_30,(struct pcre_extra*)0,self,len_33,offset_25,options_32,ovec_value_23,ovec_max_20*3);
        __freed_obj__ = 0;
        for(
        i_35=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        i_35<ovec_max_20 ,        __freed_obj__ = 0, 
        _for_condtionalA5;        i_35++ ,        __freed_obj__ = 0, 
        0        ){
            start_21[i_35]=ovec_value_23[i_35*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_36=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        i_36<ovec_max_20 ,        __freed_obj__ = 0, 
        _for_condtionalA6;        i_36++ ,        __freed_obj__ = 0, 
        0        ){
            end_22[i_36]=ovec_value_23[i_36*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional21=regex_result_34>0,        __freed_obj__ = 0, 
        _if_conditional21) {
            n_31++;
            __freed_obj__ = 0;
            if(_if_conditional22=offset_25==end_22[0],            __freed_obj__ = 0, 
            _if_conditional22) {
                offset_25++;
                __freed_obj__ = 0;
            }
            else {
                offset_25=end_22[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional23=n_31==count,            __freed_obj__ = 0, 
            _if_conditional23) {
                result_24=start_21[0];
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
    __result65__ = result_24;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_37;
char* p_38;
_Bool _while_condtional2;
_Bool _if_conditional24;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_37, 0, sizeof(int));
memset(&p_38, 0, sizeof(char*));
    __freed_obj__ = 0;
    len_37=strlen(search_str);
    __freed_obj__ = 0;
    p_38=str+strlen(str)-len_37;
    __freed_obj__ = 0;
    while(_while_condtional2=p_38>=str,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional24=strncmp(p_38,search_str,len_37)==0,        __freed_obj__ = 0, 
        _if_conditional24) {
            __result66__ = p_38-str;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_38--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result67__ = default_value;
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_39;
int erro_ofs_40;
int options_41;
char* str_42;
struct real_pcre* re_43;
void* right_value42;
char* self2_44;
int ovec_max_45;
int result_49;
int offset_50;
_Bool _while_condtional3;
int options_51;
int len_52;
int regex_result_53;
int i_54;
_Bool _for_condtionalA7;
int i_55;
_Bool _for_condtionalA8;
_Bool _if_conditional25;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_40, 0, sizeof(int));
memset(&options_41, 0, sizeof(int));
memset(&str_42, 0, sizeof(char*));
memset(&re_43, 0, sizeof(struct real_pcre*));
memset(&right_value42, 0, sizeof(void*));
memset(&self2_44, 0, sizeof(char*));
memset(&ovec_max_45, 0, sizeof(int));
memset(&result_49, 0, sizeof(int));
memset(&offset_50, 0, sizeof(int));
memset(&options_51, 0, sizeof(int));
memset(&len_52, 0, sizeof(int));
memset(&regex_result_53, 0, sizeof(int));
memset(&i_54, 0, sizeof(int));
memset(&i_55, 0, sizeof(int));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_41=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 306))->options;
    __freed_obj__ = 0;
    str_42=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 307))->str;
    __freed_obj__ = 0;
    re_43=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 309))->re;
    __freed_obj__ = 0;
    self2_44=(char*)come_increment_ref_count(((char*)(right_value42=charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 311))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42;
    __freed_obj__ = 0;
    ovec_max_45=16;
    __freed_obj__ = 0;
    int start_46[ovec_max_45];
    memset(&start_46, 0, sizeof(int)    *(ovec_max_45)    );
    __freed_obj__ = 0;
    int end_47[ovec_max_45];
    memset(&end_47, 0, sizeof(int)    *(ovec_max_45)    );
    __freed_obj__ = 0;
    int ovec_value_48[ovec_max_45*3];
    memset(&ovec_value_48, 0, sizeof(int)    *(ovec_max_45*3)    );
    __freed_obj__ = 0;
    result_49=default_value;
    __freed_obj__ = 0;
    offset_50=0;
    __freed_obj__ = 0;
    while(_while_condtional3=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional3) {
        options_51=2097152;
        __freed_obj__ = 0;
        len_52=strlen(self2_44);
        __freed_obj__ = 0;
        regex_result_53=pcre_exec(re_43,(struct pcre_extra*)0,self2_44,len_52,offset_50,options_51,ovec_value_48,ovec_max_45*3);
        __freed_obj__ = 0;
        for(
        i_54=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        i_54<ovec_max_45 ,        __freed_obj__ = 0, 
        _for_condtionalA7;        i_54++ ,        __freed_obj__ = 0, 
        0        ){
            start_46[i_54]=ovec_value_48[i_54*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_55=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        i_55<ovec_max_45 ,        __freed_obj__ = 0, 
        _for_condtionalA8;        i_55++ ,        __freed_obj__ = 0, 
        0        ){
            end_47[i_55]=ovec_value_48[i_55*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=regex_result_53==1||regex_result_53>0,        __freed_obj__ = 0, 
        _if_conditional25) {
            result_49=strlen(self)-1-start_46[0];
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
    __result68__ = result_49;
    if(self2_44 && !__freed_obj__) { self2_44 = come_decrement_ref_count(self2_44, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
    if(self2_44 && !__freed_obj__) { self2_44 = come_decrement_ref_count(self2_44, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_56;
char* p_57;
int n_58;
_Bool _while_condtional4;
_Bool _if_conditional26;
_Bool _if_conditional27;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_56, 0, sizeof(int));
memset(&p_57, 0, sizeof(char*));
memset(&n_58, 0, sizeof(int));
    __freed_obj__ = 0;
    len_56=strlen(search_str);
    __freed_obj__ = 0;
    p_57=str+strlen(str)-len_56;
    __freed_obj__ = 0;
    n_58=0;
    __freed_obj__ = 0;
    while(_while_condtional4=p_57>=str,    __freed_obj__ = 0, 
    _while_condtional4) {
        if(_if_conditional26=strncmp(p_57,search_str,len_56)==0,        __freed_obj__ = 0, 
        _if_conditional26) {
            n_58++;
            __freed_obj__ = 0;
            if(_if_conditional27=n_58==count,            __freed_obj__ = 0, 
            _if_conditional27) {
                __result69__ = p_57-str;
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_57--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result70__ = default_value;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value43;
void* right_value44;
struct list$1charph* result_61;
int offset_62;
int ovec_max_63;
const char* err_67;
int erro_ofs_68;
int options_69;
char* str_70;
struct real_pcre* re_71;
_Bool _while_condtional6;
int options_72;
int len_73;
int regex_result_74;
int i_75;
_Bool _for_condtionalA9;
int i_76;
_Bool _for_condtionalA10;
_Bool _if_conditional29;
void* right_value45;
char* str_77;
void* right_value46;
void* right_value47;
struct list$1charph* group_strings_78;
void* right_value48;
char* str2_79;
_Bool _if_conditional30;
struct list$1charph* __result72__;
_Bool _if_conditional33;
_Bool _if_conditional34;
void* right_value52;
char* str_83;
void* right_value53;
void* right_value54;
struct list$1charph* group_strings_84;
int i_85;
_Bool _for_condtionalA11;
void* right_value55;
char* match_string_86;
void* right_value56;
char* str2_87;
_Bool _if_conditional35;
struct list$1charph* __result74__;
_Bool _if_conditional36;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_61, 0, sizeof(struct list$1charph*));
memset(&offset_62, 0, sizeof(int));
memset(&ovec_max_63, 0, sizeof(int));
memset(&erro_ofs_68, 0, sizeof(int));
memset(&options_69, 0, sizeof(int));
memset(&str_70, 0, sizeof(char*));
memset(&re_71, 0, sizeof(struct real_pcre*));
memset(&options_72, 0, sizeof(int));
memset(&len_73, 0, sizeof(int));
memset(&regex_result_74, 0, sizeof(int));
memset(&i_75, 0, sizeof(int));
memset(&i_76, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&str_77, 0, sizeof(char*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&group_strings_78, 0, sizeof(struct list$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&str2_79, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
memset(&str_83, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&group_strings_84, 0, sizeof(struct list$1charph*));
memset(&i_85, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&match_string_86, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&str2_87, 0, sizeof(char*));
    result_61=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value43=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 374))), "libcomelang2-str.c", 374)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value44;
    __freed_obj__ = 0;
    offset_62=0;
    __freed_obj__ = 0;
    ovec_max_63=16;
    __freed_obj__ = 0;
    int start_64[ovec_max_63];
    memset(&start_64, 0, sizeof(int)    *(ovec_max_63)    );
    __freed_obj__ = 0;
    int end_65[ovec_max_63];
    memset(&end_65, 0, sizeof(int)    *(ovec_max_63)    );
    __freed_obj__ = 0;
    int ovec_value_66[ovec_max_63*3];
    memset(&ovec_value_66, 0, sizeof(int)    *(ovec_max_63*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_69=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 386))->options;
    __freed_obj__ = 0;
    str_70=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 387))->str;
    __freed_obj__ = 0;
    re_71=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 389))->re;
    __freed_obj__ = 0;
    while(_while_condtional6=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional6) {
        options_72=2097152;
        __freed_obj__ = 0;
        len_73=strlen(self);
        __freed_obj__ = 0;
        regex_result_74=pcre_exec(re_71,(struct pcre_extra*)0,self,len_73,offset_62,options_72,ovec_value_66,ovec_max_63*3);
        __freed_obj__ = 0;
        for(
        i_75=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        i_75<ovec_max_63 ,        __freed_obj__ = 0, 
        _for_condtionalA9;        i_75++ ,        __freed_obj__ = 0, 
        0        ){
            start_64[i_75]=ovec_value_66[i_75*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_76=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        i_76<ovec_max_63 ,        __freed_obj__ = 0, 
        _for_condtionalA10;        i_76++ ,        __freed_obj__ = 0, 
        0        ){
            end_65[i_76]=ovec_value_66[i_76*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=regex_result_74==1,        __freed_obj__ = 0, 
        _if_conditional29) {
            str_77=(char*)come_increment_ref_count(((char*)(right_value45=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 406)),start_64[0],end_65[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value45;
            __freed_obj__ = 0;
            group_strings_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value46=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 408))), "libcomelang2-str.c", 408)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value46;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value47;
            __freed_obj__ = 0;
            str2_79=(char*)come_increment_ref_count(((char*)(right_value48=block(parent,str_77,group_strings_78))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value48;
            __freed_obj__ = 0;
            if(_if_conditional30=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 416))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional30) {
                __result72__ = __result_obj__ = result_61;
                if(str_77 && !__freed_obj__) { str_77 = come_decrement_ref_count(str_77, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_79 && !__freed_obj__) { str2_79 = come_decrement_ref_count(str2_79, (void*)0, (void*)0, 0, 0, 0); }
                if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_61, "libcomelang2-str.c", 416)),(char*)come_increment_ref_count(str2_79));
            __freed_obj__ = 0;
            if(_if_conditional33=offset_62==end_65[0],            __freed_obj__ = 0, 
            _if_conditional33) {
                offset_62++;
                __freed_obj__ = 0;
            }
            else {
                offset_62=end_65[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_77 && !__freed_obj__) { str_77 = come_decrement_ref_count(str_77, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_78, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_79 && !__freed_obj__) { str2_79 = come_decrement_ref_count(str2_79, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional34=regex_result_74>1,            __freed_obj__ = 0, 
            _if_conditional34) {
                str_83=(char*)come_increment_ref_count(((char*)(right_value52=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 427)),start_64[0],end_65[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52;
                __freed_obj__ = 0;
                group_strings_84=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 429))), "libcomelang2-str.c", 429)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value53;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value54;
                __freed_obj__ = 0;
                for(
                i_85=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA11=                i_85<regex_result_74 ,                __freed_obj__ = 0, 
                _for_condtionalA11;                i_85++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_86=(char*)come_increment_ref_count(((char*)(right_value55=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 431)),start_64[i_85],end_65[i_85]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_84, "libcomelang2-str.c", 432)),(char*)come_increment_ref_count(match_string_86));
                    __freed_obj__ = 0;
                    if(match_string_86 && !__freed_obj__) { match_string_86 = come_decrement_ref_count(match_string_86, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_87=(char*)come_increment_ref_count(((char*)(right_value56=block(parent,str_83,group_strings_84))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value56;
                __freed_obj__ = 0;
                if(_if_conditional35=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 441))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional35) {
                    __result74__ = __result_obj__ = result_61;
                    if(str_83 && !__freed_obj__) { str_83 = come_decrement_ref_count(str_83, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_87 && !__freed_obj__) { str2_87 = come_decrement_ref_count(str2_87, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result74__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_61, "libcomelang2-str.c", 441)),(char*)come_increment_ref_count(str2_87));
                __freed_obj__ = 0;
                if(_if_conditional36=offset_62==end_65[0],                __freed_obj__ = 0, 
                _if_conditional36) {
                    offset_62++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_62=end_65[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_83 && !__freed_obj__) { str_83 = come_decrement_ref_count(str_83, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_87 && !__freed_obj__) { str2_87 = come_decrement_ref_count(str2_87, (void*)0, (void*)0, 0, 0, 0); }
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
    __result75__ = __result_obj__ = result_61;
    if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(result_61 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_61, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result71__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result71__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_59;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charph*));
            it_59=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional5=it_59!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional5) {
                prev_it_60=it_59;
                __freed_obj__ = 0;
                it_59=((struct list_item$1charph*)come_null_check(it_59, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional28=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional28) {
                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* right_value49;
struct list_item$1charph* litem_80;
char* __dec_obj3;
_Bool _if_conditional32;
void* right_value50;
struct list_item$1charph* litem_81;
char* __dec_obj4;
void* right_value51;
struct list_item$1charph* litem_82;
char* __dec_obj5;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional31=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional31) {
                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value49;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_80, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_80, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj3=((struct list_item$1charph*)come_null_check(litem_80, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_80, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_80;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_80;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional32=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional32) {
                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj4=((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_81;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_81;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value51;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_82;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_82;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result73__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result73__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value57;
void* right_value58;
struct list$1charph* result_88;
int offset_89;
int ovec_max_90;
const char* err_94;
int erro_ofs_95;
int options_96;
char* str_97;
struct real_pcre* re_98;
int n_99;
_Bool _while_condtional7;
int options_100;
int len_101;
int regex_result_102;
int i_103;
_Bool _for_condtionalA12;
int i_104;
_Bool _for_condtionalA13;
_Bool _if_conditional37;
void* right_value59;
char* str_105;
void* right_value60;
void* right_value61;
struct list$1charph* group_strings_106;
void* right_value62;
char* str2_107;
_Bool _if_conditional38;
struct list$1charph* __result76__;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
void* right_value63;
char* str_108;
void* right_value64;
void* right_value65;
struct list$1charph* group_strings_109;
int i_110;
_Bool _for_condtionalA14;
void* right_value66;
char* match_string_111;
void* right_value67;
char* str2_112;
_Bool _if_conditional42;
struct list$1charph* __result77__;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct list$1charph*));
memset(&offset_89, 0, sizeof(int));
memset(&ovec_max_90, 0, sizeof(int));
memset(&erro_ofs_95, 0, sizeof(int));
memset(&options_96, 0, sizeof(int));
memset(&str_97, 0, sizeof(char*));
memset(&re_98, 0, sizeof(struct real_pcre*));
memset(&n_99, 0, sizeof(int));
memset(&options_100, 0, sizeof(int));
memset(&len_101, 0, sizeof(int));
memset(&regex_result_102, 0, sizeof(int));
memset(&i_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&str_105, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&group_strings_106, 0, sizeof(struct list$1charph*));
memset(&right_value62, 0, sizeof(void*));
memset(&str2_107, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&str_108, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&group_strings_109, 0, sizeof(struct list$1charph*));
memset(&i_110, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&match_string_111, 0, sizeof(char*));
memset(&right_value67, 0, sizeof(void*));
memset(&str2_112, 0, sizeof(char*));
    result_88=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 463))), "libcomelang2-str.c", 463)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value57;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
    __freed_obj__ = 0;
    offset_89=0;
    __freed_obj__ = 0;
    ovec_max_90=16;
    __freed_obj__ = 0;
    int start_91[ovec_max_90];
    memset(&start_91, 0, sizeof(int)    *(ovec_max_90)    );
    __freed_obj__ = 0;
    int end_92[ovec_max_90];
    memset(&end_92, 0, sizeof(int)    *(ovec_max_90)    );
    __freed_obj__ = 0;
    int ovec_value_93[ovec_max_90*3];
    memset(&ovec_value_93, 0, sizeof(int)    *(ovec_max_90*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_96=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 475))->options;
    __freed_obj__ = 0;
    str_97=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 476))->str;
    __freed_obj__ = 0;
    re_98=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 478))->re;
    __freed_obj__ = 0;
    n_99=0;
    __freed_obj__ = 0;
    while(_while_condtional7=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional7) {
        options_100=2097152;
        __freed_obj__ = 0;
        len_101=strlen(self);
        __freed_obj__ = 0;
        regex_result_102=pcre_exec(re_98,(struct pcre_extra*)0,self,len_101,offset_89,options_100,ovec_value_93,ovec_max_90*3);
        __freed_obj__ = 0;
        for(
        i_103=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_103<ovec_max_90 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_103++ ,        __freed_obj__ = 0, 
        0        ){
            start_91[i_103]=ovec_value_93[i_103*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_104=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_104<ovec_max_90 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_104++ ,        __freed_obj__ = 0, 
        0        ){
            end_92[i_104]=ovec_value_93[i_104*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional37=regex_result_102==1,        __freed_obj__ = 0, 
        _if_conditional37) {
            str_105=(char*)come_increment_ref_count(((char*)(right_value59=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 497)),start_91[0],end_92[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = 0;
            group_strings_106=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value60=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 499))), "libcomelang2-str.c", 499)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value61;
            __freed_obj__ = 0;
            str2_107=(char*)come_increment_ref_count(((char*)(right_value62=block(parent,str_105,group_strings_106))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value62;
            __freed_obj__ = 0;
            if(_if_conditional38=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 507))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional38) {
                __result76__ = __result_obj__ = result_88;
                if(str_105 && !__freed_obj__) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_106 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_107 && !__freed_obj__) { str2_107 = come_decrement_ref_count(str2_107, (void*)0, (void*)0, 0, 0, 0); }
                if(result_88 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_88, "libcomelang2-str.c", 507)),(char*)come_increment_ref_count(str2_107));
            __freed_obj__ = 0;
            if(_if_conditional39=offset_89==end_92[0],            __freed_obj__ = 0, 
            _if_conditional39) {
                offset_89++;
                __freed_obj__ = 0;
            }
            else {
                offset_89=end_92[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            n_99++;
            __freed_obj__ = 0;
            if(_if_conditional40=n_99==count,            __freed_obj__ = 0, 
            _if_conditional40) {
                if(str_105 && !__freed_obj__) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_106 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_107 && !__freed_obj__) { str2_107 = come_decrement_ref_count(str2_107, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_105 && !__freed_obj__) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_106 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_106, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_107 && !__freed_obj__) { str2_107 = come_decrement_ref_count(str2_107, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional41=regex_result_102>1,            __freed_obj__ = 0, 
            _if_conditional41) {
                str_108=(char*)come_increment_ref_count(((char*)(right_value63=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 523)),start_91[0],end_92[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                group_strings_109=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value64=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 525))), "libcomelang2-str.c", 525)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value64;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value65;
                __freed_obj__ = 0;
                for(
                i_110=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA14=                i_110<regex_result_102 ,                __freed_obj__ = 0, 
                _for_condtionalA14;                i_110++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_111=(char*)come_increment_ref_count(((char*)(right_value66=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 527)),start_91[i_110],end_92[i_110]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_109, "libcomelang2-str.c", 528)),(char*)come_increment_ref_count(match_string_111));
                    __freed_obj__ = 0;
                    if(match_string_111 && !__freed_obj__) { match_string_111 = come_decrement_ref_count(match_string_111, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_112=(char*)come_increment_ref_count(((char*)(right_value67=block(parent,str_108,group_strings_109))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value67);
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value67;
                __freed_obj__ = 0;
                if(_if_conditional42=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 537))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional42) {
                    __result77__ = __result_obj__ = result_88;
                    if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_109 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_88 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result77__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_88, "libcomelang2-str.c", 537)),(char*)come_increment_ref_count(str2_112));
                __freed_obj__ = 0;
                if(_if_conditional43=offset_89==end_92[0],                __freed_obj__ = 0, 
                _if_conditional43) {
                    offset_89++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_89=end_92[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                n_99++;
                __freed_obj__ = 0;
                if(_if_conditional44=n_99==count,                __freed_obj__ = 0, 
                _if_conditional44) {
                    if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_109 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_109 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_112 && !__freed_obj__) { str2_112 = come_decrement_ref_count(str2_112, (void*)0, (void*)0, 0, 0, 0); }
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
    __result78__ = __result_obj__ = result_88;
    if(result_88 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(result_88 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_113;
int erro_ofs_114;
int options_115;
char* str_116;
struct real_pcre* re_117;
void* right_value68;
void* right_value69;
struct list$1charph* result_118;
int offset_119;
int ovec_max_120;
_Bool _while_condtional8;
int options_124;
int len_125;
int regex_result_126;
int i_127;
_Bool _for_condtionalA15;
int i_128;
_Bool _for_condtionalA16;
_Bool _if_conditional45;
void* right_value70;
char* str_129;
void* right_value71;
void* right_value72;
struct list$1charph* match_strings_130;
void* right_value73;
char* str2_131;
_Bool _if_conditional46;
struct list$1charph* __result79__;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value74;
char* str_132;
_Bool _if_conditional49;
void* right_value75;
void* right_value76;
struct list$1charph* match_strings_133;
int i_134;
_Bool _for_condtionalA17;
void* right_value77;
char* match_str_135;
void* right_value78;
char* str2_136;
_Bool _if_conditional50;
struct list$1charph* __result80__;
_Bool _if_conditional51;
void* right_value79;
char* str_137;
void* right_value80;
void* right_value81;
struct list$1charph* match_strings_138;
void* right_value82;
char* str2_139;
_Bool _if_conditional52;
struct list$1charph* __result81__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_114, 0, sizeof(int));
memset(&options_115, 0, sizeof(int));
memset(&str_116, 0, sizeof(char*));
memset(&re_117, 0, sizeof(struct real_pcre*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&result_118, 0, sizeof(struct list$1charph*));
memset(&offset_119, 0, sizeof(int));
memset(&ovec_max_120, 0, sizeof(int));
memset(&options_124, 0, sizeof(int));
memset(&len_125, 0, sizeof(int));
memset(&regex_result_126, 0, sizeof(int));
memset(&i_127, 0, sizeof(int));
memset(&i_128, 0, sizeof(int));
memset(&right_value70, 0, sizeof(void*));
memset(&str_129, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&match_strings_130, 0, sizeof(struct list$1charph*));
memset(&right_value73, 0, sizeof(void*));
memset(&str2_131, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&str_132, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&match_strings_133, 0, sizeof(struct list$1charph*));
memset(&i_134, 0, sizeof(int));
memset(&right_value77, 0, sizeof(void*));
memset(&match_str_135, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&str2_136, 0, sizeof(char*));
memset(&right_value79, 0, sizeof(void*));
memset(&str_137, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&match_strings_138, 0, sizeof(struct list$1charph*));
memset(&right_value82, 0, sizeof(void*));
memset(&str2_139, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_115=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 566))->options;
    __freed_obj__ = 0;
    str_116=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 567))->str;
    __freed_obj__ = 0;
    re_117=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 569))->re;
    __freed_obj__ = 0;
    result_118=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 571))), "libcomelang2-str.c", 571)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value69;
    __freed_obj__ = 0;
    offset_119=0;
    __freed_obj__ = 0;
    ovec_max_120=16;
    __freed_obj__ = 0;
    int start_121[ovec_max_120];
    memset(&start_121, 0, sizeof(int)    *(ovec_max_120)    );
    __freed_obj__ = 0;
    int end_122[ovec_max_120];
    memset(&end_122, 0, sizeof(int)    *(ovec_max_120)    );
    __freed_obj__ = 0;
    int ovec_value_123[ovec_max_120*3];
    memset(&ovec_value_123, 0, sizeof(int)    *(ovec_max_120*3)    );
    __freed_obj__ = 0;
    while(_while_condtional8=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional8) {
        options_124=2097152;
        __freed_obj__ = 0;
        len_125=strlen(self);
        __freed_obj__ = 0;
        regex_result_126=pcre_exec(re_117,(struct pcre_extra*)0,self,len_125,offset_119,options_124,ovec_value_123,ovec_max_120*3);
        __freed_obj__ = 0;
        for(
        i_127=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        i_127<ovec_max_120 ,        __freed_obj__ = 0, 
        _for_condtionalA15;        i_127++ ,        __freed_obj__ = 0, 
        0        ){
            start_121[i_127]=ovec_value_123[i_127*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_128=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_128<ovec_max_120 ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_128++ ,        __freed_obj__ = 0, 
        0        ){
            end_122[i_128]=ovec_value_123[i_128*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional45=regex_result_126==1,        __freed_obj__ = 0, 
        _if_conditional45) {
            str_129=(char*)come_increment_ref_count(((char*)(right_value70=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 596)),offset_119,start_121[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70;
            __freed_obj__ = 0;
            match_strings_130=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value71=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 598))), "libcomelang2-str.c", 598)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value71;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value72;
            __freed_obj__ = 0;
            str2_131=(char*)come_increment_ref_count(((char*)(right_value73=block(parent,str_129,match_strings_130))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value73;
            __freed_obj__ = 0;
            if(_if_conditional46=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 605))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional46) {
                __result79__ = __result_obj__ = result_118;
                if(str_129 && !__freed_obj__) { str_129 = come_decrement_ref_count(str_129, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_130 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_130, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_131 && !__freed_obj__) { str2_131 = come_decrement_ref_count(str2_131, (void*)0, (void*)0, 0, 0, 0); }
                if(result_118 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_118, "libcomelang2-str.c", 605)),(char*)come_increment_ref_count(str2_131));
            __freed_obj__ = 0;
            if(_if_conditional47=offset_119==end_122[0],            __freed_obj__ = 0, 
            _if_conditional47) {
                offset_119++;
                __freed_obj__ = 0;
            }
            else {
                offset_119=end_122[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_129 && !__freed_obj__) { str_129 = come_decrement_ref_count(str_129, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_130 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_131 && !__freed_obj__) { str2_131 = come_decrement_ref_count(str2_131, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional48=regex_result_126>1,            __freed_obj__ = 0, 
            _if_conditional48) {
                str_132=(char*)come_increment_ref_count(((char*)(right_value74=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 616)),offset_119,start_121[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value74;
                __freed_obj__ = 0;
                if(_if_conditional49=offset_119==end_122[0],                __freed_obj__ = 0, 
                _if_conditional49) {
                    offset_119++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_119=end_122[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_133=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 625))), "libcomelang2-str.c", 625)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value75;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value76);
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value76;
                __freed_obj__ = 0;
                for(
                i_134=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA17=                i_134<regex_result_126 ,                __freed_obj__ = 0, 
                _for_condtionalA17;                i_134++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_135=(char*)come_increment_ref_count(((char*)(right_value77=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 627)),start_121[i_134],end_122[i_134]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value77;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_133, "libcomelang2-str.c", 628)),(char*)come_increment_ref_count(match_str_135));
                    __freed_obj__ = 0;
                    if(match_str_135 && !__freed_obj__) { match_str_135 = come_decrement_ref_count(match_str_135, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_136=(char*)come_increment_ref_count(((char*)(right_value78=block(parent,str_132,match_strings_133))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value78;
                __freed_obj__ = 0;
                if(_if_conditional50=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 636))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional50) {
                    __result80__ = __result_obj__ = result_118;
                    if(str_132 && !__freed_obj__) { str_132 = come_decrement_ref_count(str_132, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_133 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_133, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_136 && !__freed_obj__) { str2_136 = come_decrement_ref_count(str2_136, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_118 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result80__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_118, "libcomelang2-str.c", 636)),(char*)come_increment_ref_count(str2_136));
                __freed_obj__ = 0;
                if(str_132 && !__freed_obj__) { str_132 = come_decrement_ref_count(str_132, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_133 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_133, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_136 && !__freed_obj__) { str2_136 = come_decrement_ref_count(str2_136, (void*)0, (void*)0, 0, 0, 0); }
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
    if(_if_conditional51=offset_119<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 656))),    __freed_obj__ = 0, 
    _if_conditional51) {
        str_137=(char*)come_increment_ref_count(((char*)(right_value79=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 646)),offset_119,-1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        match_strings_138=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value80=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 647))), "libcomelang2-str.c", 647)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value81;
        __freed_obj__ = 0;
        str2_139=(char*)come_increment_ref_count(((char*)(right_value82=block(parent,str_137,match_strings_138))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value82;
        __freed_obj__ = 0;
        if(_if_conditional52=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 653))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional52) {
            __result81__ = __result_obj__ = result_118;
            if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_139 && !__freed_obj__) { str2_139 = come_decrement_ref_count(str2_139, (void*)0, (void*)0, 0, 0, 0); }
            if(result_118 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result81__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_118, "libcomelang2-str.c", 653)),(char*)come_increment_ref_count(str2_139));
        __freed_obj__ = 0;
        if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
        if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str2_139 && !__freed_obj__) { str2_139 = come_decrement_ref_count(str2_139, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = result_118;
    if(result_118 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(result_118 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_140;
int erro_ofs_141;
int options_142;
char* str_143;
struct real_pcre* re_144;
void* right_value83;
void* right_value84;
struct list$1charph* result_145;
int offset_146;
int ovec_max_147;
int n_151;
_Bool _while_condtional9;
int options_152;
int len_153;
int regex_result_154;
int i_155;
_Bool _for_condtionalA18;
int i_156;
_Bool _for_condtionalA19;
_Bool _if_conditional53;
void* right_value85;
char* str_157;
void* right_value86;
void* right_value87;
struct list$1charph* match_strings_158;
void* right_value88;
char* str2_159;
_Bool _if_conditional54;
struct list$1charph* __result83__;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value89;
char* str_160;
_Bool _if_conditional57;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_161;
int i_162;
_Bool _for_condtionalA20;
void* right_value92;
char* match_str_163;
void* right_value93;
char* str2_164;
_Bool _if_conditional58;
struct list$1charph* __result84__;
_Bool _if_conditional59;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_141, 0, sizeof(int));
memset(&options_142, 0, sizeof(int));
memset(&str_143, 0, sizeof(char*));
memset(&re_144, 0, sizeof(struct real_pcre*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct list$1charph*));
memset(&offset_146, 0, sizeof(int));
memset(&ovec_max_147, 0, sizeof(int));
memset(&n_151, 0, sizeof(int));
memset(&options_152, 0, sizeof(int));
memset(&len_153, 0, sizeof(int));
memset(&regex_result_154, 0, sizeof(int));
memset(&i_155, 0, sizeof(int));
memset(&i_156, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&str_157, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&match_strings_158, 0, sizeof(struct list$1charph*));
memset(&right_value88, 0, sizeof(void*));
memset(&str2_159, 0, sizeof(char*));
memset(&right_value89, 0, sizeof(void*));
memset(&str_160, 0, sizeof(char*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&match_strings_161, 0, sizeof(struct list$1charph*));
memset(&i_162, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&match_str_163, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&str2_164, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_142=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 664))->options;
    __freed_obj__ = 0;
    str_143=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 665))->str;
    __freed_obj__ = 0;
    re_144=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 667))->re;
    __freed_obj__ = 0;
    result_145=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value83=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 669))), "libcomelang2-str.c", 669)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    offset_146=0;
    __freed_obj__ = 0;
    ovec_max_147=16;
    __freed_obj__ = 0;
    int start_148[ovec_max_147];
    memset(&start_148, 0, sizeof(int)    *(ovec_max_147)    );
    __freed_obj__ = 0;
    int end_149[ovec_max_147];
    memset(&end_149, 0, sizeof(int)    *(ovec_max_147)    );
    __freed_obj__ = 0;
    int ovec_value_150[ovec_max_147*3];
    memset(&ovec_value_150, 0, sizeof(int)    *(ovec_max_147*3)    );
    __freed_obj__ = 0;
    n_151=0;
    __freed_obj__ = 0;
    while(_while_condtional9=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional9) {
        options_152=2097152;
        __freed_obj__ = 0;
        len_153=strlen(self);
        __freed_obj__ = 0;
        regex_result_154=pcre_exec(re_144,(struct pcre_extra*)0,self,len_153,offset_146,options_152,ovec_value_150,ovec_max_147*3);
        __freed_obj__ = 0;
        for(
        i_155=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_155<ovec_max_147 ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_155++ ,        __freed_obj__ = 0, 
        0        ){
            start_148[i_155]=ovec_value_150[i_155*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_156=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_156<ovec_max_147 ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_156++ ,        __freed_obj__ = 0, 
        0        ){
            end_149[i_156]=ovec_value_150[i_156*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=regex_result_154==1,        __freed_obj__ = 0, 
        _if_conditional53) {
            str_157=(char*)come_increment_ref_count(((char*)(right_value85=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 696)),offset_146,start_148[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value85;
            __freed_obj__ = 0;
            match_strings_158=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value87=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value86=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 698))), "libcomelang2-str.c", 698)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value86;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value87;
            __freed_obj__ = 0;
            str2_159=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_157,match_strings_158))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value88);
            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value88;
            __freed_obj__ = 0;
            if(_if_conditional54=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 704))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional54) {
                __result83__ = __result_obj__ = result_145;
                if(str_157 && !__freed_obj__) { str_157 = come_decrement_ref_count(str_157, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_158 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_159 && !__freed_obj__) { str2_159 = come_decrement_ref_count(str2_159, (void*)0, (void*)0, 0, 0, 0); }
                if(result_145 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_145, "libcomelang2-str.c", 704)),(char*)come_increment_ref_count(str2_159));
            __freed_obj__ = 0;
            if(_if_conditional55=offset_146==end_149[0],            __freed_obj__ = 0, 
            _if_conditional55) {
                offset_146++;
                __freed_obj__ = 0;
            }
            else {
                offset_146=end_149[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_157 && !__freed_obj__) { str_157 = come_decrement_ref_count(str_157, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_158 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_158, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_159 && !__freed_obj__) { str2_159 = come_decrement_ref_count(str2_159, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional56=regex_result_154>1,            __freed_obj__ = 0, 
            _if_conditional56) {
                str_160=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 715)),offset_146,start_148[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value89;
                __freed_obj__ = 0;
                if(_if_conditional57=offset_146==end_149[0],                __freed_obj__ = 0, 
                _if_conditional57) {
                    offset_146++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_146=end_149[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_161=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 724))), "libcomelang2-str.c", 724)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value90);
                if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value90;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value91;
                __freed_obj__ = 0;
                for(
                i_162=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA20=                i_162<regex_result_154 ,                __freed_obj__ = 0, 
                _for_condtionalA20;                i_162++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_163=(char*)come_increment_ref_count(((char*)(right_value92=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 726)),start_148[i_162],end_149[i_162]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_161, "libcomelang2-str.c", 727)),(char*)come_increment_ref_count(match_str_163));
                    __freed_obj__ = 0;
                    if(match_str_163 && !__freed_obj__) { match_str_163 = come_decrement_ref_count(match_str_163, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_164=(char*)come_increment_ref_count(((char*)(right_value93=block(parent,str_160,match_strings_161))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value93;
                __freed_obj__ = 0;
                if(_if_conditional58=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 736))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional58) {
                    __result84__ = __result_obj__ = result_145;
                    if(str_160 && !__freed_obj__) { str_160 = come_decrement_ref_count(str_160, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_161 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_164 && !__freed_obj__) { str2_164 = come_decrement_ref_count(str2_164, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_145 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_145, "libcomelang2-str.c", 736)),(char*)come_increment_ref_count(str2_164));
                __freed_obj__ = 0;
                if(str_160 && !__freed_obj__) { str_160 = come_decrement_ref_count(str_160, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_161 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_164 && !__freed_obj__) { str2_164 = come_decrement_ref_count(str2_164, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_151++;
        __freed_obj__ = 0;
        if(_if_conditional59=n_151==count,        __freed_obj__ = 0, 
        _if_conditional59) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result85__ = __result_obj__ = result_145;
    if(result_145 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
    if(result_145 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
_Bool __result86__;
_Bool _if_conditional61;
_Bool __result87__;
_Bool _if_conditional62;
_Bool __result88__;
_Bool _if_conditional63;
_Bool __result89__;
_Bool _if_conditional64;
_Bool __result90__;
_Bool _if_conditional65;
_Bool __result91__;
_Bool _if_conditional66;
_Bool __result92__;
_Bool _if_conditional67;
_Bool __result93__;
_Bool _if_conditional68;
_Bool __result94__;
_Bool _if_conditional69;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional60=strcmp(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 759))->str,((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 759))->str)!=0,    __freed_obj__ = 0, 
    _if_conditional60) {
        __result86__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional61=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 762))->ignore_case!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 762))->ignore_case,    __freed_obj__ = 0, 
    _if_conditional61) {
        __result87__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result87__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional62=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 765))->multiline!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 765))->multiline,    __freed_obj__ = 0, 
    _if_conditional62) {
        __result88__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result88__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional63=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 768))->global!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 768))->global,    __freed_obj__ = 0, 
    _if_conditional63) {
        __result89__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result89__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional64=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 771))->extended!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 771))->extended,    __freed_obj__ = 0, 
    _if_conditional64) {
        __result90__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional65=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 774))->dotall!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 774))->dotall,    __freed_obj__ = 0, 
    _if_conditional65) {
        __result91__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result91__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional66=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 777))->anchored!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 777))->anchored,    __freed_obj__ = 0, 
    _if_conditional66) {
        __result92__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result92__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 780))->dollar_endonly!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 780))->dollar_endonly,    __freed_obj__ = 0, 
    _if_conditional67) {
        __result93__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result93__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional68=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 783))->ungreedy!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 783))->ungreedy,    __freed_obj__ = 0, 
    _if_conditional68) {
        __result94__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional69=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 787))->options!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 787))->options,    __freed_obj__ = 0, 
    _if_conditional69) {
        __result95__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result96__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
void* right_value95;
struct list$1charph* result_165;
int offset_166;
int ovec_max_167;
const char* err_171;
int erro_ofs_172;
int options_173;
char* str_174;
struct real_pcre* re_175;
_Bool _while_condtional10;
int options_176;
int len_177;
int regex_result_178;
int i_179;
_Bool _for_condtionalA21;
int i_180;
_Bool _for_condtionalA22;
_Bool _if_conditional70;
void* right_value96;
char* str_181;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value97;
char* str_182;
_Bool _if_conditional73;
int i_183;
_Bool _for_condtionalA23;
void* right_value98;
char* match_string_184;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_165, 0, sizeof(struct list$1charph*));
memset(&offset_166, 0, sizeof(int));
memset(&ovec_max_167, 0, sizeof(int));
memset(&erro_ofs_172, 0, sizeof(int));
memset(&options_173, 0, sizeof(int));
memset(&str_174, 0, sizeof(char*));
memset(&re_175, 0, sizeof(struct real_pcre*));
memset(&options_176, 0, sizeof(int));
memset(&len_177, 0, sizeof(int));
memset(&regex_result_178, 0, sizeof(int));
memset(&i_179, 0, sizeof(int));
memset(&i_180, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&str_181, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&str_182, 0, sizeof(char*));
memset(&i_183, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&match_string_184, 0, sizeof(char*));
    result_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 792))), "libcomelang2-str.c", 792)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value95;
    __freed_obj__ = 0;
    offset_166=0;
    __freed_obj__ = 0;
    ovec_max_167=16;
    __freed_obj__ = 0;
    int start_168[ovec_max_167];
    memset(&start_168, 0, sizeof(int)    *(ovec_max_167)    );
    __freed_obj__ = 0;
    int end_169[ovec_max_167];
    memset(&end_169, 0, sizeof(int)    *(ovec_max_167)    );
    __freed_obj__ = 0;
    int ovec_value_170[ovec_max_167*3];
    memset(&ovec_value_170, 0, sizeof(int)    *(ovec_max_167*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_173=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 804))->options;
    __freed_obj__ = 0;
    str_174=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 805))->str;
    __freed_obj__ = 0;
    re_175=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 807))->re;
    __freed_obj__ = 0;
    while(_while_condtional10=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional10) {
        options_176=2097152;
        __freed_obj__ = 0;
        len_177=strlen(self);
        __freed_obj__ = 0;
        regex_result_178=pcre_exec(re_175,(struct pcre_extra*)0,self,len_177,offset_166,options_176,ovec_value_170,ovec_max_167*3);
        __freed_obj__ = 0;
        for(
        i_179=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA21=        i_179<ovec_max_167 ,        __freed_obj__ = 0, 
        _for_condtionalA21;        i_179++ ,        __freed_obj__ = 0, 
        0        ){
            start_168[i_179]=ovec_value_170[i_179*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_180=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_180<ovec_max_167 ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_180++ ,        __freed_obj__ = 0, 
        0        ){
            end_169[i_180]=ovec_value_170[i_180*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=regex_result_178==1,        __freed_obj__ = 0, 
        _if_conditional70) {
            str_181=(char*)come_increment_ref_count(((char*)(right_value96=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 826)),start_168[0],end_169[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value96;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_165, "libcomelang2-str.c", 827)),(char*)come_increment_ref_count(str_181));
            __freed_obj__ = 0;
            if(_if_conditional71=offset_166==end_169[0],            __freed_obj__ = 0, 
            _if_conditional71) {
                offset_166++;
                __freed_obj__ = 0;
            }
            else {
                offset_166=end_169[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_181 && !__freed_obj__) { str_181 = come_decrement_ref_count(str_181, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional72=regex_result_178>1,            __freed_obj__ = 0, 
            _if_conditional72) {
                str_182=(char*)come_increment_ref_count(((char*)(right_value97=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 838)),start_168[0],end_169[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_165, "libcomelang2-str.c", 839)),(char*)come_increment_ref_count(str_182));
                __freed_obj__ = 0;
                if(_if_conditional73=offset_166==end_169[0],                __freed_obj__ = 0, 
                _if_conditional73) {
                    offset_166++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_166=end_169[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                *num_group_string_in_regex=regex_result_178-1;
                __freed_obj__ = 0;
                for(
                i_183=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA23=                i_183<regex_result_178 ,                __freed_obj__ = 0, 
                _for_condtionalA23;                i_183++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_184=(char*)come_increment_ref_count(((char*)(right_value98=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 850)),start_168[i_183],end_169[i_183]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value98;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 851)),(char*)come_increment_ref_count(match_string_184));
                    __freed_obj__ = 0;
                    if(match_string_184 && !__freed_obj__) { match_string_184 = come_decrement_ref_count(match_string_184, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_182 && !__freed_obj__) { str_182 = come_decrement_ref_count(str_182, (void*)0, (void*)0, 0, 0, 0); }
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
    __result97__ = __result_obj__ = result_165;
    if(result_165 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
    if(result_165 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
char* result_185;
int len_186;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&result_185, 0, sizeof(char*));
memset(&len_186, 0, sizeof(int));
    result_185=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(self))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    len_186=strlen(self);
    __freed_obj__ = 0;
    if(_if_conditional74=self[len_186-1]==10,    __freed_obj__ = 0, 
    _if_conditional74) {
        result_185[len_186-1]=0;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional75=self[len_186-1]==13,        __freed_obj__ = 0, 
        _if_conditional75) {
            result_185[len_186-1]=0;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional76=len_186>2&&self[len_186-2]==13&&self[len_186-1]==10,            __freed_obj__ = 0, 
            _if_conditional76) {
                result_185[len_186-2]=0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result98__ = __result_obj__ = result_185;
    if(result_185 && !__freed_obj__) { result_185 = come_decrement_ref_count(result_185, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(result_185 && !__freed_obj__) { result_185 = come_decrement_ref_count(result_185, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_187;
void* right_value100;
char* result_188;
int n_189;
int i_190;
_Bool _for_condtionalA24;
char c_191;
_Bool _if_conditional77;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_187, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&result_188, 0, sizeof(char*));
memset(&n_189, 0, sizeof(int));
memset(&i_190, 0, sizeof(int));
memset(&c_191, 0, sizeof(char));
    len_187=charp_length(((char*)come_null_check(str, "libcomelang2-str.c", 885)));
    __freed_obj__ = 0;
    result_188=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(len_187*2+1)), "libcomelang2-str.c", 886))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    n_189=0;
    __freed_obj__ = 0;
    for(
    i_190=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA24=    i_190<len_187 ,    __freed_obj__ = 0, 
    _for_condtionalA24;    i_190++ ,    __freed_obj__ = 0, 
    0    ){
        c_191=str[i_190];
        __freed_obj__ = 0;
        if(_if_conditional77=(c_191>=0&&c_191<32)||c_191==127,        __freed_obj__ = 0, 
        _if_conditional77) {
            result_188[n_189++]=94;
            __freed_obj__ = 0;
            result_188[n_189++]=c_191+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_188[n_189++]=c_191;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_188[n_189]=0;
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = result_188;
    if(result_188 && !__freed_obj__) { result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(result_188 && !__freed_obj__) { result_188 = come_decrement_ref_count(result_188, (void*)0, (void*)0, 0, 0, 0); }
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_192;
void* right_value101;
char* result_193;
_Bool _if_conditional78;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_192, 0, sizeof(int));
memset(&right_value101, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
    len_192=16*(wcslen(wstr)+1);
    __freed_obj__ = 0;
    result_193=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(len_192)), "libcomelang2-str.c", 912))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    if(_if_conditional78=wcstombs(result_193,wstr,len_192)<0,    __freed_obj__ = 0, 
    _if_conditional78) {
        strncpy(result_193,"",len_192);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = result_193;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
unsigned int* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result101__ = __result_obj__ = ((unsigned int*)(right_value102=__builtin_wstring(str)));
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = wcslen(str);
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_194;
_Bool _if_conditional79;
void* right_value103;
void* right_value104;
unsigned int* __result103__;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value105;
void* right_value106;
unsigned int* __result104__;
_Bool _if_conditional84;
void* right_value107;
unsigned int* sub_str_195;
void* right_value108;
void* right_value109;
unsigned int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_194, 0, sizeof(int));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&sub_str_195, 0, sizeof(unsigned int*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
    __freed_obj__ = 0;
    len_194=wcslen(str);
    __freed_obj__ = 0;
    if(_if_conditional79=len_194==0,    __freed_obj__ = 0, 
    _if_conditional79) {
        __result103__ = __result_obj__ = ((unsigned int*)(right_value104=string_to_wstring(((char*)come_null_check(((char*)(right_value103=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 939))))), "libcomelang2-str.c", 939)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = 0;
        return __result103__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional80=head<0,    __freed_obj__ = 0, 
    _if_conditional80) {
        head+=len_194;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional81=tail<0,    __freed_obj__ = 0, 
    _if_conditional81) {
        tail+=len_194+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional82=head<0,    __freed_obj__ = 0, 
    _if_conditional82) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional83=tail<0,    __freed_obj__ = 0, 
    _if_conditional83) {
        __result104__ = __result_obj__ = ((unsigned int*)(right_value106=string_to_wstring(((char*)come_null_check(((char*)(right_value105=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 955))))), "libcomelang2-str.c", 955)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional84=tail>=len_194,    __freed_obj__ = 0, 
    _if_conditional84) {
        tail=len_194;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_195=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value107=wchar_tp_substring(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 962)),tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_195,sizeof(unsigned int)*(wstring_length(((unsigned int*)come_null_check(sub_str_195, "libcomelang2-str.c", 964)))+1));
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = ((unsigned int*)(right_value109=string_to_wstring(((char*)come_null_check(((char*)(right_value108=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 966))))), "libcomelang2-str.c", 966)))));
    if(sub_str_195 && !__freed_obj__) { sub_str_195 = come_decrement_ref_count(sub_str_195, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(sub_str_195 && !__freed_obj__) { sub_str_195 = come_decrement_ref_count(sub_str_195, (void*)0, (void*)0, 0, 0, 0); }
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int* head_196;
_Bool _if_conditional85;
int __result106__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_196, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    head_196=wcsstr(str,search_str);
    __freed_obj__ = 0;
    if(_if_conditional85=head_196==((void*)0),    __freed_obj__ = 0, 
    _if_conditional85) {
        __result106__ = default_value;
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = head_196-str;
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_197;
unsigned int* p_198;
_Bool _while_condtional11;
int len2_199;
_Bool result_200;
int i_201;
_Bool _for_condtionalA25;
_Bool _if_conditional86;
_Bool _if_conditional87;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_197, 0, sizeof(int));
memset(&p_198, 0, sizeof(unsigned int*));
memset(&len2_199, 0, sizeof(int));
memset(&result_200, 0, sizeof(_Bool));
memset(&i_201, 0, sizeof(int));
    __freed_obj__ = 0;
    len_197=wcslen(search_str);
    __freed_obj__ = 0;
    p_198=str+wcslen(str)-len_197;
    __freed_obj__ = 0;
    while(_while_condtional11=p_198>=str,    __freed_obj__ = 0, 
    _while_condtional11) {
        len2_199=wcslen(p_198);
        __freed_obj__ = 0;
        result_200=(_Bool)1;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_201=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA25=        i_201<len_197&&i_201<len2_199 ,        __freed_obj__ = 0, 
        _for_condtionalA25;        i_201++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional86=p_198[i_201]!=search_str[i_201],            __freed_obj__ = 0, 
            _if_conditional86) {
                result_200=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=result_200,        __freed_obj__ = 0, 
        _if_conditional87) {
            __result108__ = (p_198-str);
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_198--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result109__ = default_value;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_202;
void* right_value110;
unsigned int* result_203;
int i_204;
_Bool _for_condtionalA26;
unsigned int* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_202, 0, sizeof(int));
memset(&right_value110, 0, sizeof(void*));
memset(&result_203, 0, sizeof(unsigned int*));
memset(&i_204, 0, sizeof(int));
    len_202=wcslen(str);
    __freed_obj__ = 0;
    result_203=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value110=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_202+1)), "libcomelang2-str.c", 1012))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    for(
    i_204=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA26=    i_204<len_202 ,    __freed_obj__ = 0, 
    _for_condtionalA26;    i_204++ ,    __freed_obj__ = 0, 
    0    ){
        result_203[i_204]=str[len_202-i_204-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_203[len_202]=0;
    __freed_obj__ = 0;
    __result110__ = __result_obj__ = result_203;
    if(result_203 && !__freed_obj__) { result_203 = come_decrement_ref_count(result_203, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
    if(result_203 && !__freed_obj__) { result_203 = come_decrement_ref_count(result_203, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_205;
void* right_value111;
unsigned int* result_206;
int i_207;
_Bool _for_condtionalA27;
unsigned int* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_205, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&result_206, 0, sizeof(unsigned int*));
memset(&i_207, 0, sizeof(int));
    len_205=wcslen(str)*n+1;
    __freed_obj__ = 0;
    result_206=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value111=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_205)), "libcomelang2-str.c", 1027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111;
    __freed_obj__ = 0;
    result_206[0]=0;
    __freed_obj__ = 0;
    for(
    i_207=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA27=    i_207<n ,    __freed_obj__ = 0, 
    _for_condtionalA27;    i_207++ ,    __freed_obj__ = 0, 
    0    ){
        wcscat(result_206,str);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = result_206;
    if(result_206 && !__freed_obj__) { result_206 = come_decrement_ref_count(result_206, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(result_206 && !__freed_obj__) { result_206 = come_decrement_ref_count(result_206, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_208;
void* right_value112;
unsigned int* result_209;
int n_210;
int i_211;
_Bool _for_condtionalA28;
unsigned int c_212;
_Bool _if_conditional88;
unsigned int* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_208, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&result_209, 0, sizeof(unsigned int*));
memset(&n_210, 0, sizeof(int));
memset(&i_211, 0, sizeof(int));
memset(&c_212, 0, sizeof(unsigned int));
    len_208=wchar_tp_length(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 1040)));
    __freed_obj__ = 0;
    result_209=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value112=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_208*2+1)), "libcomelang2-str.c", 1041))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112;
    __freed_obj__ = 0;
    n_210=0;
    __freed_obj__ = 0;
    for(
    i_211=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA28=    i_211<len_208 ,    __freed_obj__ = 0, 
    _for_condtionalA28;    i_211++ ,    __freed_obj__ = 0, 
    0    ){
        c_212=str[i_211];
        __freed_obj__ = 0;
        if(_if_conditional88=(c_212>=0&&c_212<32)||c_212==127,        __freed_obj__ = 0, 
        _if_conditional88) {
            result_209[n_210++]=94;
            __freed_obj__ = 0;
            result_209[n_210++]=c_212+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_209[n_210++]=c_212;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_209[n_210]=0;
    __freed_obj__ = 0;
    __result112__ = __result_obj__ = result_209;
    if(result_209 && !__freed_obj__) { result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(result_209 && !__freed_obj__) { result_209 = come_decrement_ref_count(result_209, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_213;
int ovec_max_214;
const char* err_218;
int erro_ofs_219;
int options_220;
char* str_221;
struct real_pcre* re_222;
int n_223;
_Bool _while_condtional12;
int options_224;
int len_225;
int regex_result_226;
int i_227;
_Bool _for_condtionalA29;
int i_228;
_Bool _for_condtionalA30;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool __result113__;
_Bool _if_conditional91;
_Bool _if_conditional92;
int i_231;
_Bool _for_condtionalA31;
void* right_value113;
char* match_string_232;
_Bool _if_conditional93;
_Bool __result115__;
_Bool _if_conditional94;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_213, 0, sizeof(int));
memset(&ovec_max_214, 0, sizeof(int));
memset(&erro_ofs_219, 0, sizeof(int));
memset(&options_220, 0, sizeof(int));
memset(&str_221, 0, sizeof(char*));
memset(&re_222, 0, sizeof(struct real_pcre*));
memset(&n_223, 0, sizeof(int));
memset(&options_224, 0, sizeof(int));
memset(&len_225, 0, sizeof(int));
memset(&regex_result_226, 0, sizeof(int));
memset(&i_227, 0, sizeof(int));
memset(&i_228, 0, sizeof(int));
memset(&i_231, 0, sizeof(int));
memset(&right_value113, 0, sizeof(void*));
memset(&match_string_232, 0, sizeof(char*));
    offset_213=0;
    __freed_obj__ = 0;
    ovec_max_214=16;
    __freed_obj__ = 0;
    int start_215[ovec_max_214];
    memset(&start_215, 0, sizeof(int)    *(ovec_max_214)    );
    __freed_obj__ = 0;
    int end_216[ovec_max_214];
    memset(&end_216, 0, sizeof(int)    *(ovec_max_214)    );
    __freed_obj__ = 0;
    int ovec_value_217[ovec_max_214*3];
    memset(&ovec_value_217, 0, sizeof(int)    *(ovec_max_214*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_220=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1075))->options;
    __freed_obj__ = 0;
    str_221=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1076))->str;
    __freed_obj__ = 0;
    re_222=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1078))->re;
    __freed_obj__ = 0;
    n_223=0;
    __freed_obj__ = 0;
    while(_while_condtional12=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional12) {
        options_224=2097152;
        __freed_obj__ = 0;
        len_225=strlen(self);
        __freed_obj__ = 0;
        regex_result_226=pcre_exec(re_222,(struct pcre_extra*)0,self,len_225,offset_213,options_224,ovec_value_217,ovec_max_214*3);
        __freed_obj__ = 0;
        for(
        i_227=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA29=        i_227<ovec_max_214 ,        __freed_obj__ = 0, 
        _for_condtionalA29;        i_227++ ,        __freed_obj__ = 0, 
        0        ){
            start_215[i_227]=ovec_value_217[i_227*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_228=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA30=        i_228<ovec_max_214 ,        __freed_obj__ = 0, 
        _for_condtionalA30;        i_228++ ,        __freed_obj__ = 0, 
        0        ){
            end_216[i_228]=ovec_value_217[i_228*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=regex_result_226==1||(group_strings==((void*)0)&&regex_result_226>0),        __freed_obj__ = 0, 
        _if_conditional89) {
            n_223++;
            __freed_obj__ = 0;
            if(_if_conditional90=n_223==count,            __freed_obj__ = 0, 
            _if_conditional90) {
                __result113__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result113__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=offset_213==end_216[0],            __freed_obj__ = 0, 
            _if_conditional91) {
                offset_213++;
                __freed_obj__ = 0;
            }
            else {
                offset_213=end_216[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional92=regex_result_226>1,            __freed_obj__ = 0, 
            _if_conditional92) {
                n_223++;
                __freed_obj__ = 0;
                list$1charph_reset(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1115)));
                __freed_obj__ = 0;
                for(
                i_231=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA31=                i_231<regex_result_226 ,                __freed_obj__ = 0, 
                _for_condtionalA31;                i_231++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_232=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1117)),start_215[i_231],end_216[i_231]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1118)),(char*)come_increment_ref_count(match_string_232));
                    __freed_obj__ = 0;
                    if(match_string_232 && !__freed_obj__) { match_string_232 = come_decrement_ref_count(match_string_232, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional93=n_223==count,                __freed_obj__ = 0, 
                _if_conditional93) {
                    __result115__ = (_Bool)1;
                    __freed_obj__ = 0;
                    return __result115__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional94=offset_213==end_216[0],                __freed_obj__ = 0, 
                _if_conditional94) {
                    offset_213++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_213=end_216[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result116__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result117__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_229;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_230;
struct list$1charph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_229, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_230, 0, sizeof(struct list_item$1charph*));
                    it_229=((struct list$1charph*)come_null_check(self, "./comelang2.h", 476))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional13=it_229!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        prev_it_230=it_229;
                        __freed_obj__ = 0;
                        it_229=((struct list_item$1charph*)come_null_check(it_229, "./comelang2.h", 479))->next;
                        __freed_obj__ = 0;
                        if(prev_it_230 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_230, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                    __freed_obj__ = 0;
                    __result114__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result114__;
                    __freed_obj__ = 0;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = wcscmp(left,right);
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = wcscmp(left,right);
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = string_get_hash_key(((char*)come_null_check(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1154))->str, "libcomelang2-str.c", 1154)));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = left==right;
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value114;
unsigned int* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
    __result122__ = __result_obj__ = ((unsigned int*)(right_value114=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
unsigned int* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((unsigned int*)(right_value115=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = wcscmp(left,right)!=0;
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = wcscmp(left,right)!=0;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1195)),right);
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = !come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1200)),right);
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
unsigned int* result_233;
unsigned int* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&result_233, 0, sizeof(unsigned int*));
    result_233=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value116=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1205))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    wcscpy(result_233,left);
    __freed_obj__ = 0;
    wcscat(result_233,right);
    __freed_obj__ = 0;
    __result130__ = __result_obj__ = result_233;
    if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
    if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
unsigned int* result_234;
unsigned int* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&result_234, 0, sizeof(unsigned int*));
    result_234=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value117=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1215))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    wcscpy(result_234,left);
    __freed_obj__ = 0;
    wcscat(result_234,right);
    __freed_obj__ = 0;
    __result131__ = __result_obj__ = result_234;
    if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
    if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_235;
_Bool _if_conditional95;
int __result132__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_235, 0, sizeof(char*));
    __freed_obj__ = 0;
    head_235=strstr(str,search_str);
    __freed_obj__ = 0;
    if(_if_conditional95=head_235==((void*)0),    __freed_obj__ = 0, 
    _if_conditional95) {
        __result132__ = default_value;
        __freed_obj__ = 0;
        return __result132__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result133__ = head_235-str;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int ovec_max_236;
int result_240;
int offset_241;
const char* err_242;
int erro_ofs_243;
int options_244;
char* str_245;
struct real_pcre* re_246;
_Bool _while_condtional14;
int options_247;
int len_248;
int regex_result_249;
int i_250;
_Bool _for_condtionalA32;
int i_251;
_Bool _for_condtionalA33;
_Bool _if_conditional96;
int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_236, 0, sizeof(int));
memset(&result_240, 0, sizeof(int));
memset(&offset_241, 0, sizeof(int));
memset(&erro_ofs_243, 0, sizeof(int));
memset(&options_244, 0, sizeof(int));
memset(&str_245, 0, sizeof(char*));
memset(&re_246, 0, sizeof(struct real_pcre*));
memset(&options_247, 0, sizeof(int));
memset(&len_248, 0, sizeof(int));
memset(&regex_result_249, 0, sizeof(int));
memset(&i_250, 0, sizeof(int));
memset(&i_251, 0, sizeof(int));
    ovec_max_236=16;
    __freed_obj__ = 0;
    int start_237[ovec_max_236];
    memset(&start_237, 0, sizeof(int)    *(ovec_max_236)    );
    __freed_obj__ = 0;
    int end_238[ovec_max_236];
    memset(&end_238, 0, sizeof(int)    *(ovec_max_236)    );
    __freed_obj__ = 0;
    int ovec_value_239[ovec_max_236*3];
    memset(&ovec_value_239, 0, sizeof(int)    *(ovec_max_236*3)    );
    __freed_obj__ = 0;
    result_240=default_value;
    __freed_obj__ = 0;
    offset_241=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_244=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1251))->options;
    __freed_obj__ = 0;
    str_245=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1252))->str;
    __freed_obj__ = 0;
    re_246=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1254))->re;
    __freed_obj__ = 0;
    while(_while_condtional14=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional14) {
        options_247=2097152;
        __freed_obj__ = 0;
        len_248=strlen(self);
        __freed_obj__ = 0;
        regex_result_249=pcre_exec(re_246,(struct pcre_extra*)0,self,len_248,offset_241,options_247,ovec_value_239,ovec_max_236*3);
        __freed_obj__ = 0;
        for(
        i_250=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA32=        i_250<ovec_max_236 ,        __freed_obj__ = 0, 
        _for_condtionalA32;        i_250++ ,        __freed_obj__ = 0, 
        0        ){
            start_237[i_250]=ovec_value_239[i_250*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_251=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA33=        i_251<ovec_max_236 ,        __freed_obj__ = 0, 
        _for_condtionalA33;        i_251++ ,        __freed_obj__ = 0, 
        0        ){
            end_238[i_251]=ovec_value_239[i_251*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional96=regex_result_249==1||regex_result_249>0,        __freed_obj__ = 0, 
        _if_conditional96) {
            result_240=start_237[0];
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
    __result134__ = result_240;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_252;
_Bool _if_conditional97;
void* right_value118;
char* __result135__;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value119;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_252, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
    len_252=strlen(self);
    __freed_obj__ = 0;
    if(_if_conditional97=strcmp(self,"")==0,    __freed_obj__ = 0, 
    _if_conditional97) {
        __result135__ = __result_obj__ = ((char*)(right_value118=__builtin_string(self)));
        __freed_obj__ = 0;
        return __result135__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional98=index<0,    __freed_obj__ = 0, 
    _if_conditional98) {
        index+=len_252;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional99=index>=len_252,    __freed_obj__ = 0, 
    _if_conditional99) {
        index=len_252-1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional100=index<0,    __freed_obj__ = 0, 
    _if_conditional100) {
        index=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self[index]=c;
    __freed_obj__ = 0;
    __result136__ = __result_obj__ = ((char*)(right_value119=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_253;
void* right_value120;
char* result_254;
int i_255;
_Bool _for_condtionalA34;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_253, 0, sizeof(int));
memset(&right_value120, 0, sizeof(void*));
memset(&result_254, 0, sizeof(char*));
memset(&i_255, 0, sizeof(int));
    len_253=strlen(str)*n+1;
    __freed_obj__ = 0;
    result_254=(char*)come_increment_ref_count(((char*)(right_value120=(char*)come_calloc(1, sizeof(char)*(1*(len_253)), "libcomelang2-str.c", 1313))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    result_254[0]=0;
    __freed_obj__ = 0;
    for(
    i_255=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA34=    i_255<n ,    __freed_obj__ = 0, 
    _for_condtionalA34;    i_255++ ,    __freed_obj__ = 0, 
    0    ){
        strcat(result_254,str);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result137__ = __result_obj__ = result_254;
    if(result_254 && !__freed_obj__) { result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
    if(result_254 && !__freed_obj__) { result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_256;
int ovec_max_257;
const char* err_261;
int erro_ofs_262;
int options_263;
char* str_264;
struct real_pcre* re_265;
void* right_value121;
void* right_value122;
struct buffer* result_266;
_Bool _while_condtional15;
int options_267;
int len_268;
int regex_result_269;
int i_270;
_Bool _for_condtionalA35;
int i_271;
_Bool _for_condtionalA36;
_Bool _if_conditional101;
void* right_value123;
char* str_272;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value124;
char* str_273;
void* right_value125;
char* str_274;
void* right_value126;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_256, 0, sizeof(int));
memset(&ovec_max_257, 0, sizeof(int));
memset(&erro_ofs_262, 0, sizeof(int));
memset(&options_263, 0, sizeof(int));
memset(&str_264, 0, sizeof(char*));
memset(&re_265, 0, sizeof(struct real_pcre*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct buffer*));
memset(&options_267, 0, sizeof(int));
memset(&len_268, 0, sizeof(int));
memset(&regex_result_269, 0, sizeof(int));
memset(&i_270, 0, sizeof(int));
memset(&i_271, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&str_272, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&str_273, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_274, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
    offset_256=0;
    __freed_obj__ = 0;
    ovec_max_257=16;
    __freed_obj__ = 0;
    int start_258[ovec_max_257];
    memset(&start_258, 0, sizeof(int)    *(ovec_max_257)    );
    __freed_obj__ = 0;
    int end_259[ovec_max_257];
    memset(&end_259, 0, sizeof(int)    *(ovec_max_257)    );
    __freed_obj__ = 0;
    int ovec_value_260[ovec_max_257*3];
    memset(&ovec_value_260, 0, sizeof(int)    *(ovec_max_257*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_263=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1336))->options;
    __freed_obj__ = 0;
    str_264=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1337))->str;
    __freed_obj__ = 0;
    re_265=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1339))->re;
    __freed_obj__ = 0;
    result_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1341))), "libcomelang2-str.c", 1341)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value122;
    __freed_obj__ = 0;
    while(_while_condtional15=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional15) {
        options_267=2097152;
        __freed_obj__ = 0;
        len_268=strlen(self);
        __freed_obj__ = 0;
        regex_result_269=pcre_exec(re_265,(struct pcre_extra*)0,self,len_268,offset_256,options_267,ovec_value_260,ovec_max_257*3);
        __freed_obj__ = 0;
        for(
        i_270=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA35=        i_270<ovec_max_257 ,        __freed_obj__ = 0, 
        _for_condtionalA35;        i_270++ ,        __freed_obj__ = 0, 
        0        ){
            start_258[i_270]=ovec_value_260[i_270*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_271=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA36=        i_271<ovec_max_257 ,        __freed_obj__ = 0, 
        _for_condtionalA36;        i_271++ ,        __freed_obj__ = 0, 
        0        ){
            end_259[i_271]=ovec_value_260[i_271*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional101=regex_result_269==1,        __freed_obj__ = 0, 
        _if_conditional101) {
            str_272=(char*)come_increment_ref_count(((char*)(right_value123=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1358)),offset_256,start_258[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_266, "libcomelang2-str.c", 1360)),str_272);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_266, "libcomelang2-str.c", 1361)),replace);
            __freed_obj__ = 0;
            if(_if_conditional102=offset_256==end_259[0],            __freed_obj__ = 0, 
            _if_conditional102) {
                offset_256++;
                __freed_obj__ = 0;
            }
            else {
                offset_256=end_259[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1375))->global,            __freed_obj__ = 0, 
            _if_conditional103) {
                str_273=(char*)come_increment_ref_count(((char*)(right_value124=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1371)),offset_256,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_266, "libcomelang2-str.c", 1372)),str_273);
                __freed_obj__ = 0;
                if(str_273 && !__freed_obj__) { str_273 = come_decrement_ref_count(str_273, (void*)0, (void*)0, 0, 0, 0); }
                if(str_272 && !__freed_obj__) { str_272 = come_decrement_ref_count(str_272, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_273 && !__freed_obj__) { str_273 = come_decrement_ref_count(str_273, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_272 && !__freed_obj__) { str_272 = come_decrement_ref_count(str_272, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_274=(char*)come_increment_ref_count(((char*)(right_value125=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1378)),offset_256,-1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value125;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_266, "libcomelang2-str.c", 1379)),str_274);
            __freed_obj__ = 0;
            if(str_274 && !__freed_obj__) { str_274 = come_decrement_ref_count(str_274, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_274 && !__freed_obj__) { str_274 = come_decrement_ref_count(str_274, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result138__ = __result_obj__ = ((char*)(right_value126=buffer_to_string(((struct buffer*)come_null_check(result_266, "libcomelang2-str.c", 1384)))));
    if(result_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
    if(result_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_275;
int ovec_max_276;
const char* err_280;
int erro_ofs_281;
int options_282;
char* str_283;
struct real_pcre* re_284;
void* right_value127;
void* right_value128;
struct buffer* result_285;
int n_286;
_Bool _while_condtional16;
int options_287;
int len_288;
int regex_result_289;
int i_290;
_Bool _for_condtionalA37;
int i_291;
_Bool _for_condtionalA38;
_Bool _if_conditional104;
void* right_value129;
char* str_292;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value130;
char* str_293;
_Bool _if_conditional107;
void* right_value131;
char* str_294;
void* right_value132;
char* str_295;
void* right_value133;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_275, 0, sizeof(int));
memset(&ovec_max_276, 0, sizeof(int));
memset(&erro_ofs_281, 0, sizeof(int));
memset(&options_282, 0, sizeof(int));
memset(&str_283, 0, sizeof(char*));
memset(&re_284, 0, sizeof(struct real_pcre*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&result_285, 0, sizeof(struct buffer*));
memset(&n_286, 0, sizeof(int));
memset(&options_287, 0, sizeof(int));
memset(&len_288, 0, sizeof(int));
memset(&regex_result_289, 0, sizeof(int));
memset(&i_290, 0, sizeof(int));
memset(&i_291, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&str_292, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
memset(&str_293, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&str_294, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&str_295, 0, sizeof(char*));
memset(&right_value133, 0, sizeof(void*));
    offset_275=0;
    __freed_obj__ = 0;
    ovec_max_276=16;
    __freed_obj__ = 0;
    int start_277[ovec_max_276];
    memset(&start_277, 0, sizeof(int)    *(ovec_max_276)    );
    __freed_obj__ = 0;
    int end_278[ovec_max_276];
    memset(&end_278, 0, sizeof(int)    *(ovec_max_276)    );
    __freed_obj__ = 0;
    int ovec_value_279[ovec_max_276*3];
    memset(&ovec_value_279, 0, sizeof(int)    *(ovec_max_276*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_282=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1399))->options;
    __freed_obj__ = 0;
    str_283=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1400))->str;
    __freed_obj__ = 0;
    re_284=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1402))->re;
    __freed_obj__ = 0;
    result_285=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value128=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value127=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1404))), "libcomelang2-str.c", 1404)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    n_286=0;
    __freed_obj__ = 0;
    while(_while_condtional16=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional16) {
        options_287=2097152;
        __freed_obj__ = 0;
        len_288=strlen(self);
        __freed_obj__ = 0;
        regex_result_289=pcre_exec(re_284,(struct pcre_extra*)0,self,len_288,offset_275,options_287,ovec_value_279,ovec_max_276*3);
        __freed_obj__ = 0;
        for(
        i_290=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA37=        i_290<ovec_max_276 ,        __freed_obj__ = 0, 
        _for_condtionalA37;        i_290++ ,        __freed_obj__ = 0, 
        0        ){
            start_277[i_290]=ovec_value_279[i_290*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_291=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA38=        i_291<ovec_max_276 ,        __freed_obj__ = 0, 
        _for_condtionalA38;        i_291++ ,        __freed_obj__ = 0, 
        0        ){
            end_278[i_291]=ovec_value_279[i_291*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional104=regex_result_289==1,        __freed_obj__ = 0, 
        _if_conditional104) {
            n_286++;
            __freed_obj__ = 0;
            str_292=(char*)come_increment_ref_count(((char*)(right_value129=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1424)),offset_275,start_277[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1426)),str_292);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1427)),replace);
            __freed_obj__ = 0;
            if(_if_conditional105=offset_275==end_278[0],            __freed_obj__ = 0, 
            _if_conditional105) {
                offset_275++;
                __freed_obj__ = 0;
            }
            else {
                offset_275=end_278[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1441))->global,            __freed_obj__ = 0, 
            _if_conditional106) {
                str_293=(char*)come_increment_ref_count(((char*)(right_value130=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1437)),offset_275,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1438)),str_293);
                __freed_obj__ = 0;
                if(str_293 && !__freed_obj__) { str_293 = come_decrement_ref_count(str_293, (void*)0, (void*)0, 0, 0, 0); }
                if(str_292 && !__freed_obj__) { str_292 = come_decrement_ref_count(str_292, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_293 && !__freed_obj__) { str_293 = come_decrement_ref_count(str_293, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional107=n_286==count,            __freed_obj__ = 0, 
            _if_conditional107) {
                str_294=(char*)come_increment_ref_count(((char*)(right_value131=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1442)),offset_275,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value131;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1443)),str_294);
                __freed_obj__ = 0;
                if(str_294 && !__freed_obj__) { str_294 = come_decrement_ref_count(str_294, (void*)0, (void*)0, 0, 0, 0); }
                if(str_292 && !__freed_obj__) { str_292 = come_decrement_ref_count(str_292, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_294 && !__freed_obj__) { str_294 = come_decrement_ref_count(str_294, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_292 && !__freed_obj__) { str_292 = come_decrement_ref_count(str_292, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_295=(char*)come_increment_ref_count(((char*)(right_value132=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1449)),offset_275,-1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1450)),str_295);
            __freed_obj__ = 0;
            if(str_295 && !__freed_obj__) { str_295 = come_decrement_ref_count(str_295, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_295 && !__freed_obj__) { str_295 = come_decrement_ref_count(str_295, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result139__ = __result_obj__ = ((char*)(right_value133=buffer_to_string(((struct buffer*)come_null_check(result_285, "libcomelang2-str.c", 1455)))));
    if(result_285 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
    if(result_285 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value134;
void* right_value135;
struct list$1charph* result_296;
void* right_value136;
void* right_value137;
struct buffer* buf_297;
int i_298;
_Bool _for_condtionalA39;
_Bool _if_conditional108;
void* right_value138;
_Bool _if_conditional109;
void* right_value139;
struct list$1charph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_296, 0, sizeof(struct list$1charph*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&buf_297, 0, sizeof(struct buffer*));
memset(&i_298, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    __freed_obj__ = 0;
    result_296=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1463))), "libcomelang2-str.c", 1463)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value135;
    __freed_obj__ = 0;
    buf_297=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value136=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1465))), "libcomelang2-str.c", 1465)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value137;
    __freed_obj__ = 0;
    for(
    i_298=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA39=    i_298<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1477))) ,    __freed_obj__ = 0, 
    _for_condtionalA39;    i_298++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional108=strstr(self+i_298,str)==self+i_298,        __freed_obj__ = 0, 
        _if_conditional108) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_296, "libcomelang2-str.c", 1469)),(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(((struct buffer*)come_null_check(buf_297, "libcomelang2-str.c", 1469))->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138;
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(buf_297, "libcomelang2-str.c", 1470)));
            __freed_obj__ = 0;
            i_298+=strlen(str)-1;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(buf_297, "libcomelang2-str.c", 1474)),self[i_298]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional109=buffer_length(((struct buffer*)come_null_check(buf_297, "libcomelang2-str.c", 1481)))!=0,    __freed_obj__ = 0, 
    _if_conditional109) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_296, "libcomelang2-str.c", 1478)),(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(((struct buffer*)come_null_check(buf_297, "libcomelang2-str.c", 1478))->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result140__ = __result_obj__ = result_296;
    if(result_296 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(buf_297 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_297, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
    if(result_296 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_297 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_297, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
void* right_value141;
struct list$1charph* result_299;
int offset_300;
int ovec_max_301;
const char* err_305;
int erro_ofs_306;
int options_307;
char* str_308;
struct real_pcre* re_309;
_Bool _while_condtional17;
int options_310;
int len_311;
int regex_result_312;
int i_313;
_Bool _for_condtionalA40;
int i_314;
_Bool _for_condtionalA41;
_Bool _if_conditional110;
void* right_value142;
char* str_315;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value143;
char* str_316;
_Bool _if_conditional113;
int i_317;
_Bool _for_condtionalA42;
void* right_value144;
char* match_string_318;
struct list$1charph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&result_299, 0, sizeof(struct list$1charph*));
memset(&offset_300, 0, sizeof(int));
memset(&ovec_max_301, 0, sizeof(int));
memset(&erro_ofs_306, 0, sizeof(int));
memset(&options_307, 0, sizeof(int));
memset(&str_308, 0, sizeof(char*));
memset(&re_309, 0, sizeof(struct real_pcre*));
memset(&options_310, 0, sizeof(int));
memset(&len_311, 0, sizeof(int));
memset(&regex_result_312, 0, sizeof(int));
memset(&i_313, 0, sizeof(int));
memset(&i_314, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&str_315, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
memset(&str_316, 0, sizeof(char*));
memset(&i_317, 0, sizeof(int));
memset(&right_value144, 0, sizeof(void*));
memset(&match_string_318, 0, sizeof(char*));
    result_299=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value140=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1486))), "libcomelang2-str.c", 1486)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value141;
    __freed_obj__ = 0;
    offset_300=0;
    __freed_obj__ = 0;
    ovec_max_301=16;
    __freed_obj__ = 0;
    int start_302[ovec_max_301];
    memset(&start_302, 0, sizeof(int)    *(ovec_max_301)    );
    __freed_obj__ = 0;
    int end_303[ovec_max_301];
    memset(&end_303, 0, sizeof(int)    *(ovec_max_301)    );
    __freed_obj__ = 0;
    int ovec_value_304[ovec_max_301*3];
    memset(&ovec_value_304, 0, sizeof(int)    *(ovec_max_301*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_307=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1498))->options;
    __freed_obj__ = 0;
    str_308=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1499))->str;
    __freed_obj__ = 0;
    re_309=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1501))->re;
    __freed_obj__ = 0;
    while(_while_condtional17=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional17) {
        options_310=2097152;
        __freed_obj__ = 0;
        len_311=strlen(self);
        __freed_obj__ = 0;
        regex_result_312=pcre_exec(re_309,(struct pcre_extra*)0,self,len_311,offset_300,options_310,ovec_value_304,ovec_max_301*3);
        __freed_obj__ = 0;
        for(
        i_313=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA40=        i_313<ovec_max_301 ,        __freed_obj__ = 0, 
        _for_condtionalA40;        i_313++ ,        __freed_obj__ = 0, 
        0        ){
            start_302[i_313]=ovec_value_304[i_313*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_314=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA41=        i_314<ovec_max_301 ,        __freed_obj__ = 0, 
        _for_condtionalA41;        i_314++ ,        __freed_obj__ = 0, 
        0        ){
            end_303[i_314]=ovec_value_304[i_314*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional110=regex_result_312==1,        __freed_obj__ = 0, 
        _if_conditional110) {
            str_315=(char*)come_increment_ref_count(((char*)(right_value142=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1519)),start_302[0],end_303[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value142;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_299, "libcomelang2-str.c", 1521)),(char*)come_increment_ref_count(str_315));
            __freed_obj__ = 0;
            if(_if_conditional111=offset_300==end_303[0],            __freed_obj__ = 0, 
            _if_conditional111) {
                offset_300++;
                __freed_obj__ = 0;
            }
            else {
                offset_300=end_303[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_315 && !__freed_obj__) { str_315 = come_decrement_ref_count(str_315, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional112=regex_result_312>1,            __freed_obj__ = 0, 
            _if_conditional112) {
                str_316=(char*)come_increment_ref_count(((char*)(right_value143=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1532)),start_302[0],end_303[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_299, "libcomelang2-str.c", 1533)),(char*)come_increment_ref_count(str_316));
                __freed_obj__ = 0;
                if(_if_conditional113=offset_300==end_303[0],                __freed_obj__ = 0, 
                _if_conditional113) {
                    offset_300++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_300=end_303[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_317=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA42=                i_317<regex_result_312 ,                __freed_obj__ = 0, 
                _for_condtionalA42;                i_317++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_318=(char*)come_increment_ref_count(((char*)(right_value144=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1543)),start_302[i_317],end_303[i_317]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value144;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_299, "libcomelang2-str.c", 1544)),(char*)come_increment_ref_count(match_string_318));
                    __freed_obj__ = 0;
                    if(match_string_318 && !__freed_obj__) { match_string_318 = come_decrement_ref_count(match_string_318, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_316 && !__freed_obj__) { str_316 = come_decrement_ref_count(str_316, (void*)0, (void*)0, 0, 0, 0); }
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
    __result141__ = __result_obj__ = result_299;
    if(result_299 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
    if(result_299 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_319;
int erro_ofs_320;
int options_321;
char* str_322;
struct real_pcre* re_323;
void* right_value145;
void* right_value146;
struct list$1charph* result_324;
int offset_325;
int ovec_max_326;
_Bool _while_condtional18;
int options_330;
int len_331;
int regex_result_332;
int i_333;
_Bool _for_condtionalA43;
int i_334;
_Bool _for_condtionalA44;
_Bool _if_conditional114;
void* right_value147;
char* str_335;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value148;
char* str_336;
_Bool _if_conditional117;
int i_337;
_Bool _for_condtionalA45;
void* right_value149;
char* match_str_338;
_Bool _if_conditional118;
void* right_value150;
char* str_339;
struct list$1charph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_320, 0, sizeof(int));
memset(&options_321, 0, sizeof(int));
memset(&str_322, 0, sizeof(char*));
memset(&re_323, 0, sizeof(struct real_pcre*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&result_324, 0, sizeof(struct list$1charph*));
memset(&offset_325, 0, sizeof(int));
memset(&ovec_max_326, 0, sizeof(int));
memset(&options_330, 0, sizeof(int));
memset(&len_331, 0, sizeof(int));
memset(&regex_result_332, 0, sizeof(int));
memset(&i_333, 0, sizeof(int));
memset(&i_334, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&str_335, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&str_336, 0, sizeof(char*));
memset(&i_337, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&match_str_338, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&str_339, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_321=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1562))->options;
    __freed_obj__ = 0;
    str_322=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1563))->str;
    __freed_obj__ = 0;
    re_323=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1565))->re;
    __freed_obj__ = 0;
    result_324=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1567))), "libcomelang2-str.c", 1567)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value146;
    __freed_obj__ = 0;
    offset_325=0;
    __freed_obj__ = 0;
    ovec_max_326=16;
    __freed_obj__ = 0;
    int start_327[ovec_max_326];
    memset(&start_327, 0, sizeof(int)    *(ovec_max_326)    );
    __freed_obj__ = 0;
    int end_328[ovec_max_326];
    memset(&end_328, 0, sizeof(int)    *(ovec_max_326)    );
    __freed_obj__ = 0;
    int ovec_value_329[ovec_max_326*3];
    memset(&ovec_value_329, 0, sizeof(int)    *(ovec_max_326*3)    );
    __freed_obj__ = 0;
    while(_while_condtional18=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional18) {
        options_330=2097152;
        __freed_obj__ = 0;
        len_331=strlen(self);
        __freed_obj__ = 0;
        regex_result_332=pcre_exec(re_323,(struct pcre_extra*)0,self,len_331,offset_325,options_330,ovec_value_329,ovec_max_326*3);
        __freed_obj__ = 0;
        for(
        i_333=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA43=        i_333<ovec_max_326 ,        __freed_obj__ = 0, 
        _for_condtionalA43;        i_333++ ,        __freed_obj__ = 0, 
        0        ){
            start_327[i_333]=ovec_value_329[i_333*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_334=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA44=        i_334<ovec_max_326 ,        __freed_obj__ = 0, 
        _for_condtionalA44;        i_334++ ,        __freed_obj__ = 0, 
        0        ){
            end_328[i_334]=ovec_value_329[i_334*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=regex_result_332==1,        __freed_obj__ = 0, 
        _if_conditional114) {
            str_335=(char*)come_increment_ref_count(((char*)(right_value147=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1592)),offset_325,start_327[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value147;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_324, "libcomelang2-str.c", 1593)),(char*)come_increment_ref_count(str_335));
            __freed_obj__ = 0;
            if(_if_conditional115=offset_325==end_328[0],            __freed_obj__ = 0, 
            _if_conditional115) {
                offset_325++;
                __freed_obj__ = 0;
            }
            else {
                offset_325=end_328[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_335 && !__freed_obj__) { str_335 = come_decrement_ref_count(str_335, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional116=regex_result_332>1,            __freed_obj__ = 0, 
            _if_conditional116) {
                str_336=(char*)come_increment_ref_count(((char*)(right_value148=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1604)),offset_325,start_327[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value148;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_324, "libcomelang2-str.c", 1605)),(char*)come_increment_ref_count(str_336));
                __freed_obj__ = 0;
                if(_if_conditional117=offset_325==end_328[0],                __freed_obj__ = 0, 
                _if_conditional117) {
                    offset_325++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_325=end_328[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_337=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA45=                i_337<regex_result_332 ,                __freed_obj__ = 0, 
                _for_condtionalA45;                i_337++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_338=(char*)come_increment_ref_count(((char*)(right_value149=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1615)),start_327[i_337],end_328[i_337]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value149;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_324, "libcomelang2-str.c", 1616)),(char*)come_increment_ref_count(match_str_338));
                    __freed_obj__ = 0;
                    if(match_str_338 && !__freed_obj__) { match_str_338 = come_decrement_ref_count(match_str_338, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_336 && !__freed_obj__) { str_336 = come_decrement_ref_count(str_336, (void*)0, (void*)0, 0, 0, 0); }
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
    if(_if_conditional118=offset_325<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1631))),    __freed_obj__ = 0, 
    _if_conditional118) {
        str_339=(char*)come_increment_ref_count(((char*)(right_value150=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1627)),offset_325,-1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value150;
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_324, "libcomelang2-str.c", 1628)),(char*)come_increment_ref_count(str_339));
        __freed_obj__ = 0;
        if(str_339 && !__freed_obj__) { str_339 = come_decrement_ref_count(str_339, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result142__ = __result_obj__ = result_324;
    if(result_324 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_324, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
    if(result_324 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_324, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_340;
int ovec_max_341;
const char* err_345;
int erro_ofs_346;
int options_347;
char* str_348;
struct real_pcre* re_349;
_Bool _while_condtional19;
int options_350;
int len_351;
int regex_result_352;
int i_353;
_Bool _for_condtionalA46;
int i_354;
_Bool _for_condtionalA47;
_Bool _if_conditional119;
_Bool __result143__;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_340, 0, sizeof(int));
memset(&ovec_max_341, 0, sizeof(int));
memset(&erro_ofs_346, 0, sizeof(int));
memset(&options_347, 0, sizeof(int));
memset(&str_348, 0, sizeof(char*));
memset(&re_349, 0, sizeof(struct real_pcre*));
memset(&options_350, 0, sizeof(int));
memset(&len_351, 0, sizeof(int));
memset(&regex_result_352, 0, sizeof(int));
memset(&i_353, 0, sizeof(int));
memset(&i_354, 0, sizeof(int));
    offset_340=0;
    __freed_obj__ = 0;
    ovec_max_341=16;
    __freed_obj__ = 0;
    int start_342[ovec_max_341];
    memset(&start_342, 0, sizeof(int)    *(ovec_max_341)    );
    __freed_obj__ = 0;
    int end_343[ovec_max_341];
    memset(&end_343, 0, sizeof(int)    *(ovec_max_341)    );
    __freed_obj__ = 0;
    int ovec_value_344[ovec_max_341*3];
    memset(&ovec_value_344, 0, sizeof(int)    *(ovec_max_341*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_347=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1646))->options;
    __freed_obj__ = 0;
    str_348=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1647))->str;
    __freed_obj__ = 0;
    re_349=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1649))->re;
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        options_350=2097152;
        __freed_obj__ = 0;
        len_351=strlen(self);
        __freed_obj__ = 0;
        regex_result_352=pcre_exec(re_349,(struct pcre_extra*)0,self,len_351,offset_340,options_350,ovec_value_344,ovec_max_341*3);
        __freed_obj__ = 0;
        for(
        i_353=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA46=        i_353<ovec_max_341 ,        __freed_obj__ = 0, 
        _for_condtionalA46;        i_353++ ,        __freed_obj__ = 0, 
        0        ){
            start_342[i_353]=ovec_value_344[i_353*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_354=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA47=        i_354<ovec_max_341 ,        __freed_obj__ = 0, 
        _for_condtionalA47;        i_354++ ,        __freed_obj__ = 0, 
        0        ){
            end_343[i_354]=ovec_value_344[i_354*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=regex_result_352>0,        __freed_obj__ = 0, 
        _if_conditional119) {
            __result143__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
        }
        else {
            __result144__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result145__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_355;
int erro_ofs_356;
int options_357;
char* str_358;
struct real_pcre* re_359;
void* right_value151;
void* right_value152;
struct list$1charph* result_360;
int offset_361;
int ovec_max_362;
int n_366;
_Bool _while_condtional20;
int options_367;
int len_368;
int regex_result_369;
int i_370;
_Bool _for_condtionalA48;
int i_371;
_Bool _for_condtionalA49;
_Bool _if_conditional120;
void* right_value153;
char* str_372;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value154;
char* str_373;
_Bool _if_conditional123;
int i_374;
_Bool _for_condtionalA50;
void* right_value155;
char* match_str_375;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value156;
char* str_376;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_356, 0, sizeof(int));
memset(&options_357, 0, sizeof(int));
memset(&str_358, 0, sizeof(char*));
memset(&re_359, 0, sizeof(struct real_pcre*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&result_360, 0, sizeof(struct list$1charph*));
memset(&offset_361, 0, sizeof(int));
memset(&ovec_max_362, 0, sizeof(int));
memset(&n_366, 0, sizeof(int));
memset(&options_367, 0, sizeof(int));
memset(&len_368, 0, sizeof(int));
memset(&regex_result_369, 0, sizeof(int));
memset(&i_370, 0, sizeof(int));
memset(&i_371, 0, sizeof(int));
memset(&right_value153, 0, sizeof(void*));
memset(&str_372, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&str_373, 0, sizeof(char*));
memset(&i_374, 0, sizeof(int));
memset(&right_value155, 0, sizeof(void*));
memset(&match_str_375, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&str_376, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_357=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1684))->options;
    __freed_obj__ = 0;
    str_358=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1685))->str;
    __freed_obj__ = 0;
    re_359=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1687))->re;
    __freed_obj__ = 0;
    result_360=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value151=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1689))), "libcomelang2-str.c", 1689)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value152;
    __freed_obj__ = 0;
    offset_361=0;
    __freed_obj__ = 0;
    ovec_max_362=16;
    __freed_obj__ = 0;
    int start_363[ovec_max_362];
    memset(&start_363, 0, sizeof(int)    *(ovec_max_362)    );
    __freed_obj__ = 0;
    int end_364[ovec_max_362];
    memset(&end_364, 0, sizeof(int)    *(ovec_max_362)    );
    __freed_obj__ = 0;
    int ovec_value_365[ovec_max_362*3];
    memset(&ovec_value_365, 0, sizeof(int)    *(ovec_max_362*3)    );
    __freed_obj__ = 0;
    n_366=0;
    __freed_obj__ = 0;
    while(_while_condtional20=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional20) {
        options_367=2097152;
        __freed_obj__ = 0;
        len_368=strlen(self);
        __freed_obj__ = 0;
        regex_result_369=pcre_exec(re_359,(struct pcre_extra*)0,self,len_368,offset_361,options_367,ovec_value_365,ovec_max_362*3);
        __freed_obj__ = 0;
        for(
        i_370=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA48=        i_370<ovec_max_362 ,        __freed_obj__ = 0, 
        _for_condtionalA48;        i_370++ ,        __freed_obj__ = 0, 
        0        ){
            start_363[i_370]=ovec_value_365[i_370*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_371=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA49=        i_371<ovec_max_362 ,        __freed_obj__ = 0, 
        _for_condtionalA49;        i_371++ ,        __freed_obj__ = 0, 
        0        ){
            end_364[i_371]=ovec_value_365[i_371*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional120=regex_result_369==1,        __freed_obj__ = 0, 
        _if_conditional120) {
            str_372=(char*)come_increment_ref_count(((char*)(right_value153=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1716)),offset_361,start_363[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value153;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_360, "libcomelang2-str.c", 1717)),(char*)come_increment_ref_count(str_372));
            __freed_obj__ = 0;
            if(_if_conditional121=offset_361==end_364[0],            __freed_obj__ = 0, 
            _if_conditional121) {
                offset_361++;
                __freed_obj__ = 0;
            }
            else {
                offset_361=end_364[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_372 && !__freed_obj__) { str_372 = come_decrement_ref_count(str_372, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional122=regex_result_369>1,            __freed_obj__ = 0, 
            _if_conditional122) {
                str_373=(char*)come_increment_ref_count(((char*)(right_value154=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1728)),offset_361,start_363[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value154;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_360, "libcomelang2-str.c", 1729)),(char*)come_increment_ref_count(str_373));
                __freed_obj__ = 0;
                if(_if_conditional123=offset_361==end_364[0],                __freed_obj__ = 0, 
                _if_conditional123) {
                    offset_361++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_361=end_364[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_374=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA50=                i_374<regex_result_369 ,                __freed_obj__ = 0, 
                _for_condtionalA50;                i_374++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_375=(char*)come_increment_ref_count(((char*)(right_value155=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1739)),start_363[i_374],end_364[i_374]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value155;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_360, "libcomelang2-str.c", 1740)),(char*)come_increment_ref_count(match_str_375));
                    __freed_obj__ = 0;
                    if(match_str_375 && !__freed_obj__) { match_str_375 = come_decrement_ref_count(match_str_375, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_373 && !__freed_obj__) { str_373 = come_decrement_ref_count(str_373, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_366++;
        __freed_obj__ = 0;
        if(_if_conditional124=maxsplit==n_366,        __freed_obj__ = 0, 
        _if_conditional124) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional125=offset_361<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1761))),    __freed_obj__ = 0, 
    _if_conditional125) {
        str_376=(char*)come_increment_ref_count(((char*)(right_value156=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1757)),offset_361,-1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156;
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_360, "libcomelang2-str.c", 1758)),(char*)come_increment_ref_count(str_376));
        __freed_obj__ = 0;
        if(str_376 && !__freed_obj__) { str_376 = come_decrement_ref_count(str_376, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = result_360;
    if(result_360 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_360, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
    if(result_360 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_360, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_377;
int erro_ofs_378;
int options_379;
char* str_380;
struct real_pcre* re_381;
void* right_value157;
char* self2_382;
int ovec_max_383;
int result_387;
int offset_388;
int n_389;
_Bool _while_condtional21;
int options_390;
int len_391;
int regex_result_392;
int i_393;
_Bool _for_condtionalA51;
int i_394;
_Bool _for_condtionalA52;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_378, 0, sizeof(int));
memset(&options_379, 0, sizeof(int));
memset(&str_380, 0, sizeof(char*));
memset(&re_381, 0, sizeof(struct real_pcre*));
memset(&right_value157, 0, sizeof(void*));
memset(&self2_382, 0, sizeof(char*));
memset(&ovec_max_383, 0, sizeof(int));
memset(&result_387, 0, sizeof(int));
memset(&offset_388, 0, sizeof(int));
memset(&n_389, 0, sizeof(int));
memset(&options_390, 0, sizeof(int));
memset(&len_391, 0, sizeof(int));
memset(&regex_result_392, 0, sizeof(int));
memset(&i_393, 0, sizeof(int));
memset(&i_394, 0, sizeof(int));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_379=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1769))->options;
    __freed_obj__ = 0;
    str_380=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1770))->str;
    __freed_obj__ = 0;
    re_381=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1772))->re;
    __freed_obj__ = 0;
    self2_382=(char*)come_increment_ref_count(((char*)(right_value157=charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 1774))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    ovec_max_383=16;
    __freed_obj__ = 0;
    int start_384[ovec_max_383];
    memset(&start_384, 0, sizeof(int)    *(ovec_max_383)    );
    __freed_obj__ = 0;
    int end_385[ovec_max_383];
    memset(&end_385, 0, sizeof(int)    *(ovec_max_383)    );
    __freed_obj__ = 0;
    int ovec_value_386[ovec_max_383*3];
    memset(&ovec_value_386, 0, sizeof(int)    *(ovec_max_383*3)    );
    __freed_obj__ = 0;
    result_387=default_value;
    __freed_obj__ = 0;
    offset_388=0;
    __freed_obj__ = 0;
    n_389=0;
    __freed_obj__ = 0;
    while(_while_condtional21=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional21) {
        options_390=2097152;
        __freed_obj__ = 0;
        len_391=strlen(self2_382);
        __freed_obj__ = 0;
        regex_result_392=pcre_exec(re_381,(struct pcre_extra*)0,self2_382,len_391,offset_388,options_390,ovec_value_386,ovec_max_383*3);
        __freed_obj__ = 0;
        for(
        i_393=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA51=        i_393<ovec_max_383 ,        __freed_obj__ = 0, 
        _for_condtionalA51;        i_393++ ,        __freed_obj__ = 0, 
        0        ){
            start_384[i_393]=ovec_value_386[i_393*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_394=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA52=        i_394<ovec_max_383 ,        __freed_obj__ = 0, 
        _for_condtionalA52;        i_394++ ,        __freed_obj__ = 0, 
        0        ){
            end_385[i_394]=ovec_value_386[i_394*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional126=regex_result_392>0,        __freed_obj__ = 0, 
        _if_conditional126) {
            n_389++;
            __freed_obj__ = 0;
            if(_if_conditional127=offset_388==end_385[0],            __freed_obj__ = 0, 
            _if_conditional127) {
                offset_388++;
                __freed_obj__ = 0;
            }
            else {
                offset_388=end_385[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional128=n_389==count,            __freed_obj__ = 0, 
            _if_conditional128) {
                result_387=strlen(self)-end_385[0];
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
    __result147__ = result_387;
    if(self2_382 && !__freed_obj__) { self2_382 = come_decrement_ref_count(self2_382, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(self2_382 && !__freed_obj__) { self2_382 = come_decrement_ref_count(self2_382, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_395;
int ovec_max_396;
const char* err_400;
int erro_ofs_401;
int options_402;
char* str_403;
struct real_pcre* re_404;
int n_405;
_Bool _while_condtional22;
int options_406;
int len_407;
int regex_result_408;
int i_409;
_Bool _for_condtionalA53;
int i_410;
_Bool _for_condtionalA54;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool __result148__;
_Bool _if_conditional131;
_Bool __result149__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_395, 0, sizeof(int));
memset(&ovec_max_396, 0, sizeof(int));
memset(&erro_ofs_401, 0, sizeof(int));
memset(&options_402, 0, sizeof(int));
memset(&str_403, 0, sizeof(char*));
memset(&re_404, 0, sizeof(struct real_pcre*));
memset(&n_405, 0, sizeof(int));
memset(&options_406, 0, sizeof(int));
memset(&len_407, 0, sizeof(int));
memset(&regex_result_408, 0, sizeof(int));
memset(&i_409, 0, sizeof(int));
memset(&i_410, 0, sizeof(int));
    offset_395=0;
    __freed_obj__ = 0;
    ovec_max_396=16;
    __freed_obj__ = 0;
    int start_397[ovec_max_396];
    memset(&start_397, 0, sizeof(int)    *(ovec_max_396)    );
    __freed_obj__ = 0;
    int end_398[ovec_max_396];
    memset(&end_398, 0, sizeof(int)    *(ovec_max_396)    );
    __freed_obj__ = 0;
    int ovec_value_399[ovec_max_396*3];
    memset(&ovec_value_399, 0, sizeof(int)    *(ovec_max_396*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_402=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1838))->options;
    __freed_obj__ = 0;
    str_403=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1839))->str;
    __freed_obj__ = 0;
    re_404=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1841))->re;
    __freed_obj__ = 0;
    n_405=0;
    __freed_obj__ = 0;
    while(_while_condtional22=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional22) {
        options_406=2097152;
        __freed_obj__ = 0;
        len_407=strlen(self);
        __freed_obj__ = 0;
        regex_result_408=pcre_exec(re_404,(struct pcre_extra*)0,self,len_407,offset_395,options_406,ovec_value_399,ovec_max_396*3);
        __freed_obj__ = 0;
        for(
        i_409=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA53=        i_409<ovec_max_396 ,        __freed_obj__ = 0, 
        _for_condtionalA53;        i_409++ ,        __freed_obj__ = 0, 
        0        ){
            start_397[i_409]=ovec_value_399[i_409*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_410=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA54=        i_410<ovec_max_396 ,        __freed_obj__ = 0, 
        _for_condtionalA54;        i_410++ ,        __freed_obj__ = 0, 
        0        ){
            end_398[i_410]=ovec_value_399[i_410*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional129=regex_result_408>0,        __freed_obj__ = 0, 
        _if_conditional129) {
            n_405++;
            __freed_obj__ = 0;
            if(_if_conditional130=count==n_405,            __freed_obj__ = 0, 
            _if_conditional130) {
                __result148__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result148__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional131=offset_395==end_398[0],            __freed_obj__ = 0, 
            _if_conditional131) {
                offset_395++;
                __freed_obj__ = 0;
            }
            else {
                offset_395=end_398[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            __result149__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result149__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result150__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_411;
int ovec_max_412;
const char* err_416;
int erro_ofs_417;
int options_418;
char* str_419;
struct real_pcre* re_420;
void* right_value158;
void* right_value159;
struct buffer* result_421;
_Bool _while_condtional23;
int options_422;
int len_423;
int regex_result_424;
int i_425;
_Bool _for_condtionalA55;
int i_426;
_Bool _for_condtionalA56;
_Bool _if_conditional132;
void* right_value160;
char* str_427;
void* right_value161;
void* right_value162;
struct list$1charph* group_strings_428;
void* right_value163;
char* match_string_429;
void* right_value164;
void* right_value165;
char* block_result_430;
_Bool _if_conditional133;
void* right_value166;
char* __result151__;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value167;
char* str_431;
_Bool _if_conditional136;
void* right_value168;
char* str_432;
_Bool _if_conditional137;
void* right_value169;
void* right_value170;
struct list$1charph* group_strings_433;
int i_434;
_Bool _for_condtionalA57;
void* right_value171;
char* match_string_435;
void* right_value172;
char* match_string_436;
void* right_value173;
char* block_result_437;
_Bool _if_conditional138;
void* right_value174;
char* __result152__;
_Bool _if_conditional139;
void* right_value175;
char* str_438;
void* right_value176;
char* str_439;
void* right_value177;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_411, 0, sizeof(int));
memset(&ovec_max_412, 0, sizeof(int));
memset(&erro_ofs_417, 0, sizeof(int));
memset(&options_418, 0, sizeof(int));
memset(&str_419, 0, sizeof(char*));
memset(&re_420, 0, sizeof(struct real_pcre*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&result_421, 0, sizeof(struct buffer*));
memset(&options_422, 0, sizeof(int));
memset(&len_423, 0, sizeof(int));
memset(&regex_result_424, 0, sizeof(int));
memset(&i_425, 0, sizeof(int));
memset(&i_426, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&str_427, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&group_strings_428, 0, sizeof(struct list$1charph*));
memset(&right_value163, 0, sizeof(void*));
memset(&match_string_429, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&block_result_430, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&str_431, 0, sizeof(char*));
memset(&right_value168, 0, sizeof(void*));
memset(&str_432, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&group_strings_433, 0, sizeof(struct list$1charph*));
memset(&i_434, 0, sizeof(int));
memset(&right_value171, 0, sizeof(void*));
memset(&match_string_435, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&match_string_436, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&block_result_437, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&str_438, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
memset(&str_439, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
    offset_411=0;
    __freed_obj__ = 0;
    ovec_max_412=16;
    __freed_obj__ = 0;
    int start_413[ovec_max_412];
    memset(&start_413, 0, sizeof(int)    *(ovec_max_412)    );
    __freed_obj__ = 0;
    int end_414[ovec_max_412];
    memset(&end_414, 0, sizeof(int)    *(ovec_max_412)    );
    __freed_obj__ = 0;
    int ovec_value_415[ovec_max_412*3];
    memset(&ovec_value_415, 0, sizeof(int)    *(ovec_max_412*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_418=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1896))->options;
    __freed_obj__ = 0;
    str_419=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1897))->str;
    __freed_obj__ = 0;
    re_420=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1899))->re;
    __freed_obj__ = 0;
    result_421=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1901))), "libcomelang2-str.c", 1901)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value159;
    __freed_obj__ = 0;
    while(_while_condtional23=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional23) {
        options_422=2097152;
        __freed_obj__ = 0;
        len_423=strlen(self);
        __freed_obj__ = 0;
        regex_result_424=pcre_exec(re_420,(struct pcre_extra*)0,self,len_423,offset_411,options_422,ovec_value_415,ovec_max_412*3);
        __freed_obj__ = 0;
        for(
        i_425=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA55=        i_425<ovec_max_412 ,        __freed_obj__ = 0, 
        _for_condtionalA55;        i_425++ ,        __freed_obj__ = 0, 
        0        ){
            start_413[i_425]=ovec_value_415[i_425*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_426=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA56=        i_426<ovec_max_412 ,        __freed_obj__ = 0, 
        _for_condtionalA56;        i_426++ ,        __freed_obj__ = 0, 
        0        ){
            end_414[i_426]=ovec_value_415[i_426*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional132=regex_result_424==1,        __freed_obj__ = 0, 
        _if_conditional132) {
            str_427=(char*)come_increment_ref_count(((char*)(right_value160=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1917)),offset_411,start_413[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value160;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1919)),str_427);
            __freed_obj__ = 0;
            group_strings_428=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1921))), "libcomelang2-str.c", 1921)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value161;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value162);
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value162;
            __freed_obj__ = 0;
            match_string_429=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1923)),start_413[0],end_414[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value163);
            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value163;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_428, "libcomelang2-str.c", 1925)),(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1925)),start_413[0],end_414[0])))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value164);
            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value164;
            __freed_obj__ = 0;
            block_result_430=(char*)come_increment_ref_count(((char*)(right_value165=block(parent,match_string_429,group_strings_428))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value165);
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value165;
            __freed_obj__ = 0;
            if(_if_conditional133=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1933))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional133) {
                __result151__ = __result_obj__ = ((char*)(right_value166=buffer_to_string(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1930)))));
                if(str_427 && !__freed_obj__) { str_427 = come_decrement_ref_count(str_427, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_428 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_428, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_429 && !__freed_obj__) { match_string_429 = come_decrement_ref_count(match_string_429, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_430 && !__freed_obj__) { block_result_430 = come_decrement_ref_count(block_result_430, (void*)0, (void*)0, 0, 0, 0); }
                if(result_421 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_421, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result151__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1933)),block_result_430);
            __freed_obj__ = 0;
            if(_if_conditional134=offset_411==end_414[0],            __freed_obj__ = 0, 
            _if_conditional134) {
                offset_411++;
                __freed_obj__ = 0;
            }
            else {
                offset_411=end_414[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional135=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1947))->global,            __freed_obj__ = 0, 
            _if_conditional135) {
                str_431=(char*)come_increment_ref_count(((char*)(right_value167=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1943)),offset_411,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value167;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1944)),str_431);
                __freed_obj__ = 0;
                if(str_431 && !__freed_obj__) { str_431 = come_decrement_ref_count(str_431, (void*)0, (void*)0, 0, 0, 0); }
                if(str_427 && !__freed_obj__) { str_427 = come_decrement_ref_count(str_427, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_428 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_428, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_429 && !__freed_obj__) { match_string_429 = come_decrement_ref_count(match_string_429, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_430 && !__freed_obj__) { block_result_430 = come_decrement_ref_count(block_result_430, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_431 && !__freed_obj__) { str_431 = come_decrement_ref_count(str_431, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_427 && !__freed_obj__) { str_427 = come_decrement_ref_count(str_427, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_428 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_428, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_429 && !__freed_obj__) { match_string_429 = come_decrement_ref_count(match_string_429, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_430 && !__freed_obj__) { block_result_430 = come_decrement_ref_count(block_result_430, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional136=regex_result_424>1,            __freed_obj__ = 0, 
            _if_conditional136) {
                str_432=(char*)come_increment_ref_count(((char*)(right_value168=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1950)),offset_411,start_413[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value168;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1951)),str_432);
                __freed_obj__ = 0;
                if(_if_conditional137=offset_411==end_414[0],                __freed_obj__ = 0, 
                _if_conditional137) {
                    offset_411++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_411=end_414[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_433=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value170=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value169=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1960))), "libcomelang2-str.c", 1960)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value169;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value170;
                __freed_obj__ = 0;
                for(
                i_434=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA57=                i_434<regex_result_424 ,                __freed_obj__ = 0, 
                _for_condtionalA57;                i_434++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_435=(char*)come_increment_ref_count(((char*)(right_value171=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1963)),start_413[i_434],end_414[i_434]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value171;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_433, "libcomelang2-str.c", 1964)),(char*)come_increment_ref_count(match_string_435));
                    __freed_obj__ = 0;
                    if(match_string_435 && !__freed_obj__) { match_string_435 = come_decrement_ref_count(match_string_435, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_436=(char*)come_increment_ref_count(((char*)(right_value172=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1967)),start_413[0],end_414[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value172);
                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value172;
                __freed_obj__ = 0;
                block_result_437=(char*)come_increment_ref_count(((char*)(right_value173=block(parent,match_string_436,group_strings_433))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value173;
                __freed_obj__ = 0;
                if(_if_conditional138=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1974))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional138) {
                    __result152__ = __result_obj__ = ((char*)(right_value174=buffer_to_string(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1972)))));
                    if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_436 && !__freed_obj__) { match_string_436 = come_decrement_ref_count(match_string_436, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_437 && !__freed_obj__) { block_result_437 = come_decrement_ref_count(block_result_437, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_421 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_421, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result152__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1974)),block_result_437);
                __freed_obj__ = 0;
                if(_if_conditional139=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1981))->global,                __freed_obj__ = 0, 
                _if_conditional139) {
                    str_438=(char*)come_increment_ref_count(((char*)(right_value175=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1977)),offset_411,-1))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value175;
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1978)),str_438);
                    __freed_obj__ = 0;
                    if(str_438 && !__freed_obj__) { str_438 = come_decrement_ref_count(str_438, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_436 && !__freed_obj__) { match_string_436 = come_decrement_ref_count(match_string_436, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_437 && !__freed_obj__) { block_result_437 = come_decrement_ref_count(block_result_437, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_438 && !__freed_obj__) { str_438 = come_decrement_ref_count(str_438, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_432 && !__freed_obj__) { str_432 = come_decrement_ref_count(str_432, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_433 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_436 && !__freed_obj__) { match_string_436 = come_decrement_ref_count(match_string_436, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_437 && !__freed_obj__) { block_result_437 = come_decrement_ref_count(block_result_437, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_439=(char*)come_increment_ref_count(((char*)(right_value176=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1984)),offset_411,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value176;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1985)),str_439);
                __freed_obj__ = 0;
                if(str_439 && !__freed_obj__) { str_439 = come_decrement_ref_count(str_439, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_439 && !__freed_obj__) { str_439 = come_decrement_ref_count(str_439, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result153__ = __result_obj__ = ((char*)(right_value177=buffer_to_string(((struct buffer*)come_null_check(result_421, "libcomelang2-str.c", 1989)))));
    if(result_421 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_421, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
    if(result_421 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_421, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_440;
int ovec_max_441;
const char* err_445;
int erro_ofs_446;
int options_447;
char* str_448;
struct real_pcre* re_449;
void* right_value178;
void* right_value179;
struct buffer* result_450;
int n_451;
_Bool _while_condtional24;
int options_452;
int len_453;
int regex_result_454;
int i_455;
_Bool _for_condtionalA58;
int i_456;
_Bool _for_condtionalA59;
_Bool _if_conditional140;
void* right_value180;
char* str_457;
void* right_value181;
void* right_value182;
struct list$1charph* group_strings_458;
void* right_value183;
void* right_value184;
char* match_string_459;
void* right_value185;
char* block_result_460;
_Bool _if_conditional141;
void* right_value186;
char* __result154__;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value187;
char* str_461;
_Bool _if_conditional144;
void* right_value188;
char* str_462;
_Bool _if_conditional145;
void* right_value189;
char* str_463;
_Bool _if_conditional146;
void* right_value190;
void* right_value191;
struct list$1charph* group_strings_464;
int i_465;
_Bool _for_condtionalA60;
void* right_value192;
char* match_string_466;
void* right_value193;
char* match_string_467;
void* right_value194;
char* block_result_468;
_Bool _if_conditional147;
void* right_value195;
char* __result155__;
_Bool _if_conditional148;
void* right_value196;
char* str_469;
_Bool _if_conditional149;
void* right_value197;
char* str_470;
void* right_value198;
char* str_471;
void* right_value199;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_440, 0, sizeof(int));
memset(&ovec_max_441, 0, sizeof(int));
memset(&erro_ofs_446, 0, sizeof(int));
memset(&options_447, 0, sizeof(int));
memset(&str_448, 0, sizeof(char*));
memset(&re_449, 0, sizeof(struct real_pcre*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&result_450, 0, sizeof(struct buffer*));
memset(&n_451, 0, sizeof(int));
memset(&options_452, 0, sizeof(int));
memset(&len_453, 0, sizeof(int));
memset(&regex_result_454, 0, sizeof(int));
memset(&i_455, 0, sizeof(int));
memset(&i_456, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&str_457, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&group_strings_458, 0, sizeof(struct list$1charph*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&match_string_459, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&block_result_460, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&str_461, 0, sizeof(char*));
memset(&right_value188, 0, sizeof(void*));
memset(&str_462, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
memset(&str_463, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&group_strings_464, 0, sizeof(struct list$1charph*));
memset(&i_465, 0, sizeof(int));
memset(&right_value192, 0, sizeof(void*));
memset(&match_string_466, 0, sizeof(char*));
memset(&right_value193, 0, sizeof(void*));
memset(&match_string_467, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&block_result_468, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&str_469, 0, sizeof(char*));
memset(&right_value197, 0, sizeof(void*));
memset(&str_470, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&str_471, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
    offset_440=0;
    __freed_obj__ = 0;
    ovec_max_441=16;
    __freed_obj__ = 0;
    int start_442[ovec_max_441];
    memset(&start_442, 0, sizeof(int)    *(ovec_max_441)    );
    __freed_obj__ = 0;
    int end_443[ovec_max_441];
    memset(&end_443, 0, sizeof(int)    *(ovec_max_441)    );
    __freed_obj__ = 0;
    int ovec_value_444[ovec_max_441*3];
    memset(&ovec_value_444, 0, sizeof(int)    *(ovec_max_441*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_447=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2004))->options;
    __freed_obj__ = 0;
    str_448=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2005))->str;
    __freed_obj__ = 0;
    re_449=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2007))->re;
    __freed_obj__ = 0;
    result_450=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2009))), "libcomelang2-str.c", 2009)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value178;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value179;
    __freed_obj__ = 0;
    n_451=0;
    __freed_obj__ = 0;
    while(_while_condtional24=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional24) {
        options_452=2097152;
        __freed_obj__ = 0;
        len_453=strlen(self);
        __freed_obj__ = 0;
        regex_result_454=pcre_exec(re_449,(struct pcre_extra*)0,self,len_453,offset_440,options_452,ovec_value_444,ovec_max_441*3);
        __freed_obj__ = 0;
        for(
        i_455=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA58=        i_455<ovec_max_441 ,        __freed_obj__ = 0, 
        _for_condtionalA58;        i_455++ ,        __freed_obj__ = 0, 
        0        ){
            start_442[i_455]=ovec_value_444[i_455*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_456=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA59=        i_456<ovec_max_441 ,        __freed_obj__ = 0, 
        _for_condtionalA59;        i_456++ ,        __freed_obj__ = 0, 
        0        ){
            end_443[i_456]=ovec_value_444[i_456*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional140=regex_result_454==1,        __freed_obj__ = 0, 
        _if_conditional140) {
            n_451++;
            __freed_obj__ = 0;
            str_457=(char*)come_increment_ref_count(((char*)(right_value180=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2028)),offset_440,start_442[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2030)),str_457);
            __freed_obj__ = 0;
            group_strings_458=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value182=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value181=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2032))), "libcomelang2-str.c", 2032)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value181;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value182;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_458, "libcomelang2-str.c", 2034)),(char*)come_increment_ref_count(((char*)(right_value183=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2034)),start_442[0],end_443[0])))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value183;
            __freed_obj__ = 0;
            match_string_459=(char*)come_increment_ref_count(((char*)(right_value184=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2036)),start_442[0],end_443[0]))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value184);
            if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value184;
            __freed_obj__ = 0;
            block_result_460=(char*)come_increment_ref_count(((char*)(right_value185=block(parent,match_string_459,group_strings_458))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value185;
            __freed_obj__ = 0;
            if(_if_conditional141=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2044))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional141) {
                __result154__ = __result_obj__ = ((char*)(right_value186=buffer_to_string(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2041)))));
                if(str_457 && !__freed_obj__) { str_457 = come_decrement_ref_count(str_457, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_458 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_458, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_459 && !__freed_obj__) { match_string_459 = come_decrement_ref_count(match_string_459, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_460 && !__freed_obj__) { block_result_460 = come_decrement_ref_count(block_result_460, (void*)0, (void*)0, 0, 0, 0); }
                if(result_450 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_450, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result154__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2044)),block_result_460);
            __freed_obj__ = 0;
            if(_if_conditional142=offset_440==end_443[0],            __freed_obj__ = 0, 
            _if_conditional142) {
                offset_440++;
                __freed_obj__ = 0;
            }
            else {
                offset_440=end_443[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional143=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2059))->global,            __freed_obj__ = 0, 
            _if_conditional143) {
                str_461=(char*)come_increment_ref_count(((char*)(right_value187=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2054)),offset_440,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value187;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2055)),str_461);
                __freed_obj__ = 0;
                if(str_461 && !__freed_obj__) { str_461 = come_decrement_ref_count(str_461, (void*)0, (void*)0, 0, 0, 0); }
                if(str_457 && !__freed_obj__) { str_457 = come_decrement_ref_count(str_457, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_458 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_458, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_459 && !__freed_obj__) { match_string_459 = come_decrement_ref_count(match_string_459, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_460 && !__freed_obj__) { block_result_460 = come_decrement_ref_count(block_result_460, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_461 && !__freed_obj__) { str_461 = come_decrement_ref_count(str_461, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional144=n_451==count,            __freed_obj__ = 0, 
            _if_conditional144) {
                str_462=(char*)come_increment_ref_count(((char*)(right_value188=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2060)),offset_440,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value188;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2061)),str_462);
                __freed_obj__ = 0;
                if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
                if(str_457 && !__freed_obj__) { str_457 = come_decrement_ref_count(str_457, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_458 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_458, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_459 && !__freed_obj__) { match_string_459 = come_decrement_ref_count(match_string_459, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_460 && !__freed_obj__) { block_result_460 = come_decrement_ref_count(block_result_460, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_462 && !__freed_obj__) { str_462 = come_decrement_ref_count(str_462, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_457 && !__freed_obj__) { str_457 = come_decrement_ref_count(str_457, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_458 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_458, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_459 && !__freed_obj__) { match_string_459 = come_decrement_ref_count(match_string_459, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_460 && !__freed_obj__) { block_result_460 = come_decrement_ref_count(block_result_460, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional145=regex_result_454>1,            __freed_obj__ = 0, 
            _if_conditional145) {
                n_451++;
                __freed_obj__ = 0;
                str_463=(char*)come_increment_ref_count(((char*)(right_value189=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2069)),offset_440,start_442[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value189;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2070)),str_463);
                __freed_obj__ = 0;
                if(_if_conditional146=offset_440==end_443[0],                __freed_obj__ = 0, 
                _if_conditional146) {
                    offset_440++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_440=end_443[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_464=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value190=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2079))), "libcomelang2-str.c", 2079)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value190;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value191;
                __freed_obj__ = 0;
                for(
                i_465=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA60=                i_465<regex_result_454 ,                __freed_obj__ = 0, 
                _for_condtionalA60;                i_465++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_466=(char*)come_increment_ref_count(((char*)(right_value192=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2082)),start_442[i_465],end_443[i_465]))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value192;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_464, "libcomelang2-str.c", 2083)),(char*)come_increment_ref_count(match_string_466));
                    __freed_obj__ = 0;
                    if(match_string_466 && !__freed_obj__) { match_string_466 = come_decrement_ref_count(match_string_466, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_467=(char*)come_increment_ref_count(((char*)(right_value193=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2086)),start_442[0],end_443[0]))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value193;
                __freed_obj__ = 0;
                block_result_468=(char*)come_increment_ref_count(((char*)(right_value194=block(parent,match_string_467,group_strings_464))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value194;
                __freed_obj__ = 0;
                if(_if_conditional147=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2093))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional147) {
                    __result155__ = __result_obj__ = ((char*)(right_value195=buffer_to_string(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2091)))));
                    if(str_463 && !__freed_obj__) { str_463 = come_decrement_ref_count(str_463, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_464 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_464, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_450 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_450, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result155__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2093)),block_result_468);
                __freed_obj__ = 0;
                if(_if_conditional148=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2101))->global,                __freed_obj__ = 0, 
                _if_conditional148) {
                    str_469=(char*)come_increment_ref_count(((char*)(right_value196=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2096)),offset_440,-1))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value196;
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2097)),str_469);
                    __freed_obj__ = 0;
                    if(str_469 && !__freed_obj__) { str_469 = come_decrement_ref_count(str_469, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_463 && !__freed_obj__) { str_463 = come_decrement_ref_count(str_463, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_464 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_464, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_469 && !__freed_obj__) { str_469 = come_decrement_ref_count(str_469, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional149=n_451==count,                __freed_obj__ = 0, 
                _if_conditional149) {
                    str_470=(char*)come_increment_ref_count(((char*)(right_value197=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2102)),offset_440,-1))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2103)),str_470);
                    __freed_obj__ = 0;
                    if(str_470 && !__freed_obj__) { str_470 = come_decrement_ref_count(str_470, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_463 && !__freed_obj__) { str_463 = come_decrement_ref_count(str_463, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_464 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_464, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_470 && !__freed_obj__) { str_470 = come_decrement_ref_count(str_470, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_463 && !__freed_obj__) { str_463 = come_decrement_ref_count(str_463, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_464 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_464, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_471=(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2109)),offset_440,-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value198;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2110)),str_471);
                __freed_obj__ = 0;
                if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result156__ = __result_obj__ = ((char*)(right_value199=buffer_to_string(((struct buffer*)come_null_check(result_450, "libcomelang2-str.c", 2115)))));
    if(result_450 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_450, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
    if(result_450 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_450, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int result_472;
unsigned int* p_473;
_Bool _while_condtional25;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_472, 0, sizeof(int));
memset(&p_473, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    result_472=0;
    __freed_obj__ = 0;
    p_473=value;
    __freed_obj__ = 0;
    while(_while_condtional25=*p_473,    __freed_obj__ = 0, 
    _while_condtional25) {
        result_472+=(*p_473);
        __freed_obj__ = 0;
        p_473++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result157__ = result_472;
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result159__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result161__ = left==right;
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result162__ = left!=right;
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result163__ = value;
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result164__ = left==right;
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value200;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result165__ = __result_obj__ = ((char*)(right_value200=xsprintf("%ls",wc)));
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* string_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
char* result_474;
_Bool _if_conditional150;
void* right_value202;
char* __result166__;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&result_474, 0, sizeof(char*));
memset(&right_value202, 0, sizeof(void*));
    result_474=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(str))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    if(_if_conditional150=result_474[string_length(((char*)come_null_check(result_474, "libcomelang2-str.c", 2180)))-1]==10,    __freed_obj__ = 0, 
    _if_conditional150) {
        __result166__ = __result_obj__ = ((char*)(right_value202=string_substring(((char*)come_null_check(result_474, "libcomelang2-str.c", 2177)),0,-2)));
        if(result_474 && !__freed_obj__) { result_474 = come_decrement_ref_count(result_474, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result166__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = result_474;
    if(result_474 && !__freed_obj__) { result_474 = come_decrement_ref_count(result_474, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(result_474 && !__freed_obj__) { result_474 = come_decrement_ref_count(result_474, (void*)0, (void*)0, 0, 0, 0); }
}

