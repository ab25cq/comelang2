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
extern char* gCallerSName[10];
extern int gCallerSLine[10];
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
typedef int sig_atomic_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
typedef union sigval __sigval_t;
struct anonymous_typeX23
{
};
struct anonymous_typeX24
{
};
struct anonymous_typeX25
{
};
struct anonymous_typeX26
{
};
struct anonymous_typeX29
{
};
struct anonymous_typeX31
{
};
struct anonymous_typeX27
{
};
struct anonymous_typeX32
{
};
struct anonymous_typeX33
{
};
struct anonymous_typeX35
{
    int si_pid;
    unsigned int si_uid;
};
struct anonymous_typeX36
{
    int si_tid;
    int si_overrun;
    union sigval si_sigval;
};
struct anonymous_typeX37
{
    int si_pid;
    unsigned int si_uid;
    union sigval si_sigval;
};
struct anonymous_typeX38
{
    int si_pid;
    unsigned int si_uid;
    int si_status;
    long int si_utime;
    long int si_stime;
};
struct anonymous_typeX41
{
};
struct anonymous_typeX43
{
    void* _lower;
    void* _upper;
};
union anonymous_typeZ42
{
struct anonymous_typeX43 _addr_bnd;
unsigned int _pkey;
};
struct anonymous_typeX39
{
    void* si_addr;
    short int si_addr_lsb;
    union anonymous_typeZ42 _bounds;
};
struct anonymous_typeX44
{
    long int si_band;
    int si_fd;
};
struct anonymous_typeX45
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};
union anonymous_typeZ34
{
int _pad[((128/sizeof(int))-4)];
struct anonymous_typeX35 _kill;
struct anonymous_typeX36 _timer;
struct anonymous_typeX37 _rt;
struct anonymous_typeX38 _sigchld;
struct anonymous_typeX39 _sigfault;
struct anonymous_typeX44 _sigpoll;
struct anonymous_typeX45 _sigsys;
};
struct anonymous_typeX21
{
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union anonymous_typeZ34 _sifields;
};
typedef struct anonymous_typeX21 siginfo_t;
enum { SI_ASYNCNL=-60,
SI_DETHREAD=-7,
SI_TKILL
,SI_SIGIO
,SI_ASYNCIO
,SI_MESGQ
,SI_TIMER
,SI_QUEUE
,SI_USER
,SI_KERNEL=128
};
enum { ILL_ILLOPC=1,
ILL_ILLOPN
,ILL_ILLADR
,ILL_ILLTRP
,ILL_PRVOPC
,ILL_PRVREG
,ILL_COPROC
,ILL_BADSTK
,ILL_BADIADDR
};
enum { FPE_INTDIV=1,
FPE_INTOVF
,FPE_FLTDIV
,FPE_FLTOVF
,FPE_FLTUND
,FPE_FLTRES
,FPE_FLTINV
,FPE_FLTSUB
,FPE_FLTUNK=14,
FPE_CONDTRAP
};
enum { SEGV_MAPERR=1,
SEGV_ACCERR
,SEGV_BNDERR
,SEGV_PKUERR
,SEGV_ACCADI
,SEGV_ADIDERR
,SEGV_ADIPERR
,SEGV_MTEAERR
,SEGV_MTESERR
};
enum { BUS_ADRALN=1,
BUS_ADRERR
,BUS_OBJERR
,BUS_MCEERR_AR
,BUS_MCEERR_AO
};
enum { TRAP_BRKPT=1,
TRAP_TRACE
,TRAP_BRANCH
,TRAP_HWBKPT
,TRAP_UNK
};
enum { CLD_EXITED=1,
CLD_KILLED
,CLD_DUMPED
,CLD_TRAPPED
,CLD_STOPPED
,CLD_CONTINUED
};
enum { POLL_IN=1,
POLL_OUT
,POLL_MSG
,POLL_ERR
,POLL_PRI
,POLL_HUP
};
typedef union sigval sigval_t;
struct anonymous_typeX47
{
};
struct anonymous_typeX49
{
    void (*_function)(union sigval);
    union pthread_attr_t* _attribute;
};
union anonymous_typeZ48
{
int _pad[((64/sizeof(int))-4)];
int _tid;
struct anonymous_typeX49 _sigev_thread;
};
struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ48 _sigev_un;
};
typedef struct sigevent sigevent_t;
enum { SIGEV_SIGNAL=0,
SIGEV_NONE
,SIGEV_THREAD
,SIGEV_THREAD_ID=4
};
typedef void (*__sighandler_t)(int);
typedef void (*sighandler_t)(int);
typedef void (*sig_t)(int);
union anonymous_typeZ51
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct anonymous_typeX21*,void*);
};
struct sigaction
{
    union anonymous_typeZ51 __sigaction_handler;
    struct anonymous_typeX8 sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX52
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX52 __kernel_fd_set;
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
struct anonymous_typeX53
{
    int val[2];
};
typedef struct anonymous_typeX53 __kernel_fsid_t;
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
    unsigned short int __reserved[3];
};
struct anonymous_typeX54
{
    void* ss_sp;
    int ss_flags;
    long int ss_size;
};
typedef struct anonymous_typeX54 stack_t;
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
enum __itimer_which { ITIMER_REAL=0,
ITIMER_VIRTUAL=1,
ITIMER_PROF=2
};
struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};
typedef enum __itimer_which __itimer_which_t;
struct user_regs_struct
{
    unsigned long long regs[31];
    unsigned long long sp;
    unsigned long long pc;
    unsigned long long pstate;
};
struct user_fpsimd_struct
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};
typedef unsigned long int elf_greg_t;
typedef unsigned long int elf_gregset_t[(sizeof(struct user_regs_struct)/sizeof(unsigned long int))];
typedef struct user_fpsimd_struct elf_fpregset_t;
typedef unsigned int __pr_uid_t;
typedef unsigned int __pr_gid_t;
struct elf_siginfo
{
    int si_signo;
    int si_code;
    int si_errno;
};
struct elf_prstatus
{
    struct elf_siginfo pr_info;
    short int pr_cursig;
    unsigned long int pr_sigpend;
    unsigned long int pr_sighold;
    int pr_pid;
    int pr_ppid;
    int pr_pgrp;
    int pr_sid;
    struct timeval pr_utime;
    struct timeval pr_stime;
    struct timeval pr_cutime;
    struct timeval pr_cstime;
    unsigned long int pr_reg[(sizeof(struct user_regs_struct)/sizeof(unsigned long int))];
    int pr_fpvalid;
};
struct elf_prpsinfo
{
    char pr_state;
    char pr_sname;
    char pr_zomb;
    char pr_nice;
    unsigned long int pr_flag;
    unsigned int pr_uid;
    unsigned int pr_gid;
    int pr_pid;
    int pr_ppid;
    int pr_pgrp;
    int pr_sid;
    char pr_fname[16];
    char pr_psargs[(80)];
};
typedef void* psaddr_t;
typedef unsigned long int __prgregset_t[(sizeof(struct user_regs_struct)/sizeof(unsigned long int))];
typedef struct user_fpsimd_struct __prfpregset_t;
typedef unsigned long int prgregset_t[(sizeof(struct user_regs_struct)/sizeof(unsigned long int))];
typedef struct user_fpsimd_struct prfpregset_t;
typedef int lwpid_t;
typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;
typedef unsigned long int greg_t;
typedef unsigned long int gregset_t[(sizeof(struct user_regs_struct)/sizeof(unsigned long int))];
typedef struct user_fpsimd_struct fpregset_t;
struct anonymous_typeX55
{
    unsigned long long int fault_address;
    unsigned long long int regs[31];
    unsigned long long int sp;
    unsigned long long int pc;
    unsigned long long int pstate;
    unsigned char __reserved[4096];
};
typedef struct anonymous_typeX55 mcontext_t;
struct ucontext_t
{
    unsigned long int uc_flags;
    struct ucontext_t* uc_link;
    struct anonymous_typeX54 uc_stack;
    struct anonymous_typeX8 uc_sigmask;
    struct anonymous_typeX55 uc_mcontext;
};
typedef struct ucontext_t ucontext_t;
typedef long int intptr_t;
typedef unsigned int socklen_t;
extern char** __environ;
extern char** environ;
enum { _PC_LINK_MAX
,_PC_MAX_CANON
,_PC_MAX_INPUT
,_PC_NAME_MAX
,_PC_PATH_MAX
,_PC_PIPE_BUF
,_PC_CHOWN_RESTRICTED
,_PC_NO_TRUNC
,_PC_VDISABLE
,_PC_SYNC_IO
,_PC_ASYNC_IO
,_PC_PRIO_IO
,_PC_SOCK_MAXBUF
,_PC_FILESIZEBITS
,_PC_REC_INCR_XFER_SIZE
,_PC_REC_MAX_XFER_SIZE
,_PC_REC_MIN_XFER_SIZE
,_PC_REC_XFER_ALIGN
,_PC_ALLOC_SIZE_MIN
,_PC_SYMLINK_MAX
,_PC_2_SYMLINKS
};
enum { _SC_ARG_MAX
,_SC_CHILD_MAX
,_SC_CLK_TCK
,_SC_NGROUPS_MAX
,_SC_OPEN_MAX
,_SC_STREAM_MAX
,_SC_TZNAME_MAX
,_SC_JOB_CONTROL
,_SC_SAVED_IDS
,_SC_REALTIME_SIGNALS
,_SC_PRIORITY_SCHEDULING
,_SC_TIMERS
,_SC_ASYNCHRONOUS_IO
,_SC_PRIORITIZED_IO
,_SC_SYNCHRONIZED_IO
,_SC_FSYNC
,_SC_MAPPED_FILES
,_SC_MEMLOCK
,_SC_MEMLOCK_RANGE
,_SC_MEMORY_PROTECTION
,_SC_MESSAGE_PASSING
,_SC_SEMAPHORES
,_SC_SHARED_MEMORY_OBJECTS
,_SC_AIO_LISTIO_MAX
,_SC_AIO_MAX
,_SC_AIO_PRIO_DELTA_MAX
,_SC_DELAYTIMER_MAX
,_SC_MQ_OPEN_MAX
,_SC_MQ_PRIO_MAX
,_SC_VERSION
,_SC_PAGESIZE
,_SC_RTSIG_MAX
,_SC_SEM_NSEMS_MAX
,_SC_SEM_VALUE_MAX
,_SC_SIGQUEUE_MAX
,_SC_TIMER_MAX
,_SC_BC_BASE_MAX
,_SC_BC_DIM_MAX
,_SC_BC_SCALE_MAX
,_SC_BC_STRING_MAX
,_SC_COLL_WEIGHTS_MAX
,_SC_EQUIV_CLASS_MAX
,_SC_EXPR_NEST_MAX
,_SC_LINE_MAX
,_SC_RE_DUP_MAX
,_SC_CHARCLASS_NAME_MAX
,_SC_2_VERSION
,_SC_2_C_BIND
,_SC_2_C_DEV
,_SC_2_FORT_DEV
,_SC_2_FORT_RUN
,_SC_2_SW_DEV
,_SC_2_LOCALEDEF
,_SC_PII
,_SC_PII_XTI
,_SC_PII_SOCKET
,_SC_PII_INTERNET
,_SC_PII_OSI
,_SC_POLL
,_SC_SELECT
,_SC_UIO_MAXIOV
,_SC_IOV_MAX=60,
_SC_PII_INTERNET_STREAM
,_SC_PII_INTERNET_DGRAM
,_SC_PII_OSI_COTS
,_SC_PII_OSI_CLTS
,_SC_PII_OSI_M
,_SC_T_IOV_MAX
,_SC_THREADS
,_SC_THREAD_SAFE_FUNCTIONS
,_SC_GETGR_R_SIZE_MAX
,_SC_GETPW_R_SIZE_MAX
,_SC_LOGIN_NAME_MAX
,_SC_TTY_NAME_MAX
,_SC_THREAD_DESTRUCTOR_ITERATIONS
,_SC_THREAD_KEYS_MAX
,_SC_THREAD_STACK_MIN
,_SC_THREAD_THREADS_MAX
,_SC_THREAD_ATTR_STACKADDR
,_SC_THREAD_ATTR_STACKSIZE
,_SC_THREAD_PRIORITY_SCHEDULING
,_SC_THREAD_PRIO_INHERIT
,_SC_THREAD_PRIO_PROTECT
,_SC_THREAD_PROCESS_SHARED
,_SC_NPROCESSORS_CONF
,_SC_NPROCESSORS_ONLN
,_SC_PHYS_PAGES
,_SC_AVPHYS_PAGES
,_SC_ATEXIT_MAX
,_SC_PASS_MAX
,_SC_XOPEN_VERSION
,_SC_XOPEN_XCU_VERSION
,_SC_XOPEN_UNIX
,_SC_XOPEN_CRYPT
,_SC_XOPEN_ENH_I18N
,_SC_XOPEN_SHM
,_SC_2_CHAR_TERM
,_SC_2_C_VERSION
,_SC_2_UPE
,_SC_XOPEN_XPG2
,_SC_XOPEN_XPG3
,_SC_XOPEN_XPG4
,_SC_CHAR_BIT
,_SC_CHAR_MAX
,_SC_CHAR_MIN
,_SC_INT_MAX
,_SC_INT_MIN
,_SC_LONG_BIT
,_SC_WORD_BIT
,_SC_MB_LEN_MAX
,_SC_NZERO
,_SC_SSIZE_MAX
,_SC_SCHAR_MAX
,_SC_SCHAR_MIN
,_SC_SHRT_MAX
,_SC_SHRT_MIN
,_SC_UCHAR_MAX
,_SC_UINT_MAX
,_SC_ULONG_MAX
,_SC_USHRT_MAX
,_SC_NL_ARGMAX
,_SC_NL_LANGMAX
,_SC_NL_MSGMAX
,_SC_NL_NMAX
,_SC_NL_SETMAX
,_SC_NL_TEXTMAX
,_SC_XBS5_ILP32_OFF32
,_SC_XBS5_ILP32_OFFBIG
,_SC_XBS5_LP64_OFF64
,_SC_XBS5_LPBIG_OFFBIG
,_SC_XOPEN_LEGACY
,_SC_XOPEN_REALTIME
,_SC_XOPEN_REALTIME_THREADS
,_SC_ADVISORY_INFO
,_SC_BARRIERS
,_SC_BASE
,_SC_C_LANG_SUPPORT
,_SC_C_LANG_SUPPORT_R
,_SC_CLOCK_SELECTION
,_SC_CPUTIME
,_SC_THREAD_CPUTIME
,_SC_DEVICE_IO
,_SC_DEVICE_SPECIFIC
,_SC_DEVICE_SPECIFIC_R
,_SC_FD_MGMT
,_SC_FIFO
,_SC_PIPE
,_SC_FILE_ATTRIBUTES
,_SC_FILE_LOCKING
,_SC_FILE_SYSTEM
,_SC_MONOTONIC_CLOCK
,_SC_MULTI_PROCESS
,_SC_SINGLE_PROCESS
,_SC_NETWORKING
,_SC_READER_WRITER_LOCKS
,_SC_SPIN_LOCKS
,_SC_REGEXP
,_SC_REGEX_VERSION
,_SC_SHELL
,_SC_SIGNALS
,_SC_SPAWN
,_SC_SPORADIC_SERVER
,_SC_THREAD_SPORADIC_SERVER
,_SC_SYSTEM_DATABASE
,_SC_SYSTEM_DATABASE_R
,_SC_TIMEOUTS
,_SC_TYPED_MEMORY_OBJECTS
,_SC_USER_GROUPS
,_SC_USER_GROUPS_R
,_SC_2_PBS
,_SC_2_PBS_ACCOUNTING
,_SC_2_PBS_LOCATE
,_SC_2_PBS_MESSAGE
,_SC_2_PBS_TRACK
,_SC_SYMLOOP_MAX
,_SC_STREAMS
,_SC_2_PBS_CHECKPOINT
,_SC_V6_ILP32_OFF32
,_SC_V6_ILP32_OFFBIG
,_SC_V6_LP64_OFF64
,_SC_V6_LPBIG_OFFBIG
,_SC_HOST_NAME_MAX
,_SC_TRACE
,_SC_TRACE_EVENT_FILTER
,_SC_TRACE_INHERIT
,_SC_TRACE_LOG
,_SC_LEVEL1_ICACHE_SIZE
,_SC_LEVEL1_ICACHE_ASSOC
,_SC_LEVEL1_ICACHE_LINESIZE
,_SC_LEVEL1_DCACHE_SIZE
,_SC_LEVEL1_DCACHE_ASSOC
,_SC_LEVEL1_DCACHE_LINESIZE
,_SC_LEVEL2_CACHE_SIZE
,_SC_LEVEL2_CACHE_ASSOC
,_SC_LEVEL2_CACHE_LINESIZE
,_SC_LEVEL3_CACHE_SIZE
,_SC_LEVEL3_CACHE_ASSOC
,_SC_LEVEL3_CACHE_LINESIZE
,_SC_LEVEL4_CACHE_SIZE
,_SC_LEVEL4_CACHE_ASSOC
,_SC_LEVEL4_CACHE_LINESIZE
,_SC_IPV6=185+50,
_SC_RAW_SOCKETS
,_SC_V7_ILP32_OFF32
,_SC_V7_ILP32_OFFBIG
,_SC_V7_LP64_OFF64
,_SC_V7_LPBIG_OFFBIG
,_SC_SS_REPL_MAX
,_SC_TRACE_EVENT_NAME_MAX
,_SC_TRACE_NAME_MAX
,_SC_TRACE_SYS_MAX
,_SC_TRACE_USER_EVENT_MAX
,_SC_XOPEN_STREAMS
,_SC_THREAD_ROBUST_PRIO_INHERIT
,_SC_THREAD_ROBUST_PRIO_PROTECT
,_SC_MINSIGSTKSZ
,_SC_SIGSTKSZ
};
enum { _CS_PATH
,_CS_V6_WIDTH_RESTRICTED_ENVS
,_CS_GNU_LIBC_VERSION
,_CS_GNU_LIBPTHREAD_VERSION
,_CS_V5_WIDTH_RESTRICTED_ENVS
,_CS_V7_WIDTH_RESTRICTED_ENVS
,_CS_LFS_CFLAGS=1000,
_CS_LFS_LDFLAGS
,_CS_LFS_LIBS
,_CS_LFS_LINTFLAGS
,_CS_LFS64_CFLAGS
,_CS_LFS64_LDFLAGS
,_CS_LFS64_LIBS
,_CS_LFS64_LINTFLAGS
,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,
_CS_XBS5_ILP32_OFF32_LDFLAGS
,_CS_XBS5_ILP32_OFF32_LIBS
,_CS_XBS5_ILP32_OFF32_LINTFLAGS
,_CS_XBS5_ILP32_OFFBIG_CFLAGS
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS
,_CS_XBS5_ILP32_OFFBIG_LIBS
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS
,_CS_XBS5_LP64_OFF64_CFLAGS
,_CS_XBS5_LP64_OFF64_LDFLAGS
,_CS_XBS5_LP64_OFF64_LIBS
,_CS_XBS5_LP64_OFF64_LINTFLAGS
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LIBS
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LIBS
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_LP64_OFF64_CFLAGS
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS
,_CS_POSIX_V6_LP64_OFF64_LIBS
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LIBS
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_LP64_OFF64_CFLAGS
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS
,_CS_POSIX_V7_LP64_OFF64_LIBS
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
,_CS_V6_ENV
,_CS_V7_ENV
};
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
enum { SS_ONSTACK=1,
SS_DISABLE
};
struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};
typedef int (*Function)();
typedef void (*VFunction)();
typedef char* (*CPFunction)();
typedef char** (*CPPFunction)();
typedef int (*rl_command_func_t)(int,int);
typedef char* (*rl_compentry_func_t)(const char*,int);
typedef char** (*rl_completion_func_t)(const char*,int,int);
typedef char* (*rl_quote_func_t)(char*,int,char*);
typedef char* (*rl_dequote_func_t)(char*,int);
typedef int (*rl_compignore_func_t)(char**);
typedef void (*rl_compdisp_func_t)(char**,int,int);
typedef int (*rl_hook_func_t)();
typedef int (*rl_getc_func_t)(struct _IO_FILE*);
typedef int (*rl_linebuf_func_t)(char*,int);
typedef int (*rl_intfunc_t)(int);
typedef int (*rl_icpfunc_t)(char*);
typedef int (*rl_icppfunc_t)(char**);
typedef void (*rl_voidfunc_t)();
typedef void (*rl_vintfunc_t)(int);
typedef void (*rl_vcpfunc_t)(char*);
typedef void (*rl_vcppfunc_t)(char**);
typedef char* (*rl_cpvfunc_t)();
typedef char* (*rl_cpifunc_t)(int);
typedef char* (*rl_cpcpfunc_t)(char*);
typedef char* (*rl_cpcppfunc_t)(char**);
enum { _ISupper=((0)<8?((1<<(0))<<8):((1<<(0))>>8)),
_ISlower=((1)<8?((1<<(1))<<8):((1<<(1))>>8)),
_ISalpha=((2)<8?((1<<(2))<<8):((1<<(2))>>8)),
_ISdigit=((3)<8?((1<<(3))<<8):((1<<(3))>>8)),
_ISxdigit=((4)<8?((1<<(4))<<8):((1<<(4))>>8)),
_ISspace=((5)<8?((1<<(5))<<8):((1<<(5))>>8)),
_ISprint=((6)<8?((1<<(6))<<8):((1<<(6))>>8)),
_ISgraph=((7)<8?((1<<(7))<<8):((1<<(7))>>8)),
_ISblank=((8)<8?((1<<(8))<<8):((1<<(8))>>8)),
_IScntrl=((9)<8?((1<<(9))<<8):((1<<(9))>>8)),
_ISpunct=((10)<8?((1<<(10))<<8):((1<<(10))>>8)),
_ISalnum=((11)<8?((1<<(11))<<8):((1<<(11))>>8))
};
struct _keymap_entry
{
    char type;
    int (*function)(int,int);
};
typedef struct _keymap_entry KEYMAP_ENTRY;
typedef struct _keymap_entry KEYMAP_ENTRY_ARRAY[257];
typedef struct _keymap_entry* Keymap;
extern struct _keymap_entry emacs_standard_keymap[257];
extern struct _keymap_entry emacs_meta_keymap[257];
extern struct _keymap_entry emacs_ctlx_keymap[257];
extern struct _keymap_entry vi_insertion_keymap[257];
extern struct _keymap_entry vi_movement_keymap[257];
typedef char* (*tilde_hook_func_t)(char*);
extern char* (*tilde_expansion_preexpansion_hook)(char*);
extern char* (*tilde_expansion_failure_hook)(char*);
extern char** tilde_additional_prefixes;
extern char** tilde_additional_suffixes;
enum undo_code { UNDO_DELETE
,UNDO_INSERT
,UNDO_BEGIN
,UNDO_END
};
struct undo_list
{
    struct undo_list* next;
    int start;
    int end;
    char* text;
    enum undo_code what;
};
typedef struct undo_list UNDO_LIST;
extern struct undo_list* rl_undo_list;
struct _funmap
{
    const char* name;
    int (*function)(int,int);
};
typedef struct _funmap FUNMAP;
extern struct _funmap** funmap;
extern const char* rl_library_version;
extern int rl_readline_version;
extern int rl_gnu_readline_p;
extern unsigned long int rl_readline_state;
extern int rl_editing_mode;
extern int rl_insert_mode;
extern const char* rl_readline_name;
extern char* rl_prompt;
extern char* rl_display_prompt;
extern char* rl_line_buffer;
extern int rl_point;
extern int rl_end;
extern int rl_mark;
extern int rl_done;
extern int rl_pending_input;
extern int rl_dispatching;
extern int rl_explicit_arg;
extern int rl_numeric_arg;
extern int (*rl_last_func)(int,int);
extern const char* rl_terminal_name;
extern struct _IO_FILE* rl_instream;
extern struct _IO_FILE* rl_outstream;
extern int rl_prefer_env_winsize;
extern int (*rl_startup_hook)();
extern int (*rl_pre_input_hook)();
extern int (*rl_event_hook)();
extern int (*rl_signal_event_hook)();
extern int (*rl_input_available_hook)();
extern int (*rl_getc_function)(struct _IO_FILE*);
extern void (*rl_redisplay_function)();
extern void (*rl_prep_term_function)(int);
extern void (*rl_deprep_term_function)();
extern struct _keymap_entry* rl_executing_keymap;
extern struct _keymap_entry* rl_binding_keymap;
extern int rl_executing_key;
extern char* rl_executing_keyseq;
extern int rl_key_sequence_length;
extern int rl_erase_empty_line;
extern int rl_already_prompted;
extern int rl_num_chars_to_read;
extern char* rl_executing_macro;
extern int rl_catch_signals;
extern int rl_catch_sigwinch;
extern int rl_change_environment;
extern char* (*rl_completion_entry_function)(const char*,int);
extern char* (*rl_menu_completion_entry_function)(const char*,int);
extern int (*rl_ignore_some_completions_function)(char**);
extern char** (*rl_attempted_completion_function)(const char*,int,int);
extern const char* rl_basic_word_break_characters;
extern char* rl_completer_word_break_characters;
extern char* (*rl_completion_word_break_hook)();
extern const char* rl_completer_quote_characters;
extern const char* rl_basic_quote_characters;
extern const char* rl_filename_quote_characters;
extern const char* rl_special_prefixes;
extern int (*rl_directory_completion_hook)(char**);
extern int (*rl_directory_rewrite_hook)(char**);
extern int (*rl_filename_stat_hook)(char**);
extern char* (*rl_filename_rewrite_hook)(char*,int);
extern void (*rl_completion_display_matches_hook)(char**,int,int);
extern int rl_filename_completion_desired;
extern int rl_filename_quoting_desired;
extern char* (*rl_filename_quoting_function)(char*,int,char*);
extern char* (*rl_filename_dequoting_function)(char*,int);
extern int (*rl_char_is_quoted_p)(char*,int);
extern int rl_attempted_completion_over;
extern int rl_completion_type;
extern int rl_completion_invoking_key;
extern int rl_completion_query_items;
extern int rl_completion_append_character;
extern int rl_completion_suppress_append;
extern int rl_completion_quote_character;
extern int rl_completion_found_quote;
extern int rl_completion_suppress_quote;
extern int rl_sort_completion_matches;
extern int rl_completion_mark_symlink_dirs;
extern int rl_ignore_completion_duplicates;
extern int rl_inhibit_completion;
extern int rl_persistent_signal_handlers;
struct readline_state
{
    int point;
    int end;
    int mark;
    int buflen;
    char* buffer;
    struct undo_list* ul;
    char* prompt;
    int rlstate;
    int done;
    struct _keymap_entry* kmap;
    int (*lastfunc)(int,int);
    int insmode;
    int edmode;
    char* kseq;
    int kseqlen;
    int pendingin;
    struct _IO_FILE* inf;
    struct _IO_FILE* outf;
    char* macro;
    int catchsigs;
    int catchsigwinch;
    char* (*entryfunc)(const char*,int);
    char* (*menuentryfunc)(const char*,int);
    int (*ignorefunc)(char**);
    char** (*attemptfunc)(const char*,int,int);
    char* wordbreakchars;
    char reserved[64];
};
struct timex
{
    unsigned int modes;
    long int offset;
    long int freq;
    long int maxerror;
    long int esterror;
    int status;
    long int constant;
    long int precision;
    long int tolerance;
    struct timeval time;
    long int tick;
    long int ppsfreq;
    long int jitter;
    int shift;
    long int stabil;
    long int jitcnt;
    long int calcnt;
    long int errcnt;
    long int stbcnt;
    int tai;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
};
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
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
extern char* __tzname[2];
extern int __daylight;
extern long int __timezone;
extern char* tzname[2];
extern int daylight;
extern long int timezone;
extern int getdate_err;
typedef void* histdata_t;
struct _hist_entry
{
    char* line;
    char* timestamp;
    void* data;
};
typedef struct _hist_entry HIST_ENTRY;
struct _hist_state
{
    struct _hist_entry** entries;
    int offset;
    int length;
    int size;
    int flags;
};
typedef struct _hist_state HISTORY_STATE;
extern int history_base;
extern int history_length;
extern int history_max_entries;
extern int history_offset;
extern int history_lines_read_from_file;
extern int history_lines_written_to_file;
extern char history_expansion_char;
extern char history_subst_char;
extern char* history_word_delimiters;
extern char history_comment_char;
extern char* history_no_expand_chars;
extern char* history_search_delimiter_chars;
extern int history_quotes_inhibit_expansion;
extern int history_quoting_state;
extern int history_write_timestamps;
extern int history_multiline_entries;
extern int history_file_version;
extern int max_input_history;
extern int (*history_inhibit_expansion_function)(char*,int);
enum anonymous_typeY56 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY56 idtype_t;
struct rusage;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
struct stat64
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short int stx_mode;
    unsigned short int __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned long long __spare2;
    unsigned long long __spare3[12];
};
struct flock
{
    short int l_type;
    short int l_whence;
    long int l_start;
    long int l_len;
    int l_pid;
};
struct flock64
{
    short int l_type;
    short int l_whence;
    long int l_start;
    long int l_len;
    int l_pid;
};
struct iovec
{
    void* iov_base;
    long int iov_len;
};
enum __pid_type { F_OWNER_TID=0,
F_OWNER_PID
,F_OWNER_PGRP
,F_OWNER_GID=2
};
struct f_owner_ex
{
    enum __pid_type type;
    int pid;
};
struct file_handle
{
    unsigned int handle_bytes;
    int handle_type;
    unsigned char f_handle[0];
};
struct dirent
{
    unsigned long int d_ino;
    long int d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
struct dirent64
{
    unsigned long int d_ino;
    long int d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
enum { DT_UNKNOWN=0,
DT_FIFO=1,
DT_CHR=2,
DT_DIR=4,
DT_BLK=6,
DT_REG=8,
DT_LNK=10,
DT_SOCK=12,
DT_WHT=14
};
typedef struct __dirstream DIR;
struct stat;
struct anonymous_typeX57
{
    long int gl_pathc;
    char** gl_pathv;
    long int gl_offs;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char*,struct stat*);
    int (*gl_stat)(const char*,struct stat*);
};
typedef struct anonymous_typeX57 glob_t;
struct stat64;
struct anonymous_typeX58
{
    long int gl_pathc;
    char** gl_pathv;
    long int gl_offs;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent64* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char*,struct stat64*);
    int (*gl_stat)(const char*,struct stat64*);
};
typedef struct anonymous_typeX58 glob64_t;
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
struct list_item$1list$1charphph
{
    struct list$1charph* item;
    struct list_item$1list$1charphph* prev;
    struct list_item$1list$1charphph* next;
};
struct list$1list$1charphph
{
    struct list_item$1list$1charphph* head;
    struct list_item$1list$1charphph* tail;
    int len;
    struct list_item$1list$1charphph* it;
};
struct list_item$1bool
{
    _Bool item;
    struct list_item$1bool* prev;
    struct list_item$1bool* next;
};
struct list$1bool
{
    struct list_item$1bool* head;
    struct list_item$1bool* tail;
    int len;
    struct list_item$1bool* it;
};
struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
};
struct list_item$1tuple2$2charphboolp
{
    struct tuple2$2charphbool* item;
    struct list_item$1tuple2$2charphboolp* prev;
    struct list_item$1tuple2$2charphboolp* next;
};
struct list$1tuple2$2charphboolp
{
    struct list_item$1tuple2$2charphboolp* head;
    struct list_item$1tuple2$2charphboolp* tail;
    int len;
    struct list_item$1tuple2$2charphboolp* it;
};
struct sInfo
{
    char* p;
    struct list$1charph* args;
    struct list$1list$1charphph* args_list;
    struct list$1bool* args_mix_stdout;
    struct list$1tuple2$2charphboolp* args_redirect_stdout;
    struct list$1tuple2$2charphboolp* args_redirect_stderr;
    int rcode;
    _Bool mix_stdout;
    struct tuple2$2charphbool* redirect_stdout;
    struct tuple2$2charphbool* redirect_stderr;
};
struct optional$2tuple2$2charphboolpbool
{
    struct tuple2$2charphbool* v1;
    _Bool v2;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* status_91;
    int* options_92;
    int* pid2_93;
    int* pid_90;
    char** source;
    struct sInfo* info_74;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack3__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack4__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack5__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack6__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack7__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack8__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
struct __current_stack9__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sigaction* sa_94;
};
int gMatchIndex;
struct list$1charph* gMatches;
_Bool gCommand;
char* gInputingText;
char* gCmdlineInitString="";
int gCmdlineInitCursorPoint=0;
struct __current_stack10__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** command_str_117;
    int* argc;
    char*** argv;
    _Bool* command_111;
    char** file_name_112;
    _Bool* run_once_113;
    char** cwd_115;
    struct _IO_FILE** f_116;
};
struct __current_stack11__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** line_118;
    int* argc;
    char*** argv;
    _Bool* command_111;
    char** file_name_112;
    _Bool* run_once_113;
    char** cwd_115;
    struct _IO_FILE** f_116;
};
struct __current_stack12__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** command_str_119;
    int* argc;
    char*** argv;
    _Bool* command_111;
    char** file_name_112;
    _Bool* run_once_113;
    char** cwd_115;
    struct _IO_FILE** f_116;
};

