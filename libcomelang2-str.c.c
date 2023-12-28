// source head
typedef long int ptrdiff_t;
typedef long int size_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    long long __clang_max_align_nonce1;
    long double __clang_max_align_nonce2;
};
typedef struct anonymous_typeX1 max_align_t;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long int __uint64_t;
typedef long __intptr_t;
typedef unsigned long int __uintptr_t;
typedef char int8_t;
typedef unsigned char uint8_t;
typedef short short int16_t;
typedef unsigned short int uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long int64_t;
typedef unsigned long int uint64_t;
typedef long intptr_t;
typedef unsigned long int uintptr_t;
typedef char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short short int_least16_t;
typedef unsigned short int uint_least16_t;
typedef int int_least32_t;
typedef unsigned int uint_least32_t;
typedef long int_least64_t;
typedef unsigned long int uint_least64_t;
typedef char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef long int_fast64_t;
typedef unsigned long int uint_fast64_t;
typedef long int_fast16_t;
typedef unsigned long int uint_fast16_t;
typedef long int_fast32_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uintmax_t;
typedef long intmax_t;
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX2
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX2 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short int __kernel_old_uid_t;
typedef unsigned short int __kernel_old_gid_t;
typedef long __kernel_long_t;
typedef unsigned long int __kernel_ulong_t;
typedef unsigned long int __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned int __kernel_old_dev_t;
typedef unsigned long int __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct anonymous_typeX3
{
    int val[2];
};
typedef struct anonymous_typeX3 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short int __kernel_uid16_t;
typedef unsigned short int __kernel_gid16_t;
typedef unsigned short int __le16;
typedef unsigned short int __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short int __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct anonymous_typeX4
{
    unsigned int flags;
    void* stack_base;
    long int stack_size;
    long int guard_size;
    int sched_policy;
    int sched_priority;
    char __reserved[16];
};
typedef struct anonymous_typeX4 pthread_attr_t;
struct anonymous_typeX5
{
    long __private[4];
};
typedef struct anonymous_typeX5 pthread_barrier_t;
typedef int pthread_barrierattr_t;
struct anonymous_typeX6
{
    int __private[12];
};
typedef struct anonymous_typeX6 pthread_cond_t;
typedef long pthread_condattr_t;
typedef int pthread_key_t;
struct anonymous_typeX7
{
    int __private[10];
};
typedef struct anonymous_typeX7 pthread_mutex_t;
typedef long pthread_mutexattr_t;
typedef int pthread_once_t;
struct anonymous_typeX8
{
    int __private[14];
};
typedef struct anonymous_typeX8 pthread_rwlock_t;
typedef long pthread_rwlockattr_t;
struct anonymous_typeX9
{
    long __private;
};
typedef struct anonymous_typeX9 pthread_spinlock_t;
typedef long pthread_t;
typedef unsigned int __gid_t;
typedef unsigned int gid_t;
typedef unsigned int __uid_t;
typedef unsigned int uid_t;
typedef int __pid_t;
typedef int pid_t;
typedef unsigned int __id_t;
typedef unsigned int id_t;
typedef unsigned long int blkcnt_t;
typedef unsigned long int blksize_t;
typedef char* caddr_t;
typedef long clock_t;
typedef int __clockid_t;
typedef int clockid_t;
typedef int daddr_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef unsigned int __mode_t;
typedef unsigned int mode_t;
typedef int __key_t;
typedef int key_t;
typedef unsigned long int __ino_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned int __nlink_t;
typedef unsigned int nlink_t;
typedef void* __timer_t;
typedef void* timer_t;
typedef long __suseconds_t;
typedef long suseconds_t;
typedef unsigned int __useconds_t;
typedef unsigned int useconds_t;
typedef unsigned long int dev_t;
typedef long __time_t;
typedef long time_t;
typedef long off_t;
typedef long loff_t;
typedef long off64_t;
typedef unsigned int __socklen_t;
typedef unsigned int socklen_t;
typedef __builtin_va_list __va_list;
typedef long ssize_t;
typedef unsigned int uint_t;
typedef unsigned int uint;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef unsigned int u_int32_t;
typedef unsigned short int u_int16_t;
typedef unsigned char u_int8_t;
typedef unsigned long int u_int64_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __builtin_va_list va_list;
struct __locale_t;
typedef struct __locale_t* locale_t;
struct flock
{
    short short l_type;
    short short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};
struct flock64
{
    short short l_type;
    short short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};
struct f_owner_ex
{
    int type;
    int pid;
};
typedef long fpos_t;
typedef long fpos64_t;
struct __sFILE;
typedef struct __sFILE FILE;
extern struct __sFILE* stdin;
extern struct __sFILE* stdout;
extern struct __sFILE* stderr;
struct mallinfo
{
    long int arena;
    long int ordblks;
    long int smblks;
    long int hblks;
    long int hblkhd;
    long int usmblks;
    long int fsmblks;
    long int uordblks;
    long int fordblks;
    long int keepcost;
};
struct mallinfo2
{
    long int arena;
    long int ordblks;
    long int smblks;
    long int hblks;
    long int hblkhd;
    long int usmblks;
    long int fsmblks;
    long int uordblks;
    long int fordblks;
    long int keepcost;
};
enum HeapTaggingLevel { M_HEAP_TAGGING_LEVEL_NONE=0,
M_HEAP_TAGGING_LEVEL_TBI=1,
M_HEAP_TAGGING_LEVEL_ASYNC=2,
M_HEAP_TAGGING_LEVEL_SYNC=3
};
struct anonymous_typeX10
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX10 div_t;
struct anonymous_typeX11
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX11 ldiv_t;
struct anonymous_typeX12
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX12 lldiv_t;
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
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;
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
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
struct __kernel_timespec
{
    long long tv_sec;
    long long tv_nsec;
};
struct __kernel_itimerspec
{
    struct __kernel_timespec it_interval;
    struct __kernel_timespec it_value;
};
struct __kernel_old_timespec
{
    long tv_sec;
    long tv_nsec;
};
struct __kernel_sock_timeval
{
    long long tv_sec;
    long long tv_usec;
};
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
struct sigcontext
{
    unsigned long long fault_address;
    unsigned long long regs[31];
    unsigned long long sp;
    unsigned long long pc;
    unsigned long long pstate;
    unsigned char __reserved[4096];
};
struct _aarch64_ctx
{
    unsigned int magic;
    unsigned int size;
};
struct fpsimd_context
{
    struct _aarch64_ctx head;
    unsigned int fpsr;
    unsigned int fpcr;
    __uint128_t vregs[32];
};
struct esr_context
{
    struct _aarch64_ctx head;
    unsigned long long esr;
};
struct extra_context
{
    struct _aarch64_ctx head;
    unsigned long long datap;
    unsigned int size;
    unsigned int __reserved[3];
};
struct sve_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int flags;
    unsigned short int __reserved[2];
};
struct tpidr2_context
{
    struct _aarch64_ctx head;
    unsigned long long tpidr2;
};
struct za_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int __reserved[3];
};
struct zt_context
{
    struct _aarch64_ctx head;
    unsigned short int nregs;
    unsigned short int __reserved[3];
};
struct anonymous_typeX13
{
    unsigned long int sig[(64/64)];
};
typedef struct anonymous_typeX13 sigset_t;
typedef unsigned long int old_sigset_t;
typedef void (*__signalfn_t)(int);
typedef void (*__sighandler_t)(int);
typedef void (*__restorefn_t)();
typedef void (*__sigrestore_t)();
struct __kernel_sigaction
{
    void (*sa_handler)(int);
    unsigned long int sa_flags;
    void (*sa_restorer)();
    struct anonymous_typeX13 sa_mask;
};
struct sigaltstack
{
    void* ss_sp;
    int ss_flags;
    unsigned long int ss_size;
};
typedef struct sigaltstack stack_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
typedef union sigval sigval_t;
struct anonymous_typeX14
{
    int _pid;
    unsigned int _uid;
};
struct anonymous_typeX15
{
    int _tid;
    int _overrun;
    union sigval _sigval;
    int _sys_private;
};
struct anonymous_typeX16
{
    int _pid;
    unsigned int _uid;
    union sigval _sigval;
};
struct anonymous_typeX17
{
    int _pid;
    unsigned int _uid;
    int _status;
    long _utime;
    long _stime;
};
struct anonymous_typeX20
{
};
struct anonymous_typeX21
{
};
struct anonymous_typeX22
{
};
struct anonymous_typeX24
{
    char _dummy_bnd[(__alignof__(void*)<sizeof(short short)?sizeof(short short):__alignof__(void*))];
    void* _lower;
    void* _upper;
};
struct anonymous_typeX25
{
    char _dummy_pkey[(__alignof__(void*)<sizeof(short short)?sizeof(short short):__alignof__(void*))];
    unsigned int _pkey;
};
struct anonymous_typeX26
{
    unsigned long int _data;
    unsigned int _type;
    unsigned int _flags;
};
union anonymous_typeZ23
{
int _trapno;
short short _addr_lsb;
struct anonymous_typeX24 _addr_bnd;
struct anonymous_typeX25 _addr_pkey;
struct anonymous_typeX26 _perf;
};
struct anonymous_typeX18
{
    void* _addr;
    union anonymous_typeZ23 anonymous_var_nameY2;
};
struct anonymous_typeX27
{
    long _band;
    int _fd;
};
struct anonymous_typeX28
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};
union __sifields
{
struct anonymous_typeX14 _kill;
struct anonymous_typeX15 _timer;
struct anonymous_typeX16 _rt;
struct anonymous_typeX17 _sigchld;
struct anonymous_typeX18 _sigfault;
struct anonymous_typeX27 _sigpoll;
struct anonymous_typeX28 _sigsys;
};
struct anonymous_typeX30
{
};
struct anonymous_typeX32
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};
union anonymous_typeZ31
{
struct anonymous_typeX32 anonymous_var_nameXYZ2;
int _si_pad[128/sizeof(int)];
};
struct siginfo
{
    union anonymous_typeZ31 anonymous_var_nameY4;
};
typedef struct siginfo siginfo_t;
struct anonymous_typeX34
{
};
struct anonymous_typeX36
{
    void (*_function)(union sigval);
    void* _attribute;
};
union anonymous_typeZ35
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX36 _sigev_thread;
};
struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ35 _sigev_un;
};
typedef struct sigevent sigevent_t;
typedef int sig_atomic_t;
typedef void (*sig_t)(int);
typedef void (*sighandler_t)(int);
typedef struct anonymous_typeX13 sigset64_t;
union anonymous_typeZ38
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};
struct sigaction
{
    int sa_flags;
    union anonymous_typeZ38 anonymous_var_nameY6;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};
union anonymous_typeZ40
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};
struct sigaction64
{
    int sa_flags;
    union anonymous_typeZ40 anonymous_var_nameY8;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};
struct user_regs_struct
{
    unsigned long int regs[31];
    unsigned long int sp;
    unsigned long int pc;
    unsigned long int pstate;
};
struct user_fpsimd_struct
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};
typedef unsigned long int greg_t;
typedef unsigned long int gregset_t[34];
typedef struct user_fpsimd_struct fpregset_t;
typedef struct sigcontext mcontext_t;
union anonymous_typeZ42
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};
struct ucontext
{
    unsigned long int uc_flags;
    struct ucontext* uc_link;
    struct sigaltstack uc_stack;
    union anonymous_typeZ42 anonymous_var_nameY10;
    char __padding[128-sizeof(struct anonymous_typeX13)];
    struct sigcontext uc_mcontext;
};
typedef struct ucontext ucontext_t;
extern const char* sys_siglist[(64+1)];
extern const char* sys_signame[(64+1)];
typedef unsigned long int fd_mask;
struct anonymous_typeX43
{
    unsigned long int fds_bits[1024/(8*sizeof(unsigned long int))];
};
typedef struct anonymous_typeX43 fd_set;
extern char** tzname;
extern int daylight;
extern long int timezone;
struct sigevent;
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long int tm_gmtoff;
    const char* tm_zone;
};
struct anonymous_typeX44
{
    unsigned char __seq[4];
    unsigned char __reserved[4];
};
typedef struct anonymous_typeX44 mbstate_t;
typedef unsigned int wint_t;
typedef long wctype_t;
typedef const void* wctrans_t;
typedef unsigned int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

int android_get_application_target_sdk_version();

int __system_property_get(const char* __name, char* __value);

int strcasecmp(const char* __s1, const char* __s2);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_t* __l);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_t* __l);

void* memccpy(void* __dst, const void* __src, int __stop_char, long int __n);

void* memchr(const void* __s, int __ch, long int __n);

void* memrchr(const void* __s, int __ch, long int __n);

int memcmp(const void* __lhs, const void* __rhs, long int __n);

void* memcpy(void* anonymous_var_nameX2, const void* anonymous_var_nameX3, long int anonymous_var_nameX4);

void* mempcpy(void* __dst, const void* __src, long int __n);

void* memmove(void* __dst, const void* __src, long int __n);

void* memset(void* __dst, int __ch, long int __n);

void* memmem(const void* __haystack, long int __haystack_size, const void* __needle, long int __needle_size);

char* strchr(const char* __s, int __ch);

char* __strchr_chk(const char* __s, int __ch, long int __n);

char* strchrnul(const char* __s, int __ch);

char* strrchr(const char* __s, int __ch);

char* __strrchr_chk(const char* __s, int __ch, long int __n);

long int strlen(const char* __s);

long int __strlen_chk(const char* __s, long int __n);

int strcmp(const char* __lhs, const char* __rhs);

char* stpcpy(char* __dst, const char* __src);

char* strcpy(char* __dst, const char* __src);

char* strcat(char* __dst, const char* __src);

char* strdup(const char* __s);

char* strstr(const char* __haystack, const char* __needle);

char* strcasestr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delimiter);

char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);

char* strerror(int __errno_value);

char* strerror_l(int __errno_value, struct __locale_t* __l);

char* __gnu_strerror_r(int __errno_value, char* __buf, long int __n);

long int strnlen(const char* __s, long int __n);

char* strncat(char* __dst, const char* __src, long int __n);

char* strndup(const char* __s, long int __n);

int strncmp(const char* __lhs, const char* __rhs, long int __n);

char* stpncpy(char* __dst, const char* __src, long int __n);

char* strncpy(char* __dst, const char* __src, long int __n);

long int strlcat(char* __dst, const char* __src, long int __n);

long int strlcpy(char* __dst, const char* __src, long int __n);

long int strcspn(const char* __s, const char* __reject);

char* strpbrk(const char* __s, const char* __accept);

char* strsep(char** __s_ptr, const char* __delimiter);

long int strspn(const char* __s, const char* __accept);

char* strsignal(int __signal);

int strcoll(const char* __lhs, const char* __rhs);

long int strxfrm(char* __dst, const char* __src, long int __n);

int strcoll_l(const char* __lhs, const char* __rhs, struct __locale_t* __l);

long int strxfrm_l(char* __dst, const char* __src, long int __n, struct __locale_t* __l);

char* __gnu_basename(const char* __path);

void clearerr(struct __sFILE* __fp);

int fclose(struct __sFILE* __fp);

int feof(struct __sFILE* __fp);

int ferror(struct __sFILE* __fp);

int fflush(struct __sFILE* __fp);

int fgetc(struct __sFILE* __fp);

char* fgets(char* __buf, int __size, struct __sFILE* __fp);

int fprintf(struct __sFILE* __fp, const char* __fmt, ...);

int fputc(int __ch, struct __sFILE* __fp);

int fputs(const char* __s, struct __sFILE* __fp);

long int fread(void* __buf, long int __size, long int __count, struct __sFILE* __fp);

int fscanf(struct __sFILE* __fp, const char* __fmt, ...);

long int fwrite(const void* __buf, long int __size, long int __count, struct __sFILE* __fp);

int getc(struct __sFILE* __fp);

int getchar();

long getdelim(char** __line_ptr, long int* __line_length_ptr, int __delimiter, struct __sFILE* __fp);

long getline(char** __line_ptr, long int* __line_length_ptr, struct __sFILE* __fp);

void perror(const char* __msg);

int printf(const char* __fmt, ...);

int putc(int __ch, struct __sFILE* __fp);

int putchar(int __ch);

int puts(const char* __s);

int remove(const char* __path);

void rewind(struct __sFILE* __fp);

int scanf(const char* __fmt, ...);

void setbuf(struct __sFILE* __fp, char* __buf);

int setvbuf(struct __sFILE* __fp, char* __buf, int __mode, long int __size);

int sscanf(const char* __s, const char* __fmt, ...);

int ungetc(int __ch, struct __sFILE* __fp);

int vfprintf(struct __sFILE* __fp, const char* __fmt, va_list __args);

int vprintf(const char* __fp, va_list __args);

int dprintf(int __fd, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __args);

int sprintf(char* __s, const char* __fmt, ...);

int vsprintf(char* __s, const char* __fmt, va_list __args);

char* tmpnam(char* __s);

char* tempnam(const char* __dir, const char* __prefix);

int rename(const char* __old_path, const char* __new_path);

int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);

int fseek(struct __sFILE* __fp, long __offset, int __whence);

long ftell(struct __sFILE* __fp);

int fgetpos(struct __sFILE* __fp, long* __pos);

int fsetpos(struct __sFILE* __fp, const long* __pos);

int fseeko(struct __sFILE* __fp, long __offset, int __whence);

long ftello(struct __sFILE* __fp);

struct __sFILE* funopen(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));

int fgetpos64(struct __sFILE* __fp, long* __pos);

int fsetpos64(struct __sFILE* __fp, const long* __pos);

int fseeko64(struct __sFILE* __fp, long __offset, int __whence);

long ftello64(struct __sFILE* __fp);

struct __sFILE* funopen64(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));

struct __sFILE* fopen(const char* __path, const char* __mode);

struct __sFILE* fopen64(const char* __path, const char* __mode);

struct __sFILE* freopen(const char* __path, const char* __mode, struct __sFILE* __fp);

struct __sFILE* freopen64(const char* __path, const char* __mode, struct __sFILE* __fp);

struct __sFILE* tmpfile64();

int snprintf(char* __buf, long int __size, const char* __fmt, ...);

int vfscanf(struct __sFILE* __fp, const char* __fmt, va_list __args);

int vscanf(const char* __fmt, va_list __args);

int vsnprintf(char* __buf, long int __size, const char* __fmt, va_list __args);

int vsscanf(const char* __s, const char* __fmt, va_list __args);

struct __sFILE* fdopen(int __fd, const char* __mode);

int fileno(struct __sFILE* __fp);

int pclose(struct __sFILE* __fp);

struct __sFILE* popen(const char* __command, const char* __mode);

void flockfile(struct __sFILE* __fp);

int ftrylockfile(struct __sFILE* __fp);

void funlockfile(struct __sFILE* __fp);

int getc_unlocked(struct __sFILE* __fp);

int getchar_unlocked();

int putc_unlocked(int __ch, struct __sFILE* __fp);

int putchar_unlocked(int __ch);

struct __sFILE* fmemopen(void* __buf, long int __size, const char* __mode);

struct __sFILE* open_memstream(char** __ptr, long int* __size_ptr);

int asprintf(char** __s_ptr, const char* __fmt, ...);

char* fgetln(struct __sFILE* __fp, long int* __length_ptr);

int fpurge(struct __sFILE* __fp);

void setbuffer(struct __sFILE* __fp, char* __buf, int __size);

int setlinebuf(struct __sFILE* __fp);

int vasprintf(char** __s_ptr, const char* __fmt, va_list __args);

void clearerr_unlocked(struct __sFILE* __fp);

int feof_unlocked(struct __sFILE* __fp);

int ferror_unlocked(struct __sFILE* __fp);

int fileno_unlocked(struct __sFILE* __fp);

int open(const char* anonymous_var_nameX28, int anonymous_var_nameX29, ...);

int getpid();

int unlink(const char* anonymous_var_nameX30);

void* malloc(long int __byte_count);

void* calloc(long int __item_count, long int __item_size);

void* realloc(void* __ptr, long int __byte_count);

void free(void* __ptr);

void* memalign(long int __alignment, long int __byte_count);

long int malloc_usable_size(const void* __ptr);

struct mallinfo2 mallinfo();

int malloc_info(int __must_be_zero, struct __sFILE* __fp);

void abort();

void exit(int __status);

void _Exit(int __status);

int atexit(void (*__fn)());

int at_quick_exit(void (*__fn)());

void quick_exit(int __status);

char* getenv(const char* __name);

int putenv(char* __assignment);

int setenv(const char* __name, const char* __value, int __overwrite);

int unsetenv(const char* __name);

int clearenv();

char* mkdtemp(char* __template);

char* mktemp(char* __template);

int mkostemp64(char* __template, int __flags);

int mkostemp(char* __template, int __flags);

int mkostemps64(char* __template, int __suffix_length, int __flags);

int mkostemps(char* __template, int __suffix_length, int __flags);

int mkstemp64(char* __template);

int mkstemp(char* __template);

int mkstemps64(char* __template, int __flags);

int mkstemps(char* __template, int __flags);

long strtol(const char* __s, char** __end_ptr, int __base);

long long strtoll(const char* __s, char** __end_ptr, int __base);

unsigned long int strtoul(const char* __s, char** __end_ptr, int __base);

unsigned long long strtoull(const char* __s, char** __end_ptr, int __base);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

double strtod(const char* __s, char** __end_ptr);

long double strtold(const char* __s, char** __end_ptr);

int atoi(const char* __s);

long atol(const char* __s);

long long atoll(const char* __s);

char* realpath(const char* __path, char* __resolved);

int system(const char* __command);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__comparator)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__comparator)(const void*,const void*));

unsigned int arc4random();

unsigned int arc4random_uniform(unsigned int __upper_bound);

void arc4random_buf(void* __buf, long int __n);

int rand_r(unsigned int* __seed_ptr);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long jrand48(unsigned short int __xsubi[3]);

void lcong48(unsigned short int __param[7]);

long lrand48();

long mrand48();

long nrand48(unsigned short int __xsubi[3]);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void srand48(long __seed);

char* initstate(unsigned int __seed, char* __state, long int __n);

char* setstate(char* __state);

int getpt();

int posix_openpt(int __flags);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __n);

int unlockpt(int __fd);

struct anonymous_typeX10 div(int __numerator, int __denominator);

struct anonymous_typeX11 ldiv(long __numerator, long __denominator);

struct anonymous_typeX12 lldiv(long long __numerator, long long __denominator);

const char* getprogname();

void setprogname(const char* __name);

int mblen(const char* __s, long int __n);

long int mbstowcs(unsigned int* __dst, const char* __src, long int __n);

int mbtowc(unsigned int* __wc_ptr, const char* __s, long int __n);

int wctomb(char* __dst, unsigned int __wc);

long int wcstombs(char* __dst, const unsigned int* __src, long int __n);

int abs(int __x);

long labs(long __x);

long long llabs(long long __x);

float strtof(const char* __s, char** __end_ptr);

double atof(const char* __s);

int rand();

void srand(unsigned int __seed);

long random();

void srandom(unsigned int __seed);

int grantpt(int __fd);

long long strtoll_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);

unsigned long long strtoull_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);

long double strtold_l(const char* __s, char** __end_ptr, struct __locale_t* __l);

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

struct optional$2intbool* FILE_write(struct __sFILE* f, char* str);

struct optional$2charphbool* FILE_read(struct __sFILE* f);

