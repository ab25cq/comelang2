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
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
typedef unsigned int chtype;
typedef unsigned int mmask_t;
typedef long int ptrdiff_t;
struct anonymous_typeX21
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct anonymous_typeX21 max_align_t;
typedef unsigned char NCURSES_BOOL;
extern unsigned int* acs_map;
typedef struct screen SCREEN;
typedef struct _win_st WINDOW;
typedef unsigned int attr_t;
struct anonymous_typeX22
{
    unsigned int attr;
    unsigned int chars[5];
    int ext_color;
};
typedef struct anonymous_typeX22 cchar_t;
struct ldat;
struct pdat
{
};
struct _win_st
{
    short short _cury;
    short short _curx;
    short short _maxy;
    short short _maxx;
    short short _begy;
    short short _begx;
    short short _flags;
    unsigned int _attrs;
    unsigned int _bkgd;
    _Bool _notimeout;
    _Bool _clear;
    _Bool _leaveok;
    _Bool _scroll;
    _Bool _idlok;
    _Bool _idcok;
    _Bool _immed;
    _Bool _sync;
    _Bool _use_keypad;
    int _delay;
    struct ldat* _line;
    short short _regtop;
    short short _regbottom;
    int _parx;
    int _pary;
    struct _win_st* _parent;
    struct pdat _pad;
    short short _yoffset;
    struct anonymous_typeX22 _bkgrnd;
    int _color;
};
typedef int (*NCURSES_OUTC)(int);
typedef int (*NCURSES_WINDOW_CB)(struct _win_st*,void*);
typedef int (*NCURSES_SCREEN_CB)(struct screen*,void*);
typedef int (*NCURSES_OUTC_sp)(struct screen*,int);
extern struct _win_st* curscr;
extern struct _win_st* newscr;
extern struct _win_st* stdscr;
extern char* ttytype;
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
extern struct anonymous_typeX22* _nc_wacs;
struct anonymous_typeX23
{
    short short id;
    int x;
    int y;
    int z;
    unsigned int bstate;
};
typedef struct anonymous_typeX23 MEVENT;
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
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX24
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX24 __kernel_fd_set;
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
struct anonymous_typeX25
{
    int val[2];
};
typedef struct anonymous_typeX25 __kernel_fsid_t;
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
struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};
struct termio
{
    unsigned short int c_iflag;
    unsigned short int c_oflag;
    unsigned short int c_cflag;
    unsigned short int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
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
struct sInfo
{
    int cursor;
    int page;
    char* path;
    _Bool app_end;
    struct list$1charph* files;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo** info;
    int* maxx_46;
    int* maxy_47;
    int* files_in_one_page_48;
    int* head_49;
    int* tail_50;
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

int addch(const unsigned int anonymous_var_nameX478);

int addchnstr(const unsigned int* anonymous_var_nameX479, int anonymous_var_nameX480);

int addchstr(const unsigned int* anonymous_var_nameX481);

int addnstr(const char* anonymous_var_nameX482, int anonymous_var_nameX483);

int addstr(const char* anonymous_var_nameX484);

int attroff(int anonymous_var_nameX485);

int attron(int anonymous_var_nameX486);

int attrset(int anonymous_var_nameX487);

int attr_get(unsigned int* anonymous_var_nameX488, short short* anonymous_var_nameX489, void* anonymous_var_nameX490);

int attr_off(unsigned int anonymous_var_nameX491, void* anonymous_var_nameX492);

int attr_on(unsigned int anonymous_var_nameX493, void* anonymous_var_nameX494);

int attr_set(unsigned int anonymous_var_nameX495, short short anonymous_var_nameX496, void* anonymous_var_nameX497);

int baudrate();

int beep();

int bkgd(unsigned int anonymous_var_nameX498);

void bkgdset(unsigned int anonymous_var_nameX499);

int border(unsigned int anonymous_var_nameX500, unsigned int anonymous_var_nameX501, unsigned int anonymous_var_nameX502, unsigned int anonymous_var_nameX503, unsigned int anonymous_var_nameX504, unsigned int anonymous_var_nameX505, unsigned int anonymous_var_nameX506, unsigned int anonymous_var_nameX507);

int box(struct _win_st* anonymous_var_nameX508, unsigned int anonymous_var_nameX509, unsigned int anonymous_var_nameX510);

_Bool can_change_color();

int cbreak();

int chgat(int anonymous_var_nameX511, unsigned int anonymous_var_nameX512, short short anonymous_var_nameX513, const void* anonymous_var_nameX514);

int clear();

int clearok(struct _win_st* anonymous_var_nameX515, _Bool anonymous_var_nameX516);

int clrtobot();

int clrtoeol();

int color_content(short short anonymous_var_nameX517, short short* anonymous_var_nameX518, short short* anonymous_var_nameX519, short short* anonymous_var_nameX520);

int color_set(short short anonymous_var_nameX521, void* anonymous_var_nameX522);

int COLOR_PAIR(int anonymous_var_nameX523);

int copywin(const struct _win_st* anonymous_var_nameX524, struct _win_st* anonymous_var_nameX525, int anonymous_var_nameX526, int anonymous_var_nameX527, int anonymous_var_nameX528, int anonymous_var_nameX529, int anonymous_var_nameX530, int anonymous_var_nameX531, int anonymous_var_nameX532);

int curs_set(int anonymous_var_nameX533);

int def_prog_mode();

int def_shell_mode();

int delay_output(int anonymous_var_nameX534);

int delch();

void delscreen(struct screen* anonymous_var_nameX535);

int delwin(struct _win_st* anonymous_var_nameX536);

int deleteln();

struct _win_st* derwin(struct _win_st* anonymous_var_nameX537, int anonymous_var_nameX538, int anonymous_var_nameX539, int anonymous_var_nameX540, int anonymous_var_nameX541);

int doupdate();

struct _win_st* dupwin(struct _win_st* anonymous_var_nameX542);

int echo();

int echochar(const unsigned int anonymous_var_nameX543);

int erase();

int endwin();

char erasechar();

void filter();

int flash();

int flushinp();

unsigned int getbkgd(struct _win_st* anonymous_var_nameX544);

int getch();

int getnstr(char* anonymous_var_nameX545, int anonymous_var_nameX546);

int getstr(char* anonymous_var_nameX547);

struct _win_st* getwin(struct _IO_FILE* anonymous_var_nameX548);

int halfdelay(int anonymous_var_nameX549);

_Bool has_colors();

_Bool has_ic();

_Bool has_il();

int hline(unsigned int anonymous_var_nameX550, int anonymous_var_nameX551);

void idcok(struct _win_st* anonymous_var_nameX552, _Bool anonymous_var_nameX553);

int idlok(struct _win_st* anonymous_var_nameX554, _Bool anonymous_var_nameX555);

void immedok(struct _win_st* anonymous_var_nameX556, _Bool anonymous_var_nameX557);

unsigned int inch();

int inchnstr(unsigned int* anonymous_var_nameX558, int anonymous_var_nameX559);

int inchstr(unsigned int* anonymous_var_nameX560);

struct _win_st* initscr();

int init_color(short short anonymous_var_nameX561, short short anonymous_var_nameX562, short short anonymous_var_nameX563, short short anonymous_var_nameX564);

int init_pair(short short anonymous_var_nameX565, short short anonymous_var_nameX566, short short anonymous_var_nameX567);

int innstr(char* anonymous_var_nameX568, int anonymous_var_nameX569);

int insch(unsigned int anonymous_var_nameX570);

int insdelln(int anonymous_var_nameX571);

int insertln();

int insnstr(const char* anonymous_var_nameX572, int anonymous_var_nameX573);

int insstr(const char* anonymous_var_nameX574);

int instr(char* anonymous_var_nameX575);

int intrflush(struct _win_st* anonymous_var_nameX576, _Bool anonymous_var_nameX577);

_Bool isendwin();

_Bool is_linetouched(struct _win_st* anonymous_var_nameX578, int anonymous_var_nameX579);

_Bool is_wintouched(struct _win_st* anonymous_var_nameX580);

const char* keyname(int anonymous_var_nameX581);

int keypad(struct _win_st* anonymous_var_nameX582, _Bool anonymous_var_nameX583);

char killchar();

int leaveok(struct _win_st* anonymous_var_nameX584, _Bool anonymous_var_nameX585);

char* longname();

int meta(struct _win_st* anonymous_var_nameX586, _Bool anonymous_var_nameX587);

int move(int anonymous_var_nameX588, int anonymous_var_nameX589);

int mvaddch(int anonymous_var_nameX590, int anonymous_var_nameX591, const unsigned int anonymous_var_nameX592);

int mvaddchnstr(int anonymous_var_nameX593, int anonymous_var_nameX594, const unsigned int* anonymous_var_nameX595, int anonymous_var_nameX596);

int mvaddchstr(int anonymous_var_nameX597, int anonymous_var_nameX598, const unsigned int* anonymous_var_nameX599);

int mvaddnstr(int anonymous_var_nameX600, int anonymous_var_nameX601, const char* anonymous_var_nameX602, int anonymous_var_nameX603);

int mvaddstr(int anonymous_var_nameX604, int anonymous_var_nameX605, const char* anonymous_var_nameX606);

int mvchgat(int anonymous_var_nameX607, int anonymous_var_nameX608, int anonymous_var_nameX609, unsigned int anonymous_var_nameX610, short short anonymous_var_nameX611, const void* anonymous_var_nameX612);

int mvcur(int anonymous_var_nameX613, int anonymous_var_nameX614, int anonymous_var_nameX615, int anonymous_var_nameX616);

int mvdelch(int anonymous_var_nameX617, int anonymous_var_nameX618);

int mvderwin(struct _win_st* anonymous_var_nameX619, int anonymous_var_nameX620, int anonymous_var_nameX621);

int mvgetch(int anonymous_var_nameX622, int anonymous_var_nameX623);

int mvgetnstr(int anonymous_var_nameX624, int anonymous_var_nameX625, char* anonymous_var_nameX626, int anonymous_var_nameX627);

int mvgetstr(int anonymous_var_nameX628, int anonymous_var_nameX629, char* anonymous_var_nameX630);

int mvhline(int anonymous_var_nameX631, int anonymous_var_nameX632, unsigned int anonymous_var_nameX633, int anonymous_var_nameX634);

unsigned int mvinch(int anonymous_var_nameX635, int anonymous_var_nameX636);

int mvinchnstr(int anonymous_var_nameX637, int anonymous_var_nameX638, unsigned int* anonymous_var_nameX639, int anonymous_var_nameX640);

int mvinchstr(int anonymous_var_nameX641, int anonymous_var_nameX642, unsigned int* anonymous_var_nameX643);

int mvinnstr(int anonymous_var_nameX644, int anonymous_var_nameX645, char* anonymous_var_nameX646, int anonymous_var_nameX647);

int mvinsch(int anonymous_var_nameX648, int anonymous_var_nameX649, unsigned int anonymous_var_nameX650);

int mvinsnstr(int anonymous_var_nameX651, int anonymous_var_nameX652, const char* anonymous_var_nameX653, int anonymous_var_nameX654);

int mvinsstr(int anonymous_var_nameX655, int anonymous_var_nameX656, const char* anonymous_var_nameX657);

int mvinstr(int anonymous_var_nameX658, int anonymous_var_nameX659, char* anonymous_var_nameX660);

int mvprintw(int anonymous_var_nameX661, int anonymous_var_nameX662, const char* anonymous_var_nameX663, ...);

int mvscanw(int anonymous_var_nameX664, int anonymous_var_nameX665, const char* anonymous_var_nameX666, ...);

int mvvline(int anonymous_var_nameX667, int anonymous_var_nameX668, unsigned int anonymous_var_nameX669, int anonymous_var_nameX670);

int mvwaddch(struct _win_st* anonymous_var_nameX671, int anonymous_var_nameX672, int anonymous_var_nameX673, const unsigned int anonymous_var_nameX674);

int mvwaddchnstr(struct _win_st* anonymous_var_nameX675, int anonymous_var_nameX676, int anonymous_var_nameX677, const unsigned int* anonymous_var_nameX678, int anonymous_var_nameX679);

int mvwaddchstr(struct _win_st* anonymous_var_nameX680, int anonymous_var_nameX681, int anonymous_var_nameX682, const unsigned int* anonymous_var_nameX683);

int mvwaddnstr(struct _win_st* anonymous_var_nameX684, int anonymous_var_nameX685, int anonymous_var_nameX686, const char* anonymous_var_nameX687, int anonymous_var_nameX688);

int mvwaddstr(struct _win_st* anonymous_var_nameX689, int anonymous_var_nameX690, int anonymous_var_nameX691, const char* anonymous_var_nameX692);

int mvwchgat(struct _win_st* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, int anonymous_var_nameX696, unsigned int anonymous_var_nameX697, short short anonymous_var_nameX698, const void* anonymous_var_nameX699);

int mvwdelch(struct _win_st* anonymous_var_nameX700, int anonymous_var_nameX701, int anonymous_var_nameX702);

int mvwgetch(struct _win_st* anonymous_var_nameX703, int anonymous_var_nameX704, int anonymous_var_nameX705);

int mvwgetnstr(struct _win_st* anonymous_var_nameX706, int anonymous_var_nameX707, int anonymous_var_nameX708, char* anonymous_var_nameX709, int anonymous_var_nameX710);

int mvwgetstr(struct _win_st* anonymous_var_nameX711, int anonymous_var_nameX712, int anonymous_var_nameX713, char* anonymous_var_nameX714);

int mvwhline(struct _win_st* anonymous_var_nameX715, int anonymous_var_nameX716, int anonymous_var_nameX717, unsigned int anonymous_var_nameX718, int anonymous_var_nameX719);

int mvwin(struct _win_st* anonymous_var_nameX720, int anonymous_var_nameX721, int anonymous_var_nameX722);

unsigned int mvwinch(struct _win_st* anonymous_var_nameX723, int anonymous_var_nameX724, int anonymous_var_nameX725);

int mvwinchnstr(struct _win_st* anonymous_var_nameX726, int anonymous_var_nameX727, int anonymous_var_nameX728, unsigned int* anonymous_var_nameX729, int anonymous_var_nameX730);

int mvwinchstr(struct _win_st* anonymous_var_nameX731, int anonymous_var_nameX732, int anonymous_var_nameX733, unsigned int* anonymous_var_nameX734);

int mvwinnstr(struct _win_st* anonymous_var_nameX735, int anonymous_var_nameX736, int anonymous_var_nameX737, char* anonymous_var_nameX738, int anonymous_var_nameX739);

int mvwinsch(struct _win_st* anonymous_var_nameX740, int anonymous_var_nameX741, int anonymous_var_nameX742, unsigned int anonymous_var_nameX743);

int mvwinsnstr(struct _win_st* anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, const char* anonymous_var_nameX747, int anonymous_var_nameX748);

int mvwinsstr(struct _win_st* anonymous_var_nameX749, int anonymous_var_nameX750, int anonymous_var_nameX751, const char* anonymous_var_nameX752);

int mvwinstr(struct _win_st* anonymous_var_nameX753, int anonymous_var_nameX754, int anonymous_var_nameX755, char* anonymous_var_nameX756);

int mvwprintw(struct _win_st* anonymous_var_nameX757, int anonymous_var_nameX758, int anonymous_var_nameX759, const char* anonymous_var_nameX760, ...);

int mvwscanw(struct _win_st* anonymous_var_nameX761, int anonymous_var_nameX762, int anonymous_var_nameX763, const char* anonymous_var_nameX764, ...);

int mvwvline(struct _win_st* anonymous_var_nameX765, int anonymous_var_nameX766, int anonymous_var_nameX767, unsigned int anonymous_var_nameX768, int anonymous_var_nameX769);

int napms(int anonymous_var_nameX770);

struct _win_st* newpad(int anonymous_var_nameX771, int anonymous_var_nameX772);

struct screen* newterm(const char* anonymous_var_nameX773, struct _IO_FILE* anonymous_var_nameX774, struct _IO_FILE* anonymous_var_nameX775);

struct _win_st* newwin(int anonymous_var_nameX776, int anonymous_var_nameX777, int anonymous_var_nameX778, int anonymous_var_nameX779);

int nl();

int nocbreak();

int nodelay(struct _win_st* anonymous_var_nameX780, _Bool anonymous_var_nameX781);

int noecho();

int nonl();

void noqiflush();

int noraw();

int notimeout(struct _win_st* anonymous_var_nameX782, _Bool anonymous_var_nameX783);

int overlay(const struct _win_st* anonymous_var_nameX784, struct _win_st* anonymous_var_nameX785);

int overwrite(const struct _win_st* anonymous_var_nameX786, struct _win_st* anonymous_var_nameX787);

int pair_content(short short anonymous_var_nameX788, short short* anonymous_var_nameX789, short short* anonymous_var_nameX790);

int PAIR_NUMBER(int anonymous_var_nameX791);

int pechochar(struct _win_st* anonymous_var_nameX792, const unsigned int anonymous_var_nameX793);

int pnoutrefresh(struct _win_st* anonymous_var_nameX794, int anonymous_var_nameX795, int anonymous_var_nameX796, int anonymous_var_nameX797, int anonymous_var_nameX798, int anonymous_var_nameX799, int anonymous_var_nameX800);

int prefresh(struct _win_st* anonymous_var_nameX801, int anonymous_var_nameX802, int anonymous_var_nameX803, int anonymous_var_nameX804, int anonymous_var_nameX805, int anonymous_var_nameX806, int anonymous_var_nameX807);

int printw(const char* anonymous_var_nameX808, ...);

int putwin(struct _win_st* anonymous_var_nameX809, struct _IO_FILE* anonymous_var_nameX810);

void qiflush();

int raw();

int redrawwin(struct _win_st* anonymous_var_nameX811);

int refresh();

int resetty();

int reset_prog_mode();

int reset_shell_mode();

int ripoffline(int anonymous_var_nameX812, int (*anonymous_lambda_var_nameZ1)(struct _win_st*,int));

int savetty();

int scanw(const char* anonymous_var_nameX815, ...);

int scr_dump(const char* anonymous_var_nameX816);

int scr_init(const char* anonymous_var_nameX817);

int scrl(int anonymous_var_nameX818);

int scroll(struct _win_st* anonymous_var_nameX819);

int scrollok(struct _win_st* anonymous_var_nameX820, _Bool anonymous_var_nameX821);

int scr_restore(const char* anonymous_var_nameX822);

int scr_set(const char* anonymous_var_nameX823);

int setscrreg(int anonymous_var_nameX824, int anonymous_var_nameX825);

struct screen* set_term(struct screen* anonymous_var_nameX826);

int slk_attroff(const unsigned int anonymous_var_nameX827);

int slk_attr_off(const unsigned int anonymous_var_nameX828, void* anonymous_var_nameX829);

int slk_attron(const unsigned int anonymous_var_nameX830);

int slk_attr_on(unsigned int anonymous_var_nameX831, void* anonymous_var_nameX832);

int slk_attrset(const unsigned int anonymous_var_nameX833);

unsigned int slk_attr();

int slk_attr_set(const unsigned int anonymous_var_nameX834, short short anonymous_var_nameX835, void* anonymous_var_nameX836);

int slk_clear();

int slk_color(short short anonymous_var_nameX837);

int slk_init(int anonymous_var_nameX838);

char* slk_label(int anonymous_var_nameX839);

int slk_noutrefresh();

int slk_refresh();

int slk_restore();

int slk_set(int anonymous_var_nameX840, const char* anonymous_var_nameX841, int anonymous_var_nameX842);

int slk_touch();

int standout();

int standend();

int start_color();

struct _win_st* subpad(struct _win_st* anonymous_var_nameX843, int anonymous_var_nameX844, int anonymous_var_nameX845, int anonymous_var_nameX846, int anonymous_var_nameX847);

struct _win_st* subwin(struct _win_st* anonymous_var_nameX848, int anonymous_var_nameX849, int anonymous_var_nameX850, int anonymous_var_nameX851, int anonymous_var_nameX852);

int syncok(struct _win_st* anonymous_var_nameX853, _Bool anonymous_var_nameX854);

unsigned int termattrs();

char* termname();

void timeout(int anonymous_var_nameX855);

int touchline(struct _win_st* anonymous_var_nameX856, int anonymous_var_nameX857, int anonymous_var_nameX858);

int touchwin(struct _win_st* anonymous_var_nameX859);

int typeahead(int anonymous_var_nameX860);

int ungetch(int anonymous_var_nameX861);

int untouchwin(struct _win_st* anonymous_var_nameX862);

void use_env(_Bool anonymous_var_nameX863);

void use_tioctl(_Bool anonymous_var_nameX864);

int vidattr(unsigned int anonymous_var_nameX865);

int vidputs(unsigned int anonymous_var_nameX866, int (*anonymous_var_nameX867)(int));

int vline(unsigned int anonymous_var_nameX868, int anonymous_var_nameX869);

int vwprintw(struct _win_st* anonymous_var_nameX870, const char* anonymous_var_nameX871, va_list anonymous_var_nameX872);

int vw_printw(struct _win_st* anonymous_var_nameX873, const char* anonymous_var_nameX874, va_list anonymous_var_nameX875);

int vwscanw(struct _win_st* anonymous_var_nameX876, const char* anonymous_var_nameX877, va_list anonymous_var_nameX878);

int vw_scanw(struct _win_st* anonymous_var_nameX879, const char* anonymous_var_nameX880, va_list anonymous_var_nameX881);

int waddch(struct _win_st* anonymous_var_nameX882, const unsigned int anonymous_var_nameX883);

int waddchnstr(struct _win_st* anonymous_var_nameX884, const unsigned int* anonymous_var_nameX885, int anonymous_var_nameX886);

int waddchstr(struct _win_st* anonymous_var_nameX887, const unsigned int* anonymous_var_nameX888);

int waddnstr(struct _win_st* anonymous_var_nameX889, const char* anonymous_var_nameX890, int anonymous_var_nameX891);

int waddstr(struct _win_st* anonymous_var_nameX892, const char* anonymous_var_nameX893);

int wattron(struct _win_st* anonymous_var_nameX894, int anonymous_var_nameX895);

int wattroff(struct _win_st* anonymous_var_nameX896, int anonymous_var_nameX897);

int wattrset(struct _win_st* anonymous_var_nameX898, int anonymous_var_nameX899);

int wattr_get(struct _win_st* anonymous_var_nameX900, unsigned int* anonymous_var_nameX901, short short* anonymous_var_nameX902, void* anonymous_var_nameX903);

int wattr_on(struct _win_st* anonymous_var_nameX904, unsigned int anonymous_var_nameX905, void* anonymous_var_nameX906);

int wattr_off(struct _win_st* anonymous_var_nameX907, unsigned int anonymous_var_nameX908, void* anonymous_var_nameX909);

int wattr_set(struct _win_st* anonymous_var_nameX910, unsigned int anonymous_var_nameX911, short short anonymous_var_nameX912, void* anonymous_var_nameX913);

int wbkgd(struct _win_st* anonymous_var_nameX914, unsigned int anonymous_var_nameX915);

void wbkgdset(struct _win_st* anonymous_var_nameX916, unsigned int anonymous_var_nameX917);

int wborder(struct _win_st* anonymous_var_nameX918, unsigned int anonymous_var_nameX919, unsigned int anonymous_var_nameX920, unsigned int anonymous_var_nameX921, unsigned int anonymous_var_nameX922, unsigned int anonymous_var_nameX923, unsigned int anonymous_var_nameX924, unsigned int anonymous_var_nameX925, unsigned int anonymous_var_nameX926);

int wchgat(struct _win_st* anonymous_var_nameX927, int anonymous_var_nameX928, unsigned int anonymous_var_nameX929, short short anonymous_var_nameX930, const void* anonymous_var_nameX931);

int wclear(struct _win_st* anonymous_var_nameX932);

int wclrtobot(struct _win_st* anonymous_var_nameX933);

int wclrtoeol(struct _win_st* anonymous_var_nameX934);

int wcolor_set(struct _win_st* anonymous_var_nameX935, short short anonymous_var_nameX936, void* anonymous_var_nameX937);

void wcursyncup(struct _win_st* anonymous_var_nameX938);

int wdelch(struct _win_st* anonymous_var_nameX939);

int wdeleteln(struct _win_st* anonymous_var_nameX940);

int wechochar(struct _win_st* anonymous_var_nameX941, const unsigned int anonymous_var_nameX942);

int werase(struct _win_st* anonymous_var_nameX943);

int wgetch(struct _win_st* anonymous_var_nameX944);

int wgetnstr(struct _win_st* anonymous_var_nameX945, char* anonymous_var_nameX946, int anonymous_var_nameX947);

int wgetstr(struct _win_st* anonymous_var_nameX948, char* anonymous_var_nameX949);

int whline(struct _win_st* anonymous_var_nameX950, unsigned int anonymous_var_nameX951, int anonymous_var_nameX952);

unsigned int winch(struct _win_st* anonymous_var_nameX953);

int winchnstr(struct _win_st* anonymous_var_nameX954, unsigned int* anonymous_var_nameX955, int anonymous_var_nameX956);

int winchstr(struct _win_st* anonymous_var_nameX957, unsigned int* anonymous_var_nameX958);

int winnstr(struct _win_st* anonymous_var_nameX959, char* anonymous_var_nameX960, int anonymous_var_nameX961);

int winsch(struct _win_st* anonymous_var_nameX962, unsigned int anonymous_var_nameX963);

int winsdelln(struct _win_st* anonymous_var_nameX964, int anonymous_var_nameX965);

int winsertln(struct _win_st* anonymous_var_nameX966);

int winsnstr(struct _win_st* anonymous_var_nameX967, const char* anonymous_var_nameX968, int anonymous_var_nameX969);

int winsstr(struct _win_st* anonymous_var_nameX970, const char* anonymous_var_nameX971);

int winstr(struct _win_st* anonymous_var_nameX972, char* anonymous_var_nameX973);

int wmove(struct _win_st* anonymous_var_nameX974, int anonymous_var_nameX975, int anonymous_var_nameX976);

int wnoutrefresh(struct _win_st* anonymous_var_nameX977);

int wprintw(struct _win_st* anonymous_var_nameX978, const char* anonymous_var_nameX979, ...);

int wredrawln(struct _win_st* anonymous_var_nameX980, int anonymous_var_nameX981, int anonymous_var_nameX982);

int wrefresh(struct _win_st* anonymous_var_nameX983);

int wscanw(struct _win_st* anonymous_var_nameX984, const char* anonymous_var_nameX985, ...);

int wscrl(struct _win_st* anonymous_var_nameX986, int anonymous_var_nameX987);

int wsetscrreg(struct _win_st* anonymous_var_nameX988, int anonymous_var_nameX989, int anonymous_var_nameX990);

int wstandout(struct _win_st* anonymous_var_nameX991);

int wstandend(struct _win_st* anonymous_var_nameX992);

void wsyncdown(struct _win_st* anonymous_var_nameX993);

void wsyncup(struct _win_st* anonymous_var_nameX994);

void wtimeout(struct _win_st* anonymous_var_nameX995, int anonymous_var_nameX996);

int wtouchln(struct _win_st* anonymous_var_nameX997, int anonymous_var_nameX998, int anonymous_var_nameX999, int anonymous_var_nameX1000);

int wvline(struct _win_st* anonymous_var_nameX1001, unsigned int anonymous_var_nameX1002, int anonymous_var_nameX1003);

int tigetflag(const char* anonymous_var_nameX1004);

int tigetnum(const char* anonymous_var_nameX1005);

char* tigetstr(const char* anonymous_var_nameX1006);

int putp(const char* anonymous_var_nameX1007);

char* tparm(const char* anonymous_var_nameX1008, ...);

char* tiparm(const char* anonymous_var_nameX1009, ...);

int getattrs(const struct _win_st* anonymous_var_nameX1010);

int getcurx(const struct _win_st* anonymous_var_nameX1011);

int getcury(const struct _win_st* anonymous_var_nameX1012);

int getbegx(const struct _win_st* anonymous_var_nameX1013);

int getbegy(const struct _win_st* anonymous_var_nameX1014);

int getmaxx(const struct _win_st* anonymous_var_nameX1015);

int getmaxy(const struct _win_st* anonymous_var_nameX1016);

int getparx(const struct _win_st* anonymous_var_nameX1017);

int getpary(const struct _win_st* anonymous_var_nameX1018);

_Bool is_term_resized(int anonymous_var_nameX1023, int anonymous_var_nameX1024);

char* keybound(int anonymous_var_nameX1025, int anonymous_var_nameX1026);

const char* curses_version();

int alloc_pair(int anonymous_var_nameX1027, int anonymous_var_nameX1028);

int assume_default_colors(int anonymous_var_nameX1029, int anonymous_var_nameX1030);

int define_key(const char* anonymous_var_nameX1031, int anonymous_var_nameX1032);

int extended_color_content(int anonymous_var_nameX1033, int* anonymous_var_nameX1034, int* anonymous_var_nameX1035, int* anonymous_var_nameX1036);

int extended_pair_content(int anonymous_var_nameX1037, int* anonymous_var_nameX1038, int* anonymous_var_nameX1039);

int extended_slk_color(int anonymous_var_nameX1040);

int find_pair(int anonymous_var_nameX1041, int anonymous_var_nameX1042);

int free_pair(int anonymous_var_nameX1043);

int get_escdelay();

int init_extended_color(int anonymous_var_nameX1044, int anonymous_var_nameX1045, int anonymous_var_nameX1046, int anonymous_var_nameX1047);

int init_extended_pair(int anonymous_var_nameX1048, int anonymous_var_nameX1049, int anonymous_var_nameX1050);

int key_defined(const char* anonymous_var_nameX1051);

int keyok(int anonymous_var_nameX1052, _Bool anonymous_var_nameX1053);

void reset_color_pairs();

int resize_term(int anonymous_var_nameX1054, int anonymous_var_nameX1055);

int resizeterm(int anonymous_var_nameX1056, int anonymous_var_nameX1057);

int set_escdelay(int anonymous_var_nameX1058);

int set_tabsize(int anonymous_var_nameX1059);

int use_default_colors();

int use_extended_names(_Bool anonymous_var_nameX1060);

int use_legacy_coding(int anonymous_var_nameX1061);

int use_screen(struct screen* anonymous_var_nameX1062, int (*anonymous_var_nameX1063)(struct screen*,void*), void* anonymous_var_nameX1064);

int use_window(struct _win_st* anonymous_var_nameX1065, int (*anonymous_var_nameX1066)(struct _win_st*,void*), void* anonymous_var_nameX1067);

int wresize(struct _win_st* anonymous_var_nameX1068, int anonymous_var_nameX1069, int anonymous_var_nameX1070);

void nofilter();

struct _win_st* wgetparent(const struct _win_st* anonymous_var_nameX1071);

_Bool is_cleared(const struct _win_st* anonymous_var_nameX1072);

_Bool is_idcok(const struct _win_st* anonymous_var_nameX1073);

_Bool is_idlok(const struct _win_st* anonymous_var_nameX1074);

_Bool is_immedok(const struct _win_st* anonymous_var_nameX1075);

_Bool is_keypad(const struct _win_st* anonymous_var_nameX1076);

_Bool is_leaveok(const struct _win_st* anonymous_var_nameX1077);

_Bool is_nodelay(const struct _win_st* anonymous_var_nameX1078);

_Bool is_notimeout(const struct _win_st* anonymous_var_nameX1079);

_Bool is_pad(const struct _win_st* anonymous_var_nameX1080);

_Bool is_scrollok(const struct _win_st* anonymous_var_nameX1081);

_Bool is_subwin(const struct _win_st* anonymous_var_nameX1082);

_Bool is_syncok(const struct _win_st* anonymous_var_nameX1083);

int wgetdelay(const struct _win_st* anonymous_var_nameX1084);

int wgetscrreg(const struct _win_st* anonymous_var_nameX1085, int* anonymous_var_nameX1086, int* anonymous_var_nameX1087);

struct screen* new_prescr();

int baudrate_sp(struct screen* anonymous_var_nameX1090);

int beep_sp(struct screen* anonymous_var_nameX1091);

_Bool can_change_color_sp(struct screen* anonymous_var_nameX1092);

int cbreak_sp(struct screen* anonymous_var_nameX1093);

int curs_set_sp(struct screen* anonymous_var_nameX1094, int anonymous_var_nameX1095);

int color_content_sp(struct screen* anonymous_var_nameX1096, short short anonymous_var_nameX1097, short short* anonymous_var_nameX1098, short short* anonymous_var_nameX1099, short short* anonymous_var_nameX1100);

int def_prog_mode_sp(struct screen* anonymous_var_nameX1101);

int def_shell_mode_sp(struct screen* anonymous_var_nameX1102);

int delay_output_sp(struct screen* anonymous_var_nameX1103, int anonymous_var_nameX1104);

int doupdate_sp(struct screen* anonymous_var_nameX1105);

int echo_sp(struct screen* anonymous_var_nameX1106);

int endwin_sp(struct screen* anonymous_var_nameX1107);

char erasechar_sp(struct screen* anonymous_var_nameX1108);

void filter_sp(struct screen* anonymous_var_nameX1109);

int flash_sp(struct screen* anonymous_var_nameX1110);

int flushinp_sp(struct screen* anonymous_var_nameX1111);

struct _win_st* getwin_sp(struct screen* anonymous_var_nameX1112, struct _IO_FILE* anonymous_var_nameX1113);

int halfdelay_sp(struct screen* anonymous_var_nameX1114, int anonymous_var_nameX1115);

_Bool has_colors_sp(struct screen* anonymous_var_nameX1116);

_Bool has_ic_sp(struct screen* anonymous_var_nameX1117);

_Bool has_il_sp(struct screen* anonymous_var_nameX1118);

int init_color_sp(struct screen* anonymous_var_nameX1119, short short anonymous_var_nameX1120, short short anonymous_var_nameX1121, short short anonymous_var_nameX1122, short short anonymous_var_nameX1123);

int init_pair_sp(struct screen* anonymous_var_nameX1124, short short anonymous_var_nameX1125, short short anonymous_var_nameX1126, short short anonymous_var_nameX1127);

int intrflush_sp(struct screen* anonymous_var_nameX1128, struct _win_st* anonymous_var_nameX1129, _Bool anonymous_var_nameX1130);

_Bool isendwin_sp(struct screen* anonymous_var_nameX1131);

const char* keyname_sp(struct screen* anonymous_var_nameX1132, int anonymous_var_nameX1133);

char killchar_sp(struct screen* anonymous_var_nameX1134);

char* longname_sp(struct screen* anonymous_var_nameX1135);

int mvcur_sp(struct screen* anonymous_var_nameX1136, int anonymous_var_nameX1137, int anonymous_var_nameX1138, int anonymous_var_nameX1139, int anonymous_var_nameX1140);

int napms_sp(struct screen* anonymous_var_nameX1141, int anonymous_var_nameX1142);

struct _win_st* newpad_sp(struct screen* anonymous_var_nameX1143, int anonymous_var_nameX1144, int anonymous_var_nameX1145);

struct screen* newterm_sp(struct screen* anonymous_var_nameX1146, const char* anonymous_var_nameX1147, struct _IO_FILE* anonymous_var_nameX1148, struct _IO_FILE* anonymous_var_nameX1149);

struct _win_st* newwin_sp(struct screen* anonymous_var_nameX1150, int anonymous_var_nameX1151, int anonymous_var_nameX1152, int anonymous_var_nameX1153, int anonymous_var_nameX1154);

int nl_sp(struct screen* anonymous_var_nameX1155);

int nocbreak_sp(struct screen* anonymous_var_nameX1156);

int noecho_sp(struct screen* anonymous_var_nameX1157);

int nonl_sp(struct screen* anonymous_var_nameX1158);

void noqiflush_sp(struct screen* anonymous_var_nameX1159);

int noraw_sp(struct screen* anonymous_var_nameX1160);

int pair_content_sp(struct screen* anonymous_var_nameX1161, short short anonymous_var_nameX1162, short short* anonymous_var_nameX1163, short short* anonymous_var_nameX1164);

void qiflush_sp(struct screen* anonymous_var_nameX1165);

int raw_sp(struct screen* anonymous_var_nameX1166);

int reset_prog_mode_sp(struct screen* anonymous_var_nameX1167);

int reset_shell_mode_sp(struct screen* anonymous_var_nameX1168);

int resetty_sp(struct screen* anonymous_var_nameX1169);

int ripoffline_sp(struct screen* anonymous_var_nameX1170, int anonymous_var_nameX1171, int (*anonymous_lambda_var_nameZ2)(struct _win_st*,int));

int savetty_sp(struct screen* anonymous_var_nameX1174);

int scr_init_sp(struct screen* anonymous_var_nameX1175, const char* anonymous_var_nameX1176);

int scr_restore_sp(struct screen* anonymous_var_nameX1177, const char* anonymous_var_nameX1178);

int scr_set_sp(struct screen* anonymous_var_nameX1179, const char* anonymous_var_nameX1180);

int slk_attroff_sp(struct screen* anonymous_var_nameX1181, const unsigned int anonymous_var_nameX1182);

int slk_attron_sp(struct screen* anonymous_var_nameX1183, const unsigned int anonymous_var_nameX1184);

int slk_attrset_sp(struct screen* anonymous_var_nameX1185, const unsigned int anonymous_var_nameX1186);

unsigned int slk_attr_sp(struct screen* anonymous_var_nameX1187);

int slk_attr_set_sp(struct screen* anonymous_var_nameX1188, const unsigned int anonymous_var_nameX1189, short short anonymous_var_nameX1190, void* anonymous_var_nameX1191);

int slk_clear_sp(struct screen* anonymous_var_nameX1192);

int slk_color_sp(struct screen* anonymous_var_nameX1193, short short anonymous_var_nameX1194);

int slk_init_sp(struct screen* anonymous_var_nameX1195, int anonymous_var_nameX1196);

char* slk_label_sp(struct screen* anonymous_var_nameX1197, int anonymous_var_nameX1198);

int slk_noutrefresh_sp(struct screen* anonymous_var_nameX1199);

int slk_refresh_sp(struct screen* anonymous_var_nameX1200);

int slk_restore_sp(struct screen* anonymous_var_nameX1201);

int slk_set_sp(struct screen* anonymous_var_nameX1202, int anonymous_var_nameX1203, const char* anonymous_var_nameX1204, int anonymous_var_nameX1205);

int slk_touch_sp(struct screen* anonymous_var_nameX1206);

int start_color_sp(struct screen* anonymous_var_nameX1207);

unsigned int termattrs_sp(struct screen* anonymous_var_nameX1208);

char* termname_sp(struct screen* anonymous_var_nameX1209);

int typeahead_sp(struct screen* anonymous_var_nameX1210, int anonymous_var_nameX1211);

int ungetch_sp(struct screen* anonymous_var_nameX1212, int anonymous_var_nameX1213);

void use_env_sp(struct screen* anonymous_var_nameX1214, _Bool anonymous_var_nameX1215);

void use_tioctl_sp(struct screen* anonymous_var_nameX1216, _Bool anonymous_var_nameX1217);

int vidattr_sp(struct screen* anonymous_var_nameX1218, unsigned int anonymous_var_nameX1219);

int vidputs_sp(struct screen* anonymous_var_nameX1220, unsigned int anonymous_var_nameX1221, int (*anonymous_var_nameX1222)(struct screen*,int));

char* keybound_sp(struct screen* anonymous_var_nameX1223, int anonymous_var_nameX1224, int anonymous_var_nameX1225);

int alloc_pair_sp(struct screen* anonymous_var_nameX1226, int anonymous_var_nameX1227, int anonymous_var_nameX1228);

int assume_default_colors_sp(struct screen* anonymous_var_nameX1229, int anonymous_var_nameX1230, int anonymous_var_nameX1231);

int define_key_sp(struct screen* anonymous_var_nameX1232, const char* anonymous_var_nameX1233, int anonymous_var_nameX1234);

int extended_color_content_sp(struct screen* anonymous_var_nameX1235, int anonymous_var_nameX1236, int* anonymous_var_nameX1237, int* anonymous_var_nameX1238, int* anonymous_var_nameX1239);

int extended_pair_content_sp(struct screen* anonymous_var_nameX1240, int anonymous_var_nameX1241, int* anonymous_var_nameX1242, int* anonymous_var_nameX1243);

int extended_slk_color_sp(struct screen* anonymous_var_nameX1244, int anonymous_var_nameX1245);

int get_escdelay_sp(struct screen* anonymous_var_nameX1246);

int find_pair_sp(struct screen* anonymous_var_nameX1247, int anonymous_var_nameX1248, int anonymous_var_nameX1249);

int free_pair_sp(struct screen* anonymous_var_nameX1250, int anonymous_var_nameX1251);

int init_extended_color_sp(struct screen* anonymous_var_nameX1252, int anonymous_var_nameX1253, int anonymous_var_nameX1254, int anonymous_var_nameX1255, int anonymous_var_nameX1256);

int init_extended_pair_sp(struct screen* anonymous_var_nameX1257, int anonymous_var_nameX1258, int anonymous_var_nameX1259, int anonymous_var_nameX1260);

_Bool is_term_resized_sp(struct screen* anonymous_var_nameX1261, int anonymous_var_nameX1262, int anonymous_var_nameX1263);

int key_defined_sp(struct screen* anonymous_var_nameX1264, const char* anonymous_var_nameX1265);

int keyok_sp(struct screen* anonymous_var_nameX1266, int anonymous_var_nameX1267, _Bool anonymous_var_nameX1268);

void nofilter_sp(struct screen* anonymous_var_nameX1269);

void reset_color_pairs_sp(struct screen* anonymous_var_nameX1270);

int resize_term_sp(struct screen* anonymous_var_nameX1271, int anonymous_var_nameX1272, int anonymous_var_nameX1273);

int resizeterm_sp(struct screen* anonymous_var_nameX1274, int anonymous_var_nameX1275, int anonymous_var_nameX1276);

int set_escdelay_sp(struct screen* anonymous_var_nameX1277, int anonymous_var_nameX1278);

int set_tabsize_sp(struct screen* anonymous_var_nameX1279, int anonymous_var_nameX1280);

int use_default_colors_sp(struct screen* anonymous_var_nameX1281);

int use_legacy_coding_sp(struct screen* anonymous_var_nameX1282, int anonymous_var_nameX1283);

int add_wch(const struct anonymous_typeX22* anonymous_var_nameX1284);

int add_wchnstr(const struct anonymous_typeX22* anonymous_var_nameX1285, int anonymous_var_nameX1286);

int add_wchstr(const struct anonymous_typeX22* anonymous_var_nameX1287);

int addnwstr(const unsigned int* anonymous_var_nameX1288, int anonymous_var_nameX1289);

int addwstr(const unsigned int* anonymous_var_nameX1290);

int bkgrnd(const struct anonymous_typeX22* anonymous_var_nameX1291);

void bkgrndset(const struct anonymous_typeX22* anonymous_var_nameX1292);

int border_set(const struct anonymous_typeX22* anonymous_var_nameX1293, const struct anonymous_typeX22* anonymous_var_nameX1294, const struct anonymous_typeX22* anonymous_var_nameX1295, const struct anonymous_typeX22* anonymous_var_nameX1296, const struct anonymous_typeX22* anonymous_var_nameX1297, const struct anonymous_typeX22* anonymous_var_nameX1298, const struct anonymous_typeX22* anonymous_var_nameX1299, const struct anonymous_typeX22* anonymous_var_nameX1300);

int box_set(struct _win_st* anonymous_var_nameX1301, const struct anonymous_typeX22* anonymous_var_nameX1302, const struct anonymous_typeX22* anonymous_var_nameX1303);

int echo_wchar(const struct anonymous_typeX22* anonymous_var_nameX1304);

int erasewchar(unsigned int* anonymous_var_nameX1305);

int get_wch(unsigned int* anonymous_var_nameX1306);

int get_wstr(unsigned int* anonymous_var_nameX1307);

int getbkgrnd(struct anonymous_typeX22* anonymous_var_nameX1308);

int getcchar(const struct anonymous_typeX22* anonymous_var_nameX1309, unsigned int* anonymous_var_nameX1310, unsigned int* anonymous_var_nameX1311, short short* anonymous_var_nameX1312, void* anonymous_var_nameX1313);

int getn_wstr(unsigned int* anonymous_var_nameX1314, int anonymous_var_nameX1315);

int hline_set(const struct anonymous_typeX22* anonymous_var_nameX1316, int anonymous_var_nameX1317);

int in_wch(struct anonymous_typeX22* anonymous_var_nameX1318);

int in_wchnstr(struct anonymous_typeX22* anonymous_var_nameX1319, int anonymous_var_nameX1320);

int in_wchstr(struct anonymous_typeX22* anonymous_var_nameX1321);

int innwstr(unsigned int* anonymous_var_nameX1322, int anonymous_var_nameX1323);

int ins_nwstr(const unsigned int* anonymous_var_nameX1324, int anonymous_var_nameX1325);

int ins_wch(const struct anonymous_typeX22* anonymous_var_nameX1326);

int ins_wstr(const unsigned int* anonymous_var_nameX1327);

int inwstr(unsigned int* anonymous_var_nameX1328);

const char* key_name(unsigned int anonymous_var_nameX1329);

int killwchar(unsigned int* anonymous_var_nameX1330);

int mvadd_wch(int anonymous_var_nameX1331, int anonymous_var_nameX1332, const struct anonymous_typeX22* anonymous_var_nameX1333);

int mvadd_wchnstr(int anonymous_var_nameX1334, int anonymous_var_nameX1335, const struct anonymous_typeX22* anonymous_var_nameX1336, int anonymous_var_nameX1337);

int mvadd_wchstr(int anonymous_var_nameX1338, int anonymous_var_nameX1339, const struct anonymous_typeX22* anonymous_var_nameX1340);

int mvaddnwstr(int anonymous_var_nameX1341, int anonymous_var_nameX1342, const unsigned int* anonymous_var_nameX1343, int anonymous_var_nameX1344);

int mvaddwstr(int anonymous_var_nameX1345, int anonymous_var_nameX1346, const unsigned int* anonymous_var_nameX1347);

int mvget_wch(int anonymous_var_nameX1348, int anonymous_var_nameX1349, unsigned int* anonymous_var_nameX1350);

int mvget_wstr(int anonymous_var_nameX1351, int anonymous_var_nameX1352, unsigned int* anonymous_var_nameX1353);

int mvgetn_wstr(int anonymous_var_nameX1354, int anonymous_var_nameX1355, unsigned int* anonymous_var_nameX1356, int anonymous_var_nameX1357);

int mvhline_set(int anonymous_var_nameX1358, int anonymous_var_nameX1359, const struct anonymous_typeX22* anonymous_var_nameX1360, int anonymous_var_nameX1361);

int mvin_wch(int anonymous_var_nameX1362, int anonymous_var_nameX1363, struct anonymous_typeX22* anonymous_var_nameX1364);

int mvin_wchnstr(int anonymous_var_nameX1365, int anonymous_var_nameX1366, struct anonymous_typeX22* anonymous_var_nameX1367, int anonymous_var_nameX1368);

int mvin_wchstr(int anonymous_var_nameX1369, int anonymous_var_nameX1370, struct anonymous_typeX22* anonymous_var_nameX1371);

int mvinnwstr(int anonymous_var_nameX1372, int anonymous_var_nameX1373, unsigned int* anonymous_var_nameX1374, int anonymous_var_nameX1375);

int mvins_nwstr(int anonymous_var_nameX1376, int anonymous_var_nameX1377, const unsigned int* anonymous_var_nameX1378, int anonymous_var_nameX1379);

int mvins_wch(int anonymous_var_nameX1380, int anonymous_var_nameX1381, const struct anonymous_typeX22* anonymous_var_nameX1382);

int mvins_wstr(int anonymous_var_nameX1383, int anonymous_var_nameX1384, const unsigned int* anonymous_var_nameX1385);

int mvinwstr(int anonymous_var_nameX1386, int anonymous_var_nameX1387, unsigned int* anonymous_var_nameX1388);

int mvvline_set(int anonymous_var_nameX1389, int anonymous_var_nameX1390, const struct anonymous_typeX22* anonymous_var_nameX1391, int anonymous_var_nameX1392);

int mvwadd_wch(struct _win_st* anonymous_var_nameX1393, int anonymous_var_nameX1394, int anonymous_var_nameX1395, const struct anonymous_typeX22* anonymous_var_nameX1396);

int mvwadd_wchnstr(struct _win_st* anonymous_var_nameX1397, int anonymous_var_nameX1398, int anonymous_var_nameX1399, const struct anonymous_typeX22* anonymous_var_nameX1400, int anonymous_var_nameX1401);

int mvwadd_wchstr(struct _win_st* anonymous_var_nameX1402, int anonymous_var_nameX1403, int anonymous_var_nameX1404, const struct anonymous_typeX22* anonymous_var_nameX1405);

int mvwaddnwstr(struct _win_st* anonymous_var_nameX1406, int anonymous_var_nameX1407, int anonymous_var_nameX1408, const unsigned int* anonymous_var_nameX1409, int anonymous_var_nameX1410);

int mvwaddwstr(struct _win_st* anonymous_var_nameX1411, int anonymous_var_nameX1412, int anonymous_var_nameX1413, const unsigned int* anonymous_var_nameX1414);

int mvwget_wch(struct _win_st* anonymous_var_nameX1415, int anonymous_var_nameX1416, int anonymous_var_nameX1417, unsigned int* anonymous_var_nameX1418);

int mvwget_wstr(struct _win_st* anonymous_var_nameX1419, int anonymous_var_nameX1420, int anonymous_var_nameX1421, unsigned int* anonymous_var_nameX1422);

int mvwgetn_wstr(struct _win_st* anonymous_var_nameX1423, int anonymous_var_nameX1424, int anonymous_var_nameX1425, unsigned int* anonymous_var_nameX1426, int anonymous_var_nameX1427);

int mvwhline_set(struct _win_st* anonymous_var_nameX1428, int anonymous_var_nameX1429, int anonymous_var_nameX1430, const struct anonymous_typeX22* anonymous_var_nameX1431, int anonymous_var_nameX1432);

int mvwin_wch(struct _win_st* anonymous_var_nameX1433, int anonymous_var_nameX1434, int anonymous_var_nameX1435, struct anonymous_typeX22* anonymous_var_nameX1436);

int mvwin_wchnstr(struct _win_st* anonymous_var_nameX1437, int anonymous_var_nameX1438, int anonymous_var_nameX1439, struct anonymous_typeX22* anonymous_var_nameX1440, int anonymous_var_nameX1441);

int mvwin_wchstr(struct _win_st* anonymous_var_nameX1442, int anonymous_var_nameX1443, int anonymous_var_nameX1444, struct anonymous_typeX22* anonymous_var_nameX1445);

int mvwinnwstr(struct _win_st* anonymous_var_nameX1446, int anonymous_var_nameX1447, int anonymous_var_nameX1448, unsigned int* anonymous_var_nameX1449, int anonymous_var_nameX1450);

int mvwins_nwstr(struct _win_st* anonymous_var_nameX1451, int anonymous_var_nameX1452, int anonymous_var_nameX1453, const unsigned int* anonymous_var_nameX1454, int anonymous_var_nameX1455);

int mvwins_wch(struct _win_st* anonymous_var_nameX1456, int anonymous_var_nameX1457, int anonymous_var_nameX1458, const struct anonymous_typeX22* anonymous_var_nameX1459);

int mvwins_wstr(struct _win_st* anonymous_var_nameX1460, int anonymous_var_nameX1461, int anonymous_var_nameX1462, const unsigned int* anonymous_var_nameX1463);

int mvwinwstr(struct _win_st* anonymous_var_nameX1464, int anonymous_var_nameX1465, int anonymous_var_nameX1466, unsigned int* anonymous_var_nameX1467);

int mvwvline_set(struct _win_st* anonymous_var_nameX1468, int anonymous_var_nameX1469, int anonymous_var_nameX1470, const struct anonymous_typeX22* anonymous_var_nameX1471, int anonymous_var_nameX1472);

int pecho_wchar(struct _win_st* anonymous_var_nameX1473, const struct anonymous_typeX22* anonymous_var_nameX1474);

int setcchar(struct anonymous_typeX22* anonymous_var_nameX1475, const unsigned int* anonymous_var_nameX1476, const unsigned int anonymous_var_nameX1477, short short anonymous_var_nameX1478, const void* anonymous_var_nameX1479);

int slk_wset(int anonymous_var_nameX1480, const unsigned int* anonymous_var_nameX1481, int anonymous_var_nameX1482);

unsigned int term_attrs();

int unget_wch(const unsigned int anonymous_var_nameX1483);

int vid_attr(unsigned int anonymous_var_nameX1484, short short anonymous_var_nameX1485, void* anonymous_var_nameX1486);

int vid_puts(unsigned int anonymous_var_nameX1487, short short anonymous_var_nameX1488, void* anonymous_var_nameX1489, int (*anonymous_var_nameX1490)(int));

int vline_set(const struct anonymous_typeX22* anonymous_var_nameX1491, int anonymous_var_nameX1492);

int wadd_wch(struct _win_st* anonymous_var_nameX1493, const struct anonymous_typeX22* anonymous_var_nameX1494);

int wadd_wchnstr(struct _win_st* anonymous_var_nameX1495, const struct anonymous_typeX22* anonymous_var_nameX1496, int anonymous_var_nameX1497);

int wadd_wchstr(struct _win_st* anonymous_var_nameX1498, const struct anonymous_typeX22* anonymous_var_nameX1499);

int waddnwstr(struct _win_st* anonymous_var_nameX1500, const unsigned int* anonymous_var_nameX1501, int anonymous_var_nameX1502);

int waddwstr(struct _win_st* anonymous_var_nameX1503, const unsigned int* anonymous_var_nameX1504);

int wbkgrnd(struct _win_st* anonymous_var_nameX1505, const struct anonymous_typeX22* anonymous_var_nameX1506);

void wbkgrndset(struct _win_st* anonymous_var_nameX1507, const struct anonymous_typeX22* anonymous_var_nameX1508);

int wborder_set(struct _win_st* anonymous_var_nameX1509, const struct anonymous_typeX22* anonymous_var_nameX1510, const struct anonymous_typeX22* anonymous_var_nameX1511, const struct anonymous_typeX22* anonymous_var_nameX1512, const struct anonymous_typeX22* anonymous_var_nameX1513, const struct anonymous_typeX22* anonymous_var_nameX1514, const struct anonymous_typeX22* anonymous_var_nameX1515, const struct anonymous_typeX22* anonymous_var_nameX1516, const struct anonymous_typeX22* anonymous_var_nameX1517);

int wecho_wchar(struct _win_st* anonymous_var_nameX1518, const struct anonymous_typeX22* anonymous_var_nameX1519);

int wget_wch(struct _win_st* anonymous_var_nameX1520, unsigned int* anonymous_var_nameX1521);

int wget_wstr(struct _win_st* anonymous_var_nameX1522, unsigned int* anonymous_var_nameX1523);

int wgetbkgrnd(struct _win_st* anonymous_var_nameX1524, struct anonymous_typeX22* anonymous_var_nameX1525);

int wgetn_wstr(struct _win_st* anonymous_var_nameX1526, unsigned int* anonymous_var_nameX1527, int anonymous_var_nameX1528);

int whline_set(struct _win_st* anonymous_var_nameX1529, const struct anonymous_typeX22* anonymous_var_nameX1530, int anonymous_var_nameX1531);

int win_wch(struct _win_st* anonymous_var_nameX1532, struct anonymous_typeX22* anonymous_var_nameX1533);

int win_wchnstr(struct _win_st* anonymous_var_nameX1534, struct anonymous_typeX22* anonymous_var_nameX1535, int anonymous_var_nameX1536);

int win_wchstr(struct _win_st* anonymous_var_nameX1537, struct anonymous_typeX22* anonymous_var_nameX1538);

int winnwstr(struct _win_st* anonymous_var_nameX1539, unsigned int* anonymous_var_nameX1540, int anonymous_var_nameX1541);

int wins_nwstr(struct _win_st* anonymous_var_nameX1542, const unsigned int* anonymous_var_nameX1543, int anonymous_var_nameX1544);

int wins_wch(struct _win_st* anonymous_var_nameX1545, const struct anonymous_typeX22* anonymous_var_nameX1546);

int wins_wstr(struct _win_st* anonymous_var_nameX1547, const unsigned int* anonymous_var_nameX1548);

int winwstr(struct _win_st* anonymous_var_nameX1549, unsigned int* anonymous_var_nameX1550);

unsigned int* wunctrl(struct anonymous_typeX22* anonymous_var_nameX1551);

int wvline_set(struct _win_st* anonymous_var_nameX1552, const struct anonymous_typeX22* anonymous_var_nameX1553, int anonymous_var_nameX1554);

unsigned int term_attrs_sp(struct screen* anonymous_var_nameX1555);

int erasewchar_sp(struct screen* anonymous_var_nameX1556, unsigned int* anonymous_var_nameX1557);

int killwchar_sp(struct screen* anonymous_var_nameX1558, unsigned int* anonymous_var_nameX1559);

int unget_wch_sp(struct screen* anonymous_var_nameX1560, const unsigned int anonymous_var_nameX1561);

int vid_attr_sp(struct screen* anonymous_var_nameX1562, unsigned int anonymous_var_nameX1563, short short anonymous_var_nameX1564, void* anonymous_var_nameX1565);

int vid_puts_sp(struct screen* anonymous_var_nameX1566, unsigned int anonymous_var_nameX1567, short short anonymous_var_nameX1568, void* anonymous_var_nameX1569, int (*anonymous_var_nameX1570)(struct screen*,int));

unsigned int* wunctrl_sp(struct screen* anonymous_var_nameX1571, struct anonymous_typeX22* anonymous_var_nameX1572);

_Bool has_mouse();

int getmouse(struct anonymous_typeX23* anonymous_var_nameX1573);

int ungetmouse(struct anonymous_typeX23* anonymous_var_nameX1574);

unsigned int mousemask(unsigned int anonymous_var_nameX1575, unsigned int* anonymous_var_nameX1576);

_Bool wenclose(const struct _win_st* anonymous_var_nameX1577, int anonymous_var_nameX1578, int anonymous_var_nameX1579);

int mouseinterval(int anonymous_var_nameX1580);

_Bool wmouse_trafo(const struct _win_st* anonymous_var_nameX1581, int* anonymous_var_nameX1582, int* anonymous_var_nameX1583, _Bool anonymous_var_nameX1584);

_Bool mouse_trafo(int* anonymous_var_nameX1585, int* anonymous_var_nameX1586, _Bool anonymous_var_nameX1587);

_Bool has_mouse_sp(struct screen* anonymous_var_nameX1588);

int getmouse_sp(struct screen* anonymous_var_nameX1589, struct anonymous_typeX23* anonymous_var_nameX1590);

int ungetmouse_sp(struct screen* anonymous_var_nameX1591, struct anonymous_typeX23* anonymous_var_nameX1592);

unsigned int mousemask_sp(struct screen* anonymous_var_nameX1593, unsigned int anonymous_var_nameX1594, unsigned int* anonymous_var_nameX1595);

int mouseinterval_sp(struct screen* anonymous_var_nameX1596, int anonymous_var_nameX1597);

int mcprint(char* anonymous_var_nameX1598, int anonymous_var_nameX1599);

int has_key(int anonymous_var_nameX1600);

int has_key_sp(struct screen* anonymous_var_nameX1601, int anonymous_var_nameX1602);

int mcprint_sp(struct screen* anonymous_var_nameX1603, char* anonymous_var_nameX1604, int anonymous_var_nameX1605);

void _tracef(const char* anonymous_var_nameX1606, ...);

char* _traceattr(unsigned int anonymous_var_nameX1607);

char* _traceattr2(int anonymous_var_nameX1608, unsigned int anonymous_var_nameX1609);

char* _tracechar(int anonymous_var_nameX1610);

char* _tracechtype(unsigned int anonymous_var_nameX1611);

char* _tracechtype2(int anonymous_var_nameX1612, unsigned int anonymous_var_nameX1613);

char* _tracecchar_t(const struct anonymous_typeX22* anonymous_var_nameX1614);

char* _tracecchar_t2(int anonymous_var_nameX1615, const struct anonymous_typeX22* anonymous_var_nameX1616);

void trace(const unsigned int anonymous_var_nameX1617);

unsigned int curses_trace(const unsigned int anonymous_var_nameX1618);

void exit_curses(int anonymous_var_nameX1619);

const char* unctrl(unsigned int anonymous_var_nameX1620);

const char* unctrl_sp(struct screen* anonymous_var_nameX1621, unsigned int anonymous_var_nameX1622);

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

int ioctl(int __fd, unsigned long int __request, ...);

const unsigned short int** __ctype_b_loc();

const int** __ctype_tolower_loc();

const int** __ctype_toupper_loc();

int isalnum(int anonymous_var_nameX1664);

int isalpha(int anonymous_var_nameX1665);

int iscntrl(int anonymous_var_nameX1666);

int isdigit(int anonymous_var_nameX1667);

int islower(int anonymous_var_nameX1668);

int isgraph(int anonymous_var_nameX1669);

int isprint(int anonymous_var_nameX1670);

int ispunct(int anonymous_var_nameX1671);

int isspace(int anonymous_var_nameX1672);

int isupper(int anonymous_var_nameX1673);

int isxdigit(int anonymous_var_nameX1674);

int tolower(int __c);

int toupper(int __c);

int isblank(int anonymous_var_nameX1675);

int isctype(int __c, int __mask);

int isascii(int __c);

int toascii(int __c);

int _toupper(int anonymous_var_nameX1676);

int _tolower(int anonymous_var_nameX1677);

int isalnum_l(int anonymous_var_nameX1678, struct __locale_struct* anonymous_var_nameX1679);

int isalpha_l(int anonymous_var_nameX1680, struct __locale_struct* anonymous_var_nameX1681);

int iscntrl_l(int anonymous_var_nameX1682, struct __locale_struct* anonymous_var_nameX1683);

int isdigit_l(int anonymous_var_nameX1684, struct __locale_struct* anonymous_var_nameX1685);

int islower_l(int anonymous_var_nameX1686, struct __locale_struct* anonymous_var_nameX1687);

int isgraph_l(int anonymous_var_nameX1688, struct __locale_struct* anonymous_var_nameX1689);

int isprint_l(int anonymous_var_nameX1690, struct __locale_struct* anonymous_var_nameX1691);

int ispunct_l(int anonymous_var_nameX1692, struct __locale_struct* anonymous_var_nameX1693);

int isspace_l(int anonymous_var_nameX1694, struct __locale_struct* anonymous_var_nameX1695);

int isupper_l(int anonymous_var_nameX1696, struct __locale_struct* anonymous_var_nameX1697);

int isxdigit_l(int anonymous_var_nameX1698, struct __locale_struct* anonymous_var_nameX1699);

int isblank_l(int anonymous_var_nameX1700, struct __locale_struct* anonymous_var_nameX1701);

int __tolower_l(int __c, struct __locale_struct* __l);

int tolower_l(int __c, struct __locale_struct* __l);

int __toupper_l(int __c, struct __locale_struct* __l);

int toupper_l(int __c, struct __locale_struct* __l);

char* tilde_expand(const char* anonymous_var_nameX1709);

char* tilde_expand_word(const char* anonymous_var_nameX1710);

char* tilde_find_word(const char* anonymous_var_nameX1711, int anonymous_var_nameX1712, int* anonymous_var_nameX1713);

int rl_digit_argument(int anonymous_var_nameX1714, int anonymous_var_nameX1715);

int rl_universal_argument(int anonymous_var_nameX1716, int anonymous_var_nameX1717);

int rl_forward_byte(int anonymous_var_nameX1718, int anonymous_var_nameX1719);

int rl_forward_char(int anonymous_var_nameX1720, int anonymous_var_nameX1721);

int rl_forward(int anonymous_var_nameX1722, int anonymous_var_nameX1723);

int rl_backward_byte(int anonymous_var_nameX1724, int anonymous_var_nameX1725);

int rl_backward_char(int anonymous_var_nameX1726, int anonymous_var_nameX1727);

int rl_backward(int anonymous_var_nameX1728, int anonymous_var_nameX1729);

int rl_beg_of_line(int anonymous_var_nameX1730, int anonymous_var_nameX1731);

int rl_end_of_line(int anonymous_var_nameX1732, int anonymous_var_nameX1733);

int rl_forward_word(int anonymous_var_nameX1734, int anonymous_var_nameX1735);

int rl_backward_word(int anonymous_var_nameX1736, int anonymous_var_nameX1737);

int rl_refresh_line(int anonymous_var_nameX1738, int anonymous_var_nameX1739);

int rl_clear_screen(int anonymous_var_nameX1740, int anonymous_var_nameX1741);

int rl_clear_display(int anonymous_var_nameX1742, int anonymous_var_nameX1743);

int rl_skip_csi_sequence(int anonymous_var_nameX1744, int anonymous_var_nameX1745);

int rl_arrow_keys(int anonymous_var_nameX1746, int anonymous_var_nameX1747);

int rl_previous_screen_line(int anonymous_var_nameX1748, int anonymous_var_nameX1749);

int rl_next_screen_line(int anonymous_var_nameX1750, int anonymous_var_nameX1751);

int rl_insert(int anonymous_var_nameX1752, int anonymous_var_nameX1753);

int rl_quoted_insert(int anonymous_var_nameX1754, int anonymous_var_nameX1755);

int rl_tab_insert(int anonymous_var_nameX1756, int anonymous_var_nameX1757);

int rl_newline(int anonymous_var_nameX1758, int anonymous_var_nameX1759);

int rl_do_lowercase_version(int anonymous_var_nameX1760, int anonymous_var_nameX1761);

int rl_rubout(int anonymous_var_nameX1762, int anonymous_var_nameX1763);

int rl_delete(int anonymous_var_nameX1764, int anonymous_var_nameX1765);

int rl_rubout_or_delete(int anonymous_var_nameX1766, int anonymous_var_nameX1767);

int rl_delete_horizontal_space(int anonymous_var_nameX1768, int anonymous_var_nameX1769);

int rl_delete_or_show_completions(int anonymous_var_nameX1770, int anonymous_var_nameX1771);

int rl_insert_comment(int anonymous_var_nameX1772, int anonymous_var_nameX1773);

int rl_upcase_word(int anonymous_var_nameX1774, int anonymous_var_nameX1775);

int rl_downcase_word(int anonymous_var_nameX1776, int anonymous_var_nameX1777);

int rl_capitalize_word(int anonymous_var_nameX1778, int anonymous_var_nameX1779);

int rl_transpose_words(int anonymous_var_nameX1780, int anonymous_var_nameX1781);

int rl_transpose_chars(int anonymous_var_nameX1782, int anonymous_var_nameX1783);

int rl_char_search(int anonymous_var_nameX1784, int anonymous_var_nameX1785);

int rl_backward_char_search(int anonymous_var_nameX1786, int anonymous_var_nameX1787);

int rl_beginning_of_history(int anonymous_var_nameX1788, int anonymous_var_nameX1789);

int rl_end_of_history(int anonymous_var_nameX1790, int anonymous_var_nameX1791);

int rl_get_next_history(int anonymous_var_nameX1792, int anonymous_var_nameX1793);

int rl_get_previous_history(int anonymous_var_nameX1794, int anonymous_var_nameX1795);

int rl_operate_and_get_next(int anonymous_var_nameX1796, int anonymous_var_nameX1797);

int rl_set_mark(int anonymous_var_nameX1798, int anonymous_var_nameX1799);

int rl_exchange_point_and_mark(int anonymous_var_nameX1800, int anonymous_var_nameX1801);

int rl_vi_editing_mode(int anonymous_var_nameX1802, int anonymous_var_nameX1803);

int rl_emacs_editing_mode(int anonymous_var_nameX1804, int anonymous_var_nameX1805);

int rl_overwrite_mode(int anonymous_var_nameX1806, int anonymous_var_nameX1807);

int rl_re_read_init_file(int anonymous_var_nameX1808, int anonymous_var_nameX1809);

int rl_dump_functions(int anonymous_var_nameX1810, int anonymous_var_nameX1811);

int rl_dump_macros(int anonymous_var_nameX1812, int anonymous_var_nameX1813);

int rl_dump_variables(int anonymous_var_nameX1814, int anonymous_var_nameX1815);

int rl_complete(int anonymous_var_nameX1816, int anonymous_var_nameX1817);

int rl_possible_completions(int anonymous_var_nameX1818, int anonymous_var_nameX1819);

int rl_insert_completions(int anonymous_var_nameX1820, int anonymous_var_nameX1821);

int rl_old_menu_complete(int anonymous_var_nameX1822, int anonymous_var_nameX1823);

int rl_menu_complete(int anonymous_var_nameX1824, int anonymous_var_nameX1825);

int rl_backward_menu_complete(int anonymous_var_nameX1826, int anonymous_var_nameX1827);

int rl_kill_word(int anonymous_var_nameX1828, int anonymous_var_nameX1829);

int rl_backward_kill_word(int anonymous_var_nameX1830, int anonymous_var_nameX1831);

int rl_kill_line(int anonymous_var_nameX1832, int anonymous_var_nameX1833);

int rl_backward_kill_line(int anonymous_var_nameX1834, int anonymous_var_nameX1835);

int rl_kill_full_line(int anonymous_var_nameX1836, int anonymous_var_nameX1837);

int rl_unix_word_rubout(int anonymous_var_nameX1838, int anonymous_var_nameX1839);

int rl_unix_filename_rubout(int anonymous_var_nameX1840, int anonymous_var_nameX1841);

int rl_unix_line_discard(int anonymous_var_nameX1842, int anonymous_var_nameX1843);

int rl_copy_region_to_kill(int anonymous_var_nameX1844, int anonymous_var_nameX1845);

int rl_kill_region(int anonymous_var_nameX1846, int anonymous_var_nameX1847);

int rl_copy_forward_word(int anonymous_var_nameX1848, int anonymous_var_nameX1849);

int rl_copy_backward_word(int anonymous_var_nameX1850, int anonymous_var_nameX1851);

int rl_yank(int anonymous_var_nameX1852, int anonymous_var_nameX1853);

int rl_yank_pop(int anonymous_var_nameX1854, int anonymous_var_nameX1855);

int rl_yank_nth_arg(int anonymous_var_nameX1856, int anonymous_var_nameX1857);

int rl_yank_last_arg(int anonymous_var_nameX1858, int anonymous_var_nameX1859);

int rl_bracketed_paste_begin(int anonymous_var_nameX1860, int anonymous_var_nameX1861);

int rl_reverse_search_history(int anonymous_var_nameX1862, int anonymous_var_nameX1863);

int rl_forward_search_history(int anonymous_var_nameX1864, int anonymous_var_nameX1865);

int rl_start_kbd_macro(int anonymous_var_nameX1866, int anonymous_var_nameX1867);

int rl_end_kbd_macro(int anonymous_var_nameX1868, int anonymous_var_nameX1869);

int rl_call_last_kbd_macro(int anonymous_var_nameX1870, int anonymous_var_nameX1871);

int rl_print_last_kbd_macro(int anonymous_var_nameX1872, int anonymous_var_nameX1873);

int rl_revert_line(int anonymous_var_nameX1874, int anonymous_var_nameX1875);

int rl_undo_command(int anonymous_var_nameX1876, int anonymous_var_nameX1877);

int rl_tilde_expand(int anonymous_var_nameX1878, int anonymous_var_nameX1879);

int rl_restart_output(int anonymous_var_nameX1880, int anonymous_var_nameX1881);

int rl_stop_output(int anonymous_var_nameX1882, int anonymous_var_nameX1883);

int rl_abort(int anonymous_var_nameX1884, int anonymous_var_nameX1885);

int rl_tty_status(int anonymous_var_nameX1886, int anonymous_var_nameX1887);

int rl_history_search_forward(int anonymous_var_nameX1888, int anonymous_var_nameX1889);

int rl_history_search_backward(int anonymous_var_nameX1890, int anonymous_var_nameX1891);

int rl_history_substr_search_forward(int anonymous_var_nameX1892, int anonymous_var_nameX1893);

int rl_history_substr_search_backward(int anonymous_var_nameX1894, int anonymous_var_nameX1895);

int rl_noninc_forward_search(int anonymous_var_nameX1896, int anonymous_var_nameX1897);

int rl_noninc_reverse_search(int anonymous_var_nameX1898, int anonymous_var_nameX1899);

int rl_noninc_forward_search_again(int anonymous_var_nameX1900, int anonymous_var_nameX1901);

int rl_noninc_reverse_search_again(int anonymous_var_nameX1902, int anonymous_var_nameX1903);

int rl_insert_close(int anonymous_var_nameX1904, int anonymous_var_nameX1905);

void rl_callback_handler_install(const char* anonymous_var_nameX1906, void (*anonymous_var_nameX1907)(char*));

void rl_callback_read_char();

void rl_callback_handler_remove();

void rl_callback_sigcleanup();

int rl_vi_redo(int anonymous_var_nameX1908, int anonymous_var_nameX1909);

int rl_vi_undo(int anonymous_var_nameX1910, int anonymous_var_nameX1911);

int rl_vi_yank_arg(int anonymous_var_nameX1912, int anonymous_var_nameX1913);

int rl_vi_fetch_history(int anonymous_var_nameX1914, int anonymous_var_nameX1915);

int rl_vi_search_again(int anonymous_var_nameX1916, int anonymous_var_nameX1917);

int rl_vi_search(int anonymous_var_nameX1918, int anonymous_var_nameX1919);

int rl_vi_complete(int anonymous_var_nameX1920, int anonymous_var_nameX1921);

int rl_vi_tilde_expand(int anonymous_var_nameX1922, int anonymous_var_nameX1923);

int rl_vi_prev_word(int anonymous_var_nameX1924, int anonymous_var_nameX1925);

int rl_vi_next_word(int anonymous_var_nameX1926, int anonymous_var_nameX1927);

int rl_vi_end_word(int anonymous_var_nameX1928, int anonymous_var_nameX1929);

int rl_vi_insert_beg(int anonymous_var_nameX1930, int anonymous_var_nameX1931);

int rl_vi_append_mode(int anonymous_var_nameX1932, int anonymous_var_nameX1933);

int rl_vi_append_eol(int anonymous_var_nameX1934, int anonymous_var_nameX1935);

int rl_vi_eof_maybe(int anonymous_var_nameX1936, int anonymous_var_nameX1937);

int rl_vi_insertion_mode(int anonymous_var_nameX1938, int anonymous_var_nameX1939);

int rl_vi_insert_mode(int anonymous_var_nameX1940, int anonymous_var_nameX1941);

int rl_vi_movement_mode(int anonymous_var_nameX1942, int anonymous_var_nameX1943);

int rl_vi_arg_digit(int anonymous_var_nameX1944, int anonymous_var_nameX1945);

int rl_vi_change_case(int anonymous_var_nameX1946, int anonymous_var_nameX1947);

int rl_vi_put(int anonymous_var_nameX1948, int anonymous_var_nameX1949);

int rl_vi_column(int anonymous_var_nameX1950, int anonymous_var_nameX1951);

int rl_vi_delete_to(int anonymous_var_nameX1952, int anonymous_var_nameX1953);

int rl_vi_change_to(int anonymous_var_nameX1954, int anonymous_var_nameX1955);

int rl_vi_yank_to(int anonymous_var_nameX1956, int anonymous_var_nameX1957);

int rl_vi_yank_pop(int anonymous_var_nameX1958, int anonymous_var_nameX1959);

int rl_vi_rubout(int anonymous_var_nameX1960, int anonymous_var_nameX1961);

int rl_vi_delete(int anonymous_var_nameX1962, int anonymous_var_nameX1963);

int rl_vi_back_to_indent(int anonymous_var_nameX1964, int anonymous_var_nameX1965);

int rl_vi_unix_word_rubout(int anonymous_var_nameX1966, int anonymous_var_nameX1967);

int rl_vi_first_print(int anonymous_var_nameX1968, int anonymous_var_nameX1969);

int rl_vi_char_search(int anonymous_var_nameX1970, int anonymous_var_nameX1971);

int rl_vi_match(int anonymous_var_nameX1972, int anonymous_var_nameX1973);

int rl_vi_change_char(int anonymous_var_nameX1974, int anonymous_var_nameX1975);

int rl_vi_subst(int anonymous_var_nameX1976, int anonymous_var_nameX1977);

int rl_vi_overstrike(int anonymous_var_nameX1978, int anonymous_var_nameX1979);

int rl_vi_overstrike_delete(int anonymous_var_nameX1980, int anonymous_var_nameX1981);

int rl_vi_replace(int anonymous_var_nameX1982, int anonymous_var_nameX1983);

int rl_vi_set_mark(int anonymous_var_nameX1984, int anonymous_var_nameX1985);

int rl_vi_goto_mark(int anonymous_var_nameX1986, int anonymous_var_nameX1987);

int rl_vi_check();

int rl_vi_domove(int anonymous_var_nameX1988, int* anonymous_var_nameX1989);

int rl_vi_bracktype(int anonymous_var_nameX1990);

void rl_vi_start_inserting(int anonymous_var_nameX1991, int anonymous_var_nameX1992, int anonymous_var_nameX1993);

int rl_vi_fWord(int anonymous_var_nameX1994, int anonymous_var_nameX1995);

int rl_vi_bWord(int anonymous_var_nameX1996, int anonymous_var_nameX1997);

int rl_vi_eWord(int anonymous_var_nameX1998, int anonymous_var_nameX1999);

int rl_vi_fword(int anonymous_var_nameX2000, int anonymous_var_nameX2001);

int rl_vi_bword(int anonymous_var_nameX2002, int anonymous_var_nameX2003);

int rl_vi_eword(int anonymous_var_nameX2004, int anonymous_var_nameX2005);

char* readline(const char* anonymous_var_nameX2006);

int rl_set_prompt(const char* anonymous_var_nameX2007);

int rl_expand_prompt(char* anonymous_var_nameX2008);

int rl_initialize();

int rl_discard_argument();

int rl_add_defun(const char* anonymous_var_nameX2009, int (*anonymous_var_nameX2010)(int,int), int anonymous_var_nameX2011);

int rl_bind_key(int anonymous_var_nameX2012, int (*anonymous_var_nameX2013)(int,int));

int rl_bind_key_in_map(int anonymous_var_nameX2014, int (*anonymous_var_nameX2015)(int,int), struct _keymap_entry* anonymous_var_nameX2016);

int rl_unbind_key(int anonymous_var_nameX2017);

int rl_unbind_key_in_map(int anonymous_var_nameX2018, struct _keymap_entry* anonymous_var_nameX2019);

int rl_bind_key_if_unbound(int anonymous_var_nameX2020, int (*anonymous_var_nameX2021)(int,int));

int rl_bind_key_if_unbound_in_map(int anonymous_var_nameX2022, int (*anonymous_var_nameX2023)(int,int), struct _keymap_entry* anonymous_var_nameX2024);

int rl_unbind_function_in_map(int (*anonymous_var_nameX2025)(int,int), struct _keymap_entry* anonymous_var_nameX2026);

int rl_unbind_command_in_map(const char* anonymous_var_nameX2027, struct _keymap_entry* anonymous_var_nameX2028);

int rl_bind_keyseq(const char* anonymous_var_nameX2029, int (*anonymous_var_nameX2030)(int,int));

int rl_bind_keyseq_in_map(const char* anonymous_var_nameX2031, int (*anonymous_var_nameX2032)(int,int), struct _keymap_entry* anonymous_var_nameX2033);

int rl_bind_keyseq_if_unbound(const char* anonymous_var_nameX2034, int (*anonymous_var_nameX2035)(int,int));

int rl_bind_keyseq_if_unbound_in_map(const char* anonymous_var_nameX2036, int (*anonymous_var_nameX2037)(int,int), struct _keymap_entry* anonymous_var_nameX2038);

int rl_generic_bind(int anonymous_var_nameX2039, const char* anonymous_var_nameX2040, char* anonymous_var_nameX2041, struct _keymap_entry* anonymous_var_nameX2042);

char* rl_variable_value(const char* anonymous_var_nameX2043);

int rl_variable_bind(const char* anonymous_var_nameX2044, const char* anonymous_var_nameX2045);

int rl_set_key(const char* anonymous_var_nameX2046, int (*anonymous_var_nameX2047)(int,int), struct _keymap_entry* anonymous_var_nameX2048);

int rl_macro_bind(const char* anonymous_var_nameX2049, const char* anonymous_var_nameX2050, struct _keymap_entry* anonymous_var_nameX2051);

int rl_translate_keyseq(const char* anonymous_var_nameX2052, char* anonymous_var_nameX2053, int* anonymous_var_nameX2054);

char* rl_untranslate_keyseq(int anonymous_var_nameX2055);

int (*rl_named_function(const char* anonymous_var_nameX2056))(int,int);

int (*rl_function_of_keyseq(const char* anonymous_var_nameX2057, struct _keymap_entry* anonymous_var_nameX2058, int* anonymous_var_nameX2059))(int,int);

int (*rl_function_of_keyseq_len(const char* anonymous_var_nameX2060, long int anonymous_var_nameX2061, struct _keymap_entry* anonymous_var_nameX2062, int* anonymous_var_nameX2063))(int,int);

void rl_list_funmap_names();

char** rl_invoking_keyseqs_in_map(int (*anonymous_var_nameX2064)(int,int), struct _keymap_entry* anonymous_var_nameX2065);

char** rl_invoking_keyseqs(int (*anonymous_var_nameX2066)(int,int));

void rl_function_dumper(int anonymous_var_nameX2067);

void rl_macro_dumper(int anonymous_var_nameX2068);

void rl_variable_dumper(int anonymous_var_nameX2069);

int rl_read_init_file(const char* anonymous_var_nameX2070);

int rl_parse_and_bind(char* anonymous_var_nameX2071);

struct _keymap_entry* rl_make_bare_keymap();

int rl_empty_keymap(struct _keymap_entry* anonymous_var_nameX2072);

struct _keymap_entry* rl_copy_keymap(struct _keymap_entry* anonymous_var_nameX2073);

struct _keymap_entry* rl_make_keymap();

void rl_discard_keymap(struct _keymap_entry* anonymous_var_nameX2074);

void rl_free_keymap(struct _keymap_entry* anonymous_var_nameX2075);

struct _keymap_entry* rl_get_keymap_by_name(const char* anonymous_var_nameX2076);

char* rl_get_keymap_name(struct _keymap_entry* anonymous_var_nameX2077);

void rl_set_keymap(struct _keymap_entry* anonymous_var_nameX2078);

struct _keymap_entry* rl_get_keymap();

int rl_set_keymap_name(const char* anonymous_var_nameX2079, struct _keymap_entry* anonymous_var_nameX2080);

void rl_set_keymap_from_edit_mode();

char* rl_get_keymap_name_from_edit_mode();

int rl_add_funmap_entry(const char* anonymous_var_nameX2081, int (*anonymous_var_nameX2082)(int,int));

const char** rl_funmap_names();

void rl_initialize_funmap();

void rl_push_macro_input(char* anonymous_var_nameX2083);

void rl_add_undo(enum undo_code anonymous_var_nameX2084, int anonymous_var_nameX2085, int anonymous_var_nameX2086, char* anonymous_var_nameX2087);

void rl_free_undo_list();

int rl_do_undo();

int rl_begin_undo_group();

int rl_end_undo_group();

int rl_modifying(int anonymous_var_nameX2088, int anonymous_var_nameX2089);

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

int rl_show_char(int anonymous_var_nameX2090);

int rl_character_len(int anonymous_var_nameX2091, int anonymous_var_nameX2092);

void rl_redraw_prompt_last_line();

void rl_save_prompt();

void rl_restore_prompt();

void rl_replace_line(const char* anonymous_var_nameX2093, int anonymous_var_nameX2094);

int rl_insert_text(const char* anonymous_var_nameX2095);

int rl_delete_text(int anonymous_var_nameX2096, int anonymous_var_nameX2097);

int rl_kill_text(int anonymous_var_nameX2098, int anonymous_var_nameX2099);

char* rl_copy_text(int anonymous_var_nameX2100, int anonymous_var_nameX2101);

void rl_prep_terminal(int anonymous_var_nameX2102);

void rl_deprep_terminal();

void rl_tty_set_default_bindings(struct _keymap_entry* anonymous_var_nameX2103);

void rl_tty_unset_default_bindings(struct _keymap_entry* anonymous_var_nameX2104);

int rl_tty_set_echoing(int anonymous_var_nameX2105);

int rl_reset_terminal(const char* anonymous_var_nameX2106);

void rl_resize_terminal();

void rl_set_screen_size(int anonymous_var_nameX2107, int anonymous_var_nameX2108);

void rl_get_screen_size(int* anonymous_var_nameX2109, int* anonymous_var_nameX2110);

void rl_reset_screen_size();

char* rl_get_termcap(const char* anonymous_var_nameX2111);

int rl_stuff_char(int anonymous_var_nameX2112);

int rl_execute_next(int anonymous_var_nameX2113);

int rl_clear_pending_input();

int rl_read_key();

int rl_getc(struct _IO_FILE* anonymous_var_nameX2114);

int rl_set_keyboard_input_timeout(int anonymous_var_nameX2115);

void rl_extend_line_buffer(int anonymous_var_nameX2116);

int rl_ding();

int rl_alphabetic(int anonymous_var_nameX2117);

void rl_free(void* anonymous_var_nameX2118);

int rl_set_signals();

int rl_clear_signals();

void rl_cleanup_after_signal();

void rl_reset_after_signal();

void rl_free_line_state();

int rl_pending_signal();

void rl_check_signals();

void rl_echo_signal_char(int anonymous_var_nameX2119);

int rl_set_paren_blink_timeout(int anonymous_var_nameX2120);

void rl_clear_history();

int rl_maybe_save_line();

int rl_maybe_unsave_line();

int rl_maybe_replace_line();

int rl_complete_internal(int anonymous_var_nameX2121);

void rl_display_match_list(char** anonymous_var_nameX2122, int anonymous_var_nameX2123, int anonymous_var_nameX2124);

char** rl_completion_matches(const char* anonymous_var_nameX2125, char* (*anonymous_var_nameX2126)(const char*,int));

char* rl_username_completion_function(const char* anonymous_var_nameX2127, int anonymous_var_nameX2128);

char* rl_filename_completion_function(const char* anonymous_var_nameX2129, int anonymous_var_nameX2130);

int rl_completion_mode(int (*anonymous_var_nameX2131)(int,int));

int rl_save_state(struct readline_state* anonymous_var_nameX2132);

int rl_restore_state(struct readline_state* anonymous_var_nameX2133);

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

void history_set_history_state(struct _hist_state* anonymous_var_nameX2134);

void add_history(const char* anonymous_var_nameX2135);

void add_history_time(const char* anonymous_var_nameX2136);

struct _hist_entry* remove_history(int anonymous_var_nameX2137);

struct _hist_entry** remove_history_range(int anonymous_var_nameX2138, int anonymous_var_nameX2139);

struct _hist_entry* alloc_history_entry(char* anonymous_var_nameX2140, char* anonymous_var_nameX2141);

struct _hist_entry* copy_history_entry(struct _hist_entry* anonymous_var_nameX2142);

void* free_history_entry(struct _hist_entry* anonymous_var_nameX2143);

struct _hist_entry* replace_history_entry(int anonymous_var_nameX2144, const char* anonymous_var_nameX2145, void* anonymous_var_nameX2146);

void clear_history();

void stifle_history(int anonymous_var_nameX2147);

int unstifle_history();

int history_is_stifled();

struct _hist_entry** history_list();

int where_history();

struct _hist_entry* current_history();

struct _hist_entry* history_get(int anonymous_var_nameX2148);

long int history_get_time(struct _hist_entry* anonymous_var_nameX2149);

int history_total_bytes();

int history_set_pos(int anonymous_var_nameX2150);

struct _hist_entry* previous_history();

struct _hist_entry* next_history();

int history_search(const char* anonymous_var_nameX2151, int anonymous_var_nameX2152);

int history_search_prefix(const char* anonymous_var_nameX2153, int anonymous_var_nameX2154);

int history_search_pos(const char* anonymous_var_nameX2155, int anonymous_var_nameX2156, int anonymous_var_nameX2157);

int read_history(const char* anonymous_var_nameX2158);

int read_history_range(const char* anonymous_var_nameX2159, int anonymous_var_nameX2160, int anonymous_var_nameX2161);

int write_history(const char* anonymous_var_nameX2162);

int append_history(int anonymous_var_nameX2163, const char* anonymous_var_nameX2164);

int history_truncate_file(const char* anonymous_var_nameX2165, int anonymous_var_nameX2166);

int history_expand(char* anonymous_var_nameX2167, char** anonymous_var_nameX2168);

char* history_arg_extract(int anonymous_var_nameX2169, int anonymous_var_nameX2170, const char* anonymous_var_nameX2171);

char* get_history_event(const char* anonymous_var_nameX2172, int* anonymous_var_nameX2173, int anonymous_var_nameX2174);

char** history_tokenize(const char* anonymous_var_nameX2175);

char* setlocale(int __category, const char* __locale);

struct lconv* localeconv();

struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base);

struct __locale_struct* duplocale(struct __locale_struct* __dataset);

void freelocale(struct __locale_struct* __dataset);

struct __locale_struct* uselocale(struct __locale_struct* __dataset);

int xgetmaxx();

static void winsize_finalize(struct winsize* self);
int xgetmaxy();

static int lambda1(char* left, char* right);
void read_dir(struct sInfo* info);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*));
static struct list$1charph* list$1charph_merge_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*));
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_merge_list_with_lambda(struct list$1charph* left, struct list$1charph* right, int (*compare)(char*,char*));
static int lambda2(char* left, char* right);
void vd(struct sInfo* info);