// header function
void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

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

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

void come_regex_finalize(struct come_regex* reg);

struct come_regex* come_regex_clone(struct come_regex* reg);

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);

unsigned int come_regex_get_hash_key(struct come_regex* reg);

char* come_regex_to_string(struct come_regex* regex);

char* string_lower_case(char* str);

char* string_upper_case(char* str);

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);

int charp_index_count(char* str, char* search_str, int count, int default_value);

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);

int charp_rindex(char* str, char* search_str, int default_value);

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);

int charp_rindex_count(char* str, char* search_str, int count, int default_value);

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);

char* charp_strip(char* self);

char* charp_printable(char* str);

char* wchar_t_to_string(unsigned int wc);

char* wchar_tp_to_string(unsigned int* wstr);

int wchar_tp_length(unsigned int* str);

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);

unsigned int* wchar_tp_reverse(unsigned int* str);

unsigned int* wchar_tp_multiply(unsigned int* str, int n);

unsigned int* wchar_tp_printable(unsigned int* str);

int wchar_tp_compare(unsigned int* left, unsigned int* right);

int wstring_compare(unsigned int* left, unsigned int* right);

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);

unsigned int* wstring_operator_mult(unsigned int* str, int n);

unsigned int wchar_t_get_hash_key(unsigned int value);

unsigned int wchar_tp_get_hash_key(unsigned int* value);

_Bool wchar_t_equals(unsigned int left, unsigned int right);

_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);

_Bool wstring_equals(unsigned int* left, unsigned int* right);

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);

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

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);

unsigned int* charp_to_wstring(char* str);

unsigned int* __builtin_wstring(char* str);

char* string_chomp(char* str);

void (*__sysv_signal(int __sig, void (*__handler)(int)))(int);

void (*sysv_signal(int __sig, void (*__handler)(int)))(int);

void (*signal(int __sig, void (*__handler)(int)))(int);

int kill(int __pid, int __sig);

int killpg(int __pgrp, int __sig);

int raise(int __sig);

void (*ssignal(int __sig, void (*__handler)(int)))(int);

int gsignal(int __sig);

void psignal(int __sig, const char* __s);

void psiginfo(const struct anonymous_typeX21* __pinfo, const char* __s);

int __sigpause(int __sig_or_mask, int __is_sig);

int sigblock(int __mask);

int sigsetmask(int __mask);

int siggetmask();

int sigemptyset(struct anonymous_typeX8* __set);

int sigfillset(struct anonymous_typeX8* __set);

int sigaddset(struct anonymous_typeX8* __set, int __signo);

int sigdelset(struct anonymous_typeX8* __set, int __signo);

int sigismember(const struct anonymous_typeX8* __set, int __signo);

int sigisemptyset(const struct anonymous_typeX8* __set);

int sigandset(struct anonymous_typeX8* __set, const struct anonymous_typeX8* __left, const struct anonymous_typeX8* __right);

int sigorset(struct anonymous_typeX8* __set, const struct anonymous_typeX8* __left, const struct anonymous_typeX8* __right);

int sigprocmask(int __how, const struct anonymous_typeX8* __set, struct anonymous_typeX8* __oset);

int sigsuspend(const struct anonymous_typeX8* __set);

int sigaction(int __sig, const struct sigaction* __act, struct sigaction* __oact);

int sigpending(struct anonymous_typeX8* __set);

int sigwait(const struct anonymous_typeX8* __set, int* __sig);

int sigwaitinfo(const struct anonymous_typeX8* __set, struct anonymous_typeX21* __info);

int sigtimedwait(const struct anonymous_typeX8* __set, struct anonymous_typeX21* __info, const struct timespec* __timeout);

int sigqueue(int __pid, int __sig, const union sigval __val);

int sigreturn(struct sigcontext* __scp);

int gettimeofday(struct timeval* __tv, void* __tz);

int settimeofday(const struct timeval* __tv, const struct timezone* __tz);

int adjtime(const struct timeval* __delta, struct timeval* __olddelta);

int getitimer(enum __itimer_which __which, struct itimerval* __value);

int setitimer(enum __itimer_which __which, const struct itimerval* __new, struct itimerval* __old);

int utimes(const char* __file, const struct timeval __tvp[2]);

int lutimes(const char* __file, const struct timeval __tvp[2]);

int futimes(int __fd, const struct timeval __tvp[2]);

int futimesat(int __fd, const char* __file, const struct timeval __tvp[2]);

int siginterrupt(int __sig, int __interrupt);

int access(const char* __name, int __type);

int euidaccess(const char* __name, int __type);

int eaccess(const char* __name, int __type);

int execveat(int __fd, const char* __path, char** __argv, char** __envp, int __flags);

int faccessat(int __fd, const char* __file, int __type, int __flag);

long int lseek(int __fd, long int __offset, int __whence);

long int lseek64(int __fd, long int __offset, int __whence);

int close(int __fd);

void closefrom(int __lowfd);

long int read(int __fd, void* __buf, long int __nbytes);

long int write(int __fd, const void* __buf, long int __n);

long int pread(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite(int __fd, const void* __buf, long int __n, long int __offset);

long int pread64(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite64(int __fd, const void* __buf, long int __n, long int __offset);

int pipe(int __pipedes[2]);

int pipe2(int __pipedes[2], int __flags);

unsigned int alarm(unsigned int __seconds);

unsigned int sleep(unsigned int __seconds);

unsigned int ualarm(unsigned int __value, unsigned int __interval);

int usleep(unsigned int __useconds);

int pause();

int chown(const char* __file, unsigned int __owner, unsigned int __group);

int fchown(int __fd, unsigned int __owner, unsigned int __group);

int lchown(const char* __file, unsigned int __owner, unsigned int __group);

int fchownat(int __fd, const char* __file, unsigned int __owner, unsigned int __group, int __flag);

int chdir(const char* __path);

int fchdir(int __fd);

char* getcwd(char* __buf, long int __size);

char* get_current_dir_name();

char* getwd(char* __buf);

int dup(int __fd);

int dup2(int __fd, int __fd2);

int dup3(int __fd, int __fd2, int __flags);

int execve(const char* __path, char** __argv, char** __envp);

int fexecve(int __fd, char** __argv, char** __envp);

int execv(const char* __path, char** __argv);

int execle(const char* __path, const char* __arg, ...);

int execl(const char* __path, const char* __arg, ...);

int execvp(const char* __file, char** __argv);

int execlp(const char* __file, const char* __arg, ...);

int execvpe(const char* __file, char** __argv, char** __envp);

int nice(int __inc);

void _exit(int __status);

long int pathconf(const char* __path, int __name);

long int fpathconf(int __fd, int __name);

long int sysconf(int __name);

long int confstr(int __name, char* __buf, long int __len);

int getpid();

int getppid();

int getpgrp();

int __getpgid(int __pid);

int getpgid(int __pid);

int setpgid(int __pid, int __pgid);

int setpgrp();

int setsid();

int getsid(int __pid);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int __size, unsigned int* __list);

int group_member(unsigned int __gid);

int setuid(unsigned int __uid);

int setreuid(unsigned int __ruid, unsigned int __euid);

int seteuid(unsigned int __uid);

int setgid(unsigned int __gid);

int setregid(unsigned int __rgid, unsigned int __egid);

int setegid(unsigned int __gid);

int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);

int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);

int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);

int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);

int fork();

int vfork();

int _Fork();

char* ttyname(int __fd);

int ttyname_r(int __fd, char* __buf, long int __buflen);

int isatty(int __fd);

int ttyslot();

int link(const char* __from, const char* __to);

int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);

int symlink(const char* __from, const char* __to);

long int readlink(const char* __path, char* __buf, long int __len);

int symlinkat(const char* __from, int __tofd, const char* __to);

long int readlinkat(int __fd, const char* __path, char* __buf, long int __len);

int unlink(const char* __name);

int unlinkat(int __fd, const char* __name, int __flag);

int rmdir(const char* __path);

int tcgetpgrp(int __fd);

int tcsetpgrp(int __fd, int __pgrp_id);

char* getlogin();

int getlogin_r(char* __name, long int __name_len);

int setlogin(const char* __name);

int getopt(int ___argc, char** ___argv, const char* __shortopts);

int gethostname(char* __name, long int __len);

int sethostname(const char* __name, long int __len);

int sethostid(long int __id);

int getdomainname(char* __name, long int __len);

int setdomainname(const char* __name, long int __len);

int vhangup();

int revoke(const char* __file);

int profil(unsigned short int* __sample_buffer, long int __size, long int __offset, unsigned int __scale);

int acct(const char* __name);

char* getusershell();

void endusershell();

void setusershell();

int daemon(int __nochdir, int __noclose);

int chroot(const char* __path);

char* getpass(const char* __prompt);

int fsync(int __fd);

int syncfs(int __fd);

long int gethostid();

void sync();

int getpagesize();

int getdtablesize();

int truncate(const char* __file, long int __length);

int truncate64(const char* __file, long int __length);

int ftruncate(int __fd, long int __length);

int ftruncate64(int __fd, long int __length);

int brk(void* __addr);

void* sbrk(long int __delta);

long int syscall(long int __sysno, ...);

int lockf(int __fd, int __cmd, long int __len);

int lockf64(int __fd, int __cmd, long int __len);

long int copy_file_range(int __infd, long int* __pinoff, int __outfd, long int* __poutoff, long int __length, unsigned int __flags);

int fdatasync(int __fildes);

char* crypt(const char* __key, const char* __salt);

void swab(const void* __from, void* __to, long int __n);

int getentropy(void* __buffer, long int __length);

int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);

int gettid();

int sigaltstack(const struct anonymous_typeX54* __ss, struct anonymous_typeX54* __oss);

int sigstack(struct sigstack* __ss, struct sigstack* __oss);

int sighold(int __sig);

int sigrelse(int __sig);

int sigignore(int __sig);

void (*sigset(int __sig, void (*__disp)(int)))(int);

int pthread_sigmask(int __how, const struct anonymous_typeX8* __newmask, struct anonymous_typeX8* __oldmask);

int pthread_kill(unsigned long int __threadid, int __signo);

int pthread_sigqueue(unsigned long int __threadid, int __signo, const union sigval __value);

int __libc_current_sigrtmin();

int __libc_current_sigrtmax();

int tgkill(int __tgid, int __tid, int __signal);

const unsigned short int** __ctype_b_loc();

const int** __ctype_tolower_loc();

const int** __ctype_toupper_loc();

int isalnum(int anonymous_var_nameX517);

int isalpha(int anonymous_var_nameX518);

int iscntrl(int anonymous_var_nameX519);

int isdigit(int anonymous_var_nameX520);

int islower(int anonymous_var_nameX521);

int isgraph(int anonymous_var_nameX522);

int isprint(int anonymous_var_nameX523);

int ispunct(int anonymous_var_nameX524);

int isspace(int anonymous_var_nameX525);

int isupper(int anonymous_var_nameX526);

int isxdigit(int anonymous_var_nameX527);

int tolower(int __c);

int toupper(int __c);

int isblank(int anonymous_var_nameX528);

int isctype(int __c, int __mask);

int isascii(int __c);

int toascii(int __c);

int _toupper(int anonymous_var_nameX529);

int _tolower(int anonymous_var_nameX530);

int isalnum_l(int anonymous_var_nameX531, struct __locale_struct* anonymous_var_nameX532);

int isalpha_l(int anonymous_var_nameX533, struct __locale_struct* anonymous_var_nameX534);

int iscntrl_l(int anonymous_var_nameX535, struct __locale_struct* anonymous_var_nameX536);

int isdigit_l(int anonymous_var_nameX537, struct __locale_struct* anonymous_var_nameX538);

int islower_l(int anonymous_var_nameX539, struct __locale_struct* anonymous_var_nameX540);

int isgraph_l(int anonymous_var_nameX541, struct __locale_struct* anonymous_var_nameX542);

int isprint_l(int anonymous_var_nameX543, struct __locale_struct* anonymous_var_nameX544);

int ispunct_l(int anonymous_var_nameX545, struct __locale_struct* anonymous_var_nameX546);

int isspace_l(int anonymous_var_nameX547, struct __locale_struct* anonymous_var_nameX548);

int isupper_l(int anonymous_var_nameX549, struct __locale_struct* anonymous_var_nameX550);

int isxdigit_l(int anonymous_var_nameX551, struct __locale_struct* anonymous_var_nameX552);