struct optional$2intbool* FILE_fclose(struct __sFILE* f);

struct optional$2intpbool* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct __sFILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX137, int anonymous_var_nameX138, const char** anonymous_var_nameX139, int* anonymous_var_nameX140, const unsigned char* anonymous_var_nameX141);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX142, int anonymous_var_nameX143, const char** anonymous_var_nameX144, int* anonymous_var_nameX145, const unsigned char* anonymous_var_nameX146);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX147, int anonymous_var_nameX148, const char** anonymous_var_nameX149, int* anonymous_var_nameX150, const unsigned char* anonymous_var_nameX151);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX152, int anonymous_var_nameX153, int* anonymous_var_nameX154, const char** anonymous_var_nameX155, int* anonymous_var_nameX156, const unsigned char* anonymous_var_nameX157);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX158, int anonymous_var_nameX159, int* anonymous_var_nameX160, const char** anonymous_var_nameX161, int* anonymous_var_nameX162, const unsigned char* anonymous_var_nameX163);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX164, int anonymous_var_nameX165, int* anonymous_var_nameX166, const char** anonymous_var_nameX167, int* anonymous_var_nameX168, const unsigned char* anonymous_var_nameX169);

int pcre_config(int anonymous_var_nameX170, void* anonymous_var_nameX171);

int pcre16_config(int anonymous_var_nameX172, void* anonymous_var_nameX173);

int pcre32_config(int anonymous_var_nameX174, void* anonymous_var_nameX175);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX176, const char* anonymous_var_nameX177, int* anonymous_var_nameX178, int anonymous_var_nameX179, const char* anonymous_var_nameX180, char* anonymous_var_nameX181, int anonymous_var_nameX182);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX183, const unsigned short int* anonymous_var_nameX184, int* anonymous_var_nameX185, int anonymous_var_nameX186, const unsigned short int* anonymous_var_nameX187, unsigned short int* anonymous_var_nameX188, int anonymous_var_nameX189);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX190, const unsigned int* anonymous_var_nameX191, int* anonymous_var_nameX192, int anonymous_var_nameX193, const unsigned int* anonymous_var_nameX194, unsigned int* anonymous_var_nameX195, int anonymous_var_nameX196);

int pcre_copy_substring(const char* anonymous_var_nameX197, int* anonymous_var_nameX198, int anonymous_var_nameX199, int anonymous_var_nameX200, char* anonymous_var_nameX201, int anonymous_var_nameX202);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX203, int* anonymous_var_nameX204, int anonymous_var_nameX205, int anonymous_var_nameX206, unsigned short int* anonymous_var_nameX207, int anonymous_var_nameX208);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX209, int* anonymous_var_nameX210, int anonymous_var_nameX211, int anonymous_var_nameX212, unsigned int* anonymous_var_nameX213, int anonymous_var_nameX214);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX215, const struct pcre_extra* anonymous_var_nameX216, const char* anonymous_var_nameX217, int anonymous_var_nameX218, int anonymous_var_nameX219, int anonymous_var_nameX220, int* anonymous_var_nameX221, int anonymous_var_nameX222, int* anonymous_var_nameX223, int anonymous_var_nameX224);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX225, const struct pcre16_extra* anonymous_var_nameX226, const unsigned short int* anonymous_var_nameX227, int anonymous_var_nameX228, int anonymous_var_nameX229, int anonymous_var_nameX230, int* anonymous_var_nameX231, int anonymous_var_nameX232, int* anonymous_var_nameX233, int anonymous_var_nameX234);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX235, const struct pcre32_extra* anonymous_var_nameX236, const unsigned int* anonymous_var_nameX237, int anonymous_var_nameX238, int anonymous_var_nameX239, int anonymous_var_nameX240, int* anonymous_var_nameX241, int anonymous_var_nameX242, int* anonymous_var_nameX243, int anonymous_var_nameX244);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX245, const struct pcre_extra* anonymous_var_nameX246, const char* anonymous_var_nameX247, int anonymous_var_nameX248, int anonymous_var_nameX249, int anonymous_var_nameX250, int* anonymous_var_nameX251, int anonymous_var_nameX252);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX253, const struct pcre16_extra* anonymous_var_nameX254, const unsigned short int* anonymous_var_nameX255, int anonymous_var_nameX256, int anonymous_var_nameX257, int anonymous_var_nameX258, int* anonymous_var_nameX259, int anonymous_var_nameX260);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX261, const struct pcre32_extra* anonymous_var_nameX262, const unsigned int* anonymous_var_nameX263, int anonymous_var_nameX264, int anonymous_var_nameX265, int anonymous_var_nameX266, int* anonymous_var_nameX267, int anonymous_var_nameX268);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX269, const struct pcre_extra* anonymous_var_nameX270, const char* anonymous_var_nameX271, int anonymous_var_nameX272, int anonymous_var_nameX273, int anonymous_var_nameX274, int* anonymous_var_nameX275, int anonymous_var_nameX276, struct real_pcre_jit_stack* anonymous_var_nameX277);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX278, const struct pcre16_extra* anonymous_var_nameX279, const unsigned short int* anonymous_var_nameX280, int anonymous_var_nameX281, int anonymous_var_nameX282, int anonymous_var_nameX283, int* anonymous_var_nameX284, int anonymous_var_nameX285, struct real_pcre16_jit_stack* anonymous_var_nameX286);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX287, const struct pcre32_extra* anonymous_var_nameX288, const unsigned int* anonymous_var_nameX289, int anonymous_var_nameX290, int anonymous_var_nameX291, int anonymous_var_nameX292, int* anonymous_var_nameX293, int anonymous_var_nameX294, struct real_pcre32_jit_stack* anonymous_var_nameX295);

void pcre_free_substring(const char* anonymous_var_nameX296);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX297);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX298);

void pcre_free_substring_list(const char** anonymous_var_nameX299);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX300);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX301);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX302, const struct pcre_extra* anonymous_var_nameX303, int anonymous_var_nameX304, void* anonymous_var_nameX305);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX306, const struct pcre16_extra* anonymous_var_nameX307, int anonymous_var_nameX308, void* anonymous_var_nameX309);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX310, const struct pcre32_extra* anonymous_var_nameX311, int anonymous_var_nameX312, void* anonymous_var_nameX313);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX314, const char* anonymous_var_nameX315, int* anonymous_var_nameX316, int anonymous_var_nameX317, const char* anonymous_var_nameX318, const char** anonymous_var_nameX319);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX320, const unsigned short int* anonymous_var_nameX321, int* anonymous_var_nameX322, int anonymous_var_nameX323, const unsigned short int* anonymous_var_nameX324, const unsigned short int** anonymous_var_nameX325);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX326, const unsigned int* anonymous_var_nameX327, int* anonymous_var_nameX328, int anonymous_var_nameX329, const unsigned int* anonymous_var_nameX330, const unsigned int** anonymous_var_nameX331);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX332, const char* anonymous_var_nameX333);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX334, const unsigned short int* anonymous_var_nameX335);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX336, const unsigned int* anonymous_var_nameX337);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX338, const char* anonymous_var_nameX339, char** anonymous_var_nameX340, char** anonymous_var_nameX341);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX342, const unsigned short int* anonymous_var_nameX343, unsigned short int** anonymous_var_nameX344, unsigned short int** anonymous_var_nameX345);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX346, const unsigned int* anonymous_var_nameX347, unsigned int** anonymous_var_nameX348, unsigned int** anonymous_var_nameX349);

int pcre_get_substring(const char* anonymous_var_nameX350, int* anonymous_var_nameX351, int anonymous_var_nameX352, int anonymous_var_nameX353, const char** anonymous_var_nameX354);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX355, int* anonymous_var_nameX356, int anonymous_var_nameX357, int anonymous_var_nameX358, const unsigned short int** anonymous_var_nameX359);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX360, int* anonymous_var_nameX361, int anonymous_var_nameX362, int anonymous_var_nameX363, const unsigned int** anonymous_var_nameX364);

int pcre_get_substring_list(const char* anonymous_var_nameX365, int* anonymous_var_nameX366, int anonymous_var_nameX367, const char*** anonymous_var_nameX368);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX369, int* anonymous_var_nameX370, int anonymous_var_nameX371, const unsigned short int*** anonymous_var_nameX372);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX373, int* anonymous_var_nameX374, int anonymous_var_nameX375, const unsigned int*** anonymous_var_nameX376);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX377, int anonymous_var_nameX378);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX379, int anonymous_var_nameX380);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX381, int anonymous_var_nameX382);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX383, int anonymous_var_nameX384, const char** anonymous_var_nameX385);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX386, int anonymous_var_nameX387, const char** anonymous_var_nameX388);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX389, int anonymous_var_nameX390, const char** anonymous_var_nameX391);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX392);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX393);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX394);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX395, struct pcre_extra* anonymous_var_nameX396, const unsigned char* anonymous_var_nameX397);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX398, struct pcre16_extra* anonymous_var_nameX399, const unsigned char* anonymous_var_nameX400);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX401, struct pcre32_extra* anonymous_var_nameX402, const unsigned char* anonymous_var_nameX403);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX404, const unsigned short int* anonymous_var_nameX405, int anonymous_var_nameX406, int* anonymous_var_nameX407, int anonymous_var_nameX408);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX409, const unsigned int* anonymous_var_nameX410, int anonymous_var_nameX411, int* anonymous_var_nameX412, int anonymous_var_nameX413);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX414, int anonymous_var_nameX415);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX416, int anonymous_var_nameX417);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX418, int anonymous_var_nameX419);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX420);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX421);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX422);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX423, struct real_pcre_jit_stack* (*anonymous_var_nameX424)(void*), void* anonymous_var_nameX425);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX426, struct real_pcre16_jit_stack* (*anonymous_var_nameX427)(void*), void* anonymous_var_nameX428);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX429, struct real_pcre32_jit_stack* (*anonymous_var_nameX430)(void*), void* anonymous_var_nameX431);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

int __libc_current_sigrtmin();

int __libc_current_sigrtmax();

int sigaction(int __signal, const struct sigaction* __new_action, struct sigaction* __old_action);

int siginterrupt(int __signal, int __flag);

void (*signal(int __signal, void (*__handler)(int)))(int);

int sigaddset(struct anonymous_typeX13* __set, int __signal);

int sigdelset(struct anonymous_typeX13* __set, int __signal);

int sigemptyset(struct anonymous_typeX13* __set);

int sigfillset(struct anonymous_typeX13* __set);

int sigismember(const struct anonymous_typeX13* __set, int __signal);

int sigpending(struct anonymous_typeX13* __set);

int sigprocmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);

int sigsuspend(const struct anonymous_typeX13* __mask);

int sigwait(const struct anonymous_typeX13* __set, int* __signal);

int raise(int __signal);

int kill(int __pid, int __signal);

int killpg(int __pgrp, int __signal);

int tgkill(int __tgid, int __tid, int __signal);

int sigaltstack(const struct sigaltstack* __new_signal_stack, struct sigaltstack* __old_signal_stack);

void psiginfo(const struct siginfo* __info, const char* __msg);

void psignal(int __signal, const char* __msg);

int pthread_kill(long __pthread, int __signal);

int pthread_sigmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);

int sigqueue(int __pid, int __signal, const union sigval __value);

int sigtimedwait(const struct anonymous_typeX13* __set, struct siginfo* __info, const struct timespec* __timeout);

int sigwaitinfo(const struct anonymous_typeX13* __set, struct siginfo* __info);

void __FD_CLR_chk(int anonymous_var_nameX449, struct anonymous_typeX43* anonymous_var_nameX450, long int anonymous_var_nameX451);

void __FD_SET_chk(int anonymous_var_nameX452, struct anonymous_typeX43* anonymous_var_nameX453, long int anonymous_var_nameX454);

int __FD_ISSET_chk(int anonymous_var_nameX455, const struct anonymous_typeX43* anonymous_var_nameX456, long int anonymous_var_nameX457);

int select(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, struct timeval* __timeout);

int pselect(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, const struct timespec* __timeout, const struct anonymous_typeX13* __mask);

int gettimeofday(struct timeval* __tv, struct timezone* __tz);

int settimeofday(const struct timeval* __tv, const struct timezone* __tz);

int getitimer(int __which, struct itimerval* __current_value);

int setitimer(int __which, const struct itimerval* __new_value, struct itimerval* __old_value);

int utimes(const char* __path, const struct timeval __times[2]);

long time(long* __t);

int nanosleep(const struct timespec* __request, struct timespec* __remainder);

char* asctime(const struct tm* __tm);

char* asctime_r(const struct tm* __tm, char* __buf);

double difftime(long __lhs, long __rhs);

long mktime(struct tm* __tm);

struct tm* localtime(const long* __t);

struct tm* localtime_r(const long* __t, struct tm* __tm);

long timelocal(struct tm* __tm);

struct tm* gmtime(const long* __t);

struct tm* gmtime_r(const long* __t, struct tm* __tm);

long timegm(struct tm* __tm);

char* strptime(const char* __s, const char* __fmt, struct tm* __tm);

long int strftime(char* __buf, long int __n, const char* __fmt, const struct tm* __tm);

long int strftime_l(char* __buf, long int __n, const char* __fmt, const struct tm* __tm, struct __locale_t* __l);

char* ctime(const long* __t);

char* ctime_r(const long* __t, char* __buf);

void tzset();

long clock();

int clock_getcpuclockid(int __pid, int* __clock);

int clock_getres(int __clock, struct timespec* __resolution);

int clock_gettime(int __clock, struct timespec* __ts);

int clock_nanosleep(int __clock, int __flags, const struct timespec* __request, struct timespec* __remainder);

int clock_settime(int __clock, const struct timespec* __ts);

int timer_create(int __clock, struct sigevent* __event, void** __timer_ptr);

int timer_delete(void* __timer);

int timer_settime(void* __timer, int __flags, const struct itimerspec* __new_value, struct itimerspec* __old_value);

int timer_gettime(void* _timer, struct itimerspec* __ts);

int timer_getoverrun(void* __timer);

int iswalnum(unsigned int __wc);

int iswalpha(unsigned int __wc);

int iswblank(unsigned int __wc);

int iswcntrl(unsigned int __wc);

int iswdigit(unsigned int __wc);

int iswgraph(unsigned int __wc);

int iswlower(unsigned int __wc);

int iswprint(unsigned int __wc);

int iswpunct(unsigned int __wc);

int iswspace(unsigned int __wc);

int iswupper(unsigned int __wc);

int iswxdigit(unsigned int __wc);

unsigned int towlower(unsigned int __wc);

unsigned int towupper(unsigned int __wc);

long wctype(const char* __name);

int iswctype(unsigned int __wc, long __type);

unsigned int towctrans(unsigned int __wc, const void* __transform);

const void* wctrans(const char* __name);

unsigned int btowc(int __ch);

int fwprintf(struct __sFILE* __fp, const unsigned int* __fmt, ...);

int fwscanf(struct __sFILE* __fp, const unsigned int* __fmt, ...);

unsigned int fgetwc(struct __sFILE* __fp);

unsigned int* fgetws(unsigned int* __buf, int __size, struct __sFILE* __fp);

unsigned int fputwc(unsigned int __wc, struct __sFILE* __fp);

int fputws(const unsigned int* __s, struct __sFILE* __fp);

int fwide(struct __sFILE* __fp, int __mode);

unsigned int getwc(struct __sFILE* __fp);

unsigned int getwchar();

int mbsinit(const struct anonymous_typeX44* __ps);

long int mbrlen(const char* __s, long int __n, struct anonymous_typeX44* __ps);

long int mbrtowc(unsigned int* __buf, const char* __s, long int __n, struct anonymous_typeX44* __ps);

long int mbsrtowcs(unsigned int* __dst, const char** __src, long int __dst_n, struct anonymous_typeX44* __ps);

long int mbsnrtowcs(unsigned int* __dst, const char** __src, long int __src_n, long int __dst_n, struct anonymous_typeX44* __ps);

unsigned int putwc(unsigned int __wc, struct __sFILE* __fp);

unsigned int putwchar(unsigned int __wc);

int swprintf(unsigned int* __buf, long int __n, const unsigned int* __fmt, ...);

int swscanf(const unsigned int* __s, const unsigned int* __fmt, ...);

unsigned int ungetwc(unsigned int __wc, struct __sFILE* __fp);

int vfwprintf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);

int vfwscanf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);

int vswprintf(unsigned int* __buf, long int __n, const unsigned int* __fmt, va_list __args);

int vswscanf(const unsigned int* __s, const unsigned int* __fmt, va_list __args);

int vwprintf(const unsigned int* __fmt, va_list __args);

int vwscanf(const unsigned int* __fmt, va_list __args);

unsigned int* wcpcpy(unsigned int* __dst, const unsigned int* __src);

unsigned int* wcpncpy(unsigned int* __dst, const unsigned int* __src, long int __n);

long int wcrtomb(char* __buf, unsigned int __wc, struct anonymous_typeX44* __ps);

int wcscasecmp(const unsigned int* __lhs, const unsigned int* __rhs);

int wcscasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);

unsigned int* wcscat(unsigned int* __dst, const unsigned int* __src);

unsigned int* wcschr(const unsigned int* __s, unsigned int __wc);

int wcscmp(const unsigned int* __lhs, const unsigned int* __rhs);

int wcscoll(const unsigned int* __lhs, const unsigned int* __rhs);

unsigned int* wcscpy(unsigned int* __dst, const unsigned int* __src);

long int wcscspn(const unsigned int* __s, const unsigned int* __accept);

long int wcsftime(unsigned int* __buf, long int __n, const unsigned int* __fmt, const struct tm* __tm);

long int wcslen(const unsigned int* __s);

int wcsncasecmp(const unsigned int* __lhs, const unsigned int* __rhs, long int __n);

int wcsncasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, long int __n, struct __locale_t* __l);

unsigned int* wcsncat(unsigned int* __dst, const unsigned int* __src, long int __n);

int wcsncmp(const unsigned int* __lhs, const unsigned int* __rhs, long int __n);

unsigned int* wcsncpy(unsigned int* __dst, const unsigned int* __src, long int __n);

long int wcsnrtombs(char* __dst, const unsigned int** __src, long int __src_n, long int __dst_n, struct anonymous_typeX44* __ps);

unsigned int* wcspbrk(const unsigned int* __s, const unsigned int* __accept);

unsigned int* wcsrchr(const unsigned int* __s, unsigned int __wc);

long int wcsrtombs(char* __dst, const unsigned int** __src, long int __dst_n, struct anonymous_typeX44* __ps);

long int wcsspn(const unsigned int* __s, const unsigned int* __accept);

unsigned int* wcsstr(const unsigned int* __haystack, const unsigned int* __needle);

double wcstod(const unsigned int* __s, unsigned int** __end_ptr);

float wcstof(const unsigned int* __s, unsigned int** __end_ptr);

unsigned int* wcstok(unsigned int* __s, const unsigned int* __delimiter, unsigned int** __ptr);

long wcstol(const unsigned int* __s, unsigned int** __end_ptr, int __base);

long long wcstoll(const unsigned int* __s, unsigned int** __end_ptr, int __base);

long double wcstold(const unsigned int* __s, unsigned int** __end_ptr);

unsigned long int wcstoul(const unsigned int* __s, unsigned int** __end_ptr, int __base);

unsigned long long wcstoull(const unsigned int* __s, unsigned int** __end_ptr, int __base);

int wcswidth(const unsigned int* __s, long int __n);

long int wcsxfrm(unsigned int* __dst, const unsigned int* __src, long int __n);

int wctob(unsigned int __wc);

int wcwidth(unsigned int __wc);

unsigned int* wmemchr(const unsigned int* __src, unsigned int __wc, long int __n);

int wmemcmp(const unsigned int* __lhs, const unsigned int* __rhs, long int __n);

unsigned int* wmemcpy(unsigned int* __dst, const unsigned int* __src, long int __n);

unsigned int* wmempcpy(unsigned int* __dst, const unsigned int* __src, long int __n);

unsigned int* wmemmove(unsigned int* __dst, const unsigned int* __src, long int __n);

unsigned int* wmemset(unsigned int* __dst, unsigned int __wc, long int __n);

int wprintf(const unsigned int* __fmt, ...);

int wscanf(const unsigned int* __fmt, ...);

long long wcstoll_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);

unsigned long long wcstoull_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);

long double wcstold_l(const unsigned int* __s, unsigned int** __end_ptr, struct __locale_t* __l);

int wcscoll_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);

long int wcsxfrm_l(unsigned int* __dst, const unsigned int* __src, long int __n, struct __locale_t* __l);

long int wcslcat(unsigned int* __dst, const unsigned int* __src, long int __n);

long int wcslcpy(unsigned int* __dst, const unsigned int* __src, long int __n);

struct __sFILE* open_wmemstream(unsigned int** __ptr, long int* __size_ptr);

unsigned int* wcsdup(const unsigned int* __s);