_Bool change_directory(struct sInfo* info, char* path, char* cursor_file);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void fix_cursor(struct sInfo* info);

static int list$1charph_length(struct list$1charph* self);
void view(struct sInfo* info);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_each(struct list$1charph* self, void* parent, void (*block)(void*,char*,int,_Bool*));
void method_block1_mainc(struct __current_stack1__* parent, char* it, int it2, _Bool* it3);

static void stat_finalize(struct stat* self);
char* cursor_path(struct sInfo* info);

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value);
char* cursor_file(struct sInfo* info);

void search_file(struct sInfo* info);

void manual(struct sInfo* info);

void handmade_delete_file(char* path);

void input(struct sInfo* info);

static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int main(int argc, char** argv);

static void sInfo_finalize(struct sInfo* self);
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









































int xgetmaxx(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value36;
struct winsize* ws_5;
int result_6;
_Bool _if_conditional5;
int __result53__;
int __result54__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&ws_5, 0, sizeof(struct winsize*));
memset(&result_6, 0, sizeof(int));
    ws_5=(struct winsize*)come_increment_ref_count(((struct winsize*)(right_value36=(struct winsize*)come_calloc(1, sizeof(struct winsize)*(1), "main.c", 28))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(winsize_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36;
    __freed_obj__ = 0;
    ioctl(1,21523,ws_5);
    __freed_obj__ = 0;
    result_6=((struct winsize*)come_null_check(ws_5, "main.c", 31))->ws_col;
    __freed_obj__ = 0;
    if(_if_conditional5=result_6==-1||result_6==0,    __freed_obj__ = 0, 
    _if_conditional5) {
        __result53__ = ((0!=(const void*)((stdscr)))?(((struct _win_st*)come_null_check((stdscr), "main.c", 34))->_maxx+1):(-1));
        if(ws_5 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_5, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
    }
    else {
        __result54__ = result_6;
        if(ws_5 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_5, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result54__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result55__ = result_6;
    if(ws_5 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
    if(ws_5 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void winsize_finalize(struct winsize* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int xgetmaxy(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
struct winsize* ws_7;
int result_8;
_Bool _if_conditional6;
int __result56__;
int __result57__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&ws_7, 0, sizeof(struct winsize*));
memset(&result_8, 0, sizeof(int));
    ws_7=(struct winsize*)come_increment_ref_count(((struct winsize*)(right_value37=(struct winsize*)come_calloc(1, sizeof(struct winsize)*(1), "main.c", 45))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(winsize_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37;
    __freed_obj__ = 0;
    ioctl(1,21523,ws_7);
    __freed_obj__ = 0;
    result_8=((struct winsize*)come_null_check(ws_7, "main.c", 48))->ws_row;
    __freed_obj__ = 0;
    if(_if_conditional6=result_8==-1||result_8==0,    __freed_obj__ = 0, 
    _if_conditional6) {
        __result56__ = ((0!=(const void*)((stdscr)))?(((struct _win_st*)come_null_check((stdscr), "main.c", 51))->_maxy+1):(-1));
        if(ws_7 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_7, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    else {
        __result57__ = result_8;
        if(ws_7 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_7, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result58__ = result_8;
    if(ws_7 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
    if(ws_7 && !__freed_obj__) { come_call_finalizer(winsize_finalize,ws_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int lambda1(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result69__ = strcmp(left,right);
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
}

void read_dir(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value38;
void* right_value39;
struct list$1charph* __dec_obj6;
struct __dirstream* dir_11;
_Bool _if_conditional8;
void* right_value43;
struct dirent* entry_15;
_Bool _while_condtional2;
void* right_value44;
void* right_value70;
struct list$1charph* __dec_obj13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&dir_11, 0, sizeof(struct __dirstream*));
memset(&right_value43, 0, sizeof(void*));
memset(&entry_15, 0, sizeof(struct dirent*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    __dec_obj6=((struct sInfo*)come_null_check(info, "main.c", 62))->files;
    ((struct sInfo*)come_null_check(info, "main.c", 62))->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 62))))))));
    if(__dec_obj6) { come_call_finalizer(list$1charph_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value38;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value39;
    __freed_obj__ = 0;
    dir_11=opendir(((struct sInfo*)come_null_check(info, "main.c", 64))->path);
    __freed_obj__ = 0;
    if(_if_conditional8=dir_11==((void*)0),    __freed_obj__ = 0, 
    _if_conditional8) {
        ((struct sInfo*)come_null_check(info, "main.c", 67))->cursor=0;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "main.c", 68))->page=0;
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 69))->files, "main.c", 69)),(char*)come_increment_ref_count(((char*)(right_value43=__builtin_string("NO FILES")))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value43;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    while(_while_condtional2=entry_15=readdir(dir_11),    __freed_obj__ = 0, 
    _while_condtional2) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 75))->files, "main.c", 75)),(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(((struct dirent*)come_null_check(entry_15, "main.c", 75))->d_name)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value44;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    closedir(dir_11);
    __freed_obj__ = 0;
    __dec_obj13=((struct sInfo*)come_null_check(info, "main.c", 80))->files;
    ((struct sInfo*)come_null_check(info, "main.c", 80))->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value70=list$1charph_sort_with_lambda(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 80))->files, "main.c", 80)),lambda1))));
    if(__dec_obj13) { come_call_finalizer(list$1charph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value70;
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 155))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 156))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 157))->len=0;
        __freed_obj__ = 0;
        __result59__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_9;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1charph*));
            it_9=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 174))->head;
            __freed_obj__ = 0;
            while(_while_condtional1=it_9!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional1) {
                prev_it_10=it_9;
                __freed_obj__ = 0;
                it_9=((struct list_item$1charph*)come_null_check(it_9, "/usr/local/include/comelang2.h", 177))->next;
                __freed_obj__ = 0;
                if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
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

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
void* right_value40;
struct list_item$1charph* litem_12;
char* __dec_obj7;
_Bool _if_conditional10;
void* right_value41;
struct list_item$1charph* litem_13;
char* __dec_obj8;
void* right_value42;
struct list_item$1charph* litem_14;
char* __dec_obj9;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1charph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1charph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1charph*));
            if(_if_conditional9=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==0,            __freed_obj__ = 0, 
            _if_conditional9) {
                litem_12=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 277))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 279))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 280))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj7=((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 281))->item;
                ((struct list_item$1charph*)come_null_check(litem_12, "/usr/local/include/comelang2.h", 281))->item=(char*)come_increment_ref_count(item);
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 283))->tail=litem_12;
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 284))->head=litem_12;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional10=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len==1,                __freed_obj__ = 0, 
                _if_conditional10) {
                    litem_13=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 287))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 289))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 289))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 290))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj8=((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 291))->item;
                    ((struct list_item$1charph*)come_null_check(litem_13, "/usr/local/include/comelang2.h", 291))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 293))->tail=litem_13;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 294))->head, "/usr/local/include/comelang2.h", 294))->next=litem_13;
                    __freed_obj__ = 0;
                }
                else {
                    litem_14=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 297))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_14, "/usr/local/include/comelang2.h", 299))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 299))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_14, "/usr/local/include/comelang2.h", 300))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj9=((struct list_item$1charph*)come_null_check(litem_14, "/usr/local/include/comelang2.h", 301))->item;
                    ((struct list_item$1charph*)come_null_check(litem_14, "/usr/local/include/comelang2.h", 301))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 303))->tail, "/usr/local/include/comelang2.h", 303))->next=litem_14;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 304))->tail=litem_14;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 307))->len++;
            __freed_obj__ = 0;
            __result60__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value69;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
        __result68__ = __result_obj__ = ((struct list$1charph*)(right_value69=list$1charph_merge_sort_with_lambda(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 892)),compare)));
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_merge_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
void* right_value51;
struct list$1charph* __result64__;
_Bool _if_conditional15;
void* right_value52;
struct list$1charph* __result65__;
void* right_value53;
void* right_value54;
struct list$1charph* list1_21;
void* right_value55;
void* right_value56;
struct list$1charph* list2_22;
struct list_item$1charph* it_23;
_Bool _while_condtional4;
void* right_value57;
void* right_value58;
_Bool _if_conditional16;
_Bool _if_conditional17;
void* right_value59;
void* right_value60;
struct list$1charph* left_list_24;
void* right_value61;
struct list$1charph* right_list_25;
void* right_value68;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&list1_21, 0, sizeof(struct list$1charph*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&list2_22, 0, sizeof(struct list$1charph*));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&left_list_24, 0, sizeof(struct list$1charph*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_list_25, 0, sizeof(struct list$1charph*));
memset(&right_value68, 0, sizeof(void*));
            if(_if_conditional11=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 861))->head==((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                __result64__ = __result_obj__ = ((struct list$1charph*)(right_value51=list$1charph_clone(self)));
                __freed_obj__ = 0;
                return __result64__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 865))->head, "/usr/local/include/comelang2.h", 865))->next==((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                __result65__ = __result_obj__ = ((struct list$1charph*)(right_value52=list$1charph_clone(self)));
                __freed_obj__ = 0;
                return __result65__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list1_21=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 865))), "/usr/local/include/comelang2.h", 865)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value54;
            __freed_obj__ = 0;
            list2_22=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value55=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 866))), "/usr/local/include/comelang2.h", 866)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value55;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value56;
            __freed_obj__ = 0;
            it_23=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 868))->head;
            __freed_obj__ = 0;
            while(_while_condtional4=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional4) {
                list$1charph_push_back(((struct list$1charph*)come_null_check(list1_21, "/usr/local/include/comelang2.h", 871)),(char*)come_increment_ref_count(((char*)(right_value57=string_clone(((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 871))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(list2_22, "/usr/local/include/comelang2.h", 872)),(char*)come_increment_ref_count(((char*)(right_value58=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 872))->next, "/usr/local/include/comelang2.h", 872))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value58;
                __freed_obj__ = 0;
                if(_if_conditional16=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 878))->next, "/usr/local/include/comelang2.h", 878))->next==((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_23=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 878))->next, "/usr/local/include/comelang2.h", 878))->next;
                __freed_obj__ = 0;
                if(_if_conditional17=((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 884))->next==((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    list$1charph_push_back(((struct list$1charph*)come_null_check(list1_21, "/usr/local/include/comelang2.h", 881)),(char*)come_increment_ref_count(((char*)(right_value59=string_clone(((struct list_item$1charph*)come_null_check(it_23, "/usr/local/include/comelang2.h", 881))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            left_list_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=list$1charph_merge_sort_with_lambda(((struct list$1charph*)come_null_check(list1_21, "/usr/local/include/comelang2.h", 886)),compare))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value60;
            __freed_obj__ = 0;
            right_list_25=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=list$1charph_merge_sort_with_lambda(((struct list$1charph*)come_null_check(list2_22, "/usr/local/include/comelang2.h", 887)),compare))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value61;
            __freed_obj__ = 0;
            __result67__ = __result_obj__ = ((struct list$1charph*)(right_value68=list$1charph_merge_list_with_lambda(((struct list$1charph*)come_null_check(left_list_24, "/usr/local/include/comelang2.h", 889)),right_list_25,compare)));
            if(list1_21 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,list1_21, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list2_22 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,list2_22, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_list_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,left_list_24, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_list_25 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_list_25, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result67__;
            __freed_obj__ = 0;
            if(list1_21 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,list1_21, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list2_22 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,list2_22, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_list_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,left_list_24, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_list_25 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_list_25, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
struct list$1charph* __result61__;
void* right_value45;
void* right_value46;
struct list$1charph* result_16;
struct list_item$1charph* it_17;
_Bool _while_condtional3;
void* right_value50;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct list$1charph*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
                    if(_if_conditional12=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional12) {
                        __result61__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_16=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value45=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 193))), "/usr/local/include/comelang2.h", 193)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value46;
                    __freed_obj__ = 0;
                    it_17=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 195))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_17!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_16, "/usr/local/include/comelang2.h", 197)),(char*)come_increment_ref_count(((char*)(right_value50=string_clone(((struct list_item$1charph*)come_null_check(it_17, "/usr/local/include/comelang2.h", 197))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        it_17=((struct list_item$1charph*)come_null_check(it_17, "/usr/local/include/comelang2.h", 199))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result63__ = __result_obj__ = result_16;
                    if(result_16 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result63__;
                    __freed_obj__ = 0;
                    if(result_16 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
void* right_value47;
struct list_item$1charph* litem_18;
char* __dec_obj10;
_Bool _if_conditional14;
void* right_value48;
struct list_item$1charph* litem_19;
char* __dec_obj11;
void* right_value49;
struct list_item$1charph* litem_20;
char* __dec_obj12;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional13=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 237))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                litem_18=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value47;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_18, "/usr/local/include/comelang2.h", 209))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_18, "/usr/local/include/comelang2.h", 210))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1charph*)come_null_check(litem_18, "/usr/local/include/comelang2.h", 211))->item;
                                ((struct list_item$1charph*)come_null_check(litem_18, "/usr/local/include/comelang2.h", 211))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 213))->tail=litem_18;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 214))->head=litem_18;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional14=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 237))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional14) {
                                    litem_19=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value48;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_19, "/usr/local/include/comelang2.h", 219))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 219))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_19, "/usr/local/include/comelang2.h", 220))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1charph*)come_null_check(litem_19, "/usr/local/include/comelang2.h", 221))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_19, "/usr/local/include/comelang2.h", 221))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 223))->tail=litem_19;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 224))->head, "/usr/local/include/comelang2.h", 224))->next=litem_19;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_20=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value49;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_20, "/usr/local/include/comelang2.h", 229))->prev=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 229))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_20, "/usr/local/include/comelang2.h", 230))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=((struct list_item$1charph*)come_null_check(litem_20, "/usr/local/include/comelang2.h", 231))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_20, "/usr/local/include/comelang2.h", 231))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 233))->tail, "/usr/local/include/comelang2.h", 233))->next=litem_20;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 234))->tail=litem_20;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 237))->len++;
                            __freed_obj__ = 0;
                            __result62__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result62__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_merge_list_with_lambda(struct list$1charph* left, struct list$1charph* right, int (*compare)(char*,char*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value62;
void* right_value63;
struct list$1charph* result_26;
struct list_item$1charph* it_27;
struct list_item$1charph* it2_28;
_Bool _while_condtional5;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
void* right_value64;
void* right_value65;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _while_condtional6;
void* right_value66;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _while_condtional7;
void* right_value67;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct list$1charph*));
memset(&it_27, 0, sizeof(struct list_item$1charph*));
memset(&it2_28, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
                result_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value63=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value62=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 806))), "/usr/local/include/comelang2.h", 806)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value63;
                __freed_obj__ = 0;
                it_27=((struct list$1charph*)come_null_check(left, "/usr/local/include/comelang2.h", 808))->head;
                __freed_obj__ = 0;
                it2_28=((struct list$1charph*)come_null_check(right, "/usr/local/include/comelang2.h", 809))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional5) {
                    if(_if_conditional18=it_27&&it2_28,                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        if(_if_conditional19=((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 831))->item==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional19) {
                            it_27=((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 814))->next;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional20=((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 831))->item==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional20) {
                                it2_28=((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 817))->next;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional21=compare(((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 831))->item,((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 831))->item)<=0,                                __freed_obj__ = 0, 
                                _if_conditional21) {
                                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_26, "/usr/local/include/comelang2.h", 821)),(char*)come_increment_ref_count(((char*)(right_value64=string_clone(((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 821))->item)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value64;
                                    __freed_obj__ = 0;
                                    it_27=((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 823))->next;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_26, "/usr/local/include/comelang2.h", 826)),(char*)come_increment_ref_count(((char*)(right_value65=string_clone(((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 826))->item)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value65;
                                    __freed_obj__ = 0;
                                    it2_28=((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 829))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional22=it_27==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        if(_if_conditional23=it2_28!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional23) {
                            while(_while_condtional6=it2_28!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional6) {
                                list$1charph_push_back(((struct list$1charph*)come_null_check(result_26, "/usr/local/include/comelang2.h", 836)),(char*)come_increment_ref_count(((char*)(right_value66=string_clone(((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 836))->item)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value66;
                                __freed_obj__ = 0;
                                it2_28=((struct list_item$1charph*)come_null_check(it2_28, "/usr/local/include/comelang2.h", 838))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional24=it2_28==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional24) {
                            if(_if_conditional25=it_27!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional25) {
                                while(_while_condtional7=it_27!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional7) {
                                    list$1charph_push_back(((struct list$1charph*)come_null_check(result_26, "/usr/local/include/comelang2.h", 846)),(char*)come_increment_ref_count(((char*)(right_value67=string_clone(((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 846))->item)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value67;
                                    __freed_obj__ = 0;
                                    it_27=((struct list_item$1charph*)come_null_check(it_27, "/usr/local/include/comelang2.h", 848))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result66__ = __result_obj__ = result_26;
                if(result_26 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result66__;
                __freed_obj__ = 0;
                if(result_26 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int lambda2(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result70__ = strcmp(left,right);
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
}

void vd(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value71;
char* line_29;
_Bool _if_conditional26;
void* right_value72;
char* cmdline_30;
struct _IO_FILE* f_32;
_Bool _if_conditional27;
void* right_value73;
void* right_value74;
_Bool _while_condtional8;
char* result_34;
_Bool _if_conditional28;
void* right_value75;
void* right_value76;
_Bool _if_conditional29;
void* right_value77;
struct list$1charph* __dec_obj14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&line_29, 0, sizeof(char*));
memset(&right_value72, 0, sizeof(void*));
memset(&cmdline_30, 0, sizeof(char*));
memset(&f_32, 0, sizeof(struct _IO_FILE*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&result_34, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
    line_29=readline(((char*)(right_value71=charp_operator_add(getenv("PWD")," > "))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = 0;
    if(_if_conditional26=line_29==((void*)0),    __freed_obj__ = 0, 
    _if_conditional26) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    cmdline_30=(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(line_29))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value72;
    __freed_obj__ = 0;
    free(line_29);
    __freed_obj__ = 0;
    char buf_31[8192];
    memset(&buf_31, 0, sizeof(char)    *(8192)    );
    __freed_obj__ = 0;
    f_32=popen(cmdline_30,"r");
    __freed_obj__ = 0;
    if(_if_conditional27=f_32==((void*)0),    __freed_obj__ = 0, 
    _if_conditional27) {
        if(cmdline_30 && !__freed_obj__) { cmdline_30 = come_decrement_ref_count(cmdline_30, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 101))->files, "main.c", 101)),(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(".")))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value73;
    __freed_obj__ = 0;
    list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 102))->files, "main.c", 102)),(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string("..")))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value74;
    __freed_obj__ = 0;
    while(_while_condtional8=1,    __freed_obj__ = 0, 
    _while_condtional8) {
        char file_33[4096];
        memset(&file_33, 0, sizeof(char)        *(4096)        );
        __freed_obj__ = 0;
        result_34=fgets(file_33,4096,f_32);
        __freed_obj__ = 0;
        if(_if_conditional28=result_34==((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 112))->files, "main.c", 112)),(char*)come_increment_ref_count(((char*)(right_value76=string_chomp(((char*)come_null_check(((char*)(right_value75=__builtin_string(result_34))), "main.c", 112)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value75;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value76;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional29=pclose(f_32)<0,    __freed_obj__ = 0, 
    _if_conditional29) {
        if(cmdline_30 && !__freed_obj__) { cmdline_30 = come_decrement_ref_count(cmdline_30, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj14=((struct sInfo*)come_null_check(info, "main.c", 118))->files;
    ((struct sInfo*)come_null_check(info, "main.c", 118))->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=list$1charph_sort_with_lambda(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 118))->files, "main.c", 118)),lambda2))));
    if(__dec_obj14) { come_call_finalizer(list$1charph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value77;
    __freed_obj__ = 0;
    if(cmdline_30 && !__freed_obj__) { cmdline_30 = come_decrement_ref_count(cmdline_30, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool change_directory(struct sInfo* info, char* path, char* cursor_file){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* absolute_path_35;
void* right_value78;
char* absolute_path2_36;
char* __dec_obj15;
_Bool _if_conditional30;
int i_37;
struct list$1charph* o2_saved_38;
char* it_41;
_Bool _for_condtionalA1;
_Bool _if_conditional35;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&absolute_path_35, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&absolute_path2_36, 0, sizeof(char*));
memset(&i_37, 0, sizeof(int));
memset(&o2_saved_38, 0, sizeof(struct list$1charph*));
memset(&it_41, 0, sizeof(char*));
    absolute_path_35=realpath(path,((void*)0));
    __freed_obj__ = 0;
    absolute_path2_36=(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(absolute_path_35))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value78;
    __freed_obj__ = 0;
    free(absolute_path_35);
    __freed_obj__ = 0;
    __dec_obj15=((struct sInfo*)come_null_check(info, "main.c", 131))->path;
    ((struct sInfo*)come_null_check(info, "main.c", 131))->path=(char*)come_increment_ref_count(absolute_path2_36);
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    read_dir(info);
    __freed_obj__ = 0;
    chdir(((struct sInfo*)come_null_check(info, "main.c", 134))->path);
    __freed_obj__ = 0;
    setenv("PWD",((struct sInfo*)come_null_check(info, "main.c", 135))->path,1);
    __freed_obj__ = 0;
    if(_if_conditional30=cursor_file,    __freed_obj__ = 0, 
    _if_conditional30) {
        i_37=0;
        __freed_obj__ = 0;
        for(
        o2_saved_38=(struct list$1charph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "main.c", 148))->files)),it_41=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_38), "main.c", 148))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_38), "main.c", 148))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_41=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_38), "main.c", 148))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional35=strcmp(it_41,cursor_file)==0,            __freed_obj__ = 0, 
            _if_conditional35) {
                ((struct sInfo*)come_null_check(info, "main.c", 141))->cursor=i_37;
                __freed_obj__ = 0;
                fix_cursor(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_37++;
            __freed_obj__ = 0;
        }
        if(o2_saved_38 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        ((struct sInfo*)come_null_check(info, "main.c", 150))->cursor=0;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "main.c", 151))->page=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result78__ = 1;
    if(absolute_path2_36 && !__freed_obj__) { absolute_path2_36 = come_decrement_ref_count(absolute_path2_36, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(absolute_path2_36 && !__freed_obj__) { absolute_path2_36 = come_decrement_ref_count(absolute_path2_36, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
char* result_39;
char* __result71__;
_Bool _if_conditional32;
char* __result72__;
char* result_40;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_39, 0, sizeof(char*));
memset(&result_40, 0, sizeof(char*));
            if(_if_conditional31=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional31) {
                __freed_obj__ = 0;
                memset(&result_39,0,sizeof(char*));
                __freed_obj__ = 0;
                __result71__ = __result_obj__ = result_39;
                __freed_obj__ = 0;
                return __result71__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 341))->it=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 341))->head;
            __freed_obj__ = 0;
            if(_if_conditional32=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 347))->it,            __freed_obj__ = 0, 
            _if_conditional32) {
                __result72__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 344))->it, "/usr/local/include/comelang2.h", 344))->item;
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_40,0,sizeof(char*));
            __freed_obj__ = 0;
            __result73__ = __result_obj__ = result_40;
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result74__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 371))->it==((void*)0);
            __freed_obj__ = 0;
            return __result74__;
            __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional33;
char* result_42;
char* __result75__;
_Bool _if_conditional34;
char* __result76__;
char* result_43;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_42, 0, sizeof(char*));
memset(&result_43, 0, sizeof(char*));
            if(_if_conditional33=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional33) {
                __freed_obj__ = 0;
                memset(&result_42,0,sizeof(char*));
                __freed_obj__ = 0;
                __result75__ = __result_obj__ = result_42;
                __freed_obj__ = 0;
                return __result75__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 359))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 359))->it, "/usr/local/include/comelang2.h", 359))->next;
            __freed_obj__ = 0;
            if(_if_conditional34=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 365))->it,            __freed_obj__ = 0, 
            _if_conditional34) {
                __result76__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 362))->it, "/usr/local/include/comelang2.h", 362))->item;
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_43,0,sizeof(char*));
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = result_43;
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
}