int isblank_l(int anonymous_var_nameX553, struct __locale_struct* anonymous_var_nameX554);

int __tolower_l(int __c, struct __locale_struct* __l);

int tolower_l(int __c, struct __locale_struct* __l);

int __toupper_l(int __c, struct __locale_struct* __l);

int toupper_l(int __c, struct __locale_struct* __l);

char* tilde_expand(const char* anonymous_var_nameX562);

char* tilde_expand_word(const char* anonymous_var_nameX563);

char* tilde_find_word(const char* anonymous_var_nameX564, int anonymous_var_nameX565, int* anonymous_var_nameX566);

int rl_digit_argument(int anonymous_var_nameX567, int anonymous_var_nameX568);

int rl_universal_argument(int anonymous_var_nameX569, int anonymous_var_nameX570);

int rl_forward_byte(int anonymous_var_nameX571, int anonymous_var_nameX572);

int rl_forward_char(int anonymous_var_nameX573, int anonymous_var_nameX574);

int rl_forward(int anonymous_var_nameX575, int anonymous_var_nameX576);

int rl_backward_byte(int anonymous_var_nameX577, int anonymous_var_nameX578);

int rl_backward_char(int anonymous_var_nameX579, int anonymous_var_nameX580);

int rl_backward(int anonymous_var_nameX581, int anonymous_var_nameX582);

int rl_beg_of_line(int anonymous_var_nameX583, int anonymous_var_nameX584);

int rl_end_of_line(int anonymous_var_nameX585, int anonymous_var_nameX586);

int rl_forward_word(int anonymous_var_nameX587, int anonymous_var_nameX588);

int rl_backward_word(int anonymous_var_nameX589, int anonymous_var_nameX590);

int rl_refresh_line(int anonymous_var_nameX591, int anonymous_var_nameX592);

int rl_clear_screen(int anonymous_var_nameX593, int anonymous_var_nameX594);

int rl_clear_display(int anonymous_var_nameX595, int anonymous_var_nameX596);

int rl_skip_csi_sequence(int anonymous_var_nameX597, int anonymous_var_nameX598);

int rl_arrow_keys(int anonymous_var_nameX599, int anonymous_var_nameX600);

int rl_previous_screen_line(int anonymous_var_nameX601, int anonymous_var_nameX602);

int rl_next_screen_line(int anonymous_var_nameX603, int anonymous_var_nameX604);

int rl_insert(int anonymous_var_nameX605, int anonymous_var_nameX606);

int rl_quoted_insert(int anonymous_var_nameX607, int anonymous_var_nameX608);

int rl_tab_insert(int anonymous_var_nameX609, int anonymous_var_nameX610);

int rl_newline(int anonymous_var_nameX611, int anonymous_var_nameX612);

int rl_do_lowercase_version(int anonymous_var_nameX613, int anonymous_var_nameX614);

int rl_rubout(int anonymous_var_nameX615, int anonymous_var_nameX616);

int rl_delete(int anonymous_var_nameX617, int anonymous_var_nameX618);

int rl_rubout_or_delete(int anonymous_var_nameX619, int anonymous_var_nameX620);

int rl_delete_horizontal_space(int anonymous_var_nameX621, int anonymous_var_nameX622);

int rl_delete_or_show_completions(int anonymous_var_nameX623, int anonymous_var_nameX624);

int rl_insert_comment(int anonymous_var_nameX625, int anonymous_var_nameX626);

int rl_upcase_word(int anonymous_var_nameX627, int anonymous_var_nameX628);

int rl_downcase_word(int anonymous_var_nameX629, int anonymous_var_nameX630);

int rl_capitalize_word(int anonymous_var_nameX631, int anonymous_var_nameX632);

int rl_transpose_words(int anonymous_var_nameX633, int anonymous_var_nameX634);

int rl_transpose_chars(int anonymous_var_nameX635, int anonymous_var_nameX636);

int rl_char_search(int anonymous_var_nameX637, int anonymous_var_nameX638);

int rl_backward_char_search(int anonymous_var_nameX639, int anonymous_var_nameX640);

int rl_beginning_of_history(int anonymous_var_nameX641, int anonymous_var_nameX642);

int rl_end_of_history(int anonymous_var_nameX643, int anonymous_var_nameX644);

int rl_get_next_history(int anonymous_var_nameX645, int anonymous_var_nameX646);

int rl_get_previous_history(int anonymous_var_nameX647, int anonymous_var_nameX648);

int rl_operate_and_get_next(int anonymous_var_nameX649, int anonymous_var_nameX650);

int rl_set_mark(int anonymous_var_nameX651, int anonymous_var_nameX652);

int rl_exchange_point_and_mark(int anonymous_var_nameX653, int anonymous_var_nameX654);

int rl_vi_editing_mode(int anonymous_var_nameX655, int anonymous_var_nameX656);

int rl_emacs_editing_mode(int anonymous_var_nameX657, int anonymous_var_nameX658);

int rl_overwrite_mode(int anonymous_var_nameX659, int anonymous_var_nameX660);

int rl_re_read_init_file(int anonymous_var_nameX661, int anonymous_var_nameX662);

int rl_dump_functions(int anonymous_var_nameX663, int anonymous_var_nameX664);

int rl_dump_macros(int anonymous_var_nameX665, int anonymous_var_nameX666);

int rl_dump_variables(int anonymous_var_nameX667, int anonymous_var_nameX668);

int rl_complete(int anonymous_var_nameX669, int anonymous_var_nameX670);

int rl_possible_completions(int anonymous_var_nameX671, int anonymous_var_nameX672);

int rl_insert_completions(int anonymous_var_nameX673, int anonymous_var_nameX674);

int rl_old_menu_complete(int anonymous_var_nameX675, int anonymous_var_nameX676);

int rl_menu_complete(int anonymous_var_nameX677, int anonymous_var_nameX678);

int rl_backward_menu_complete(int anonymous_var_nameX679, int anonymous_var_nameX680);

int rl_kill_word(int anonymous_var_nameX681, int anonymous_var_nameX682);

int rl_backward_kill_word(int anonymous_var_nameX683, int anonymous_var_nameX684);

int rl_kill_line(int anonymous_var_nameX685, int anonymous_var_nameX686);

int rl_backward_kill_line(int anonymous_var_nameX687, int anonymous_var_nameX688);

int rl_kill_full_line(int anonymous_var_nameX689, int anonymous_var_nameX690);

int rl_unix_word_rubout(int anonymous_var_nameX691, int anonymous_var_nameX692);

int rl_unix_filename_rubout(int anonymous_var_nameX693, int anonymous_var_nameX694);

int rl_unix_line_discard(int anonymous_var_nameX695, int anonymous_var_nameX696);

int rl_copy_region_to_kill(int anonymous_var_nameX697, int anonymous_var_nameX698);

int rl_kill_region(int anonymous_var_nameX699, int anonymous_var_nameX700);

int rl_copy_forward_word(int anonymous_var_nameX701, int anonymous_var_nameX702);

int rl_copy_backward_word(int anonymous_var_nameX703, int anonymous_var_nameX704);

int rl_yank(int anonymous_var_nameX705, int anonymous_var_nameX706);

int rl_yank_pop(int anonymous_var_nameX707, int anonymous_var_nameX708);

int rl_yank_nth_arg(int anonymous_var_nameX709, int anonymous_var_nameX710);

int rl_yank_last_arg(int anonymous_var_nameX711, int anonymous_var_nameX712);

int rl_bracketed_paste_begin(int anonymous_var_nameX713, int anonymous_var_nameX714);

int rl_reverse_search_history(int anonymous_var_nameX715, int anonymous_var_nameX716);

int rl_forward_search_history(int anonymous_var_nameX717, int anonymous_var_nameX718);

int rl_start_kbd_macro(int anonymous_var_nameX719, int anonymous_var_nameX720);

int rl_end_kbd_macro(int anonymous_var_nameX721, int anonymous_var_nameX722);

int rl_call_last_kbd_macro(int anonymous_var_nameX723, int anonymous_var_nameX724);

int rl_print_last_kbd_macro(int anonymous_var_nameX725, int anonymous_var_nameX726);

int rl_revert_line(int anonymous_var_nameX727, int anonymous_var_nameX728);

int rl_undo_command(int anonymous_var_nameX729, int anonymous_var_nameX730);

int rl_tilde_expand(int anonymous_var_nameX731, int anonymous_var_nameX732);

int rl_restart_output(int anonymous_var_nameX733, int anonymous_var_nameX734);

int rl_stop_output(int anonymous_var_nameX735, int anonymous_var_nameX736);

int rl_abort(int anonymous_var_nameX737, int anonymous_var_nameX738);

int rl_tty_status(int anonymous_var_nameX739, int anonymous_var_nameX740);

int rl_history_search_forward(int anonymous_var_nameX741, int anonymous_var_nameX742);

int rl_history_search_backward(int anonymous_var_nameX743, int anonymous_var_nameX744);

int rl_history_substr_search_forward(int anonymous_var_nameX745, int anonymous_var_nameX746);

int rl_history_substr_search_backward(int anonymous_var_nameX747, int anonymous_var_nameX748);

int rl_noninc_forward_search(int anonymous_var_nameX749, int anonymous_var_nameX750);

int rl_noninc_reverse_search(int anonymous_var_nameX751, int anonymous_var_nameX752);

int rl_noninc_forward_search_again(int anonymous_var_nameX753, int anonymous_var_nameX754);

int rl_noninc_reverse_search_again(int anonymous_var_nameX755, int anonymous_var_nameX756);

int rl_insert_close(int anonymous_var_nameX757, int anonymous_var_nameX758);

void rl_callback_handler_install(const char* anonymous_var_nameX759, void (*anonymous_var_nameX760)(char*));

void rl_callback_read_char();

void rl_callback_handler_remove();

void rl_callback_sigcleanup();

int rl_vi_redo(int anonymous_var_nameX761, int anonymous_var_nameX762);

int rl_vi_undo(int anonymous_var_nameX763, int anonymous_var_nameX764);

int rl_vi_yank_arg(int anonymous_var_nameX765, int anonymous_var_nameX766);

int rl_vi_fetch_history(int anonymous_var_nameX767, int anonymous_var_nameX768);

int rl_vi_search_again(int anonymous_var_nameX769, int anonymous_var_nameX770);

int rl_vi_search(int anonymous_var_nameX771, int anonymous_var_nameX772);

int rl_vi_complete(int anonymous_var_nameX773, int anonymous_var_nameX774);

int rl_vi_tilde_expand(int anonymous_var_nameX775, int anonymous_var_nameX776);

int rl_vi_prev_word(int anonymous_var_nameX777, int anonymous_var_nameX778);

int rl_vi_next_word(int anonymous_var_nameX779, int anonymous_var_nameX780);

int rl_vi_end_word(int anonymous_var_nameX781, int anonymous_var_nameX782);

int rl_vi_insert_beg(int anonymous_var_nameX783, int anonymous_var_nameX784);

int rl_vi_append_mode(int anonymous_var_nameX785, int anonymous_var_nameX786);

int rl_vi_append_eol(int anonymous_var_nameX787, int anonymous_var_nameX788);

int rl_vi_eof_maybe(int anonymous_var_nameX789, int anonymous_var_nameX790);

int rl_vi_insertion_mode(int anonymous_var_nameX791, int anonymous_var_nameX792);

int rl_vi_insert_mode(int anonymous_var_nameX793, int anonymous_var_nameX794);

int rl_vi_movement_mode(int anonymous_var_nameX795, int anonymous_var_nameX796);

int rl_vi_arg_digit(int anonymous_var_nameX797, int anonymous_var_nameX798);

int rl_vi_change_case(int anonymous_var_nameX799, int anonymous_var_nameX800);

int rl_vi_put(int anonymous_var_nameX801, int anonymous_var_nameX802);

int rl_vi_column(int anonymous_var_nameX803, int anonymous_var_nameX804);

int rl_vi_delete_to(int anonymous_var_nameX805, int anonymous_var_nameX806);

int rl_vi_change_to(int anonymous_var_nameX807, int anonymous_var_nameX808);

int rl_vi_yank_to(int anonymous_var_nameX809, int anonymous_var_nameX810);

int rl_vi_yank_pop(int anonymous_var_nameX811, int anonymous_var_nameX812);

int rl_vi_rubout(int anonymous_var_nameX813, int anonymous_var_nameX814);

int rl_vi_delete(int anonymous_var_nameX815, int anonymous_var_nameX816);

int rl_vi_back_to_indent(int anonymous_var_nameX817, int anonymous_var_nameX818);

int rl_vi_unix_word_rubout(int anonymous_var_nameX819, int anonymous_var_nameX820);

int rl_vi_first_print(int anonymous_var_nameX821, int anonymous_var_nameX822);

int rl_vi_char_search(int anonymous_var_nameX823, int anonymous_var_nameX824);

int rl_vi_match(int anonymous_var_nameX825, int anonymous_var_nameX826);

int rl_vi_change_char(int anonymous_var_nameX827, int anonymous_var_nameX828);

int rl_vi_subst(int anonymous_var_nameX829, int anonymous_var_nameX830);

int rl_vi_overstrike(int anonymous_var_nameX831, int anonymous_var_nameX832);

int rl_vi_overstrike_delete(int anonymous_var_nameX833, int anonymous_var_nameX834);

int rl_vi_replace(int anonymous_var_nameX835, int anonymous_var_nameX836);

int rl_vi_set_mark(int anonymous_var_nameX837, int anonymous_var_nameX838);

int rl_vi_goto_mark(int anonymous_var_nameX839, int anonymous_var_nameX840);

int rl_vi_check();

int rl_vi_domove(int anonymous_var_nameX841, int* anonymous_var_nameX842);

int rl_vi_bracktype(int anonymous_var_nameX843);

void rl_vi_start_inserting(int anonymous_var_nameX844, int anonymous_var_nameX845, int anonymous_var_nameX846);

int rl_vi_fWord(int anonymous_var_nameX847, int anonymous_var_nameX848);

int rl_vi_bWord(int anonymous_var_nameX849, int anonymous_var_nameX850);

int rl_vi_eWord(int anonymous_var_nameX851, int anonymous_var_nameX852);

int rl_vi_fword(int anonymous_var_nameX853, int anonymous_var_nameX854);

int rl_vi_bword(int anonymous_var_nameX855, int anonymous_var_nameX856);

int rl_vi_eword(int anonymous_var_nameX857, int anonymous_var_nameX858);

char* readline(const char* anonymous_var_nameX859);

int rl_set_prompt(const char* anonymous_var_nameX860);

int rl_expand_prompt(char* anonymous_var_nameX861);

int rl_initialize();

int rl_discard_argument();

int rl_add_defun(const char* anonymous_var_nameX862, int (*anonymous_var_nameX863)(int,int), int anonymous_var_nameX864);

int rl_bind_key(int anonymous_var_nameX865, int (*anonymous_var_nameX866)(int,int));

int rl_bind_key_in_map(int anonymous_var_nameX867, int (*anonymous_var_nameX868)(int,int), struct _keymap_entry* anonymous_var_nameX869);

int rl_unbind_key(int anonymous_var_nameX870);

int rl_unbind_key_in_map(int anonymous_var_nameX871, struct _keymap_entry* anonymous_var_nameX872);

int rl_bind_key_if_unbound(int anonymous_var_nameX873, int (*anonymous_var_nameX874)(int,int));

int rl_bind_key_if_unbound_in_map(int anonymous_var_nameX875, int (*anonymous_var_nameX876)(int,int), struct _keymap_entry* anonymous_var_nameX877);

int rl_unbind_function_in_map(int (*anonymous_var_nameX878)(int,int), struct _keymap_entry* anonymous_var_nameX879);

int rl_unbind_command_in_map(const char* anonymous_var_nameX880, struct _keymap_entry* anonymous_var_nameX881);

int rl_bind_keyseq(const char* anonymous_var_nameX882, int (*anonymous_var_nameX883)(int,int));

int rl_bind_keyseq_in_map(const char* anonymous_var_nameX884, int (*anonymous_var_nameX885)(int,int), struct _keymap_entry* anonymous_var_nameX886);

int rl_bind_keyseq_if_unbound(const char* anonymous_var_nameX887, int (*anonymous_var_nameX888)(int,int));

int rl_bind_keyseq_if_unbound_in_map(const char* anonymous_var_nameX889, int (*anonymous_var_nameX890)(int,int), struct _keymap_entry* anonymous_var_nameX891);

int rl_generic_bind(int anonymous_var_nameX892, const char* anonymous_var_nameX893, char* anonymous_var_nameX894, struct _keymap_entry* anonymous_var_nameX895);

char* rl_variable_value(const char* anonymous_var_nameX896);

int rl_variable_bind(const char* anonymous_var_nameX897, const char* anonymous_var_nameX898);

int rl_set_key(const char* anonymous_var_nameX899, int (*anonymous_var_nameX900)(int,int), struct _keymap_entry* anonymous_var_nameX901);

int rl_macro_bind(const char* anonymous_var_nameX902, const char* anonymous_var_nameX903, struct _keymap_entry* anonymous_var_nameX904);

int rl_translate_keyseq(const char* anonymous_var_nameX905, char* anonymous_var_nameX906, int* anonymous_var_nameX907);

char* rl_untranslate_keyseq(int anonymous_var_nameX908);

int (*rl_named_function(const char* anonymous_var_nameX909))(int,int);

int (*rl_function_of_keyseq(const char* anonymous_var_nameX910, struct _keymap_entry* anonymous_var_nameX911, int* anonymous_var_nameX912))(int,int);

int (*rl_function_of_keyseq_len(const char* anonymous_var_nameX913, long int anonymous_var_nameX914, struct _keymap_entry* anonymous_var_nameX915, int* anonymous_var_nameX916))(int,int);

void rl_list_funmap_names();

char** rl_invoking_keyseqs_in_map(int (*anonymous_var_nameX917)(int,int), struct _keymap_entry* anonymous_var_nameX918);

char** rl_invoking_keyseqs(int (*anonymous_var_nameX919)(int,int));

void rl_function_dumper(int anonymous_var_nameX920);

void rl_macro_dumper(int anonymous_var_nameX921);

void rl_variable_dumper(int anonymous_var_nameX922);

int rl_read_init_file(const char* anonymous_var_nameX923);

int rl_parse_and_bind(char* anonymous_var_nameX924);

struct _keymap_entry* rl_make_bare_keymap();

int rl_empty_keymap(struct _keymap_entry* anonymous_var_nameX925);

struct _keymap_entry* rl_copy_keymap(struct _keymap_entry* anonymous_var_nameX926);

struct _keymap_entry* rl_make_keymap();

void rl_discard_keymap(struct _keymap_entry* anonymous_var_nameX927);

void rl_free_keymap(struct _keymap_entry* anonymous_var_nameX928);

struct _keymap_entry* rl_get_keymap_by_name(const char* anonymous_var_nameX929);

char* rl_get_keymap_name(struct _keymap_entry* anonymous_var_nameX930);

void rl_set_keymap(struct _keymap_entry* anonymous_var_nameX931);

struct _keymap_entry* rl_get_keymap();

int rl_set_keymap_name(const char* anonymous_var_nameX932, struct _keymap_entry* anonymous_var_nameX933);

void rl_set_keymap_from_edit_mode();

char* rl_get_keymap_name_from_edit_mode();

int rl_add_funmap_entry(const char* anonymous_var_nameX934, int (*anonymous_var_nameX935)(int,int));

const char** rl_funmap_names();

void rl_initialize_funmap();

void rl_push_macro_input(char* anonymous_var_nameX936);

void rl_add_undo(enum undo_code anonymous_var_nameX937, int anonymous_var_nameX938, int anonymous_var_nameX939, char* anonymous_var_nameX940);

void rl_free_undo_list();

int rl_do_undo();

int rl_begin_undo_group();

int rl_end_undo_group();

int rl_modifying(int anonymous_var_nameX941, int anonymous_var_nameX942);

void rl_redisplay();

int rl_on_new_line();

int rl_on_new_line_with_prompt();

int rl_forced_update_display();

int rl_clear_visible_line();

int rl_clear_message();

int rl_reset_line_state();

int rl_crlf();

void rl_keep_mark_active();

void rl_activate_mark();

void rl_deactivate_mark();

int rl_mark_active_p();

int rl_message();

int rl_show_char(int anonymous_var_nameX943);

int rl_character_len(int anonymous_var_nameX944, int anonymous_var_nameX945);

void rl_redraw_prompt_last_line();

void rl_save_prompt();

void rl_restore_prompt();

void rl_replace_line(const char* anonymous_var_nameX946, int anonymous_var_nameX947);

int rl_insert_text(const char* anonymous_var_nameX948);

int rl_delete_text(int anonymous_var_nameX949, int anonymous_var_nameX950);

int rl_kill_text(int anonymous_var_nameX951, int anonymous_var_nameX952);

char* rl_copy_text(int anonymous_var_nameX953, int anonymous_var_nameX954);

void rl_prep_terminal(int anonymous_var_nameX955);

void rl_deprep_terminal();

void rl_tty_set_default_bindings(struct _keymap_entry* anonymous_var_nameX956);

void rl_tty_unset_default_bindings(struct _keymap_entry* anonymous_var_nameX957);

int rl_tty_set_echoing(int anonymous_var_nameX958);

int rl_reset_terminal(const char* anonymous_var_nameX959);

void rl_resize_terminal();

void rl_set_screen_size(int anonymous_var_nameX960, int anonymous_var_nameX961);

void rl_get_screen_size(int* anonymous_var_nameX962, int* anonymous_var_nameX963);

void rl_reset_screen_size();

char* rl_get_termcap(const char* anonymous_var_nameX964);

int rl_stuff_char(int anonymous_var_nameX965);

int rl_execute_next(int anonymous_var_nameX966);

int rl_clear_pending_input();

int rl_read_key();

int rl_getc(struct _IO_FILE* anonymous_var_nameX967);

int rl_set_keyboard_input_timeout(int anonymous_var_nameX968);

void rl_extend_line_buffer(int anonymous_var_nameX969);

int rl_ding();

int rl_alphabetic(int anonymous_var_nameX970);

void rl_free(void* anonymous_var_nameX971);

int rl_set_signals();

int rl_clear_signals();

void rl_cleanup_after_signal();

void rl_reset_after_signal();

void rl_free_line_state();

int rl_pending_signal();

void rl_check_signals();

void rl_echo_signal_char(int anonymous_var_nameX972);

int rl_set_paren_blink_timeout(int anonymous_var_nameX973);

void rl_clear_history();

int rl_maybe_save_line();

int rl_maybe_unsave_line();

int rl_maybe_replace_line();

int rl_complete_internal(int anonymous_var_nameX974);

void rl_display_match_list(char** anonymous_var_nameX975, int anonymous_var_nameX976, int anonymous_var_nameX977);

char** rl_completion_matches(const char* anonymous_var_nameX978, char* (*anonymous_var_nameX979)(const char*,int));