long int wcsnlen(const unsigned int* __s, long int __n);

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
static inline int android_get_device_api_level(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
int __result1__;
int api_level_1;
int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&api_level_1, 0, sizeof(int));
    char value_0[92]={ 0 };
    __freed_obj__ = 0;
    if(_if_conditional1=__system_property_get("ro.build.version.sdk",value_0)<1,    __freed_obj__ = 0, 
    _if_conditional1) {
        __result1__ = -1;
        __freed_obj__ = 0;
        return __result1__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    api_level_1=atoi(value_0);
    __freed_obj__ = 0;
    __result2__ = (api_level_1>0)?api_level_1:-1;
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline void __bionic_bcopy(const void* b1, void* b2, long int len){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memmove(b2,b1,len);
    __freed_obj__ = 0;
}
static inline void __bionic_bzero(void* b, long int len){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memset(b,0,len);
    __freed_obj__ = 0;
}
static inline int ffs(int __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = __builtin_ffs(__n);
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}
static inline int ffsl(long __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __builtin_ffsl(__n);
    __freed_obj__ = 0;
    return __result4__;
    __freed_obj__ = 0;
}
static inline int ffsll(long long __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __builtin_ffsll(__n);
    __freed_obj__ = 0;
    return __result5__;
    __freed_obj__ = 0;
}
static inline char* ctermid(char* s){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
char* __result6__;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional2=s==0,    __freed_obj__ = 0, 
    _if_conditional2) {
        __result6__ = __result_obj__ = (char*)"/dev/tty";
        __freed_obj__ = 0;
        return __result6__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    strcpy(s,"/dev/tty");
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = s;
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
}
static inline struct __sFILE* tmpfile(){
void* __result_obj__;
_Bool __freed_obj__;
int p_2;
char* path_3;
int i_4;
_Bool _for_condtionalA1;
unsigned int r_5;
_Bool _if_conditional3;
struct __sFILE* __result8__;
int fd_6;
_Bool _if_conditional4;
struct __sFILE* result_7;
struct __sFILE* __result9__;
struct __sFILE* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_2, 0, sizeof(int));
memset(&path_3, 0, sizeof(char*));
memset(&i_4, 0, sizeof(int));
memset(&r_5, 0, sizeof(unsigned int));
memset(&fd_6, 0, sizeof(int));
memset(&result_7, 0, sizeof(struct __sFILE*));
    p_2=getpid();
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_4=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    i_4<100 ,    __freed_obj__ = 0, 
    _for_condtionalA1;    i_4++ ,    __freed_obj__ = 0, 
    0    ){
        r_5=arc4random();
        __freed_obj__ = 0;
        if(_if_conditional3=asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1,        __freed_obj__ = 0, 
        _if_conditional3) {
            __result8__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result8__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fd_6=open(path_3,2|64|128|131072,384);
        __freed_obj__ = 0;
        if(_if_conditional4=fd_6>=0,        __freed_obj__ = 0, 
        _if_conditional4) {
            result_7=fdopen(fd_6,"w+");
            __freed_obj__ = 0;
            unlink(path_3);
            __freed_obj__ = 0;
            free(path_3);
            __freed_obj__ = 0;
            __result9__ = __result_obj__ = result_7;
            __freed_obj__ = 0;
            return __result9__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(path_3);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}
static inline double strtod_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
double __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result11__ = strtod(__s,__end_ptr);
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}
static inline float strtof_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
float __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = strtof(__s,__end_ptr);
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
}
static inline long strtol_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
long __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = strtol(__s,__end_ptr,__base);
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}
static inline void die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
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
void* right_value0;
unsigned int* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    __result14__ = __result_obj__ = ((unsigned int*)(right_value0=wchar_tp_substring(str,head,tail)));
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = charp_index_count(str,search_str,count,default_value);
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = charp_index_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = charp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = charp_rindex_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result19__ = charp_rindex_count(str,search_str,default_value,-1);
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value1;
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result20__ = __result_obj__ = ((struct list$1charph*)(right_value1=charp_scan_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((struct list$1charph*)(right_value2=charp_scan_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value3;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
    __result22__ = __result_obj__ = ((struct list$1charph*)(right_value3=charp_split_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value4;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((struct list$1charph*)(right_value4=charp_split_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value5;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
    __result24__ = __result_obj__ = ((struct list$1charph*)(right_value5=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
}
static inline char* string_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value6;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
    __result25__ = __result_obj__ = ((char*)(right_value6=charp_strip(self)));
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}
static inline char* string_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value7;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
    __result26__ = __result_obj__ = ((char*)(right_value7=string_printable(str)));
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value8;
unsigned int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((unsigned int*)(right_value8=charp_to_wstring(str)));
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value9;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
    __result28__ = __result_obj__ = ((char*)(right_value9=wchar_tp_to_string(wstr)));
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = wchar_tp_length(str);
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value10;
unsigned int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    __result30__ = __result_obj__ = ((unsigned int*)(right_value10=wchar_tp_delete(str,head,tail)));
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = wchar_tp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = wchar_tp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value11;
unsigned int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((unsigned int*)(right_value11=wchar_tp_reverse(str)));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value12;
unsigned int* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result34__ = __result_obj__ = ((unsigned int*)(right_value12=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
unsigned int* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((unsigned int*)(right_value13=wchar_tp_printable(str)));
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = wchar_tp_get_hash_key(value);
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result37__ = charp_match_group_strings(self,reg,count,group_strings);
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = charp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result39__ = charp_index_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value14;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
    __result40__ = __result_obj__ = ((char*)(right_value14=charp_replace(self,index,c)));
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((char*)(right_value15=charp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value16;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    __result42__ = __result_obj__ = ((char*)(right_value16=charp_sub(self,reg,replace)));
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value17;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(right_value17=charp_sub_count(self,reg,replace,count)));
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value18;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((struct list$1charph*)(right_value18=charp_split_str(self,str)));
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value19;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
    __result45__ = __result_obj__ = ((struct list$1charph*)(right_value19=charp_scan(self,reg)));
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value20;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((struct list$1charph*)(right_value20=charp_split(self,reg)));
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result47__ = charp_match(self,reg);
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value21;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
    __result48__ = __result_obj__ = ((struct list$1charph*)(right_value21=charp_split_maxsplit(self,reg,maxsplit)));
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result49__ = charp_rindex_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result50__ = charp_match_count(self,reg,count);
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value22;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
    __result51__ = __result_obj__ = ((char*)(right_value22=charp_sub_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value23;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result52__ = __result_obj__ = ((char*)(right_value23=charp_sub_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
    __result54__ = __result_obj__ = ((char*)(right_value25=string_chomp(str)));
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

// body function




















































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_8;
int erro_ofs_9;
int options_10;
void* right_value26;
char* __dec_obj1;
_Bool _if_conditional5;
struct come_regex* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_9, 0, sizeof(int));
memset(&options_10, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_10=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __freed_obj__ = 0;
    __dec_obj1=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 24))->str=(char*)come_increment_ref_count(((char*)(right_value26=__builtin_string(str))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
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
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 34))->options=options_10;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 36))->re=pcre_compile(str,options_10,&err_8,&erro_ofs_9,((void*)0));
    __freed_obj__ = 0;
    if(_if_conditional5=((struct come_regex*)come_null_check(self, "libcomelang2-str.c", 49))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional5) {
        printf("regex error (%s)\n",str);
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result55__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional6=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 57))->str,    __freed_obj__ = 0, 
    _if_conditional6) {
        if(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str && !__freed_obj__) { ((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str = come_decrement_ref_count(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 55))->str, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional7=reg&&((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 60))->re,    __freed_obj__ = 0, 
    _if_conditional7) {
        free(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 58))->re);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value27;
void* right_value28;
struct come_regex* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((struct come_regex*)(right_value28=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value27=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 64)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value29;
void* right_value30;
struct come_regex* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
    __result57__ = __result_obj__ = ((struct come_regex*)(right_value30=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value29=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 69)))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
struct come_regex* __result58__;
void* right_value31;
struct come_regex* result_11;
void* right_value32;
char* __dec_obj2;
const char* err_12;
int erro_ofs_13;
_Bool _if_conditional9;
struct come_regex* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct come_regex*));
memset(&right_value32, 0, sizeof(void*));
memset(&erro_ofs_13, 0, sizeof(int));
    if(_if_conditional8=reg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        __result58__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_11=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value31=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 79))));
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 81))->str;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 81))->str=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 81))->str))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 83))->ignore_case=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 83))->ignore_case;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 84))->multiline=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 84))->multiline;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 85))->global=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 85))->global;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 86))->extended=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 86))->extended;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 87))->dotall=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 87))->dotall;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 88))->anchored=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 88))->anchored;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 89))->dollar_endonly=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 89))->dollar_endonly;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 90))->ungreedy=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 90))->ungreedy;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 92))->options=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 92))->options;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 97))->re=pcre_compile(((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 97))->str,((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 97))->options,&err_12,&erro_ofs_13,((void*)0));
    __freed_obj__ = 0;
    if(_if_conditional9=((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 104))->re==((void*)0),    __freed_obj__ = 0, 
    _if_conditional9) {
        printf("regex compile error(%s)\n",((struct come_regex*)come_null_check(result_11, "libcomelang2-str.c", 100))->str);
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result59__ = __result_obj__ = result_11;
    if(result_11 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
    if(result_11 && !__freed_obj__) { come_call_finalizer(come_regex_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value33;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
    __result60__ = __result_obj__ = ((char*)(right_value33=__builtin_string(((struct come_regex*)come_null_check(regex, "libcomelang2-str.c", 109))->str)));
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

char* string_lower_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
char* result_14;
int i_15;
_Bool _for_condtionalA2;
_Bool _if_conditional10;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_14, 0, sizeof(char*));
memset(&i_15, 0, sizeof(int));
    result_14=(char*)come_increment_ref_count(((char*)(right_value34=__builtin_string(str))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_15=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    i_15<strlen(str) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    i_15++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional10=str[i_15]>=65&&str[i_15]<=90,        __freed_obj__ = 0, 
        _if_conditional10) {
            result_14[i_15]=str[i_15]-65+97;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = result_14;
    if(result_14 && !__freed_obj__) { result_14 = come_decrement_ref_count(result_14, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
    if(result_14 && !__freed_obj__) { result_14 = come_decrement_ref_count(result_14, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_upper_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value35;
char* result_16;
int i_17;
_Bool _for_condtionalA3;
_Bool _if_conditional11;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&result_16, 0, sizeof(char*));
memset(&i_17, 0, sizeof(int));
    result_16=(char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(str))));
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_17=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    i_17<strlen(str) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    i_17++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional11=str[i_17]>=97&&str[i_17]<=122,        __freed_obj__ = 0, 
        _if_conditional11) {
            result_16[i_17]=str[i_17]-97+65;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = result_16;
    if(result_16 && !__freed_obj__) { result_16 = come_decrement_ref_count(result_16, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
    if(result_16 && !__freed_obj__) { result_16 = come_decrement_ref_count(result_16, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
void* right_value36;
unsigned int* __result63__;
int len_18;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
void* right_value37;
unsigned int* __result64__;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
void* right_value38;
unsigned int* __result65__;
_Bool _if_conditional19;
void* right_value39;
unsigned int* __result66__;
void* right_value40;
unsigned int* result_19;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&len_18, 0, sizeof(int));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&result_19, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    if(_if_conditional12=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional12) {
        __result63__ = __result_obj__ = ((unsigned int*)(right_value36=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_18=wcslen(str);
    __freed_obj__ = 0;
    if(_if_conditional13=head<0,    __freed_obj__ = 0, 
    _if_conditional13) {
        head+=len_18;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional14=tail<0,    __freed_obj__ = 0, 
    _if_conditional14) {
        tail+=len_18+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional15=head>tail,    __freed_obj__ = 0, 
    _if_conditional15) {
        __result64__ = __result_obj__ = ((unsigned int*)(right_value37=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result64__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional16=head<0,    __freed_obj__ = 0, 
    _if_conditional16) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional17=tail>=len_18,    __freed_obj__ = 0, 
    _if_conditional17) {
        tail=len_18;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional18=head==tail,    __freed_obj__ = 0, 
    _if_conditional18) {
        __result65__ = __result_obj__ = ((unsigned int*)(right_value38=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional19=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional19) {
        __result66__ = __result_obj__ = ((unsigned int*)(right_value39=__builtin_wstring("")));
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_19=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value40=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str.c", 173))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(result_19,str+head,sizeof(unsigned int)*(tail-head));
    __freed_obj__ = 0;
    result_19[tail-head]=0;
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = result_19;
    if(result_19 && !__freed_obj__) { result_19 = come_decrement_ref_count(result_19, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
    if(result_19 && !__freed_obj__) { result_19 = come_decrement_ref_count(result_19, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
unsigned int* __result68__;
int len_20;
void* right_value41;
unsigned int* wstr_21;
int ret_22;
_Bool _if_conditional21;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_20, 0, sizeof(int));
memset(&right_value41, 0, sizeof(void*));
memset(&wstr_21, 0, sizeof(unsigned int*));
memset(&ret_22, 0, sizeof(int));
    if(_if_conditional20=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional20) {
        __result68__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_20=strlen(str);
    __freed_obj__ = 0;
    wstr_21=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value41=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_20+1)), "libcomelang2-str.c", 188))));
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ret_22=mbstowcs(wstr_21,str,len_20+1);
    __freed_obj__ = 0;
    wstr_21[ret_22]=0;
    __freed_obj__ = 0;
    if(_if_conditional21=ret_22<0,    __freed_obj__ = 0, 
    _if_conditional21) {
        wstr_21[0]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result69__ = __result_obj__ = wstr_21;
    if(wstr_21 && !__freed_obj__) { wstr_21 = come_decrement_ref_count(wstr_21, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
    if(wstr_21 && !__freed_obj__) { wstr_21 = come_decrement_ref_count(wstr_21, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int n_23;
int len_24;
int i_25;
_Bool _for_condtionalA4;
int len2_26;
int j_27;
_Bool _for_condtionalA5;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&n_23, 0, sizeof(int));
memset(&len_24, 0, sizeof(int));
memset(&i_25, 0, sizeof(int));
memset(&len2_26, 0, sizeof(int));
memset(&j_27, 0, sizeof(int));
    n_23=0;
    __freed_obj__ = 0;
    len_24=strlen(str);
    __freed_obj__ = 0;
    for(
    i_25=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    i_25<len_24 ,    __freed_obj__ = 0, 
    _for_condtionalA4;    i_25++ ,    __freed_obj__ = 0, 
    0    ){
        len2_26=strlen(search_str);
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        j_27=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        j_27<len2_26 ,        __freed_obj__ = 0, 
        _for_condtionalA5;        j_27++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional22=str[i_25+j_27]!=search_str[j_27],            __freed_obj__ = 0, 
            _if_conditional22) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=j_27==len2_26,        __freed_obj__ = 0, 
        _if_conditional23) {
            n_23++;
            __freed_obj__ = 0;
            if(_if_conditional24=n_23==count,            __freed_obj__ = 0, 
            _if_conditional24) {
                __result70__ = i_25;
                __freed_obj__ = 0;
                return __result70__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result71__ = default_value;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int ovec_max_28;
int result_32;
int offset_33;
const char* err_34;
int erro_ofs_35;
int options_36;
char* str_37;
struct real_pcre8_or_16* re_38;
int n_39;
_Bool _while_condtional1;
int options_40;
int len_41;
int regex_result_42;
int i_43;
_Bool _for_condtionalA6;
int i_44;
_Bool _for_condtionalA7;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_28, 0, sizeof(int));
memset(&result_32, 0, sizeof(int));
memset(&offset_33, 0, sizeof(int));
memset(&erro_ofs_35, 0, sizeof(int));
memset(&options_36, 0, sizeof(int));
memset(&str_37, 0, sizeof(char*));
memset(&re_38, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_39, 0, sizeof(int));
memset(&options_40, 0, sizeof(int));
memset(&len_41, 0, sizeof(int));
memset(&regex_result_42, 0, sizeof(int));
memset(&i_43, 0, sizeof(int));
memset(&i_44, 0, sizeof(int));
    ovec_max_28=16;
    __freed_obj__ = 0;
    int start_29[ovec_max_28];
    memset(&start_29, 0, sizeof(int)    *(ovec_max_28)    );
    __freed_obj__ = 0;
    int end_30[ovec_max_28];
    memset(&end_30, 0, sizeof(int)    *(ovec_max_28)    );
    __freed_obj__ = 0;
    int ovec_value_31[ovec_max_28*3];
    memset(&ovec_value_31, 0, sizeof(int)    *(ovec_max_28*3)    );
    __freed_obj__ = 0;
    result_32=default_value;
    __freed_obj__ = 0;
    offset_33=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_36=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 239))->options;
    __freed_obj__ = 0;
    str_37=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 240))->str;
    __freed_obj__ = 0;
    re_38=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 242))->re;
    __freed_obj__ = 0;
    n_39=0;
    __freed_obj__ = 0;
    while(_while_condtional1=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional1) {
        options_40=2097152;
        __freed_obj__ = 0;
        len_41=strlen(self);
        __freed_obj__ = 0;
        regex_result_42=pcre_exec(re_38,(struct pcre_extra*)0,self,len_41,offset_33,options_40,ovec_value_31,ovec_max_28*3);
        __freed_obj__ = 0;
        for(
        i_43=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        i_43<ovec_max_28 ,        __freed_obj__ = 0, 
        _for_condtionalA6;        i_43++ ,        __freed_obj__ = 0, 
        0        ){
            start_29[i_43]=ovec_value_31[i_43*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_44=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        i_44<ovec_max_28 ,        __freed_obj__ = 0, 
        _for_condtionalA7;        i_44++ ,        __freed_obj__ = 0, 
        0        ){
            end_30[i_44]=ovec_value_31[i_44*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=regex_result_42>0,        __freed_obj__ = 0, 
        _if_conditional25) {
            n_39++;
            __freed_obj__ = 0;
            if(_if_conditional26=offset_33==end_30[0],            __freed_obj__ = 0, 
            _if_conditional26) {
                offset_33++;
                __freed_obj__ = 0;
            }
            else {
                offset_33=end_30[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional27=n_39==count,            __freed_obj__ = 0, 
            _if_conditional27) {
                result_32=start_29[0];
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
    __result72__ = result_32;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int len_45;
char* p_46;
_Bool _while_condtional2;
_Bool _if_conditional28;
int __result73__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_45, 0, sizeof(int));
memset(&p_46, 0, sizeof(char*));
    __freed_obj__ = 0;
    len_45=strlen(search_str);
    __freed_obj__ = 0;
    p_46=str+strlen(str)-len_45;
    __freed_obj__ = 0;
    while(_while_condtional2=p_46>=str,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional28=strncmp(p_46,search_str,len_45)==0,        __freed_obj__ = 0, 
        _if_conditional28) {
            __result73__ = p_46-str;
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_46--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result74__ = default_value;
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_47;
int erro_ofs_48;
int options_49;
char* str_50;
struct real_pcre8_or_16* re_51;
void* right_value42;
char* self2_52;
int ovec_max_53;
int result_57;
int offset_58;
_Bool _while_condtional3;
int options_59;
int len_60;
int regex_result_61;
int i_62;
_Bool _for_condtionalA8;
int i_63;
_Bool _for_condtionalA9;
_Bool _if_conditional29;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_48, 0, sizeof(int));
memset(&options_49, 0, sizeof(int));
memset(&str_50, 0, sizeof(char*));
memset(&re_51, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value42, 0, sizeof(void*));
memset(&self2_52, 0, sizeof(char*));
memset(&ovec_max_53, 0, sizeof(int));
memset(&result_57, 0, sizeof(int));
memset(&offset_58, 0, sizeof(int));
memset(&options_59, 0, sizeof(int));
memset(&len_60, 0, sizeof(int));
memset(&regex_result_61, 0, sizeof(int));
memset(&i_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_49=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 306))->options;
    __freed_obj__ = 0;
    str_50=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 307))->str;
    __freed_obj__ = 0;
    re_51=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 309))->re;
    __freed_obj__ = 0;
    self2_52=(char*)come_increment_ref_count(((char*)(right_value42=charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 311))))));
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ovec_max_53=16;
    __freed_obj__ = 0;
    int start_54[ovec_max_53];
    memset(&start_54, 0, sizeof(int)    *(ovec_max_53)    );
    __freed_obj__ = 0;
    int end_55[ovec_max_53];
    memset(&end_55, 0, sizeof(int)    *(ovec_max_53)    );
    __freed_obj__ = 0;
    int ovec_value_56[ovec_max_53*3];
    memset(&ovec_value_56, 0, sizeof(int)    *(ovec_max_53*3)    );
    __freed_obj__ = 0;
    result_57=default_value;
    __freed_obj__ = 0;
    offset_58=0;
    __freed_obj__ = 0;
    while(_while_condtional3=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional3) {
        options_59=2097152;
        __freed_obj__ = 0;
        len_60=strlen(self2_52);
        __freed_obj__ = 0;
        regex_result_61=pcre_exec(re_51,(struct pcre_extra*)0,self2_52,len_60,offset_58,options_59,ovec_value_56,ovec_max_53*3);
        __freed_obj__ = 0;
        for(
        i_62=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        i_62<ovec_max_53 ,        __freed_obj__ = 0, 
        _for_condtionalA8;        i_62++ ,        __freed_obj__ = 0, 
        0        ){
            start_54[i_62]=ovec_value_56[i_62*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_63=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        i_63<ovec_max_53 ,        __freed_obj__ = 0, 
        _for_condtionalA9;        i_63++ ,        __freed_obj__ = 0, 
        0        ){
            end_55[i_63]=ovec_value_56[i_63*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=regex_result_61==1||regex_result_61>0,        __freed_obj__ = 0, 
        _if_conditional29) {
            result_57=strlen(self)-1-start_54[0];
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
    __result75__ = result_57;
    if(self2_52 && !__freed_obj__) { self2_52 = come_decrement_ref_count(self2_52, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(self2_52 && !__freed_obj__) { self2_52 = come_decrement_ref_count(self2_52, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int len_64;
char* p_65;
int n_66;
_Bool _while_condtional4;
_Bool _if_conditional30;
_Bool _if_conditional31;
int __result76__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_64, 0, sizeof(int));
memset(&p_65, 0, sizeof(char*));
memset(&n_66, 0, sizeof(int));
    __freed_obj__ = 0;
    len_64=strlen(search_str);
    __freed_obj__ = 0;
    p_65=str+strlen(str)-len_64;
    __freed_obj__ = 0;
    n_66=0;
    __freed_obj__ = 0;
    while(_while_condtional4=p_65>=str,    __freed_obj__ = 0, 
    _while_condtional4) {
        if(_if_conditional30=strncmp(p_65,search_str,len_64)==0,        __freed_obj__ = 0, 
        _if_conditional30) {
            n_66++;
            __freed_obj__ = 0;
            if(_if_conditional31=n_66==count,            __freed_obj__ = 0, 
            _if_conditional31) {
                __result76__ = p_65-str;
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_65--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result77__ = default_value;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value43;
void* right_value44;
struct list$1charph* result_69;
int offset_70;
int ovec_max_71;
const char* err_75;
int erro_ofs_76;
int options_77;
char* str_78;
struct real_pcre8_or_16* re_79;
_Bool _while_condtional6;
int options_80;
int len_81;
int regex_result_82;
int i_83;
_Bool _for_condtionalA10;
int i_84;
_Bool _for_condtionalA11;
_Bool _if_conditional33;
void* right_value45;
char* str_85;
void* right_value46;
void* right_value47;
struct list$1charph* group_strings_86;
void* right_value48;
char* str2_87;
_Bool _if_conditional34;
struct list$1charph* __result79__;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value52;
char* str_91;
void* right_value53;
void* right_value54;
struct list$1charph* group_strings_92;
int i_93;
_Bool _for_condtionalA12;
void* right_value55;
char* match_string_94;
void* right_value56;
char* str2_95;
_Bool _if_conditional39;
struct list$1charph* __result81__;
_Bool _if_conditional40;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct list$1charph*));
memset(&offset_70, 0, sizeof(int));
memset(&ovec_max_71, 0, sizeof(int));
memset(&erro_ofs_76, 0, sizeof(int));
memset(&options_77, 0, sizeof(int));
memset(&str_78, 0, sizeof(char*));
memset(&re_79, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_80, 0, sizeof(int));
memset(&len_81, 0, sizeof(int));
memset(&regex_result_82, 0, sizeof(int));
memset(&i_83, 0, sizeof(int));
memset(&i_84, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&str_85, 0, sizeof(char*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&group_strings_86, 0, sizeof(struct list$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&str2_87, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
memset(&str_91, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&group_strings_92, 0, sizeof(struct list$1charph*));
memset(&i_93, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&match_string_94, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&str2_95, 0, sizeof(char*));
    result_69=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value43=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 374))), "libcomelang2-str.c", 374)))))));
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_70=0;
    __freed_obj__ = 0;
    ovec_max_71=16;
    __freed_obj__ = 0;
    int start_72[ovec_max_71];
    memset(&start_72, 0, sizeof(int)    *(ovec_max_71)    );
    __freed_obj__ = 0;
    int end_73[ovec_max_71];
    memset(&end_73, 0, sizeof(int)    *(ovec_max_71)    );
    __freed_obj__ = 0;
    int ovec_value_74[ovec_max_71*3];
    memset(&ovec_value_74, 0, sizeof(int)    *(ovec_max_71*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_77=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 386))->options;
    __freed_obj__ = 0;
    str_78=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 387))->str;
    __freed_obj__ = 0;
    re_79=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 389))->re;
    __freed_obj__ = 0;
    while(_while_condtional6=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional6) {
        options_80=2097152;
        __freed_obj__ = 0;
        len_81=strlen(self);
        __freed_obj__ = 0;
        regex_result_82=pcre_exec(re_79,(struct pcre_extra*)0,self,len_81,offset_70,options_80,ovec_value_74,ovec_max_71*3);
        __freed_obj__ = 0;
        for(
        i_83=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        i_83<ovec_max_71 ,        __freed_obj__ = 0, 
        _for_condtionalA10;        i_83++ ,        __freed_obj__ = 0, 
        0        ){
            start_72[i_83]=ovec_value_74[i_83*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_84=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        i_84<ovec_max_71 ,        __freed_obj__ = 0, 
        _for_condtionalA11;        i_84++ ,        __freed_obj__ = 0, 
        0        ){
            end_73[i_84]=ovec_value_74[i_84*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=regex_result_82==1,        __freed_obj__ = 0, 
        _if_conditional33) {
            str_85=(char*)come_increment_ref_count(((char*)(right_value45=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 406)),start_72[0],end_73[0]))));
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            group_strings_86=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value46=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 408))), "libcomelang2-str.c", 408)))))));
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_87=(char*)come_increment_ref_count(((char*)(right_value48=block(parent,str_85,group_strings_86))));
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional34=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 416))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional34) {
                __result79__ = __result_obj__ = result_69;
                if(str_85 && !__freed_obj__) { str_85 = come_decrement_ref_count(str_85, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_86 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_87 && !__freed_obj__) { str2_87 = come_decrement_ref_count(str2_87, (void*)0, (void*)0, 0, 0, 0); }
                if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_69, "libcomelang2-str.c", 416)),(char*)come_increment_ref_count(str2_87));
            __freed_obj__ = 0;
            if(_if_conditional37=offset_70==end_73[0],            __freed_obj__ = 0, 
            _if_conditional37) {
                offset_70++;
                __freed_obj__ = 0;
            }
            else {
                offset_70=end_73[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_85 && !__freed_obj__) { str_85 = come_decrement_ref_count(str_85, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_86 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_87 && !__freed_obj__) { str2_87 = come_decrement_ref_count(str2_87, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional38=regex_result_82>1,            __freed_obj__ = 0, 
            _if_conditional38) {
                str_91=(char*)come_increment_ref_count(((char*)(right_value52=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 427)),start_72[0],end_73[0]))));
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                group_strings_92=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 429))), "libcomelang2-str.c", 429)))))));
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_93=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA12=                i_93<regex_result_82 ,                __freed_obj__ = 0, 
                _for_condtionalA12;                i_93++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_94=(char*)come_increment_ref_count(((char*)(right_value55=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 431)),start_72[i_93],end_73[i_93]))));
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_92, "libcomelang2-str.c", 432)),(char*)come_increment_ref_count(match_string_94));
                    __freed_obj__ = 0;
                    if(match_string_94 && !__freed_obj__) { match_string_94 = come_decrement_ref_count(match_string_94, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_95=(char*)come_increment_ref_count(((char*)(right_value56=block(parent,str_91,group_strings_92))));
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional39=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 441))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional39) {
                    __result81__ = __result_obj__ = result_69;
                    if(str_91 && !__freed_obj__) { str_91 = come_decrement_ref_count(str_91, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_92 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_95 && !__freed_obj__) { str2_95 = come_decrement_ref_count(str2_95, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result81__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_69, "libcomelang2-str.c", 441)),(char*)come_increment_ref_count(str2_95));
                __freed_obj__ = 0;
                if(_if_conditional40=offset_70==end_73[0],                __freed_obj__ = 0, 
                _if_conditional40) {
                    offset_70++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_70=end_73[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_91 && !__freed_obj__) { str_91 = come_decrement_ref_count(str_91, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_92 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_95 && !__freed_obj__) { str2_95 = come_decrement_ref_count(str2_95, (void*)0, (void*)0, 0, 0, 0); }
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
    __result82__ = __result_obj__ = result_69;
    if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result78__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result78__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_67;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1charph*));
            it_67=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional5=it_67!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional5) {
                prev_it_68=it_67;
                __freed_obj__ = 0;
                it_67=((struct list_item$1charph*)come_null_check(it_67, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_68 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional32=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional32) {
                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional35;
void* right_value49;
struct list_item$1charph* litem_88;
char* __dec_obj3;
_Bool _if_conditional36;
void* right_value50;
struct list_item$1charph* litem_89;
char* __dec_obj4;
void* right_value51;
struct list_item$1charph* litem_90;
char* __dec_obj5;
struct list$1charph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional35=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional35) {
                    litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj3=((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_88;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_88;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional36=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional36) {
                        litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj4=((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_89;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_89;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_90;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_90;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value57;
void* right_value58;
struct list$1charph* result_96;
int offset_97;
int ovec_max_98;
const char* err_102;
int erro_ofs_103;
int options_104;
char* str_105;
struct real_pcre8_or_16* re_106;
int n_107;
_Bool _while_condtional7;
int options_108;
int len_109;
int regex_result_110;
int i_111;
_Bool _for_condtionalA13;
int i_112;
_Bool _for_condtionalA14;
_Bool _if_conditional41;
void* right_value59;
char* str_113;
void* right_value60;
void* right_value61;
struct list$1charph* group_strings_114;
void* right_value62;
char* str2_115;
_Bool _if_conditional42;
struct list$1charph* __result83__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value63;
char* str_116;
void* right_value64;
void* right_value65;
struct list$1charph* group_strings_117;
int i_118;
_Bool _for_condtionalA15;
void* right_value66;
char* match_string_119;
void* right_value67;
char* str2_120;
_Bool _if_conditional46;
struct list$1charph* __result84__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&result_96, 0, sizeof(struct list$1charph*));
memset(&offset_97, 0, sizeof(int));
memset(&ovec_max_98, 0, sizeof(int));
memset(&erro_ofs_103, 0, sizeof(int));
memset(&options_104, 0, sizeof(int));
memset(&str_105, 0, sizeof(char*));
memset(&re_106, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_107, 0, sizeof(int));
memset(&options_108, 0, sizeof(int));
memset(&len_109, 0, sizeof(int));
memset(&regex_result_110, 0, sizeof(int));
memset(&i_111, 0, sizeof(int));
memset(&i_112, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&str_113, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&group_strings_114, 0, sizeof(struct list$1charph*));
memset(&right_value62, 0, sizeof(void*));
memset(&str2_115, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&str_116, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&group_strings_117, 0, sizeof(struct list$1charph*));
memset(&i_118, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&match_string_119, 0, sizeof(char*));
memset(&right_value67, 0, sizeof(void*));
memset(&str2_120, 0, sizeof(char*));
    result_96=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 463))), "libcomelang2-str.c", 463)))))));
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_97=0;
    __freed_obj__ = 0;
    ovec_max_98=16;
    __freed_obj__ = 0;
    int start_99[ovec_max_98];
    memset(&start_99, 0, sizeof(int)    *(ovec_max_98)    );
    __freed_obj__ = 0;
    int end_100[ovec_max_98];
    memset(&end_100, 0, sizeof(int)    *(ovec_max_98)    );
    __freed_obj__ = 0;
    int ovec_value_101[ovec_max_98*3];
    memset(&ovec_value_101, 0, sizeof(int)    *(ovec_max_98*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_104=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 475))->options;
    __freed_obj__ = 0;
    str_105=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 476))->str;
    __freed_obj__ = 0;
    re_106=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 478))->re;
    __freed_obj__ = 0;
    n_107=0;
    __freed_obj__ = 0;
    while(_while_condtional7=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional7) {
        options_108=2097152;
        __freed_obj__ = 0;
        len_109=strlen(self);
        __freed_obj__ = 0;
        regex_result_110=pcre_exec(re_106,(struct pcre_extra*)0,self,len_109,offset_97,options_108,ovec_value_101,ovec_max_98*3);
        __freed_obj__ = 0;
        for(
        i_111=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_111<ovec_max_98 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_111++ ,        __freed_obj__ = 0, 
        0        ){
            start_99[i_111]=ovec_value_101[i_111*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_112=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        i_112<ovec_max_98 ,        __freed_obj__ = 0, 
        _for_condtionalA14;        i_112++ ,        __freed_obj__ = 0, 
        0        ){
            end_100[i_112]=ovec_value_101[i_112*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional41=regex_result_110==1,        __freed_obj__ = 0, 
        _if_conditional41) {
            str_113=(char*)come_increment_ref_count(((char*)(right_value59=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 497)),start_99[0],end_100[0]))));
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            group_strings_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value60=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 499))), "libcomelang2-str.c", 499)))))));
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_115=(char*)come_increment_ref_count(((char*)(right_value62=block(parent,str_113,group_strings_114))));
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional42=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 507))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional42) {
                __result83__ = __result_obj__ = result_96;
                if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_115 && !__freed_obj__) { str2_115 = come_decrement_ref_count(str2_115, (void*)0, (void*)0, 0, 0, 0); }
                if(result_96 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_96, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_96, "libcomelang2-str.c", 507)),(char*)come_increment_ref_count(str2_115));
            __freed_obj__ = 0;
            if(_if_conditional43=offset_97==end_100[0],            __freed_obj__ = 0, 
            _if_conditional43) {
                offset_97++;
                __freed_obj__ = 0;
            }
            else {
                offset_97=end_100[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            n_107++;
            __freed_obj__ = 0;
            if(_if_conditional44=n_107==count,            __freed_obj__ = 0, 
            _if_conditional44) {
                if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_115 && !__freed_obj__) { str2_115 = come_decrement_ref_count(str2_115, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_115 && !__freed_obj__) { str2_115 = come_decrement_ref_count(str2_115, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional45=regex_result_110>1,            __freed_obj__ = 0, 
            _if_conditional45) {
                str_116=(char*)come_increment_ref_count(((char*)(right_value63=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 523)),start_99[0],end_100[0]))));
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                group_strings_117=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value64=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 525))), "libcomelang2-str.c", 525)))))));
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_118=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA15=                i_118<regex_result_110 ,                __freed_obj__ = 0, 
                _for_condtionalA15;                i_118++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_119=(char*)come_increment_ref_count(((char*)(right_value66=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 527)),start_99[i_118],end_100[i_118]))));
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_117, "libcomelang2-str.c", 528)),(char*)come_increment_ref_count(match_string_119));
                    __freed_obj__ = 0;
                    if(match_string_119 && !__freed_obj__) { match_string_119 = come_decrement_ref_count(match_string_119, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_120=(char*)come_increment_ref_count(((char*)(right_value67=block(parent,str_116,group_strings_117))));
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional46=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 537))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional46) {
                    __result84__ = __result_obj__ = result_96;
                    if(str_116 && !__freed_obj__) { str_116 = come_decrement_ref_count(str_116, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_117 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_120 && !__freed_obj__) { str2_120 = come_decrement_ref_count(str2_120, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_96 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_96, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_96, "libcomelang2-str.c", 537)),(char*)come_increment_ref_count(str2_120));
                __freed_obj__ = 0;
                if(_if_conditional47=offset_97==end_100[0],                __freed_obj__ = 0, 
                _if_conditional47) {
                    offset_97++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_97=end_100[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                n_107++;
                __freed_obj__ = 0;
                if(_if_conditional48=n_107==count,                __freed_obj__ = 0, 
                _if_conditional48) {
                    if(str_116 && !__freed_obj__) { str_116 = come_decrement_ref_count(str_116, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_117 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_120 && !__freed_obj__) { str2_120 = come_decrement_ref_count(str2_120, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_116 && !__freed_obj__) { str_116 = come_decrement_ref_count(str_116, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_117 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_120 && !__freed_obj__) { str2_120 = come_decrement_ref_count(str2_120, (void*)0, (void*)0, 0, 0, 0); }
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
    __result85__ = __result_obj__ = result_96;
    if(result_96 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_96, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
    if(result_96 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_96, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_121;
int erro_ofs_122;
int options_123;
char* str_124;
struct real_pcre8_or_16* re_125;
void* right_value68;
void* right_value69;
struct list$1charph* result_126;
int offset_127;
int ovec_max_128;
_Bool _while_condtional8;
int options_132;
int len_133;
int regex_result_134;
int i_135;
_Bool _for_condtionalA16;
int i_136;
_Bool _for_condtionalA17;
_Bool _if_conditional49;
void* right_value70;
char* str_137;
void* right_value71;
void* right_value72;
struct list$1charph* match_strings_138;
void* right_value73;
char* str2_139;
_Bool _if_conditional50;
struct list$1charph* __result86__;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value74;
char* str_140;
_Bool _if_conditional53;
void* right_value75;
void* right_value76;
struct list$1charph* match_strings_141;
int i_142;
_Bool _for_condtionalA18;
void* right_value77;
char* match_str_143;
void* right_value78;
char* str2_144;
_Bool _if_conditional54;
struct list$1charph* __result87__;
_Bool _if_conditional55;
void* right_value79;
char* str_145;
void* right_value80;
void* right_value81;
struct list$1charph* match_strings_146;
void* right_value82;
char* str2_147;
_Bool _if_conditional56;
struct list$1charph* __result88__;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_122, 0, sizeof(int));
memset(&options_123, 0, sizeof(int));
memset(&str_124, 0, sizeof(char*));
memset(&re_125, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct list$1charph*));
memset(&offset_127, 0, sizeof(int));
memset(&ovec_max_128, 0, sizeof(int));
memset(&options_132, 0, sizeof(int));
memset(&len_133, 0, sizeof(int));
memset(&regex_result_134, 0, sizeof(int));
memset(&i_135, 0, sizeof(int));
memset(&i_136, 0, sizeof(int));
memset(&right_value70, 0, sizeof(void*));
memset(&str_137, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&match_strings_138, 0, sizeof(struct list$1charph*));
memset(&right_value73, 0, sizeof(void*));
memset(&str2_139, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&str_140, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&match_strings_141, 0, sizeof(struct list$1charph*));
memset(&i_142, 0, sizeof(int));
memset(&right_value77, 0, sizeof(void*));
memset(&match_str_143, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&str2_144, 0, sizeof(char*));
memset(&right_value79, 0, sizeof(void*));
memset(&str_145, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&match_strings_146, 0, sizeof(struct list$1charph*));
memset(&right_value82, 0, sizeof(void*));
memset(&str2_147, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_123=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 566))->options;
    __freed_obj__ = 0;
    str_124=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 567))->str;
    __freed_obj__ = 0;
    re_125=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 569))->re;
    __freed_obj__ = 0;
    result_126=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 571))), "libcomelang2-str.c", 571)))))));
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_127=0;
    __freed_obj__ = 0;
    ovec_max_128=16;
    __freed_obj__ = 0;
    int start_129[ovec_max_128];
    memset(&start_129, 0, sizeof(int)    *(ovec_max_128)    );
    __freed_obj__ = 0;
    int end_130[ovec_max_128];
    memset(&end_130, 0, sizeof(int)    *(ovec_max_128)    );
    __freed_obj__ = 0;
    int ovec_value_131[ovec_max_128*3];
    memset(&ovec_value_131, 0, sizeof(int)    *(ovec_max_128*3)    );
    __freed_obj__ = 0;
    while(_while_condtional8=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional8) {
        options_132=2097152;
        __freed_obj__ = 0;
        len_133=strlen(self);
        __freed_obj__ = 0;
        regex_result_134=pcre_exec(re_125,(struct pcre_extra*)0,self,len_133,offset_127,options_132,ovec_value_131,ovec_max_128*3);
        __freed_obj__ = 0;
        for(
        i_135=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_135<ovec_max_128 ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_135++ ,        __freed_obj__ = 0, 
        0        ){
            start_129[i_135]=ovec_value_131[i_135*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_136=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        i_136<ovec_max_128 ,        __freed_obj__ = 0, 
        _for_condtionalA17;        i_136++ ,        __freed_obj__ = 0, 
        0        ){
            end_130[i_136]=ovec_value_131[i_136*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=regex_result_134==1,        __freed_obj__ = 0, 
        _if_conditional49) {
            str_137=(char*)come_increment_ref_count(((char*)(right_value70=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 596)),offset_127,start_129[0]))));
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_strings_138=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value71=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 598))), "libcomelang2-str.c", 598)))))));
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_139=(char*)come_increment_ref_count(((char*)(right_value73=block(parent,str_137,match_strings_138))));
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional50=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 605))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional50) {
                __result86__ = __result_obj__ = result_126;
                if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_139 && !__freed_obj__) { str2_139 = come_decrement_ref_count(str2_139, (void*)0, (void*)0, 0, 0, 0); }
                if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result86__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_126, "libcomelang2-str.c", 605)),(char*)come_increment_ref_count(str2_139));
            __freed_obj__ = 0;
            if(_if_conditional51=offset_127==end_130[0],            __freed_obj__ = 0, 
            _if_conditional51) {
                offset_127++;
                __freed_obj__ = 0;
            }
            else {
                offset_127=end_130[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_137 && !__freed_obj__) { str_137 = come_decrement_ref_count(str_137, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_138 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_139 && !__freed_obj__) { str2_139 = come_decrement_ref_count(str2_139, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional52=regex_result_134>1,            __freed_obj__ = 0, 
            _if_conditional52) {
                str_140=(char*)come_increment_ref_count(((char*)(right_value74=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 616)),offset_127,start_129[0]))));
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional53=offset_127==end_130[0],                __freed_obj__ = 0, 
                _if_conditional53) {
                    offset_127++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_127=end_130[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_141=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 625))), "libcomelang2-str.c", 625)))))));
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_142=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA18=                i_142<regex_result_134 ,                __freed_obj__ = 0, 
                _for_condtionalA18;                i_142++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_143=(char*)come_increment_ref_count(((char*)(right_value77=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 627)),start_129[i_142],end_130[i_142]))));
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_141, "libcomelang2-str.c", 628)),(char*)come_increment_ref_count(match_str_143));
                    __freed_obj__ = 0;
                    if(match_str_143 && !__freed_obj__) { match_str_143 = come_decrement_ref_count(match_str_143, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_144=(char*)come_increment_ref_count(((char*)(right_value78=block(parent,str_140,match_strings_141))));
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional54=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 636))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional54) {
                    __result87__ = __result_obj__ = result_126;
                    if(str_140 && !__freed_obj__) { str_140 = come_decrement_ref_count(str_140, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_141 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_141, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_144 && !__freed_obj__) { str2_144 = come_decrement_ref_count(str2_144, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result87__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_126, "libcomelang2-str.c", 636)),(char*)come_increment_ref_count(str2_144));
                __freed_obj__ = 0;
                if(str_140 && !__freed_obj__) { str_140 = come_decrement_ref_count(str_140, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_141 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_141, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_144 && !__freed_obj__) { str2_144 = come_decrement_ref_count(str2_144, (void*)0, (void*)0, 0, 0, 0); }
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
    if(_if_conditional55=offset_127<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 656))),    __freed_obj__ = 0, 
    _if_conditional55) {
        str_145=(char*)come_increment_ref_count(((char*)(right_value79=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 646)),offset_127,-1))));
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        match_strings_146=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value80=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 647))), "libcomelang2-str.c", 647)))))));
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        str2_147=(char*)come_increment_ref_count(((char*)(right_value82=block(parent,str_145,match_strings_146))));
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional56=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 653))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional56) {
            __result88__ = __result_obj__ = result_126;
            if(str_145 && !__freed_obj__) { str_145 = come_decrement_ref_count(str_145, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_147 && !__freed_obj__) { str2_147 = come_decrement_ref_count(str2_147, (void*)0, (void*)0, 0, 0, 0); }
            if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_126, "libcomelang2-str.c", 653)),(char*)come_increment_ref_count(str2_147));
        __freed_obj__ = 0;
        if(str_145 && !__freed_obj__) { str_145 = come_decrement_ref_count(str_145, (void*)0, (void*)0, 0, 0, 0); }
        if(match_strings_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_146, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str2_147 && !__freed_obj__) { str2_147 = come_decrement_ref_count(str2_147, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result89__ = __result_obj__ = result_126;
    if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
    if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_148;
int erro_ofs_149;
int options_150;
char* str_151;
struct real_pcre8_or_16* re_152;
void* right_value83;
void* right_value84;
struct list$1charph* result_153;
int offset_154;
int ovec_max_155;
int n_159;
_Bool _while_condtional9;
int options_160;
int len_161;
int regex_result_162;
int i_163;
_Bool _for_condtionalA19;
int i_164;
_Bool _for_condtionalA20;
_Bool _if_conditional57;
void* right_value85;
char* str_165;
void* right_value86;
void* right_value87;
struct list$1charph* match_strings_166;
void* right_value88;
char* str2_167;
_Bool _if_conditional58;
struct list$1charph* __result90__;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value89;
char* str_168;
_Bool _if_conditional61;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_169;
int i_170;
_Bool _for_condtionalA21;
void* right_value92;
char* match_str_171;
void* right_value93;
char* str2_172;
_Bool _if_conditional62;
struct list$1charph* __result91__;
_Bool _if_conditional63;
struct list$1charph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_149, 0, sizeof(int));
memset(&options_150, 0, sizeof(int));
memset(&str_151, 0, sizeof(char*));
memset(&re_152, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&result_153, 0, sizeof(struct list$1charph*));
memset(&offset_154, 0, sizeof(int));
memset(&ovec_max_155, 0, sizeof(int));
memset(&n_159, 0, sizeof(int));
memset(&options_160, 0, sizeof(int));
memset(&len_161, 0, sizeof(int));
memset(&regex_result_162, 0, sizeof(int));
memset(&i_163, 0, sizeof(int));
memset(&i_164, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&str_165, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&match_strings_166, 0, sizeof(struct list$1charph*));
memset(&right_value88, 0, sizeof(void*));
memset(&str2_167, 0, sizeof(char*));
memset(&right_value89, 0, sizeof(void*));
memset(&str_168, 0, sizeof(char*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&match_strings_169, 0, sizeof(struct list$1charph*));
memset(&i_170, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&match_str_171, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&str2_172, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_150=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 664))->options;
    __freed_obj__ = 0;
    str_151=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 665))->str;
    __freed_obj__ = 0;
    re_152=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 667))->re;
    __freed_obj__ = 0;
    result_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value83=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 669))), "libcomelang2-str.c", 669)))))));
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_154=0;
    __freed_obj__ = 0;
    ovec_max_155=16;
    __freed_obj__ = 0;
    int start_156[ovec_max_155];
    memset(&start_156, 0, sizeof(int)    *(ovec_max_155)    );
    __freed_obj__ = 0;
    int end_157[ovec_max_155];
    memset(&end_157, 0, sizeof(int)    *(ovec_max_155)    );
    __freed_obj__ = 0;
    int ovec_value_158[ovec_max_155*3];
    memset(&ovec_value_158, 0, sizeof(int)    *(ovec_max_155*3)    );
    __freed_obj__ = 0;
    n_159=0;
    __freed_obj__ = 0;
    while(_while_condtional9=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional9) {
        options_160=2097152;
        __freed_obj__ = 0;
        len_161=strlen(self);
        __freed_obj__ = 0;
        regex_result_162=pcre_exec(re_152,(struct pcre_extra*)0,self,len_161,offset_154,options_160,ovec_value_158,ovec_max_155*3);
        __freed_obj__ = 0;
        for(
        i_163=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_163<ovec_max_155 ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_163++ ,        __freed_obj__ = 0, 
        0        ){
            start_156[i_163]=ovec_value_158[i_163*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_164=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA20=        i_164<ovec_max_155 ,        __freed_obj__ = 0, 
        _for_condtionalA20;        i_164++ ,        __freed_obj__ = 0, 
        0        ){
            end_157[i_164]=ovec_value_158[i_164*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=regex_result_162==1,        __freed_obj__ = 0, 
        _if_conditional57) {
            str_165=(char*)come_increment_ref_count(((char*)(right_value85=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 696)),offset_154,start_156[0]))));
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_strings_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value87=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value86=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 698))), "libcomelang2-str.c", 698)))))));
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            str2_167=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_165,match_strings_166))));
            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional58=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 704))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional58) {
                __result90__ = __result_obj__ = result_153;
                if(str_165 && !__freed_obj__) { str_165 = come_decrement_ref_count(str_165, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_166 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_167 && !__freed_obj__) { str2_167 = come_decrement_ref_count(str2_167, (void*)0, (void*)0, 0, 0, 0); }
                if(result_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result90__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_153, "libcomelang2-str.c", 704)),(char*)come_increment_ref_count(str2_167));
            __freed_obj__ = 0;
            if(_if_conditional59=offset_154==end_157[0],            __freed_obj__ = 0, 
            _if_conditional59) {
                offset_154++;
                __freed_obj__ = 0;
            }
            else {
                offset_154=end_157[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_165 && !__freed_obj__) { str_165 = come_decrement_ref_count(str_165, (void*)0, (void*)0, 0, 0, 0); }
            if(match_strings_166 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(str2_167 && !__freed_obj__) { str2_167 = come_decrement_ref_count(str2_167, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional60=regex_result_162>1,            __freed_obj__ = 0, 
            _if_conditional60) {
                str_168=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 715)),offset_154,start_156[0]))));
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional61=offset_154==end_157[0],                __freed_obj__ = 0, 
                _if_conditional61) {
                    offset_154++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_154=end_157[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                match_strings_169=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 724))), "libcomelang2-str.c", 724)))))));
                if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_170=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA21=                i_170<regex_result_162 ,                __freed_obj__ = 0, 
                _for_condtionalA21;                i_170++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_171=(char*)come_increment_ref_count(((char*)(right_value92=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 726)),start_156[i_170],end_157[i_170]))));
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(match_strings_169, "libcomelang2-str.c", 727)),(char*)come_increment_ref_count(match_str_171));
                    __freed_obj__ = 0;
                    if(match_str_171 && !__freed_obj__) { match_str_171 = come_decrement_ref_count(match_str_171, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                str2_172=(char*)come_increment_ref_count(((char*)(right_value93=block(parent,str_168,match_strings_169))));
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional62=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 736))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional62) {
                    __result91__ = __result_obj__ = result_153;
                    if(str_168 && !__freed_obj__) { str_168 = come_decrement_ref_count(str_168, (void*)0, (void*)0, 0, 0, 0); }
                    if(match_strings_169 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(str2_172 && !__freed_obj__) { str2_172 = come_decrement_ref_count(str2_172, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result91__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_153, "libcomelang2-str.c", 736)),(char*)come_increment_ref_count(str2_172));
                __freed_obj__ = 0;
                if(str_168 && !__freed_obj__) { str_168 = come_decrement_ref_count(str_168, (void*)0, (void*)0, 0, 0, 0); }
                if(match_strings_169 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,match_strings_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(str2_172 && !__freed_obj__) { str2_172 = come_decrement_ref_count(str2_172, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_159++;
        __freed_obj__ = 0;
        if(_if_conditional63=n_159==count,        __freed_obj__ = 0, 
        _if_conditional63) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result92__ = __result_obj__ = result_153;
    if(result_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(result_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional64;
_Bool __result93__;
_Bool _if_conditional65;
_Bool __result94__;
_Bool _if_conditional66;
_Bool __result95__;
_Bool _if_conditional67;
_Bool __result96__;
_Bool _if_conditional68;
_Bool __result97__;
_Bool _if_conditional69;
_Bool __result98__;
_Bool _if_conditional70;
_Bool __result99__;
_Bool _if_conditional71;
_Bool __result100__;
_Bool _if_conditional72;
_Bool __result101__;
_Bool _if_conditional73;
_Bool __result102__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional64=strcmp(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 759))->str,((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 759))->str)!=0,    __freed_obj__ = 0, 
    _if_conditional64) {
        __result93__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result93__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional65=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 762))->ignore_case!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 762))->ignore_case,    __freed_obj__ = 0, 
    _if_conditional65) {
        __result94__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional66=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 765))->multiline!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 765))->multiline,    __freed_obj__ = 0, 
    _if_conditional66) {
        __result95__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 768))->global!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 768))->global,    __freed_obj__ = 0, 
    _if_conditional67) {
        __result96__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result96__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional68=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 771))->extended!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 771))->extended,    __freed_obj__ = 0, 
    _if_conditional68) {
        __result97__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional69=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 774))->dotall!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 774))->dotall,    __freed_obj__ = 0, 
    _if_conditional69) {
        __result98__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional70=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 777))->anchored!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 777))->anchored,    __freed_obj__ = 0, 
    _if_conditional70) {
        __result99__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional71=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 780))->dollar_endonly!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 780))->dollar_endonly,    __freed_obj__ = 0, 
    _if_conditional71) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional72=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 783))->ungreedy!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 783))->ungreedy,    __freed_obj__ = 0, 
    _if_conditional72) {
        __result101__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional73=((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 787))->options!=((struct come_regex*)come_null_check(right, "libcomelang2-str.c", 787))->options,    __freed_obj__ = 0, 
    _if_conditional73) {
        __result102__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result102__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result103__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_173;
int offset_174;
int ovec_max_175;
const char* err_179;
int erro_ofs_180;
int options_181;
char* str_182;
struct real_pcre8_or_16* re_183;
_Bool _while_condtional10;
int options_184;
int len_185;
int regex_result_186;
int i_187;
_Bool _for_condtionalA22;
int i_188;
_Bool _for_condtionalA23;
_Bool _if_conditional74;
void* right_value96;
char* str_189;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value97;
char* str_190;
_Bool _if_conditional77;
int i_191;
_Bool _for_condtionalA24;
void* right_value98;
char* match_string_192;
struct list$1charph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_173, 0, sizeof(struct list$1charph*));
memset(&offset_174, 0, sizeof(int));
memset(&ovec_max_175, 0, sizeof(int));
memset(&erro_ofs_180, 0, sizeof(int));
memset(&options_181, 0, sizeof(int));
memset(&str_182, 0, sizeof(char*));
memset(&re_183, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_184, 0, sizeof(int));
memset(&len_185, 0, sizeof(int));
memset(&regex_result_186, 0, sizeof(int));
memset(&i_187, 0, sizeof(int));
memset(&i_188, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&str_189, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&str_190, 0, sizeof(char*));
memset(&i_191, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&match_string_192, 0, sizeof(char*));
    result_173=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 792))), "libcomelang2-str.c", 792)))))));
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_174=0;
    __freed_obj__ = 0;
    ovec_max_175=16;
    __freed_obj__ = 0;
    int start_176[ovec_max_175];
    memset(&start_176, 0, sizeof(int)    *(ovec_max_175)    );
    __freed_obj__ = 0;
    int end_177[ovec_max_175];
    memset(&end_177, 0, sizeof(int)    *(ovec_max_175)    );
    __freed_obj__ = 0;
    int ovec_value_178[ovec_max_175*3];
    memset(&ovec_value_178, 0, sizeof(int)    *(ovec_max_175*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_181=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 804))->options;
    __freed_obj__ = 0;
    str_182=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 805))->str;
    __freed_obj__ = 0;
    re_183=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 807))->re;
    __freed_obj__ = 0;
    while(_while_condtional10=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional10) {
        options_184=2097152;
        __freed_obj__ = 0;
        len_185=strlen(self);
        __freed_obj__ = 0;
        regex_result_186=pcre_exec(re_183,(struct pcre_extra*)0,self,len_185,offset_174,options_184,ovec_value_178,ovec_max_175*3);
        __freed_obj__ = 0;
        for(
        i_187=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_187<ovec_max_175 ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_187++ ,        __freed_obj__ = 0, 
        0        ){
            start_176[i_187]=ovec_value_178[i_187*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_188=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA23=        i_188<ovec_max_175 ,        __freed_obj__ = 0, 
        _for_condtionalA23;        i_188++ ,        __freed_obj__ = 0, 
        0        ){
            end_177[i_188]=ovec_value_178[i_188*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=regex_result_186==1,        __freed_obj__ = 0, 
        _if_conditional74) {
            str_189=(char*)come_increment_ref_count(((char*)(right_value96=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 826)),start_176[0],end_177[0]))));
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_173, "libcomelang2-str.c", 827)),(char*)come_increment_ref_count(str_189));
            __freed_obj__ = 0;
            if(_if_conditional75=offset_174==end_177[0],            __freed_obj__ = 0, 
            _if_conditional75) {
                offset_174++;
                __freed_obj__ = 0;
            }
            else {
                offset_174=end_177[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_189 && !__freed_obj__) { str_189 = come_decrement_ref_count(str_189, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional76=regex_result_186>1,            __freed_obj__ = 0, 
            _if_conditional76) {
                str_190=(char*)come_increment_ref_count(((char*)(right_value97=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 838)),start_176[0],end_177[0]))));
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_173, "libcomelang2-str.c", 839)),(char*)come_increment_ref_count(str_190));
                __freed_obj__ = 0;
                if(_if_conditional77=offset_174==end_177[0],                __freed_obj__ = 0, 
                _if_conditional77) {
                    offset_174++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_174=end_177[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                *num_group_string_in_regex=regex_result_186-1;
                __freed_obj__ = 0;
                for(
                i_191=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA24=                i_191<regex_result_186 ,                __freed_obj__ = 0, 
                _for_condtionalA24;                i_191++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_192=(char*)come_increment_ref_count(((char*)(right_value98=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 850)),start_176[i_191],end_177[i_191]))));
                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 851)),(char*)come_increment_ref_count(match_string_192));
                    __freed_obj__ = 0;
                    if(match_string_192 && !__freed_obj__) { match_string_192 = come_decrement_ref_count(match_string_192, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_190 && !__freed_obj__) { str_190 = come_decrement_ref_count(str_190, (void*)0, (void*)0, 0, 0, 0); }
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
    __result104__ = __result_obj__ = result_173;
    if(result_173 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
    if(result_173 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value99;
char* result_193;
int len_194;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&len_194, 0, sizeof(int));
    result_193=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(self))));
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    len_194=strlen(self);
    __freed_obj__ = 0;
    if(_if_conditional78=self[len_194-1]==10,    __freed_obj__ = 0, 
    _if_conditional78) {
        result_193[len_194-1]=0;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional79=self[len_194-1]==13,        __freed_obj__ = 0, 
        _if_conditional79) {
            result_193[len_194-1]=0;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional80=len_194>2&&self[len_194-2]==13&&self[len_194-1]==10,            __freed_obj__ = 0, 
            _if_conditional80) {
                result_193[len_194-2]=0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = result_193;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(result_193 && !__freed_obj__) { result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
int len_195;
void* right_value100;
char* result_196;
int n_197;
int i_198;
_Bool _for_condtionalA25;
char c_199;
_Bool _if_conditional81;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_195, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&result_196, 0, sizeof(char*));
memset(&n_197, 0, sizeof(int));
memset(&i_198, 0, sizeof(int));
memset(&c_199, 0, sizeof(char));
    len_195=charp_length(((char*)come_null_check(str, "libcomelang2-str.c", 885)));
    __freed_obj__ = 0;
    result_196=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(len_195*2+1)), "libcomelang2-str.c", 886))));
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_197=0;
    __freed_obj__ = 0;
    for(
    i_198=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA25=    i_198<len_195 ,    __freed_obj__ = 0, 
    _for_condtionalA25;    i_198++ ,    __freed_obj__ = 0, 
    0    ){
        c_199=str[i_198];
        __freed_obj__ = 0;
        if(_if_conditional81=(c_199>=0&&c_199<32)||c_199==127,        __freed_obj__ = 0, 
        _if_conditional81) {
            result_196[n_197++]=94;
            __freed_obj__ = 0;
            result_196[n_197++]=c_199+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_196[n_197++]=c_199;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_196[n_197]=0;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = result_196;
    if(result_196 && !__freed_obj__) { result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(result_196 && !__freed_obj__) { result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0, 0, 0); }
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
int len_200;
void* right_value101;
char* result_201;
_Bool _if_conditional82;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_200, 0, sizeof(int));
memset(&right_value101, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
    len_200=4*(wcslen(wstr)+1);
    __freed_obj__ = 0;
    result_201=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(len_200)), "libcomelang2-str.c", 912))));
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional82=wcstombs(result_201,wstr,len_200)<0,    __freed_obj__ = 0, 
    _if_conditional82) {
        strncpy(result_201,"",len_200);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = __result_obj__ = result_201;
    if(result_201 && !__freed_obj__) { result_201 = come_decrement_ref_count(result_201, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(result_201 && !__freed_obj__) { result_201 = come_decrement_ref_count(result_201, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value102;
unsigned int* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((unsigned int*)(right_value102=__builtin_wstring(str)));
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = wcslen(str);
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
int len_202;
_Bool _if_conditional83;
void* right_value103;
void* right_value104;
unsigned int* __result110__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value105;
void* right_value106;
unsigned int* __result111__;
_Bool _if_conditional88;
void* right_value107;
unsigned int* sub_str_203;
void* right_value108;
void* right_value109;
unsigned int* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_202, 0, sizeof(int));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&sub_str_203, 0, sizeof(unsigned int*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
    __freed_obj__ = 0;
    len_202=wcslen(str);
    __freed_obj__ = 0;
    if(_if_conditional83=len_202==0,    __freed_obj__ = 0, 
    _if_conditional83) {
        __result110__ = __result_obj__ = ((unsigned int*)(right_value104=string_to_wstring(((char*)come_null_check(((char*)(right_value103=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 939))))), "libcomelang2-str.c", 939)))));
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional84=head<0,    __freed_obj__ = 0, 
    _if_conditional84) {
        head+=len_202;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional85=tail<0,    __freed_obj__ = 0, 
    _if_conditional85) {
        tail+=len_202+1;
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
        __result111__ = __result_obj__ = ((unsigned int*)(right_value106=string_to_wstring(((char*)come_null_check(((char*)(right_value105=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 955))))), "libcomelang2-str.c", 955)))));
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional88=tail>=len_202,    __freed_obj__ = 0, 
    _if_conditional88) {
        tail=len_202;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_203=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value107=wchar_tp_substring(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 962)),tail,-1))));
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_203,sizeof(unsigned int)*(wstring_length(((unsigned int*)come_null_check(sub_str_203, "libcomelang2-str.c", 964)))+1));
    __freed_obj__ = 0;
    __result112__ = __result_obj__ = ((unsigned int*)(right_value109=string_to_wstring(((char*)come_null_check(((char*)(right_value108=wchar_tp_to_string(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 966))))), "libcomelang2-str.c", 966)))));
    if(sub_str_203 && !__freed_obj__) { sub_str_203 = come_decrement_ref_count(sub_str_203, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(sub_str_203 && !__freed_obj__) { sub_str_203 = come_decrement_ref_count(sub_str_203, (void*)0, (void*)0, 0, 0, 0); }
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int* head_204;
_Bool _if_conditional89;
int __result113__;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_204, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    head_204=wcsstr(str,search_str);
    __freed_obj__ = 0;
    if(_if_conditional89=head_204==((void*)0),    __freed_obj__ = 0, 
    _if_conditional89) {
        __result113__ = default_value;
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result114__ = head_204-str;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int len_205;
unsigned int* p_206;
_Bool _while_condtional11;
int len2_207;
_Bool result_208;
int i_209;
_Bool _for_condtionalA26;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_205, 0, sizeof(int));
memset(&p_206, 0, sizeof(unsigned int*));
memset(&len2_207, 0, sizeof(int));
memset(&result_208, 0, sizeof(_Bool));
memset(&i_209, 0, sizeof(int));
    __freed_obj__ = 0;
    len_205=wcslen(search_str);
    __freed_obj__ = 0;
    p_206=str+wcslen(str)-len_205;
    __freed_obj__ = 0;
    while(_while_condtional11=p_206>=str,    __freed_obj__ = 0, 
    _while_condtional11) {
        len2_207=wcslen(p_206);
        __freed_obj__ = 0;
        result_208=(_Bool)1;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_209=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA26=        i_209<len_205&&i_209<len2_207 ,        __freed_obj__ = 0, 
        _for_condtionalA26;        i_209++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional90=p_206[i_209]!=search_str[i_209],            __freed_obj__ = 0, 
            _if_conditional90) {
                result_208=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=result_208,        __freed_obj__ = 0, 
        _if_conditional91) {
            __result115__ = (p_206-str);
            __freed_obj__ = 0;
            return __result115__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_206--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result116__ = default_value;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
int len_210;
void* right_value110;
unsigned int* result_211;
int i_212;
_Bool _for_condtionalA27;
unsigned int* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_210, 0, sizeof(int));
memset(&right_value110, 0, sizeof(void*));
memset(&result_211, 0, sizeof(unsigned int*));
memset(&i_212, 0, sizeof(int));
    len_210=wcslen(str);
    __freed_obj__ = 0;
    result_211=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value110=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_210+1)), "libcomelang2-str.c", 1012))));
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_212=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA27=    i_212<len_210 ,    __freed_obj__ = 0, 
    _for_condtionalA27;    i_212++ ,    __freed_obj__ = 0, 
    0    ){
        result_211[i_212]=str[len_210-i_212-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_211[len_210]=0;
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = result_211;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
int len_213;
void* right_value111;
unsigned int* result_214;
int i_215;
_Bool _for_condtionalA28;
unsigned int* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_213, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&result_214, 0, sizeof(unsigned int*));
memset(&i_215, 0, sizeof(int));
    len_213=wcslen(str)*n+1;
    __freed_obj__ = 0;
    result_214=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value111=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_213)), "libcomelang2-str.c", 1027))));
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_214[0]=0;
    __freed_obj__ = 0;
    for(
    i_215=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA28=    i_215<n ,    __freed_obj__ = 0, 
    _for_condtionalA28;    i_215++ ,    __freed_obj__ = 0, 
    0    ){
        wcscat(result_214,str);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result118__ = __result_obj__ = result_214;
    if(result_214 && !__freed_obj__) { result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(result_214 && !__freed_obj__) { result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
_Bool __freed_obj__;
int len_216;
void* right_value112;
unsigned int* result_217;
int n_218;
int i_219;
_Bool _for_condtionalA29;
unsigned int c_220;
_Bool _if_conditional92;
unsigned int* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_216, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&result_217, 0, sizeof(unsigned int*));
memset(&n_218, 0, sizeof(int));
memset(&i_219, 0, sizeof(int));
memset(&c_220, 0, sizeof(unsigned int));
    len_216=wchar_tp_length(((unsigned int*)come_null_check(str, "libcomelang2-str.c", 1040)));
    __freed_obj__ = 0;
    result_217=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value112=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_216*2+1)), "libcomelang2-str.c", 1041))));
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_218=0;
    __freed_obj__ = 0;
    for(
    i_219=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA29=    i_219<len_216 ,    __freed_obj__ = 0, 
    _for_condtionalA29;    i_219++ ,    __freed_obj__ = 0, 
    0    ){
        c_220=str[i_219];
        __freed_obj__ = 0;
        if(_if_conditional92=(c_220>=0&&c_220<32)||c_220==127,        __freed_obj__ = 0, 
        _if_conditional92) {
            result_217[n_218++]=94;
            __freed_obj__ = 0;
            result_217[n_218++]=c_220+65-1;
            __freed_obj__ = 0;
        }
        else {
            result_217[n_218++]=c_220;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_217[n_218]=0;
    __freed_obj__ = 0;
    __result119__ = __result_obj__ = result_217;
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
int offset_221;
int ovec_max_222;
const char* err_226;
int erro_ofs_227;
int options_228;
char* str_229;
struct real_pcre8_or_16* re_230;
int n_231;
_Bool _while_condtional12;
int options_232;
int len_233;
int regex_result_234;
int i_235;
_Bool _for_condtionalA30;
int i_236;
_Bool _for_condtionalA31;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result120__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_239;
_Bool _for_condtionalA32;
void* right_value113;
char* match_string_240;
_Bool _if_conditional97;
_Bool __result122__;
_Bool _if_conditional98;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_221, 0, sizeof(int));
memset(&ovec_max_222, 0, sizeof(int));
memset(&erro_ofs_227, 0, sizeof(int));
memset(&options_228, 0, sizeof(int));
memset(&str_229, 0, sizeof(char*));
memset(&re_230, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_231, 0, sizeof(int));
memset(&options_232, 0, sizeof(int));
memset(&len_233, 0, sizeof(int));
memset(&regex_result_234, 0, sizeof(int));
memset(&i_235, 0, sizeof(int));
memset(&i_236, 0, sizeof(int));
memset(&i_239, 0, sizeof(int));
memset(&right_value113, 0, sizeof(void*));
memset(&match_string_240, 0, sizeof(char*));
    offset_221=0;
    __freed_obj__ = 0;
    ovec_max_222=16;
    __freed_obj__ = 0;
    int start_223[ovec_max_222];
    memset(&start_223, 0, sizeof(int)    *(ovec_max_222)    );
    __freed_obj__ = 0;
    int end_224[ovec_max_222];
    memset(&end_224, 0, sizeof(int)    *(ovec_max_222)    );
    __freed_obj__ = 0;
    int ovec_value_225[ovec_max_222*3];
    memset(&ovec_value_225, 0, sizeof(int)    *(ovec_max_222*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_228=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1075))->options;
    __freed_obj__ = 0;
    str_229=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1076))->str;
    __freed_obj__ = 0;
    re_230=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1078))->re;
    __freed_obj__ = 0;
    n_231=0;
    __freed_obj__ = 0;
    while(_while_condtional12=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional12) {
        options_232=2097152;
        __freed_obj__ = 0;
        len_233=strlen(self);
        __freed_obj__ = 0;
        regex_result_234=pcre_exec(re_230,(struct pcre_extra*)0,self,len_233,offset_221,options_232,ovec_value_225,ovec_max_222*3);
        __freed_obj__ = 0;
        for(
        i_235=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA30=        i_235<ovec_max_222 ,        __freed_obj__ = 0, 
        _for_condtionalA30;        i_235++ ,        __freed_obj__ = 0, 
        0        ){
            start_223[i_235]=ovec_value_225[i_235*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_236=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA31=        i_236<ovec_max_222 ,        __freed_obj__ = 0, 
        _for_condtionalA31;        i_236++ ,        __freed_obj__ = 0, 
        0        ){
            end_224[i_236]=ovec_value_225[i_236*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional93=regex_result_234==1||(group_strings==((void*)0)&&regex_result_234>0),        __freed_obj__ = 0, 
        _if_conditional93) {
            n_231++;
            __freed_obj__ = 0;
            if(_if_conditional94=n_231==count,            __freed_obj__ = 0, 
            _if_conditional94) {
                __result120__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=offset_221==end_224[0],            __freed_obj__ = 0, 
            _if_conditional95) {
                offset_221++;
                __freed_obj__ = 0;
            }
            else {
                offset_221=end_224[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional96=regex_result_234>1,            __freed_obj__ = 0, 
            _if_conditional96) {
                n_231++;
                __freed_obj__ = 0;
                list$1charph_reset(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1115)));
                __freed_obj__ = 0;
                for(
                i_239=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA32=                i_239<regex_result_234 ,                __freed_obj__ = 0, 
                _for_condtionalA32;                i_239++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_240=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1117)),start_223[i_239],end_224[i_239]))));
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings, "libcomelang2-str.c", 1118)),(char*)come_increment_ref_count(match_string_240));
                    __freed_obj__ = 0;
                    if(match_string_240 && !__freed_obj__) { match_string_240 = come_decrement_ref_count(match_string_240, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional97=n_231==count,                __freed_obj__ = 0, 
                _if_conditional97) {
                    __result122__ = (_Bool)1;
                    __freed_obj__ = 0;
                    return __result122__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional98=offset_221==end_224[0],                __freed_obj__ = 0, 
                _if_conditional98) {
                    offset_221++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_221=end_224[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result123__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result124__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_237;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_238;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_237, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_238, 0, sizeof(struct list_item$1charph*));
                    it_237=((struct list$1charph*)come_null_check(self, "./comelang2.h", 476))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional13=it_237!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        prev_it_238=it_237;
                        __freed_obj__ = 0;
                        it_237=((struct list_item$1charph*)come_null_check(it_237, "./comelang2.h", 479))->next;
                        __freed_obj__ = 0;
                        if(prev_it_238 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                    __freed_obj__ = 0;
                    __result121__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result121__;
                    __freed_obj__ = 0;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = wcscmp(left,right);
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = wcscmp(left,right);
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = string_get_hash_key(((char*)come_null_check(((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1154))->str, "libcomelang2-str.c", 1154)));
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = left==right;
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value114;
unsigned int* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((unsigned int*)(right_value114=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value115;
unsigned int* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result130__ = __result_obj__ = ((unsigned int*)(right_value115=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = wcscmp(left,right)!=0;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = wcscmp(left,right)!=0;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1195)),right);
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = !come_regex_equals(((struct come_regex*)come_null_check(left, "libcomelang2-str.c", 1200)),right);
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value116;
unsigned int* result_241;
unsigned int* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&result_241, 0, sizeof(unsigned int*));
    result_241=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value116=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1205))));
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    wcscpy(result_241,left);
    __freed_obj__ = 0;
    wcscat(result_241,right);
    __freed_obj__ = 0;
    __result137__ = __result_obj__ = result_241;
    if(result_241 && !__freed_obj__) { result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
    if(result_241 && !__freed_obj__) { result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0, 0, 0); }
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value117;
unsigned int* result_242;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&result_242, 0, sizeof(unsigned int*));
    result_242=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value117=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1215))));
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    wcscpy(result_242,left);
    __freed_obj__ = 0;
    wcscat(result_242,right);
    __freed_obj__ = 0;
    __result138__ = __result_obj__ = result_242;
    if(result_242 && !__freed_obj__) { result_242 = come_decrement_ref_count(result_242, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
    if(result_242 && !__freed_obj__) { result_242 = come_decrement_ref_count(result_242, (void*)0, (void*)0, 0, 0, 0); }
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
char* head_243;
_Bool _if_conditional99;
int __result139__;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_243, 0, sizeof(char*));
    __freed_obj__ = 0;
    head_243=strstr(str,search_str);
    __freed_obj__ = 0;
    if(_if_conditional99=head_243==((void*)0),    __freed_obj__ = 0, 
    _if_conditional99) {
        __result139__ = default_value;
        __freed_obj__ = 0;
        return __result139__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result140__ = head_243-str;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
int ovec_max_244;
int result_248;
int offset_249;
const char* err_250;
int erro_ofs_251;
int options_252;
char* str_253;
struct real_pcre8_or_16* re_254;
_Bool _while_condtional14;
int options_255;
int len_256;
int regex_result_257;
int i_258;
_Bool _for_condtionalA33;
int i_259;
_Bool _for_condtionalA34;
_Bool _if_conditional100;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_244, 0, sizeof(int));
memset(&result_248, 0, sizeof(int));
memset(&offset_249, 0, sizeof(int));
memset(&erro_ofs_251, 0, sizeof(int));
memset(&options_252, 0, sizeof(int));
memset(&str_253, 0, sizeof(char*));
memset(&re_254, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_255, 0, sizeof(int));
memset(&len_256, 0, sizeof(int));
memset(&regex_result_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
memset(&i_259, 0, sizeof(int));
    ovec_max_244=16;
    __freed_obj__ = 0;
    int start_245[ovec_max_244];
    memset(&start_245, 0, sizeof(int)    *(ovec_max_244)    );
    __freed_obj__ = 0;
    int end_246[ovec_max_244];
    memset(&end_246, 0, sizeof(int)    *(ovec_max_244)    );
    __freed_obj__ = 0;
    int ovec_value_247[ovec_max_244*3];
    memset(&ovec_value_247, 0, sizeof(int)    *(ovec_max_244*3)    );
    __freed_obj__ = 0;
    result_248=default_value;
    __freed_obj__ = 0;
    offset_249=0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_252=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1251))->options;
    __freed_obj__ = 0;
    str_253=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1252))->str;
    __freed_obj__ = 0;
    re_254=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1254))->re;
    __freed_obj__ = 0;
    while(_while_condtional14=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional14) {
        options_255=2097152;
        __freed_obj__ = 0;
        len_256=strlen(self);
        __freed_obj__ = 0;
        regex_result_257=pcre_exec(re_254,(struct pcre_extra*)0,self,len_256,offset_249,options_255,ovec_value_247,ovec_max_244*3);
        __freed_obj__ = 0;
        for(
        i_258=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA33=        i_258<ovec_max_244 ,        __freed_obj__ = 0, 
        _for_condtionalA33;        i_258++ ,        __freed_obj__ = 0, 
        0        ){
            start_245[i_258]=ovec_value_247[i_258*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_259=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA34=        i_259<ovec_max_244 ,        __freed_obj__ = 0, 
        _for_condtionalA34;        i_259++ ,        __freed_obj__ = 0, 
        0        ){
            end_246[i_259]=ovec_value_247[i_259*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional100=regex_result_257==1||regex_result_257>0,        __freed_obj__ = 0, 
        _if_conditional100) {
            result_248=start_245[0];
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
    __result141__ = result_248;
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
int len_260;
_Bool _if_conditional101;
void* right_value118;
char* __result142__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value119;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_260, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
    len_260=strlen(self);
    __freed_obj__ = 0;
    if(_if_conditional101=strcmp(self,"")==0,    __freed_obj__ = 0, 
    _if_conditional101) {
        __result142__ = __result_obj__ = ((char*)(right_value118=__builtin_string(self)));
        __freed_obj__ = 0;
        return __result142__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional102=index<0,    __freed_obj__ = 0, 
    _if_conditional102) {
        index+=len_260;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional103=index>=len_260,    __freed_obj__ = 0, 
    _if_conditional103) {
        index=len_260-1;
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
    __result143__ = __result_obj__ = ((char*)(right_value119=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
int len_261;
void* right_value120;
char* result_262;
int i_263;
_Bool _for_condtionalA35;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_261, 0, sizeof(int));
memset(&right_value120, 0, sizeof(void*));
memset(&result_262, 0, sizeof(char*));
memset(&i_263, 0, sizeof(int));
    len_261=strlen(str)*n+1;
    __freed_obj__ = 0;
    result_262=(char*)come_increment_ref_count(((char*)(right_value120=(char*)come_calloc(1, sizeof(char)*(1*(len_261)), "libcomelang2-str.c", 1313))));
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_262[0]=0;
    __freed_obj__ = 0;
    for(
    i_263=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA35=    i_263<n ,    __freed_obj__ = 0, 
    _for_condtionalA35;    i_263++ ,    __freed_obj__ = 0, 
    0    ){
        strcat(result_262,str);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result144__ = __result_obj__ = result_262;
    if(result_262 && !__freed_obj__) { result_262 = come_decrement_ref_count(result_262, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
    if(result_262 && !__freed_obj__) { result_262 = come_decrement_ref_count(result_262, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
int offset_264;
int ovec_max_265;
const char* err_269;
int erro_ofs_270;
int options_271;
char* str_272;
struct real_pcre8_or_16* re_273;
void* right_value121;
void* right_value122;
struct buffer* result_274;
_Bool _while_condtional15;
int options_275;
int len_276;
int regex_result_277;
int i_278;
_Bool _for_condtionalA36;
int i_279;
_Bool _for_condtionalA37;
_Bool _if_conditional105;
void* right_value123;
char* str_280;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value124;
char* str_281;
void* right_value125;
char* str_282;
void* right_value126;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_264, 0, sizeof(int));
memset(&ovec_max_265, 0, sizeof(int));
memset(&erro_ofs_270, 0, sizeof(int));
memset(&options_271, 0, sizeof(int));
memset(&str_272, 0, sizeof(char*));
memset(&re_273, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct buffer*));
memset(&options_275, 0, sizeof(int));
memset(&len_276, 0, sizeof(int));
memset(&regex_result_277, 0, sizeof(int));
memset(&i_278, 0, sizeof(int));
memset(&i_279, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&str_280, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&str_281, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_282, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
    offset_264=0;
    __freed_obj__ = 0;
    ovec_max_265=16;
    __freed_obj__ = 0;
    int start_266[ovec_max_265];
    memset(&start_266, 0, sizeof(int)    *(ovec_max_265)    );
    __freed_obj__ = 0;
    int end_267[ovec_max_265];
    memset(&end_267, 0, sizeof(int)    *(ovec_max_265)    );
    __freed_obj__ = 0;
    int ovec_value_268[ovec_max_265*3];
    memset(&ovec_value_268, 0, sizeof(int)    *(ovec_max_265*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_271=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1336))->options;
    __freed_obj__ = 0;
    str_272=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1337))->str;
    __freed_obj__ = 0;
    re_273=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1339))->re;
    __freed_obj__ = 0;
    result_274=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1341))), "libcomelang2-str.c", 1341)))))));
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional15=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional15) {
        options_275=2097152;
        __freed_obj__ = 0;
        len_276=strlen(self);
        __freed_obj__ = 0;
        regex_result_277=pcre_exec(re_273,(struct pcre_extra*)0,self,len_276,offset_264,options_275,ovec_value_268,ovec_max_265*3);
        __freed_obj__ = 0;
        for(
        i_278=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA36=        i_278<ovec_max_265 ,        __freed_obj__ = 0, 
        _for_condtionalA36;        i_278++ ,        __freed_obj__ = 0, 
        0        ){
            start_266[i_278]=ovec_value_268[i_278*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_279=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA37=        i_279<ovec_max_265 ,        __freed_obj__ = 0, 
        _for_condtionalA37;        i_279++ ,        __freed_obj__ = 0, 
        0        ){
            end_267[i_279]=ovec_value_268[i_279*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional105=regex_result_277==1,        __freed_obj__ = 0, 
        _if_conditional105) {
            str_280=(char*)come_increment_ref_count(((char*)(right_value123=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1358)),offset_264,start_266[0]))));
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_274, "libcomelang2-str.c", 1360)),str_280);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_274, "libcomelang2-str.c", 1361)),replace);
            __freed_obj__ = 0;
            if(_if_conditional106=offset_264==end_267[0],            __freed_obj__ = 0, 
            _if_conditional106) {
                offset_264++;
                __freed_obj__ = 0;
            }
            else {
                offset_264=end_267[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1375))->global,            __freed_obj__ = 0, 
            _if_conditional107) {
                str_281=(char*)come_increment_ref_count(((char*)(right_value124=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1371)),offset_264,-1))));
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_274, "libcomelang2-str.c", 1372)),str_281);
                __freed_obj__ = 0;
                if(str_281 && !__freed_obj__) { str_281 = come_decrement_ref_count(str_281, (void*)0, (void*)0, 0, 0, 0); }
                if(str_280 && !__freed_obj__) { str_280 = come_decrement_ref_count(str_280, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_281 && !__freed_obj__) { str_281 = come_decrement_ref_count(str_281, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_280 && !__freed_obj__) { str_280 = come_decrement_ref_count(str_280, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_282=(char*)come_increment_ref_count(((char*)(right_value125=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1378)),offset_264,-1))));
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_274, "libcomelang2-str.c", 1379)),str_282);
            __freed_obj__ = 0;
            if(str_282 && !__freed_obj__) { str_282 = come_decrement_ref_count(str_282, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_282 && !__freed_obj__) { str_282 = come_decrement_ref_count(str_282, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result145__ = __result_obj__ = ((char*)(right_value126=buffer_to_string(((struct buffer*)come_null_check(result_274, "libcomelang2-str.c", 1384)))));
    if(result_274 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
    if(result_274 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
int offset_283;
int ovec_max_284;
const char* err_288;
int erro_ofs_289;
int options_290;
char* str_291;
struct real_pcre8_or_16* re_292;
void* right_value127;
void* right_value128;
struct buffer* result_293;
int n_294;
_Bool _while_condtional16;
int options_295;
int len_296;
int regex_result_297;
int i_298;
_Bool _for_condtionalA38;
int i_299;
_Bool _for_condtionalA39;
_Bool _if_conditional108;
void* right_value129;
char* str_300;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value130;
char* str_301;
_Bool _if_conditional111;
void* right_value131;
char* str_302;
void* right_value132;
char* str_303;
void* right_value133;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_283, 0, sizeof(int));
memset(&ovec_max_284, 0, sizeof(int));
memset(&erro_ofs_289, 0, sizeof(int));
memset(&options_290, 0, sizeof(int));
memset(&str_291, 0, sizeof(char*));
memset(&re_292, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&result_293, 0, sizeof(struct buffer*));
memset(&n_294, 0, sizeof(int));
memset(&options_295, 0, sizeof(int));
memset(&len_296, 0, sizeof(int));
memset(&regex_result_297, 0, sizeof(int));
memset(&i_298, 0, sizeof(int));
memset(&i_299, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&str_300, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
memset(&str_301, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&str_302, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&str_303, 0, sizeof(char*));
memset(&right_value133, 0, sizeof(void*));
    offset_283=0;
    __freed_obj__ = 0;
    ovec_max_284=16;
    __freed_obj__ = 0;
    int start_285[ovec_max_284];
    memset(&start_285, 0, sizeof(int)    *(ovec_max_284)    );
    __freed_obj__ = 0;
    int end_286[ovec_max_284];
    memset(&end_286, 0, sizeof(int)    *(ovec_max_284)    );
    __freed_obj__ = 0;
    int ovec_value_287[ovec_max_284*3];
    memset(&ovec_value_287, 0, sizeof(int)    *(ovec_max_284*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_290=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1399))->options;
    __freed_obj__ = 0;
    str_291=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1400))->str;
    __freed_obj__ = 0;
    re_292=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1402))->re;
    __freed_obj__ = 0;
    result_293=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value128=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value127=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1404))), "libcomelang2-str.c", 1404)))))));
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_294=0;
    __freed_obj__ = 0;
    while(_while_condtional16=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional16) {
        options_295=2097152;
        __freed_obj__ = 0;
        len_296=strlen(self);
        __freed_obj__ = 0;
        regex_result_297=pcre_exec(re_292,(struct pcre_extra*)0,self,len_296,offset_283,options_295,ovec_value_287,ovec_max_284*3);
        __freed_obj__ = 0;
        for(
        i_298=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA38=        i_298<ovec_max_284 ,        __freed_obj__ = 0, 
        _for_condtionalA38;        i_298++ ,        __freed_obj__ = 0, 
        0        ){
            start_285[i_298]=ovec_value_287[i_298*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_299=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA39=        i_299<ovec_max_284 ,        __freed_obj__ = 0, 
        _for_condtionalA39;        i_299++ ,        __freed_obj__ = 0, 
        0        ){
            end_286[i_299]=ovec_value_287[i_299*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=regex_result_297==1,        __freed_obj__ = 0, 
        _if_conditional108) {
            n_294++;
            __freed_obj__ = 0;
            str_300=(char*)come_increment_ref_count(((char*)(right_value129=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1424)),offset_283,start_285[0]))));
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1426)),str_300);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1427)),replace);
            __freed_obj__ = 0;
            if(_if_conditional109=offset_283==end_286[0],            __freed_obj__ = 0, 
            _if_conditional109) {
                offset_283++;
                __freed_obj__ = 0;
            }
            else {
                offset_283=end_286[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional110=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1441))->global,            __freed_obj__ = 0, 
            _if_conditional110) {
                str_301=(char*)come_increment_ref_count(((char*)(right_value130=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1437)),offset_283,-1))));
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1438)),str_301);
                __freed_obj__ = 0;
                if(str_301 && !__freed_obj__) { str_301 = come_decrement_ref_count(str_301, (void*)0, (void*)0, 0, 0, 0); }
                if(str_300 && !__freed_obj__) { str_300 = come_decrement_ref_count(str_300, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_301 && !__freed_obj__) { str_301 = come_decrement_ref_count(str_301, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional111=n_294==count,            __freed_obj__ = 0, 
            _if_conditional111) {
                str_302=(char*)come_increment_ref_count(((char*)(right_value131=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1442)),offset_283,-1))));
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1443)),str_302);
                __freed_obj__ = 0;
                if(str_302 && !__freed_obj__) { str_302 = come_decrement_ref_count(str_302, (void*)0, (void*)0, 0, 0, 0); }
                if(str_300 && !__freed_obj__) { str_300 = come_decrement_ref_count(str_300, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_302 && !__freed_obj__) { str_302 = come_decrement_ref_count(str_302, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_300 && !__freed_obj__) { str_300 = come_decrement_ref_count(str_300, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            str_303=(char*)come_increment_ref_count(((char*)(right_value132=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1449)),offset_283,-1))));
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1450)),str_303);
            __freed_obj__ = 0;
            if(str_303 && !__freed_obj__) { str_303 = come_decrement_ref_count(str_303, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
            if(str_303 && !__freed_obj__) { str_303 = come_decrement_ref_count(str_303, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = ((char*)(right_value133=buffer_to_string(((struct buffer*)come_null_check(result_293, "libcomelang2-str.c", 1455)))));
    if(result_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
    if(result_293 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value134;
void* right_value135;
struct list$1charph* result_304;
void* right_value136;
void* right_value137;
struct buffer* buf_305;
int i_306;
_Bool _for_condtionalA40;
_Bool _if_conditional112;
void* right_value138;
_Bool _if_conditional113;
void* right_value139;
struct list$1charph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_304, 0, sizeof(struct list$1charph*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&buf_305, 0, sizeof(struct buffer*));
memset(&i_306, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    __freed_obj__ = 0;
    result_304=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1463))), "libcomelang2-str.c", 1463)))))));
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value136=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1465))), "libcomelang2-str.c", 1465)))))));
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_306=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA40=    i_306<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1477))) ,    __freed_obj__ = 0, 
    _for_condtionalA40;    i_306++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional112=strstr(self+i_306,str)==self+i_306,        __freed_obj__ = 0, 
        _if_conditional112) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_304, "libcomelang2-str.c", 1469)),(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(((struct buffer*)come_null_check(buf_305, "libcomelang2-str.c", 1469))->buf)))));
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(buf_305, "libcomelang2-str.c", 1470)));
            __freed_obj__ = 0;
            i_306+=strlen(str)-1;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(buf_305, "libcomelang2-str.c", 1474)),self[i_306]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional113=buffer_length(((struct buffer*)come_null_check(buf_305, "libcomelang2-str.c", 1481)))!=0,    __freed_obj__ = 0, 
    _if_conditional113) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_304, "libcomelang2-str.c", 1478)),(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(((struct buffer*)come_null_check(buf_305, "libcomelang2-str.c", 1478))->buf)))));
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result147__ = __result_obj__ = result_304;
    if(result_304 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(buf_305 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_305, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(result_304 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_305 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_305, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value140;
void* right_value141;
struct list$1charph* result_307;
int offset_308;
int ovec_max_309;
const char* err_313;
int erro_ofs_314;
int options_315;
char* str_316;
struct real_pcre8_or_16* re_317;
_Bool _while_condtional17;
int options_318;
int len_319;
int regex_result_320;
int i_321;
_Bool _for_condtionalA41;
int i_322;
_Bool _for_condtionalA42;
_Bool _if_conditional114;
void* right_value142;
char* str_323;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value143;
char* str_324;
_Bool _if_conditional117;
int i_325;
_Bool _for_condtionalA43;
void* right_value144;
char* match_string_326;
struct list$1charph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&result_307, 0, sizeof(struct list$1charph*));
memset(&offset_308, 0, sizeof(int));
memset(&ovec_max_309, 0, sizeof(int));
memset(&erro_ofs_314, 0, sizeof(int));
memset(&options_315, 0, sizeof(int));
memset(&str_316, 0, sizeof(char*));
memset(&re_317, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_318, 0, sizeof(int));
memset(&len_319, 0, sizeof(int));
memset(&regex_result_320, 0, sizeof(int));
memset(&i_321, 0, sizeof(int));
memset(&i_322, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&str_323, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
memset(&str_324, 0, sizeof(char*));
memset(&i_325, 0, sizeof(int));
memset(&right_value144, 0, sizeof(void*));
memset(&match_string_326, 0, sizeof(char*));
    result_307=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value140=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1486))), "libcomelang2-str.c", 1486)))))));
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_308=0;
    __freed_obj__ = 0;
    ovec_max_309=16;
    __freed_obj__ = 0;
    int start_310[ovec_max_309];
    memset(&start_310, 0, sizeof(int)    *(ovec_max_309)    );
    __freed_obj__ = 0;
    int end_311[ovec_max_309];
    memset(&end_311, 0, sizeof(int)    *(ovec_max_309)    );
    __freed_obj__ = 0;
    int ovec_value_312[ovec_max_309*3];
    memset(&ovec_value_312, 0, sizeof(int)    *(ovec_max_309*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_315=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1498))->options;
    __freed_obj__ = 0;
    str_316=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1499))->str;
    __freed_obj__ = 0;
    re_317=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1501))->re;
    __freed_obj__ = 0;
    while(_while_condtional17=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional17) {
        options_318=2097152;
        __freed_obj__ = 0;
        len_319=strlen(self);
        __freed_obj__ = 0;
        regex_result_320=pcre_exec(re_317,(struct pcre_extra*)0,self,len_319,offset_308,options_318,ovec_value_312,ovec_max_309*3);
        __freed_obj__ = 0;
        for(
        i_321=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA41=        i_321<ovec_max_309 ,        __freed_obj__ = 0, 
        _for_condtionalA41;        i_321++ ,        __freed_obj__ = 0, 
        0        ){
            start_310[i_321]=ovec_value_312[i_321*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_322=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA42=        i_322<ovec_max_309 ,        __freed_obj__ = 0, 
        _for_condtionalA42;        i_322++ ,        __freed_obj__ = 0, 
        0        ){
            end_311[i_322]=ovec_value_312[i_322*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=regex_result_320==1,        __freed_obj__ = 0, 
        _if_conditional114) {
            str_323=(char*)come_increment_ref_count(((char*)(right_value142=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1519)),start_310[0],end_311[0]))));
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_307, "libcomelang2-str.c", 1521)),(char*)come_increment_ref_count(str_323));
            __freed_obj__ = 0;
            if(_if_conditional115=offset_308==end_311[0],            __freed_obj__ = 0, 
            _if_conditional115) {
                offset_308++;
                __freed_obj__ = 0;
            }
            else {
                offset_308=end_311[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_323 && !__freed_obj__) { str_323 = come_decrement_ref_count(str_323, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional116=regex_result_320>1,            __freed_obj__ = 0, 
            _if_conditional116) {
                str_324=(char*)come_increment_ref_count(((char*)(right_value143=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1532)),start_310[0],end_311[0]))));
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_307, "libcomelang2-str.c", 1533)),(char*)come_increment_ref_count(str_324));
                __freed_obj__ = 0;
                if(_if_conditional117=offset_308==end_311[0],                __freed_obj__ = 0, 
                _if_conditional117) {
                    offset_308++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_308=end_311[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_325=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA43=                i_325<regex_result_320 ,                __freed_obj__ = 0, 
                _for_condtionalA43;                i_325++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_326=(char*)come_increment_ref_count(((char*)(right_value144=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1543)),start_310[i_325],end_311[i_325]))));
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_307, "libcomelang2-str.c", 1544)),(char*)come_increment_ref_count(match_string_326));
                    __freed_obj__ = 0;
                    if(match_string_326 && !__freed_obj__) { match_string_326 = come_decrement_ref_count(match_string_326, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_324 && !__freed_obj__) { str_324 = come_decrement_ref_count(str_324, (void*)0, (void*)0, 0, 0, 0); }
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
    __result148__ = __result_obj__ = result_307;
    if(result_307 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
    if(result_307 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_327;
int erro_ofs_328;
int options_329;
char* str_330;
struct real_pcre8_or_16* re_331;
void* right_value145;
void* right_value146;
struct list$1charph* result_332;
int offset_333;
int ovec_max_334;
_Bool _while_condtional18;
int options_338;
int len_339;
int regex_result_340;
int i_341;
_Bool _for_condtionalA44;
int i_342;
_Bool _for_condtionalA45;
_Bool _if_conditional118;
void* right_value147;
char* str_343;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value148;
char* str_344;
_Bool _if_conditional121;
int i_345;
_Bool _for_condtionalA46;
void* right_value149;
char* match_str_346;
_Bool _if_conditional122;
void* right_value150;
char* str_347;
struct list$1charph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_328, 0, sizeof(int));
memset(&options_329, 0, sizeof(int));
memset(&str_330, 0, sizeof(char*));
memset(&re_331, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&result_332, 0, sizeof(struct list$1charph*));
memset(&offset_333, 0, sizeof(int));
memset(&ovec_max_334, 0, sizeof(int));
memset(&options_338, 0, sizeof(int));
memset(&len_339, 0, sizeof(int));
memset(&regex_result_340, 0, sizeof(int));
memset(&i_341, 0, sizeof(int));
memset(&i_342, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&str_343, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&str_344, 0, sizeof(char*));
memset(&i_345, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&match_str_346, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&str_347, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_329=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1562))->options;
    __freed_obj__ = 0;
    str_330=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1563))->str;
    __freed_obj__ = 0;
    re_331=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1565))->re;
    __freed_obj__ = 0;
    result_332=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1567))), "libcomelang2-str.c", 1567)))))));
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_333=0;
    __freed_obj__ = 0;
    ovec_max_334=16;
    __freed_obj__ = 0;
    int start_335[ovec_max_334];
    memset(&start_335, 0, sizeof(int)    *(ovec_max_334)    );
    __freed_obj__ = 0;
    int end_336[ovec_max_334];
    memset(&end_336, 0, sizeof(int)    *(ovec_max_334)    );
    __freed_obj__ = 0;
    int ovec_value_337[ovec_max_334*3];
    memset(&ovec_value_337, 0, sizeof(int)    *(ovec_max_334*3)    );
    __freed_obj__ = 0;
    while(_while_condtional18=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional18) {
        options_338=2097152;
        __freed_obj__ = 0;
        len_339=strlen(self);
        __freed_obj__ = 0;
        regex_result_340=pcre_exec(re_331,(struct pcre_extra*)0,self,len_339,offset_333,options_338,ovec_value_337,ovec_max_334*3);
        __freed_obj__ = 0;
        for(
        i_341=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA44=        i_341<ovec_max_334 ,        __freed_obj__ = 0, 
        _for_condtionalA44;        i_341++ ,        __freed_obj__ = 0, 
        0        ){
            start_335[i_341]=ovec_value_337[i_341*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_342=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA45=        i_342<ovec_max_334 ,        __freed_obj__ = 0, 
        _for_condtionalA45;        i_342++ ,        __freed_obj__ = 0, 
        0        ){
            end_336[i_342]=ovec_value_337[i_342*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=regex_result_340==1,        __freed_obj__ = 0, 
        _if_conditional118) {
            str_343=(char*)come_increment_ref_count(((char*)(right_value147=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1592)),offset_333,start_335[0]))));
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_332, "libcomelang2-str.c", 1593)),(char*)come_increment_ref_count(str_343));
            __freed_obj__ = 0;
            if(_if_conditional119=offset_333==end_336[0],            __freed_obj__ = 0, 
            _if_conditional119) {
                offset_333++;
                __freed_obj__ = 0;
            }
            else {
                offset_333=end_336[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_343 && !__freed_obj__) { str_343 = come_decrement_ref_count(str_343, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional120=regex_result_340>1,            __freed_obj__ = 0, 
            _if_conditional120) {
                str_344=(char*)come_increment_ref_count(((char*)(right_value148=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1604)),offset_333,start_335[0]))));
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_332, "libcomelang2-str.c", 1605)),(char*)come_increment_ref_count(str_344));
                __freed_obj__ = 0;
                if(_if_conditional121=offset_333==end_336[0],                __freed_obj__ = 0, 
                _if_conditional121) {
                    offset_333++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_333=end_336[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_345=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA46=                i_345<regex_result_340 ,                __freed_obj__ = 0, 
                _for_condtionalA46;                i_345++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_346=(char*)come_increment_ref_count(((char*)(right_value149=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1615)),start_335[i_345],end_336[i_345]))));
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_332, "libcomelang2-str.c", 1616)),(char*)come_increment_ref_count(match_str_346));
                    __freed_obj__ = 0;
                    if(match_str_346 && !__freed_obj__) { match_str_346 = come_decrement_ref_count(match_str_346, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_344 && !__freed_obj__) { str_344 = come_decrement_ref_count(str_344, (void*)0, (void*)0, 0, 0, 0); }
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
    if(_if_conditional122=offset_333<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1631))),    __freed_obj__ = 0, 
    _if_conditional122) {
        str_347=(char*)come_increment_ref_count(((char*)(right_value150=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1627)),offset_333,-1))));
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_332, "libcomelang2-str.c", 1628)),(char*)come_increment_ref_count(str_347));
        __freed_obj__ = 0;
        if(str_347 && !__freed_obj__) { str_347 = come_decrement_ref_count(str_347, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result149__ = __result_obj__ = result_332;
    if(result_332 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_332, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
    if(result_332 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_332, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
int offset_348;
int ovec_max_349;
const char* err_353;
int erro_ofs_354;
int options_355;
char* str_356;
struct real_pcre8_or_16* re_357;
_Bool _while_condtional19;
int options_358;
int len_359;
int regex_result_360;
int i_361;
_Bool _for_condtionalA47;
int i_362;
_Bool _for_condtionalA48;
_Bool _if_conditional123;
_Bool __result150__;
_Bool __result151__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_348, 0, sizeof(int));
memset(&ovec_max_349, 0, sizeof(int));
memset(&erro_ofs_354, 0, sizeof(int));
memset(&options_355, 0, sizeof(int));
memset(&str_356, 0, sizeof(char*));
memset(&re_357, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_358, 0, sizeof(int));
memset(&len_359, 0, sizeof(int));
memset(&regex_result_360, 0, sizeof(int));
memset(&i_361, 0, sizeof(int));
memset(&i_362, 0, sizeof(int));
    offset_348=0;
    __freed_obj__ = 0;
    ovec_max_349=16;
    __freed_obj__ = 0;
    int start_350[ovec_max_349];
    memset(&start_350, 0, sizeof(int)    *(ovec_max_349)    );
    __freed_obj__ = 0;
    int end_351[ovec_max_349];
    memset(&end_351, 0, sizeof(int)    *(ovec_max_349)    );
    __freed_obj__ = 0;
    int ovec_value_352[ovec_max_349*3];
    memset(&ovec_value_352, 0, sizeof(int)    *(ovec_max_349*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_355=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1646))->options;
    __freed_obj__ = 0;
    str_356=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1647))->str;
    __freed_obj__ = 0;
    re_357=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1649))->re;
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        options_358=2097152;
        __freed_obj__ = 0;
        len_359=strlen(self);
        __freed_obj__ = 0;
        regex_result_360=pcre_exec(re_357,(struct pcre_extra*)0,self,len_359,offset_348,options_358,ovec_value_352,ovec_max_349*3);
        __freed_obj__ = 0;
        for(
        i_361=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA47=        i_361<ovec_max_349 ,        __freed_obj__ = 0, 
        _for_condtionalA47;        i_361++ ,        __freed_obj__ = 0, 
        0        ){
            start_350[i_361]=ovec_value_352[i_361*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_362=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA48=        i_362<ovec_max_349 ,        __freed_obj__ = 0, 
        _for_condtionalA48;        i_362++ ,        __freed_obj__ = 0, 
        0        ){
            end_351[i_362]=ovec_value_352[i_362*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=regex_result_360>0,        __freed_obj__ = 0, 
        _if_conditional123) {
            __result150__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result150__;
            __freed_obj__ = 0;
        }
        else {
            __result151__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result152__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_363;
int erro_ofs_364;
int options_365;
char* str_366;
struct real_pcre8_or_16* re_367;
void* right_value151;
void* right_value152;
struct list$1charph* result_368;
int offset_369;
int ovec_max_370;
int n_374;
_Bool _while_condtional20;
int options_375;
int len_376;
int regex_result_377;
int i_378;
_Bool _for_condtionalA49;
int i_379;
_Bool _for_condtionalA50;
_Bool _if_conditional124;
void* right_value153;
char* str_380;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value154;
char* str_381;
_Bool _if_conditional127;
int i_382;
_Bool _for_condtionalA51;
void* right_value155;
char* match_str_383;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value156;
char* str_384;
struct list$1charph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_364, 0, sizeof(int));
memset(&options_365, 0, sizeof(int));
memset(&str_366, 0, sizeof(char*));
memset(&re_367, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&result_368, 0, sizeof(struct list$1charph*));
memset(&offset_369, 0, sizeof(int));
memset(&ovec_max_370, 0, sizeof(int));
memset(&n_374, 0, sizeof(int));
memset(&options_375, 0, sizeof(int));
memset(&len_376, 0, sizeof(int));
memset(&regex_result_377, 0, sizeof(int));
memset(&i_378, 0, sizeof(int));
memset(&i_379, 0, sizeof(int));
memset(&right_value153, 0, sizeof(void*));
memset(&str_380, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&str_381, 0, sizeof(char*));
memset(&i_382, 0, sizeof(int));
memset(&right_value155, 0, sizeof(void*));
memset(&match_str_383, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&str_384, 0, sizeof(char*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_365=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1684))->options;
    __freed_obj__ = 0;
    str_366=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1685))->str;
    __freed_obj__ = 0;
    re_367=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1687))->re;
    __freed_obj__ = 0;
    result_368=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value151=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1689))), "libcomelang2-str.c", 1689)))))));
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    offset_369=0;
    __freed_obj__ = 0;
    ovec_max_370=16;
    __freed_obj__ = 0;
    int start_371[ovec_max_370];
    memset(&start_371, 0, sizeof(int)    *(ovec_max_370)    );
    __freed_obj__ = 0;
    int end_372[ovec_max_370];
    memset(&end_372, 0, sizeof(int)    *(ovec_max_370)    );
    __freed_obj__ = 0;
    int ovec_value_373[ovec_max_370*3];
    memset(&ovec_value_373, 0, sizeof(int)    *(ovec_max_370*3)    );
    __freed_obj__ = 0;
    n_374=0;
    __freed_obj__ = 0;
    while(_while_condtional20=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional20) {
        options_375=2097152;
        __freed_obj__ = 0;
        len_376=strlen(self);
        __freed_obj__ = 0;
        regex_result_377=pcre_exec(re_367,(struct pcre_extra*)0,self,len_376,offset_369,options_375,ovec_value_373,ovec_max_370*3);
        __freed_obj__ = 0;
        for(
        i_378=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA49=        i_378<ovec_max_370 ,        __freed_obj__ = 0, 
        _for_condtionalA49;        i_378++ ,        __freed_obj__ = 0, 
        0        ){
            start_371[i_378]=ovec_value_373[i_378*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_379=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA50=        i_379<ovec_max_370 ,        __freed_obj__ = 0, 
        _for_condtionalA50;        i_379++ ,        __freed_obj__ = 0, 
        0        ){
            end_372[i_379]=ovec_value_373[i_379*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=regex_result_377==1,        __freed_obj__ = 0, 
        _if_conditional124) {
            str_380=(char*)come_increment_ref_count(((char*)(right_value153=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1716)),offset_369,start_371[0]))));
            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_368, "libcomelang2-str.c", 1717)),(char*)come_increment_ref_count(str_380));
            __freed_obj__ = 0;
            if(_if_conditional125=offset_369==end_372[0],            __freed_obj__ = 0, 
            _if_conditional125) {
                offset_369++;
                __freed_obj__ = 0;
            }
            else {
                offset_369=end_372[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(str_380 && !__freed_obj__) { str_380 = come_decrement_ref_count(str_380, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional126=regex_result_377>1,            __freed_obj__ = 0, 
            _if_conditional126) {
                str_381=(char*)come_increment_ref_count(((char*)(right_value154=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1728)),offset_369,start_371[0]))));
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_368, "libcomelang2-str.c", 1729)),(char*)come_increment_ref_count(str_381));
                __freed_obj__ = 0;
                if(_if_conditional127=offset_369==end_372[0],                __freed_obj__ = 0, 
                _if_conditional127) {
                    offset_369++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_369=end_372[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_382=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA51=                i_382<regex_result_377 ,                __freed_obj__ = 0, 
                _for_condtionalA51;                i_382++ ,                __freed_obj__ = 0, 
                0                ){
                    match_str_383=(char*)come_increment_ref_count(((char*)(right_value155=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1739)),start_371[i_382],end_372[i_382]))));
                    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_368, "libcomelang2-str.c", 1740)),(char*)come_increment_ref_count(match_str_383));
                    __freed_obj__ = 0;
                    if(match_str_383 && !__freed_obj__) { match_str_383 = come_decrement_ref_count(match_str_383, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_381 && !__freed_obj__) { str_381 = come_decrement_ref_count(str_381, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_374++;
        __freed_obj__ = 0;
        if(_if_conditional128=maxsplit==n_374,        __freed_obj__ = 0, 
        _if_conditional128) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional129=offset_369<charp_length(((char*)come_null_check(self, "libcomelang2-str.c", 1761))),    __freed_obj__ = 0, 
    _if_conditional129) {
        str_384=(char*)come_increment_ref_count(((char*)(right_value156=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1757)),offset_369,-1))));
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_368, "libcomelang2-str.c", 1758)),(char*)come_increment_ref_count(str_384));
        __freed_obj__ = 0;
        if(str_384 && !__freed_obj__) { str_384 = come_decrement_ref_count(str_384, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result153__ = __result_obj__ = result_368;
    if(result_368 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_368, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
    if(result_368 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_368, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
const char* err_385;
int erro_ofs_386;
int options_387;
char* str_388;
struct real_pcre8_or_16* re_389;
void* right_value157;
char* self2_390;
int ovec_max_391;
int result_395;
int offset_396;
int n_397;
_Bool _while_condtional21;
int options_398;
int len_399;
int regex_result_400;
int i_401;
_Bool _for_condtionalA52;
int i_402;
_Bool _for_condtionalA53;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_386, 0, sizeof(int));
memset(&options_387, 0, sizeof(int));
memset(&str_388, 0, sizeof(char*));
memset(&re_389, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value157, 0, sizeof(void*));
memset(&self2_390, 0, sizeof(char*));
memset(&ovec_max_391, 0, sizeof(int));
memset(&result_395, 0, sizeof(int));
memset(&offset_396, 0, sizeof(int));
memset(&n_397, 0, sizeof(int));
memset(&options_398, 0, sizeof(int));
memset(&len_399, 0, sizeof(int));
memset(&regex_result_400, 0, sizeof(int));
memset(&i_401, 0, sizeof(int));
memset(&i_402, 0, sizeof(int));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_387=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1769))->options;
    __freed_obj__ = 0;
    str_388=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1770))->str;
    __freed_obj__ = 0;
    re_389=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1772))->re;
    __freed_obj__ = 0;
    self2_390=(char*)come_increment_ref_count(((char*)(right_value157=charp_reverse(((char*)come_null_check(self, "libcomelang2-str.c", 1774))))));
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ovec_max_391=16;
    __freed_obj__ = 0;
    int start_392[ovec_max_391];
    memset(&start_392, 0, sizeof(int)    *(ovec_max_391)    );
    __freed_obj__ = 0;
    int end_393[ovec_max_391];
    memset(&end_393, 0, sizeof(int)    *(ovec_max_391)    );
    __freed_obj__ = 0;
    int ovec_value_394[ovec_max_391*3];
    memset(&ovec_value_394, 0, sizeof(int)    *(ovec_max_391*3)    );
    __freed_obj__ = 0;
    result_395=default_value;
    __freed_obj__ = 0;
    offset_396=0;
    __freed_obj__ = 0;
    n_397=0;
    __freed_obj__ = 0;
    while(_while_condtional21=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional21) {
        options_398=2097152;
        __freed_obj__ = 0;
        len_399=strlen(self2_390);
        __freed_obj__ = 0;
        regex_result_400=pcre_exec(re_389,(struct pcre_extra*)0,self2_390,len_399,offset_396,options_398,ovec_value_394,ovec_max_391*3);
        __freed_obj__ = 0;
        for(
        i_401=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA52=        i_401<ovec_max_391 ,        __freed_obj__ = 0, 
        _for_condtionalA52;        i_401++ ,        __freed_obj__ = 0, 
        0        ){
            start_392[i_401]=ovec_value_394[i_401*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_402=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA53=        i_402<ovec_max_391 ,        __freed_obj__ = 0, 
        _for_condtionalA53;        i_402++ ,        __freed_obj__ = 0, 
        0        ){
            end_393[i_402]=ovec_value_394[i_402*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional130=regex_result_400>0,        __freed_obj__ = 0, 
        _if_conditional130) {
            n_397++;
            __freed_obj__ = 0;
            if(_if_conditional131=offset_396==end_393[0],            __freed_obj__ = 0, 
            _if_conditional131) {
                offset_396++;
                __freed_obj__ = 0;
            }
            else {
                offset_396=end_393[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional132=n_397==count,            __freed_obj__ = 0, 
            _if_conditional132) {
                result_395=strlen(self)-end_393[0];
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
    __result154__ = result_395;
    if(self2_390 && !__freed_obj__) { self2_390 = come_decrement_ref_count(self2_390, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
    if(self2_390 && !__freed_obj__) { self2_390 = come_decrement_ref_count(self2_390, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
int offset_403;
int ovec_max_404;
const char* err_408;
int erro_ofs_409;
int options_410;
char* str_411;
struct real_pcre8_or_16* re_412;
int n_413;
_Bool _while_condtional22;
int options_414;
int len_415;
int regex_result_416;
int i_417;
_Bool _for_condtionalA54;
int i_418;
_Bool _for_condtionalA55;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result155__;
_Bool _if_conditional135;
_Bool __result156__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_403, 0, sizeof(int));
memset(&ovec_max_404, 0, sizeof(int));
memset(&erro_ofs_409, 0, sizeof(int));
memset(&options_410, 0, sizeof(int));
memset(&str_411, 0, sizeof(char*));
memset(&re_412, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_413, 0, sizeof(int));
memset(&options_414, 0, sizeof(int));
memset(&len_415, 0, sizeof(int));
memset(&regex_result_416, 0, sizeof(int));
memset(&i_417, 0, sizeof(int));
memset(&i_418, 0, sizeof(int));
    offset_403=0;
    __freed_obj__ = 0;
    ovec_max_404=16;
    __freed_obj__ = 0;
    int start_405[ovec_max_404];
    memset(&start_405, 0, sizeof(int)    *(ovec_max_404)    );
    __freed_obj__ = 0;
    int end_406[ovec_max_404];
    memset(&end_406, 0, sizeof(int)    *(ovec_max_404)    );
    __freed_obj__ = 0;
    int ovec_value_407[ovec_max_404*3];
    memset(&ovec_value_407, 0, sizeof(int)    *(ovec_max_404*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_410=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1838))->options;
    __freed_obj__ = 0;
    str_411=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1839))->str;
    __freed_obj__ = 0;
    re_412=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1841))->re;
    __freed_obj__ = 0;
    n_413=0;
    __freed_obj__ = 0;
    while(_while_condtional22=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional22) {
        options_414=2097152;
        __freed_obj__ = 0;
        len_415=strlen(self);
        __freed_obj__ = 0;
        regex_result_416=pcre_exec(re_412,(struct pcre_extra*)0,self,len_415,offset_403,options_414,ovec_value_407,ovec_max_404*3);
        __freed_obj__ = 0;
        for(
        i_417=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA54=        i_417<ovec_max_404 ,        __freed_obj__ = 0, 
        _for_condtionalA54;        i_417++ ,        __freed_obj__ = 0, 
        0        ){
            start_405[i_417]=ovec_value_407[i_417*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_418=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA55=        i_418<ovec_max_404 ,        __freed_obj__ = 0, 
        _for_condtionalA55;        i_418++ ,        __freed_obj__ = 0, 
        0        ){
            end_406[i_418]=ovec_value_407[i_418*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional133=regex_result_416>0,        __freed_obj__ = 0, 
        _if_conditional133) {
            n_413++;
            __freed_obj__ = 0;
            if(_if_conditional134=count==n_413,            __freed_obj__ = 0, 
            _if_conditional134) {
                __result155__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result155__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional135=offset_403==end_406[0],            __freed_obj__ = 0, 
            _if_conditional135) {
                offset_403++;
                __freed_obj__ = 0;
            }
            else {
                offset_403=end_406[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            __result156__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result156__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result157__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
int offset_419;
int ovec_max_420;
const char* err_424;
int erro_ofs_425;
int options_426;
char* str_427;
struct real_pcre8_or_16* re_428;
void* right_value158;
void* right_value159;
struct buffer* result_429;
_Bool _while_condtional23;
int options_430;
int len_431;
int regex_result_432;
int i_433;
_Bool _for_condtionalA56;
int i_434;
_Bool _for_condtionalA57;
_Bool _if_conditional136;
void* right_value160;
char* str_435;
void* right_value161;
void* right_value162;
struct list$1charph* group_strings_436;
void* right_value163;
char* match_string_437;
void* right_value164;
void* right_value165;
char* block_result_438;
_Bool _if_conditional137;
void* right_value166;
char* __result158__;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value167;
char* str_439;
_Bool _if_conditional140;
void* right_value168;
char* str_440;
_Bool _if_conditional141;
void* right_value169;
void* right_value170;
struct list$1charph* group_strings_441;
int i_442;
_Bool _for_condtionalA58;
void* right_value171;
char* match_string_443;
void* right_value172;
char* match_string_444;
void* right_value173;
char* block_result_445;
_Bool _if_conditional142;
void* right_value174;
char* __result159__;
_Bool _if_conditional143;
void* right_value175;
char* str_446;
void* right_value176;
char* str_447;
void* right_value177;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_419, 0, sizeof(int));
memset(&ovec_max_420, 0, sizeof(int));
memset(&erro_ofs_425, 0, sizeof(int));
memset(&options_426, 0, sizeof(int));
memset(&str_427, 0, sizeof(char*));
memset(&re_428, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&result_429, 0, sizeof(struct buffer*));
memset(&options_430, 0, sizeof(int));
memset(&len_431, 0, sizeof(int));
memset(&regex_result_432, 0, sizeof(int));
memset(&i_433, 0, sizeof(int));
memset(&i_434, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&str_435, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&group_strings_436, 0, sizeof(struct list$1charph*));
memset(&right_value163, 0, sizeof(void*));
memset(&match_string_437, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&block_result_438, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&str_439, 0, sizeof(char*));
memset(&right_value168, 0, sizeof(void*));
memset(&str_440, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&group_strings_441, 0, sizeof(struct list$1charph*));
memset(&i_442, 0, sizeof(int));
memset(&right_value171, 0, sizeof(void*));
memset(&match_string_443, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&match_string_444, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&block_result_445, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&str_446, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
memset(&str_447, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
    offset_419=0;
    __freed_obj__ = 0;
    ovec_max_420=16;
    __freed_obj__ = 0;
    int start_421[ovec_max_420];
    memset(&start_421, 0, sizeof(int)    *(ovec_max_420)    );
    __freed_obj__ = 0;
    int end_422[ovec_max_420];
    memset(&end_422, 0, sizeof(int)    *(ovec_max_420)    );
    __freed_obj__ = 0;
    int ovec_value_423[ovec_max_420*3];
    memset(&ovec_value_423, 0, sizeof(int)    *(ovec_max_420*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_426=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1896))->options;
    __freed_obj__ = 0;
    str_427=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1897))->str;
    __freed_obj__ = 0;
    re_428=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1899))->re;
    __freed_obj__ = 0;
    result_429=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1901))), "libcomelang2-str.c", 1901)))))));
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional23=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional23) {
        options_430=2097152;
        __freed_obj__ = 0;
        len_431=strlen(self);
        __freed_obj__ = 0;
        regex_result_432=pcre_exec(re_428,(struct pcre_extra*)0,self,len_431,offset_419,options_430,ovec_value_423,ovec_max_420*3);
        __freed_obj__ = 0;
        for(
        i_433=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA56=        i_433<ovec_max_420 ,        __freed_obj__ = 0, 
        _for_condtionalA56;        i_433++ ,        __freed_obj__ = 0, 
        0        ){
            start_421[i_433]=ovec_value_423[i_433*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_434=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA57=        i_434<ovec_max_420 ,        __freed_obj__ = 0, 
        _for_condtionalA57;        i_434++ ,        __freed_obj__ = 0, 
        0        ){
            end_422[i_434]=ovec_value_423[i_434*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=regex_result_432==1,        __freed_obj__ = 0, 
        _if_conditional136) {
            str_435=(char*)come_increment_ref_count(((char*)(right_value160=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1917)),offset_419,start_421[0]))));
            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1919)),str_435);
            __freed_obj__ = 0;
            group_strings_436=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1921))), "libcomelang2-str.c", 1921)))))));
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_string_437=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1923)),start_421[0],end_422[0]))));
            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_436, "libcomelang2-str.c", 1925)),(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1925)),start_421[0],end_422[0])))));
            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            block_result_438=(char*)come_increment_ref_count(((char*)(right_value165=block(parent,match_string_437,group_strings_436))));
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional137=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1933))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional137) {
                __result158__ = __result_obj__ = ((char*)(right_value166=buffer_to_string(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1930)))));
                if(str_435 && !__freed_obj__) { str_435 = come_decrement_ref_count(str_435, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_436 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_436, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_437 && !__freed_obj__) { match_string_437 = come_decrement_ref_count(match_string_437, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_438 && !__freed_obj__) { block_result_438 = come_decrement_ref_count(block_result_438, (void*)0, (void*)0, 0, 0, 0); }
                if(result_429 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result158__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1933)),block_result_438);
            __freed_obj__ = 0;
            if(_if_conditional138=offset_419==end_422[0],            __freed_obj__ = 0, 
            _if_conditional138) {
                offset_419++;
                __freed_obj__ = 0;
            }
            else {
                offset_419=end_422[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional139=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1947))->global,            __freed_obj__ = 0, 
            _if_conditional139) {
                str_439=(char*)come_increment_ref_count(((char*)(right_value167=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1943)),offset_419,-1))));
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1944)),str_439);
                __freed_obj__ = 0;
                if(str_439 && !__freed_obj__) { str_439 = come_decrement_ref_count(str_439, (void*)0, (void*)0, 0, 0, 0); }
                if(str_435 && !__freed_obj__) { str_435 = come_decrement_ref_count(str_435, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_436 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_436, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_437 && !__freed_obj__) { match_string_437 = come_decrement_ref_count(match_string_437, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_438 && !__freed_obj__) { block_result_438 = come_decrement_ref_count(block_result_438, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_439 && !__freed_obj__) { str_439 = come_decrement_ref_count(str_439, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_435 && !__freed_obj__) { str_435 = come_decrement_ref_count(str_435, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_436 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_436, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_437 && !__freed_obj__) { match_string_437 = come_decrement_ref_count(match_string_437, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_438 && !__freed_obj__) { block_result_438 = come_decrement_ref_count(block_result_438, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional140=regex_result_432>1,            __freed_obj__ = 0, 
            _if_conditional140) {
                str_440=(char*)come_increment_ref_count(((char*)(right_value168=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1950)),offset_419,start_421[0]))));
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1951)),str_440);
                __freed_obj__ = 0;
                if(_if_conditional141=offset_419==end_422[0],                __freed_obj__ = 0, 
                _if_conditional141) {
                    offset_419++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_419=end_422[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_441=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value170=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value169=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1960))), "libcomelang2-str.c", 1960)))))));
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_442=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA58=                i_442<regex_result_432 ,                __freed_obj__ = 0, 
                _for_condtionalA58;                i_442++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_443=(char*)come_increment_ref_count(((char*)(right_value171=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1963)),start_421[i_442],end_422[i_442]))));
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_441, "libcomelang2-str.c", 1964)),(char*)come_increment_ref_count(match_string_443));
                    __freed_obj__ = 0;
                    if(match_string_443 && !__freed_obj__) { match_string_443 = come_decrement_ref_count(match_string_443, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_444=(char*)come_increment_ref_count(((char*)(right_value172=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1967)),start_421[0],end_422[0]))));
                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                block_result_445=(char*)come_increment_ref_count(((char*)(right_value173=block(parent,match_string_444,group_strings_441))));
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional142=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 1974))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional142) {
                    __result159__ = __result_obj__ = ((char*)(right_value174=buffer_to_string(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1972)))));
                    if(str_440 && !__freed_obj__) { str_440 = come_decrement_ref_count(str_440, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_441 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_441, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_444 && !__freed_obj__) { match_string_444 = come_decrement_ref_count(match_string_444, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_445 && !__freed_obj__) { block_result_445 = come_decrement_ref_count(block_result_445, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_429 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result159__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1974)),block_result_445);
                __freed_obj__ = 0;
                if(_if_conditional143=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 1981))->global,                __freed_obj__ = 0, 
                _if_conditional143) {
                    str_446=(char*)come_increment_ref_count(((char*)(right_value175=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1977)),offset_419,-1))));
                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1978)),str_446);
                    __freed_obj__ = 0;
                    if(str_446 && !__freed_obj__) { str_446 = come_decrement_ref_count(str_446, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_440 && !__freed_obj__) { str_440 = come_decrement_ref_count(str_440, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_441 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_441, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_444 && !__freed_obj__) { match_string_444 = come_decrement_ref_count(match_string_444, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_445 && !__freed_obj__) { block_result_445 = come_decrement_ref_count(block_result_445, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_446 && !__freed_obj__) { str_446 = come_decrement_ref_count(str_446, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_440 && !__freed_obj__) { str_440 = come_decrement_ref_count(str_440, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_441 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_441, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_444 && !__freed_obj__) { match_string_444 = come_decrement_ref_count(match_string_444, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_445 && !__freed_obj__) { block_result_445 = come_decrement_ref_count(block_result_445, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_447=(char*)come_increment_ref_count(((char*)(right_value176=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 1984)),offset_419,-1))));
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1985)),str_447);
                __freed_obj__ = 0;
                if(str_447 && !__freed_obj__) { str_447 = come_decrement_ref_count(str_447, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_447 && !__freed_obj__) { str_447 = come_decrement_ref_count(str_447, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result160__ = __result_obj__ = ((char*)(right_value177=buffer_to_string(((struct buffer*)come_null_check(result_429, "libcomelang2-str.c", 1989)))));
    if(result_429 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
    if(result_429 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
int offset_448;
int ovec_max_449;
const char* err_453;
int erro_ofs_454;
int options_455;
char* str_456;
struct real_pcre8_or_16* re_457;
void* right_value178;
void* right_value179;
struct buffer* result_458;
int n_459;
_Bool _while_condtional24;
int options_460;
int len_461;
int regex_result_462;
int i_463;
_Bool _for_condtionalA59;
int i_464;
_Bool _for_condtionalA60;
_Bool _if_conditional144;
void* right_value180;
char* str_465;
void* right_value181;
void* right_value182;
struct list$1charph* group_strings_466;
void* right_value183;
void* right_value184;
char* match_string_467;
void* right_value185;
char* block_result_468;
_Bool _if_conditional145;
void* right_value186;
char* __result161__;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value187;
char* str_469;
_Bool _if_conditional148;
void* right_value188;
char* str_470;
_Bool _if_conditional149;
void* right_value189;
char* str_471;
_Bool _if_conditional150;
void* right_value190;
void* right_value191;
struct list$1charph* group_strings_472;
int i_473;
_Bool _for_condtionalA61;
void* right_value192;
char* match_string_474;
void* right_value193;
char* match_string_475;
void* right_value194;
char* block_result_476;
_Bool _if_conditional151;
void* right_value195;
char* __result162__;
_Bool _if_conditional152;
void* right_value196;
char* str_477;
_Bool _if_conditional153;
void* right_value197;
char* str_478;
void* right_value198;
char* str_479;
void* right_value199;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_448, 0, sizeof(int));
memset(&ovec_max_449, 0, sizeof(int));
memset(&erro_ofs_454, 0, sizeof(int));
memset(&options_455, 0, sizeof(int));
memset(&str_456, 0, sizeof(char*));
memset(&re_457, 0, sizeof(struct real_pcre8_or_16*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&result_458, 0, sizeof(struct buffer*));
memset(&n_459, 0, sizeof(int));
memset(&options_460, 0, sizeof(int));
memset(&len_461, 0, sizeof(int));
memset(&regex_result_462, 0, sizeof(int));
memset(&i_463, 0, sizeof(int));
memset(&i_464, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&str_465, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&group_strings_466, 0, sizeof(struct list$1charph*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&match_string_467, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&block_result_468, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&str_469, 0, sizeof(char*));
memset(&right_value188, 0, sizeof(void*));
memset(&str_470, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
memset(&str_471, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&group_strings_472, 0, sizeof(struct list$1charph*));
memset(&i_473, 0, sizeof(int));
memset(&right_value192, 0, sizeof(void*));
memset(&match_string_474, 0, sizeof(char*));
memset(&right_value193, 0, sizeof(void*));
memset(&match_string_475, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&block_result_476, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&str_477, 0, sizeof(char*));
memset(&right_value197, 0, sizeof(void*));
memset(&str_478, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&str_479, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
    offset_448=0;
    __freed_obj__ = 0;
    ovec_max_449=16;
    __freed_obj__ = 0;
    int start_450[ovec_max_449];
    memset(&start_450, 0, sizeof(int)    *(ovec_max_449)    );
    __freed_obj__ = 0;
    int end_451[ovec_max_449];
    memset(&end_451, 0, sizeof(int)    *(ovec_max_449)    );
    __freed_obj__ = 0;
    int ovec_value_452[ovec_max_449*3];
    memset(&ovec_value_452, 0, sizeof(int)    *(ovec_max_449*3)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    options_455=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2004))->options;
    __freed_obj__ = 0;
    str_456=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2005))->str;
    __freed_obj__ = 0;
    re_457=((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2007))->re;
    __freed_obj__ = 0;
    result_458=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2009))), "libcomelang2-str.c", 2009)))))));
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    n_459=0;
    __freed_obj__ = 0;
    while(_while_condtional24=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional24) {
        options_460=2097152;
        __freed_obj__ = 0;
        len_461=strlen(self);
        __freed_obj__ = 0;
        regex_result_462=pcre_exec(re_457,(struct pcre_extra*)0,self,len_461,offset_448,options_460,ovec_value_452,ovec_max_449*3);
        __freed_obj__ = 0;
        for(
        i_463=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA59=        i_463<ovec_max_449 ,        __freed_obj__ = 0, 
        _for_condtionalA59;        i_463++ ,        __freed_obj__ = 0, 
        0        ){
            start_450[i_463]=ovec_value_452[i_463*2];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_464=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA60=        i_464<ovec_max_449 ,        __freed_obj__ = 0, 
        _for_condtionalA60;        i_464++ ,        __freed_obj__ = 0, 
        0        ){
            end_451[i_464]=ovec_value_452[i_464*2+1];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional144=regex_result_462==1,        __freed_obj__ = 0, 
        _if_conditional144) {
            n_459++;
            __freed_obj__ = 0;
            str_465=(char*)come_increment_ref_count(((char*)(right_value180=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2028)),offset_448,start_450[0]))));
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2030)),str_465);
            __freed_obj__ = 0;
            group_strings_466=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value182=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value181=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2032))), "libcomelang2-str.c", 2032)))))));
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_466, "libcomelang2-str.c", 2034)),(char*)come_increment_ref_count(((char*)(right_value183=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2034)),start_450[0],end_451[0])))));
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            match_string_467=(char*)come_increment_ref_count(((char*)(right_value184=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2036)),start_450[0],end_451[0]))));
            if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            block_result_468=(char*)come_increment_ref_count(((char*)(right_value185=block(parent,match_string_467,group_strings_466))));
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional145=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2044))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional145) {
                __result161__ = __result_obj__ = ((char*)(right_value186=buffer_to_string(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2041)))));
                if(str_465 && !__freed_obj__) { str_465 = come_decrement_ref_count(str_465, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_466 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_466, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                if(result_458 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_458, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result161__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2044)),block_result_468);
            __freed_obj__ = 0;
            if(_if_conditional146=offset_448==end_451[0],            __freed_obj__ = 0, 
            _if_conditional146) {
                offset_448++;
                __freed_obj__ = 0;
            }
            else {
                offset_448=end_451[0];
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional147=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2059))->global,            __freed_obj__ = 0, 
            _if_conditional147) {
                str_469=(char*)come_increment_ref_count(((char*)(right_value187=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2054)),offset_448,-1))));
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2055)),str_469);
                __freed_obj__ = 0;
                if(str_469 && !__freed_obj__) { str_469 = come_decrement_ref_count(str_469, (void*)0, (void*)0, 0, 0, 0); }
                if(str_465 && !__freed_obj__) { str_465 = come_decrement_ref_count(str_465, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_466 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_466, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_469 && !__freed_obj__) { str_469 = come_decrement_ref_count(str_469, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional148=n_459==count,            __freed_obj__ = 0, 
            _if_conditional148) {
                str_470=(char*)come_increment_ref_count(((char*)(right_value188=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2060)),offset_448,-1))));
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2061)),str_470);
                __freed_obj__ = 0;
                if(str_470 && !__freed_obj__) { str_470 = come_decrement_ref_count(str_470, (void*)0, (void*)0, 0, 0, 0); }
                if(str_465 && !__freed_obj__) { str_465 = come_decrement_ref_count(str_465, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_466 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_466, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_470 && !__freed_obj__) { str_470 = come_decrement_ref_count(str_470, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(str_465 && !__freed_obj__) { str_465 = come_decrement_ref_count(str_465, (void*)0, (void*)0, 0, 0, 0); }
            if(group_strings_466 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_466, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(match_string_467 && !__freed_obj__) { match_string_467 = come_decrement_ref_count(match_string_467, (void*)0, (void*)0, 0, 0, 0); }
            if(block_result_468 && !__freed_obj__) { block_result_468 = come_decrement_ref_count(block_result_468, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional149=regex_result_462>1,            __freed_obj__ = 0, 
            _if_conditional149) {
                n_459++;
                __freed_obj__ = 0;
                str_471=(char*)come_increment_ref_count(((char*)(right_value189=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2069)),offset_448,start_450[0]))));
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2070)),str_471);
                __freed_obj__ = 0;
                if(_if_conditional150=offset_448==end_451[0],                __freed_obj__ = 0, 
                _if_conditional150) {
                    offset_448++;
                    __freed_obj__ = 0;
                }
                else {
                    offset_448=end_451[0];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                group_strings_472=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value190=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2079))), "libcomelang2-str.c", 2079)))))));
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_473=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA61=                i_473<regex_result_462 ,                __freed_obj__ = 0, 
                _for_condtionalA61;                i_473++ ,                __freed_obj__ = 0, 
                0                ){
                    match_string_474=(char*)come_increment_ref_count(((char*)(right_value192=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2082)),start_450[i_473],end_451[i_473]))));
                    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(group_strings_472, "libcomelang2-str.c", 2083)),(char*)come_increment_ref_count(match_string_474));
                    __freed_obj__ = 0;
                    if(match_string_474 && !__freed_obj__) { match_string_474 = come_decrement_ref_count(match_string_474, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                match_string_475=(char*)come_increment_ref_count(((char*)(right_value193=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2086)),start_450[0],end_451[0]))));
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                block_result_476=(char*)come_increment_ref_count(((char*)(right_value194=block(parent,match_string_475,group_strings_472))));
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional151=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2-str.c", 2093))->__method_block_result_kind__!=0,                __freed_obj__ = 0, 
                _if_conditional151) {
                    __result162__ = __result_obj__ = ((char*)(right_value195=buffer_to_string(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2091)))));
                    if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_472 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_472, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_475 && !__freed_obj__) { match_string_475 = come_decrement_ref_count(match_string_475, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_476 && !__freed_obj__) { block_result_476 = come_decrement_ref_count(block_result_476, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_458 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_458, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result162__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2093)),block_result_476);
                __freed_obj__ = 0;
                if(_if_conditional152=!((struct come_regex*)come_null_check(reg, "libcomelang2-str.c", 2101))->global,                __freed_obj__ = 0, 
                _if_conditional152) {
                    str_477=(char*)come_increment_ref_count(((char*)(right_value196=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2096)),offset_448,-1))));
                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2097)),str_477);
                    __freed_obj__ = 0;
                    if(str_477 && !__freed_obj__) { str_477 = come_decrement_ref_count(str_477, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_472 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_472, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_475 && !__freed_obj__) { match_string_475 = come_decrement_ref_count(match_string_475, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_476 && !__freed_obj__) { block_result_476 = come_decrement_ref_count(block_result_476, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_477 && !__freed_obj__) { str_477 = come_decrement_ref_count(str_477, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional153=n_459==count,                __freed_obj__ = 0, 
                _if_conditional153) {
                    str_478=(char*)come_increment_ref_count(((char*)(right_value197=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2102)),offset_448,-1))));
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2103)),str_478);
                    __freed_obj__ = 0;
                    if(str_478 && !__freed_obj__) { str_478 = come_decrement_ref_count(str_478, (void*)0, (void*)0, 0, 0, 0); }
                    if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
                    if(group_strings_472 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_472, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(match_string_475 && !__freed_obj__) { match_string_475 = come_decrement_ref_count(match_string_475, (void*)0, (void*)0, 0, 0, 0); }
                    if(block_result_476 && !__freed_obj__) { block_result_476 = come_decrement_ref_count(block_result_476, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                    if(str_478 && !__freed_obj__) { str_478 = come_decrement_ref_count(str_478, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(str_471 && !__freed_obj__) { str_471 = come_decrement_ref_count(str_471, (void*)0, (void*)0, 0, 0, 0); }
                if(group_strings_472 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,group_strings_472, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(match_string_475 && !__freed_obj__) { match_string_475 = come_decrement_ref_count(match_string_475, (void*)0, (void*)0, 0, 0, 0); }
                if(block_result_476 && !__freed_obj__) { block_result_476 = come_decrement_ref_count(block_result_476, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                str_479=(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(((char*)come_null_check(self, "libcomelang2-str.c", 2109)),offset_448,-1))));
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2110)),str_479);
                __freed_obj__ = 0;
                if(str_479 && !__freed_obj__) { str_479 = come_decrement_ref_count(str_479, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
                if(str_479 && !__freed_obj__) { str_479 = come_decrement_ref_count(str_479, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result163__ = __result_obj__ = ((char*)(right_value199=buffer_to_string(((struct buffer*)come_null_check(result_458, "libcomelang2-str.c", 2115)))));
    if(result_458 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_458, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
    if(result_458 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_458, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
_Bool __freed_obj__;
int result_480;
unsigned int* p_481;
_Bool _while_condtional25;
unsigned int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_480, 0, sizeof(int));
memset(&p_481, 0, sizeof(unsigned int*));
    __freed_obj__ = 0;
    result_480=0;
    __freed_obj__ = 0;
    p_481=value;
    __freed_obj__ = 0;
    while(_while_condtional25=*p_481,    __freed_obj__ = 0, 
    _while_condtional25) {
        result_480+=(*p_481);
        __freed_obj__ = 0;
        p_481++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result164__ = result_480;
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result166__ = wcscmp(left,right)==0;
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result168__ = left==right;
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result169__ = left!=right;
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = value;
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result171__ = left==right;
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value200;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result172__ = __result_obj__ = ((char*)(right_value200=xsprintf("%ls",wc)));
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
}

char* string_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value201;
char* result_482;
_Bool _if_conditional154;
void* right_value202;
char* __result173__;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&result_482, 0, sizeof(char*));
memset(&right_value202, 0, sizeof(void*));
    result_482=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(str))));
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional154=result_482[string_length(((char*)come_null_check(result_482, "libcomelang2-str.c", 2180)))-1]==10,    __freed_obj__ = 0, 
    _if_conditional154) {
        __result173__ = __result_obj__ = ((char*)(right_value202=string_substring(((char*)come_null_check(result_482, "libcomelang2-str.c", 2177)),0,-2)));
        if(result_482 && !__freed_obj__) { result_482 = come_decrement_ref_count(result_482, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result174__ = __result_obj__ = result_482;
    if(result_482 && !__freed_obj__) { result_482 = come_decrement_ref_count(result_482, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
    if(result_482 && !__freed_obj__) { result_482 = come_decrement_ref_count(result_482, (void*)0, (void*)0, 0, 0, 0); }
}