void fix_cursor(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int maxx_44;
int maxy_45;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&maxx_44, 0, sizeof(int));
memset(&maxy_45, 0, sizeof(int));
    maxx_44=xgetmaxx();
    __freed_obj__ = 0;
    maxy_45=xgetmaxy()-1;
    __freed_obj__ = 0;
    if(_if_conditional36=((struct sInfo*)come_null_check(info, "main.c", 166))->cursor>=list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 166))->files, "main.c", 166))),    __freed_obj__ = 0, 
    _if_conditional36) {
        ((struct sInfo*)come_null_check(info, "main.c", 164))->cursor=list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 164))->files, "main.c", 164)))-1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional37=((struct sInfo*)come_null_check(info, "main.c", 170))->cursor<0,    __freed_obj__ = 0, 
    _if_conditional37) {
        ((struct sInfo*)come_null_check(info, "main.c", 167))->cursor=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "main.c", 170))->page=((struct sInfo*)come_null_check(info, "main.c", 170))->cursor/(3*maxy_45);
    __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result79__ = ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
}

void view(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int maxx_46;
int maxy_47;
int files_in_one_page_48;
int head_49;
int tail_50;
void* right_value81;
struct __current_stack1__ __current_stack1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&maxx_46, 0, sizeof(int));
memset(&maxy_47, 0, sizeof(int));
memset(&files_in_one_page_48, 0, sizeof(int));
memset(&head_49, 0, sizeof(int));
memset(&tail_50, 0, sizeof(int));
memset(&right_value81, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    maxx_46=xgetmaxx();
    __freed_obj__ = 0;
    maxy_47=xgetmaxy()-1;
    __freed_obj__ = 0;
    werase(stdscr);
    __freed_obj__ = 0;
    files_in_one_page_48=maxy_47*3;
    __freed_obj__ = 0;
    head_49=((struct sInfo*)come_null_check(info, "main.c", 182))->page*files_in_one_page_48;
    __freed_obj__ = 0;
    tail_50=(((struct sInfo*)come_null_check(info, "main.c", 183))->page+1)*files_in_one_page_48;
    __freed_obj__ = 0;
    __current_stack1__.info = &info;
    __current_stack1__.maxx_46 = &maxx_46;
    __current_stack1__.maxy_47 = &maxy_47;
    __current_stack1__.files_in_one_page_48 = &files_in_one_page_48;
    __current_stack1__.head_49 = &head_49;
    __current_stack1__.tail_50 = &tail_50;
    list$1charph_each(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value81=list$1charph_sublist(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 217))->files, "main.c", 217)),head_49,tail_50))), "main.c", 217)),&__current_stack1__,(void*)method_block1_mainc);
                        if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81;
    __freed_obj__ = 0;
    wattr_on(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
    __freed_obj__ = 0;
    mvprintw(maxy_47,0,"%s page %d files %d head %d tail %d press ? for manual",((struct sInfo*)come_null_check(info, "main.c", 218))->path,((struct sInfo*)come_null_check(info, "main.c", 218))->page,list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 218))->files, "main.c", 218))),head_49,tail_50);
    __freed_obj__ = 0;
    wattr_off(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
    __freed_obj__ = 0;
    wrefresh(stdscr);
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value79;
void* right_value80;
struct list$1charph* result_51;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
struct list_item$1charph* it_52;
int i_53;
_Bool _while_condtional9;
_Bool _if_conditional42;
struct list$1charph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&result_51, 0, sizeof(struct list$1charph*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&i_53, 0, sizeof(int));
        result_51=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value79=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 694))), "/usr/local/include/comelang2.h", 694)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80;
        __freed_obj__ = 0;
        if(_if_conditional38=begin<0,        __freed_obj__ = 0, 
        _if_conditional38) {
            begin+=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 697))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional39=tail<0,        __freed_obj__ = 0, 
        _if_conditional39) {
            tail+=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 701))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional40=begin<0,        __freed_obj__ = 0, 
        _if_conditional40) {
            begin=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional41=tail>=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 712))->len,        __freed_obj__ = 0, 
        _if_conditional41) {
            tail=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 709))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_52=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 712))->head;
        __freed_obj__ = 0;
        i_53=0;
        __freed_obj__ = 0;
        while(_while_condtional9=it_52!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional9) {
            if(_if_conditional42=i_53>=begin&&i_53<tail,            __freed_obj__ = 0, 
            _if_conditional42) {
                list$1charph_push_back(((struct list$1charph*)come_null_check(result_51, "/usr/local/include/comelang2.h", 716)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_52, "/usr/local/include/comelang2.h", 716))->item));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_52=((struct list_item$1charph*)come_null_check(it_52, "/usr/local/include/comelang2.h", 718))->next;
            __freed_obj__ = 0;
            i_53++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result80__ = __result_obj__ = result_51;
        if(result_51 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result80__;
        __freed_obj__ = 0;
        if(result_51 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_each(struct list$1charph* self, void* parent, void (*block)(void*,char*,int,_Bool*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_54;
int i_55;
_Bool _while_condtional10;
_Bool end_flag_56;
_Bool _if_conditional43;
struct list$1charph* __result81__;
_Bool _if_conditional44;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&i_55, 0, sizeof(int));
memset(&end_flag_56, 0, sizeof(_Bool));
        it_54=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 375))->head;
        __freed_obj__ = 0;
        i_55=0;
        __freed_obj__ = 0;
        while(_while_condtional10=it_54!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional10) {
            end_flag_56=(_Bool)0;
            __freed_obj__ = 0;
            block(parent,((struct list_item$1charph*)come_null_check(it_54, "/usr/local/include/comelang2.h", 379))->item,i_55,&end_flag_56);
            __freed_obj__ = 0;
            if(_if_conditional43=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "/usr/local/include/comelang2.h", 385))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional43) {
                __result81__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional44=end_flag_56==(_Bool)1,            __freed_obj__ = 0, 
            _if_conditional44) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_54=((struct list_item$1charph*)come_null_check(it_54, "/usr/local/include/comelang2.h", 388))->next;
            __freed_obj__ = 0;
            i_55++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result82__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
}