char* rl_username_completion_function(const char* anonymous_var_nameX980, int anonymous_var_nameX981);

char* rl_filename_completion_function(const char* anonymous_var_nameX982, int anonymous_var_nameX983);

int rl_completion_mode(int (*anonymous_var_nameX984)(int,int));

int rl_save_state(struct readline_state* anonymous_var_nameX985);

int rl_restore_state(struct readline_state* anonymous_var_nameX986);

int clock_adjtime(int __clock_id, struct timex* __utx);

long int clock();

long int time(long int* __timer);

double difftime(long int __time1, long int __time0);

long int mktime(struct tm* __tp);

long int strftime(char* __s, long int __maxsize, const char* __format, const struct tm* __tp);

char* strptime(const char* __s, const char* __fmt, struct tm* __tp);

long int strftime_l(char* __s, long int __maxsize, const char* __format, const struct tm* __tp, struct __locale_struct* __loc);

char* strptime_l(const char* __s, const char* __fmt, struct tm* __tp, struct __locale_struct* __loc);

struct tm* gmtime(const long int* __timer);

struct tm* localtime(const long int* __timer);

struct tm* gmtime_r(const long int* __timer, struct tm* __tp);

struct tm* localtime_r(const long int* __timer, struct tm* __tp);

char* asctime(const struct tm* __tp);

char* ctime(const long int* __timer);

char* asctime_r(const struct tm* __tp, char* __buf);

char* ctime_r(const long int* __timer, char* __buf);

void tzset();

long int timegm(struct tm* __tp);

long int timelocal(struct tm* __tp);

int dysize(int __year);

int nanosleep(const struct timespec* __requested_time, struct timespec* __remaining);

int clock_getres(int __clock_id, struct timespec* __res);

int clock_gettime(int __clock_id, struct timespec* __tp);

int clock_settime(int __clock_id, const struct timespec* __tp);

int clock_nanosleep(int __clock_id, int __flags, const struct timespec* __req, struct timespec* __rem);

int clock_getcpuclockid(int __pid, int* __clock_id);

int timer_create(int __clock_id, struct sigevent* __evp, void** __timerid);

int timer_delete(void* __timerid);

int timer_settime(void* __timerid, int __flags, const struct itimerspec* __value, struct itimerspec* __ovalue);

int timer_gettime(void* __timerid, struct itimerspec* __value);

int timer_getoverrun(void* __timerid);

int timespec_get(struct timespec* __ts, int __base);

int timespec_getres(struct timespec* __ts, int __base);

struct tm* getdate(const char* __string);

int getdate_r(const char* __string, struct tm* __resbufp);

void using_history();

struct _hist_state* history_get_history_state();

void history_set_history_state(struct _hist_state* anonymous_var_nameX987);

void add_history(const char* anonymous_var_nameX988);

void add_history_time(const char* anonymous_var_nameX989);

struct _hist_entry* remove_history(int anonymous_var_nameX990);

struct _hist_entry** remove_history_range(int anonymous_var_nameX991, int anonymous_var_nameX992);

struct _hist_entry* alloc_history_entry(char* anonymous_var_nameX993, char* anonymous_var_nameX994);

struct _hist_entry* copy_history_entry(struct _hist_entry* anonymous_var_nameX995);

void* free_history_entry(struct _hist_entry* anonymous_var_nameX996);

struct _hist_entry* replace_history_entry(int anonymous_var_nameX997, const char* anonymous_var_nameX998, void* anonymous_var_nameX999);

void clear_history();

void stifle_history(int anonymous_var_nameX1000);

int unstifle_history();

int history_is_stifled();

struct _hist_entry** history_list();

int where_history();

struct _hist_entry* current_history();

struct _hist_entry* history_get(int anonymous_var_nameX1001);

long int history_get_time(struct _hist_entry* anonymous_var_nameX1002);

int history_total_bytes();

int history_set_pos(int anonymous_var_nameX1003);

struct _hist_entry* previous_history();

struct _hist_entry* next_history();

int history_search(const char* anonymous_var_nameX1004, int anonymous_var_nameX1005);

int history_search_prefix(const char* anonymous_var_nameX1006, int anonymous_var_nameX1007);

int history_search_pos(const char* anonymous_var_nameX1008, int anonymous_var_nameX1009, int anonymous_var_nameX1010);

int read_history(const char* anonymous_var_nameX1011);

int read_history_range(const char* anonymous_var_nameX1012, int anonymous_var_nameX1013, int anonymous_var_nameX1014);

int write_history(const char* anonymous_var_nameX1015);

int append_history(int anonymous_var_nameX1016, const char* anonymous_var_nameX1017);

int history_truncate_file(const char* anonymous_var_nameX1018, int anonymous_var_nameX1019);

int history_expand(char* anonymous_var_nameX1020, char** anonymous_var_nameX1021);

char* history_arg_extract(int anonymous_var_nameX1022, int anonymous_var_nameX1023, const char* anonymous_var_nameX1024);

char* get_history_event(const char* anonymous_var_nameX1025, int* anonymous_var_nameX1026, int anonymous_var_nameX1027);

char** history_tokenize(const char* anonymous_var_nameX1028);

int wait(int* __stat_loc);

int waitpid(int __pid, int* __stat_loc, int __options);

int waitid(enum anonymous_typeY56 __idtype, unsigned int __id, struct anonymous_typeX21* __infop, int __options);

int wait3(int* __stat_loc, int __options, struct rusage* __usage);

int wait4(int __pid, int* __stat_loc, int __options, struct rusage* __usage);

int stat(const char* __file, struct stat* __buf);

int fstat(int __fd, struct stat* __buf);

int stat64(const char* __file, struct stat64* __buf);

int fstat64(int __fd, struct stat64* __buf);

int fstatat(int __fd, const char* __file, struct stat* __buf, int __flag);

int fstatat64(int __fd, const char* __file, struct stat64* __buf, int __flag);

int lstat(const char* __file, struct stat* __buf);

int lstat64(const char* __file, struct stat64* __buf);

int chmod(const char* __file, unsigned int __mode);

int lchmod(const char* __file, unsigned int __mode);

int fchmod(int __fd, unsigned int __mode);

int fchmodat(int __fd, const char* __file, unsigned int __mode, int __flag);

unsigned int umask(unsigned int __mask);

unsigned int getumask();

int mkdir(const char* __path, unsigned int __mode);

int mkdirat(int __fd, const char* __path, unsigned int __mode);

int mknod(const char* __path, unsigned int __mode, unsigned long int __dev);

int mknodat(int __fd, const char* __path, unsigned int __mode, unsigned long int __dev);

int mkfifo(const char* __path, unsigned int __mode);

int mkfifoat(int __fd, const char* __path, unsigned int __mode);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flags);

int futimens(int __fd, const struct timespec __times[2]);

int statx(int __dirfd, const char* __path, int __flags, unsigned int __mask, struct statx* __buf);

long int readahead(int __fd, long int __offset, long int __count);

int sync_file_range(int __fd, long int __offset, long int __count, unsigned int __flags);

long int vmsplice(int __fdout, const struct iovec* __iov, long int __count, unsigned int __flags);

long int splice(int __fdin, long int* __offin, int __fdout, long int* __offout, long int __len, unsigned int __flags);

long int tee(int __fdin, int __fdout, long int __len, unsigned int __flags);

int fallocate(int __fd, int __mode, long int __offset, long int __len);

int fallocate64(int __fd, int __mode, long int __offset, long int __len);

int name_to_handle_at(int __dfd, const char* __name, struct file_handle* __handle, int* __mnt_id, int __flags);

int open_by_handle_at(int __mountdirfd, struct file_handle* __handle, int __flags);

int fcntl(int __fd, int __cmd, ...);

int fcntl64(int __fd, int __cmd, ...);

int open(const char* __file, int __oflag, ...);

int open64(const char* __file, int __oflag, ...);

int openat(int __fd, const char* __file, int __oflag, ...);

int openat64(int __fd, const char* __file, int __oflag, ...);

int creat(const char* __file, unsigned int __mode);

int creat64(const char* __file, unsigned int __mode);

int posix_fadvise(int __fd, long int __offset, long int __len, int __advise);

int posix_fadvise64(int __fd, long int __offset, long int __len, int __advise);

int posix_fallocate(int __fd, long int __offset, long int __len);

int posix_fallocate64(int __fd, long int __offset, long int __len);

struct __dirstream* opendir(const char* __name);

struct __dirstream* fdopendir(int __fd);

int closedir(struct __dirstream* __dirp);

struct dirent* readdir(struct __dirstream* __dirp);

struct dirent64* readdir64(struct __dirstream* __dirp);

int readdir_r(struct __dirstream* __dirp, struct dirent* __entry, struct dirent** __result);

int readdir64_r(struct __dirstream* __dirp, struct dirent64* __entry, struct dirent64** __result);

void rewinddir(struct __dirstream* __dirp);

void seekdir(struct __dirstream* __dirp, long int __pos);

long int telldir(struct __dirstream* __dirp);

int dirfd(struct __dirstream* __dirp);

long int __sysconf(int __name);

int scandir(const char* __dir, struct dirent*** __namelist, int (*__selector)(const struct dirent*), int (*__cmp)(const struct dirent**,const struct dirent**));

int scandir64(const char* __dir, struct dirent64*** __namelist, int (*__selector)(const struct dirent64*), int (*__cmp)(const struct dirent64**,const struct dirent64**));

int scandirat(int __dfd, const char* __dir, struct dirent*** __namelist, int (*__selector)(const struct dirent*), int (*__cmp)(const struct dirent**,const struct dirent**));

int scandirat64(int __dfd, const char* __dir, struct dirent64*** __namelist, int (*__selector)(const struct dirent64*), int (*__cmp)(const struct dirent64**,const struct dirent64**));

int alphasort(const struct dirent** __e1, const struct dirent** __e2);

int alphasort64(const struct dirent64** __e1, const struct dirent64** __e2);

long int getdirentries(int __fd, char* __buf, long int __nbytes, long int* __basep);

long int getdirentries64(int __fd, char* __buf, long int __nbytes, long int* __basep);

int versionsort(const struct dirent** __e1, const struct dirent** __e2);

int versionsort64(const struct dirent64** __e1, const struct dirent64** __e2);

long int getdents64(int __fd, void* __buffer, long int __length);

int glob(const char* __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX57* __pglob);

void globfree(struct anonymous_typeX57* __pglob);

int glob64(const char* __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX58* __pglob);

void globfree64(struct anonymous_typeX58* __pglob);

int glob_pattern_p(const char* __pattern, int __quote);

char* setlocale(int __category, const char* __locale);

struct lconv* localeconv();

struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base);

struct __locale_struct* duplocale(struct __locale_struct* __dataset);

void freelocale(struct __locale_struct* __dataset);

struct __locale_struct* uselocale(struct __locale_struct* __dataset);

void skip_spaces(struct sInfo* info);

void parse_redirect(struct sInfo* info);

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self);
static _Bool expand_glob(char* str, struct list$1charph* result, struct sInfo* info);
static void glob_t_finalize(struct anonymous_typeX57* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
char* parse_word(struct sInfo* info);

_Bool parse(struct sInfo* info);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1charph_finalize(struct list$1charph* self);
static char* list$1charph_item(struct list$1charph* self, int position, char* default_value);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
_Bool redirect(int n, struct sInfo* info);

static struct optional$2tuple2$2charphboolpbool* list$1tuple2$2charphboolpp_operator_load_element(struct list$1tuple2$2charphboolp* self, int position);
static struct optional$2tuple2$2charphboolpbool* optional$2tuple2$2charphboolpbool_initialize(struct optional$2tuple2$2charphboolpbool* self, struct tuple2$2charphbool* v1, _Bool v2);
static void optional$2tuple2$2charphboolpboolp_finalize(struct optional$2tuple2$2charphboolpbool* self);
static struct tuple2$2charphbool* optional$2tuple2$2charphboolpbool_value(struct optional$2tuple2$2charphboolpbool* self);
_Bool run_command(int n, struct sInfo* info);

static int list$1list$1charphph_length(struct list$1list$1charphph* self);
static struct optional$2boolbool* list$1boolp_operator_load_element(struct list$1bool* self, int position);
static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static struct optional$2list$1charphphbool* list$1list$1charphphp_operator_load_element(struct list$1list$1charphph* self, int position);
static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
static struct list$1charph* optional$2list$1charphphbool_value(struct optional$2list$1charphphbool* self);
static int list$1charph_length(struct list$1charph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
_Bool run(char* source);

static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self);
static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self);
static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self);
static void list$1list$1charphph_finalize(struct list$1list$1charphph* self);
static struct list$1bool* list$1bool_initialize(struct list$1bool* self);
static void list$1boolp_finalize(struct list$1bool* self);
static void list_item$1boolp_finalize(struct list_item$1bool* self);
static void list$1bool_finalize(struct list$1bool* self);
static struct list$1tuple2$2charphboolp* list$1tuple2$2charphboolp_initialize(struct list$1tuple2$2charphboolp* self);
static void list$1tuple2$2charphboolpp_finalize(struct list$1tuple2$2charphboolp* self);
static void list_item$1tuple2$2charphboolpp_finalize(struct list_item$1tuple2$2charphboolp* self);
static void list$1tuple2$2charphboolp_finalize(struct list$1tuple2$2charphboolp* self);
static void sInfo_finalize(struct sInfo* self);
static struct list$1list$1charphph* list$1list$1charphph_push_back(struct list$1list$1charphph* self, struct list$1charph* item);
static struct list$1bool* list$1bool_push_back(struct list$1bool* self, _Bool item);
static struct list$1tuple2$2charphboolp* list$1tuple2$2charphboolp_push_back(struct list$1tuple2$2charphboolp* self, struct tuple2$2charphbool* item);
void method_block1_mainc(struct __current_stack1__* parent);

void sigchld_action(int signum, struct anonymous_typeX21* info, void* ctx);

void sig_tstp(int signum);

void sig_int(int signal);

void set_signal();

void method_block2_mainc(struct __current_stack2__* parent);

void method_block3_mainc(struct __current_stack3__* parent);

void method_block4_mainc(struct __current_stack4__* parent);

void method_block5_mainc(struct __current_stack5__* parent);

void method_block6_mainc(struct __current_stack6__* parent);

void method_block7_mainc(struct __current_stack7__* parent);

void method_block8_mainc(struct __current_stack8__* parent);

void method_block9_mainc(struct __current_stack9__* parent);

static void sigaction_finalize(struct sigaction* self);
void sigchld_block(int block);

static void sigset_t_finalize(struct anonymous_typeX8* self);
void sig_int_optc(int signum);

void sig_tstp_optc(int signum, struct anonymous_typeX21* info, void* ctx);

void sig_cont_optc(int signum, struct anonymous_typeX21* info, void* ctx);

void set_signal_optc();

char* line_buffer_from_head_to_cursor_point();

void get_command_completion_cadidates();

static void stat_finalize(struct stat* self);
char* completion_generator(const char* text, int state);

char** completer(const char* text, int start, int end);

void readline_insert_text(char* cmdline, int cursor_point);

int readline_init_text();

int main(int argc, char** argv);

void method_block10_mainc(struct __current_stack10__* parent);

void method_block11_mainc(struct __current_stack11__* parent);