void method_block1_mainc(struct __current_stack1__* parent, char* it, int it2, _Bool* it3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
void* right_value83;
void* right_value84;
char* path_57;
struct stat stat__58;
_Bool is_dir_59;
int index_60;
int cols_61;
int x_62;
int y_63;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value85;
void* right_value86;
_Bool _if_conditional47;
void* right_value87;
void* right_value88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&path_57, 0, sizeof(char*));
memset(&stat__58, 0, sizeof(struct stat));
memset(&is_dir_59, 0, sizeof(_Bool));
memset(&index_60, 0, sizeof(int));
memset(&cols_61, 0, sizeof(int));
memset(&x_62, 0, sizeof(int));
memset(&y_63, 0, sizeof(int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
        path_57=(char*)come_increment_ref_count(((char*)(right_value84=string_operator_add(((struct sInfo*)come_null_check((*(parent->info)), "main.c", 187))->path,((char*)(right_value83=string_operator_add(((char*)(right_value82=__builtin_string("/"))),it)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value82;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value83;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value84;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (void)stat(path_57,&stat__58);
        __freed_obj__ = 0;
        is_dir_59=((((stat__58.st_mode))&61440)==(16384));
        __freed_obj__ = 0;
        index_60=it2;
        __freed_obj__ = 0;
        cols_61=(*(parent->maxx_46))/3;
        __freed_obj__ = 0;
        x_62=(index_60/(*(parent->maxy_47)))*cols_61;
        __freed_obj__ = 0;
        y_63=index_60%(*(parent->maxy_47));
        __freed_obj__ = 0;
        if(_if_conditional45=it2+(*(parent->head_49))==((struct sInfo*)come_null_check((*(parent->info)), "main.c", 215))->cursor,        __freed_obj__ = 0, 
        _if_conditional45) {
            wattr_on(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
            __freed_obj__ = 0;
            if(_if_conditional46=is_dir_59,            __freed_obj__ = 0, 
            _if_conditional46) {
                mvprintw(y_63,x_62,"%s/",((char*)(right_value85=charp_substring(((char*)come_null_check(it, "main.c", 200)),0,cols_61-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = 0;
            }
            else {
                mvprintw(y_63,x_62,"%s",((char*)(right_value86=charp_substring(((char*)come_null_check(it, "main.c", 203)),0,cols_61))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value86;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            wattr_off(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional47=is_dir_59,            __freed_obj__ = 0, 
            _if_conditional47) {
                mvprintw(y_63,x_62,"%s/",((char*)(right_value87=charp_substring(((char*)come_null_check(it, "main.c", 209)),0,cols_61-1))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
            }
            else {
                mvprintw(y_63,x_62,"%s",((char*)(right_value88=charp_substring(((char*)come_null_check(it, "main.c", 212)),0,cols_61))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(path_57 && !__freed_obj__) { path_57 = come_decrement_ref_count(path_57, (void*)0, (void*)0, 0, 0, 0); }
        if((&stat__58) && !__freed_obj__) { come_call_finalizer(stat_finalize,(&stat__58), (void*)0, (void*)0, 1, 0, 0, 0); }
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

char* cursor_path(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* file_name_66;
void* right_value90;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&file_name_66, 0, sizeof(char*));
memset(&right_value90, 0, sizeof(void*));
    file_name_66=((char*)(right_value89=list$1charph_item(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 227))->files, "main.c", 227)),((struct sInfo*)come_null_check(info, "main.c", 227))->cursor,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    __result85__ = __result_obj__ = ((char*)(right_value90=xsprintf("%s/%s",((struct sInfo*)come_null_check(info, "main.c", 228))->path,file_name_66)));
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
struct list_item$1charph* it_64;
int i_65;
_Bool _while_condtional11;
_Bool _if_conditional49;
char* __result83__;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_64, 0, sizeof(struct list_item$1charph*));
memset(&i_65, 0, sizeof(int));
        if(_if_conditional48=position<0,        __freed_obj__ = 0, 
        _if_conditional48) {
            position+=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 397))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_64=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 400))->head;
        __freed_obj__ = 0;
        i_65=0;
        __freed_obj__ = 0;
        while(_while_condtional11=it_64!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional49=position==i_65,            __freed_obj__ = 0, 
            _if_conditional49) {
                __result83__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(it_64, "/usr/local/include/comelang2.h", 404))->item;
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_64=((struct list_item$1charph*)come_null_check(it_64, "/usr/local/include/comelang2.h", 406))->next;
            __freed_obj__ = 0;
            i_65++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result84__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
}

char* cursor_file(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
void* right_value92;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value92=__builtin_string(((char*)(right_value91=list$1charph_item(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 233))->files, "main.c", 233)),((struct sInfo*)come_null_check(info, "main.c", 233))->cursor,((void*)0)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

void search_file(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* str_67;
_Bool _while_condtional12;
int key_68;
_Bool _if_conditional50;
void* right_value94;
char* __dec_obj16;
int n_69;
struct list$1charph* o2_saved_70;
char* it_71;
_Bool _for_condtionalA2;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&str_67, 0, sizeof(char*));
memset(&key_68, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&n_69, 0, sizeof(int));
memset(&o2_saved_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(char*));
    str_67=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(""))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    while(_while_condtional12=1,    __freed_obj__ = 0, 
    _while_condtional12) {
        key_68=wgetch(stdscr);
        __freed_obj__ = 0;
        if(_if_conditional50=key_68>=32&&key_68<=126,        __freed_obj__ = 0, 
        _if_conditional50) {
            __dec_obj16=str_67;
            str_67=(char*)come_increment_ref_count(((char*)(right_value94=xsprintf("%s%c",str_67,key_68))));
            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value94;
            __freed_obj__ = 0;
            n_69=0;
            __freed_obj__ = 0;
            for(
            o2_saved_70=(struct list$1charph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "main.c", 252))->files)),it_71=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_70), "main.c", 252))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_70), "main.c", 252))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            it_71=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_70), "main.c", 252))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional51=strcasestr(it_71,str_67),                __freed_obj__ = 0, 
                _if_conditional51) {
                    ((struct sInfo*)come_null_check(info, "main.c", 247))->cursor=n_69;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                n_69++;
                __freed_obj__ = 0;
            }
            if(o2_saved_70 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_70, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(str_67 && !__freed_obj__) { str_67 = come_decrement_ref_count(str_67, (void*)0, (void*)0, 0, 0, 0); }
}

void manual(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    wclear(stdscr);
    __freed_obj__ = 0;
    mvprintw(0,0,"q --> quit");
    __freed_obj__ = 0;
    mvprintw(1,0,"* --> virtual directory(type shell command, and the result of the command is file list");
    __freed_obj__ = 0;
    mvprintw(2,0,"ENTER --> run command(type shell command) or insert directory");
    __freed_obj__ = 0;
    mvprintw(3,0,"~ --> move to home directory");
    __freed_obj__ = 0;
    mvprintw(4,0,"BACK SPACE ^H --> move to the parent directory");
    __freed_obj__ = 0;
    mvprintw(5,0,"d --> delete file");
    __freed_obj__ = 0;
    mvprintw(6,0,"c --> copy file");
    __freed_obj__ = 0;
    mvprintw(7,0,"m --> move file");
    __freed_obj__ = 0;
    mvprintw(8,0,"n --> new file");
    __freed_obj__ = 0;
    mvprintw(9,0,"x --> excute file");
    __freed_obj__ = 0;
    mvprintw(10,0,"e --> edit file");
    __freed_obj__ = 0;
    mvprintw(11,0,"LEFT h --> move cursor left");
    __freed_obj__ = 0;
    mvprintw(12,0,"RIGHT l --> move cursor right");
    __freed_obj__ = 0;
    mvprintw(13,0,"DOWN j --> move cursor down");
    __freed_obj__ = 0;
    mvprintw(14,0,"UP k --> move cursor up");
    __freed_obj__ = 0;
    mvprintw(15,0,"CTRL-L --> reread directory and refresh the window");
    __freed_obj__ = 0;
    mvprintw(16,0,"/ --> move cursor with searching file");
    __freed_obj__ = 0;
    mvprintw(17,0,"? --> this manual");
    __freed_obj__ = 0;
    mvprintw(18,0,": --> run shell");
    __freed_obj__ = 0;
    wrefresh(stdscr);
    __freed_obj__ = 0;
    wgetch(stdscr);
    __freed_obj__ = 0;
}

void handmade_delete_file(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional13;
int key_72;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&key_72, 0, sizeof(int));
    werase(stdscr);
    __freed_obj__ = 0;
    mvprintw(0,0,"Is %s delete OK? (y,Y,ENTER/other",path);
    __freed_obj__ = 0;
    wrefresh(stdscr);
    __freed_obj__ = 0;
    while(_while_condtional13=1,    __freed_obj__ = 0, 
    _while_condtional13) {
        key_72=wgetch(stdscr);
        __freed_obj__ = 0;
        if(_if_conditional52=key_72==121||key_72==89||key_72==10,        __freed_obj__ = 0, 
        _if_conditional52) {
            unlink(path);
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void input(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int maxx_73;
int maxy_74;
int key_75;
void* right_value95;
void* right_value96;
void* right_value97;
void* right_value98;
char* path_78;
struct stat stat__79;
_Bool is_dir_80;
_Bool _if_conditional53;
void* right_value99;
void* right_value100;
void* right_value101;
char* path_81;
void* right_value102;
char* current_directory_name_82;
void* right_value103;
void* right_value104;
char* path_83;
void* right_value105;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
_Bool _if_conditional54;
_Bool _if_conditional55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&maxx_73, 0, sizeof(int));
memset(&maxy_74, 0, sizeof(int));
memset(&key_75, 0, sizeof(int));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&path_78, 0, sizeof(char*));
memset(&stat__79, 0, sizeof(struct stat));
memset(&is_dir_80, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&path_81, 0, sizeof(char*));
memset(&right_value102, 0, sizeof(void*));
memset(&current_directory_name_82, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&path_83, 0, sizeof(char*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    maxx_73=xgetmaxx();
    __freed_obj__ = 0;
    maxy_74=xgetmaxy()-1;
    __freed_obj__ = 0;
    key_75=wgetch(stdscr);
    __freed_obj__ = 0;
    switch (key_75) {
        case 113:
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "main.c", 314))->app_end=1;
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 42:
        __freed_obj__ = 0;
        endwin();
        __freed_obj__ = 0;
        list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 319))->files, "main.c", 319)));
        __freed_obj__ = 0;
        vd(info);
        __freed_obj__ = 0;
        initscr();
        __freed_obj__ = 0;
        keypad(stdscr,1);
        __freed_obj__ = 0;
        raw();
        __freed_obj__ = 0;
        noecho();
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 343:
        __freed_obj__ = 0;
        case 10:
        __freed_obj__ = 0;
        {
            path_78=(char*)come_increment_ref_count(((char*)(right_value98=string_operator_add(((struct sInfo*)come_null_check(info, "main.c", 329))->path,((char*)(right_value97=string_operator_add(((char*)(right_value95=__builtin_string("/"))),((char*)(right_value96=cursor_file(info))))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value95;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value96;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value97;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value98);
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value98;
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (void)stat(path_78,&stat__79);
            __freed_obj__ = 0;
            is_dir_80=((((stat__79.st_mode))&61440)==(16384));
            __freed_obj__ = 0;
            if(_if_conditional53=is_dir_80,            __freed_obj__ = 0, 
            _if_conditional53) {
                change_directory(info,path_78,((void*)0));
                __freed_obj__ = 0;
            }
            else {
                endwin();
                __freed_obj__ = 0;
                system(((char*)(right_value100=xsprintf("shsh -i ' %s' -n 0 -o",((char*)(right_value99=cursor_file(info)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value100);
                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value100;
                __freed_obj__ = 0;
                read_dir(info);
                __freed_obj__ = 0;
                puts("HIT ANY KEY");
                __freed_obj__ = 0;
                initscr();
                __freed_obj__ = 0;
                keypad(stdscr,1);
                __freed_obj__ = 0;
                raw();
                __freed_obj__ = 0;
                noecho();
                __freed_obj__ = 0;
                getchar();
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(path_78 && !__freed_obj__) { path_78 = come_decrement_ref_count(path_78, (void*)0, (void*)0, 0, 0, 0); }
            if((&stat__79) && !__freed_obj__) { come_call_finalizer(stat_finalize,(&stat__79), (void*)0, (void*)0, 1, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 126:
        __freed_obj__ = 0;
        {
            path_81=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(getenv("HOME")))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value101;
            __freed_obj__ = 0;
            change_directory(info,path_81,((void*)0));
            __freed_obj__ = 0;
            if(path_81 && !__freed_obj__) { path_81 = come_decrement_ref_count(path_81, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 263:
        __freed_obj__ = 0;
        case 8:
        __freed_obj__ = 0;
        case 127:
        __freed_obj__ = 0;
        {
            current_directory_name_82=(char*)come_increment_ref_count(((char*)(right_value102=xbasename(((struct sInfo*)come_null_check(info, "main.c", 363))->path))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value102;
            __freed_obj__ = 0;
            path_83=(char*)come_increment_ref_count(((char*)(right_value104=string_operator_add(((struct sInfo*)come_null_check(info, "main.c", 364))->path,((char*)(right_value103=__builtin_string("/..")))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value103;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value104;
            __freed_obj__ = 0;
            change_directory(info,path_83,current_directory_name_82);
            __freed_obj__ = 0;
            if(current_directory_name_82 && !__freed_obj__) { current_directory_name_82 = come_decrement_ref_count(current_directory_name_82, (void*)0, (void*)0, 0, 0, 0); }
            if(path_83 && !__freed_obj__) { path_83 = come_decrement_ref_count(path_83, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 100:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            handmade_delete_file(((char*)(right_value105=cursor_file(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value105;
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 99:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system(((char*)(right_value107=xsprintf("shsh -i 'cp -r %s ' -o",((char*)(right_value106=cursor_file(info)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value107;
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            puts("HIT ANY KEY");
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
            getchar();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 109:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system(((char*)(right_value109=xsprintf("shsh -i 'mv %s ' -o",((char*)(right_value108=cursor_file(info)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value108;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value109;
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            puts("HIT ANY KEY");
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
            getchar();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 110:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system(((char*)(right_value110=xsprintf("shsh -i 'touch '"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110;
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 120:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system(((char*)(right_value112=xsprintf("shsh -i ' ./%s' -n 0 -o",((char*)(right_value111=cursor_file(info)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value111;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value112;
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            puts("HIT ANY KEY");
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
            getchar();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 101:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system(((char*)(right_value114=xsprintf("vin %s",((char*)(right_value113=cursor_file(info)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value113;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value114;
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 260:
        __freed_obj__ = 0;
        case 104:
        __freed_obj__ = 0;
        if(_if_conditional54=((struct sInfo*)come_null_check(info, "main.c", 445))->cursor>=maxy_74,        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sInfo*)come_null_check(info, "main.c", 443))->cursor-=maxy_74;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 261:
        __freed_obj__ = 0;
        case 108:
        __freed_obj__ = 0;
        if(_if_conditional55=((struct sInfo*)come_null_check(info, "main.c", 452))->cursor+maxy_74<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "main.c", 452))->files, "main.c", 452))),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sInfo*)come_null_check(info, "main.c", 450))->cursor+=maxy_74;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 258:
        __freed_obj__ = 0;
        case 106:
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "main.c", 456))->cursor++;
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 259:
        __freed_obj__ = 0;
        case 107:
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "main.c", 461))->cursor--;
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 76-65+1:
        __freed_obj__ = 0;
        wclear(stdscr);
        __freed_obj__ = 0;
        read_dir(info);
        __freed_obj__ = 0;
        view(info);
        __freed_obj__ = 0;
        wrefresh(stdscr);
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 47:
        __freed_obj__ = 0;
        search_file(info);
        __freed_obj__ = 0;
        view(info);
        __freed_obj__ = 0;
        wrefresh(stdscr);
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 63:
        __freed_obj__ = 0;
        manual(info);
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 58:
        __freed_obj__ = 0;
        {
            endwin();
            __freed_obj__ = 0;
            system("shsh");
            __freed_obj__ = 0;
            read_dir(info);
            __freed_obj__ = 0;
            puts("HIT ANY KEY");
            __freed_obj__ = 0;
            initscr();
            __freed_obj__ = 0;
            keypad(stdscr,1);
            __freed_obj__ = 0;
            raw();
            __freed_obj__ = 0;
            noecho();
            __freed_obj__ = 0;
            getchar();
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 4:
        __freed_obj__ = 0;
        {
            ((struct sInfo*)come_null_check(info, "main.c", 497))->cursor+=10;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
        case 21:
        __freed_obj__ = 0;
        {
            ((struct sInfo*)come_null_check(info, "main.c", 502))->cursor-=10;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        break;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fix_cursor(info);
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_76;
_Bool _while_condtional14;
struct list_item$1charph* prev_it_77;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_76, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charph*));
            it_76=((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 481))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_76!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_77=it_76;
                __freed_obj__ = 0;
                it_76=((struct list_item$1charph*)come_null_check(it_76, "/usr/local/include/comelang2.h", 484))->next;
                __freed_obj__ = 0;
                if(prev_it_77 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 488))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 489))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "/usr/local/include/comelang2.h", 491))->len=0;
            __freed_obj__ = 0;
            __result87__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result87__;
            __freed_obj__ = 0;
}

int main(int argc, char** argv){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sInfo info_84;
char* cwd_85;
void* right_value115;
char* __dec_obj17;
_Bool _while_condtional15;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&info_84, 0, sizeof(struct sInfo));
memset(&cwd_85, 0, sizeof(char*));
memset(&right_value115, 0, sizeof(void*));
come_heap_init(0, 0);
    setlocale(6,"");
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    memset(&info_84,0,sizeof(struct sInfo));
    __freed_obj__ = 0;
    cwd_85=getenv("PWD");
    __freed_obj__ = 0;
    __dec_obj17=info_84.path;
    info_84.path=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(cwd_85))));
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    read_dir(&info_84);
    __freed_obj__ = 0;
    initscr();
    __freed_obj__ = 0;
    keypad(stdscr,1);
    __freed_obj__ = 0;
    raw();
    __freed_obj__ = 0;
    noecho();
    __freed_obj__ = 0;
    while(_while_condtional15=!info_84.app_end,    __freed_obj__ = 0, 
    _while_condtional15) {
        view(&info_84);
        __freed_obj__ = 0;
        input(&info_84);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    endwin();
    __freed_obj__ = 0;
    __result88__ = 0;
    if((&info_84) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_84), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = 0;
    come_heap_final();
    return __result88__;
    __freed_obj__ = 0;
    if((&info_84) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_84), (void*)0, (void*)0, 1, 0, 0, 0); }
come_heap_final();
}

static void sInfo_finalize(struct sInfo* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional56=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->path!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->path && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->path = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->path, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->files!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->files && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->files, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