void method_block12_mainc(struct __current_stack12__* parent);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1992))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "/usr/local/include/comelang2.h", 1994))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "/usr/local/include/comelang2.h", 1994))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "/usr/local/include/comelang2.h", 1995))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "/usr/local/include/comelang2.h", 1995))->memory, "/usr/local/include/comelang2.h", 1995))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2002))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "/usr/local/include/comelang2.h", 2004))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "/usr/local/include/comelang2.h", 2004))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "/usr/local/include/comelang2.h", 2005))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "/usr/local/include/comelang2.h", 2005))->memory, "/usr/local/include/comelang2.h", 2005))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 2012))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "/usr/local/include/comelang2.h", 2014))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "/usr/local/include/comelang2.h", 2014))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "/usr/local/include/comelang2.h", 2015))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "/usr/local/include/comelang2.h", 2015))->memory, "/usr/local/include/comelang2.h", 2015))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 2022))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "/usr/local/include/comelang2.h", 2024))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "/usr/local/include/comelang2.h", 2024))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "/usr/local/include/comelang2.h", 2025))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "/usr/local/include/comelang2.h", 2025))->memory, "/usr/local/include/comelang2.h", 2025))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 2032))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "/usr/local/include/comelang2.h", 2034))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "/usr/local/include/comelang2.h", 2034))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "/usr/local/include/comelang2.h", 2035))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "/usr/local/include/comelang2.h", 2035))->memory, "/usr/local/include/comelang2.h", 2035))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
unsigned int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    __result12__ = __result_obj__ = ((unsigned int*)(right_value10=wchar_tp_substring(str,head,tail)));
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = charp_index_count(str,search_str,count,default_value);
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = charp_index_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = charp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = charp_rindex_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = charp_rindex_count(str,search_str,default_value,-1);
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
struct list$1charph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result18__ = __result_obj__ = ((struct list$1charph*)(right_value11=charp_scan_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
struct list$1charph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((struct list$1charph*)(right_value12=charp_scan_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result20__ = __result_obj__ = ((struct list$1charph*)(right_value13=charp_split_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value14;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((struct list$1charph*)(right_value14=charp_split_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result22__ = __result_obj__ = ((struct list$1charph*)(right_value15=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}
static inline char* string_strip(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value16;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((char*)(right_value16=charp_strip(self)));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}
static inline char* string_printable(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    __result24__ = __result_obj__ = ((char*)(right_value17=string_printable(str)));
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
}
static inline unsigned int* string_to_wstring(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
unsigned int* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    __result25__ = __result_obj__ = ((unsigned int*)(right_value18=charp_to_wstring(str)));
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}
static inline char* wstring_to_string(unsigned int* wstr){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
    __result26__ = __result_obj__ = ((char*)(right_value19=wchar_tp_to_string(wstr)));
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}
static inline int wstring_length(unsigned int* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result27__ = wchar_tp_length(str);
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value20;
unsigned int* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
    __result28__ = __result_obj__ = ((unsigned int*)(right_value20=wchar_tp_delete(str,head,tail)));
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = wchar_tp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = wchar_tp_rindex(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value21;
unsigned int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
    __result31__ = __result_obj__ = ((unsigned int*)(right_value21=wchar_tp_reverse(str)));
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
unsigned int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
    __result32__ = __result_obj__ = ((unsigned int*)(right_value22=wchar_tp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}
static inline unsigned int* wstring_printable(unsigned int* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
unsigned int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((unsigned int*)(right_value23=wchar_tp_printable(str)));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result34__ = wchar_tp_get_hash_key(value);
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result35__ = charp_match_group_strings(self,reg,count,group_strings);
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}
static inline int string_index(char* str, char* search_str, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = charp_index(str,search_str,default_value);
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result37__ = charp_index_regex(self,reg,default_value);
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}
static inline char* string_replace(char* self, int index, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    __result38__ = __result_obj__ = ((char*)(right_value24=charp_replace(self,index,c)));
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}
static inline char* string_multiply(char* str, int n){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value25=charp_multiply(str,n)));
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value26;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
    __result40__ = __result_obj__ = ((char*)(right_value26=charp_sub(self,reg,replace)));
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value27;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((char*)(right_value27=charp_sub_count(self,reg,replace,count)));
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value28;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
    __result42__ = __result_obj__ = ((struct list$1charph*)(right_value28=charp_split_str(self,str)));
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value29;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((struct list$1charph*)(right_value29=charp_scan(self,reg)));
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((struct list$1charph*)(right_value30=charp_split(self,reg)));
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result45__ = charp_match(self,reg);
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value31;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((struct list$1charph*)(right_value31=charp_split_maxsplit(self,reg,maxsplit)));
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result47__ = charp_rindex_regex_count(self,reg,count,default_value);
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result48__ = charp_match_count(self,reg,count);
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value32;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
    __result49__ = __result_obj__ = ((char*)(right_value32=charp_sub_block(self,reg,parent,block)));
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value33;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
    __result50__ = __result_obj__ = ((char*)(right_value33=charp_sub_block_count(self,reg,count,parent,block)));
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}
static inline char* charp_chomp(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
    __result52__ = __result_obj__ = ((char*)(right_value35=string_chomp(str)));
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}









































void skip_spaces(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional1=*((struct sInfo*)come_null_check(info, "main.c", 34))->p==32||*((struct sInfo*)come_null_check(info, "main.c", 34))->p==9,    __freed_obj__ = 0, 
    _while_condtional1) {
        ((struct sInfo*)come_null_check(info, "main.c", 34))->p++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void parse_redirect(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _if_conditional5;
void* right_value36;
char* file_name_5;
void* right_value37;
void* right_value39;
struct tuple2$2charphbool* __dec_obj7;
_Bool _if_conditional8;
void* right_value40;
char* file_name_6;
void* right_value41;
void* right_value42;
struct tuple2$2charphbool* __dec_obj8;
_Bool _if_conditional9;
void* right_value43;
char* file_name_7;
void* right_value44;
void* right_value45;
struct tuple2$2charphbool* __dec_obj9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* right_value46;
char* file_name_8;
void* right_value47;
void* right_value48;
struct tuple2$2charphbool* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&file_name_5, 0, sizeof(char*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&file_name_6, 0, sizeof(char*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&file_name_7, 0, sizeof(char*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&file_name_8, 0, sizeof(char*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    while(_while_condtional2=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional5=*((struct sInfo*)come_null_check(info, "main.c", 82))->p==62&&*(((struct sInfo*)come_null_check(info, "main.c", 82))->p+1)==62,        __freed_obj__ = 0, 
        _if_conditional5) {
            ((struct sInfo*)come_null_check(info, "main.c", 43))->p+=2;
            __freed_obj__ = 0;
            skip_spaces(info);
            __freed_obj__ = 0;
            file_name_5=(char*)come_increment_ref_count(((char*)(right_value36=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value36;
            __freed_obj__ = 0;
            __dec_obj7=((struct sInfo*)come_null_check(info, "main.c", 48))->redirect_stdout;
            ((struct sInfo*)come_null_check(info, "main.c", 48))->redirect_stdout=(struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value39=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value37=(struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "main.c", 48)))),(char*)come_increment_ref_count(file_name_5),(_Bool)1))));
            if(__dec_obj7) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphbool_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value37;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value39;
            __freed_obj__ = 0;
            if(file_name_5 && !__freed_obj__) { file_name_5 = come_decrement_ref_count(file_name_5, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional8=*((struct sInfo*)come_null_check(info, "main.c", 82))->p==62,            __freed_obj__ = 0, 
            _if_conditional8) {
                ((struct sInfo*)come_null_check(info, "main.c", 51))->p++;
                __freed_obj__ = 0;
                skip_spaces(info);
                __freed_obj__ = 0;
                file_name_6=(char*)come_increment_ref_count(((char*)(right_value40=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
                __dec_obj8=((struct sInfo*)come_null_check(info, "main.c", 56))->redirect_stdout;
                ((struct sInfo*)come_null_check(info, "main.c", 56))->redirect_stdout=(struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value42=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value41=(struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "main.c", 56)))),(char*)come_increment_ref_count(file_name_6),(_Bool)0))));
                if(__dec_obj8) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphbool_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value41;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value42;
                __freed_obj__ = 0;
                if(file_name_6 && !__freed_obj__) { file_name_6 = come_decrement_ref_count(file_name_6, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional9=*((struct sInfo*)come_null_check(info, "main.c", 82))->p==50&&*(((struct sInfo*)come_null_check(info, "main.c", 82))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "main.c", 82))->p+2)==62,                __freed_obj__ = 0, 
                _if_conditional9) {
                    ((struct sInfo*)come_null_check(info, "main.c", 59))->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces(info);
                    __freed_obj__ = 0;
                    file_name_7=(char*)come_increment_ref_count(((char*)(right_value43=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43;
                    __freed_obj__ = 0;
                    __dec_obj9=((struct sInfo*)come_null_check(info, "main.c", 64))->redirect_stderr;
                    ((struct sInfo*)come_null_check(info, "main.c", 64))->redirect_stderr=(struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value45=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value44=(struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "main.c", 64)))),(char*)come_increment_ref_count(file_name_7),(_Bool)1))));
                    if(__dec_obj9) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphbool_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value44;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value45;
                    __freed_obj__ = 0;
                    if(file_name_7 && !__freed_obj__) { file_name_7 = come_decrement_ref_count(file_name_7, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional10=memcmp(((struct sInfo*)come_null_check(info, "main.c", 82))->p,"2>&1",4)==0,                    __freed_obj__ = 0, 
                    _if_conditional10) {
                        ((struct sInfo*)come_null_check(info, "main.c", 67))->p+=4;
                        __freed_obj__ = 0;
                        skip_spaces(info);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "main.c", 69))->mix_stdout=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional11=*((struct sInfo*)come_null_check(info, "main.c", 82))->p==50&&*(((struct sInfo*)come_null_check(info, "main.c", 82))->p+1)==62,                        __freed_obj__ = 0, 
                        _if_conditional11) {
                            ((struct sInfo*)come_null_check(info, "main.c", 72))->p+=2;
                            __freed_obj__ = 0;
                            skip_spaces(info);
                            __freed_obj__ = 0;
                            file_name_8=(char*)come_increment_ref_count(((char*)(right_value46=parse_word(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value46;
                            __freed_obj__ = 0;
                            __dec_obj10=((struct sInfo*)come_null_check(info, "main.c", 77))->redirect_stderr;
                            ((struct sInfo*)come_null_check(info, "main.c", 77))->redirect_stderr=(struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value48=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count(((struct tuple2$2charphbool*)(right_value47=(struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "main.c", 77)))),(char*)come_increment_ref_count(file_name_8),(_Bool)0))));
                            if(__dec_obj10) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
                            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphbool_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value47;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value48);
                            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value48;
                            __freed_obj__ = 0;
                            if(file_name_8 && !__freed_obj__) { file_name_8 = come_decrement_ref_count(file_name_8, (void*)0, (void*)0, 0, 0, 0); }
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
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value38;
char* __dec_obj6;
struct tuple2$2charphbool* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
                __dec_obj6=((struct tuple2$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 1809))->v1;
                ((struct tuple2$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 1809))->v1=(char*)come_increment_ref_count(((char*)(right_value38=string_clone(v1))));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value38;
                __freed_obj__ = 0;
                ((struct tuple2$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 1810))->v2=v2;
                __freed_obj__ = 0;
                __result53__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional6=self!=((void*)0)&&((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional6) {
                        if(((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional7=self!=((void*)0)&&((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphbool_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional7) {
                    if(((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphbool_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphbool_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphbool*)come_null_check(self, "tuple2$2charphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static _Bool expand_glob(char* str, struct list$1charph* result, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct anonymous_typeX57 glob_result_9;
int rc_10;
_Bool _if_conditional12;
_Bool __result54__;
_Bool _if_conditional13;
void* right_value52;
_Bool _if_conditional17;
int i_14;
_Bool _for_condtionalA1;
void* right_value53;
void* right_value54;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&glob_result_9, 0, sizeof(struct anonymous_typeX57));
memset(&rc_10, 0, sizeof(int));
memset(&right_value52, 0, sizeof(void*));
memset(&i_14, 0, sizeof(int));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    __freed_obj__ = 0;
    rc_10=glob(str,0,((void*)0),&glob_result_9);
    __freed_obj__ = 0;
    if(_if_conditional12=rc_10==1,    __freed_obj__ = 0, 
    _if_conditional12) {
        printf("out of space during glob operation\n");
        __freed_obj__ = 0;
        __result54__ = (_Bool)0;
        if((&glob_result_9) && !__freed_obj__) { come_call_finalizer(glob_t_finalize,(&glob_result_9), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result54__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional13=rc_10==3,        __freed_obj__ = 0, 
        _if_conditional13) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result, "main.c", 95)),(char*)come_increment_ref_count(((char*)(right_value52=__builtin_string(str)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional17=glob_result_9.gl_pathc>0,            __freed_obj__ = 0, 
            _if_conditional17) {
                __freed_obj__ = 0;
                for(
                i_14=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA1=                i_14<glob_result_9.gl_pathc ,                __freed_obj__ = 0, 
                _for_condtionalA1;                i_14++ ,                __freed_obj__ = 0, 
                0                ){
                    list$1charph_push_back(((struct list$1charph*)come_null_check(result, "main.c", 101)),(char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(glob_result_9.gl_pathv[i_14])))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value53;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                list$1charph_push_back(((struct list$1charph*)come_null_check(result, "main.c", 105)),(char*)come_increment_ref_count(((char*)(right_value54=__builtin_string(str)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    globfree(&glob_result_9);
    __freed_obj__ = 0;
    __result56__ = (_Bool)1;
    if((&glob_result_9) && !__freed_obj__) { come_call_finalizer(glob_t_finalize,(&glob_result_9), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
    if((&glob_result_9) && !__freed_obj__) { come_call_finalizer(glob_t_finalize,(&glob_result_9), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void glob_t_finalize(struct anonymous_typeX57* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
void* right_value49;
struct list_item$1charph* litem_11;
char* __dec_obj11;
_Bool _if_conditional16;
void* right_value50;
struct list_item$1charph* litem_12;
char* __dec_obj12;
void* right_value51;
struct list_item$1charph* litem_13;
char* __dec_obj13;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional14=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional14) {
                    litem_11=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value49;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_11, "/usr/local/include/comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_11, "/usr/local/include/comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj11=((struct list_item$1charph*)come_null_check(litem_11, "/usr/local/include/comelang2.h", 281))->item;
                    ((struct list_item$1charph*)come_null_check(litem_11, "/usr/local/include/comelang2.h", 281))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 283))->tail=litem_11;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 284))->head=litem_11;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional16=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional16) {
                        litem_12=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 289))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj12=((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 291))->item;
                        ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 291))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 293))->tail=litem_12;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 294))->head, "/usr/local/include/comelang2.h", 294))->next=litem_12;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_13=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value51;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 299))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj13=((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 301))->item;
                        ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 301))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 303))->tail, "/usr/local/include/comelang2.h", 303))->next=litem_13;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 304))->tail=litem_13;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result55__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional15=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional15) {
                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

char* parse_word(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
void* right_value56;
struct buffer* result_15;
_Bool squort_16;
_Bool dquort_17;
_Bool _if_conditional18;
_Bool _while_condtional3;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
void* right_value57;
void* right_value58;
struct buffer* buf2_18;
_Bool _while_condtional4;
void* right_value59;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
void* right_value60;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct buffer*));
memset(&squort_16, 0, sizeof(_Bool));
memset(&dquort_17, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&buf2_18, 0, sizeof(struct buffer*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
    result_15=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value56=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value55=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 116))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    parse_redirect(info);
    __freed_obj__ = 0;
    skip_spaces(info);
    __freed_obj__ = 0;
    parse_redirect(info);
    __freed_obj__ = 0;
    squort_16=(_Bool)0;
    __freed_obj__ = 0;
    dquort_17=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional18=*((struct sInfo*)come_null_check(info, "main.c", 133))->p==126,    __freed_obj__ = 0, 
    _if_conditional18) {
        ((struct sInfo*)come_null_check(info, "main.c", 128))->p++;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(result_15, "main.c", 130)),getenv("HOME"));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional3=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional3) {
        if(_if_conditional19=!squort_16&&*((struct sInfo*)come_null_check(info, "main.c", 178))->p==34,        __freed_obj__ = 0, 
        _if_conditional19) {
            ((struct sInfo*)come_null_check(info, "main.c", 135))->p++;
            __freed_obj__ = 0;
            dquort_17=!dquort_17;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional20=!dquort_17&&*((struct sInfo*)come_null_check(info, "main.c", 178))->p==39,            __freed_obj__ = 0, 
            _if_conditional20) {
                ((struct sInfo*)come_null_check(info, "main.c", 139))->p++;
                __freed_obj__ = 0;
                squort_16=!squort_16;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional21=!squort_16&&*((struct sInfo*)come_null_check(info, "main.c", 178))->p==36,                __freed_obj__ = 0, 
                _if_conditional21) {
                    ((struct sInfo*)come_null_check(info, "main.c", 143))->p++;
                    __freed_obj__ = 0;
                    buf2_18=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value58=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value57=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 145))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value58;
                    __freed_obj__ = 0;
                    while(_while_condtional4=xisalpha(*((struct sInfo*)come_null_check(info, "main.c", 151))->p),                    __freed_obj__ = 0, 
                    _while_condtional4) {
                        buffer_append_char(((struct buffer*)come_null_check(buf2_18, "main.c", 147)),*((struct sInfo*)come_null_check(info, "main.c", 147))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "main.c", 148))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(result_15, "main.c", 151)),getenv(((char*)(right_value59=buffer_to_string(((struct buffer*)come_null_check(buf2_18, "main.c", 151)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value59;
                    __freed_obj__ = 0;
                    if(buf2_18 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional22=squort_16||dquort_17,                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        buffer_append_char(((struct buffer*)come_null_check(result_15, "main.c", 154)),*((struct sInfo*)come_null_check(info, "main.c", 154))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "main.c", 155))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional23=*((struct sInfo*)come_null_check(info, "main.c", 178))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional23) {
                            ((struct sInfo*)come_null_check(info, "main.c", 158))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional24=*((struct sInfo*)come_null_check(info, "main.c", 167))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional24) {
                                break;
                                __freed_obj__ = 0;
                            }
                            else {
                                buffer_append_char(((struct buffer*)come_null_check(result_15, "main.c", 164)),*((struct sInfo*)come_null_check(info, "main.c", 164))->p);
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "main.c", 165))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional25=*((struct sInfo*)come_null_check(info, "main.c", 178))->p==32||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==9||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==10||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==0||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==59||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==38||*((struct sInfo*)come_null_check(info, "main.c", 178))->p==124,                            __freed_obj__ = 0, 
                            _if_conditional25) {
                                break;
                                __freed_obj__ = 0;
                            }
                            else {
                                buffer_append_char(((struct buffer*)come_null_check(result_15, "main.c", 175)),*((struct sInfo*)come_null_check(info, "main.c", 175))->p);
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "main.c", 176))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_redirect(info);
    __freed_obj__ = 0;
    skip_spaces(info);
    __freed_obj__ = 0;
    parse_redirect(info);
    __freed_obj__ = 0;
    __result57__ = __result_obj__ = ((char*)(right_value60=buffer_to_string(((struct buffer*)come_null_check(result_15, "main.c", 186)))));
    if(result_15 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
    if(result_15 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool parse(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
void* right_value62;
struct list$1charph* __dec_obj14;
_Bool _while_condtional6;
void* right_value63;
void* right_value64;
struct buffer* buf_21;
char* p_22;
_Bool _while_condtional7;
void* right_value65;
char* line_23;
_Bool _if_conditional26;
char* path_24;
void* right_value66;
_Bool _if_conditional27;
void* right_value67;
void* right_value68;
void* right_value69;
char* str_27;
_Bool _if_conditional30;
void* right_value70;
_Bool _if_conditional31;
void* right_value71;
void* right_value72;
struct list$1charph* li_29;
void* right_value73;
char* name_30;
void* right_value74;
char* value_31;
_Bool _if_conditional32;
void* right_value75;
char* arg_32;
_Bool _if_conditional33;
void* right_value76;
void* right_value77;
struct list$1charph* words_33;
_Bool _if_conditional34;
_Bool __result61__;
struct list$1charph* o2_saved_34;
char* it_37;
_Bool _for_condtionalA2;
void* right_value78;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&buf_21, 0, sizeof(struct buffer*));
memset(&p_22, 0, sizeof(char*));
memset(&right_value65, 0, sizeof(void*));
memset(&line_23, 0, sizeof(char*));
memset(&path_24, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&str_27, 0, sizeof(char*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&li_29, 0, sizeof(struct list$1charph*));
memset(&right_value73, 0, sizeof(void*));
memset(&name_30, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&value_31, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
memset(&arg_32, 0, sizeof(char*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&words_33, 0, sizeof(struct list$1charph*));
memset(&o2_saved_34, 0, sizeof(struct list$1charph*));
memset(&it_37, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
    __dec_obj14=((struct sInfo*)come_null_check(info, "main.c", 191))->args;
    ((struct sInfo*)come_null_check(info, "main.c", 191))->args=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 191))))))));
    if(__dec_obj14) { come_call_finalizer(list$1charph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value61;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value62;
    __freed_obj__ = 0;
    while(_while_condtional6=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional6) {
        buf_21=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 194))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value63;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value64;
        __freed_obj__ = 0;
        p_22=((struct sInfo*)come_null_check(info, "main.c", 195))->p;
        __freed_obj__ = 0;
        while(_while_condtional7=*((struct sInfo*)come_null_check(info, "main.c", 200))->p!=10&&*((struct sInfo*)come_null_check(info, "main.c", 200))->p!=0,        __freed_obj__ = 0, 
        _while_condtional7) {
            buffer_append_char(((struct buffer*)come_null_check(buf_21, "main.c", 197)),*((struct sInfo*)come_null_check(info, "main.c", 197))->p);
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "main.c", 198))->p++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        line_23=(char*)come_increment_ref_count(((char*)(right_value65=buffer_to_string(((struct buffer*)come_null_check(buf_21, "main.c", 200))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value65;
        __freed_obj__ = 0;
        if(_if_conditional26=string_operator_equals(line_23,"cd"),        __freed_obj__ = 0, 
        _if_conditional26) {
            path_24=getenv("HOME");
            __freed_obj__ = 0;
            chdir(path_24);
            __freed_obj__ = 0;
            setenv("PWD",path_24,1);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional27=string_match(((char*)come_null_check(line_23, "main.c", 247)),((struct come_regex*)(right_value66=charp_to_regex("^cd ", 0, 0, 0, 0, 0, 0, 0, 0)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66),
            (right_value66 && right_value66 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(come_regex_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value66, 
            __freed_obj__ = 0, 
            _if_conditional27) {
                str_27=(char*)come_increment_ref_count(((char*)(right_value69=list$1charph_item(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value68=string_scan(((char*)come_null_check(line_23, "main.c", 209)),((struct come_regex*)(right_value67=charp_to_regex("^cd +(.+)", 0, 0, 0, 0, 0, 0, 0, 0)))))), "main.c", 209)),1,((void*)0)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value67;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value68;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value69;
                __freed_obj__ = 0;
                if(_if_conditional30=str_27,                __freed_obj__ = 0, 
                _if_conditional30) {
                    char path_28[4096];
                    memset(&path_28, 0, sizeof(char)                    *(4096)                    );
                    __freed_obj__ = 0;
                    realpath(str_27,path_28);
                    __freed_obj__ = 0;
                    chdir(path_28);
                    __freed_obj__ = 0;
                    setenv("PWD",path_28,1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(str_27 && !__freed_obj__) { str_27 = come_decrement_ref_count(str_27, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional31=string_match(((char*)come_null_check(line_23, "main.c", 247)),((struct come_regex*)(right_value70=charp_to_regex("^export ", 0, 0, 0, 0, 0, 0, 0, 0)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
                (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(come_regex_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value70, 
                __freed_obj__ = 0, 
                _if_conditional31) {
                    li_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=string_scan(((char*)come_null_check(line_23, "main.c", 220)),((struct come_regex*)(right_value71=charp_to_regex("^export +(.+)=(.+)", 0, 0, 0, 0, 0, 0, 0, 0)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(come_regex_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
                    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value72;
                    __freed_obj__ = 0;
                    name_30=(char*)come_increment_ref_count(((char*)(right_value73=list$1charph_item(((struct list$1charph*)come_null_check(li_29, "main.c", 222)),1,((void*)0)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value73;
                    __freed_obj__ = 0;
                    value_31=(char*)come_increment_ref_count(((char*)(right_value74=list$1charph_item(((struct list$1charph*)come_null_check(li_29, "main.c", 223)),2,((void*)0)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value74);
                    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value74;
                    __freed_obj__ = 0;
                    if(_if_conditional32=name_30&&value_31,                    __freed_obj__ = 0, 
                    _if_conditional32) {
                        setenv(name_30,value_31,1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(li_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,li_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(name_30 && !__freed_obj__) { name_30 = come_decrement_ref_count(name_30, (void*)0, (void*)0, 0, 0, 0); }
                    if(value_31 && !__freed_obj__) { value_31 = come_decrement_ref_count(value_31, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    ((struct sInfo*)come_null_check(info, "main.c", 230))->p=p_22;
                    __freed_obj__ = 0;
                    arg_32=(char*)come_increment_ref_count(((char*)(right_value75=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value75;
                    __freed_obj__ = 0;
                    if(_if_conditional33=string_operator_equals(arg_32,""),                    __freed_obj__ = 0, 
                    _if_conditional33) {
                        if(arg_32 && !__freed_obj__) { arg_32 = come_decrement_ref_count(arg_32, (void*)0, (void*)0, 0, 0, 0); }
                        if(buf_21 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(line_23 && !__freed_obj__) { line_23 = come_decrement_ref_count(line_23, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    words_33=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 238))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value76;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value77);
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value77;
                    __freed_obj__ = 0;
                    if(_if_conditional34=!expand_glob(arg_32,words_33,info),                    __freed_obj__ = 0, 
                    _if_conditional34) {
                        __result61__ = (_Bool)0;
                        if(arg_32 && !__freed_obj__) { arg_32 = come_decrement_ref_count(arg_32, (void*)0, (void*)0, 0, 0, 0); }
                        if(words_33 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,words_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(buf_21 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(line_23 && !__freed_obj__) { line_23 = come_decrement_ref_count(line_23, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    for(
                    o2_saved_34=(struct list$1charph*)come_increment_ref_count((words_33)),it_37=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_34), "main.c", 246))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA2=                    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_34), "main.c", 246))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA2;                    it_37=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_34), "main.c", 246))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 244))->args, "main.c", 244)),(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(it_37)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value78;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(arg_32 && !__freed_obj__) { arg_32 = come_decrement_ref_count(arg_32, (void*)0, (void*)0, 0, 0, 0); }
                    if(words_33 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,words_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf_21 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_21, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(line_23 && !__freed_obj__) { line_23 = come_decrement_ref_count(line_23, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result69__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 155))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 156))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 157))->len=0;
        __freed_obj__ = 0;
        __result58__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_19;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_19, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1charph*));
            it_19=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 174))->head;
            __freed_obj__ = 0;
            while(_while_condtional5=it_19!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional5) {
                prev_it_20=it_19;
                __freed_obj__ = 0;
                it_19=((struct list_item$1charph*)come_null_check(it_19, "/usr/local/include/comelang2.h", 177))->next;
                __freed_obj__ = 0;
                if(prev_it_20 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
struct list_item$1charph* it_25;
int i_26;
_Bool _while_condtional8;
_Bool _if_conditional29;
char* __result59__;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&i_26, 0, sizeof(int));
                    if(_if_conditional28=position<0,                    __freed_obj__ = 0, 
                    _if_conditional28) {
                        position+=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 397))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_25=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 400))->head;
                    __freed_obj__ = 0;
                    i_26=0;
                    __freed_obj__ = 0;
                    while(_while_condtional8=it_25!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional8) {
                        if(_if_conditional29=position==i_26,                        __freed_obj__ = 0, 
                        _if_conditional29) {
                            __result59__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(it_25, "/usr/local/include/comelang2.h", 404))->item;
                            __freed_obj__ = 0;
                            return __result59__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_25=((struct list_item$1charph*)come_null_check(it_25, "/usr/local/include/comelang2.h", 406))->next;
                        __freed_obj__ = 0;
                        i_26++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result60__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result60__;
                    __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
char* result_35;
char* __result62__;
_Bool _if_conditional36;
char* __result63__;
char* result_36;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_35, 0, sizeof(char*));
memset(&result_36, 0, sizeof(char*));
                        if(_if_conditional35=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            __freed_obj__ = 0;
                            memset(&result_35,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result62__ = __result_obj__ = result_35;
                            __freed_obj__ = 0;
                            return __result62__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 341))->it=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 341))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional36=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 347))->it,                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            __result63__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 344))->it, "/usr/local/include/comelang2.h", 344))->item;
                            __freed_obj__ = 0;
                            return __result63__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_36,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result64__ = __result_obj__ = result_36;
                        __freed_obj__ = 0;
                        return __result64__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result65__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 371))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result65__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
char* result_38;
char* __result66__;
_Bool _if_conditional38;
char* __result67__;
char* result_39;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(char*));
memset(&result_39, 0, sizeof(char*));
                        if(_if_conditional37=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            __freed_obj__ = 0;
                            memset(&result_38,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result66__ = __result_obj__ = result_38;
                            __freed_obj__ = 0;
                            return __result66__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 359))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 359))->it, "/usr/local/include/comelang2.h", 359))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional38=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 365))->it,                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            __result67__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 362))->it, "/usr/local/include/comelang2.h", 362))->item;
                            __freed_obj__ = 0;
                            return __result67__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_39,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result68__ = __result_obj__ = result_39;
                        __freed_obj__ = 0;
                        return __result68__;
                        __freed_obj__ = 0;
}

_Bool redirect(int n, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
struct tuple2$2charphbool* redirect_stdout_44;
void* right_value84;
struct tuple2$2charphbool* redirect_stderr_45;
_Bool _if_conditional42;
char* file_name_46;
_Bool append_47;
int fd_48;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool __result75__;
_Bool _if_conditional45;
char* file_name_49;
_Bool append_50;
int fd_51;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&redirect_stdout_44, 0, sizeof(struct tuple2$2charphbool*));
memset(&right_value84, 0, sizeof(void*));
memset(&redirect_stderr_45, 0, sizeof(struct tuple2$2charphbool*));
memset(&file_name_46, 0, sizeof(char*));
memset(&append_47, 0, sizeof(_Bool));
memset(&fd_48, 0, sizeof(int));
memset(&file_name_49, 0, sizeof(char*));
memset(&append_50, 0, sizeof(_Bool));
memset(&fd_51, 0, sizeof(int));
    come_clear_stackframe();
    redirect_stdout_44=(struct tuple2$2charphbool*)come_increment_ref_count(optional$2tuple2$2charphboolpbool_value((come_push_stackframe("main.c", 254),((struct optional$2tuple2$2charphboolpbool*)(right_value83=list$1tuple2$2charphboolpp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 254))->args_redirect_stdout,n))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphboolpboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    come_clear_stackframe();
    redirect_stderr_45=(struct tuple2$2charphbool*)come_increment_ref_count(optional$2tuple2$2charphboolpbool_value((come_push_stackframe("main.c", 255),((struct optional$2tuple2$2charphboolpbool*)(right_value84=list$1tuple2$2charphboolpp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 255))->args_redirect_stderr,n))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphboolpboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    if(_if_conditional42=redirect_stdout_44,    __freed_obj__ = 0, 
    _if_conditional42) {
        file_name_46=(char*)come_increment_ref_count(((struct tuple2$2charphbool*)come_null_check(redirect_stdout_44, "main.c", 258))->v1);
        __freed_obj__ = 0;
        append_47=((struct tuple2$2charphbool*)come_null_check(redirect_stdout_44, "main.c", 259))->v2;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional43=append_47,        __freed_obj__ = 0, 
        _if_conditional43) {
            fd_48=open(file_name_46,1024|1|64,420);
            __freed_obj__ = 0;
        }
        else {
            fd_48=open(file_name_46,1|64,420);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=fd_48<0,        __freed_obj__ = 0, 
        _if_conditional44) {
            __result75__ = (_Bool)0;
            if(file_name_46 && !__freed_obj__) { file_name_46 = come_decrement_ref_count(file_name_46, (void*)0, (void*)0, 0, 0, 0); }
            if(redirect_stdout_44 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stdout_44, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(redirect_stderr_45 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stderr_45, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result75__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        dup2(fd_48,1);
        __freed_obj__ = 0;
        close(fd_48);
        __freed_obj__ = 0;
        if(file_name_46 && !__freed_obj__) { file_name_46 = come_decrement_ref_count(file_name_46, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional45=redirect_stderr_45,    __freed_obj__ = 0, 
    _if_conditional45) {
        file_name_49=(char*)come_increment_ref_count(((struct tuple2$2charphbool*)come_null_check(redirect_stderr_45, "main.c", 278))->v1);
        __freed_obj__ = 0;
        append_50=((struct tuple2$2charphbool*)come_null_check(redirect_stderr_45, "main.c", 279))->v2;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional46=append_50,        __freed_obj__ = 0, 
        _if_conditional46) {
            fd_51=open(file_name_49,1024|1|64,420);
            __freed_obj__ = 0;
        }
        else {
            fd_51=open(file_name_49,1|64,420);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional47=fd_51<0,        __freed_obj__ = 0, 
        _if_conditional47) {
            __result76__ = (_Bool)0;
            if(file_name_49 && !__freed_obj__) { file_name_49 = come_decrement_ref_count(file_name_49, (void*)0, (void*)0, 0, 0, 0); }
            if(redirect_stdout_44 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stdout_44, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(redirect_stderr_45 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stderr_45, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result76__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        dup2(fd_51,2);
        __freed_obj__ = 0;
        close(fd_51);
        __freed_obj__ = 0;
        if(file_name_49 && !__freed_obj__) { file_name_49 = come_decrement_ref_count(file_name_49, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result77__ = (_Bool)1;
    if(redirect_stdout_44 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stdout_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(redirect_stderr_45 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stderr_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
    if(redirect_stdout_44 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stdout_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(redirect_stderr_45 && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,redirect_stderr_45, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2tuple2$2charphboolpbool* list$1tuple2$2charphboolpp_operator_load_element(struct list$1tuple2$2charphboolp* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
struct list_item$1tuple2$2charphboolp* it_40;
int i_41;
_Bool _while_condtional9;
_Bool _if_conditional40;
void* right_value79;
void* right_value80;
struct optional$2tuple2$2charphboolpbool* __result71__;
struct tuple2$2charphbool* default_value_42;
void* right_value81;
void* right_value82;
struct optional$2tuple2$2charphboolpbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_40, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
memset(&i_41, 0, sizeof(int));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&default_value_42, 0, sizeof(struct tuple2$2charphbool*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
        if(_if_conditional39=position<0,        __freed_obj__ = 0, 
        _if_conditional39) {
            position+=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 740))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_40=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 743))->head;
        __freed_obj__ = 0;
        i_41=0;
        __freed_obj__ = 0;
        while(_while_condtional9=it_40!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional9) {
            if(_if_conditional40=position==i_41,            __freed_obj__ = 0, 
            _if_conditional40) {
                __result71__ = __result_obj__ = ((struct optional$2tuple2$2charphboolpbool*)(right_value80=optional$2tuple2$2charphboolpbool_initialize((struct optional$2tuple2$2charphboolpbool*)come_increment_ref_count(((struct optional$2tuple2$2charphboolpbool*)(right_value79=(struct optional$2tuple2$2charphboolpbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphboolpbool)*(1), "/usr/local/include/comelang2.h", 747)))),((struct list_item$1tuple2$2charphboolp*)come_null_check(it_40, "/usr/local/include/comelang2.h", 747))->item,(_Bool)1)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value79;
                __freed_obj__ = 0;
                return __result71__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_40=((struct list_item$1tuple2$2charphboolp*)come_null_check(it_40, "/usr/local/include/comelang2.h", 749))->next;
            __freed_obj__ = 0;
            i_41++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_42,0,sizeof(struct tuple2$2charphbool*));
        __freed_obj__ = 0;
        __result72__ = __result_obj__ = (come_save_stackframe("/usr/local/include/comelang2.h", 755), ((struct optional$2tuple2$2charphboolpbool*)(right_value82=optional$2tuple2$2charphboolpbool_initialize(((struct optional$2tuple2$2charphboolpbool*)(right_value81=(struct optional$2tuple2$2charphboolpbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphboolpbool)*(1), "/usr/local/include/comelang2.h", 755))),default_value_42,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphboolpboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82;
        __freed_obj__ = 0;
        return __result72__;
        __freed_obj__ = 0;
}

static struct optional$2tuple2$2charphboolpbool* optional$2tuple2$2charphboolpbool_initialize(struct optional$2tuple2$2charphboolpbool* self, struct tuple2$2charphbool* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2tuple2$2charphboolpbool* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct optional$2tuple2$2charphboolpbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1=v1;
                    __freed_obj__ = 0;
                    ((struct optional$2tuple2$2charphboolpbool*)come_null_check(self, "/usr/local/include/comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result70__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphboolpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result70__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphboolpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2tuple2$2charphboolpboolp_finalize(struct optional$2tuple2$2charphboolpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple2$2charphbool* optional$2tuple2$2charphboolpbool_value(struct optional$2tuple2$2charphboolpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
struct tuple2$2charphbool* default_value_43;
struct tuple2$2charphbool* __result73__;
struct tuple2$2charphbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_43, 0, sizeof(struct tuple2$2charphbool*));
        if(_if_conditional41=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional41) {
            __freed_obj__ = 0;
            memset(&default_value_43,0,sizeof(struct tuple2$2charphbool*));
            __freed_obj__ = 0;
            __result73__ = __result_obj__ = default_value_43;
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
        }
        else {
            __result74__ = __result_obj__ = ((struct optional$2tuple2$2charphboolpbool*)come_null_check(self, "/usr/local/include/comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result74__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool run_command(int n, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool __result79__;
void* right_value89;
_Bool mix_stdout_57;
_Bool _if_conditional53;
void* right_value94;
struct list$1charph* args_62;
int i_64;
_Bool _for_condtionalA3;
void* right_value99;
int pid_69;
_Bool _if_conditional62;
void* right_value100;
_Bool mix_stdout_70;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool __result96__;
void* right_value101;
struct list$1charph* args_71;
int i_73;
_Bool _for_condtionalA4;
void* right_value102;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&mix_stdout_57, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&args_62, 0, sizeof(struct list$1charph*));
memset(&i_64, 0, sizeof(int));
memset(&right_value99, 0, sizeof(void*));
memset(&pid_69, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&mix_stdout_70, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&args_71, 0, sizeof(struct list$1charph*));
memset(&i_73, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
    int pipes_52[2];
    memset(&pipes_52, 0, sizeof(int)    *(2)    );
    __freed_obj__ = 0;
    memset(pipes_52,0,sizeof(int)*2);
    __freed_obj__ = 0;
    if(_if_conditional48=n==list$1list$1charphph_length(((struct list$1list$1charphph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 369))->args_list, "main.c", 369)))-1,    __freed_obj__ = 0, 
    _if_conditional48) {
        if(_if_conditional49=!redirect(0,info),        __freed_obj__ = 0, 
        _if_conditional49) {
            __result79__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result79__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        mix_stdout_57=optional$2boolbool_value((come_push_stackframe("main.c", 311),((struct optional$2boolbool*)(right_value89=list$1boolp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 311))->args_mix_stdout,0)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        if(_if_conditional53=mix_stdout_57,        __freed_obj__ = 0, 
        _if_conditional53) {
            dup2(1,2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        args_62=(struct list$1charph*)come_increment_ref_count(optional$2list$1charphphbool_value((come_push_stackframe("main.c", 317),((struct optional$2list$1charphphbool*)(right_value94=list$1list$1charphphp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 317))->args_list,0))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value94;
        __freed_obj__ = 0;
        char* argv_63[1024];
        memset(&argv_63, 0, sizeof(char*)        *(1024)        );
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_64=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_64<list$1charph_length(((struct list$1charph*)come_null_check(args_62, "main.c", 324))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_64++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            argv_63[i_64]=optional$2charphbool_value((come_push_stackframe("main.c", 322),((struct optional$2charphbool*)(right_value99=list$1charphp_operator_load_element(args_62,i_64)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value99;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        argv_63[i_64]=((void*)0);
        __freed_obj__ = 0;
        execvp(argv_63[0],argv_63);
        __freed_obj__ = 0;
        exit(127);
        __freed_obj__ = 0;
        if(args_62 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,args_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        pipe(pipes_52);
        __freed_obj__ = 0;
        pid_69=fork();
        __freed_obj__ = 0;
        if(_if_conditional62=pid_69==0,        __freed_obj__ = 0, 
        _if_conditional62) {
            come_clear_stackframe();
            mix_stdout_70=optional$2boolbool_value((come_push_stackframe("main.c", 335),((struct optional$2boolbool*)(right_value100=list$1boolp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 335))->args_mix_stdout,list$1list$1charphph_length(((struct list$1list$1charphph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 335))->args_list, "main.c", 335)))-n-1)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            if(_if_conditional63=mix_stdout_70,            __freed_obj__ = 0, 
            _if_conditional63) {
                dup2(1,2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=!redirect(list$1list$1charphph_length(((struct list$1list$1charphph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 345))->args_list, "main.c", 345)))-n-1,info),            __freed_obj__ = 0, 
            _if_conditional64) {
                __result96__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result96__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            close(pipes_52[0]);
            __freed_obj__ = 0;
            dup2(pipes_52[1],1);
            __freed_obj__ = 0;
            close(pipes_52[1]);
            __freed_obj__ = 0;
            run_command(n+1,info);
            __freed_obj__ = 0;
        }
        else {
            close(pipes_52[1]);
            __freed_obj__ = 0;
            dup2(pipes_52[0],0);
            __freed_obj__ = 0;
            close(pipes_52[0]);
            __freed_obj__ = 0;
            come_clear_stackframe();
            args_71=(struct list$1charph*)come_increment_ref_count(optional$2list$1charphphbool_value((come_push_stackframe("main.c", 356),((struct optional$2list$1charphphbool*)(right_value101=list$1list$1charphphp_operator_load_element(((struct sInfo*)come_null_check(info, "main.c", 356))->args_list,list$1list$1charphph_length(((struct list$1list$1charphph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 356))->args_list, "main.c", 356)))-n-1))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value101;
            __freed_obj__ = 0;
            char* argv_72[1024];
            memset(&argv_72, 0, sizeof(char*)            *(1024)            );
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            for(
            i_73=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_73<list$1charph_length(((struct list$1charph*)come_null_check(args_71, "main.c", 362))) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_73++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                argv_72[i_73]=optional$2charphbool_value((come_push_stackframe("main.c", 360),((struct optional$2charphbool*)(right_value102=list$1charphp_operator_load_element(args_71,i_73)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value102;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            argv_72[i_73]=((void*)0);
            __freed_obj__ = 0;
            execvp(argv_72[0],argv_72);
            __freed_obj__ = 0;
            exit(127);
            __freed_obj__ = 0;
            if(args_71 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,args_71, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result97__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

static int list$1list$1charphph_length(struct list$1list$1charphph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result78__ = ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result78__;
        __freed_obj__ = 0;
}

static struct optional$2boolbool* list$1boolp_operator_load_element(struct list$1bool* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
struct list_item$1bool* it_53;
int i_54;
_Bool _while_condtional10;
_Bool _if_conditional51;
void* right_value85;
void* right_value86;
struct optional$2boolbool* __result81__;
_Bool default_value_55;
void* right_value87;
void* right_value88;
struct optional$2boolbool* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1bool*));
memset(&i_54, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&default_value_55, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
            if(_if_conditional50=position<0,            __freed_obj__ = 0, 
            _if_conditional50) {
                position+=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 740))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_53=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 743))->head;
            __freed_obj__ = 0;
            i_54=0;
            __freed_obj__ = 0;
            while(_while_condtional10=it_53!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional10) {
                if(_if_conditional51=position==i_54,                __freed_obj__ = 0, 
                _if_conditional51) {
                    __result81__ = __result_obj__ = ((struct optional$2boolbool*)(right_value86=optional$2boolbool_initialize((struct optional$2boolbool*)come_increment_ref_count(((struct optional$2boolbool*)(right_value85=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "/usr/local/include/comelang2.h", 747)))),((struct list_item$1bool*)come_null_check(it_53, "/usr/local/include/comelang2.h", 747))->item,(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value85;
                    __freed_obj__ = 0;
                    return __result81__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_53=((struct list_item$1bool*)come_null_check(it_53, "/usr/local/include/comelang2.h", 749))->next;
                __freed_obj__ = 0;
                i_54++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_55,0,sizeof(_Bool));
            __freed_obj__ = 0;
            __result82__ = __result_obj__ = (come_save_stackframe("/usr/local/include/comelang2.h", 755), ((struct optional$2boolbool*)(right_value88=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value87=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "/usr/local/include/comelang2.h", 755))),default_value_55,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value87;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value88;
            __freed_obj__ = 0;
            return __result82__;
            __freed_obj__ = 0;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2boolbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2boolbool*)come_null_check(self, "/usr/local/include/comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result80__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result80__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
_Bool default_value_56;
_Bool __result83__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_56, 0, sizeof(_Bool));
            if(_if_conditional52=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional52) {
                __freed_obj__ = 0;
                memset(&default_value_56,0,sizeof(_Bool));
                __freed_obj__ = 0;
                __result83__ = default_value_56;
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            else {
                __result84__ = ((struct optional$2boolbool*)come_null_check(self, "/usr/local/include/comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2list$1charphphbool* list$1list$1charphphp_operator_load_element(struct list$1list$1charphph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
struct list_item$1list$1charphph* it_58;
int i_59;
_Bool _while_condtional11;
_Bool _if_conditional55;
void* right_value90;
void* right_value91;
struct optional$2list$1charphphbool* __result86__;
struct list$1charph* default_value_60;
void* right_value92;
void* right_value93;
struct optional$2list$1charphphbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1list$1charphph*));
memset(&i_59, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&default_value_60, 0, sizeof(struct list$1charph*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
            if(_if_conditional54=position<0,            __freed_obj__ = 0, 
            _if_conditional54) {
                position+=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 740))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_58=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 743))->head;
            __freed_obj__ = 0;
            i_59=0;
            __freed_obj__ = 0;
            while(_while_condtional11=it_58!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional11) {
                if(_if_conditional55=position==i_59,                __freed_obj__ = 0, 
                _if_conditional55) {
                    __result86__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value91=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value90=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "/usr/local/include/comelang2.h", 747)))),(struct list$1charph*)come_increment_ref_count(((struct list_item$1list$1charphph*)come_null_check(it_58, "/usr/local/include/comelang2.h", 747))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = 0;
                    return __result86__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_58=((struct list_item$1list$1charphph*)come_null_check(it_58, "/usr/local/include/comelang2.h", 749))->next;
                __freed_obj__ = 0;
                i_59++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_60,0,sizeof(struct list$1charph*));
            __freed_obj__ = 0;
            __result87__ = __result_obj__ = (come_save_stackframe("/usr/local/include/comelang2.h", 755), ((struct optional$2list$1charphphbool*)(right_value93=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value92=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "/usr/local/include/comelang2.h", 755))),(struct list$1charph*)come_increment_ref_count(default_value_60),(_Bool)0))));
            if(default_value_60 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value92;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value93;
            __freed_obj__ = 0;
            return __result87__;
            __freed_obj__ = 0;
            if(default_value_60 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj15;
struct optional$2list$1charphphbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj15=((struct optional$2list$1charphphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1;
                        ((struct optional$2list$1charphphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1=(struct list$1charph*)come_increment_ref_count(v1);
                        if(__dec_obj15) { come_call_finalizer(list$1charph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2list$1charphphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result85__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional56=self!=((void*)0)&&((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional56) {
                                if(((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1charph* optional$2list$1charphphbool_value(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct list$1charph* default_value_61;
struct list$1charph* __result88__;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_61, 0, sizeof(struct list$1charph*));
            if(_if_conditional57=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                __freed_obj__ = 0;
                memset(&default_value_61,0,sizeof(struct list$1charph*));
                __freed_obj__ = 0;
                __result88__ = __result_obj__ = default_value_61;
                __freed_obj__ = 0;
                return __result88__;
                __freed_obj__ = 0;
            }
            else {
                __result89__ = __result_obj__ = ((struct optional$2list$1charphphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result89__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result90__ = ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 415))->len;
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct list_item$1charph* it_65;
int i_66;
_Bool _while_condtional12;
_Bool _if_conditional59;
void* right_value95;
void* right_value96;
struct optional$2charphbool* __result92__;
char* default_value_67;
void* right_value97;
void* right_value98;
struct optional$2charphbool* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_65, 0, sizeof(struct list_item$1charph*));
memset(&i_66, 0, sizeof(int));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&default_value_67, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
                if(_if_conditional58=position<0,                __freed_obj__ = 0, 
                _if_conditional58) {
                    position+=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_65=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_66=0;
                __freed_obj__ = 0;
                while(_while_condtional12=it_65!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional12) {
                    if(_if_conditional59=position==i_66,                    __freed_obj__ = 0, 
                    _if_conditional59) {
                        __result92__ = __result_obj__ = ((struct optional$2charphbool*)(right_value96=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value95=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "/usr/local/include/comelang2.h", 747)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_65, "/usr/local/include/comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value95;
                        __freed_obj__ = 0;
                        return __result92__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_65=((struct list_item$1charph*)come_null_check(it_65, "/usr/local/include/comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_66++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_67,0,sizeof(char*));
                __freed_obj__ = 0;
                __result93__ = __result_obj__ = (come_save_stackframe("/usr/local/include/comelang2.h", 755), ((struct optional$2charphbool*)(right_value98=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value97=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "/usr/local/include/comelang2.h", 755))),(char*)come_increment_ref_count(default_value_67),(_Bool)0))));
                if(default_value_67 && !__freed_obj__) { default_value_67 = come_decrement_ref_count(default_value_67, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value98;
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
                if(default_value_67 && !__freed_obj__) { default_value_67 = come_decrement_ref_count(default_value_67, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj16;
struct optional$2charphbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj16=((struct optional$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1;
                            ((struct optional$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct optional$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result91__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result91__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional60=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional60) {
                                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
char* default_value_68;
char* __result94__;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_68, 0, sizeof(char*));
                if(_if_conditional61=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional61) {
                    __freed_obj__ = 0;
                    memset(&default_value_68,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result94__ = __result_obj__ = default_value_68;
                    __freed_obj__ = 0;
                    return __result94__;
                    __freed_obj__ = 0;
                }
                else {
                    __result95__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "/usr/local/include/comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result95__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

_Bool run(char* source){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sInfo info_74;
_Bool _while_condtional13;
_Bool _while_condtional14;
void* right_value103;
void* right_value104;
struct list$1list$1charphph* __dec_obj17;
void* right_value105;
void* right_value106;
struct list$1bool* __dec_obj18;
void* right_value107;
void* right_value108;
struct list$1tuple2$2charphboolp* __dec_obj19;
void* right_value109;
void* right_value110;
struct list$1tuple2$2charphboolp* __dec_obj20;
_Bool _while_condtional18;
struct tuple2$2charphbool* __dec_obj21;
struct tuple2$2charphbool* __dec_obj22;
_Bool _if_conditional66;
_Bool __result101__;
_Bool _if_conditional74;
_Bool _if_conditional81;
_Bool _if_conditional82;
int pid_90;
_Bool _if_conditional83;
int status_91;
int options_92;
int pid2_93;
_Bool _if_conditional84;
struct __current_stack1__ __current_stack1__;
_Bool _if_conditional85;
void* right_value120;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _while_condtional19;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&info_74, 0, sizeof(struct sInfo));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&pid_90, 0, sizeof(int));
memset(&status_91, 0, sizeof(int));
memset(&options_92, 0, sizeof(int));
memset(&pid2_93, 0, sizeof(int));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value120, 0, sizeof(void*));
    __freed_obj__ = 0;
    info_74.p=source;
    __freed_obj__ = 0;
    while(_while_condtional13=*info_74.p,    __freed_obj__ = 0, 
    _while_condtional13) {
        while(_while_condtional14=*info_74.p==10||*info_74.p==59,        __freed_obj__ = 0, 
        _while_condtional14) {
            info_74.p++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj17=info_74.args_list;
        info_74.args_list=(struct list$1list$1charphph*)come_increment_ref_count(((struct list$1list$1charphph*)(right_value104=list$1list$1charphph_initialize((struct list$1list$1charphph*)come_increment_ref_count(((struct list$1list$1charphph*)(right_value103=(struct list$1list$1charphph*)come_calloc(1, sizeof(struct list$1list$1charphph)*(1), "main.c", 381))))))));
        if(__dec_obj17) { come_call_finalizer(list$1list$1charphph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1list$1charphphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1list$1charphphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104;
        __freed_obj__ = 0;
        __dec_obj18=info_74.args_mix_stdout;
        info_74.args_mix_stdout=(struct list$1bool*)come_increment_ref_count(((struct list$1bool*)(right_value106=list$1bool_initialize((struct list$1bool*)come_increment_ref_count(((struct list$1bool*)(right_value105=(struct list$1bool*)come_calloc(1, sizeof(struct list$1bool)*(1), "main.c", 382))))))));
        if(__dec_obj18) { come_call_finalizer(list$1bool_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1boolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value105;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1boolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value106;
        __freed_obj__ = 0;
        __dec_obj19=info_74.args_redirect_stdout;
        info_74.args_redirect_stdout=(struct list$1tuple2$2charphboolp*)come_increment_ref_count(((struct list$1tuple2$2charphboolp*)(right_value108=list$1tuple2$2charphboolp_initialize((struct list$1tuple2$2charphboolp*)come_increment_ref_count(((struct list$1tuple2$2charphboolp*)(right_value107=(struct list$1tuple2$2charphboolp*)come_calloc(1, sizeof(struct list$1tuple2$2charphboolp)*(1), "main.c", 383))))))));
        if(__dec_obj19) { come_call_finalizer(list$1tuple2$2charphboolp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value107;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value108;
        __freed_obj__ = 0;
        __dec_obj20=info_74.args_redirect_stderr;
        info_74.args_redirect_stderr=(struct list$1tuple2$2charphboolp*)come_increment_ref_count(((struct list$1tuple2$2charphboolp*)(right_value110=list$1tuple2$2charphboolp_initialize((struct list$1tuple2$2charphboolp*)come_increment_ref_count(((struct list$1tuple2$2charphboolp*)(right_value109=(struct list$1tuple2$2charphboolp*)come_calloc(1, sizeof(struct list$1tuple2$2charphboolp)*(1), "main.c", 384))))))));
        if(__dec_obj20) { come_call_finalizer(list$1tuple2$2charphboolp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value110;
        __freed_obj__ = 0;
        while(_while_condtional18=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional18) {
            info_74.mix_stdout=(_Bool)0;
            __freed_obj__ = 0;
            __dec_obj21=info_74.redirect_stdout;
            info_74.redirect_stdout=((void*)0);
            if(__dec_obj21) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj22=info_74.redirect_stderr;
            info_74.redirect_stderr=((void*)0);
            if(__dec_obj22) { come_call_finalizer(tuple2$2charphbool_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional66=!parse(&info_74),            __freed_obj__ = 0, 
            _if_conditional66) {
                __result101__ = (_Bool)0;
                if((&info_74) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_74), (void*)0, (void*)0, 1, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result101__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=list$1charph_length(((struct list$1charph*)come_null_check(info_74.args, "main.c", 399)))==0,            __freed_obj__ = 0, 
            _if_conditional74) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1list$1charphph_push_back(((struct list$1list$1charphph*)come_null_check(info_74.args_list, "main.c", 399)),(struct list$1charph*)come_increment_ref_count(info_74.args));
            __freed_obj__ = 0;
            list$1bool_push_back(((struct list$1bool*)come_null_check(info_74.args_mix_stdout, "main.c", 400)),info_74.mix_stdout);
            __freed_obj__ = 0;
            list$1tuple2$2charphboolp_push_back(((struct list$1tuple2$2charphboolp*)come_null_check(info_74.args_redirect_stdout, "main.c", 401)),info_74.redirect_stdout);
            __freed_obj__ = 0;
            list$1tuple2$2charphboolp_push_back(((struct list$1tuple2$2charphboolp*)come_null_check(info_74.args_redirect_stderr, "main.c", 402)),info_74.redirect_stderr);
            __freed_obj__ = 0;
            if(_if_conditional81=*info_74.p==124&&*(info_74.p+1)!=124,            __freed_obj__ = 0, 
            _if_conditional81) {
                info_74.p++;
                __freed_obj__ = 0;
                skip_spaces(&info_74);
                __freed_obj__ = 0;
            }
            else {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=list$1list$1charphph_length(((struct list$1list$1charphph*)come_null_check(info_74.args_list, "main.c", 417)))==0,        __freed_obj__ = 0, 
        _if_conditional82) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        pid_90=fork();
        __freed_obj__ = 0;
        if(_if_conditional83=pid_90==0,        __freed_obj__ = 0, 
        _if_conditional83) {
            run_command(0,&info_74);
            __freed_obj__ = 0;
        }
        else {
            status_91=0;
            __freed_obj__ = 0;
            options_92=2;
            __freed_obj__ = 0;
            pid2_93=waitpid(pid_90,&status_91,options_92);
            __freed_obj__ = 0;
            if(_if_conditional84=pid2_93<0,            __freed_obj__ = 0, 
            _if_conditional84) {
                perror("waitpid");
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __current_stack1__.status_91 = &status_91;
            __current_stack1__.options_92 = &options_92;
            __current_stack1__.pid2_93 = &pid2_93;
            __current_stack1__.pid_90 = &pid_90;
            __current_stack1__.source = &source;
            __current_stack1__.info_74 = &info_74;
            int_except(tcsetpgrp(0,getpgrp()),&__current_stack1__,(void*)method_block1_mainc);
                                    if(__current_stack1__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack1__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack1__.__method_block_result_kind__ == 3)
                        {
                            return (_Bool)__current_stack1__.__method_block_return_value__;
                        }
            __freed_obj__ = 0;
            info_74.rcode=(((status_91)&65280)>>8);
            __freed_obj__ = 0;
            if(_if_conditional85=info_74.rcode==127,            __freed_obj__ = 0, 
            _if_conditional85) {
                come_clear_stackframe();
                fprintf(stderr,"command not found (%s)\n",optional$2charphbool_value((come_push_stackframe("main.c", 440),((struct optional$2charphbool*)(right_value120=list$1charphp_operator_load_element(info_74.args,0))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=*info_74.p==124&&*(info_74.p+1)==124,        __freed_obj__ = 0, 
        _if_conditional86) {
            info_74.p+=2;
            __freed_obj__ = 0;
            if(_if_conditional87=info_74.rcode==0,            __freed_obj__ = 0, 
            _if_conditional87) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional88=*info_74.p==38&&*(info_74.p+1)==38,            __freed_obj__ = 0, 
            _if_conditional88) {
                info_74.p+=2;
                __freed_obj__ = 0;
                if(_if_conditional89=info_74.rcode!=0,                __freed_obj__ = 0, 
                _if_conditional89) {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        while(_while_condtional19=*info_74.p==10||*info_74.p==59,        __freed_obj__ = 0, 
        _while_condtional19) {
            info_74.p++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result105__ = (_Bool)1;
    if((&info_74) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_74), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if((&info_74) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_74), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1list$1charphph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 155))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 156))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 157))->len=0;
            __freed_obj__ = 0;
            __result98__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1list$1charphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result98__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1list$1charphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1list$1charphph* it_75;
_Bool _while_condtional15;
struct list_item$1list$1charphph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_75, 0, sizeof(struct list_item$1list$1charphph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1list$1charphph*));
                it_75=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 174))->head;
                __freed_obj__ = 0;
                while(_while_condtional15=it_75!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional15) {
                    prev_it_76=it_75;
                    __freed_obj__ = 0;
                    it_75=((struct list_item$1list$1charphph*)come_null_check(it_75, "/usr/local/include/comelang2.h", 177))->next;
                    __freed_obj__ = 0;
                    if(prev_it_76 && !__freed_obj__) { come_call_finalizer(list_item$1list$1charphphp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional65=self!=((void*)0)&&((struct list_item$1list$1charphph*)come_null_check(self, "list_item$1list$1charphphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional65) {
                            if(((struct list_item$1list$1charphph*)come_null_check(self, "list_item$1list$1charphphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct list_item$1list$1charphph*)come_null_check(self, "list_item$1list$1charphphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1list$1charphph_finalize(struct list$1list$1charphph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1bool* list$1bool_initialize(struct list$1bool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1bool* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 155))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 156))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 157))->len=0;
            __freed_obj__ = 0;
            __result99__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1boolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result99__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1boolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1boolp_finalize(struct list$1bool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1bool* it_77;
_Bool _while_condtional16;
struct list_item$1bool* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_77, 0, sizeof(struct list_item$1bool*));
memset(&prev_it_78, 0, sizeof(struct list_item$1bool*));
                it_77=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 174))->head;
                __freed_obj__ = 0;
                while(_while_condtional16=it_77!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional16) {
                    prev_it_78=it_77;
                    __freed_obj__ = 0;
                    it_77=((struct list_item$1bool*)come_null_check(it_77, "/usr/local/include/comelang2.h", 177))->next;
                    __freed_obj__ = 0;
                    if(prev_it_78 && !__freed_obj__) { come_call_finalizer(list_item$1boolp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1boolp_finalize(struct list_item$1bool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1bool_finalize(struct list$1bool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1tuple2$2charphboolp* list$1tuple2$2charphboolp_initialize(struct list$1tuple2$2charphboolp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphboolp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 155))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 156))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 157))->len=0;
            __freed_obj__ = 0;
            __result100__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result100__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphboolpp_finalize(struct list$1tuple2$2charphboolp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphboolp* it_79;
_Bool _while_condtional17;
struct list_item$1tuple2$2charphboolp* prev_it_80;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_79, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
memset(&prev_it_80, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
                it_79=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 174))->head;
                __freed_obj__ = 0;
                while(_while_condtional17=it_79!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional17) {
                    prev_it_80=it_79;
                    __freed_obj__ = 0;
                    it_79=((struct list_item$1tuple2$2charphboolp*)come_null_check(it_79, "/usr/local/include/comelang2.h", 177))->next;
                    __freed_obj__ = 0;
                    if(prev_it_80 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphboolpp_finalize,prev_it_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphboolpp_finalize(struct list_item$1tuple2$2charphboolp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1tuple2$2charphboolp_finalize(struct list$1tuple2$2charphboolp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sInfo_finalize(struct sInfo* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional67=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->args!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional67) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->args && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->args, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional68=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->args_list!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional68) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->args_list && !__freed_obj__) { come_call_finalizer(list$1list$1charphphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->args_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional69=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->args_mix_stdout!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional69) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->args_mix_stdout && !__freed_obj__) { come_call_finalizer(list$1boolp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->args_mix_stdout, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional70=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->args_redirect_stdout!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional70) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->args_redirect_stdout && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->args_redirect_stdout, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional71=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->args_redirect_stderr!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional71) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->args_redirect_stderr && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphboolpp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->args_redirect_stderr, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional72=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->redirect_stdout!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional72) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->redirect_stdout && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->redirect_stdout, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional73=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->redirect_stderr!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional73) {
                        if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->redirect_stderr && !__freed_obj__) { come_call_finalizer(tuple2$2charphboolp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->redirect_stderr, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1list$1charphph* list$1list$1charphph_push_back(struct list$1list$1charphph* self, struct list$1charph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
void* right_value111;
struct list_item$1list$1charphph* litem_81;
struct list$1charph* __dec_obj23;
_Bool _if_conditional76;
void* right_value112;
struct list_item$1list$1charphph* litem_82;
struct list$1charph* __dec_obj24;
void* right_value113;
struct list_item$1list$1charphph* litem_83;
struct list$1charph* __dec_obj25;
struct list$1list$1charphph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1list$1charphph*));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1list$1charphph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1list$1charphph*));
                if(_if_conditional75=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional75) {
                    litem_81=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(right_value111=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1list$1charphphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    ((struct list_item$1list$1charphph*)come_null_check(litem_81, "/usr/local/include/comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1list$1charphph*)come_null_check(litem_81, "/usr/local/include/comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj23=((struct list_item$1list$1charphph*)come_null_check(litem_81, "/usr/local/include/comelang2.h", 281))->item;
                    ((struct list_item$1list$1charphph*)come_null_check(litem_81, "/usr/local/include/comelang2.h", 281))->item=(struct list$1charph*)come_increment_ref_count(item);
                    if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 283))->tail=litem_81;
                    __freed_obj__ = 0;
                    ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 284))->head=litem_81;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional76=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional76) {
                        litem_82=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(right_value112=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1list$1charphphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value112;
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_82, "/usr/local/include/comelang2.h", 289))->prev=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_82, "/usr/local/include/comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj24=((struct list_item$1list$1charphph*)come_null_check(litem_82, "/usr/local/include/comelang2.h", 291))->item;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_82, "/usr/local/include/comelang2.h", 291))->item=(struct list$1charph*)come_increment_ref_count(item);
                        if(__dec_obj24) { come_call_finalizer(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 293))->tail=litem_82;
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 294))->head, "/usr/local/include/comelang2.h", 294))->next=litem_82;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_83=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(right_value113=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "/usr/local/include/comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1list$1charphphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value113;
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_83, "/usr/local/include/comelang2.h", 299))->prev=((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_83, "/usr/local/include/comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj25=((struct list_item$1list$1charphph*)come_null_check(litem_83, "/usr/local/include/comelang2.h", 301))->item;
                        ((struct list_item$1list$1charphph*)come_null_check(litem_83, "/usr/local/include/comelang2.h", 301))->item=(struct list$1charph*)come_increment_ref_count(item);
                        if(__dec_obj25) { come_call_finalizer(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1list$1charphph*)come_null_check(((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 303))->tail, "/usr/local/include/comelang2.h", 303))->next=litem_83;
                        __freed_obj__ = 0;
                        ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 304))->tail=litem_83;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1list$1charphph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result102__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1bool* list$1bool_push_back(struct list$1bool* self, _Bool item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
void* right_value114;
struct list_item$1bool* litem_84;
_Bool _if_conditional78;
void* right_value115;
struct list_item$1bool* litem_85;
void* right_value116;
struct list_item$1bool* litem_86;
struct list$1bool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1bool*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1bool*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1bool*));
                if(_if_conditional77=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional77) {
                    litem_84=(struct list_item$1bool*)come_increment_ref_count(((struct list_item$1bool*)(right_value114=(struct list_item$1bool*)come_calloc(1, sizeof(struct list_item$1bool)*(1), "/usr/local/include/comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1boolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                    ((struct list_item$1bool*)come_null_check(litem_84, "/usr/local/include/comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1bool*)come_null_check(litem_84, "/usr/local/include/comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1bool*)come_null_check(litem_84, "/usr/local/include/comelang2.h", 281))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 283))->tail=litem_84;
                    __freed_obj__ = 0;
                    ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 284))->head=litem_84;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional78=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional78) {
                        litem_85=(struct list_item$1bool*)come_increment_ref_count(((struct list_item$1bool*)(right_value115=(struct list_item$1bool*)come_calloc(1, sizeof(struct list_item$1bool)*(1), "/usr/local/include/comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1boolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value115;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_85, "/usr/local/include/comelang2.h", 289))->prev=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_85, "/usr/local/include/comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_85, "/usr/local/include/comelang2.h", 291))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 293))->tail=litem_85;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 294))->head, "/usr/local/include/comelang2.h", 294))->next=litem_85;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_86=(struct list_item$1bool*)come_increment_ref_count(((struct list_item$1bool*)(right_value116=(struct list_item$1bool*)come_calloc(1, sizeof(struct list_item$1bool)*(1), "/usr/local/include/comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1boolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value116;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_86, "/usr/local/include/comelang2.h", 299))->prev=((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_86, "/usr/local/include/comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(litem_86, "/usr/local/include/comelang2.h", 301))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1bool*)come_null_check(((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 303))->tail, "/usr/local/include/comelang2.h", 303))->next=litem_86;
                        __freed_obj__ = 0;
                        ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 304))->tail=litem_86;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1bool*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result103__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphboolp* list$1tuple2$2charphboolp_push_back(struct list$1tuple2$2charphboolp* self, struct tuple2$2charphbool* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
void* right_value117;
struct list_item$1tuple2$2charphboolp* litem_87;
_Bool _if_conditional80;
void* right_value118;
struct list_item$1tuple2$2charphboolp* litem_88;
void* right_value119;
struct list_item$1tuple2$2charphboolp* litem_89;
struct list$1tuple2$2charphboolp* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
memset(&right_value118, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
memset(&right_value119, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1tuple2$2charphboolp*));
                if(_if_conditional79=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional79) {
                    litem_87=(struct list_item$1tuple2$2charphboolp*)come_increment_ref_count(((struct list_item$1tuple2$2charphboolp*)(right_value117=(struct list_item$1tuple2$2charphboolp*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphboolp)*(1), "/usr/local/include/comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphboolpp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value117;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_87, "/usr/local/include/comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_87, "/usr/local/include/comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_87, "/usr/local/include/comelang2.h", 281))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 283))->tail=litem_87;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 284))->head=litem_87;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional80=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional80) {
                        litem_88=(struct list_item$1tuple2$2charphboolp*)come_increment_ref_count(((struct list_item$1tuple2$2charphboolp*)(right_value118=(struct list_item$1tuple2$2charphboolp*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphboolp)*(1), "/usr/local/include/comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphboolpp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_88, "/usr/local/include/comelang2.h", 289))->prev=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_88, "/usr/local/include/comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_88, "/usr/local/include/comelang2.h", 291))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 293))->tail=litem_88;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 294))->head, "/usr/local/include/comelang2.h", 294))->next=litem_88;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_89=(struct list_item$1tuple2$2charphboolp*)come_increment_ref_count(((struct list_item$1tuple2$2charphboolp*)(right_value119=(struct list_item$1tuple2$2charphboolp*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphboolp)*(1), "/usr/local/include/comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphboolpp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value119;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_89, "/usr/local/include/comelang2.h", 299))->prev=((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_89, "/usr/local/include/comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(litem_89, "/usr/local/include/comelang2.h", 301))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphboolp*)come_null_check(((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 303))->tail, "/usr/local/include/comelang2.h", 303))->next=litem_89;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 304))->tail=litem_89;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphboolp*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result104__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
}

void method_block1_mainc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                perror("tcsetpgrp");
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
}

void sigchld_action(int signum, struct anonymous_typeX21* info, void* ctx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void sig_tstp(int signum){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void sig_int(int signal){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    rl_reset_line_state();
    __freed_obj__ = 0;
    rl_replace_line("",0);
    __freed_obj__ = 0;
    rl_point=0;
    __freed_obj__ = 0;
    puts("");
    __freed_obj__ = 0;
    rl_redisplay();
    __freed_obj__ = 0;
}

void set_signal(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sigaction sa_94;
struct __current_stack2__ __current_stack2__;
struct __current_stack3__ __current_stack3__;
struct __current_stack4__ __current_stack4__;
struct __current_stack5__ __current_stack5__;
struct __current_stack6__ __current_stack6__;
struct __current_stack7__ __current_stack7__;
struct __current_stack8__ __current_stack8__;
struct __current_stack9__ __current_stack9__;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sa_94, 0, sizeof(struct sigaction));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
memset(&__current_stack5__, 0, sizeof(struct __current_stack5__));
memset(&__current_stack6__, 0, sizeof(struct __current_stack6__));
memset(&__current_stack7__, 0, sizeof(struct __current_stack7__));
memset(&__current_stack8__, 0, sizeof(struct __current_stack8__));
memset(&__current_stack9__, 0, sizeof(struct __current_stack9__));
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_sigaction=sigchld_action;
    __freed_obj__ = 0;
    sa_94.sa_flags=268435456|4;
    __freed_obj__ = 0;
    __current_stack2__.sa_94 = &sa_94;
    int_except(sigaction(17,&sa_94,((void*)0)),&__current_stack2__,(void*)method_block2_mainc);
                        if(__current_stack2__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    __current_stack3__.sa_94 = &sa_94;
    int_except(sigaction(18,&sa_94,((void*)0)),&__current_stack3__,(void*)method_block3_mainc);
                        if(__current_stack3__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=((void (*)(int))0);
    __freed_obj__ = 0;
    __current_stack4__.sa_94 = &sa_94;
    int_except(sigaction(28,&sa_94,((void*)0)),&__current_stack4__,(void*)method_block4_mainc);
                        if(__current_stack4__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_94.sa_flags=0;
    __freed_obj__ = 0;
    __current_stack5__.sa_94 = &sa_94;
    int_except(sigaction(22,&sa_94,((void*)0)),&__current_stack5__,(void*)method_block5_mainc);
                        if(__current_stack5__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_94.sa_flags=0;
    __freed_obj__ = 0;
    __current_stack6__.sa_94 = &sa_94;
    int_except(sigaction(21,&sa_94,((void*)0)),&__current_stack6__,(void*)method_block6_mainc);
                        if(__current_stack6__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=sig_tstp;
    __freed_obj__ = 0;
    sa_94.sa_flags=0;
    __freed_obj__ = 0;
    __current_stack7__.sa_94 = &sa_94;
    int_except(sigaction(20,&sa_94,((void*)0)),&__current_stack7__,(void*)method_block7_mainc);
                        if(__current_stack7__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_94.sa_flags=0;
    __freed_obj__ = 0;
    __current_stack8__.sa_94 = &sa_94;
    int_except(sigaction(3,&sa_94,((void*)0)),&__current_stack8__,(void*)method_block8_mainc);
                        if(__current_stack8__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_94.sa_flags=0;
    __freed_obj__ = 0;
    __current_stack9__.sa_94 = &sa_94;
    int_except(sigaction(13,&sa_94,((void*)0)),&__current_stack9__,(void*)method_block9_mainc);
                        if(__current_stack9__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = 0;
    memset(&sa_94,0,sizeof(sa_94));
    __freed_obj__ = 0;
    sa_94.sa_flags=4;
    __freed_obj__ = 0;
    sa_94.__sigaction_handler.sa_handler=(void (*)(int))sig_int;
    __freed_obj__ = 0;
    if(_if_conditional90=sigaction(2,&sa_94,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional90) {
        perror("sigaction2");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if((&sa_94) && !__freed_obj__) { come_call_finalizer(sigaction_finalize,(&sa_94), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void method_block2_mainc(struct __current_stack2__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction1");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block3_mainc(struct __current_stack3__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction3");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block4_mainc(struct __current_stack4__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction4");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block5_mainc(struct __current_stack5__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction5");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block6_mainc(struct __current_stack6__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction6");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block7_mainc(struct __current_stack7__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction7");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block8_mainc(struct __current_stack8__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction8");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

void method_block9_mainc(struct __current_stack9__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        perror("sigaction10");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
}

static void sigaction_finalize(struct sigaction* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void sigchld_block(int block){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct anonymous_typeX8 sigset_95;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sigset_95, 0, sizeof(struct anonymous_typeX8));
    __freed_obj__ = 0;
    sigemptyset(&sigset_95);
    __freed_obj__ = 0;
    sigaddset(&sigset_95,17);
    __freed_obj__ = 0;
    if(_if_conditional91=sigprocmask((block?0:1),&sigset_95,((void*)0))!=0,    __freed_obj__ = 0, 
    _if_conditional91) {
        fprintf(stderr,"error\n");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if((&sigset_95) && !__freed_obj__) { come_call_finalizer(sigset_t_finalize,(&sigset_95), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void sigset_t_finalize(struct anonymous_typeX8* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void sig_int_optc(int signum){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    sigchld_block(1);
    __freed_obj__ = 0;
    sigchld_block(0);
    __freed_obj__ = 0;
}

void sig_tstp_optc(int signum, struct anonymous_typeX21* info, void* ctx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    sigchld_block(1);
    __freed_obj__ = 0;
    killpg(0,19);
    __freed_obj__ = 0;
    sigchld_block(0);
    __freed_obj__ = 0;
}

void sig_cont_optc(int signum, struct anonymous_typeX21* info, void* ctx){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    sigchld_block(1);
    __freed_obj__ = 0;
    sigchld_block(0);
    __freed_obj__ = 0;
}

void set_signal_optc(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sigaction sa_96;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sa_96, 0, sizeof(struct sigaction));
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_sigaction=sigchld_action;
    __freed_obj__ = 0;
    sa_96.sa_flags=4|268435456;
    __freed_obj__ = 0;
    if(_if_conditional92=sigaction(17,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional92) {
        perror("sigaction1");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.sa_flags=4;
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=sig_int_optc;
    __freed_obj__ = 0;
    if(_if_conditional93=sigaction(2,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional93) {
        perror("sigaction2");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_sigaction=sig_tstp_optc;
    __freed_obj__ = 0;
    sa_96.sa_flags=268435456;
    __freed_obj__ = 0;
    if(_if_conditional94=sigaction(20,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional94) {
        perror("sigaction7");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_sigaction=sig_cont_optc;
    __freed_obj__ = 0;
    sa_96.sa_flags=268435456;
    __freed_obj__ = 0;
    if(_if_conditional95=sigaction(18,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional95) {
        perror("sigaction3");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=((void (*)(int))0);
    __freed_obj__ = 0;
    if(_if_conditional96=sigaction(28,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional96) {
        perror("sigaction4");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_96.sa_flags=0;
    __freed_obj__ = 0;
    if(_if_conditional97=sigaction(22,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional97) {
        perror("sigaction5");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_96.sa_flags=0;
    __freed_obj__ = 0;
    if(_if_conditional98=sigaction(21,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional98) {
        perror("sigaction6");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_96.sa_flags=0;
    __freed_obj__ = 0;
    if(_if_conditional99=sigaction(3,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional99) {
        perror("sigaction8");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    memset(&sa_96,0,sizeof(sa_96));
    __freed_obj__ = 0;
    sa_96.__sigaction_handler.sa_handler=((void (*)(int))1);
    __freed_obj__ = 0;
    sa_96.sa_flags=0;
    __freed_obj__ = 0;
    if(_if_conditional100=sigaction(13,&sa_96,((void*)0))<0,    __freed_obj__ = 0, 
    _if_conditional100) {
        perror("sigaction10");
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if((&sa_96) && !__freed_obj__) { come_call_finalizer(sigaction_finalize,(&sa_96), (void*)0, (void*)0, 1, 0, 0, 0); }
}

char* line_buffer_from_head_to_cursor_point(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* result_97;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&result_97, 0, sizeof(char*));
    result_97=(char*)come_increment_ref_count(((char*)(right_value121=(char*)come_calloc(1, sizeof(char)*(1*(strlen(rl_line_buffer)+1)), "main.c", 667))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    memcpy(result_97,rl_line_buffer,rl_point);
    __freed_obj__ = 0;
    result_97[rl_point]=0;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = result_97;
    if(result_97 && !__freed_obj__) { result_97 = come_decrement_ref_count(result_97, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(result_97 && !__freed_obj__) { result_97 = come_decrement_ref_count(result_97, (void*)0, (void*)0, 0, 0, 0); }
}

void get_command_completion_cadidates(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* env_98;
struct stat stat__101;
char* p_102;
int len_103;
int i_104;
_Bool _for_condtionalA5;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct __dirstream* dir_105;
_Bool _if_conditional104;
_Bool _while_condtional20;
struct dirent* entry_106;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value122;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&env_98, 0, sizeof(char*));
memset(&stat__101, 0, sizeof(struct stat));
memset(&p_102, 0, sizeof(char*));
memset(&len_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
memset(&dir_105, 0, sizeof(struct __dirstream*));
memset(&entry_106, 0, sizeof(struct dirent*));
memset(&right_value122, 0, sizeof(void*));
    env_98=getenv("PATH");
    __freed_obj__ = 0;
    char path_99[4096];
    memset(&path_99, 0, sizeof(char)    *(4096)    );
    __freed_obj__ = 0;
    char path2_100[4096];
    memset(&path2_100, 0, sizeof(char)    *(4096)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    p_102=path_99;
    __freed_obj__ = 0;
    len_103=strlen(env_98);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_104=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    i_104<len_103 ,    __freed_obj__ = 0, 
    _for_condtionalA5;    i_104++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional101=env_98[i_104]==58,        __freed_obj__ = 0, 
        _if_conditional101) {
            *p_102=0;
            __freed_obj__ = 0;
            if(_if_conditional102=access(path_99,0)==0,            __freed_obj__ = 0, 
            _if_conditional102) {
                if(_if_conditional103=stat(path_99,&stat__101)==0&&((((stat__101.st_mode))&61440)==(16384)),                __freed_obj__ = 0, 
                _if_conditional103) {
                    dir_105=opendir(path_99);
                    __freed_obj__ = 0;
                    if(_if_conditional104=dir_105,                    __freed_obj__ = 0, 
                    _if_conditional104) {
                        while(_while_condtional20=1,                        __freed_obj__ = 0, 
                        _while_condtional20) {
                            entry_106=readdir(dir_105);
                            __freed_obj__ = 0;
                            if(_if_conditional105=entry_106==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional105) {
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional106=strcmp(((struct dirent*)come_null_check(entry_106, "main.c", 725))->d_name,".")!=0&&strcmp(((struct dirent*)come_null_check(entry_106, "main.c", 725))->d_name,"..")!=0,                            __freed_obj__ = 0, 
                            _if_conditional106) {
                                strncpy(path2_100,path_99,4096);
                                __freed_obj__ = 0;
                                if(_if_conditional107=path_99[strlen(path_99)-1]!=47,                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    strncat(path2_100,"/",4096);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                strncat(path2_100,((struct dirent*)come_null_check(entry_106, "main.c", 713))->d_name,4096);
                                __freed_obj__ = 0;
                                if(_if_conditional108=stat(path2_100,&stat__101)==0,                                __freed_obj__ = 0, 
                                _if_conditional108) {
                                    if(_if_conditional109=stat__101.st_mode&64,                                    __freed_obj__ = 0, 
                                    _if_conditional109) {
                                        if(_if_conditional110=memcmp(((struct dirent*)come_null_check(entry_106, "main.c", 722))->d_name,gInputingText,strlen(gInputingText))==0,                                        __freed_obj__ = 0, 
                                        _if_conditional110) {
                                            list$1charph_push_back(((struct list$1charph*)come_null_check(gMatches, "main.c", 720)),(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(((struct dirent*)come_null_check(entry_106, "main.c", 720))->d_name)))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value122;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        closedir(dir_105);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            p_102=path_99;
            __freed_obj__ = 0;
        }
        else {
            *p_102=env_98[i_104];
            __freed_obj__ = 0;
            p_102++;
            __freed_obj__ = 0;
            if(_if_conditional111=p_102-(char*)path_99>=4096,            __freed_obj__ = 0, 
            _if_conditional111) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if((&stat__101) && !__freed_obj__) { come_call_finalizer(stat_finalize,(&stat__101), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void stat_finalize(struct stat* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* completion_generator(const char* text, int state){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
void* right_value123;
void* right_value124;
struct list$1charph* __dec_obj26;
_Bool _if_conditional113;
void* right_value125;
char* __result107__;
char* __result108__;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    if(_if_conditional112=state==0,    __freed_obj__ = 0, 
    _if_conditional112) {
        __dec_obj26=gMatches;
        gMatches=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 748))))))));
        if(__dec_obj26) { come_call_finalizer(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value124;
        __freed_obj__ = 0;
        gMatchIndex=0;
        __freed_obj__ = 0;
        get_command_completion_cadidates();
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rl_completion_append_character=32;
    __freed_obj__ = 0;
    if(_if_conditional113=gMatchIndex<list$1charph_length(((struct list$1charph*)come_null_check(gMatches, "main.c", 762))),    __freed_obj__ = 0, 
    _if_conditional113) {
        come_clear_stackframe();
        __result107__ = __result_obj__ = strdup(optional$2charphbool_value((come_push_stackframe("main.c", 756),((struct optional$2charphbool*)(right_value125=list$1charphp_operator_load_element(gMatches,gMatchIndex++))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
    }
    else {
        __result108__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char** completer(const char* text, int start, int end){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* current_line_107;
char* p_108;
void* right_value127;
void* right_value128;
struct buffer* buf_109;
_Bool _while_condtional21;
_Bool _while_condtional22;
_Bool _while_condtional23;
_Bool _while_condtional24;
_Bool _while_condtional25;
_Bool _while_condtional26;
_Bool _while_condtional27;
_Bool _if_conditional114;
void* right_value129;
void* right_value130;
struct buffer* __dec_obj27;
void* right_value131;
char* __dec_obj28;
_Bool _if_conditional115;
char** __result110__;
char** __result111__;
char** __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&current_line_107, 0, sizeof(char*));
memset(&p_108, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&buf_109, 0, sizeof(struct buffer*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    gCommand=(_Bool)1;
    __freed_obj__ = 0;
    current_line_107=(char*)come_increment_ref_count(((char*)(right_value126=line_buffer_from_head_to_cursor_point())));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    p_108=current_line_107;
    __freed_obj__ = 0;
    buf_109=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value128=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value127=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 773))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value127;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value128;
    __freed_obj__ = 0;
    while(_while_condtional21=*p_108,    __freed_obj__ = 0, 
    _while_condtional21) {
        while(_while_condtional22=*p_108==32,        __freed_obj__ = 0, 
        _while_condtional22) {
            gCommand=(_Bool)1;
            __freed_obj__ = 0;
            p_108++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        while(_while_condtional23=xisascii(*p_108)&&*p_108!=32,        __freed_obj__ = 0, 
        _while_condtional23) {
            gCommand=(_Bool)1;
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_109, "main.c", 783)),*p_108);
            __freed_obj__ = 0;
            p_108++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        while(_while_condtional24=*p_108==32,        __freed_obj__ = 0, 
        _while_condtional24) {
            gCommand=(_Bool)0;
            __freed_obj__ = 0;
            p_108++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        while(_while_condtional25=*p_108,        __freed_obj__ = 0, 
        _while_condtional25) {
            while(_while_condtional26=xisascii(*p_108)&&*p_108!=32,            __freed_obj__ = 0, 
            _while_condtional26) {
                gCommand=(_Bool)0;
                __freed_obj__ = 0;
                p_108++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            while(_while_condtional27=*p_108==32,            __freed_obj__ = 0, 
            _while_condtional27) {
                gCommand=(_Bool)0;
                __freed_obj__ = 0;
                p_108++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional114=*p_108==124,            __freed_obj__ = 0, 
            _if_conditional114) {
                gCommand=(_Bool)1;
                __freed_obj__ = 0;
                __dec_obj27=buf_109;
                buf_109=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 806))))))));
                if(__dec_obj27) { come_call_finalizer(buffer_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value130;
                __freed_obj__ = 0;
                p_108++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj28=gInputingText;
    gInputingText=(char*)come_increment_ref_count(((char*)(right_value131=buffer_to_string(((struct buffer*)come_null_check(buf_109, "main.c", 813))))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value131;
    __freed_obj__ = 0;
    if(_if_conditional115=!gCommand,    __freed_obj__ = 0, 
    _if_conditional115) {
        rl_attempted_completion_over=0;
        __freed_obj__ = 0;
        rl_completion_append_character=32;
        __freed_obj__ = 0;
        rl_completer_word_break_characters=" ";
        __freed_obj__ = 0;
        __result110__ = __result_obj__ = ((void*)0);
        if(current_line_107 && !__freed_obj__) { current_line_107 = come_decrement_ref_count(current_line_107, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_109 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
    }
    else {
        rl_attempted_completion_over=1;
        __freed_obj__ = 0;
        rl_completer_word_break_characters=" ";
        __freed_obj__ = 0;
        __result111__ = __result_obj__ = rl_completion_matches(text,completion_generator);
        if(current_line_107 && !__freed_obj__) { current_line_107 = come_decrement_ref_count(current_line_107, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_109 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result112__ = __result_obj__ = ((void*)0);
    if(current_line_107 && !__freed_obj__) { current_line_107 = come_decrement_ref_count(current_line_107, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_109 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(current_line_107 && !__freed_obj__) { current_line_107 = come_decrement_ref_count(current_line_107, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_109 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void readline_insert_text(char* cmdline, int cursor_point){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int n_110;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&n_110, 0, sizeof(int));
    rl_replace_line(cmdline,0);
    __freed_obj__ = 0;
    n_110=cursor_point;
    __freed_obj__ = 0;
    if(_if_conditional116=n_110<0,    __freed_obj__ = 0, 
    _if_conditional116) {
        n_110+=strlen(rl_line_buffer)+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional117=n_110<0,    __freed_obj__ = 0, 
    _if_conditional117) {
        n_110=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional118=n_110>strlen(rl_line_buffer),    __freed_obj__ = 0, 
    _if_conditional118) {
        n_110=strlen(rl_line_buffer);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rl_point=n_110;
    __freed_obj__ = 0;
}

int readline_init_text(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    readline_insert_text(gCmdlineInitString,gCmdlineInitCursorPoint);
    __freed_obj__ = 0;
    gCmdlineInitString="";
    __freed_obj__ = 0;
    gCmdlineInitCursorPoint=0;
    __freed_obj__ = 0;
}

int main(int argc, char** argv){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool command_111;
char* file_name_112;
_Bool run_once_113;
int i_114;
_Bool _for_condtionalA6;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value132;
char* __dec_obj29;
void* right_value133;
struct _IO_FILE* f_116;
_Bool _if_conditional123;
void* right_value134;
char* command_str_117;
struct __current_stack10__ __current_stack10__;
_Bool _if_conditional124;
rl_completer_quote_characters="\"'";
_Bool _while_condtional28;
void* right_value135;
char* line_118;
_Bool _if_conditional125;
struct __current_stack11__ __current_stack11__;
_Bool _if_conditional126;
char* command_str_119;
_Bool _if_conditional127;
char* __dec_obj30;
void* right_value136;
void* right_value137;
char* __dec_obj31;
struct __current_stack12__ __current_stack12__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&command_111, 0, sizeof(_Bool));
memset(&file_name_112, 0, sizeof(char*));
memset(&run_once_113, 0, sizeof(_Bool));
memset(&i_114, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&f_116, 0, sizeof(struct _IO_FILE*));
memset(&right_value134, 0, sizeof(void*));
memset(&command_str_117, 0, sizeof(char*));
memset(&__current_stack10__, 0, sizeof(struct __current_stack10__));
memset(&right_value135, 0, sizeof(void*));
memset(&line_118, 0, sizeof(char*));
memset(&__current_stack11__, 0, sizeof(struct __current_stack11__));
memset(&command_str_119, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&__current_stack12__, 0, sizeof(struct __current_stack12__));
come_heap_init(0, 0);
    setlocale(6,"");
    __freed_obj__ = 0;
    command_111=(_Bool)0;
    __freed_obj__ = 0;
    file_name_112=((void*)0);
    __freed_obj__ = 0;
    run_once_113=(_Bool)0;
    __freed_obj__ = 0;
    for(
    i_114=1 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    i_114<argc ,    __freed_obj__ = 0, 
    _for_condtionalA6;    i_114++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional119=charp_operator_equals(argv[i_114],"-c"),        __freed_obj__ = 0, 
        _if_conditional119) {
            command_111=(_Bool)1;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional120=i_114+1<argc&&charp_operator_equals(argv[i_114],"-i"),            __freed_obj__ = 0, 
            _if_conditional120) {
                gCmdlineInitString=argv[i_114+1];
                __freed_obj__ = 0;
                gCmdlineInitCursorPoint=-1;
                __freed_obj__ = 0;
                i_114++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional121=charp_operator_equals(argv[i_114],"-o"),                __freed_obj__ = 0, 
                _if_conditional121) {
                    run_once_113=(_Bool)1;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional122=i_114+1<argc&&charp_operator_equals(argv[i_114],"-n"),                    __freed_obj__ = 0, 
                    _if_conditional122) {
                        gCmdlineInitCursorPoint=atoi(argv[i_114+1]);
                        __freed_obj__ = 0;
                        i_114++;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj29=file_name_112;
                        file_name_112=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(argv[i_114]))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value132;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    char cwd_115[4096];
    memset(&cwd_115, 0, sizeof(char)    *(4096)    );
    __freed_obj__ = 0;
    getcwd(cwd_115,4096);
    __freed_obj__ = 0;
    setenv("PWD",cwd_115,1);
    __freed_obj__ = 0;
    f_116=fopen(((char*)(right_value133=charp_operator_add(getenv("HOME"),"/.shshrc"))),"r");
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    if(_if_conditional123=f_116,    __freed_obj__ = 0, 
    _if_conditional123) {
        come_clear_stackframe();
        command_str_117=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("main.c", 889),((struct optional$2charphbool*)(right_value134=FILE_read(((struct _IO_FILE*)come_null_check(f_116, "main.c", 889))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134;
        __freed_obj__ = 0;
        __current_stack10__.command_str_117 = &command_str_117;
        __current_stack10__.argc = &argc;
        __current_stack10__.argv = &argv;
        __current_stack10__.command_111 = &command_111;
        __current_stack10__.file_name_112 = &file_name_112;
        __current_stack10__.run_once_113 = &run_once_113;
        __current_stack10__.cwd_115 = &cwd_115;
        __current_stack10__.f_116 = &f_116;
        bool_except(run(command_str_117),&__current_stack10__,(void*)method_block10_mainc);
                            if(__current_stack10__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack10__.__method_block_return_value__;
                    }
        __freed_obj__ = 0;
        fclose(f_116);
        __freed_obj__ = 0;
        if(command_str_117 && !__freed_obj__) { command_str_117 = come_decrement_ref_count(command_str_117, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional124=file_name_112==((void*)0),    __freed_obj__ = 0, 
    _if_conditional124) {
        set_signal();
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        rl_completer_word_break_characters=" \t.>";
        __freed_obj__ = 0;
        rl_attempted_completion_function=completer;
        __freed_obj__ = 0;
        rl_startup_hook=readline_init_text;
        __freed_obj__ = 0;
        while(_while_condtional28=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional28) {
            line_118=readline(((char*)(right_value135=charp_operator_add(getenv("PWD")," > "))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value135;
            __freed_obj__ = 0;
            if(_if_conditional125=line_118==((void*)0)||charp_operator_equals(line_118,"exit"),            __freed_obj__ = 0, 
            _if_conditional125) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __current_stack11__.line_118 = &line_118;
            __current_stack11__.argc = &argc;
            __current_stack11__.argv = &argv;
            __current_stack11__.command_111 = &command_111;
            __current_stack11__.file_name_112 = &file_name_112;
            __current_stack11__.run_once_113 = &run_once_113;
            __current_stack11__.cwd_115 = &cwd_115;
            __current_stack11__.f_116 = &f_116;
            bool_except(run(line_118),&__current_stack11__,(void*)method_block11_mainc);
                                    if(__current_stack11__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack11__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack11__.__method_block_result_kind__ == 3)
                        {
                            return (int)__current_stack11__.__method_block_return_value__;
                        }
            __freed_obj__ = 0;
            add_history(line_118);
            __freed_obj__ = 0;
            free(line_118);
            __freed_obj__ = 0;
            if(_if_conditional126=run_once_113,            __freed_obj__ = 0, 
            _if_conditional126) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        command_str_119=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional127=command_111,        __freed_obj__ = 0, 
        _if_conditional127) {
            __dec_obj30=command_str_119;
            command_str_119=(char*)come_increment_ref_count(file_name_112);
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            __dec_obj31=command_str_119;
            command_str_119=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("main.c", 935),((struct optional$2charphbool*)(right_value137=string_read(((char*)come_null_check(((char*)(right_value136=__builtin_string(come_null_check(file_name_112, "main.c", 935)))), "main.c", 935))))))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value136;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value137;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        set_signal_optc();
        __freed_obj__ = 0;
        __current_stack12__.command_str_119 = &command_str_119;
        __current_stack12__.argc = &argc;
        __current_stack12__.argv = &argv;
        __current_stack12__.command_111 = &command_111;
        __current_stack12__.file_name_112 = &file_name_112;
        __current_stack12__.run_once_113 = &run_once_113;
        __current_stack12__.cwd_115 = &cwd_115;
        __current_stack12__.f_116 = &f_116;
        bool_except(run(come_null_check(command_str_119, "main.c", 944)),&__current_stack12__,(void*)method_block12_mainc);
                            if(__current_stack12__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack12__.__method_block_return_value__;
                    }
        __freed_obj__ = 0;
        if(command_str_119 && !__freed_obj__) { command_str_119 = come_decrement_ref_count(command_str_119, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result113__ = 0;
    if(file_name_112 && !__freed_obj__) { file_name_112 = come_decrement_ref_count(file_name_112, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(gMatches && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,gMatches, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(gInputingText && !__freed_obj__) { gInputingText = come_decrement_ref_count(gInputingText, (void*)0, (void*)0, 0, 0, 0); }
    come_heap_final();
    return __result113__;
    __freed_obj__ = 0;
    if(file_name_112 && !__freed_obj__) { file_name_112 = come_decrement_ref_count(file_name_112, (void*)0, (void*)0, 0, 0, 0); }
if(gMatches && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,gMatches, (void*)0, (void*)0, 0, 0, 0, 0); }
if(gInputingText && !__freed_obj__) { gInputingText = come_decrement_ref_count(gInputingText, (void*)0, (void*)0, 0, 0, 0); }
come_heap_final();
}

void method_block10_mainc(struct __current_stack10__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            fprintf(stderr,"error\n");
            __freed_obj__ = 0;
            exit(1);
            __freed_obj__ = 0;
}

void method_block11_mainc(struct __current_stack11__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                fprintf(stderr,"error\n");
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
}

void method_block12_mainc(struct __current_stack12__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            fprintf(stderr,"error\n");
            __freed_obj__ = 0;
            exit(1);
            __freed_obj__ = 0;
}

