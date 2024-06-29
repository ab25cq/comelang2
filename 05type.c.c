// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};
typedef union anonymous_typeZ1 __mbstate_t;
typedef union anonymous_typeZ1 __darwin_mbstate_t;
typedef long int __darwin_ptrdiff_t;
typedef long int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long int __darwin_clock_t;
typedef unsigned int __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef long long __darwin_blkcnt_t;
typedef int __darwin_blksize_t;
typedef int __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef unsigned int __darwin_gid_t;
typedef unsigned int __darwin_id_t;
typedef unsigned long long __darwin_ino64_t;
typedef unsigned long long __darwin_ino_t;
typedef unsigned int __darwin_mach_port_name_t;
typedef unsigned int __darwin_mach_port_t;
typedef unsigned short int __darwin_mode_t;
typedef long long __darwin_off_t;
typedef int __darwin_pid_t;
typedef unsigned int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef unsigned int __darwin_uid_t;
typedef unsigned int __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};
struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};
struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};
struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};
struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};
struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};
struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};
struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long int __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t* __darwin_pthread_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef unsigned int __darwin_wctype_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long int uintptr_t;
typedef unsigned long long user_addr_t;
typedef unsigned long long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long long syscall_arg_t;
typedef __darwin_va_list va_list;
typedef long int size_t;
typedef long long fpos_t;
struct __sbuf
{
    unsigned char* _base;
    int _size;
};
struct __sFILEX;
struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short short _flags;
    short short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long long _offset;
};
typedef struct __sFILE FILE;
extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
typedef long long off_t;
typedef long ssize_t;
extern const int sys_nerr;
extern const char** sys_errlist;
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY2 idtype_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int sig_atomic_t;
struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};
struct __darwin_arm_exception_state64
{
    unsigned long long __far;
    unsigned int __esr;
    unsigned int __exception;
};
struct __darwin_arm_thread_state
{
    unsigned int __r[13];
    unsigned int __sp;
    unsigned int __lr;
    unsigned int __pc;
    unsigned int __cpsr;
};
struct __darwin_arm_thread_state64
{
    unsigned long long __x[29];
    unsigned long long __fp;
    unsigned long long __lr;
    unsigned long long __sp;
    unsigned long long __pc;
    unsigned int __cpsr;
    unsigned int __pad;
};
struct __darwin_arm_vfp_state
{
    unsigned int __r[64];
    unsigned int __fpscr;
};
struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr;
    unsigned int __fpcr;
};
struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr;
    unsigned int __fpcr;
};
struct __arm_pagein_state
{
    int __pagein_error;
};
struct __arm_legacy_debug_state
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
};
struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    unsigned long long __bvr[16];
    unsigned long long __bcr[16];
    unsigned long long __wvr[16];
    unsigned long long __wcr[16];
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    unsigned long long __ctrs[16];
};
struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};
struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};
typedef struct __darwin_mcontext64* mcontext_t;
typedef struct _opaque_pthread_attr_t pthread_attr_t;
struct __darwin_sigaltstack
{
    void* ss_sp;
    long int ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    long int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};
typedef struct __darwin_ucontext ucontext_t;
typedef unsigned int sigset_t;
typedef unsigned int uid_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};
struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    unsigned int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
    long si_band;
    unsigned long int __pad[7];
};
typedef struct __siginfo siginfo_t;
union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo*,void*);
};
struct __sigaction
{
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask;
    int sa_flags;
};
struct sigaction
{
    union __sigaction_u __sigaction_u;
    unsigned int sa_mask;
    int sa_flags;
};
typedef void (*sig_t)(int);
struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};
struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef char int_fast8_t;
typedef short short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long int intmax_t;
typedef long int uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef unsigned long long rlim_t;
struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};
typedef void* rusage_info_t;
struct rusage_info_v0
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
};
struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
};
struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
};
struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
    unsigned long long ri_user_ptime;
    unsigned long long ri_system_ptime;
    unsigned long long ri_pinstructions;
    unsigned long long ri_pcycles;
    unsigned long long ri_energy_nj;
    unsigned long long ri_penergy_nj;
    unsigned long long ri_secure_time_in_system;
    unsigned long long ri_secure_ptime_in_system;
    unsigned long long ri_reserved[12];
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    unsigned long long rlim_cur;
    unsigned long long rlim_max;
};
struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};
struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};
typedef int ct_rune_t;
typedef int rune_t;
typedef int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX7 lldiv_t;
extern int __mb_cur_max;
typedef unsigned long long malloc_type_id_t;
typedef struct _malloc_zone_t malloc_zone_t;
typedef int dev_t;
typedef unsigned short int mode_t;
extern char* suboptarg;
typedef long int rsize_t;
typedef int errno_t;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
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
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);

int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);

int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);

void clearerr(struct __sFILE* anonymous_var_nameX35);

int fclose(struct __sFILE* anonymous_var_nameX36);

int feof(struct __sFILE* anonymous_var_nameX37);

int ferror(struct __sFILE* anonymous_var_nameX38);

int fflush(struct __sFILE* anonymous_var_nameX39);

int fgetc(struct __sFILE* anonymous_var_nameX40);

int fgetpos(struct __sFILE* anonymous_var_nameX41, long long* anonymous_var_nameX42);

char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);

struct __sFILE* fopen(const char* __filename, const char* __mode);

int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);

int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);

int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);

long int fread(void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);

int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);

int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);

int fsetpos(struct __sFILE* anonymous_var_nameX60, const long long* anonymous_var_nameX61);

long ftell(struct __sFILE* anonymous_var_nameX62);

long int fwrite(const void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

int getc(struct __sFILE* anonymous_var_nameX63);

int getchar();

char* gets(char* anonymous_var_nameX64);

void perror(const char* anonymous_var_nameX65);

int printf(const char* anonymous_var_nameX66, ...);

int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);

int putchar(int anonymous_var_nameX69);

int puts(const char* anonymous_var_nameX70);

int remove(const char* anonymous_var_nameX71);

int rename(const char* __old, const char* __new);

void rewind(struct __sFILE* anonymous_var_nameX72);

int scanf(const char* anonymous_var_nameX73, ...);

void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);

int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, long int anonymous_var_nameX79);

int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);

int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);

struct __sFILE* tmpfile();

char* tmpnam(char* anonymous_var_nameX84);

int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);

int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);

int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);

int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);

char* ctermid(char* anonymous_var_nameX95);

struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);

int fileno(struct __sFILE* anonymous_var_nameX98);

int pclose(struct __sFILE* anonymous_var_nameX99);

struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);

int __srget(struct __sFILE* anonymous_var_nameX102);

int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);

int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);

void flockfile(struct __sFILE* anonymous_var_nameX108);

int ftrylockfile(struct __sFILE* anonymous_var_nameX109);

void funlockfile(struct __sFILE* anonymous_var_nameX110);

int getc_unlocked(struct __sFILE* anonymous_var_nameX111);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);

int putchar_unlocked(int anonymous_var_nameX114);

int getw(struct __sFILE* anonymous_var_nameX115);

int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);

char* tempnam(const char* __dir, const char* __prefix);

int fseeko(struct __sFILE* __stream, long long __offset, int __whence);

long long ftello(struct __sFILE* __stream);

int snprintf(char* __str, long int __size, const char* __format, ...);

int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);

int vscanf(const char* __format, va_list anonymous_var_nameX119);

int vsnprintf(char* __str, long int __size, const char* __format, va_list anonymous_var_nameX120);

int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);

int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);

int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);

long getdelim(char** __linep, long int* __linecapp, int __delimiter, struct __sFILE* __stream);

long getline(char** __linep, long int* __linecapp, struct __sFILE* __stream);

struct __sFILE* fmemopen(void* __buf, long int __size, const char* __mode);

struct __sFILE* open_memstream(char** __bufp, long int* __sizep);

int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);

char* ctermid_r(char* anonymous_var_nameX129);

char* fgetln(struct __sFILE* anonymous_var_nameX130, long int* anonymous_var_nameX131);

const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);

int fpurge(struct __sFILE* anonymous_var_nameX134);

void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);

int setlinebuf(struct __sFILE* anonymous_var_nameX138);

int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);

struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));

void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);

int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);

int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);

int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);

int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);

int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);

int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);

int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);

int wait(int* anonymous_var_nameX189);

int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);

int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);

int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);

int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);

void* alloca(long int anonymous_var_nameX204);

void* malloc_type_malloc(long int size, unsigned long long type_id);

void* malloc_type_calloc(long int count, long int size, unsigned long long type_id);

void malloc_type_free(void* ptr, unsigned long long type_id);

void* malloc_type_realloc(void* ptr, long int size, unsigned long long type_id);

void* malloc_type_valloc(long int size, unsigned long long type_id);

void* malloc_type_aligned_alloc(long int alignment, long int size, unsigned long long type_id);

int malloc_type_posix_memalign(void** memptr, long int alignment, long int size, unsigned long long type_id);

void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, long int count, long int size, unsigned long long type_id);

void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long long type_id);

void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, long int size, unsigned long long type_id);

void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, long int alignment, long int size, unsigned long long type_id);

void* malloc(long int __size);

void* calloc(long int __count, long int __size);

void free(void* anonymous_var_nameX205);

void* realloc(void* __ptr, long int __size);

void* reallocf(void* __ptr, long int __size);

void* valloc(long int anonymous_var_nameX206);

void* aligned_alloc(long int __alignment, long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void abort();

int abs(int anonymous_var_nameX207);

int atexit(void (*anonymous_lambda_var_nameZ6)());

double atof(const char* anonymous_var_nameX208);

int atoi(const char* anonymous_var_nameX209);

long atol(const char* anonymous_var_nameX210);

long long atoll(const char* anonymous_var_nameX211);

void* bsearch(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);

void exit(int anonymous_var_nameX216);

char* getenv(const char* anonymous_var_nameX217);

long labs(long anonymous_var_nameX218);

struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);

long long llabs(long long anonymous_var_nameX221);

struct anonymous_typeX7 lldiv(long long anonymous_var_nameX222, long long anonymous_var_nameX223);

int mblen(const char* __s, long int __n);

long int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, long int anonymous_var_nameX226);

int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, long int anonymous_var_nameX229);

void qsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int rand();

void srand(unsigned int anonymous_var_nameX232);

double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);

float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);

long strtol(const char* __str, char** __endptr, int __base);

long double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);

long long strtoll(const char* __str, char** __endptr, int __base);

unsigned long int strtoul(const char* __str, char** __endptr, int __base);

unsigned long long strtoull(const char* __str, char** __endptr, int __base);

int system(const char* anonymous_var_nameX239);

long int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, long int anonymous_var_nameX242);

int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);

void _Exit(int anonymous_var_nameX245);

long a64l(const char* anonymous_var_nameX246);

double drand48();

char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);

double erand48(unsigned short int anonymous_var_nameX251[3]);

char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);

char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);

int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);

int grantpt(int anonymous_var_nameX262);

char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, long int anonymous_var_nameX265);

long jrand48(unsigned short int anonymous_var_nameX266[3]);

char* l64a(long anonymous_var_nameX267);

void lcong48(unsigned short int anonymous_var_nameX268[7]);

long lrand48();

char* mktemp(char* anonymous_var_nameX269);

int mkstemp(char* anonymous_var_nameX270);

long mrand48();

long nrand48(unsigned short int anonymous_var_nameX271[3]);

int posix_openpt(int anonymous_var_nameX272);

char* ptsname(int anonymous_var_nameX273);

int ptsname_r(int fildes, char* buffer, long int buflen);

int putenv(char* anonymous_var_nameX274);

long random();

int rand_r(unsigned int* anonymous_var_nameX275);

char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);

unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);

int setenv(const char* __name, const char* __value, int __overwrite);

void setkey(const char* anonymous_var_nameX279);

char* setstate(const char* anonymous_var_nameX280);

void srand48(long anonymous_var_nameX281);

void srandom(unsigned int anonymous_var_nameX282);

int unlockpt(int anonymous_var_nameX283);

int unsetenv(const char* anonymous_var_nameX284);

unsigned int arc4random();

void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);

void arc4random_buf(void* __buf, long int __nbytes);

void arc4random_stir();

unsigned int arc4random_uniform(unsigned int __upper_bound);

int atexit_b(void (*anonymous_lambda_var_nameZ7)());

void* bsearch_b(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);

int cgetclose();

int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);

int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);

int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);

int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);

int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);

int cgetset(const char* anonymous_var_nameX304);

int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);

int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);

int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);

char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);

char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);

char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);

int getloadavg(double* anonymous_var_nameX319, int anonymous_var_nameX320);

const char* getprogname();

void setprogname(const char* anonymous_var_nameX321);

int heapsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int heapsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));

void qsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));

int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

int rpmatch(const char* anonymous_var_nameX344);

int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

void sranddev();

void srandomdev();

long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);

long long strtoq(const char* __str, char** __endptr, int __base);

unsigned long long strtouq(const char* __str, char** __endptr, int __base);

void* memchr(const void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

void* memcpy(void* __dst, const void* __src, long int __n);

void* memmove(void* __dst, const void* __src, long int __len);

void* memset(void* __b, int __c, long int __len);

char* strcat(char* __s1, const char* __s2);

char* strchr(const char* __s, int __c);

int strcmp(const char* __s1, const char* __s2);

int strcoll(const char* __s1, const char* __s2);

char* strcpy(char* __dst, const char* __src);

long int strcspn(const char* __s, const char* __charset);

char* strerror(int __errnum);

long int strlen(const char* __s);

char* strncat(char* __s1, const char* __s2, long int __n);

int strncmp(const char* __s1, const char* __s2, long int __n);

char* strncpy(char* __dst, const char* __src, long int __n);

char* strpbrk(const char* __s, const char* __charset);

char* strrchr(const char* __s, int __c);

long int strspn(const char* __s, const char* __charset);

char* strstr(const char* __big, const char* __little);

char* strtok(char* __str, const char* __sep);

long int strxfrm(char* __s1, const char* __s2, long int __n);

char* strtok_r(char* __str, const char* __sep, char** __lasts);

int strerror_r(int __errnum, char* __strerrbuf, long int __buflen);

char* strdup(const char* __s1);

void* memccpy(void* __dst, const void* __src, int __c, long int __n);

char* stpcpy(char* __dst, const char* __src);

char* stpncpy(char* __dst, const char* __src, long int __n);

char* strndup(const char* __s1, long int __n);

long int strnlen(const char* __s1, long int __n);

char* strsignal(int __sig);

int memset_s(void* __s, long int __smax, int __c, long int __n);

void* memmem(const void* __big, long int __big_len, const void* __little, long int __little_len);

void memset_pattern4(void* __b, const void* __pattern4, long int __len);

void memset_pattern8(void* __b, const void* __pattern8, long int __len);

void memset_pattern16(void* __b, const void* __pattern16, long int __len);

char* strcasestr(const char* __big, const char* __little);

char* strnstr(const char* __big, const char* __little, long int __len);

long int strlcat(char* __dst, const char* __source, long int __size);

long int strlcpy(char* __dst, const char* __source, long int __size);

void strmode(int __mode, char* __bp);

char* strsep(char** __stringp, const char* __delim);

void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);

int timingsafe_bcmp(const void* __b1, const void* __b2, long int __len);

int strsignal_r(int __sig, char* __strsignalbuf, long int __buflen);

int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, long int anonymous_var_nameX350);

void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, long int anonymous_var_nameX353);

void bzero(void* anonymous_var_nameX354, long int anonymous_var_nameX355);

char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);

char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);

int ffs(int anonymous_var_nameX360);

int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);

int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, long int anonymous_var_nameX365);

int ffsl(long anonymous_var_nameX366);

int ffsll(long long anonymous_var_nameX367);

int fls(int anonymous_var_nameX368);

int flsl(long anonymous_var_nameX369);

int flsll(long long anonymous_var_nameX370);

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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

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

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(int c);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

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

int FILE_write(struct __sFILE* f, char* str);

char* FILE_read(struct __sFILE* f);

int FILE_fclose(struct __sFILE* f);

int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct __sFILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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

void transpile_toplevel(_Bool block, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
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
static void list$1charph_finalize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
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
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 45 "/usr/local/include/neo-c.h"
    perror(msg);
    # 46 "/usr/local/include/neo-c.h"
    stackframe();
    # 47 "/usr/local/include/neo-c.h"
    exit(4);
    # 49 "/usr/local/include/neo-c.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    # 1897 "/usr/local/include/neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "/usr/local/include/neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "/usr/local/include/neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    # 1904 "/usr/local/include/neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "/usr/local/include/neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "/usr/local/include/neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    # 1911 "/usr/local/include/neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "/usr/local/include/neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "/usr/local/include/neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    # 1918 "/usr/local/include/neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "/usr/local/include/neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "/usr/local/include/neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    # 1925 "/usr/local/include/neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "/usr/local/include/neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "/usr/local/include/neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    # 1932 "/usr/local/include/neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "/usr/local/include/neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "/usr/local/include/neo-c.h"
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
    # 1948 "/usr/local/include/neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "/usr/local/include/neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "/usr/local/include/neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "/usr/local/include/neo-c.h"
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
    # 1958 "/usr/local/include/neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "/usr/local/include/neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1961 "/usr/local/include/neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "/usr/local/include/neo-c.h"
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
    # 1968 "/usr/local/include/neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "/usr/local/include/neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1971 "/usr/local/include/neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "/usr/local/include/neo-c.h"
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
    # 1978 "/usr/local/include/neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "/usr/local/include/neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1981 "/usr/local/include/neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "/usr/local/include/neo-c.h"
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
    # 1988 "/usr/local/include/neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "/usr/local/include/neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1991 "/usr/local/include/neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "/usr/local/include/neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2159 "/usr/local/include/neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 2159, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    # 2164 "/usr/local/include/neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 2164, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    # 2169 "/usr/local/include/neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 2169, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    # 2174 "/usr/local/include/neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 2174, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    # 2179 "/usr/local/include/neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/neo-c.h", 2179, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    # 2184 "/usr/local/include/neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/neo-c.h", 2184, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    # 2189 "/usr/local/include/neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/neo-c.h", 2189, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    # 2194 "/usr/local/include/neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/neo-c.h", 2194, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    # 2199 "/usr/local/include/neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/neo-c.h", 2199, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    # 2204 "/usr/local/include/neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/neo-c.h", 2204, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    # 2209 "/usr/local/include/neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/neo-c.h", 2209, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    # 2214 "/usr/local/include/neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline long int charpa_length(char* self, long int len){
void* __result_obj__;
long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2244 "/usr/local/include/neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline long int shortpa_length(short short* self, long int len){
void* __result_obj__;
long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "/usr/local/include/neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline long int intpa_length(int* self, long int len){
void* __result_obj__;
long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2254 "/usr/local/include/neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline long int longpa_length(long* self, long int len){
void* __result_obj__;
long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2259 "/usr/local/include/neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline long int floatpa_length(float* self, long int len){
void* __result_obj__;
long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "/usr/local/include/neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline long int doublepa_length(double* self, long int len){
void* __result_obj__;
long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2269 "/usr/local/include/neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2330 "/usr/local/include/neo-c.h"
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
    # 2335 "/usr/local/include/neo-c.h"
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
    # 2340 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
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
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_12->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_12;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_13->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_13;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_14->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_15=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_16=it_15;
                # 117 "/usr/local/include/neo-c.h"
                it_15=it_15->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_18->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_18;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_19->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_19;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_20->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_21=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_22=it_21;
                # 117 "/usr/local/include/neo-c.h"
                it_21=it_21->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_24->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_24;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_25->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_25;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_26->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_27=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_28=it_27;
                # 117 "/usr/local/include/neo-c.h"
                it_27=it_27->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_30->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_30;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_31->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_31;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_32->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_33=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_34=it_33;
                # 117 "/usr/local/include/neo-c.h"
                it_33=it_33->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_36->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_36;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_37->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_37;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_38->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_39=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_40=it_39;
                # 117 "/usr/local/include/neo-c.h"
                it_39=it_39->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "/usr/local/include/neo-c.h"
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
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_42->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_42;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_43->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_43;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_44->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_45=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_46=it_45;
                # 117 "/usr/local/include/neo-c.h"
                it_45=it_45->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_47, 0, sizeof(int));
    # 5 "05type.c"
    nest_47=0;
    # 26 "05type.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 25 "05type.c"
        # 7 "05type.c"
        if(_if_conditional19=*info->p==40,        _if_conditional19) {
            # 8 "05type.c"
            info->p++;
            # 9 "05type.c"
            skip_spaces_and_lf(info);
            # 11 "05type.c"
            nest_47++;
        }
        else {
            # 25 "05type.c"
            # 13 "05type.c"
            if(_if_conditional20=*info->p==41,            _if_conditional20) {
                # 14 "05type.c"
                info->p++;
                # 15 "05type.c"
                skip_spaces_and_lf(info);
                # 17 "05type.c"
                nest_47--;
                # 21 "05type.c"
                # 18 "05type.c"
                if(_if_conditional21=nest_47==0,                _if_conditional21) {
                    # 19 "05type.c"
                    break;
                }
            }
            else {
                # 23 "05type.c"
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional8;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _if_conditional22;
_Bool _while_condtional11;
_Bool _if_conditional23;
_Bool _if_conditional24;
int line_48;
void* right_value79;
void* right_value80;
struct buffer* fname_49;
_Bool _while_condtional12;
_Bool _if_conditional25;
_Bool _while_condtional13;
_Bool _while_condtional14;
void* right_value81;
char* __dec_obj12;
_Bool _if_conditional26;
_Bool _while_condtional15;
_Bool _while_condtional16;
_Bool _while_condtional17;
_Bool _while_condtional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_48, 0, sizeof(int));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&fname_49, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
    # 35 "05type.c"
    while(_while_condtional8=strmemcmp(info->p,"__attribute__"),    _while_condtional8) {
        # 31 "05type.c"
        info->p+=strlen("__attribute__");
        # 32 "05type.c"
        skip_spaces_and_lf(info);
        # 33 "05type.c"
        skip_paren(info);
    }
    # 39 "05type.c"
    while(_while_condtional9=strmemcmp(info->p,"__extension__"),    _while_condtional9) {
        # 36 "05type.c"
        info->p+=strlen("__extension__");
        # 37 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 114 "05type.c"
    while(_while_condtional10=*info->p==35,    _while_condtional10) {
        # 53 "05type.c"
        skip_spaces_and_lf(info);
        # 55 "05type.c"
        info->p++;
        # 56 "05type.c"
        skip_spaces_and_lf(info);
        # 111 "05type.c"
        # 58 "05type.c"
        if(_if_conditional22=strmemcmp(info->p,"pragma"),        _if_conditional22) {
            # 68 "05type.c"
            while(_while_condtional11=*info->p,            _while_condtional11) {
                # 67 "05type.c"
                # 60 "05type.c"
                if(_if_conditional23=*info->p==10,                _if_conditional23) {
                    # 61 "05type.c"
                    skip_spaces_and_lf(info);
                    # 62 "05type.c"
                    break;
                }
                else {
                    # 65 "05type.c"
                    info->p++;
                }
            }
        }
        else {
            # 111 "05type.c"
            # 69 "05type.c"
            if(_if_conditional24=xisdigit(*info->p),            _if_conditional24) {
                # 70 "05type.c"
                line_48=0;
                # 71 "05type.c"
                fname_49=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 71, "buffer"))))))));
                come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 77 "05type.c"
                while(_while_condtional12=xisdigit(*info->p),                _while_condtional12) {
                    # 74 "05type.c"
                    line_48=line_48*10+(*info->p-48);
                    # 75 "05type.c"
                    info->p++;
                }
                # 77 "05type.c"
                skip_spaces_and_lf(info);
                # 93 "05type.c"
                # 79 "05type.c"
                if(_if_conditional25=*info->p==34,                _if_conditional25) {
                    # 80 "05type.c"
                    info->p++;
                    # 87 "05type.c"
                    while(_while_condtional13=*info->p!=34,                    _while_condtional13) {
                        # 83 "05type.c"
                        buffer_append_char(fname_49,*info->p);
                        # 84 "05type.c"
                        info->p++;
                    }
                    # 90 "05type.c"
                    while(_while_condtional14=*info->p!=10,                    _while_condtional14) {
                        # 88 "05type.c"
                        info->p++;
                    }
                    # 90 "05type.c"
                    info->p++;
                }
                # 93 "05type.c"
                info->sline=line_48;
                # 94 "05type.c"
                __dec_obj12=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value81=buffer_to_string(fname_49))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 96 "05type.c"
                skip_spaces_and_lf(info);
                come_call_finalizer3(fname_49,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 111 "05type.c"
                # 98 "05type.c"
                if(_if_conditional26=*info->p==34,                _if_conditional26) {
                    # 99 "05type.c"
                    info->p++;
                    # 105 "05type.c"
                    while(_while_condtional15=*info->p!=34,                    _while_condtional15) {
                        # 102 "05type.c"
                        info->p++;
                    }
                    # 108 "05type.c"
                    while(_while_condtional16=*info->p!=10,                    _while_condtional16) {
                        # 106 "05type.c"
                        info->p++;
                    }
                    # 108 "05type.c"
                    info->p++;
                }
            }
        }
        # 111 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 119 "05type.c"
    while(_while_condtional17=strmemcmp(info->p,"__attribute__"),    _while_condtional17) {
        # 115 "05type.c"
        info->p+=strlen("__attribute__");
        # 116 "05type.c"
        skip_spaces_and_lf(info);
        # 117 "05type.c"
        skip_paren(info);
    }
    # 123 "05type.c"
    while(_while_condtional18=strmemcmp(info->p,"__extension__"),    _while_condtional18) {
        # 120 "05type.c"
        info->p+=strlen("__extension__");
        # 121 "05type.c"
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_50;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_50, 0, sizeof(char));
    # 139 "05type.c"
    c_50=*(info->p+strlen(str));
    # 140 "05type.c"
    __result52__ = strmemcmp(info->p,str)&&(c_50==59||c_50==32||c_50==9||c_50==10||c_50==10);
    return __result52__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* buf_51;
_Bool _while_condtional19;
void* right_value84;
_Bool _if_conditional27;
void* right_value85;
char* __result53__;
void* right_value86;
char* result_52;
_Bool _if_conditional32;
void* right_value87;
char* __result58__;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_51, 0, sizeof(struct buffer*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_52, 0, sizeof(char*));
right_value87 = (void*)0;
    # 145 "05type.c"
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 145, "buffer"))))))));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 146 "05type.c"
    parse_sharp_v5(info);
    # 153 "05type.c"
    while(_while_condtional19=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional19) {
        # 150 "05type.c"
        buffer_append_char(buf_51,*info->p);
        # 151 "05type.c"
        info->p++;
    }
    # 153 "05type.c"
    skip_spaces_and_lf(info);
    # 160 "05type.c"
    # 155 "05type.c"
    if(_if_conditional27=string_length(((char*)(right_value84=buffer_to_string(buf_51))))==0,    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional27) {
        # 156 "05type.c"
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        # 157 "05type.c"
        __result53__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    # 160 "05type.c"
    result_52=(char*)come_increment_ref_count(((char*)(right_value86=buffer_to_string(buf_51))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 166 "05type.c"
    # 162 "05type.c"
    if(_if_conditional32=info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_52),    _if_conditional32) {
        # 163 "05type.c"
        __result58__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_52), "05type.c", 163, 0)))));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result58__;
    }
    # 166 "05type.c"
    __result59__ = __result_obj__ = result_52;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result59__;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__;
char* default_value_53;
unsigned int hash_54;
unsigned int it_55;
_Bool _while_condtional20;
_Bool _if_conditional28;
_Bool _if_conditional29;
char* __result54__;
_Bool _if_conditional30;
_Bool _if_conditional31;
char* __result55__;
char* __result56__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(char*));
memset(&hash_54, 0, sizeof(unsigned int));
memset(&it_55, 0, sizeof(unsigned int));
        # 1519 "/usr/local/include/neo-c.h"
        # 1520 "/usr/local/include/neo-c.h"
        memset(&default_value_53,0,sizeof(char*));
        # 1522 "/usr/local/include/neo-c.h"
        hash_54=string_get_hash_key(((char*)key))%self->size;
        # 1523 "/usr/local/include/neo-c.h"
        it_55=hash_54;
        # 1547 "/usr/local/include/neo-c.h"
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            # 1545 "/usr/local/include/neo-c.h"
            # 1526 "/usr/local/include/neo-c.h"
            if(_if_conditional28=self->item_existance[it_55],            _if_conditional28) {
                # 1533 "/usr/local/include/neo-c.h"
                # 1528 "/usr/local/include/neo-c.h"
                if(_if_conditional29=string_equals(self->keys[it_55],key),                _if_conditional29) {
                    # 1530 "/usr/local/include/neo-c.h"
                    __result54__ = __result_obj__ = self->items[it_55];
                    default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result54__;
                }
                # 1533 "/usr/local/include/neo-c.h"
                it_55++;
                # 1541 "/usr/local/include/neo-c.h"
                # 1535 "/usr/local/include/neo-c.h"
                if(_if_conditional30=it_55>=self->size,                _if_conditional30) {
                    # 1536 "/usr/local/include/neo-c.h"
                    it_55=0;
                }
                else {
                    # 1541 "/usr/local/include/neo-c.h"
                    # 1538 "/usr/local/include/neo-c.h"
                    if(_if_conditional31=it_55==hash_54,                    _if_conditional31) {
                        # 1539 "/usr/local/include/neo-c.h"
                        __result55__ = __result_obj__ = default_value_53;
                        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result55__;
                    }
                }
            }
            else {
                # 1543 "/usr/local/include/neo-c.h"
                __result56__ = __result_obj__ = default_value_53;
                default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result56__;
            }
        }
        # 1547 "/usr/local/include/neo-c.h"
        __result57__ = __result_obj__ = default_value_53;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result57__;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional21;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
    # 183 "05type.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 182 "05type.c"
        # 172 "05type.c"
        if(_if_conditional33=*info->p==32||*info->p==9,        _if_conditional33) {
            # 173 "05type.c"
            info->p++;
        }
        else {
            # 182 "05type.c"
            # 175 "05type.c"
            if(_if_conditional34=*info->p==10,            _if_conditional34) {
                # 176 "05type.c"
                info->p++;
                # 177 "05type.c"
                info->sline++;
            }
            else {
                # 180 "05type.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_56;
struct sType* it_59;
_Bool _if_conditional39;
_Bool __result67__;
struct list$1sTypeph* o2_saved_68;
struct sType* it_69;
_Bool _if_conditional57;
_Bool __result68__;
_Bool _if_conditional58;
_Bool __result69__;
_Bool _if_conditional59;
_Bool __result70__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_56, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&o2_saved_68, 0, sizeof(struct list$1sTypeph*));
memset(&it_69, 0, sizeof(struct sType*));
    # 192 "05type.c"
    for(    o2_saved_56=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_59=list$1sTypeph_begin((o2_saved_56));    !list$1sTypeph_end((o2_saved_56));    it_59=list$1sTypeph_next((o2_saved_56))    ){
        # 191 "05type.c"
        # 188 "05type.c"
        if(_if_conditional39=is_contained_generics_class(it_59,info),        _if_conditional39) {
            # 189 "05type.c"
            __result67__ = (_Bool)1;
            come_call_finalizer3(o2_saved_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result67__;
        }
    }
    come_call_finalizer3(o2_saved_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 198 "05type.c"
    for(    o2_saved_68=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_69=list$1sTypeph_begin((o2_saved_68));    !list$1sTypeph_end((o2_saved_68));    it_69=list$1sTypeph_next((o2_saved_68))    ){
        # 196 "05type.c"
        # 193 "05type.c"
        if(_if_conditional57=is_contained_generics_class(it_69,info),        _if_conditional57) {
            # 194 "05type.c"
            __result68__ = (_Bool)1;
            come_call_finalizer3(o2_saved_68,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result68__;
        }
    }
    come_call_finalizer3(o2_saved_68,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 201 "05type.c"
    # 198 "05type.c"
    if(type->mClass->mGenerics) {
        # 199 "05type.c"
        __result69__ = (_Bool)1;
        return __result69__;
    }
    # 205 "05type.c"
    # 201 "05type.c"
    if(type->mClass->mMethodGenerics) {
        # 202 "05type.c"
        __result70__ = (_Bool)1;
        return __result70__;
    }
    # 205 "05type.c"
    __result71__ = (_Bool)0;
    return __result71__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct sType* result_57;
struct sType* __result60__;
_Bool _if_conditional36;
struct sType* __result61__;
struct sType* result_58;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct sType*));
memset(&result_58, 0, sizeof(struct sType*));
        # 281 "/usr/local/include/neo-c.h"
        # 276 "/usr/local/include/neo-c.h"
        if(_if_conditional35=self==((void*)0),        _if_conditional35) {
            # 277 "/usr/local/include/neo-c.h"
            # 278 "/usr/local/include/neo-c.h"
            memset(&result_57,0,sizeof(struct sType*));
            # 279 "/usr/local/include/neo-c.h"
            __result60__ = __result_obj__ = result_57;
            return __result60__;
        }
        # 281 "/usr/local/include/neo-c.h"
        self->it=self->head;
        # 287 "/usr/local/include/neo-c.h"
        # 283 "/usr/local/include/neo-c.h"
        if(self->it) {
            # 284 "/usr/local/include/neo-c.h"
            __result61__ = __result_obj__ = self->it->item;
            return __result61__;
        }
        # 287 "/usr/local/include/neo-c.h"
        # 288 "/usr/local/include/neo-c.h"
        memset(&result_58,0,sizeof(struct sType*));
        # 289 "/usr/local/include/neo-c.h"
        __result62__ = __result_obj__ = result_58;
        return __result62__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "/usr/local/include/neo-c.h"
        __result63__ = self==((void*)0)||self->it==((void*)0);
        return __result63__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sType* result_60;
struct sType* __result64__;
_Bool _if_conditional38;
struct sType* __result65__;
struct sType* result_61;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_60, 0, sizeof(struct sType*));
memset(&result_61, 0, sizeof(struct sType*));
        # 299 "/usr/local/include/neo-c.h"
        # 293 "/usr/local/include/neo-c.h"
        if(_if_conditional37=self==((void*)0)||self->it==((void*)0),        _if_conditional37) {
            # 294 "/usr/local/include/neo-c.h"
            # 295 "/usr/local/include/neo-c.h"
            memset(&result_60,0,sizeof(struct sType*));
            # 296 "/usr/local/include/neo-c.h"
            __result64__ = __result_obj__ = result_60;
            return __result64__;
        }
        # 299 "/usr/local/include/neo-c.h"
        self->it=self->it->next;
        # 305 "/usr/local/include/neo-c.h"
        # 301 "/usr/local/include/neo-c.h"
        if(self->it) {
            # 302 "/usr/local/include/neo-c.h"
            __result65__ = __result_obj__ = self->it->item;
            return __result65__;
        }
        # 305 "/usr/local/include/neo-c.h"
        # 306 "/usr/local/include/neo-c.h"
        memset(&result_61,0,sizeof(struct sType*));
        # 307 "/usr/local/include/neo-c.h"
        __result66__ = __result_obj__ = result_61;
        return __result66__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional22;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "/usr/local/include/neo-c.h"
                it_62=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional22=it_62!=((void*)0),                _while_condtional22) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_63=it_62;
                    # 117 "/usr/local/include/neo-c.h"
                    it_62=it_62->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional40=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional40) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional41=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional41) {
                                    # 0 "sType_finalize"
                                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional42) {
                                    # 1 "sType_finalize"
                                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional44) {
                                    # 2 "sType_finalize"
                                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional45) {
                                    # 3 "sType_finalize"
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional46=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional46) {
                                    # 4 "sType_finalize"
                                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional47=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional47) {
                                    # 5 "sType_finalize"
                                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional49=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional49) {
                                    # 6 "sType_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional50=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional50) {
                                    # 7 "sType_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional52) {
                                    # 8 "sType_finalize"
                                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional53=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional53) {
                                    # 9 "sType_finalize"
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional54=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional54) {
                                    # 10 "sType_finalize"
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional55=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional55) {
                                    # 11 "sType_finalize"
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sType_finalize"
                                # 12 "sType_finalize"
                                if(_if_conditional56=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional56) {
                                    # 12 "sType_finalize"
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional43=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional43) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional23;
struct list_item$1sNodeph* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1sNodeph*));
                                        # 114 "/usr/local/include/neo-c.h"
                                        it_64=self->head;
                                        # 120 "/usr/local/include/neo-c.h"
                                        while(_while_condtional23=it_64!=((void*)0),                                        _while_condtional23) {
                                            # 116 "/usr/local/include/neo-c.h"
                                            prev_it_65=it_64;
                                            # 117 "/usr/local/include/neo-c.h"
                                            it_64=it_64->next;
                                            # 118 "/usr/local/include/neo-c.h"
                                            come_call_finalizer3(prev_it_65,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional48=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional48) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_66;
_Bool _while_condtional24;
struct list_item$1charph* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1charph*));
                                        # 114 "/usr/local/include/neo-c.h"
                                        it_66=self->head;
                                        # 120 "/usr/local/include/neo-c.h"
                                        while(_while_condtional24=it_66!=((void*)0),                                        _while_condtional24) {
                                            # 116 "/usr/local/include/neo-c.h"
                                            prev_it_67=it_66;
                                            # 117 "/usr/local/include/neo-c.h"
                                            it_66=it_66->next;
                                            # 118 "/usr/local/include/neo-c.h"
                                            come_call_finalizer3(prev_it_67,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional51=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional51) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1sTypeph* param_types_70;
void* right_value90;
void* right_value91;
struct list$1charph* param_names_71;
void* right_value92;
void* right_value93;
struct list$1charph* param_default_parametors_72;
_Bool var_args_73;
_Bool _if_conditional60;
void* right_value97;
void* right_value130;
struct sType* type__98;
_Bool _if_conditional135;
void* right_value131;
void* right_value132;
_Bool void_param_99;
char* p_100;
int sline_101;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _while_condtional31;
_Bool _if_conditional141;
void* right_value133;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_102;
char* param_name_103;
_Bool err_104;
_Bool _if_conditional144;
void* right_value134;
void* right_value135;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result91__;
void* right_value136;
struct sType* param_type2_105;
void* right_value140;
void* right_value144;
_Bool _if_conditional149;
char* p_112;
_Bool no_comma_113;
void* right_value145;
struct sNode* node_114;
char* p2_115;
void* right_value146;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value147;
void* right_value148;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&param_types_70, 0, sizeof(struct list$1sTypeph*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&param_names_71, 0, sizeof(struct list$1charph*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&param_default_parametors_72, 0, sizeof(struct list$1charph*));
memset(&var_args_73, 0, sizeof(_Bool));
right_value97 = (void*)0;
right_value130 = (void*)0;
memset(&type__98, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&void_param_99, 0, sizeof(_Bool));
memset(&p_100, 0, sizeof(char*));
memset(&sline_101, 0, sizeof(int));
right_value133 = (void*)0;
memset(&param_type_102, 0, sizeof(struct sType*));
memset(&param_name_103, 0, sizeof(char*));
memset(&err_104, 0, sizeof(_Bool));
memset(&param_type_102, 0, sizeof(struct sType*));
memset(&param_name_103, 0, sizeof(char*));
memset(&err_104, 0, sizeof(_Bool));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&param_type2_105, 0, sizeof(struct sType*));
right_value140 = (void*)0;
right_value144 = (void*)0;
memset(&p_112, 0, sizeof(char*));
memset(&no_comma_113, 0, sizeof(_Bool));
right_value145 = (void*)0;
memset(&node_114, 0, sizeof(struct sNode*));
memset(&p2_115, 0, sizeof(char*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    # 210 "05type.c"
    param_types_70=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 210, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 211 "05type.c"
    param_names_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 211, "list$1charph"))))))));
    come_call_finalizer3(right_value90,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value91,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 212 "05type.c"
    param_default_parametors_72=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 212, "list$1charph"))))))));
    come_call_finalizer3(right_value92,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 213 "05type.c"
    var_args_73=(_Bool)0;
    # 228 "05type.c"
    # 215 "05type.c"
    if(in_constructor_) {
        # 216 "05type.c"
        list$1charph_add(param_names_71,(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("self")))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 217 "05type.c"
        type__98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(info->impl_type))));
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 218 "05type.c"
        type__98->mHeap=(_Bool)1;
        # 219 "05type.c"
        list$1sTypeph_add(param_types_70,(struct sType*)come_increment_ref_count(type__98));
        # 220 "05type.c"
        list$1charph_add(param_default_parametors_72,((void*)0));
        come_call_finalizer3(type__98,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 228 "05type.c"
        # 222 "05type.c"
        if(info->in_class) {
            # 223 "05type.c"
            list$1charph_add(param_names_71,(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("self")))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 224 "05type.c"
            list$1sTypeph_add(param_types_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(info->impl_type)))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 225 "05type.c"
            list$1charph_add(param_default_parametors_72,((void*)0));
        }
    }
    # 228 "05type.c"
    expected_next_character(40,info);
    # 231 "05type.c"
    void_param_99=(_Bool)0;
    # 249 "05type.c"
    {
        # 233 "05type.c"
        p_100=info->p;
        # 234 "05type.c"
        sline_101=info->sline;
        # 245 "05type.c"
        # 236 "05type.c"
        if(_if_conditional136=strmemcmp(info->p,"void"),        _if_conditional136) {
            # 237 "05type.c"
            info->p+=strlen("void");
            # 238 "05type.c"
            skip_spaces_and_lf(info);
            # 243 "05type.c"
            # 240 "05type.c"
            if(_if_conditional137=*info->p==41,            _if_conditional137) {
                # 241 "05type.c"
                void_param_99=(_Bool)1;
            }
        }
        # 245 "05type.c"
        info->p=p_100;
        # 246 "05type.c"
        info->sline=sline_101;
    }
    # 334 "05type.c"
    # 249 "05type.c"
    if(void_param_99) {
        # 259 "05type.c"
        # 250 "05type.c"
        if(_if_conditional139=strmemcmp(info->p,"void"),        _if_conditional139) {
            # 251 "05type.c"
            info->p+=strlen("void");
            # 252 "05type.c"
            skip_spaces_and_lf(info);
            # 258 "05type.c"
            # 254 "05type.c"
            if(_if_conditional140=*info->p==41,            _if_conditional140) {
                # 255 "05type.c"
                info->p++;
                # 256 "05type.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 332 "05type.c"
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            # 268 "05type.c"
            # 262 "05type.c"
            if(_if_conditional141=*info->p==41,            _if_conditional141) {
                # 263 "05type.c"
                info->p++;
                # 264 "05type.c"
                skip_spaces_and_lf(info);
                # 265 "05type.c"
                break;
            }
            # 268 "05type.c"
            parse_sharp_v5(info);
            # 270 "05type.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value133=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_102=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_103=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_104=multiple_assign_var1->v3;
            come_call_finalizer3(right_value133,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 277 "05type.c"
            # 272 "05type.c"
            if(_if_conditional144=!err_104,            _if_conditional144) {
                # 273 "05type.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 274 "05type.c"
                __result91__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value135=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value134=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 274, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value135,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result91__;
            }
            # 277 "05type.c"
            param_type2_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=solve_generics(param_type_102,info->generics_type,info))));
            come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 279 "05type.c"
            param_type2_105->mFunctionParam=(_Bool)1;
            # 281 "05type.c"
            list$1sTypeph_push_back(param_types_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(param_type2_105)))));
            come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 282 "05type.c"
            list$1charph_push_back(param_names_71,(char*)come_increment_ref_count(((char*)(right_value144=string_clone(param_name_103)))));
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 311 "05type.c"
            # 284 "05type.c"
            if(_if_conditional149=*info->p==61,            _if_conditional149) {
                # 285 "05type.c"
                info->p++;
                # 286 "05type.c"
                skip_spaces_and_lf(info);
                # 288 "05type.c"
                parse_sharp_v5(info);
                # 290 "05type.c"
                p_112=info->p;
                # 292 "05type.c"
                no_comma_113=info->no_comma;
                # 293 "05type.c"
                info->no_comma=(_Bool)1;
                # 295 "05type.c"
                node_114=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=expression_v13(info))));
                if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 297 "05type.c"
                info->no_comma=no_comma_113;
                # 299 "05type.c"
                p2_115=info->p;
                # 301 "05type.c"
                char buf_116[p2_115-p_112+1];
                memset(&buf_116, 0, sizeof(char)                *(p2_115-p_112+1)                );
                # 302 "05type.c"
                memcpy(buf_116,p_112,p2_115-p_112);
                # 303 "05type.c"
                buf_116[p2_115-p_112]=0;
                # 305 "05type.c"
                list$1charph_push_back(param_default_parametors_72,(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(buf_116)))));
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_114) { node_114 = come_decrement_ref_count2(node_114, ((struct sNode*)node_114)->finalize, ((struct sNode*)node_114)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 308 "05type.c"
                list$1charph_push_back(param_default_parametors_72,((void*)0));
            }
            # 311 "05type.c"
            parse_sharp_v5(info);
            # 331 "05type.c"
            # 313 "05type.c"
            if(_if_conditional150=*info->p==44,            _if_conditional150) {
                # 314 "05type.c"
                info->p++;
                # 315 "05type.c"
                skip_spaces_and_lf(info);
                # 325 "05type.c"
                # 317 "05type.c"
                if(_if_conditional151=strmemcmp(info->p,"..."),                _if_conditional151) {
                    # 318 "05type.c"
                    info->p+=strlen("...");
                    # 319 "05type.c"
                    skip_spaces_and_lf(info);
                    # 320 "05type.c"
                    var_args_73=(_Bool)1;
                    # 322 "05type.c"
                    expected_next_character(41,info);
                    # 323 "05type.c"
                    come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 331 "05type.c"
                # 326 "05type.c"
                if(_if_conditional152=*info->p==41,                _if_conditional152) {
                    # 327 "05type.c"
                    info->p++;
                    # 328 "05type.c"
                    skip_spaces_and_lf(info);
                    # 329 "05type.c"
                    come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 334 "05type.c"
    __result95__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value148=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value147=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 334, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_70),(struct list$1charph*)come_increment_ref_count(param_names_71),(struct list$1charph*)come_increment_ref_count(param_default_parametors_72),var_args_73)));
    come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value148,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result95__;
    come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 96 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 97 "/usr/local/include/neo-c.h"
        self->len=0;
        # 99 "/usr/local/include/neo-c.h"
        __result72__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 96 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 97 "/usr/local/include/neo-c.h"
        self->len=0;
        # 99 "/usr/local/include/neo-c.h"
        __result73__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value94;
struct list_item$1charph* litem_74;
char* __dec_obj13;
_Bool _if_conditional62;
void* right_value95;
struct list_item$1charph* litem_75;
char* __dec_obj14;
void* right_value96;
struct list_item$1charph* litem_76;
char* __dec_obj15;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
            # 177 "/usr/local/include/neo-c.h"
            # 146 "/usr/local/include/neo-c.h"
            if(_if_conditional61=self->len==0,            _if_conditional61) {
                # 147 "/usr/local/include/neo-c.h"
                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1charph"))));
                come_call_finalizer3(right_value94,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 149 "/usr/local/include/neo-c.h"
                litem_74->prev=((void*)0);
                # 150 "/usr/local/include/neo-c.h"
                litem_74->next=((void*)0);
                # 151 "/usr/local/include/neo-c.h"
                __dec_obj13=litem_74->item;
                litem_74->item=(char*)come_increment_ref_count(item);
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 153 "/usr/local/include/neo-c.h"
                self->tail=litem_74;
                # 154 "/usr/local/include/neo-c.h"
                self->head=litem_74;
            }
            else {
                # 177 "/usr/local/include/neo-c.h"
                # 156 "/usr/local/include/neo-c.h"
                if(_if_conditional62=self->len==1,                _if_conditional62) {
                    # 157 "/usr/local/include/neo-c.h"
                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1charph"))));
                    come_call_finalizer3(right_value95,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 159 "/usr/local/include/neo-c.h"
                    litem_75->prev=self->head;
                    # 160 "/usr/local/include/neo-c.h"
                    litem_75->next=((void*)0);
                    # 161 "/usr/local/include/neo-c.h"
                    __dec_obj14=litem_75->item;
                    litem_75->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 163 "/usr/local/include/neo-c.h"
                    self->tail=litem_75;
                    # 164 "/usr/local/include/neo-c.h"
                    self->head->next=litem_75;
                }
                else {
                    # 167 "/usr/local/include/neo-c.h"
                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1charph"))));
                    come_call_finalizer3(right_value96,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 169 "/usr/local/include/neo-c.h"
                    litem_76->prev=self->tail;
                    # 170 "/usr/local/include/neo-c.h"
                    litem_76->next=((void*)0);
                    # 171 "/usr/local/include/neo-c.h"
                    __dec_obj15=litem_76->item;
                    litem_76->item=(char*)come_increment_ref_count(item);
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 173 "/usr/local/include/neo-c.h"
                    self->tail->next=litem_76;
                    # 174 "/usr/local/include/neo-c.h"
                    self->tail=litem_76;
                }
            }
            # 177 "/usr/local/include/neo-c.h"
            self->len++;
            # 179 "/usr/local/include/neo-c.h"
            __result74__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result74__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sType* __result75__;
void* right_value98;
struct sType* result_77;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value105;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional69;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional73;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional74;
void* right_value110;
char* __dec_obj23;
_Bool _if_conditional75;
void* right_value111;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional76;
void* right_value119;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value120;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional91;
void* right_value124;
struct list$1charph* __dec_obj30;
_Bool _if_conditional93;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value126;
struct sNode* __dec_obj32;
_Bool _if_conditional96;
_Bool _if_conditional97;
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
void* right_value127;
struct sNode* __dec_obj33;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value128;
char* __dec_obj34;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value129;
char* __dec_obj35;
_Bool _if_conditional134;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_77, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional63=self==(void*)0,            _if_conditional63) {
                # 2 "sType_clone"
                __result75__ = __result_obj__ = (void*)0;
                return __result75__;
            }
            # 3 "sType_clone"
            result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                # 4 "sType_clone"
                result_77->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional65) {
                # 5 "sType_clone"
                __dec_obj19=result_77->mMultipleTypes;
                result_77->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj19,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional69) {
                # 6 "sType_clone"
                __dec_obj21=result_77->mNoSolvedGenericsType;
                result_77->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj21,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value108,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional73=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional73) {
                # 7 "sType_clone"
                __dec_obj22=result_77->mOriginalLoadVarType;
                result_77->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional74) {
                # 8 "sType_clone"
                __dec_obj23=result_77->mGenericsName;
                result_77->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mGenericsName))));
                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional75=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional75) {
                # 9 "sType_clone"
                __dec_obj24=result_77->mGenericsTypes;
                result_77->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional76) {
                # 10 "sType_clone"
                __dec_obj28=result_77->mArrayNum;
                result_77->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj28,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value119,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 11 "sType_clone"
                result_77->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional90=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional90) {
                # 12 "sType_clone"
                __dec_obj29=result_77->mParamTypes;
                result_77->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional91=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional91) {
                # 13 "sType_clone"
                __dec_obj30=result_77->mParamNames;
                result_77->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional93=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional93) {
                # 14 "sType_clone"
                __dec_obj31=result_77->mResultType;
                result_77->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value125,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 15 "sType_clone"
                result_77->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional95=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional95) {
                # 16 "sType_clone"
                __dec_obj32=result_77->mAlignas;
                result_77->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 17 "sType_clone"
                result_77->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 18 "sType_clone"
                result_77->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 19 "sType_clone"
                result_77->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 20 "sType_clone"
                result_77->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 21 "sType_clone"
                result_77->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 22 "sType_clone"
                result_77->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 23 "sType_clone"
                result_77->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 24 "sType_clone"
                result_77->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 25 "sType_clone"
                result_77->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 26 "sType_clone"
                result_77->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 27 "sType_clone"
                result_77->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 28 "sType_clone"
                result_77->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 29 "sType_clone"
                result_77->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 30 "sType_clone"
                result_77->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 31 "sType_clone"
                result_77->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 32 "sType_clone"
                result_77->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 33 "sType_clone"
                result_77->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 34 "sType_clone"
                result_77->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 35 "sType_clone"
                result_77->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 36 "sType_clone"
                result_77->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 37 "sType_clone"
                result_77->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 38 "sType_clone"
                result_77->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 39 "sType_clone"
                result_77->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 40 "sType_clone"
                result_77->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional120=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional120) {
                # 41 "sType_clone"
                __dec_obj33=result_77->mSizeNum;
                result_77->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 42 "sType_clone"
                result_77->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                # 43 "sType_clone"
                result_77->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional123=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional123) {
                # 44 "sType_clone"
                __dec_obj34=result_77->mOriginalTypeName;
                result_77->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                # 45 "sType_clone"
                result_77->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                # 46 "sType_clone"
                result_77->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 47 "sType_clone"
                result_77->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 48 "sType_clone"
                result_77->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                # 49 "sType_clone"
                result_77->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 50 "sType_clone"
                result_77->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                # 51 "sType_clone"
                result_77->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                # 52 "sType_clone"
                result_77->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 53 "sType_clone"
                result_77->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional133=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional133) {
                # 54 "sType_clone"
                __dec_obj35=result_77->mAsmName;
                result_77->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                # 55 "sType_clone"
                result_77->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result89__ = __result_obj__ = result_77;
            come_call_finalizer3(result_77,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result89__;
            come_call_finalizer3(result_77,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1sTypeph* __result76__;
void* right_value99;
void* right_value100;
struct list$1sTypeph* result_78;
struct list_item$1sTypeph* it_79;
_Bool _while_condtional25;
void* right_value104;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_78, 0, sizeof(struct list$1sTypeph*));
memset(&it_79, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result76__ = __result_obj__ = ((void*)0);
                        return __result76__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_78=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value100,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_79=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional25=it_79!=((void*)0),                    _while_condtional25) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1sTypeph_add(result_78,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_79->item)))));
                        come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_79=it_79->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result78__ = __result_obj__ = result_78;
                    come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                    come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value101;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj16;
_Bool _if_conditional68;
void* right_value102;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj17;
void* right_value103;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj18;
struct list$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sTypeph*));
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value101,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_80->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_80->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj16=litem_80->item;
                                litem_80->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_80;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_80;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value102,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_81->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_81->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj17=litem_81->item;
                                    litem_81->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_81;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_81;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_82->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_82->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj18=litem_82->item;
                                    litem_82->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_82;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_82;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
                            __result77__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result77__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_83;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1sTypeph*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_83=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional26=it_83!=((void*)0),                    _while_condtional26) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_84=it_83;
                        # 117 "/usr/local/include/neo-c.h"
                        it_83=it_83->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_84,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct tuple1$1sTypeph* __result79__;
void* right_value106;
struct tuple1$1sTypeph* result_85;
_Bool _if_conditional72;
void* right_value107;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_85, 0, sizeof(struct tuple1$1sTypeph*));
right_value107 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional70=self==(void*)0,                    _if_conditional70) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result79__ = __result_obj__ = (void*)0;
                        return __result79__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_85=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value106,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional72) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj20=result_85->v1;
                        result_85->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value107,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result80__ = __result_obj__ = result_85;
                    come_call_finalizer3(result_85,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                    come_call_finalizer3(result_85,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional71=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional71) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct list$1sNodeph* __result81__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
_Bool _while_condtional27;
void* right_value118;
struct list$1sNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1sNodeph*));
memset(&it_87, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional77=self==((void*)0),                    _if_conditional77) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result81__ = __result_obj__ = ((void*)0);
                        return __result81__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_86=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_87=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional27=it_87!=((void*)0),                    _while_condtional27) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1sNodeph_add(result_86,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(it_87->item)))));
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 139 "/usr/local/include/neo-c.h"
                        it_87=it_87->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result86__ = __result_obj__ = result_86;
                    come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result86__;
                    come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
                        __result82__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result82__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional78;
void* right_value114;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
void* right_value115;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj26;
void* right_value116;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional78=self->len==0,                            _if_conditional78) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value114,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_88->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_88->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj25=litem_88->item;
                                litem_88->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_88;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_88;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional79=self->len==1,                                _if_conditional79) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value115,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_89->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_89->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj26=litem_89->item;
                                    litem_89->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_89;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_89;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_90->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_90->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj27=litem_90->item;
                                    litem_90->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_90;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_90;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
                            __result83__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result83__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional80;
struct sNode* __result84__;
void* right_value117;
struct sNode* result_91;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct sNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_91, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional80=self==(void*)0,                            _if_conditional80) {
                                # 2 "sNode_clone"
                                __result84__ = __result_obj__ = (void*)0;
                                return __result84__;
                            }
                            # 3 "sNode_clone"
                            result_91=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional81=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional81) {
                                # 4 "sNode_clone"
                                result_91->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional82=self!=((void*)0),                            _if_conditional82) {
                                # 5 "sNode_clone"
                                result_91->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                # 6 "sNode_clone"
                                result_91->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional84=self!=((void*)0),                            _if_conditional84) {
                                # 7 "sNode_clone"
                                result_91->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                # 8 "sNode_clone"
                                result_91->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                # 9 "sNode_clone"
                                result_91->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                # 10 "sNode_clone"
                                result_91->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                # 11 "sNode_clone"
                                result_91->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result85__ = __result_obj__ = result_91;
                            if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result85__;
                            if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_92;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_92, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_93, 0, sizeof(struct list_item$1sNodeph*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_92=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional28=it_92!=((void*)0),                    _while_condtional28) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_93=it_92;
                        # 117 "/usr/local/include/neo-c.h"
                        it_92=it_92->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_93,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional92;
struct list$1charph* __result87__;
void* right_value121;
void* right_value122;
struct list$1charph* result_94;
struct list_item$1charph* it_95;
_Bool _while_condtional29;
void* right_value123;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&result_94, 0, sizeof(struct list$1charph*));
memset(&it_95, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional92=self==((void*)0),                    _if_conditional92) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result87__ = __result_obj__ = ((void*)0);
                        return __result87__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_94=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_95=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional29=it_95!=((void*)0),                    _while_condtional29) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1charph_add(result_94,(char*)come_increment_ref_count(((char*)(right_value123=string_clone(it_95->item)))));
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_95=it_95->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result88__ = __result_obj__ = result_94;
                    come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                    come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_96;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1charph*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_96=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional30=it_96!=((void*)0),                    _while_condtional30) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_97=it_96;
                        # 117 "/usr/local/include/neo-c.h"
                        it_96=it_96->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_97,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional142=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional142) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional143=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional143) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1805 "/usr/local/include/neo-c.h"
                    self->v1=v1;
                    # 1806 "/usr/local/include/neo-c.h"
                    self->v2=v2;
                    # 1807 "/usr/local/include/neo-c.h"
                    self->v3=v3;
                    # 1808 "/usr/local/include/neo-c.h"
                    self->v4=v4;
                    # 1810 "/usr/local/include/neo-c.h"
                    __result90__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value137;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj36;
_Bool _if_conditional146;
void* right_value138;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj37;
void* right_value139;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj38;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
right_value138 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
right_value139 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional145=self->len==0,                _if_conditional145) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value137,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_106->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_106->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    __dec_obj36=litem_106->item;
                    litem_106->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_106;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_106;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional146=self->len==1,                    _if_conditional146) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value138,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_107->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_107->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        __dec_obj37=litem_107->item;
                        litem_107->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_107;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_107;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_108->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_108->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        __dec_obj38=litem_108->item;
                        litem_108->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_108;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_108;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result92__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional147;
void* right_value141;
struct list_item$1charph* litem_109;
char* __dec_obj39;
_Bool _if_conditional148;
void* right_value142;
struct list_item$1charph* litem_110;
char* __dec_obj40;
void* right_value143;
struct list_item$1charph* litem_111;
char* __dec_obj41;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value142 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
right_value143 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional147=self->len==0,                _if_conditional147) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value141,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_109->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_109->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    __dec_obj39=litem_109->item;
                    litem_109->item=(char*)come_increment_ref_count(item);
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_109;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_109;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional148=self->len==1,                    _if_conditional148) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value142,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_110->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_110->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        __dec_obj40=litem_110->item;
                        litem_110->item=(char*)come_increment_ref_count(item);
                        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_110;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_110;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value143,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_111->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_111->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        __dec_obj41=litem_111->item;
                        litem_111->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_111;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_111;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result93__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result93__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1805 "/usr/local/include/neo-c.h"
        __dec_obj42=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        # 1806 "/usr/local/include/neo-c.h"
        __dec_obj43=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1807 "/usr/local/include/neo-c.h"
        __dec_obj44=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1808 "/usr/local/include/neo-c.h"
        self->v4=v4;
        # 1810 "/usr/local/include/neo-c.h"
        __result94__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result94__;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional153=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional153) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional154=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional154) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional155=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional155) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct sType* right_type2_117;
_Bool _if_conditional157;
void* right_value150;
struct sType* left_type2_118;
_Bool found_match_type_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value151;
char* tmp_122;
void* right_value152;
char* __dec_obj45;
void* right_value153;
void* right_value154;
struct sType* __dec_obj46;
_Bool __result100__;
struct sType* left_no_solved_generics_type_126;
struct sType* right_no_solved_generics_type_127;
struct sClass* left_class_128;
struct sClass* right_class_129;
_Bool parent_class_130;
_Bool _if_conditional162;
_Bool _while_condtional33;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool __result105__;
int i_136;
_Bool _if_conditional183;
void* right_value155;
char* __dec_obj47;
void* right_value156;
struct sType* __dec_obj48;
void* right_value157;
struct sType* __dec_obj49;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool __result106__;
_Bool _if_conditional191;
_Bool __result107__;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool __result108__;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result109__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool __result110__;
void* right_value158;
void* right_value159;
struct buffer* buf2_137;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
char* __dec_obj50;
void* right_value166;
struct sType* __dec_obj51;
void* right_value167;
struct sType* __dec_obj52;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool __result111__;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool __result112__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool __result113__;
void* right_value168;
char* method_name_138;
_Bool _if_conditional233;
struct sType* obj_type_141;
_Bool _if_conditional234;
struct sType* obj_type2_142;
void* right_value169;
void* right_value170;
char* __dec_obj53;
_Bool _if_conditional235;
_Bool __result118__;
void* right_value171;
void* right_value172;
struct buffer* buf2_143;
void* right_value173;
void* right_value174;
struct sType* type_144;
void* right_value175;
void* right_value176;
char* __dec_obj54;
void* right_value177;
struct sType* __dec_obj55;
void* right_value178;
struct sType* __dec_obj56;
_Bool _if_conditional236;
void* right_value179;
char* method_name_145;
_Bool _if_conditional237;
struct sType* obj_type_146;
_Bool _if_conditional238;
struct sType* obj_type2_147;
void* right_value180;
void* right_value181;
char* __dec_obj57;
_Bool _if_conditional239;
_Bool __result119__;
void* right_value182;
void* right_value183;
struct buffer* buf2_148;
void* right_value184;
void* right_value185;
struct sType* type_149;
void* right_value186;
char* __dec_obj58;
void* right_value187;
struct sType* __dec_obj59;
void* right_value188;
struct sType* __dec_obj60;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool __result120__;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool __result121__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool __result122__;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool __result123__;
_Bool _if_conditional259;
void* right_value189;
char* tmp_150;
void* right_value190;
char* __dec_obj61;
void* right_value191;
struct sType* __dec_obj62;
void* right_value192;
struct sType* __dec_obj63;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool __result124__;
_Bool _if_conditional266;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool __result127__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool __result128__;
_Bool _if_conditional277;
_Bool _if_conditional278;
int i_151;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&right_type2_117, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&left_type2_118, 0, sizeof(struct sType*));
memset(&found_match_type_119, 0, sizeof(_Bool));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&tmp_122, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&left_no_solved_generics_type_126, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_127, 0, sizeof(struct sType*));
memset(&left_class_128, 0, sizeof(struct sClass*));
memset(&right_class_129, 0, sizeof(struct sClass*));
memset(&parent_class_130, 0, sizeof(_Bool));
memset(&i_136, 0, sizeof(int));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&buf2_137, 0, sizeof(struct buffer*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&method_name_138, 0, sizeof(char*));
memset(&obj_type_141, 0, sizeof(struct sType*));
memset(&obj_type2_142, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&buf2_143, 0, sizeof(struct buffer*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&type_144, 0, sizeof(struct sType*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&method_name_145, 0, sizeof(char*));
memset(&obj_type_146, 0, sizeof(struct sType*));
memset(&obj_type2_147, 0, sizeof(struct sType*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&buf2_148, 0, sizeof(struct buffer*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&type_149, 0, sizeof(struct sType*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&tmp_150, 0, sizeof(char*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&i_151, 0, sizeof(int));
    # 339 "05type.c"
    right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(right_type))));
    come_call_finalizer3(right_value149,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 366 "05type.c"
    # 341 "05type.c"
    if(_if_conditional157=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional157) {
        # 342 "05type.c"
        left_type2_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type))));
        come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 343 "05type.c"
        found_match_type_119=(_Bool)0;
        # 350 "05type.c"
        for(        o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_121=list$1sTypeph_begin((o2_saved_120));        !list$1sTypeph_end((o2_saved_120));        it_121=list$1sTypeph_next((o2_saved_120))        ){
            # 348 "05type.c"
            # 345 "05type.c"
            if(_if_conditional158=check_assign_type(msg,it_121,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional158) {
                # 346 "05type.c"
                found_match_type_119=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_120,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 357 "05type.c"
        # 350 "05type.c"
        if(_if_conditional159=!found_match_type_119,        _if_conditional159) {
            # 351 "05type.c"
            err_msg(info,"type errorX");
            # 352 "05type.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 353 "05type.c"
            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
            # 354 "05type.c"
            exit(2);
        }
        # 357 "05type.c"
        tmp_122=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(void*)%s",come_value->c_value))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 358 "05type.c"
        __dec_obj45=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(tmp_122))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 359 "05type.c"
        __dec_obj46=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 359, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 360 "05type.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05type.c", 360, 1))->mHeap;
        # 361 "05type.c"
        come_value->var=((void*)0);
        # 363 "05type.c"
        __result100__ = (_Bool)1;
        come_call_finalizer3(left_type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_122 = come_decrement_ref_count2(tmp_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result100__;
        come_call_finalizer3(left_type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_122 = come_decrement_ref_count2(tmp_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 366 "05type.c"
    left_no_solved_generics_type_126=left_type->mNoSolvedGenericsType->v1;
    # 367 "05type.c"
    right_no_solved_generics_type_127=right_type2_117->mNoSolvedGenericsType->v1;
    # 369 "05type.c"
    left_class_128=left_type->mClass;
    # 370 "05type.c"
    right_class_129=right_type2_117->mClass;
    # 372 "05type.c"
    parent_class_130=(_Bool)0;
    # 387 "05type.c"
    # 373 "05type.c"
    if(_if_conditional162=string_operator_not_equals(left_class_128->mName,right_class_129->mName),    _if_conditional162) {
        # 385 "05type.c"
        while(_while_condtional33=left_class_128&&right_class_129,        _while_condtional33) {
            # 378 "05type.c"
            # 375 "05type.c"
            if(_if_conditional163=string_operator_equals(left_class_128->mName,right_class_129->mName),            _if_conditional163) {
                # 376 "05type.c"
                parent_class_130=(_Bool)1;
            }
            # 384 "05type.c"
            # 378 "05type.c"
            if(right_class_129->mParentClassName) {
                # 379 "05type.c"
                right_class_129=map$2charphsClassphp_operator_load_element(info->classes,right_class_129->mParentClassName);
            }
            else {
                # 382 "05type.c"
                right_class_129=((void*)0);
            }
        }
    }
    # 744 "05type.c"
    # 387 "05type.c"
    if(_if_conditional176=left_no_solved_generics_type_126&&right_no_solved_generics_type_127,    _if_conditional176) {
        # 420 "05type.c"
        # 388 "05type.c"
        if(_if_conditional177=string_operator_equals(left_type->mClass->mName,right_type2_117->mClass->mName)&&left_type->mPointerNum==right_type2_117->mPointerNum,        _if_conditional177) {
        }
        else {
            # 420 "05type.c"
            # 390 "05type.c"
            if(_if_conditional178=string_operator_equals(left_type->mClass->mName,right_type2_117->mClass->mName)&&(left_type->mPointerNum!=right_type2_117->mPointerNum||left_type->mHeap!=right_type2_117->mHeap),            _if_conditional178) {
                # 391 "05type.c"
                err_msg(info,"poinetr num err");
                # 392 "05type.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes),left_no_solved_generics_type_126->mClass->mName,left_type->mClass->mName);
                # 393 "05type.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),right_no_solved_generics_type_127->mClass->mName,right_type2_117->mClass->mName);
                # 394 "05type.c"
                exit(2);
            }
            else {
                # 420 "05type.c"
                # 396 "05type.c"
                if(_if_conditional179=list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes)>0,                _if_conditional179) {
                    # 419 "05type.c"
                    # 397 "05type.c"
                    if(_if_conditional180=(string_operator_equals(left_no_solved_generics_type_126->mClass->mName,"void")&&left_no_solved_generics_type_126->mPointerNum>0&&right_no_solved_generics_type_127->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_127->mClass->mName,"void")&&right_no_solved_generics_type_127->mPointerNum>0&&left_no_solved_generics_type_126->mPointerNum>0),                    _if_conditional180) {
                    }
                    else {
                        # 413 "05type.c"
                        # 401 "05type.c"
                        if(_if_conditional181=list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),                        _if_conditional181) {
                            # 410 "05type.c"
                            # 403 "05type.c"
                            if(print_err_msg) {
                                # 404 "05type.c"
                                err_msg(info,"generics type parametor number error");
                                # 405 "05type.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes),left_no_solved_generics_type_126->mClass->mName,left_type->mClass->mName);
                                # 406 "05type.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),right_no_solved_generics_type_127->mClass->mName,right_type2_117->mClass->mName);
                                # 407 "05type.c"
                                exit(2);
                            }
                            # 410 "05type.c"
                            __result105__ = (_Bool)0;
                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result105__;
                        }
                        # 417 "05type.c"
                        for(                        i_136=0;                        i_136<list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes);                        i_136++                        ){
                            # 414 "05type.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_126->mGenericsTypes,i_136), "05type.c", 414, 2)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_127->mGenericsTypes,i_136), "05type.c", 414, 3)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 417 "05type.c"
                        check_assign_type(msg,left_no_solved_generics_type_126,right_no_solved_generics_type_127,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 744 "05type.c"
        # 421 "05type.c"
        if(_if_conditional183=parent_class_130&&left_type->mPointerNum==1&&right_type->mPointerNum==1,        _if_conditional183) {
            # 422 "05type.c"
            __dec_obj47=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 423 "05type.c"
            __dec_obj48=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 424 "05type.c"
            come_value->var=((void*)0);
            # 426 "05type.c"
            __dec_obj49=right_type2_117;
            right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 744 "05type.c"
            # 428 "05type.c"
            if(check_no_pointer) {
                # 476 "05type.c"
                # 429 "05type.c"
                if(_if_conditional185=left_type->mPointerNum>0,                _if_conditional185) {
                    # 455 "05type.c"
                    # 430 "05type.c"
                    if(_if_conditional186=right_type2_117->mPointerNum>0,                    _if_conditional186) {
                        # 444 "05type.c"
                        # 431 "05type.c"
                        if(_if_conditional187=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                        _if_conditional187) {
                        }
                        else {
                            # 444 "05type.c"
                            # 433 "05type.c"
                            if(_if_conditional188=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                            _if_conditional188) {
                            }
                            else {
                                # 444 "05type.c"
                                # 435 "05type.c"
                                if(_if_conditional189=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                _if_conditional189) {
                                    # 442 "05type.c"
                                    # 436 "05type.c"
                                    if(print_err_msg) {
                                        # 437 "05type.c"
                                        err_msg(info,"type error1");
                                        # 438 "05type.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 439 "05type.c"
                                        printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                        # 440 "05type.c"
                                        exit(2);
                                    }
                                    # 442 "05type.c"
                                    __result106__ = (_Bool)0;
                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result106__;
                                }
                            }
                        }
                    }
                    else {
                        # 453 "05type.c"
                        # 446 "05type.c"
                        if(print_err_msg) {
                            # 447 "05type.c"
                            err_msg(info,"type error2");
                            # 448 "05type.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 449 "05type.c"
                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                            # 450 "05type.c"
                            exit(2);
                        }
                        # 453 "05type.c"
                        __result107__ = (_Bool)0;
                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result107__;
                    }
                }
                else {
                    # 476 "05type.c"
                    # 456 "05type.c"
                    if(_if_conditional192=left_type->mPointerNum==0&&right_type2_117->mPointerNum>0,                    _if_conditional192) {
                        # 463 "05type.c"
                        # 457 "05type.c"
                        if(print_err_msg) {
                            # 458 "05type.c"
                            err_msg(info,"type error3");
                            # 459 "05type.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 460 "05type.c"
                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                            # 461 "05type.c"
                            exit(2);
                        }
                        # 463 "05type.c"
                        __result108__ = (_Bool)0;
                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result108__;
                    }
                    else {
                        # 476 "05type.c"
                        # 465 "05type.c"
                        if(_if_conditional194=left_type->mPointerNum>0&&right_type2_117->mPointerNum==0&&string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                        _if_conditional194) {
                        }
                        else {
                            # 476 "05type.c"
                            # 467 "05type.c"
                            if(_if_conditional195=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                            _if_conditional195) {
                                # 474 "05type.c"
                                # 468 "05type.c"
                                if(print_err_msg) {
                                    # 469 "05type.c"
                                    err_msg(info,"type error4");
                                    # 470 "05type.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 471 "05type.c"
                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                    # 472 "05type.c"
                                    exit(2);
                                }
                                # 474 "05type.c"
                                __result109__ = (_Bool)0;
                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result109__;
                            }
                        }
                    }
                }
            }
            else {
                # 744 "05type.c"
                # 477 "05type.c"
                if(_if_conditional197=!left_type->mNullValue&&right_type2_117->mNullValue,                _if_conditional197) {
                    # 502 "05type.c"
                    # 478 "05type.c"
                    if(_if_conditional198=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                    _if_conditional198) {
                    }
                    else {
                        # 502 "05type.c"
                        # 480 "05type.c"
                        if(_if_conditional199=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                        _if_conditional199) {
                        }
                        else {
                            # 502 "05type.c"
                            # 482 "05type.c"
                            if(_if_conditional200=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum==0,                            _if_conditional200) {
                                # 489 "05type.c"
                                # 483 "05type.c"
                                if(print_err_msg) {
                                    # 484 "05type.c"
                                    err_msg(info,"type error6");
                                    # 485 "05type.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 486 "05type.c"
                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                    # 487 "05type.c"
                                    exit(2);
                                }
                                # 489 "05type.c"
                                __result110__ = (_Bool)0;
                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result110__;
                            }
                            else {
                                # 492 "05type.c"
                                buf2_137=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 492, "buffer"))))))));
                                come_call_finalizer3(right_value158,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value159,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 494 "05type.c"
                                buffer_append_str(buf2_137,((char*)(right_value164=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value160=string_to_string(come_value->c_value))),((char*)(right_value161=string_to_string(info->sname))),((char*)(right_value162=int_to_string(info->sline))),((char*)(right_value163=int_to_string(gComeDebugStackFrameID++)))))));
                                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 496 "05type.c"
                                __dec_obj50=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value165=buffer_to_string(buf2_137))));
                                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 497 "05type.c"
                                __dec_obj51=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 498 "05type.c"
                                come_value->var=((void*)0);
                                # 500 "05type.c"
                                __dec_obj52=right_type2_117;
                                right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf2_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
                else {
                    # 744 "05type.c"
                    # 503 "05type.c"
                    if(_if_conditional202=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                    _if_conditional202) {
                        # 576 "05type.c"
                        # 504 "05type.c"
                        if(_if_conditional203=string_operator_equals(right_type2_117->mClass->mName,"integer")&&right_type2_117->mPointerNum==1,                        _if_conditional203) {
                        }
                        else {
                            # 576 "05type.c"
                            # 506 "05type.c"
                            if(_if_conditional204=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                            _if_conditional204) {
                            }
                            else {
                                # 576 "05type.c"
                                # 508 "05type.c"
                                if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                _if_conditional205) {
                                }
                                else {
                                    # 576 "05type.c"
                                    # 510 "05type.c"
                                    if(_if_conditional206=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                    _if_conditional206) {
                                        # 517 "05type.c"
                                        # 511 "05type.c"
                                        if(print_err_msg) {
                                            # 512 "05type.c"
                                            err_msg(info,"type error6");
                                            # 513 "05type.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 514 "05type.c"
                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                            # 515 "05type.c"
                                            exit(2);
                                        }
                                        # 517 "05type.c"
                                        __result111__ = (_Bool)0;
                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result111__;
                                    }
                                    else {
                                        # 576 "05type.c"
                                        # 519 "05type.c"
                                        if(_if_conditional208=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                        _if_conditional208) {
                                        }
                                        else {
                                            # 576 "05type.c"
                                            # 521 "05type.c"
                                            if(_if_conditional209=string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional209) {
                                                # 528 "05type.c"
                                                # 522 "05type.c"
                                                if(print_err_msg) {
                                                    # 523 "05type.c"
                                                    err_msg(info,"type error6");
                                                    # 524 "05type.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 525 "05type.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                    # 526 "05type.c"
                                                    exit(2);
                                                }
                                                # 528 "05type.c"
                                                __result112__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result112__;
                                            }
                                            else {
                                                # 576 "05type.c"
                                                # 530 "05type.c"
                                                if(_if_conditional211=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                _if_conditional211) {
                                                }
                                                else {
                                                    # 576 "05type.c"
                                                    # 532 "05type.c"
                                                    if(_if_conditional212=right_type2_117->mPointerNum>0,                                                    _if_conditional212) {
                                                        # 539 "05type.c"
                                                        # 533 "05type.c"
                                                        if(print_err_msg) {
                                                            # 534 "05type.c"
                                                            err_msg(info,"type error10");
                                                            # 535 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 536 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 537 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 539 "05type.c"
                                                        __result113__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result113__;
                                                    }
                                                    else {
                                                        # 542 "05type.c"
                                                        method_name_138=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(right_type2_117,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 559 "05type.c"
                                                        # 544 "05type.c"
                                                        if(_if_conditional233=map$2charphsFunph_at(info->funcs,method_name_138,((void*)0))==((void*)0),                                                        _if_conditional233) {
                                                            # 545 "05type.c"
                                                            obj_type_141=right_type2_117->mNoSolvedGenericsType->v1;
                                                            # 557 "05type.c"
                                                            # 546 "05type.c"
                                                            if(_if_conditional234=obj_type_141&&list$1sTypeph_length(obj_type_141->mGenericsTypes)>0,                                                            _if_conditional234) {
                                                                # 547 "05type.c"
                                                                obj_type2_142=right_type2_117;
                                                                # 548 "05type.c"
                                                                __dec_obj53=method_name_138;
                                                                method_name_138=(char*)come_increment_ref_count(((char*)(right_value170=make_generics_function(obj_type2_142,(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                # 555 "05type.c"
                                                                # 551 "05type.c"
                                                                if(print_err_msg) {
                                                                    # 552 "05type.c"
                                                                    err_msg(info,"require to_string implementation(%s)",right_type2_117->mClass->mName);
                                                                    # 553 "05type.c"
                                                                    exit(2);
                                                                }
                                                                # 555 "05type.c"
                                                                __result118__ = (_Bool)0;
                                                                method_name_138 = come_decrement_ref_count2(method_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result118__;
                                                            }
                                                        }
                                                        # 559 "05type.c"
                                                        buf2_143=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 559, "buffer"))))))));
                                                        come_call_finalizer3(right_value171,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value172,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 561 "05type.c"
                                                        buffer_append_str(buf2_143,method_name_138);
                                                        # 562 "05type.c"
                                                        buffer_append_str(buf2_143,"(");
                                                        # 563 "05type.c"
                                                        buffer_append_str(buf2_143,come_value->c_value);
                                                        # 564 "05type.c"
                                                        buffer_append_str(buf2_143,")");
                                                        # 566 "05type.c"
                                                        type_144=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 566, "sType")))),"integer",(_Bool)0,info))));
                                                        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 567 "05type.c"
                                                        type_144->mHeap=(_Bool)1;
                                                        # 568 "05type.c"
                                                        type_144->mPointerNum=1;
                                                        # 570 "05type.c"
                                                        __dec_obj54=come_value->c_value;
                                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value176=append_object_to_right_values(((char*)(right_value175=buffer_to_string(buf2_143))),(struct sType*)come_increment_ref_count(type_144),info))));
                                                        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 571 "05type.c"
                                                        __dec_obj55=come_value->type;
                                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(type_144))));
                                                        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 572 "05type.c"
                                                        come_value->var=((void*)0);
                                                        # 574 "05type.c"
                                                        __dec_obj56=right_type2_117;
                                                        right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type_144))));
                                                        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        method_name_138 = come_decrement_ref_count2(method_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(buf2_143,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else {
                        # 744 "05type.c"
                        # 577 "05type.c"
                        if(_if_conditional236=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                        _if_conditional236) {
                            # 578 "05type.c"
                            method_name_145=(char*)come_increment_ref_count(((char*)(right_value179=create_method_name(right_type2_117,(_Bool)0,"to_int",info,(_Bool)1))));
                            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 595 "05type.c"
                            # 580 "05type.c"
                            if(_if_conditional237=map$2charphsFunph_at(info->funcs,method_name_145,((void*)0))==((void*)0),                            _if_conditional237) {
                                # 581 "05type.c"
                                obj_type_146=right_type2_117->mNoSolvedGenericsType->v1;
                                # 593 "05type.c"
                                # 582 "05type.c"
                                if(_if_conditional238=obj_type_146&&list$1sTypeph_length(obj_type_146->mGenericsTypes)>0,                                _if_conditional238) {
                                    # 583 "05type.c"
                                    obj_type2_147=right_type2_117;
                                    # 584 "05type.c"
                                    __dec_obj57=method_name_145;
                                    method_name_145=(char*)come_increment_ref_count(((char*)(right_value181=make_generics_function(obj_type2_147,(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("to_int")))),info,(_Bool)1))));
                                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 591 "05type.c"
                                    # 587 "05type.c"
                                    if(print_err_msg) {
                                        # 588 "05type.c"
                                        err_msg(info,"require to_string implementation(%s)",right_type2_117->mClass->mName);
                                        # 589 "05type.c"
                                        exit(1);
                                    }
                                    # 591 "05type.c"
                                    __result119__ = (_Bool)0;
                                    method_name_145 = come_decrement_ref_count2(method_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result119__;
                                }
                            }
                            # 595 "05type.c"
                            buf2_148=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 595, "buffer"))))))));
                            come_call_finalizer3(right_value182,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 597 "05type.c"
                            buffer_append_str(buf2_148,method_name_145);
                            # 598 "05type.c"
                            buffer_append_str(buf2_148,"(");
                            # 599 "05type.c"
                            buffer_append_str(buf2_148,come_value->c_value);
                            # 600 "05type.c"
                            buffer_append_str(buf2_148,")");
                            # 602 "05type.c"
                            type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 602, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 604 "05type.c"
                            __dec_obj58=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value186=buffer_to_string(buf2_148))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 605 "05type.c"
                            __dec_obj59=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(type_149))));
                            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 606 "05type.c"
                            come_value->var=((void*)0);
                            # 608 "05type.c"
                            __dec_obj60=right_type2_117;
                            right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(type_149))));
                            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            method_name_145 = come_decrement_ref_count2(method_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf2_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 744 "05type.c"
                            # 610 "05type.c"
                            if(_if_conditional240=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                            _if_conditional240) {
                                # 647 "05type.c"
                                # 611 "05type.c"
                                if(_if_conditional241=string_operator_equals(right_type2_117->mClass->mName,"char")&&right_type2_117->mPointerNum==1,                                _if_conditional241) {
                                }
                                else {
                                    # 647 "05type.c"
                                    # 613 "05type.c"
                                    if(_if_conditional242=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                    _if_conditional242) {
                                    }
                                    else {
                                        # 647 "05type.c"
                                        # 615 "05type.c"
                                        if(_if_conditional243=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                        _if_conditional243) {
                                        }
                                        else {
                                            # 647 "05type.c"
                                            # 617 "05type.c"
                                            if(_if_conditional244=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                            _if_conditional244) {
                                                # 625 "05type.c"
                                                # 618 "05type.c"
                                                if(print_err_msg) {
                                                    # 619 "05type.c"
                                                    err_msg(info,"type error6");
                                                    # 620 "05type.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 621 "05type.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                    # 622 "05type.c"
                                                    exit(2);
                                                }
                                                # 625 "05type.c"
                                                __result120__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result120__;
                                            }
                                            else {
                                                # 647 "05type.c"
                                                # 627 "05type.c"
                                                if(_if_conditional246=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                                _if_conditional246) {
                                                }
                                                else {
                                                    # 647 "05type.c"
                                                    # 629 "05type.c"
                                                    if(_if_conditional247=string_operator_equals(right_type2_117->mClass->mName,"void"),                                                    _if_conditional247) {
                                                        # 636 "05type.c"
                                                        # 630 "05type.c"
                                                        if(print_err_msg) {
                                                            # 631 "05type.c"
                                                            err_msg(info,"type error6");
                                                            # 632 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 633 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 634 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 636 "05type.c"
                                                        __result121__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result121__;
                                                    }
                                                    else {
                                                        # 647 "05type.c"
                                                        # 638 "05type.c"
                                                        if(_if_conditional249=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                                        _if_conditional249) {
                                                            # 645 "05type.c"
                                                            # 639 "05type.c"
                                                            if(print_err_msg) {
                                                                # 640 "05type.c"
                                                                err_msg(info,"type error5");
                                                                # 641 "05type.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 642 "05type.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                # 643 "05type.c"
                                                                exit(2);
                                                            }
                                                            # 645 "05type.c"
                                                            __result122__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result122__;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 744 "05type.c"
                                # 648 "05type.c"
                                if(_if_conditional251=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                                _if_conditional251) {
                                    # 676 "05type.c"
                                    # 649 "05type.c"
                                    if(_if_conditional252=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum==1,                                    _if_conditional252) {
                                    }
                                    else {
                                        # 676 "05type.c"
                                        # 651 "05type.c"
                                        if(_if_conditional253=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                        _if_conditional253) {
                                        }
                                        else {
                                            # 676 "05type.c"
                                            # 653 "05type.c"
                                            if(_if_conditional254=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                            _if_conditional254) {
                                            }
                                            else {
                                                # 676 "05type.c"
                                                # 655 "05type.c"
                                                if(_if_conditional255=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                _if_conditional255) {
                                                }
                                                else {
                                                    # 676 "05type.c"
                                                    # 657 "05type.c"
                                                    if(_if_conditional256=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                                    _if_conditional256) {
                                                    }
                                                    else {
                                                        # 676 "05type.c"
                                                        # 659 "05type.c"
                                                        if(_if_conditional257=string_operator_equals(right_type2_117->mClass->mName,"void"),                                                        _if_conditional257) {
                                                            # 666 "05type.c"
                                                            # 660 "05type.c"
                                                            if(print_err_msg) {
                                                                # 661 "05type.c"
                                                                err_msg(info,"type error6");
                                                                # 662 "05type.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 663 "05type.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                # 664 "05type.c"
                                                                exit(2);
                                                            }
                                                            # 666 "05type.c"
                                                            __result123__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result123__;
                                                        }
                                                        else {
                                                            # 676 "05type.c"
                                                            # 668 "05type.c"
                                                            if(_if_conditional259=right_type2_117->mPointerNum==0,                                                            _if_conditional259) {
                                                                # 669 "05type.c"
                                                                tmp_150=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("(void*)%s",come_value->c_value))));
                                                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 670 "05type.c"
                                                                __dec_obj61=come_value->c_value;
                                                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(tmp_150))));
                                                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 671 "05type.c"
                                                                __dec_obj62=come_value->type;
                                                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 672 "05type.c"
                                                                come_value->var=((void*)0);
                                                                # 674 "05type.c"
                                                                __dec_obj63=right_type2_117;
                                                                right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value192,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                tmp_150 = come_decrement_ref_count2(tmp_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 744 "05type.c"
                                    # 677 "05type.c"
                                    if(_if_conditional260=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                    _if_conditional260) {
                                        # 731 "05type.c"
                                        # 678 "05type.c"
                                        if(_if_conditional261=right_type2_117->mPointerNum>0||(right_type2_117->mPointerNum==0&&right_type2_117->mClass->mStruct),                                        _if_conditional261) {
                                            # 702 "05type.c"
                                            # 679 "05type.c"
                                            if(_if_conditional262=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional262) {
                                            }
                                            else {
                                                # 702 "05type.c"
                                                # 681 "05type.c"
                                                if(_if_conditional263=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                                _if_conditional263) {
                                                }
                                                else {
                                                    # 702 "05type.c"
                                                    # 683 "05type.c"
                                                    if(_if_conditional264=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                                    _if_conditional264) {
                                                        # 690 "05type.c"
                                                        # 684 "05type.c"
                                                        if(print_err_msg) {
                                                            # 685 "05type.c"
                                                            err_msg(info,"type error5");
                                                            # 686 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 687 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 688 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 690 "05type.c"
                                                        __result124__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result124__;
                                                    }
                                                    else {
                                                        # 702 "05type.c"
                                                        # 692 "05type.c"
                                                        if(_if_conditional266=left_type->mPointerNum!=right_type2_117->mPointerNum,                                                        _if_conditional266) {
                                                            # 693 "05type.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 694 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 695 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                        }
                                                        else {
                                                            # 702 "05type.c"
                                                            # 697 "05type.c"
                                                            if(_if_conditional268=list$1sNodeph_length(right_type2_117->mArrayNum)>0,                                                            _if_conditional268) {
                                                                # 698 "05type.c"
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                # 699 "05type.c"
                                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                # 700 "05type.c"
                                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum,list$1sNodeph_length(right_type2_117->mArrayNum));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            # 731 "05type.c"
                                            # 703 "05type.c"
                                            if(_if_conditional269=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional269) {
                                            }
                                            else {
                                                # 731 "05type.c"
                                                # 705 "05type.c"
                                                if(_if_conditional270=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                                _if_conditional270) {
                                                }
                                                else {
                                                    # 731 "05type.c"
                                                    # 707 "05type.c"
                                                    if(_if_conditional271=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                                    _if_conditional271) {
                                                    }
                                                    else {
                                                        # 731 "05type.c"
                                                        # 709 "05type.c"
                                                        if(_if_conditional272=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                        _if_conditional272) {
                                                        }
                                                        else {
                                                            # 731 "05type.c"
                                                            # 711 "05type.c"
                                                            if(_if_conditional273=left_type->mPointerNum>0&&right_type2_117->mPointerNum==0&&string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                            _if_conditional273) {
                                                                # 719 "05type.c"
                                                                # 712 "05type.c"
                                                                if(print_err_msg) {
                                                                    # 713 "05type.c"
                                                                    err_msg(info,"type error10");
                                                                    # 714 "05type.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 715 "05type.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                    # 716 "05type.c"
                                                                    exit(2);
                                                                }
                                                                # 719 "05type.c"
                                                                __result127__ = (_Bool)0;
                                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result127__;
                                                            }
                                                            else {
                                                                # 731 "05type.c"
                                                                # 721 "05type.c"
                                                                if(_if_conditional275=!(string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_117->mPointerNum==0,                                                                _if_conditional275) {
                                                                    # 728 "05type.c"
                                                                    # 722 "05type.c"
                                                                    if(print_err_msg) {
                                                                        # 723 "05type.c"
                                                                        err_msg(info,"type error6");
                                                                        # 724 "05type.c"
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        # 725 "05type.c"
                                                                        printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                        # 726 "05type.c"
                                                                        exit(2);
                                                                    }
                                                                    # 728 "05type.c"
                                                                    __result128__ = (_Bool)0;
                                                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result128__;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        # 742 "05type.c"
                                        # 731 "05type.c"
                                        if(_if_conditional277=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                        _if_conditional277) {
                                            # 738 "05type.c"
                                            # 732 "05type.c"
                                            if(_if_conditional278=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_117->mGenericsTypes),                                            _if_conditional278) {
                                                # 733 "05type.c"
                                                err_msg(info,"generics type number error");
                                                # 734 "05type.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 735 "05type.c"
                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                # 736 "05type.c"
                                                exit(2);
                                            }
                                            # 741 "05type.c"
                                            for(                                            i_151=0;                                            i_151<list$1sTypeph_length(left_type->mGenericsTypes);                                            i_151++                                            ){
                                                # 739 "05type.c"
                                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_151), "05type.c", 739, 4)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_117->mGenericsTypes,i_151), "05type.c", 739, 5)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 744 "05type.c"
    __result129__ = (_Bool)1;
    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional156;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "/usr/local/include/neo-c.h"
        # 351 "/usr/local/include/neo-c.h"
        if(_if_conditional156=self==((void*)0),        _if_conditional156) {
            # 352 "/usr/local/include/neo-c.h"
            __result96__ = 0;
            return __result96__;
        }
        # 354 "/usr/local/include/neo-c.h"
        __result97__ = self->len;
        return __result97__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional160;
struct list_item$1sTypeph* it_123;
int i_124;
_Bool _while_condtional32;
_Bool _if_conditional161;
struct sType* __result98__;
struct sType* default_value_125;
struct sType* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_124, 0, sizeof(int));
memset(&default_value_125, 0, sizeof(struct sType*));
            # 673 "/usr/local/include/neo-c.h"
            # 669 "/usr/local/include/neo-c.h"
            if(_if_conditional160=position<0,            _if_conditional160) {
                # 670 "/usr/local/include/neo-c.h"
                position+=self->len;
            }
            # 673 "/usr/local/include/neo-c.h"
            it_123=self->head;
            # 674 "/usr/local/include/neo-c.h"
            i_124=0;
            # 681 "/usr/local/include/neo-c.h"
            while(_while_condtional32=it_123!=((void*)0),            _while_condtional32) {
                # 679 "/usr/local/include/neo-c.h"
                # 676 "/usr/local/include/neo-c.h"
                if(_if_conditional161=position==i_124,                _if_conditional161) {
                    # 677 "/usr/local/include/neo-c.h"
                    __result98__ = __result_obj__ = it_123->item;
                    return __result98__;
                }
                # 679 "/usr/local/include/neo-c.h"
                it_123=it_123->next;
                # 680 "/usr/local/include/neo-c.h"
                i_124++;
            }
            # 683 "/usr/local/include/neo-c.h"
            # 684 "/usr/local/include/neo-c.h"
            memset(&default_value_125,0,sizeof(struct sType*));
            # 685 "/usr/local/include/neo-c.h"
            __result99__ = __result_obj__ = default_value_125;
            come_call_finalizer3(default_value_125,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(default_value_125,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_131;
unsigned int hash_132;
unsigned int it_133;
_Bool _while_condtional34;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct sClass* __result101__;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct sClass* __result102__;
struct sClass* __result103__;
struct sClass* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_131, 0, sizeof(struct sClass*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(unsigned int));
                    # 1519 "/usr/local/include/neo-c.h"
                    # 1520 "/usr/local/include/neo-c.h"
                    memset(&default_value_131,0,sizeof(struct sClass*));
                    # 1522 "/usr/local/include/neo-c.h"
                    hash_132=string_get_hash_key(((char*)key))%self->size;
                    # 1523 "/usr/local/include/neo-c.h"
                    it_133=hash_132;
                    # 1547 "/usr/local/include/neo-c.h"
                    while(_while_condtional34=(_Bool)1,                    _while_condtional34) {
                        # 1545 "/usr/local/include/neo-c.h"
                        # 1526 "/usr/local/include/neo-c.h"
                        if(_if_conditional165=self->item_existance[it_133],                        _if_conditional165) {
                            # 1533 "/usr/local/include/neo-c.h"
                            # 1528 "/usr/local/include/neo-c.h"
                            if(_if_conditional166=string_equals(self->keys[it_133],key),                            _if_conditional166) {
                                # 1530 "/usr/local/include/neo-c.h"
                                __result101__ = __result_obj__ = self->items[it_133];
                                come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                return __result101__;
                            }
                            # 1533 "/usr/local/include/neo-c.h"
                            it_133++;
                            # 1541 "/usr/local/include/neo-c.h"
                            # 1535 "/usr/local/include/neo-c.h"
                            if(_if_conditional174=it_133>=self->size,                            _if_conditional174) {
                                # 1536 "/usr/local/include/neo-c.h"
                                it_133=0;
                            }
                            else {
                                # 1541 "/usr/local/include/neo-c.h"
                                # 1538 "/usr/local/include/neo-c.h"
                                if(_if_conditional175=it_133==hash_132,                                _if_conditional175) {
                                    # 1539 "/usr/local/include/neo-c.h"
                                    __result102__ = __result_obj__ = default_value_131;
                                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result102__;
                                }
                            }
                        }
                        else {
                            # 1543 "/usr/local/include/neo-c.h"
                            __result103__ = __result_obj__ = default_value_131;
                            come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result103__;
                        }
                    }
                    # 1547 "/usr/local/include/neo-c.h"
                    __result104__ = __result_obj__ = default_value_131;
                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result104__;
                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional172;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sClass_finalize"
                                    # 0 "sClass_finalize"
                                    if(_if_conditional167=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional167) {
                                        # 0 "sClass_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sClass_finalize"
                                    # 1 "sClass_finalize"
                                    if(_if_conditional168=self!=((void*)0)&&self->mFields!=((void*)0),                                    _if_conditional168) {
                                        # 1 "sClass_finalize"
                                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sClass_finalize"
                                    # 2 "sClass_finalize"
                                    if(_if_conditional172=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                    _if_conditional172) {
                                        # 2 "sClass_finalize"
                                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sClass_finalize"
                                    # 3 "sClass_finalize"
                                    if(_if_conditional173=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                    _if_conditional173) {
                                        # 3 "sClass_finalize"
                                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_134;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_135, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                            # 114 "/usr/local/include/neo-c.h"
                                            it_134=self->head;
                                            # 120 "/usr/local/include/neo-c.h"
                                            while(_while_condtional35=it_134!=((void*)0),                                            _while_condtional35) {
                                                # 116 "/usr/local/include/neo-c.h"
                                                prev_it_135=it_134;
                                                # 117 "/usr/local/include/neo-c.h"
                                                it_134=it_134->next;
                                                # 118 "/usr/local/include/neo-c.h"
                                                come_call_finalizer3(prev_it_135,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    if(_if_conditional169=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional169) {
                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            # 0 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional170=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional170) {
                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "tuple2$2charphsTypephp_finalize"
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional171=self!=((void*)0)&&self->v2!=((void*)0),                                                            _if_conditional171) {
                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_139;
unsigned int it_140;
_Bool _while_condtional36;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct sFun* __result114__;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct sFun* __result115__;
struct sFun* __result116__;
struct sFun* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_139, 0, sizeof(unsigned int));
memset(&it_140, 0, sizeof(unsigned int));
                                                            # 1201 "/usr/local/include/neo-c.h"
                                                            hash_139=string_get_hash_key(((char*)key))%self->size;
                                                            # 1202 "/usr/local/include/neo-c.h"
                                                            it_140=hash_139;
                                                            # 1226 "/usr/local/include/neo-c.h"
                                                            while(_while_condtional36=(_Bool)1,                                                            _while_condtional36) {
                                                                # 1224 "/usr/local/include/neo-c.h"
                                                                # 1205 "/usr/local/include/neo-c.h"
                                                                if(_if_conditional214=self->item_existance[it_140],                                                                _if_conditional214) {
                                                                    # 1212 "/usr/local/include/neo-c.h"
                                                                    # 1207 "/usr/local/include/neo-c.h"
                                                                    if(_if_conditional215=string_equals(self->keys[it_140],key),                                                                    _if_conditional215) {
                                                                        # 1209 "/usr/local/include/neo-c.h"
                                                                        __result114__ = __result_obj__ = self->items[it_140];
                                                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result114__;
                                                                    }
                                                                    # 1212 "/usr/local/include/neo-c.h"
                                                                    it_140++;
                                                                    # 1220 "/usr/local/include/neo-c.h"
                                                                    # 1214 "/usr/local/include/neo-c.h"
                                                                    if(_if_conditional231=it_140>=self->size,                                                                    _if_conditional231) {
                                                                        # 1215 "/usr/local/include/neo-c.h"
                                                                        it_140=0;
                                                                    }
                                                                    else {
                                                                        # 1220 "/usr/local/include/neo-c.h"
                                                                        # 1217 "/usr/local/include/neo-c.h"
                                                                        if(_if_conditional232=it_140==hash_139,                                                                        _if_conditional232) {
                                                                            # 1218 "/usr/local/include/neo-c.h"
                                                                            __result115__ = __result_obj__ = default_value;
                                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result115__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1222 "/usr/local/include/neo-c.h"
                                                                    __result116__ = __result_obj__ = default_value;
                                                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result116__;
                                                                }
                                                            }
                                                            # 1226 "/usr/local/include/neo-c.h"
                                                            __result117__ = __result_obj__ = default_value;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result117__;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            # 1 "sFun_finalize"
                                                                            # 0 "sFun_finalize"
                                                                            if(_if_conditional216=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional216) {
                                                                                # 0 "sFun_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sFun_finalize"
                                                                            # 1 "sFun_finalize"
                                                                            if(_if_conditional217=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                            _if_conditional217) {
                                                                                # 1 "sFun_finalize"
                                                                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sFun_finalize"
                                                                            # 2 "sFun_finalize"
                                                                            if(_if_conditional218=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                            _if_conditional218) {
                                                                                # 2 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sFun_finalize"
                                                                            # 3 "sFun_finalize"
                                                                            if(_if_conditional219=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                            _if_conditional219) {
                                                                                # 3 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 5 "sFun_finalize"
                                                                            # 4 "sFun_finalize"
                                                                            if(_if_conditional220=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                            _if_conditional220) {
                                                                                # 4 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 6 "sFun_finalize"
                                                                            # 5 "sFun_finalize"
                                                                            if(_if_conditional221=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                            _if_conditional221) {
                                                                                # 5 "sFun_finalize"
                                                                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 7 "sFun_finalize"
                                                                            # 6 "sFun_finalize"
                                                                            if(_if_conditional222=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                            _if_conditional222) {
                                                                                # 6 "sFun_finalize"
                                                                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 8 "sFun_finalize"
                                                                            # 7 "sFun_finalize"
                                                                            if(_if_conditional225=self!=((void*)0)&&self->mSource!=((void*)0),                                                                            _if_conditional225) {
                                                                                # 7 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 9 "sFun_finalize"
                                                                            # 8 "sFun_finalize"
                                                                            if(_if_conditional226=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                            _if_conditional226) {
                                                                                # 8 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 10 "sFun_finalize"
                                                                            # 9 "sFun_finalize"
                                                                            if(_if_conditional227=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                            _if_conditional227) {
                                                                                # 9 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 11 "sFun_finalize"
                                                                            # 10 "sFun_finalize"
                                                                            if(_if_conditional228=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                            _if_conditional228) {
                                                                                # 10 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 12 "sFun_finalize"
                                                                            # 11 "sFun_finalize"
                                                                            if(_if_conditional229=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                            _if_conditional229) {
                                                                                # 11 "sFun_finalize"
                                                                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 13 "sFun_finalize"
                                                                            # 12 "sFun_finalize"
                                                                            if(_if_conditional230=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional230) {
                                                                                # 12 "sFun_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sBlock_finalize"
                                                                                    # 0 "sBlock_finalize"
                                                                                    if(_if_conditional223=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                    _if_conditional223) {
                                                                                        # 0 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sBlock_finalize"
                                                                                    # 1 "sBlock_finalize"
                                                                                    if(_if_conditional224=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                    _if_conditional224) {
                                                                                        # 1 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional267;
int __result125__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 354 "/usr/local/include/neo-c.h"
                                                                # 351 "/usr/local/include/neo-c.h"
                                                                if(_if_conditional267=self==((void*)0),                                                                _if_conditional267) {
                                                                    # 352 "/usr/local/include/neo-c.h"
                                                                    __result125__ = 0;
                                                                    return __result125__;
                                                                }
                                                                # 354 "/usr/local/include/neo-c.h"
                                                                __result126__ = self->len;
                                                                return __result126__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value193;
struct sType* right_type2_152;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value194;
char* method_name_153;
_Bool _if_conditional288;
struct sType* obj_type_154;
_Bool _if_conditional289;
struct sType* obj_type2_155;
void* right_value195;
void* right_value196;
char* __dec_obj64;
void* right_value197;
void* right_value198;
struct buffer* buf2_156;
void* right_value199;
void* right_value200;
struct sType* type_157;
void* right_value201;
void* right_value202;
char* __dec_obj65;
void* right_value203;
struct sType* __dec_obj66;
void* right_value204;
struct sType* __dec_obj67;
_Bool _if_conditional290;
void* right_value205;
char* method_name_158;
_Bool _if_conditional291;
struct sType* obj_type_159;
_Bool _if_conditional292;
struct sType* obj_type2_160;
void* right_value206;
void* right_value207;
char* __dec_obj68;
void* right_value208;
void* right_value209;
struct buffer* buf2_161;
void* right_value210;
void* right_value211;
struct sType* type_162;
void* right_value212;
char* __dec_obj69;
void* right_value213;
struct sType* __dec_obj70;
void* right_value214;
struct sType* __dec_obj71;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
memset(&right_type2_152, 0, sizeof(struct sType*));
right_value194 = (void*)0;
memset(&method_name_153, 0, sizeof(char*));
memset(&obj_type_154, 0, sizeof(struct sType*));
memset(&obj_type2_155, 0, sizeof(struct sType*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&buf2_156, 0, sizeof(struct buffer*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&type_157, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&method_name_158, 0, sizeof(char*));
memset(&obj_type_159, 0, sizeof(struct sType*));
memset(&obj_type2_160, 0, sizeof(struct sType*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&buf2_161, 0, sizeof(struct buffer*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&type_162, 0, sizeof(struct sType*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    # 749 "05type.c"
    right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(right_type))));
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 830 "05type.c"
    # 750 "05type.c"
    if(_if_conditional279=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional279) {
        # 799 "05type.c"
        # 751 "05type.c"
        if(_if_conditional280=string_operator_equals(right_type2_152->mClass->mName,"integer")&&right_type2_152->mPointerNum==1,        _if_conditional280) {
        }
        else {
            # 799 "05type.c"
            # 753 "05type.c"
            if(_if_conditional281=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_152->mClass->mName,"__builtin_va_list"),            _if_conditional281) {
            }
            else {
                # 799 "05type.c"
                # 755 "05type.c"
                if(_if_conditional282=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_152->mClass->mName,"va_list"),                _if_conditional282) {
                }
                else {
                    # 799 "05type.c"
                    # 757 "05type.c"
                    if(_if_conditional283=string_operator_equals(right_type2_152->mClass->mName,"lambda"),                    _if_conditional283) {
                    }
                    else {
                        # 799 "05type.c"
                        # 759 "05type.c"
                        if(_if_conditional284=string_operator_equals(right_type2_152->mClass->mName,"void")&&right_type2_152->mPointerNum>0,                        _if_conditional284) {
                        }
                        else {
                            # 799 "05type.c"
                            # 761 "05type.c"
                            if(_if_conditional285=string_operator_equals(right_type2_152->mClass->mName,"void"),                            _if_conditional285) {
                            }
                            else {
                                # 799 "05type.c"
                                # 763 "05type.c"
                                if(_if_conditional286=left_type->mPointerNum>0&&right_type2_152->mPointerNum==0&&string_operator_equals(right_type2_152->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional286) {
                                }
                                else {
                                    # 799 "05type.c"
                                    # 765 "05type.c"
                                    if(_if_conditional287=right_type->mPointerNum>0,                                    _if_conditional287) {
                                    }
                                    else {
                                        # 768 "05type.c"
                                        method_name_153=(char*)come_increment_ref_count(((char*)(right_value194=create_method_name(right_type2_152,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 782 "05type.c"
                                        # 770 "05type.c"
                                        if(_if_conditional288=map$2charphsFunph_at(info->funcs,method_name_153,((void*)0))==((void*)0),                                        _if_conditional288) {
                                            # 771 "05type.c"
                                            obj_type_154=right_type2_152->mNoSolvedGenericsType->v1;
                                            # 780 "05type.c"
                                            # 772 "05type.c"
                                            if(_if_conditional289=obj_type_154&&list$1sTypeph_length(obj_type_154->mGenericsTypes)>0,                                            _if_conditional289) {
                                                # 773 "05type.c"
                                                obj_type2_155=right_type2_152;
                                                # 774 "05type.c"
                                                __dec_obj64=method_name_153;
                                                method_name_153=(char*)come_increment_ref_count(((char*)(right_value196=make_generics_function(obj_type2_155,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 777 "05type.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_152->mClass->mName);
                                                # 778 "05type.c"
                                                exit(1);
                                            }
                                        }
                                        # 782 "05type.c"
                                        buf2_156=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 782, "buffer"))))))));
                                        come_call_finalizer3(right_value197,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value198,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 784 "05type.c"
                                        buffer_append_str(buf2_156,method_name_153);
                                        # 785 "05type.c"
                                        buffer_append_str(buf2_156,"(");
                                        # 786 "05type.c"
                                        buffer_append_str(buf2_156,come_value->c_value);
                                        # 787 "05type.c"
                                        buffer_append_str(buf2_156,")");
                                        # 789 "05type.c"
                                        type_157=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 789, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 790 "05type.c"
                                        type_157->mHeap=(_Bool)1;
                                        # 791 "05type.c"
                                        type_157->mPointerNum=1;
                                        # 793 "05type.c"
                                        __dec_obj65=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value202=append_object_to_right_values(((char*)(right_value201=buffer_to_string(buf2_156))),(struct sType*)come_increment_ref_count(type_157),info))));
                                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 794 "05type.c"
                                        __dec_obj66=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type_157))));
                                        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 795 "05type.c"
                                        come_value->var=((void*)0);
                                        # 797 "05type.c"
                                        __dec_obj67=right_type2_152;
                                        right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type_157))));
                                        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        method_name_153 = come_decrement_ref_count2(method_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(buf2_156,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(type_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        # 830 "05type.c"
        # 800 "05type.c"
        if(_if_conditional290=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional290) {
            # 801 "05type.c"
            method_name_158=(char*)come_increment_ref_count(((char*)(right_value205=create_method_name(right_type2_152,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 815 "05type.c"
            # 803 "05type.c"
            if(_if_conditional291=map$2charphsFunph_at(info->funcs,method_name_158,((void*)0))==((void*)0),            _if_conditional291) {
                # 804 "05type.c"
                obj_type_159=right_type2_152->mNoSolvedGenericsType->v1;
                # 813 "05type.c"
                # 805 "05type.c"
                if(_if_conditional292=obj_type_159&&list$1sTypeph_length(obj_type_159->mGenericsTypes)>0,                _if_conditional292) {
                    # 806 "05type.c"
                    obj_type2_160=right_type2_152;
                    # 807 "05type.c"
                    __dec_obj68=method_name_158;
                    method_name_158=(char*)come_increment_ref_count(((char*)(right_value207=make_generics_function(obj_type2_160,(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 810 "05type.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_152->mClass->mName);
                    # 811 "05type.c"
                    exit(1);
                }
            }
            # 815 "05type.c"
            buf2_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 815, "buffer"))))))));
            come_call_finalizer3(right_value208,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value209,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 817 "05type.c"
            buffer_append_str(buf2_161,method_name_158);
            # 818 "05type.c"
            buffer_append_str(buf2_161,"(");
            # 819 "05type.c"
            buffer_append_str(buf2_161,come_value->c_value);
            # 820 "05type.c"
            buffer_append_str(buf2_161,")");
            # 822 "05type.c"
            type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 822, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 824 "05type.c"
            __dec_obj69=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value212=buffer_to_string(buf2_161))));
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 825 "05type.c"
            __dec_obj70=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(type_162))));
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 826 "05type.c"
            come_value->var=((void*)0);
            # 828 "05type.c"
            __dec_obj71=right_type2_152;
            right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type_162))));
            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
            method_name_158 = come_decrement_ref_count2(method_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(right_type2_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value215;
struct sType* result_type_163;
_Bool _if_conditional293;
char* var_name_164;
char* p_165;
int sline_166;
_Bool _if_conditional294;
void* right_value216;
char* __exception_result_var_b1;
char* word_167;
_Bool _if_conditional295;
_Bool between_brace_168;
char* p_169;
int sline_170;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value217;
char* __exception_result_var_b2;
char* word_171;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _while_condtional37;
char* p_172;
int sline_173;
_Bool _if_conditional301;
void* right_value218;
char* __exception_result_var_b3;
char* word_174;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value219;
char* __exception_result_var_b4;
char* __dec_obj72;
static int num_anonymous_var_name_175=0;
void* right_value220;
char* __dec_obj73;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool no_comma_176;
void* right_value221;
struct sNode* node_177;
struct sNode* __dec_obj74;
_Bool _while_condtional38;
char* p_178;
int sline_179;
_Bool _if_conditional307;
void* right_value222;
char* __exception_result_var_b5;
char* word_180;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value223;
struct sNode* node_181;
void* right_value227;
void* right_value228;
struct tuple2$2sTypephcharph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_type_163, 0, sizeof(struct sType*));
memset(&var_name_164, 0, sizeof(char*));
memset(&p_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
right_value216 = (void*)0;
memset(&word_167, 0, sizeof(char*));
memset(&between_brace_168, 0, sizeof(_Bool));
memset(&p_169, 0, sizeof(char*));
memset(&sline_170, 0, sizeof(int));
right_value217 = (void*)0;
memset(&word_171, 0, sizeof(char*));
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
right_value218 = (void*)0;
memset(&word_174, 0, sizeof(char*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&no_comma_176, 0, sizeof(_Bool));
right_value221 = (void*)0;
memset(&node_177, 0, sizeof(struct sNode*));
memset(&p_178, 0, sizeof(char*));
memset(&sline_179, 0, sizeof(int));
right_value222 = (void*)0;
memset(&word_180, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&node_181, 0, sizeof(struct sNode*));
right_value227 = (void*)0;
right_value228 = (void*)0;
    # 834 "05type.c"
    result_type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(base_type_name))));
    come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 838 "05type.c"
    # 835 "05type.c"
    if(_if_conditional293=!first,    _if_conditional293) {
        # 836 "05type.c"
        result_type_163->mPointerNum=0;
    }
    # 838 "05type.c"
    var_name_164=((void*)0);
    # 860 "05type.c"
    {
        # 841 "05type.c"
        p_165=info->p;
        # 842 "05type.c"
        sline_166=info->sline;
        # 858 "05type.c"
        # 844 "05type.c"
        if(_if_conditional294=xisalpha(*info->p)||*info->p==95,        _if_conditional294) {
            # 845 "05type.c"
            word_167=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 845, 6),__exception_result_var_b1=((char*)(right_value216=parse_word(info))), come_pop_stackframe(), __exception_result_var_b1));
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 853 "05type.c"
            # 847 "05type.c"
            if(_if_conditional295=string_operator_equals(word_167,"const")||string_operator_equals(word_167,"__restrict")||string_operator_equals(word_167,"restrict")||string_operator_equals(word_167,"__user")||string_operator_equals(word_167,"volatile")||string_operator_equals(word_167,"_Nonnull")||string_operator_equals(word_167,"_Nullable")||string_operator_equals(word_167,"_Null_unspecified")||string_operator_equals(word_167,"__user")||string_operator_equals(word_167,"_Addr"),            _if_conditional295) {
            }
            else {
                # 850 "05type.c"
                info->p=p_165;
                # 851 "05type.c"
                info->sline=sline_166;
            }
            word_167 = come_decrement_ref_count2(word_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 855 "05type.c"
            info->p=p_165;
            # 856 "05type.c"
            info->sline=sline_166;
        }
    }
    # 860 "05type.c"
    between_brace_168=(_Bool)0;
    # 889 "05type.c"
    {
        # 862 "05type.c"
        p_169=info->p;
        # 863 "05type.c"
        sline_170=info->sline;
        # 885 "05type.c"
        # 865 "05type.c"
        if(_if_conditional296=*info->p==40,        _if_conditional296) {
            # 866 "05type.c"
            info->p++;
            # 867 "05type.c"
            skip_spaces_and_lf(info);
            # 883 "05type.c"
            # 869 "05type.c"
            if(_if_conditional297=xisalpha(*info->p)||*info->p==95,            _if_conditional297) {
                # 870 "05type.c"
                word_171=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 870, 7),__exception_result_var_b2=((char*)(right_value217=parse_word(info))), come_pop_stackframe(), __exception_result_var_b2));
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 882 "05type.c"
                # 872 "05type.c"
                if(_if_conditional298=is_type_name(word_171,info),                _if_conditional298) {
                }
                else {
                    # 882 "05type.c"
                    # 874 "05type.c"
                    if(_if_conditional299=*info->p==41,                    _if_conditional299) {
                        # 875 "05type.c"
                        info->p++;
                        # 876 "05type.c"
                        skip_spaces_and_lf(info);
                        # 881 "05type.c"
                        # 878 "05type.c"
                        if(_if_conditional300=*info->p!=40,                        _if_conditional300) {
                            # 879 "05type.c"
                            between_brace_168=(_Bool)1;
                        }
                    }
                }
                word_171 = come_decrement_ref_count2(word_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 885 "05type.c"
        info->p=p_169;
        # 886 "05type.c"
        info->sline=sline_170;
    }
    # 889 "05type.c"
    parse_sharp_v5(info);
    # 916 "05type.c"
    while(_while_condtional37=*info->p==42,    _while_condtional37) {
        # 891 "05type.c"
        info->p++;
        # 892 "05type.c"
        skip_spaces_and_lf(info);
        # 914 "05type.c"
        {
            # 895 "05type.c"
            p_172=info->p;
            # 896 "05type.c"
            sline_173=info->sline;
            # 912 "05type.c"
            # 898 "05type.c"
            if(_if_conditional301=xisalpha(*info->p)||*info->p==95,            _if_conditional301) {
                # 899 "05type.c"
                word_174=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 899, 8),__exception_result_var_b3=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b3));
                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 907 "05type.c"
                # 901 "05type.c"
                if(_if_conditional302=string_operator_equals(word_174,"const")||string_operator_equals(word_174,"__restrict")||string_operator_equals(word_174,"restrict")||string_operator_equals(word_174,"__user")||string_operator_equals(word_174,"volatile")||string_operator_equals(word_174,"_Nonnull")||string_operator_equals(word_174,"_Nullable")||string_operator_equals(word_174,"_Null_unspecified")||string_operator_equals(word_174,"__user")||string_operator_equals(word_174,"_Addr"),                _if_conditional302) {
                }
                else {
                    # 904 "05type.c"
                    info->p=p_172;
                    # 905 "05type.c"
                    info->sline=sline_173;
                }
                word_174 = come_decrement_ref_count2(word_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 909 "05type.c"
                info->p=p_172;
                # 910 "05type.c"
                info->sline=sline_173;
            }
        }
        # 914 "05type.c"
        result_type_163->mPointerNum++;
    }
    # 916 "05type.c"
    parse_sharp_v5(info);
    # 923 "05type.c"
    # 918 "05type.c"
    if(_if_conditional303=between_brace_168&&*info->p==40,    _if_conditional303) {
        # 919 "05type.c"
        info->p++;
        # 920 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 932 "05type.c"
    # 923 "05type.c"
    if(_if_conditional304=xisalnum(*info->p)||*info->p==95,    _if_conditional304) {
        # 924 "05type.c"
        __dec_obj72=var_name_164;
        var_name_164=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 924, 9),__exception_result_var_b4=((char*)(right_value219=parse_word(info))), come_pop_stackframe(), __exception_result_var_b4));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 927 "05type.c"
        # 928 "05type.c"
        num_anonymous_var_name_175++;
        # 929 "05type.c"
        __dec_obj73=var_name_164;
        var_name_164=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_175))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 937 "05type.c"
    # 932 "05type.c"
    if(_if_conditional305=between_brace_168&&*info->p==41,    _if_conditional305) {
        # 933 "05type.c"
        info->p++;
        # 934 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 949 "05type.c"
    # 937 "05type.c"
    if(_if_conditional306=*info->p==58,    _if_conditional306) {
        # 938 "05type.c"
        info->p++;
        # 939 "05type.c"
        skip_spaces_and_lf(info);
        # 941 "05type.c"
        no_comma_176=info->no_comma;
        # 942 "05type.c"
        info->no_comma=(_Bool)1;
        # 943 "05type.c"
        node_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=expression_v13(info))));
        if(right_value221) { right_value221 = come_decrement_ref_count2(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 944 "05type.c"
        info->no_comma=no_comma_176;
        # 946 "05type.c"
        __dec_obj74=result_type_163->mSizeNum;
        result_type_163->mSizeNum=(struct sNode*)come_increment_ref_count(node_177);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 990 "05type.c"
    while(_while_condtional38=*info->p==91,    _while_condtional38) {
        # 950 "05type.c"
        info->p++;
        # 951 "05type.c"
        skip_spaces_and_lf(info);
        # 952 "05type.c"
        parse_sharp_v5(info);
        # 974 "05type.c"
        {
            # 955 "05type.c"
            p_178=info->p;
            # 956 "05type.c"
            sline_179=info->sline;
            # 972 "05type.c"
            # 958 "05type.c"
            if(_if_conditional307=xisalpha(*info->p)||*info->p==95,            _if_conditional307) {
                # 959 "05type.c"
                word_180=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 959, 10),__exception_result_var_b5=((char*)(right_value222=parse_word(info))), come_pop_stackframe(), __exception_result_var_b5));
                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 967 "05type.c"
                # 961 "05type.c"
                if(_if_conditional308=string_operator_equals(word_180,"const")||string_operator_equals(word_180,"__restrict")||string_operator_equals(word_180,"restrict")||string_operator_equals(word_180,"__user")||string_operator_equals(word_180,"volatile")||string_operator_equals(word_180,"_Nonnull")||string_operator_equals(word_180,"_Nullable")||string_operator_equals(word_180,"_Null_unspecified")||string_operator_equals(word_180,"__user")||string_operator_equals(word_180,"_Addr"),                _if_conditional308) {
                }
                else {
                    # 964 "05type.c"
                    info->p=p_178;
                    # 965 "05type.c"
                    info->sline=sline_179;
                }
                word_180 = come_decrement_ref_count2(word_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 969 "05type.c"
                info->p=p_178;
                # 970 "05type.c"
                info->sline=sline_179;
            }
        }
        # 981 "05type.c"
        # 974 "05type.c"
        if(_if_conditional309=*info->p==93,        _if_conditional309) {
            # 975 "05type.c"
            info->p++;
            # 976 "05type.c"
            skip_spaces_and_lf(info);
            # 978 "05type.c"
            result_type_163->mPointerNum++;
            # 979 "05type.c"
            break;
        }
        # 981 "05type.c"
        parse_sharp_v5(info);
        # 983 "05type.c"
        node_181=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=expression_v13(info))));
        if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 984 "05type.c"
        list$1sNodeph_push_back(result_type_163->mArrayNum,(struct sNode*)come_increment_ref_count(node_181));
        # 985 "05type.c"
        parse_sharp_v5(info);
        # 987 "05type.c"
        expected_next_character(93,info);
        if(node_181) { node_181 = come_decrement_ref_count2(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 990 "05type.c"
    __result132__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value228=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value227=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 990, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_163),(char*)come_increment_ref_count(var_name_164))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_164 = come_decrement_ref_count2(var_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result132__;
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_164 = come_decrement_ref_count2(var_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional310;
void* right_value224;
struct list_item$1sNodeph* litem_182;
struct sNode* __dec_obj75;
_Bool _if_conditional311;
void* right_value225;
struct list_item$1sNodeph* litem_183;
struct sNode* __dec_obj76;
void* right_value226;
struct list_item$1sNodeph* litem_184;
struct sNode* __dec_obj77;
struct list$1sNodeph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
memset(&litem_182, 0, sizeof(struct list_item$1sNodeph*));
right_value225 = (void*)0;
memset(&litem_183, 0, sizeof(struct list_item$1sNodeph*));
right_value226 = (void*)0;
memset(&litem_184, 0, sizeof(struct list_item$1sNodeph*));
            # 247 "/usr/local/include/neo-c.h"
            # 216 "/usr/local/include/neo-c.h"
            if(_if_conditional310=self->len==0,            _if_conditional310) {
                # 217 "/usr/local/include/neo-c.h"
                litem_182=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value224=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value224,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "/usr/local/include/neo-c.h"
                litem_182->prev=((void*)0);
                # 220 "/usr/local/include/neo-c.h"
                litem_182->next=((void*)0);
                # 221 "/usr/local/include/neo-c.h"
                __dec_obj75=litem_182->item;
                litem_182->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
                # 223 "/usr/local/include/neo-c.h"
                self->tail=litem_182;
                # 224 "/usr/local/include/neo-c.h"
                self->head=litem_182;
            }
            else {
                # 247 "/usr/local/include/neo-c.h"
                # 226 "/usr/local/include/neo-c.h"
                if(_if_conditional311=self->len==1,                _if_conditional311) {
                    # 227 "/usr/local/include/neo-c.h"
                    litem_183=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value225=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value225,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_183->prev=self->head;
                    # 230 "/usr/local/include/neo-c.h"
                    litem_183->next=((void*)0);
                    # 231 "/usr/local/include/neo-c.h"
                    __dec_obj76=litem_183->item;
                    litem_183->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                    # 233 "/usr/local/include/neo-c.h"
                    self->tail=litem_183;
                    # 234 "/usr/local/include/neo-c.h"
                    self->head->next=litem_183;
                }
                else {
                    # 237 "/usr/local/include/neo-c.h"
                    litem_184=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value226=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value226,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "/usr/local/include/neo-c.h"
                    litem_184->prev=self->tail;
                    # 240 "/usr/local/include/neo-c.h"
                    litem_184->next=((void*)0);
                    # 241 "/usr/local/include/neo-c.h"
                    __dec_obj77=litem_184->item;
                    litem_184->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
                    # 243 "/usr/local/include/neo-c.h"
                    self->tail->next=litem_184;
                    # 244 "/usr/local/include/neo-c.h"
                    self->tail=litem_184;
                }
            }
            # 247 "/usr/local/include/neo-c.h"
            self->len++;
            # 249 "/usr/local/include/neo-c.h"
            __result130__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result130__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj78;
char* __dec_obj79;
struct tuple2$2sTypephcharph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1738 "/usr/local/include/neo-c.h"
        __dec_obj78=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1739 "/usr/local/include/neo-c.h"
        __dec_obj79=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1741 "/usr/local/include/neo-c.h"
        __result131__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result131__;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional312=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional312) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional313=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional313) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_185;
int sline_186;
_Bool _if_conditional314;
void* right_value229;
char* __exception_result_var_b6;
char* word_187;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_185, 0, sizeof(char*));
memset(&sline_186, 0, sizeof(int));
right_value229 = (void*)0;
memset(&word_187, 0, sizeof(char*));
    # 995 "05type.c"
    p_185=info->p;
    # 996 "05type.c"
    sline_186=info->sline;
    # 1012 "05type.c"
    # 998 "05type.c"
    if(_if_conditional314=xisalpha(*info->p)||*info->p==95,    _if_conditional314) {
        # 999 "05type.c"
        word_187=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 999, 11),__exception_result_var_b6=((char*)(right_value229=parse_word(info))), come_pop_stackframe(), __exception_result_var_b6));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1007 "05type.c"
        # 1001 "05type.c"
        if(_if_conditional315=string_operator_equals(word_187,"const")||string_operator_equals(word_187,"__restrict")||string_operator_equals(word_187,"restrict")||string_operator_equals(word_187,"__user")||string_operator_equals(word_187,"volatile")||string_operator_equals(word_187,"_Nonnull")||string_operator_equals(word_187,"_Nullable")||string_operator_equals(word_187,"_Null_unspecified")||string_operator_equals(word_187,"__user")||string_operator_equals(word_187,"_Addr"),        _if_conditional315) {
        }
        else {
            # 1004 "05type.c"
            info->p=p_185;
            # 1005 "05type.c"
            info->sline=sline_186;
        }
        word_187 = come_decrement_ref_count2(word_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1009 "05type.c"
        info->p=p_185;
        # 1010 "05type.c"
        info->sline=sline_186;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__;
_Bool no_output_err_188;
void* right_value230;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_189;
char* name_190;
_Bool err_191;
void* right_value231;
void* right_value232;
struct tuple3$3sTypephcharphbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&no_output_err_188, 0, sizeof(_Bool));
right_value230 = (void*)0;
memset(&type_189, 0, sizeof(struct sType*));
memset(&name_190, 0, sizeof(char*));
memset(&err_191, 0, sizeof(_Bool));
memset(&type_189, 0, sizeof(struct sType*));
memset(&name_190, 0, sizeof(char*));
memset(&err_191, 0, sizeof(_Bool));
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 1016 "05type.c"
    no_output_err_188=info->no_output_err;
    # 1017 "05type.c"
    info->no_output_err=(_Bool)1;
    # 1018 "05type.c"
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value230=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_189=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_190=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_191=multiple_assign_var2->v3;
    come_call_finalizer3(right_value230,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1019 "05type.c"
    info->no_output_err=(_Bool)0;
    # 1020 "05type.c"
    info->no_output_err=no_output_err_188;
    # 1022 "05type.c"
    __result134__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value232=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value231=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1022, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_189),(char*)come_increment_ref_count(name_190),err_191)));
    come_call_finalizer3(type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result134__;
    come_call_finalizer3(type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj80;
char* __dec_obj81;
struct tuple3$3sTypephcharphbool* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1771 "/usr/local/include/neo-c.h"
        __dec_obj80=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1772 "/usr/local/include/neo-c.h"
        __dec_obj81=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1773 "/usr/local/include/neo-c.h"
        self->v3=v3;
        # 1775 "/usr/local/include/neo-c.h"
        __result133__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result133__;
        come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_192;
int head_sline_193;
void* right_value233;
char* __exception_result_var_b7;
char* type_name_194;
_Bool _while_condtional39;
void* right_value234;
char* __exception_result_var_b8;
char* __dec_obj82;
_Bool record__195;
_Bool constant_196;
_Bool static__197;
_Bool volatile__198;
_Bool register__199;
_Bool unsigned__200;
_Bool long__201;
_Bool long_long_202;
_Bool short__203;
_Bool restrict__204;
_Bool struct__205;
_Bool union__206;
_Bool enum__207;
_Bool no_heap_208;
_Bool extern__209;
_Bool inline__210;
_Bool come_mem_core__211;
struct sNode* alignas__212;
_Bool anonymous_type_213;
_Bool anonymous_name_214;
_Bool _while_condtional40;
_Bool _if_conditional316;
_Bool _if_conditional317;
char* p_215;
int sline_216;
void* right_value235;
_Bool _if_conditional318;
void* right_value236;
char* __dec_obj83;
void* right_value237;
char* __dec_obj84;
_Bool _if_conditional319;
void* right_value238;
char* __exception_result_var_b9;
char* __dec_obj85;
_Bool _if_conditional320;
char* p_217;
int sline_218;
_Bool _while_condtional41;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value239;
void* right_value240;
struct tuple3$3sTypephcharphbool* __result135__;
_Bool _if_conditional324;
char* p_219;
int sline_220;
void* right_value241;
_Bool _if_conditional325;
void* right_value242;
void* right_value243;
struct tuple3$3sTypephcharphbool* __result136__;
_Bool _if_conditional326;
_Bool _if_conditional327;
char* p_221;
int sline_222;
void* right_value244;
_Bool _if_conditional328;
void* right_value245;
char* __dec_obj86;
void* right_value246;
char* __dec_obj87;
void* right_value247;
char* __exception_result_var_b10;
char* __dec_obj88;
_Bool _if_conditional329;
char* p_223;
int sline_224;
void* right_value248;
_Bool _if_conditional330;
void* right_value249;
void* right_value250;
struct tuple3$3sTypephcharphbool* __result137__;
_Bool _if_conditional331;
_Bool _if_conditional332;
char* p_225;
int sline_226;
void* right_value251;
_Bool _if_conditional333;
void* right_value252;
void* right_value253;
struct tuple3$3sTypephcharphbool* __result138__;
void* right_value254;
char* __dec_obj89;
void* right_value255;
char* __exception_result_var_b11;
char* __dec_obj90;
_Bool _if_conditional334;
char* p_227;
int sline_228;
void* right_value256;
_Bool _if_conditional335;
void* right_value257;
void* right_value258;
struct tuple3$3sTypephcharphbool* __result139__;
_Bool _if_conditional336;
void* right_value259;
struct sNode* exp_229;
struct sNode* __dec_obj91;
void* right_value260;
char* __exception_result_var_b12;
char* __dec_obj92;
_Bool _if_conditional337;
void* right_value261;
char* __exception_result_var_b13;
char* __dec_obj93;
_Bool _if_conditional338;
void* right_value262;
char* __exception_result_var_b14;
char* __dec_obj94;
_Bool _if_conditional339;
void* right_value263;
char* __exception_result_var_b15;
char* __dec_obj95;
_Bool _if_conditional340;
void* right_value264;
char* __exception_result_var_b16;
char* __dec_obj96;
_Bool _if_conditional341;
void* right_value265;
char* __exception_result_var_b17;
char* __dec_obj97;
_Bool _if_conditional342;
void* right_value266;
char* __exception_result_var_b18;
char* __dec_obj98;
_Bool _if_conditional343;
void* right_value267;
char* __exception_result_var_b19;
char* __dec_obj99;
_Bool _if_conditional344;
void* right_value268;
char* __exception_result_var_b20;
char* __dec_obj100;
_Bool _if_conditional345;
char* p_230;
int sline_231;
_Bool _if_conditional346;
void* right_value269;
char* __dec_obj101;
void* right_value270;
char* __exception_result_var_b21;
char* __dec_obj102;
_Bool _if_conditional347;
void* right_value271;
char* __exception_result_var_b22;
char* __dec_obj103;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value272;
char* __exception_result_var_b23;
char* __dec_obj104;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value273;
char* __dec_obj105;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value274;
char* __dec_obj106;
_Bool _if_conditional355;
_Bool _if_conditional356;
char* p_232;
int sline_233;
void* right_value275;
char* __exception_result_var_b24;
char* __dec_obj107;
_Bool _if_conditional357;
_Bool _if_conditional358;
char* p_234;
int sline_235;
void* right_value276;
char* __exception_result_var_b25;
char* __dec_obj108;
_Bool _if_conditional359;
void* right_value277;
char* __dec_obj109;
void* right_value278;
char* __dec_obj110;
_Bool _if_conditional360;
_Bool _if_conditional361;
char* p_236;
int sline_237;
void* right_value279;
char* __exception_result_var_b26;
char* __dec_obj111;
_Bool _if_conditional362;
void* right_value280;
char* __dec_obj112;
void* right_value281;
char* __dec_obj113;
_Bool _if_conditional363;
void* right_value282;
char* __dec_obj114;
void* right_value283;
char* __dec_obj115;
_Bool _if_conditional364;
void* right_value284;
char* __exception_result_var_b27;
char* __dec_obj116;
_Bool _if_conditional365;
void* right_value285;
char* __exception_result_var_b28;
char* __dec_obj117;
_Bool _if_conditional366;
void* right_value286;
char* __exception_result_var_b29;
char* __dec_obj118;
_Bool _if_conditional367;
void* right_value287;
char* __exception_result_var_b30;
char* __dec_obj119;
_Bool _if_conditional368;
void* right_value288;
char* __exception_result_var_b31;
char* __dec_obj120;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
char* p_238;
int sline_239;
void* right_value289;
char* __exception_result_var_b32;
char* __dec_obj121;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value290;
char* __dec_obj122;
int pointer_num_240;
_Bool _while_condtional42;
_Bool heap_241;
_Bool _if_conditional375;
_Bool lambda_flag_242;
char* pX_243;
int slineX_244;
_Bool _if_conditional376;
void* right_value291;
char* __exception_result_var_b33;
_Bool _if_conditional377;
struct sType* type_245;
char* var_name_246;
_Bool function_pointer_flag_247;
char* p_248;
int sline_249;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value292;
char* __exception_result_var_b34;
char* word_250;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool var_name_between_brace_251;
char* p_252;
int sline_253;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value293;
char* __exception_result_var_b35;
char* word_254;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
static int anonymous_num_255=0;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value294;
char* __dec_obj123;
void* right_value295;
struct sNode* node_256;
_Bool _if_conditional391;
void* right_value296;
void* right_value297;
struct tuple3$3sTypephcharphbool* __result140__;
int pointer_num_257;
_Bool _while_condtional43;
void* right_value298;
void* right_value299;
struct sType* __dec_obj124;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value300;
char* __dec_obj125;
void* right_value301;
struct sNode* node_258;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value302;
void* right_value303;
struct tuple3$3sTypephcharphbool* __result141__;
void* right_value304;
void* right_value305;
struct sType* __dec_obj126;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value306;
char* __dec_obj127;
void* right_value307;
struct sNode* node_259;
_Bool _if_conditional398;
void* right_value308;
void* right_value309;
struct tuple3$3sTypephcharphbool* __result142__;
int pointer_num_260;
_Bool _while_condtional44;
void* right_value310;
void* right_value311;
struct sType* __dec_obj128;
void* right_value312;
void* right_value313;
struct tuple3$3sTypephcharphbool* __result143__;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value314;
char* __dec_obj129;
_Bool _if_conditional402;
static int num_anonymous_var_name_261=0;
void* right_value315;
char* __dec_obj130;
_Bool _if_conditional403;
void* right_value316;
char* __exception_result_var_b36;
char* __dec_obj131;
static int num_anonymous_var_name_262=0;
void* right_value317;
char* __dec_obj132;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool no_comma_263;
void* right_value318;
struct sNode* node_264;
struct sNode* __dec_obj133;
_Bool _if_conditional406;
struct sType* result_type_265;
_Bool _if_conditional411;
void* right_value319;
struct sType* __dec_obj134;
_Bool _if_conditional417;
int i_274;
_Bool _if_conditional421;
void* right_value320;
void* right_value321;
void* right_value322;
struct sType* __dec_obj135;
_Bool _if_conditional422;
int i_278;
_Bool _if_conditional423;
void* right_value323;
void* right_value324;
void* right_value325;
struct sType* __dec_obj136;
void* right_value326;
void* right_value327;
struct sType* __dec_obj137;
struct sNode* __dec_obj138;
void* right_value328;
char* __exception_result_var_b37;
char* __dec_obj139;
void* right_value329;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_279;
struct list$1charph* param_names_280;
struct list$1charph* param_default_parametors_281;
_Bool var_args_282;
void* right_value330;
void* right_value331;
struct sType* __dec_obj140;
void* right_value332;
void* right_value333;
struct tuple1$1sTypeph* __dec_obj142;
struct list$1sTypeph* __dec_obj143;
struct list$1charph* __dec_obj144;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sType* result_type_283;
_Bool _if_conditional426;
void* right_value334;
struct sType* __dec_obj145;
_Bool _if_conditional427;
int i_284;
_Bool _if_conditional428;
void* right_value335;
void* right_value336;
void* right_value337;
struct sType* __dec_obj146;
_Bool _if_conditional429;
int i_285;
_Bool _if_conditional430;
void* right_value338;
void* right_value339;
void* right_value340;
struct sType* __dec_obj147;
void* right_value341;
void* right_value342;
struct sType* __dec_obj148;
struct sNode* __dec_obj149;
_Bool _if_conditional431;
void* right_value343;
char* __exception_result_var_b38;
char* __dec_obj150;
_Bool _if_conditional432;
void* right_value344;
void* right_value345;
struct tuple3$3sTypephcharphbool* __result162__;
static int num_anonymous_var_name_286=0;
void* right_value346;
char* __dec_obj151;
void* right_value347;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var4;
struct list$1sTypeph* param_types_287;
struct list$1charph* param_names_288;
struct list$1charph* param_default_parametors_289;
_Bool var_args_290;
void* right_value348;
void* right_value349;
struct sType* __dec_obj152;
void* right_value350;
void* right_value351;
struct tuple1$1sTypeph* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct list$1charph* __dec_obj155;
_Bool _if_conditional433;
void* right_value352;
struct sNode* exp_291;
_Bool _if_conditional434;
void* right_value353;
void* right_value354;
struct tuple3$3sTypephcharphbool* __result164__;
void* right_value355;
struct CVALUE* come_value_292;
void* right_value356;
struct sType* __dec_obj157;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value357;
char* __dec_obj158;
_Bool _if_conditional441;
static int num_anonymous_var_name_293=0;
void* right_value358;
char* __dec_obj159;
_Bool _if_conditional442;
void* right_value359;
char* __exception_result_var_b39;
char* __dec_obj160;
static int num_anonymous_var_name_294=0;
void* right_value360;
char* __dec_obj161;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool no_comma_295;
void* right_value361;
struct sNode* node_296;
struct sNode* __dec_obj162;
_Bool _if_conditional445;
void* right_value362;
struct sType* __dec_obj163;
void* right_value363;
char* __dec_obj164;
struct sNode* __dec_obj165;
_Bool _if_conditional446;
int i_297;
_Bool _if_conditional447;
void* right_value364;
void* right_value365;
void* right_value366;
struct sType* __dec_obj166;
struct sNode* __dec_obj167;
_Bool _if_conditional448;
int i_298;
_Bool _if_conditional449;
void* right_value367;
void* right_value368;
void* right_value369;
struct sType* __dec_obj168;
struct sNode* __dec_obj169;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value370;
void* right_value371;
struct tuple3$3sTypephcharphbool* __result165__;
void* right_value372;
void* right_value373;
struct sType* __dec_obj170;
_Bool _while_condtional47;
void* right_value374;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* generics_type_299;
char* var_name_300;
_Bool err_301;
_Bool _if_conditional452;
void* right_value375;
void* right_value376;
struct tuple3$3sTypephcharphbool* __result166__;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value377;
void* right_value378;
struct tuple3$3sTypephcharphbool* __result167__;
_Bool _if_conditional455;
void* right_value379;
struct sType* __dec_obj171;
_Bool _if_conditional456;
void* right_value380;
char* new_name_302;
struct sNode* __dec_obj172;
_Bool _if_conditional457;
struct sClass* klass_303;
_Bool _if_conditional458;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
struct sType* __dec_obj173;
struct sNode* __dec_obj174;
_Bool _while_condtional56;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _while_condtional57;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
void* right_value391;
void* right_value392;
struct list$1sTypeph* types_348;
void* right_value393;
_Bool _while_condtional58;
void* right_value394;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type2_349;
char* name_350;
_Bool err_351;
_Bool _if_conditional518;
void* right_value395;
void* right_value396;
struct tuple3$3sTypephcharphbool* __result192__;
void* right_value397;
int num_tuples_352;
void* right_value398;
void* right_value399;
void* right_value400;
struct sType* __dec_obj175;
struct list$1sTypeph* o2_saved_353;
struct sType* it_354;
void* right_value401;
_Bool _if_conditional519;
void* right_value402;
struct sType* __dec_obj176;
_Bool _if_conditional520;
void* right_value403;
char* new_name_355;
_Bool _if_conditional521;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value404;
char* __dec_obj177;
_Bool _if_conditional524;
static int num_anonymous_var_name_356=0;
void* right_value405;
char* __dec_obj178;
_Bool _if_conditional525;
void* right_value406;
char* __exception_result_var_b40;
char* __dec_obj179;
static int num_anonymous_var_name_357=0;
void* right_value407;
char* __dec_obj180;
_Bool _if_conditional526;
_Bool _if_conditional527;
_Bool no_comma_358;
void* right_value408;
struct sNode* node_359;
struct sNode* __dec_obj181;
_Bool _while_condtional59;
_Bool _if_conditional528;
void* right_value409;
struct sNode* node_360;
void* right_value410;
char* asm_name_361;
char* __dec_obj182;
void* right_value411;
void* right_value412;
struct tuple3$3sTypephcharphbool* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_192, 0, sizeof(char*));
memset(&head_sline_193, 0, sizeof(int));
right_value233 = (void*)0;
memset(&type_name_194, 0, sizeof(char*));
right_value234 = (void*)0;
memset(&record__195, 0, sizeof(_Bool));
memset(&constant_196, 0, sizeof(_Bool));
memset(&static__197, 0, sizeof(_Bool));
memset(&volatile__198, 0, sizeof(_Bool));
memset(&register__199, 0, sizeof(_Bool));
memset(&unsigned__200, 0, sizeof(_Bool));
memset(&long__201, 0, sizeof(_Bool));
memset(&long_long_202, 0, sizeof(_Bool));
memset(&short__203, 0, sizeof(_Bool));
memset(&restrict__204, 0, sizeof(_Bool));
memset(&struct__205, 0, sizeof(_Bool));
memset(&union__206, 0, sizeof(_Bool));
memset(&enum__207, 0, sizeof(_Bool));
memset(&no_heap_208, 0, sizeof(_Bool));
memset(&extern__209, 0, sizeof(_Bool));
memset(&inline__210, 0, sizeof(_Bool));
memset(&come_mem_core__211, 0, sizeof(_Bool));
memset(&alignas__212, 0, sizeof(struct sNode*));
memset(&anonymous_type_213, 0, sizeof(_Bool));
memset(&anonymous_name_214, 0, sizeof(_Bool));
memset(&p_215, 0, sizeof(char*));
memset(&sline_216, 0, sizeof(int));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&p_217, 0, sizeof(char*));
memset(&sline_218, 0, sizeof(int));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&p_219, 0, sizeof(char*));
memset(&sline_220, 0, sizeof(int));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&p_221, 0, sizeof(char*));
memset(&sline_222, 0, sizeof(int));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&p_223, 0, sizeof(char*));
memset(&sline_224, 0, sizeof(int));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&p_225, 0, sizeof(char*));
memset(&sline_226, 0, sizeof(int));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&p_227, 0, sizeof(char*));
memset(&sline_228, 0, sizeof(int));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&exp_229, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&p_230, 0, sizeof(char*));
memset(&sline_231, 0, sizeof(int));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&p_232, 0, sizeof(char*));
memset(&sline_233, 0, sizeof(int));
right_value275 = (void*)0;
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&p_236, 0, sizeof(char*));
memset(&sline_237, 0, sizeof(int));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&pointer_num_240, 0, sizeof(int));
memset(&heap_241, 0, sizeof(_Bool));
memset(&lambda_flag_242, 0, sizeof(_Bool));
memset(&pX_243, 0, sizeof(char*));
memset(&slineX_244, 0, sizeof(int));
right_value291 = (void*)0;
memset(&type_245, 0, sizeof(struct sType*));
memset(&var_name_246, 0, sizeof(char*));
memset(&function_pointer_flag_247, 0, sizeof(_Bool));
memset(&p_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
right_value292 = (void*)0;
memset(&word_250, 0, sizeof(char*));
memset(&var_name_between_brace_251, 0, sizeof(_Bool));
memset(&p_252, 0, sizeof(char*));
memset(&sline_253, 0, sizeof(int));
right_value293 = (void*)0;
memset(&word_254, 0, sizeof(char*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&node_256, 0, sizeof(struct sNode*));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&pointer_num_257, 0, sizeof(int));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&node_258, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&pointer_num_260, 0, sizeof(int));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&no_comma_263, 0, sizeof(_Bool));
right_value318 = (void*)0;
memset(&node_264, 0, sizeof(struct sNode*));
memset(&result_type_265, 0, sizeof(struct sType*));
right_value319 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&i_278, 0, sizeof(int));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&param_types_279, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_280, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_281, 0, sizeof(struct list$1charph*));
memset(&var_args_282, 0, sizeof(_Bool));
memset(&param_types_279, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_280, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_281, 0, sizeof(struct list$1charph*));
memset(&var_args_282, 0, sizeof(_Bool));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&result_type_283, 0, sizeof(struct sType*));
right_value334 = (void*)0;
memset(&i_284, 0, sizeof(int));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&i_285, 0, sizeof(int));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&param_types_287, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_288, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_289, 0, sizeof(struct list$1charph*));
memset(&var_args_290, 0, sizeof(_Bool));
memset(&param_types_287, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_288, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_289, 0, sizeof(struct list$1charph*));
memset(&var_args_290, 0, sizeof(_Bool));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&exp_291, 0, sizeof(struct sNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&come_value_292, 0, sizeof(struct CVALUE*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&no_comma_295, 0, sizeof(_Bool));
right_value361 = (void*)0;
memset(&node_296, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&i_297, 0, sizeof(int));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&i_298, 0, sizeof(int));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&generics_type_299, 0, sizeof(struct sType*));
memset(&var_name_300, 0, sizeof(char*));
memset(&err_301, 0, sizeof(_Bool));
memset(&generics_type_299, 0, sizeof(struct sType*));
memset(&var_name_300, 0, sizeof(char*));
memset(&err_301, 0, sizeof(_Bool));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&new_name_302, 0, sizeof(char*));
memset(&klass_303, 0, sizeof(struct sClass*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&types_348, 0, sizeof(struct list$1sTypeph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&type2_349, 0, sizeof(struct sType*));
memset(&name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
memset(&type2_349, 0, sizeof(struct sType*));
memset(&name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&num_tuples_352, 0, sizeof(int));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&o2_saved_353, 0, sizeof(struct list$1sTypeph*));
memset(&it_354, 0, sizeof(struct sType*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&new_name_355, 0, sizeof(char*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&no_comma_358, 0, sizeof(_Bool));
right_value408 = (void*)0;
memset(&node_359, 0, sizeof(struct sNode*));
right_value409 = (void*)0;
memset(&node_360, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
memset(&asm_name_361, 0, sizeof(char*));
right_value411 = (void*)0;
right_value412 = (void*)0;
    # 1027 "05type.c"
    head_192=info->p;
    # 1028 "05type.c"
    head_sline_193=info->sline;
    # 1029 "05type.c"
    info->define_struct=(_Bool)0;
    # 1031 "05type.c"
    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1031, 12),__exception_result_var_b7=((char*)(right_value233=parse_word(info))), come_pop_stackframe(), __exception_result_var_b7));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1036 "05type.c"
    while(_while_condtional39=string_operator_equals(type_name_194,"__extension__"),    _while_condtional39) {
        # 1033 "05type.c"
        __dec_obj82=type_name_194;
        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1033, 13),__exception_result_var_b8=((char*)(right_value234=parse_word(info))), come_pop_stackframe(), __exception_result_var_b8));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1036 "05type.c"
    record__195=(_Bool)0;
    # 1037 "05type.c"
    constant_196=(_Bool)0;
    # 1038 "05type.c"
    static__197=(_Bool)0;
    # 1039 "05type.c"
    volatile__198=(_Bool)0;
    # 1040 "05type.c"
    register__199=(_Bool)0;
    # 1041 "05type.c"
    unsigned__200=(_Bool)0;
    # 1042 "05type.c"
    long__201=(_Bool)0;
    # 1043 "05type.c"
    long_long_202=(_Bool)0;
    # 1044 "05type.c"
    short__203=(_Bool)0;
    # 1045 "05type.c"
    restrict__204=(_Bool)0;
    # 1046 "05type.c"
    struct__205=(_Bool)0;
    # 1047 "05type.c"
    union__206=(_Bool)0;
    # 1048 "05type.c"
    enum__207=(_Bool)0;
    # 1049 "05type.c"
    no_heap_208=(_Bool)0;
    # 1050 "05type.c"
    extern__209=(_Bool)0;
    # 1051 "05type.c"
    inline__210=(_Bool)0;
    # 1052 "05type.c"
    come_mem_core__211=(_Bool)0;
    # 1054 "05type.c"
    alignas__212=((void*)0);
    # 1056 "05type.c"
    anonymous_type_213=(_Bool)0;
    # 1057 "05type.c"
    anonymous_name_214=(_Bool)0;
    # 1498 "05type.c"
    while(_while_condtional40=(_Bool)1,    _while_condtional40) {
        # 1496 "05type.c"
        # 1060 "05type.c"
        if(_if_conditional316=string_operator_equals(type_name_194,"struct"),        _if_conditional316) {
            # 1061 "05type.c"
            struct__205=(_Bool)1;
            # 1086 "05type.c"
            # 1063 "05type.c"
            if(_if_conditional317=*info->p==123,            _if_conditional317) {
                # 1064 "05type.c"
                p_215=info->p;
                # 1065 "05type.c"
                sline_216=info->sline;
                # 1067 "05type.c"
                ((char*)(right_value235=skip_block(info)));
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1084 "05type.c"
                # 1069 "05type.c"
                if(_if_conditional318=*info->p==59,                _if_conditional318) {
                    # 1070 "05type.c"
                    anonymous_name_214=(_Bool)1;
                    # 1071 "05type.c"
                    anonymous_type_213=(_Bool)1;
                    # 1072 "05type.c"
                    __dec_obj83=type_name_194;
                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(""))));
                    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1073 "05type.c"
                    info->p=p_215;
                    # 1074 "05type.c"
                    info->sline=sline_216;
                    # 1075 "05type.c"
                    break;
                }
                else {
                    # 1078 "05type.c"
                    anonymous_type_213=(_Bool)1;
                    # 1079 "05type.c"
                    __dec_obj84=type_name_194;
                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(""))));
                    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1080 "05type.c"
                    info->p=p_215;
                    # 1081 "05type.c"
                    info->sline=sline_216;
                    # 1082 "05type.c"
                    break;
                }
            }
            # 1086 "05type.c"
            parse_sharp_v5(info);
            # 1143 "05type.c"
            # 1088 "05type.c"
            if(_if_conditional319=*info->p!=62,            _if_conditional319) {
                # 1089 "05type.c"
                __dec_obj85=type_name_194;
                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1089, 14),__exception_result_var_b9=((char*)(right_value238=parse_word(info))), come_pop_stackframe(), __exception_result_var_b9));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1091 "05type.c"
                parse_sharp_v5(info);
                # 1123 "05type.c"
                # 1093 "05type.c"
                if(_if_conditional320=*info->p==60,                _if_conditional320) {
                    # 1094 "05type.c"
                    p_217=info->p;
                    # 1095 "05type.c"
                    sline_218=info->sline;
                    # 1097 "05type.c"
                    info->p++;
                    # 1098 "05type.c"
                    skip_spaces_and_lf(info);
                    # 1121 "05type.c"
                    while(_while_condtional41=(_Bool)1,                    _while_condtional41) {
                        # 1120 "05type.c"
                        # 1101 "05type.c"
                        if(_if_conditional321=*info->p==62,                        _if_conditional321) {
                            # 1102 "05type.c"
                            info->p++;
                            # 1103 "05type.c"
                            skip_spaces_and_lf(info);
                            # 1111 "05type.c"
                            # 1105 "05type.c"
                            if(_if_conditional322=*info->p==123,                            _if_conditional322) {
                            }
                            else {
                                # 1108 "05type.c"
                                info->p=p_217;
                                # 1109 "05type.c"
                                info->sline=sline_218;
                            }
                            # 1111 "05type.c"
                            break;
                        }
                        else {
                            # 1120 "05type.c"
                            # 1113 "05type.c"
                            if(_if_conditional323=*info->p==0,                            _if_conditional323) {
                                # 1114 "05type.c"
                                err_msg(info,"invalid struct definition");
                                # 1115 "05type.c"
                                __result135__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value240=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value239=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1115, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value239,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value240,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result135__;
                            }
                            else {
                                # 1118 "05type.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1142 "05type.c"
                # 1123 "05type.c"
                if(_if_conditional324=*info->p==123,                _if_conditional324) {
                    # 1124 "05type.c"
                    p_219=info->p;
                    # 1125 "05type.c"
                    sline_220=info->sline;
                    # 1127 "05type.c"
                    ((char*)(right_value241=skip_block(info)));
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1141 "05type.c"
                    # 1129 "05type.c"
                    if(_if_conditional325=*info->p==59,                    _if_conditional325) {
                        # 1130 "05type.c"
                        info->p=head_192;
                        # 1131 "05type.c"
                        info->sline=head_sline_193;
                        # 1132 "05type.c"
                        info->define_struct=(_Bool)1;
                        # 1133 "05type.c"
                        __result136__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value243=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value242=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1133, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value242,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value243,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result136__;
                    }
                    else {
                        # 1136 "05type.c"
                        anonymous_type_213=(_Bool)1;
                        # 1137 "05type.c"
                        info->p=p_219;
                        # 1138 "05type.c"
                        info->sline=sline_220;
                        # 1139 "05type.c"
                        break;
                    }
                }
            }
        }
        else {
            # 1496 "05type.c"
            # 1144 "05type.c"
            if(_if_conditional326=string_operator_equals(type_name_194,"union"),            _if_conditional326) {
                # 1145 "05type.c"
                union__206=(_Bool)1;
                # 1173 "05type.c"
                # 1147 "05type.c"
                if(_if_conditional327=*info->p==123,                _if_conditional327) {
                    # 1148 "05type.c"
                    p_221=info->p;
                    # 1149 "05type.c"
                    sline_222=info->sline;
                    # 1151 "05type.c"
                    ((char*)(right_value244=skip_block(info)));
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1171 "05type.c"
                    # 1153 "05type.c"
                    if(_if_conditional328=*info->p==59,                    _if_conditional328) {
                        # 1154 "05type.c"
                        info->p=head_192;
                        # 1155 "05type.c"
                        info->sline=head_sline_193;
                        # 1157 "05type.c"
                        info->define_struct=(_Bool)0;
                        # 1158 "05type.c"
                        anonymous_type_213=(_Bool)1;
                        # 1159 "05type.c"
                        __dec_obj86=type_name_194;
                        type_name_194=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(""))));
                        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1160 "05type.c"
                        info->p=p_221;
                        # 1161 "05type.c"
                        info->sline=sline_222;
                        # 1162 "05type.c"
                        break;
                    }
                    else {
                        # 1165 "05type.c"
                        anonymous_type_213=(_Bool)1;
                        # 1166 "05type.c"
                        __dec_obj87=type_name_194;
                        type_name_194=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(""))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1167 "05type.c"
                        info->p=p_221;
                        # 1168 "05type.c"
                        info->sline=sline_222;
                        # 1169 "05type.c"
                        break;
                    }
                }
                # 1173 "05type.c"
                parse_sharp_v5(info);
                # 1175 "05type.c"
                __dec_obj88=type_name_194;
                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1175, 15),__exception_result_var_b10=((char*)(right_value247=parse_word(info))), come_pop_stackframe(), __exception_result_var_b10));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1177 "05type.c"
                parse_sharp_v5(info);
                # 1198 "05type.c"
                # 1179 "05type.c"
                if(_if_conditional329=*info->p==123,                _if_conditional329) {
                    # 1180 "05type.c"
                    p_223=info->p;
                    # 1181 "05type.c"
                    sline_224=info->sline;
                    # 1183 "05type.c"
                    ((char*)(right_value248=skip_block(info)));
                    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1197 "05type.c"
                    # 1185 "05type.c"
                    if(_if_conditional330=*info->p==59,                    _if_conditional330) {
                        # 1186 "05type.c"
                        info->p=head_192;
                        # 1187 "05type.c"
                        info->sline=head_sline_193;
                        # 1188 "05type.c"
                        info->define_struct=(_Bool)1;
                        # 1189 "05type.c"
                        __result137__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value250=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value249=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1189, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value249,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value250,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result137__;
                    }
                    else {
                        # 1192 "05type.c"
                        anonymous_type_213=(_Bool)1;
                        # 1193 "05type.c"
                        info->p=p_223;
                        # 1194 "05type.c"
                        info->sline=sline_224;
                        # 1195 "05type.c"
                        break;
                    }
                }
            }
            else {
                # 1496 "05type.c"
                # 1199 "05type.c"
                if(_if_conditional331=string_operator_equals(type_name_194,"enum"),                _if_conditional331) {
                    # 1200 "05type.c"
                    enum__207=(_Bool)1;
                    # 1202 "05type.c"
                    parse_sharp_v5(info);
                    # 1225 "05type.c"
                    # 1204 "05type.c"
                    if(_if_conditional332=*info->p==123,                    _if_conditional332) {
                        # 1205 "05type.c"
                        p_225=info->p;
                        # 1206 "05type.c"
                        sline_226=info->sline;
                        # 1208 "05type.c"
                        ((char*)(right_value251=skip_block(info)));
                        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1223 "05type.c"
                        # 1210 "05type.c"
                        if(_if_conditional333=*info->p==59,                        _if_conditional333) {
                            # 1211 "05type.c"
                            info->p=head_192;
                            # 1212 "05type.c"
                            info->sline=head_sline_193;
                            # 1213 "05type.c"
                            info->define_struct=(_Bool)1;
                            # 1214 "05type.c"
                            __result138__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value253=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value252=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1214, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value252,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value253,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result138__;
                        }
                        else {
                            # 1217 "05type.c"
                            anonymous_type_213=(_Bool)1;
                            # 1218 "05type.c"
                            __dec_obj89=type_name_194;
                            type_name_194=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(""))));
                            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1219 "05type.c"
                            info->p=p_225;
                            # 1220 "05type.c"
                            info->sline=sline_226;
                            # 1221 "05type.c"
                            break;
                        }
                    }
                    # 1225 "05type.c"
                    parse_sharp_v5(info);
                    # 1227 "05type.c"
                    __dec_obj90=type_name_194;
                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1227, 16),__exception_result_var_b11=((char*)(right_value255=parse_word(info))), come_pop_stackframe(), __exception_result_var_b11));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1229 "05type.c"
                    parse_sharp_v5(info);
                    # 1250 "05type.c"
                    # 1231 "05type.c"
                    if(_if_conditional334=*info->p==123,                    _if_conditional334) {
                        # 1232 "05type.c"
                        p_227=info->p;
                        # 1233 "05type.c"
                        sline_228=info->sline;
                        # 1235 "05type.c"
                        ((char*)(right_value256=skip_block(info)));
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1249 "05type.c"
                        # 1237 "05type.c"
                        if(_if_conditional335=*info->p==59,                        _if_conditional335) {
                            # 1238 "05type.c"
                            info->p=head_192;
                            # 1239 "05type.c"
                            info->sline=head_sline_193;
                            # 1240 "05type.c"
                            info->define_struct=(_Bool)1;
                            # 1241 "05type.c"
                            __result139__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value258=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value257=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1241, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value257,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value258,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result139__;
                        }
                        else {
                            # 1244 "05type.c"
                            anonymous_type_213=(_Bool)1;
                            # 1245 "05type.c"
                            info->p=p_227;
                            # 1246 "05type.c"
                            info->sline=sline_228;
                            # 1247 "05type.c"
                            break;
                        }
                    }
                }
                else {
                    # 1496 "05type.c"
                    # 1251 "05type.c"
                    if(_if_conditional336=string_operator_equals(type_name_194,"_Alignas"),                    _if_conditional336) {
                        # 1252 "05type.c"
                        expected_next_character(40,info);
                        # 1254 "05type.c"
                        exp_229=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=expression_v13(info))));
                        if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1256 "05type.c"
                        __dec_obj91=alignas__212;
                        alignas__212=(struct sNode*)come_increment_ref_count(exp_229);
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1258 "05type.c"
                        expected_next_character(41,info);
                        # 1260 "05type.c"
                        __dec_obj92=type_name_194;
                        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1260, 17),__exception_result_var_b12=((char*)(right_value260=parse_word(info))), come_pop_stackframe(), __exception_result_var_b12));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_229) { exp_229 = come_decrement_ref_count2(exp_229, ((struct sNode*)exp_229)->finalize, ((struct sNode*)exp_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1496 "05type.c"
                        # 1262 "05type.c"
                        if(_if_conditional337=string_operator_equals(type_name_194,"const"),                        _if_conditional337) {
                            # 1263 "05type.c"
                            constant_196=(_Bool)1;
                            # 1265 "05type.c"
                            __dec_obj93=type_name_194;
                            type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1265, 18),__exception_result_var_b13=((char*)(right_value261=parse_word(info))), come_pop_stackframe(), __exception_result_var_b13));
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1496 "05type.c"
                            # 1267 "05type.c"
                            if(_if_conditional338=string_operator_equals(type_name_194,"static"),                            _if_conditional338) {
                                # 1268 "05type.c"
                                static__197=(_Bool)1;
                                # 1270 "05type.c"
                                __dec_obj94=type_name_194;
                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1270, 19),__exception_result_var_b14=((char*)(right_value262=parse_word(info))), come_pop_stackframe(), __exception_result_var_b14));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1496 "05type.c"
                                # 1272 "05type.c"
                                if(_if_conditional339=string_operator_equals(type_name_194,"record"),                                _if_conditional339) {
                                    # 1273 "05type.c"
                                    record__195=(_Bool)1;
                                    # 1275 "05type.c"
                                    __dec_obj95=type_name_194;
                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1275, 20),__exception_result_var_b15=((char*)(right_value263=parse_word(info))), come_pop_stackframe(), __exception_result_var_b15));
                                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1496 "05type.c"
                                    # 1277 "05type.c"
                                    if(_if_conditional340=string_operator_equals(type_name_194,"come_mem_core"),                                    _if_conditional340) {
                                        # 1278 "05type.c"
                                        come_mem_core__211=(_Bool)1;
                                        # 1280 "05type.c"
                                        __dec_obj96=type_name_194;
                                        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1280, 21),__exception_result_var_b16=((char*)(right_value264=parse_word(info))), come_pop_stackframe(), __exception_result_var_b16));
                                        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1496 "05type.c"
                                        # 1282 "05type.c"
                                        if(_if_conditional341=string_operator_equals(type_name_194,"extern"),                                        _if_conditional341) {
                                            # 1283 "05type.c"
                                            extern__209=(_Bool)1;
                                            # 1285 "05type.c"
                                            __dec_obj97=type_name_194;
                                            type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1285, 22),__exception_result_var_b17=((char*)(right_value265=parse_word(info))), come_pop_stackframe(), __exception_result_var_b17));
                                            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1496 "05type.c"
                                            # 1287 "05type.c"
                                            if(_if_conditional342=string_operator_equals(type_name_194,"_Noreturn"),                                            _if_conditional342) {
                                                # 1288 "05type.c"
                                                __dec_obj98=type_name_194;
                                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1288, 23),__exception_result_var_b18=((char*)(right_value266=parse_word(info))), come_pop_stackframe(), __exception_result_var_b18));
                                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1496 "05type.c"
                                                # 1290 "05type.c"
                                                if(_if_conditional343=string_operator_equals(type_name_194,"inline")||string_operator_equals(type_name_194,"__inline")||string_operator_equals(type_name_194,"__inline__")||string_operator_equals(type_name_194,"__always_inline"),                                                _if_conditional343) {
                                                    # 1291 "05type.c"
                                                    inline__210=(_Bool)1;
                                                    # 1293 "05type.c"
                                                    __dec_obj99=type_name_194;
                                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1293, 24),__exception_result_var_b19=((char*)(right_value267=parse_word(info))), come_pop_stackframe(), __exception_result_var_b19));
                                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1496 "05type.c"
                                                    # 1295 "05type.c"
                                                    if(_if_conditional344=string_operator_equals(type_name_194,"volatile"),                                                    _if_conditional344) {
                                                        # 1296 "05type.c"
                                                        volatile__198=(_Bool)1;
                                                        # 1298 "05type.c"
                                                        __dec_obj100=type_name_194;
                                                        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1298, 25),__exception_result_var_b20=((char*)(right_value268=parse_word(info))), come_pop_stackframe(), __exception_result_var_b20));
                                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        # 1496 "05type.c"
                                                        # 1300 "05type.c"
                                                        if(_if_conditional345=string_operator_equals(type_name_194,"long"),                                                        _if_conditional345) {
                                                            # 1367 "05type.c"
                                                            {
                                                                # 1303 "05type.c"
                                                                p_230=info->p;
                                                                # 1304 "05type.c"
                                                                sline_231=info->sline;
                                                                # 1366 "05type.c"
                                                                # 1306 "05type.c"
                                                                if(_if_conditional346=!xisalpha(*info->p),                                                                _if_conditional346) {
                                                                    # 1307 "05type.c"
                                                                    info->p=p_230;
                                                                    # 1308 "05type.c"
                                                                    info->sline=sline_231;
                                                                    # 1310 "05type.c"
                                                                    __dec_obj101=type_name_194;
                                                                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("long"))));
                                                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1311 "05type.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 1314 "05type.c"
                                                                    __dec_obj102=type_name_194;
                                                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1314, 26),__exception_result_var_b21=((char*)(right_value270=parse_word(info))), come_pop_stackframe(), __exception_result_var_b21));
                                                                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1365 "05type.c"
                                                                    # 1316 "05type.c"
                                                                    if(_if_conditional347=string_operator_equals(type_name_194,"unsigned"),                                                                    _if_conditional347) {
                                                                        # 1317 "05type.c"
                                                                        __dec_obj103=type_name_194;
                                                                        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1317, 27),__exception_result_var_b22=((char*)(right_value271=parse_word(info))), come_pop_stackframe(), __exception_result_var_b22));
                                                                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1323 "05type.c"
                                                                        # 1319 "05type.c"
                                                                        if(_if_conditional348=string_operator_equals(type_name_194,"int"),                                                                        _if_conditional348) {
                                                                            # 1320 "05type.c"
                                                                            long__201=(_Bool)1;
                                                                            # 1321 "05type.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1365 "05type.c"
                                                                        # 1324 "05type.c"
                                                                        if(_if_conditional349=string_operator_equals(type_name_194,"long"),                                                                        _if_conditional349) {
                                                                            # 1325 "05type.c"
                                                                            p_230=info->p;
                                                                            # 1326 "05type.c"
                                                                            sline_231=info->sline;
                                                                            # 1336 "05type.c"
                                                                            # 1327 "05type.c"
                                                                            if(_if_conditional350=xisalpha(*info->p),                                                                            _if_conditional350) {
                                                                                # 1328 "05type.c"
                                                                                long_long_202=(_Bool)1;
                                                                                # 1329 "05type.c"
                                                                                __dec_obj104=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1329, 28),__exception_result_var_b23=((char*)(right_value272=parse_word(info))), come_pop_stackframe(), __exception_result_var_b23));
                                                                                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1332 "05type.c"
                                                                                long__201=(_Bool)1;
                                                                                # 1333 "05type.c"
                                                                                break;
                                                                            }
                                                                            # 1347 "05type.c"
                                                                            # 1336 "05type.c"
                                                                            if(_if_conditional351=string_operator_equals(type_name_194,"int"),                                                                            _if_conditional351) {
                                                                                # 1337 "05type.c"
                                                                                long_long_202=(_Bool)1;
                                                                                # 1338 "05type.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1347 "05type.c"
                                                                                # 1340 "05type.c"
                                                                                if(_if_conditional352=!is_type_name(type_name_194,info),                                                                                _if_conditional352) {
                                                                                    # 1341 "05type.c"
                                                                                    __dec_obj105=type_name_194;
                                                                                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("long"))));
                                                                                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1342 "05type.c"
                                                                                    long_long_202=(_Bool)1;
                                                                                    # 1343 "05type.c"
                                                                                    info->p=p_230;
                                                                                    # 1344 "05type.c"
                                                                                    info->sline=sline_231;
                                                                                    # 1345 "05type.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1365 "05type.c"
                                                                            # 1348 "05type.c"
                                                                            if(_if_conditional353=is_type_name(type_name_194,info),                                                                            _if_conditional353) {
                                                                                # 1356 "05type.c"
                                                                                # 1349 "05type.c"
                                                                                if(long__201) {
                                                                                    # 1350 "05type.c"
                                                                                    long_long_202=(_Bool)1;
                                                                                    # 1351 "05type.c"
                                                                                    long__201=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 1354 "05type.c"
                                                                                    long__201=(_Bool)1;
                                                                                }
                                                                                # 1356 "05type.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1359 "05type.c"
                                                                                info->p=p_230;
                                                                                # 1360 "05type.c"
                                                                                info->sline=sline_231;
                                                                                # 1362 "05type.c"
                                                                                __dec_obj106=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("long"))));
                                                                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1363 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1496 "05type.c"
                                                            # 1368 "05type.c"
                                                            if(_if_conditional355=string_operator_equals(type_name_194,"unsigned"),                                                            _if_conditional355) {
                                                                # 1369 "05type.c"
                                                                unsigned__200=(_Bool)1;
                                                                # 1436 "05type.c"
                                                                # 1371 "05type.c"
                                                                if(_if_conditional356=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional356) {
                                                                    # 1372 "05type.c"
                                                                    p_232=info->p;
                                                                    # 1373 "05type.c"
                                                                    sline_233=info->sline;
                                                                    # 1375 "05type.c"
                                                                    __dec_obj107=type_name_194;
                                                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1375, 29),__exception_result_var_b24=((char*)(right_value275=parse_word(info))), come_pop_stackframe(), __exception_result_var_b24));
                                                                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1431 "05type.c"
                                                                    # 1377 "05type.c"
                                                                    if(_if_conditional357=string_operator_equals(type_name_194,"short"),                                                                    _if_conditional357) {
                                                                        # 1400 "05type.c"
                                                                        # 1378 "05type.c"
                                                                        if(_if_conditional358=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional358) {
                                                                            # 1379 "05type.c"
                                                                            p_234=info->p;
                                                                            # 1380 "05type.c"
                                                                            sline_235=info->sline;
                                                                            # 1382 "05type.c"
                                                                            __dec_obj108=type_name_194;
                                                                            type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1382, 30),__exception_result_var_b25=((char*)(right_value276=parse_word(info))), come_pop_stackframe(), __exception_result_var_b25));
                                                                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1394 "05type.c"
                                                                            # 1384 "05type.c"
                                                                            if(_if_conditional359=is_type_name(type_name_194,info),                                                                            _if_conditional359) {
                                                                                # 1385 "05type.c"
                                                                                short__203=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1388 "05type.c"
                                                                                short__203=(_Bool)1;
                                                                                # 1389 "05type.c"
                                                                                __dec_obj109=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("int"))));
                                                                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1391 "05type.c"
                                                                                info->p=p_234;
                                                                                # 1392 "05type.c"
                                                                                info->sline=sline_235;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1396 "05type.c"
                                                                            short__203=(_Bool)1;
                                                                            # 1397 "05type.c"
                                                                            __dec_obj110=type_name_194;
                                                                            type_name_194=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("int"))));
                                                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1398 "05type.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1431 "05type.c"
                                                                        # 1401 "05type.c"
                                                                        if(_if_conditional360=string_operator_equals(type_name_194,"long"),                                                                        _if_conditional360) {
                                                                            # 1424 "05type.c"
                                                                            # 1402 "05type.c"
                                                                            if(_if_conditional361=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional361) {
                                                                                # 1403 "05type.c"
                                                                                p_236=info->p;
                                                                                # 1404 "05type.c"
                                                                                sline_237=info->sline;
                                                                                # 1406 "05type.c"
                                                                                __dec_obj111=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1406, 31),__exception_result_var_b26=((char*)(right_value279=parse_word(info))), come_pop_stackframe(), __exception_result_var_b26));
                                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1418 "05type.c"
                                                                                # 1408 "05type.c"
                                                                                if(_if_conditional362=is_type_name(type_name_194,info),                                                                                _if_conditional362) {
                                                                                    # 1409 "05type.c"
                                                                                    long__201=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1412 "05type.c"
                                                                                    long__201=(_Bool)1;
                                                                                    # 1413 "05type.c"
                                                                                    __dec_obj112=type_name_194;
                                                                                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("int"))));
                                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1415 "05type.c"
                                                                                    info->p=p_236;
                                                                                    # 1416 "05type.c"
                                                                                    info->sline=sline_237;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1420 "05type.c"
                                                                                long__201=(_Bool)1;
                                                                                # 1421 "05type.c"
                                                                                __dec_obj113=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string("int"))));
                                                                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1422 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1431 "05type.c"
                                                                            # 1425 "05type.c"
                                                                            if(_if_conditional363=!is_type_name(type_name_194,info),                                                                            _if_conditional363) {
                                                                                # 1426 "05type.c"
                                                                                __dec_obj114=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("int"))));
                                                                                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1427 "05type.c"
                                                                                info->p=p_232;
                                                                                # 1428 "05type.c"
                                                                                info->sline=sline_233;
                                                                                # 1429 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1433 "05type.c"
                                                                    __dec_obj115=type_name_194;
                                                                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string("int"))));
                                                                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1434 "05type.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1496 "05type.c"
                                                                # 1437 "05type.c"
                                                                if(_if_conditional364=string_operator_equals(type_name_194,"signed")||string_operator_equals(type_name_194,"__signed__"),                                                                _if_conditional364) {
                                                                    # 1438 "05type.c"
                                                                    unsigned__200=(_Bool)0;
                                                                    # 1440 "05type.c"
                                                                    __dec_obj116=type_name_194;
                                                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1440, 32),__exception_result_var_b27=((char*)(right_value284=parse_word(info))), come_pop_stackframe(), __exception_result_var_b27));
                                                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1496 "05type.c"
                                                                    # 1442 "05type.c"
                                                                    if(_if_conditional365=string_operator_equals(type_name_194,"register"),                                                                    _if_conditional365) {
                                                                        # 1443 "05type.c"
                                                                        register__199=(_Bool)1;
                                                                        # 1445 "05type.c"
                                                                        __dec_obj117=type_name_194;
                                                                        type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1445, 33),__exception_result_var_b28=((char*)(right_value285=parse_word(info))), come_pop_stackframe(), __exception_result_var_b28));
                                                                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1496 "05type.c"
                                                                        # 1447 "05type.c"
                                                                        if(_if_conditional366=string_operator_equals(type_name_194,"restrict"),                                                                        _if_conditional366) {
                                                                            # 1448 "05type.c"
                                                                            restrict__204=(_Bool)1;
                                                                            # 1450 "05type.c"
                                                                            __dec_obj118=type_name_194;
                                                                            type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1450, 34),__exception_result_var_b29=((char*)(right_value286=parse_word(info))), come_pop_stackframe(), __exception_result_var_b29));
                                                                            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1496 "05type.c"
                                                                            # 1452 "05type.c"
                                                                            if(_if_conditional367=string_operator_equals(type_name_194,"_Addr"),                                                                            _if_conditional367) {
                                                                                # 1453 "05type.c"
                                                                                __dec_obj119=type_name_194;
                                                                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1453, 35),__exception_result_var_b30=((char*)(right_value287=parse_word(info))), come_pop_stackframe(), __exception_result_var_b30));
                                                                                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1496 "05type.c"
                                                                                # 1455 "05type.c"
                                                                                if(_if_conditional368=string_operator_equals(type_name_194,"__restrict"),                                                                                _if_conditional368) {
                                                                                    # 1456 "05type.c"
                                                                                    restrict__204=(_Bool)1;
                                                                                    # 1458 "05type.c"
                                                                                    __dec_obj120=type_name_194;
                                                                                    type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1458, 36),__exception_result_var_b31=((char*)(right_value288=parse_word(info))), come_pop_stackframe(), __exception_result_var_b31));
                                                                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 1496 "05type.c"
                                                                                    # 1460 "05type.c"
                                                                                    if(_if_conditional369=string_operator_equals(type_name_194,"short"),                                                                                    _if_conditional369) {
                                                                                        # 1461 "05type.c"
                                                                                        short__203=(_Bool)1;
                                                                                        # 1492 "05type.c"
                                                                                        # 1463 "05type.c"
                                                                                        if(_if_conditional370=*info->p==58,                                                                                        _if_conditional370) {
                                                                                            # 1464 "05type.c"
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            # 1492 "05type.c"
                                                                                            # 1466 "05type.c"
                                                                                            if(_if_conditional371=xisalnum(*info->p),                                                                                            _if_conditional371) {
                                                                                                # 1467 "05type.c"
                                                                                                p_238=info->p;
                                                                                                # 1468 "05type.c"
                                                                                                sline_239=info->sline;
                                                                                                # 1469 "05type.c"
                                                                                                __dec_obj121=type_name_194;
                                                                                                type_name_194=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1469, 37),__exception_result_var_b32=((char*)(right_value289=parse_word(info))), come_pop_stackframe(), __exception_result_var_b32));
                                                                                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1488 "05type.c"
                                                                                                # 1471 "05type.c"
                                                                                                if(_if_conditional372=string_operator_equals(type_name_194,"int"),                                                                                                _if_conditional372) {
                                                                                                    # 1472 "05type.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1488 "05type.c"
                                                                                                    # 1474 "05type.c"
                                                                                                    if(_if_conditional373=string_operator_equals(type_name_194,"short"),                                                                                                    _if_conditional373) {
                                                                                                        # 1475 "05type.c"
                                                                                                        short__203=(_Bool)0;
                                                                                                        # 1476 "05type.c"
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1488 "05type.c"
                                                                                                        # 1478 "05type.c"
                                                                                                        if(_if_conditional374=is_type_name(type_name_194,info),                                                                                                        _if_conditional374) {
                                                                                                            # 1479 "05type.c"
                                                                                                            info->p=p_238;
                                                                                                            # 1480 "05type.c"
                                                                                                            info->sline=sline_239;
                                                                                                        }
                                                                                                        else {
                                                                                                            # 1483 "05type.c"
                                                                                                            __dec_obj122=type_name_194;
                                                                                                            type_name_194=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string("short"))));
                                                                                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            # 1484 "05type.c"
                                                                                                            info->p=p_238;
                                                                                                            # 1485 "05type.c"
                                                                                                            info->sline=sline_239;
                                                                                                            # 1486 "05type.c"
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                # 1490 "05type.c"
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 1494 "05type.c"
                                                                                        break;
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
    # 1498 "05type.c"
    skip_pointer_attribute(info);
    # 1500 "05type.c"
    pointer_num_240=0;
    # 1510 "05type.c"
    while(_while_condtional42=*info->p==42,    _while_condtional42) {
        # 1502 "05type.c"
        info->p++;
        # 1503 "05type.c"
        skip_spaces_and_lf(info);
        # 1505 "05type.c"
        skip_pointer_attribute(info);
        # 1507 "05type.c"
        pointer_num_240++;
    }
    # 1510 "05type.c"
    heap_241=(_Bool)0;
    # 1518 "05type.c"
    # 1511 "05type.c"
    if(_if_conditional375=*info->p==37,    _if_conditional375) {
        # 1512 "05type.c"
        info->p++;
        # 1513 "05type.c"
        skip_spaces_and_lf(info);
        # 1515 "05type.c"
        heap_241=(_Bool)1;
    }
    # 1518 "05type.c"
    lambda_flag_242=(_Bool)0;
    # 1535 "05type.c"
    {
        # 1520 "05type.c"
        pX_243=info->p;
        # 1521 "05type.c"
        slineX_244=info->sline;
        # 1531 "05type.c"
        # 1523 "05type.c"
        if(_if_conditional376=xisalpha(*info->p)||*info->p==95,        _if_conditional376) {
            # 1524 "05type.c"
            (void)(come_push_stackframe("05type.c", 1524, 38),__exception_result_var_b33=((char*)(right_value291=parse_word(info))), come_pop_stackframe(), __exception_result_var_b33);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1529 "05type.c"
            # 1526 "05type.c"
            if(_if_conditional377=*info->p==40&&info->in_typedef,            _if_conditional377) {
                # 1527 "05type.c"
                lambda_flag_242=(_Bool)1;
            }
        }
        # 1531 "05type.c"
        info->p=pX_243;
        # 1532 "05type.c"
        info->sline=slineX_244;
    }
    # 1535 "05type.c"
    # 1536 "05type.c"
    # 1538 "05type.c"
    function_pointer_flag_247=(_Bool)0;
    # 1570 "05type.c"
    {
        # 1540 "05type.c"
        p_248=info->p;
        # 1541 "05type.c"
        sline_249=info->sline;
        # 1566 "05type.c"
        # 1543 "05type.c"
        if(_if_conditional378=*info->p==40,        _if_conditional378) {
            # 1544 "05type.c"
            info->p++;
            # 1545 "05type.c"
            skip_spaces_and_lf(info);
            # 1547 "05type.c"
            skip_pointer_attribute(info);
            # 1564 "05type.c"
            # 1549 "05type.c"
            if(_if_conditional379=*info->p==42||*info->p==94,            _if_conditional379) {
                # 1550 "05type.c"
                function_pointer_flag_247=(_Bool)1;
            }
            else {
                # 1564 "05type.c"
                # 1552 "05type.c"
                if(_if_conditional380=xisalpha(*info->p)||*info->p==95,                _if_conditional380) {
                    # 1553 "05type.c"
                    word_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1553, 39),__exception_result_var_b34=((char*)(right_value292=parse_word(info))), come_pop_stackframe(), __exception_result_var_b34));
                    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1563 "05type.c"
                    # 1555 "05type.c"
                    if(_if_conditional381=*info->p==41,                    _if_conditional381) {
                        # 1556 "05type.c"
                        info->p++;
                        # 1557 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1562 "05type.c"
                        # 1559 "05type.c"
                        if(_if_conditional382=*info->p==40,                        _if_conditional382) {
                            # 1560 "05type.c"
                            function_pointer_flag_247=(_Bool)1;
                        }
                    }
                    word_250 = come_decrement_ref_count2(word_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1566 "05type.c"
        info->p=p_248;
        # 1567 "05type.c"
        info->sline=sline_249;
    }
    # 1570 "05type.c"
    var_name_between_brace_251=(_Bool)0;
    # 1601 "05type.c"
    {
        # 1572 "05type.c"
        p_252=info->p;
        # 1573 "05type.c"
        sline_253=info->sline;
        # 1597 "05type.c"
        # 1575 "05type.c"
        if(_if_conditional383=*info->p==40,        _if_conditional383) {
            # 1576 "05type.c"
            info->p++;
            # 1577 "05type.c"
            skip_spaces_and_lf(info);
            # 1579 "05type.c"
            skip_pointer_attribute(info);
            # 1595 "05type.c"
            # 1581 "05type.c"
            if(_if_conditional384=xisalpha(*info->p)||*info->p==95,            _if_conditional384) {
                # 1582 "05type.c"
                word_254=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1582, 40),__exception_result_var_b35=((char*)(right_value293=parse_word(info))), come_pop_stackframe(), __exception_result_var_b35));
                right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1594 "05type.c"
                # 1584 "05type.c"
                if(_if_conditional385=is_type_name(word_254,info),                _if_conditional385) {
                }
                else {
                    # 1594 "05type.c"
                    # 1586 "05type.c"
                    if(_if_conditional386=*info->p==41,                    _if_conditional386) {
                        # 1587 "05type.c"
                        info->p++;
                        # 1588 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1593 "05type.c"
                        # 1590 "05type.c"
                        if(_if_conditional387=*info->p!=40,                        _if_conditional387) {
                            # 1591 "05type.c"
                            var_name_between_brace_251=(_Bool)1;
                        }
                    }
                }
                word_254 = come_decrement_ref_count2(word_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1597 "05type.c"
        info->p=p_252;
        # 1598 "05type.c"
        info->sline=sline_253;
    }
    # 2283 "05type.c"
    # 1601 "05type.c"
    if(_if_conditional388=anonymous_type_213&&*info->p==123,    _if_conditional388) {
        # 1602 "05type.c"
        # 1672 "05type.c"
        # 1603 "05type.c"
        if(struct__205) {
            # 1608 "05type.c"
            # 1604 "05type.c"
            if(_if_conditional390=string_operator_equals(type_name_194,""),            _if_conditional390) {
                # 1605 "05type.c"
                __dec_obj123=type_name_194;
                type_name_194=(char*)come_increment_ref_count(((char*)(right_value294=xsprintf("anonymous_typeX%d",++anonymous_num_255))));
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1608 "05type.c"
            node_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=parse_struct((char*)come_increment_ref_count(type_name_194),info))));
            if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1615 "05type.c"
            # 1610 "05type.c"
            if(_if_conditional391=!node_compile(node_256,info),            _if_conditional391) {
                # 1611 "05type.c"
                err_msg(info,"parse_struct is failed");
                # 1612 "05type.c"
                __result140__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value297=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value296=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1612, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_256) { node_256 = come_decrement_ref_count2(node_256, ((struct sNode*)node_256)->finalize, ((struct sNode*)node_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value296,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value297,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result140__;
            }
            # 1615 "05type.c"
            pointer_num_257=0;
            # 1622 "05type.c"
            while(_while_condtional43=*info->p==42,            _while_condtional43) {
                # 1618 "05type.c"
                info->p++;
                # 1618 "05type.c"
                skip_spaces_and_lf(info);
                # 1619 "05type.c"
                pointer_num_257++;
            }
            # 1622 "05type.c"
            __dec_obj124=type_245;
            type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1622, "sType")))),type_name_194,(_Bool)0,info))));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value298,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1624 "05type.c"
            type_245->mPointerNum=pointer_num_257;
            if(node_256) { node_256 = come_decrement_ref_count2(node_256, ((struct sNode*)node_256)->finalize, ((struct sNode*)node_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1672 "05type.c"
            # 1626 "05type.c"
            if(enum__207) {
                # 1631 "05type.c"
                # 1627 "05type.c"
                if(_if_conditional393=string_operator_equals(type_name_194,""),                _if_conditional393) {
                    # 1628 "05type.c"
                    __dec_obj125=type_name_194;
                    type_name_194=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("anonymous_typeY%d",++anonymous_num_255))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1631 "05type.c"
                node_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=parse_enum((char*)come_increment_ref_count(type_name_194),info))));
                if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1640 "05type.c"
                # 1633 "05type.c"
                if(_if_conditional394=!info->no_output_err,                _if_conditional394) {
                    # 1638 "05type.c"
                    # 1634 "05type.c"
                    if(_if_conditional395=!node_compile(node_258,info),                    _if_conditional395) {
                        # 1635 "05type.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1636 "05type.c"
                        __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value303=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value302=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1636, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_258) { node_258 = come_decrement_ref_count2(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value302,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value303,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result141__;
                    }
                }
                # 1640 "05type.c"
                __dec_obj126=type_245;
                type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value304=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1640, "sType")))),type_name_194,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(node_258) { node_258 = come_decrement_ref_count2(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1672 "05type.c"
                # 1642 "05type.c"
                if(union__206) {
                    # 1647 "05type.c"
                    # 1643 "05type.c"
                    if(_if_conditional397=string_operator_equals(type_name_194,""),                    _if_conditional397) {
                        # 1644 "05type.c"
                        __dec_obj127=type_name_194;
                        type_name_194=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("anonymous_typeZ%d",++anonymous_num_255))));
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1647 "05type.c"
                    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=parse_union((char*)come_increment_ref_count(type_name_194),info))));
                    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1656 "05type.c"
                    # 1650 "05type.c"
                    if(_if_conditional398=!node_compile(node_259,info),                    _if_conditional398) {
                        # 1651 "05type.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1652 "05type.c"
                        __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value309=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value308=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1652, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value308,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value309,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result142__;
                    }
                    # 1656 "05type.c"
                    pointer_num_260=0;
                    # 1663 "05type.c"
                    while(_while_condtional44=*info->p==42,                    _while_condtional44) {
                        # 1659 "05type.c"
                        info->p++;
                        # 1659 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1660 "05type.c"
                        pointer_num_260++;
                    }
                    # 1663 "05type.c"
                    __dec_obj128=type_245;
                    type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value310=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1663, "sType")))),type_name_194,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1665 "05type.c"
                    type_245->mPointerNum=pointer_num_260;
                    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1668 "05type.c"
                    err_msg(info,"unexpected { character");
                    # 1669 "05type.c"
                    __result143__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value313=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value312=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1669, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value312,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value313,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    return __result143__;
                }
            }
        }
        # 1713 "05type.c"
        # 1672 "05type.c"
        if(parse_variable_name) {
            # 1673 "05type.c"
            parse_sharp_v5(info);
            # 1679 "05type.c"
            # 1674 "05type.c"
            if(_if_conditional400=var_name_between_brace_251&&*info->p==40,            _if_conditional400) {
                # 1675 "05type.c"
                info->p++;
                # 1676 "05type.c"
                skip_spaces_and_lf(info);
            }
            # 1696 "05type.c"
            # 1679 "05type.c"
            if(_if_conditional401=*info->p==58,            _if_conditional401) {
                # 1680 "05type.c"
                __dec_obj129=var_name_246;
                var_name_246=(char*)come_increment_ref_count(((char*)(right_value314=__builtin_string(""))));
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1696 "05type.c"
                # 1682 "05type.c"
                if(anonymous_name_214) {
                    # 1683 "05type.c"
                    # 1684 "05type.c"
                    num_anonymous_var_name_261++;
                    # 1685 "05type.c"
                    __dec_obj130=var_name_246;
                    var_name_246=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_261))));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1696 "05type.c"
                    # 1687 "05type.c"
                    if(_if_conditional403=xisalnum(*info->p)||*info->p==95,                    _if_conditional403) {
                        # 1688 "05type.c"
                        __dec_obj131=var_name_246;
                        var_name_246=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1688, 41),__exception_result_var_b36=((char*)(right_value316=parse_word(info))), come_pop_stackframe(), __exception_result_var_b36));
                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1691 "05type.c"
                        # 1692 "05type.c"
                        num_anonymous_var_name_262++;
                        # 1693 "05type.c"
                        __dec_obj132=var_name_246;
                        var_name_246=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_262))));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1701 "05type.c"
            # 1696 "05type.c"
            if(_if_conditional404=var_name_between_brace_251&&*info->p==41,            _if_conditional404) {
                # 1697 "05type.c"
                info->p++;
                # 1698 "05type.c"
                skip_spaces_and_lf(info);
            }
            # 1712 "05type.c"
            # 1701 "05type.c"
            if(_if_conditional405=*info->p==58,            _if_conditional405) {
                # 1702 "05type.c"
                info->p++;
                # 1703 "05type.c"
                skip_spaces_and_lf(info);
                # 1705 "05type.c"
                no_comma_263=info->no_comma;
                # 1706 "05type.c"
                info->no_comma=(_Bool)1;
                # 1707 "05type.c"
                node_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=expression_v13(info))));
                if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1708 "05type.c"
                info->no_comma=no_comma_263;
                # 1710 "05type.c"
                __dec_obj133=type_245->mSizeNum;
                type_245->mSizeNum=(struct sNode*)come_increment_ref_count(node_264);
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_264) { node_264 = come_decrement_ref_count2(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2283 "05type.c"
        # 1714 "05type.c"
        if(lambda_flag_242) {
            # 1715 "05type.c"
            # 1738 "05type.c"
            # 1716 "05type.c"
            if(_if_conditional411=map$2charphsTypephp_operator_load_element(info->types,type_name_194),            _if_conditional411) {
                # 1717 "05type.c"
                __dec_obj134=result_type_265;
                result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_194)))));
                come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1718 "05type.c"
                result_type_265->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_265->mClass->mName), "05type.c", 1718, 42));
            }
            else {
                # 1738 "05type.c"
                # 1720 "05type.c"
                if(_if_conditional417=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_194)),                _if_conditional417) {
                    # 1726 "05type.c"
                    for(                    i_274=0;                    i_274<list$1charph_length(info->generics_type_names);                    i_274++                    ){
                        # 1725 "05type.c"
                        # 1722 "05type.c"
                        if(_if_conditional421=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_274), "05type.c", 1722, 43)),type_name_194),                        _if_conditional421) {
                            # 1723 "05type.c"
                            __dec_obj135=result_type_265;
                            result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1723, "sType")))),((char*)(right_value321=xsprintf("generics_type%d",i_274))),(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1738 "05type.c"
                    # 1727 "05type.c"
                    if(_if_conditional422=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_194)),                    _if_conditional422) {
                        # 1733 "05type.c"
                        for(                        i_278=0;                        i_278<list$1charph_length(info->method_generics_type_names);                        i_278++                        ){
                            # 1732 "05type.c"
                            # 1729 "05type.c"
                            if(_if_conditional423=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_278), "05type.c", 1729, 44)),type_name_194),                            _if_conditional423) {
                                # 1730 "05type.c"
                                __dec_obj136=result_type_265;
                                result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1730, "sType")))),((char*)(right_value324=xsprintf("mgenerics_type%d",i_278))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1735 "05type.c"
                        __dec_obj137=result_type_265;
                        result_type_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value326=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1735, "sType")))),type_name_194,(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1738 "05type.c"
            result_type_265->mConstant=result_type_265->mConstant||constant_196;
            # 1739 "05type.c"
            __dec_obj138=result_type_265->mAlignas;
            result_type_265->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
            # 1740 "05type.c"
            result_type_265->mComeMemCore=result_type_265->mComeMemCore||come_mem_core__211;
            # 1741 "05type.c"
            result_type_265->mRegister=register__199;
            # 1742 "05type.c"
            result_type_265->mUnsigned=result_type_265->mUnsigned||unsigned__200;
            # 1743 "05type.c"
            result_type_265->mVolatile=volatile__198;
            # 1744 "05type.c"
            result_type_265->mRecord=result_type_265->mStatic||static__197;
            # 1745 "05type.c"
            result_type_265->mStatic=result_type_265->mRecord||record__195;
            # 1746 "05type.c"
            result_type_265->mExtern=result_type_265->mExtern||extern__209;
            # 1747 "05type.c"
            result_type_265->mInline=result_type_265->mInline||inline__210;
            # 1748 "05type.c"
            result_type_265->mRestrict=result_type_265->mRestrict||restrict__204;
            # 1749 "05type.c"
            result_type_265->mLongLong=result_type_265->mLongLong||long_long_202;
            # 1750 "05type.c"
            result_type_265->mLong=result_type_265->mLong||long__201;
            # 1751 "05type.c"
            result_type_265->mShort=result_type_265->mShort||short__203;
            # 1752 "05type.c"
            result_type_265->mPointerNum=pointer_num_240;
            # 1753 "05type.c"
            result_type_265->mHeap=result_type_265->mHeap||heap_241;
            # 1755 "05type.c"
            __dec_obj139=var_name_246;
            var_name_246=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1755, 45),__exception_result_var_b37=((char*)(right_value328=parse_word(info))), come_pop_stackframe(), __exception_result_var_b37));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1757 "05type.c"
            multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value329=parse_params(info,(_Bool)0)));
            param_types_279=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
            param_names_280=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
            param_default_parametors_281=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
            var_args_282=multiple_assign_var3->v4;
            come_call_finalizer3(right_value329,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1759 "05type.c"
            __dec_obj140=type_245;
            type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1759, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1761 "05type.c"
            __dec_obj142=type_245->mResultType;
            type_245->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value333=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value332=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1761, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_265)))));
            come_call_finalizer3(__dec_obj142,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value332,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value333,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1762 "05type.c"
            __dec_obj143=type_245->mParamTypes;
            type_245->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_279);
            come_call_finalizer3(__dec_obj143,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            # 1763 "05type.c"
            __dec_obj144=type_245->mParamNames;
            type_245->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_280);
            come_call_finalizer3(__dec_obj144,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            # 1764 "05type.c"
            type_245->mVarArgs=var_args_282;
            # 1765 "05type.c"
            type_245->mExtern=extern__209;
            come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_279,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_281,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2283 "05type.c"
            # 1767 "05type.c"
            if(function_pointer_flag_247) {
                # 1768 "05type.c"
                info->p++;
                # 1769 "05type.c"
                skip_spaces_and_lf(info);
                # 1771 "05type.c"
                skip_pointer_attribute(info);
                # 1778 "05type.c"
                # 1773 "05type.c"
                if(_if_conditional425=*info->p==42||*info->p==94,                _if_conditional425) {
                    # 1774 "05type.c"
                    info->p++;
                    # 1775 "05type.c"
                    skip_spaces_and_lf(info);
                }
                # 1778 "05type.c"
                skip_pointer_attribute(info);
                # 1780 "05type.c"
                # 1804 "05type.c"
                # 1781 "05type.c"
                if(_if_conditional426=map$2charphsTypephp_operator_load_element(info->types,type_name_194),                _if_conditional426) {
                    # 1782 "05type.c"
                    __dec_obj145=result_type_283;
                    result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_194)))));
                    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value334,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1783 "05type.c"
                    result_type_283->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_283->mClass->mName), "05type.c", 1783, 46));
                }
                else {
                    # 1804 "05type.c"
                    # 1786 "05type.c"
                    if(_if_conditional427=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_194)),                    _if_conditional427) {
                        # 1792 "05type.c"
                        for(                        i_284=0;                        i_284<list$1charph_length(info->generics_type_names);                        i_284++                        ){
                            # 1791 "05type.c"
                            # 1788 "05type.c"
                            if(_if_conditional428=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_284), "05type.c", 1788, 47)),type_name_194),                            _if_conditional428) {
                                # 1789 "05type.c"
                                __dec_obj146=result_type_283;
                                result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value335=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1789, "sType")))),((char*)(right_value336=xsprintf("generics_type%d",i_284))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value335,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1804 "05type.c"
                        # 1793 "05type.c"
                        if(_if_conditional429=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_194)),                        _if_conditional429) {
                            # 1799 "05type.c"
                            for(                            i_285=0;                            i_285<list$1charph_length(info->method_generics_type_names);                            i_285++                            ){
                                # 1798 "05type.c"
                                # 1795 "05type.c"
                                if(_if_conditional430=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_285), "05type.c", 1795, 48)),type_name_194),                                _if_conditional430) {
                                    # 1796 "05type.c"
                                    __dec_obj147=result_type_283;
                                    result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1796, "sType")))),((char*)(right_value339=xsprintf("mgenerics_type%d",i_285))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1801 "05type.c"
                            __dec_obj148=result_type_283;
                            result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value341=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1801, "sType")))),type_name_194,(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1804 "05type.c"
                result_type_283->mConstant=result_type_283->mConstant||constant_196;
                # 1805 "05type.c"
                __dec_obj149=result_type_283->mAlignas;
                result_type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                # 1806 "05type.c"
                result_type_283->mComeMemCore=result_type_283->mComeMemCore||come_mem_core__211;
                # 1807 "05type.c"
                result_type_283->mRegister=register__199;
                # 1808 "05type.c"
                result_type_283->mUnsigned=result_type_283->mUnsigned||unsigned__200;
                # 1809 "05type.c"
                result_type_283->mVolatile=volatile__198;
                # 1810 "05type.c"
                result_type_283->mStatic=result_type_283->mStatic||static__197;
                # 1811 "05type.c"
                result_type_283->mRecord=result_type_283->mRecord||record__195;
                # 1812 "05type.c"
                result_type_283->mExtern=result_type_283->mExtern||extern__209;
                # 1813 "05type.c"
                result_type_283->mInline=result_type_283->mInline||inline__210;
                # 1814 "05type.c"
                result_type_283->mRestrict=result_type_283->mRestrict||restrict__204;
                # 1815 "05type.c"
                result_type_283->mLongLong=result_type_283->mLongLong||long_long_202;
                # 1816 "05type.c"
                result_type_283->mLong=result_type_283->mLong||long__201;
                # 1817 "05type.c"
                result_type_283->mShort=result_type_283->mShort||short__203;
                # 1818 "05type.c"
                result_type_283->mPointerNum+=pointer_num_240;
                # 1819 "05type.c"
                result_type_283->mHeap=result_type_283->mHeap||heap_241;
                # 1832 "05type.c"
                # 1821 "05type.c"
                if(_if_conditional431=xisalnum(*info->p)||*info->p==95,                _if_conditional431) {
                    # 1822 "05type.c"
                    __dec_obj150=var_name_246;
                    var_name_246=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1822, 49),__exception_result_var_b38=((char*)(right_value343=parse_word(info))), come_pop_stackframe(), __exception_result_var_b38));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1826 "05type.c"
                    # 1823 "05type.c"
                    if(_if_conditional432=*info->p==40,                    _if_conditional432) {
                        # 1824 "05type.c"
                        __result162__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value345=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value344=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1824, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_283),(char*)come_increment_ref_count(var_name_246),(_Bool)0)));
                        come_call_finalizer3(result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value344,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value345,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result162__;
                    }
                }
                else {
                    # 1828 "05type.c"
                    # 1829 "05type.c"
                    num_anonymous_var_name_286++;
                    # 1830 "05type.c"
                    __dec_obj151=var_name_246;
                    var_name_246=(char*)come_increment_ref_count(((char*)(right_value346=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_286))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1832 "05type.c"
                expected_next_character(41,info);
                # 1834 "05type.c"
                multiple_assign_var4=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value347=parse_params(info,(_Bool)0)));
                param_types_287=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var4->v1);
                param_names_288=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v2);
                param_default_parametors_289=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v3);
                var_args_290=multiple_assign_var4->v4;
                come_call_finalizer3(right_value347,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1836 "05type.c"
                __dec_obj152=type_245;
                type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1836, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1838 "05type.c"
                __dec_obj153=type_245->mResultType;
                type_245->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value351=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value350=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1838, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_283)))));
                come_call_finalizer3(__dec_obj153,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value350,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value351,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1839 "05type.c"
                __dec_obj154=type_245->mParamTypes;
                type_245->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_287);
                come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                # 1840 "05type.c"
                __dec_obj155=type_245->mParamNames;
                type_245->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_288);
                come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                # 1841 "05type.c"
                type_245->mVarArgs=var_args_290;
                # 1842 "05type.c"
                type_245->mExtern=extern__209;
                come_call_finalizer3(result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_287,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2283 "05type.c"
                # 1844 "05type.c"
                if(_if_conditional433=string_operator_equals(type_name_194,"__typeof__")&&*info->p==40,                _if_conditional433) {
                    # 1845 "05type.c"
                    info->p++;
                    # 1846 "05type.c"
                    skip_spaces_and_lf(info);
                    # 1848 "05type.c"
                    exp_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=expression_v13(info))));
                    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1850 "05type.c"
                    expected_next_character(41,info);
                    # 1857 "05type.c"
                    # 1852 "05type.c"
                    if(_if_conditional434=!node_compile(exp_291,info),                    _if_conditional434) {
                        # 1853 "05type.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1854 "05type.c"
                        __result164__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value354=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value353=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 1854, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_291) { exp_291 = come_decrement_ref_count2(exp_291, ((struct sNode*)exp_291)->finalize, ((struct sNode*)exp_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value354,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result164__;
                    }
                    # 1857 "05type.c"
                    come_value_292=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value355=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value355,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1858 "05type.c"
                    dec_stack_ptr(1,info);
                    # 1860 "05type.c"
                    __dec_obj157=type_245;
                    type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_clone(come_value_292->type))));
                    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value356,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1904 "05type.c"
                    # 1862 "05type.c"
                    if(parse_variable_name) {
                        # 1863 "05type.c"
                        parse_sharp_v5(info);
                        # 1870 "05type.c"
                        # 1865 "05type.c"
                        if(_if_conditional439=var_name_between_brace_251&&*info->p==40,                        _if_conditional439) {
                            # 1866 "05type.c"
                            info->p++;
                            # 1867 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1887 "05type.c"
                        # 1870 "05type.c"
                        if(_if_conditional440=*info->p==58,                        _if_conditional440) {
                            # 1871 "05type.c"
                            __dec_obj158=var_name_246;
                            var_name_246=(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string(""))));
                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1887 "05type.c"
                            # 1873 "05type.c"
                            if(anonymous_name_214) {
                                # 1874 "05type.c"
                                # 1875 "05type.c"
                                num_anonymous_var_name_293++;
                                # 1876 "05type.c"
                                __dec_obj159=var_name_246;
                                var_name_246=(char*)come_increment_ref_count(((char*)(right_value358=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_293))));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1887 "05type.c"
                                # 1878 "05type.c"
                                if(_if_conditional442=xisalnum(*info->p)||*info->p==95,                                _if_conditional442) {
                                    # 1879 "05type.c"
                                    __dec_obj160=var_name_246;
                                    var_name_246=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1879, 50),__exception_result_var_b39=((char*)(right_value359=parse_word(info))), come_pop_stackframe(), __exception_result_var_b39));
                                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1882 "05type.c"
                                    # 1883 "05type.c"
                                    num_anonymous_var_name_294++;
                                    # 1884 "05type.c"
                                    __dec_obj161=var_name_246;
                                    var_name_246=(char*)come_increment_ref_count(((char*)(right_value360=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_294))));
                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1892 "05type.c"
                        # 1887 "05type.c"
                        if(_if_conditional443=var_name_between_brace_251&&*info->p==41,                        _if_conditional443) {
                            # 1888 "05type.c"
                            info->p++;
                            # 1889 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1903 "05type.c"
                        # 1892 "05type.c"
                        if(_if_conditional444=*info->p==58,                        _if_conditional444) {
                            # 1893 "05type.c"
                            info->p++;
                            # 1894 "05type.c"
                            skip_spaces_and_lf(info);
                            # 1896 "05type.c"
                            no_comma_295=info->no_comma;
                            # 1897 "05type.c"
                            info->no_comma=(_Bool)1;
                            # 1898 "05type.c"
                            node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=expression_v13(info))));
                            if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1899 "05type.c"
                            info->no_comma=no_comma_295;
                            # 1901 "05type.c"
                            __dec_obj162=type_245->mSizeNum;
                            type_245->mSizeNum=(struct sNode*)come_increment_ref_count(node_296);
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_291) { exp_291 = come_decrement_ref_count2(exp_291, ((struct sNode*)exp_291)->finalize, ((struct sNode*)exp_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 2071 "05type.c"
                    # 1906 "05type.c"
                    if(_if_conditional445=map$2charphsTypephp_operator_load_element(info->types,type_name_194),                    _if_conditional445) {
                        # 1907 "05type.c"
                        __dec_obj163=type_245;
                        type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_194)))));
                        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value362,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1908 "05type.c"
                        type_245->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_245->mClass->mName), "05type.c", 1908, 51));
                        # 1909 "05type.c"
                        __dec_obj164=type_245->mOriginalTypeName;
                        type_245->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value363=__builtin_string(type_name_194))));
                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1910 "05type.c"
                        type_245->mOriginalTypeNamePointerNum=pointer_num_240;
                        # 1912 "05type.c"
                        type_245->mConstant=type_245->mConstant||constant_196;
                        # 1913 "05type.c"
                        __dec_obj165=type_245->mAlignas;
                        type_245->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1914 "05type.c"
                        type_245->mComeMemCore=type_245->mComeMemCore||come_mem_core__211;
                        # 1915 "05type.c"
                        type_245->mRegister=register__199;
                        # 1916 "05type.c"
                        type_245->mUnsigned=type_245->mUnsigned||unsigned__200;
                        # 1917 "05type.c"
                        type_245->mVolatile=volatile__198;
                        # 1918 "05type.c"
                        type_245->mStatic=type_245->mStatic||static__197;
                        # 1919 "05type.c"
                        type_245->mRecord=type_245->mRecord||record__195;
                        # 1920 "05type.c"
                        type_245->mExtern=type_245->mExtern||extern__209;
                        # 1921 "05type.c"
                        type_245->mInline=type_245->mInline||inline__210;
                        # 1922 "05type.c"
                        type_245->mRestrict=type_245->mRestrict||restrict__204;
                        # 1923 "05type.c"
                        type_245->mLongLong=type_245->mLongLong||long_long_202;
                        # 1924 "05type.c"
                        type_245->mLong=type_245->mLong||long__201;
                        # 1925 "05type.c"
                        type_245->mShort=type_245->mShort||short__203;
                        # 1926 "05type.c"
                        type_245->mPointerNum+=pointer_num_240;
                        # 1927 "05type.c"
                        type_245->mHeap=type_245->mHeap||heap_241;
                    }
                    else {
                        # 2071 "05type.c"
                        # 1929 "05type.c"
                        if(_if_conditional446=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_194)),                        _if_conditional446) {
                            # 1936 "05type.c"
                            for(                            i_297=0;                            i_297<list$1charph_length(info->generics_type_names);                            i_297++                            ){
                                # 1934 "05type.c"
                                # 1931 "05type.c"
                                if(_if_conditional447=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_297), "05type.c", 1931, 52)),type_name_194),                                _if_conditional447) {
                                    # 1932 "05type.c"
                                    __dec_obj166=type_245;
                                    type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value366=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value364=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1932, "sType")))),((char*)(right_value365=xsprintf("generics_type%d",i_297))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value364,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value366,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1936 "05type.c"
                            type_245->mConstant=type_245->mConstant||constant_196;
                            # 1937 "05type.c"
                            __dec_obj167=type_245->mAlignas;
                            type_245->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1938 "05type.c"
                            type_245->mComeMemCore=type_245->mComeMemCore||come_mem_core__211;
                            # 1939 "05type.c"
                            type_245->mRegister=register__199;
                            # 1940 "05type.c"
                            type_245->mUnsigned=type_245->mUnsigned||unsigned__200;
                            # 1941 "05type.c"
                            type_245->mVolatile=volatile__198;
                            # 1942 "05type.c"
                            type_245->mStatic=type_245->mStatic||static__197;
                            # 1943 "05type.c"
                            type_245->mRecord=type_245->mRecord||record__195;
                            # 1944 "05type.c"
                            type_245->mExtern=type_245->mExtern||extern__209;
                            # 1945 "05type.c"
                            type_245->mInline=type_245->mInline||inline__210;
                            # 1946 "05type.c"
                            type_245->mRestrict=type_245->mRestrict||restrict__204;
                            # 1947 "05type.c"
                            type_245->mLongLong=type_245->mLongLong||long_long_202;
                            # 1948 "05type.c"
                            type_245->mLong=type_245->mLong||long__201;
                            # 1949 "05type.c"
                            type_245->mShort=type_245->mShort||short__203;
                            # 1950 "05type.c"
                            type_245->mPointerNum+=pointer_num_240;
                            # 1951 "05type.c"
                            type_245->mHeap=type_245->mHeap||heap_241;
                        }
                        else {
                            # 2071 "05type.c"
                            # 1953 "05type.c"
                            if(_if_conditional448=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_194)),                            _if_conditional448) {
                                # 1960 "05type.c"
                                for(                                i_298=0;                                i_298<list$1charph_length(info->method_generics_type_names);                                i_298++                                ){
                                    # 1958 "05type.c"
                                    # 1955 "05type.c"
                                    if(_if_conditional449=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_298), "05type.c", 1955, 53)),type_name_194),                                    _if_conditional449) {
                                        # 1956 "05type.c"
                                        __dec_obj168=type_245;
                                        type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value367=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1956, "sType")))),((char*)(right_value368=xsprintf("mgenerics_type%d",i_298))),(_Bool)0,info))));
                                        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value367,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1960 "05type.c"
                                type_245->mConstant=type_245->mConstant||constant_196;
                                # 1961 "05type.c"
                                __dec_obj169=type_245->mAlignas;
                                type_245->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1962 "05type.c"
                                type_245->mComeMemCore=type_245->mComeMemCore||come_mem_core__211;
                                # 1963 "05type.c"
                                type_245->mRegister=register__199;
                                # 1964 "05type.c"
                                type_245->mUnsigned=type_245->mUnsigned||unsigned__200;
                                # 1965 "05type.c"
                                type_245->mVolatile=volatile__198;
                                # 1966 "05type.c"
                                type_245->mStatic=type_245->mStatic||static__197;
                                # 1967 "05type.c"
                                type_245->mRecord=type_245->mRecord||record__195;
                                # 1968 "05type.c"
                                type_245->mExtern=type_245->mExtern||extern__209;
                                # 1969 "05type.c"
                                type_245->mInline=type_245->mInline||inline__210;
                                # 1970 "05type.c"
                                type_245->mRestrict=type_245->mRestrict||restrict__204;
                                # 1971 "05type.c"
                                type_245->mLongLong=type_245->mLongLong||long_long_202;
                                # 1972 "05type.c"
                                type_245->mLong=type_245->mLong||long__201;
                                # 1973 "05type.c"
                                type_245->mShort=type_245->mShort||short__203;
                                # 1974 "05type.c"
                                type_245->mPointerNum+=pointer_num_240;
                                # 1975 "05type.c"
                                type_245->mHeap=type_245->mHeap||heap_241;
                            }
                            else {
                                # 2071 "05type.c"
                                # 1977 "05type.c"
                                if(_if_conditional450=*info->p==60,                                _if_conditional450) {
                                    # 1978 "05type.c"
                                    info->p++;
                                    # 1979 "05type.c"
                                    skip_spaces_and_lf(info);
                                    # 1986 "05type.c"
                                    # 1981 "05type.c"
                                    if(_if_conditional451=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_194)==((void*)0),                                    _if_conditional451) {
                                        # 1983 "05type.c"
                                        __result165__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value371=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value370=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1983, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value370,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value371,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        return __result165__;
                                    }
                                    # 1986 "05type.c"
                                    __dec_obj170=type_245;
                                    type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value372=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1986, "sType")))),type_name_194,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value372,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value373,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2013 "05type.c"
                                    while(_while_condtional47=(_Bool)1,                                    _while_condtional47) {
                                        # 1991 "05type.c"
                                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value374=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_299=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                        var_name_300=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                        err_301=multiple_assign_var5->v3;
                                        come_call_finalizer3(right_value374,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1995 "05type.c"
                                        # 1991 "05type.c"
                                        if(_if_conditional452=!err_301,                                        _if_conditional452) {
                                            # 1992 "05type.c"
                                            __result166__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value376=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value375=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1992, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer3(generics_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_300 = come_decrement_ref_count2(var_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value375,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value376,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            return __result166__;
                                        }
                                        # 1995 "05type.c"
                                        list$1sTypeph_push_back(type_245->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_299));
                                        # 2011 "05type.c"
                                        # 1997 "05type.c"
                                        if(_if_conditional453=*info->p==44,                                        _if_conditional453) {
                                            # 1998 "05type.c"
                                            info->p++;
                                            # 1999 "05type.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 2011 "05type.c"
                                            # 2001 "05type.c"
                                            if(_if_conditional454=*info->p==62,                                            _if_conditional454) {
                                                # 2002 "05type.c"
                                                info->p++;
                                                # 2003 "05type.c"
                                                skip_spaces_and_lf(info);
                                                # 2005 "05type.c"
                                                come_call_finalizer3(generics_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_300 = come_decrement_ref_count2(var_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 2008 "05type.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 2009 "05type.c"
                                                __result167__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value378=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value377=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2009, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer3(generics_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_300 = come_decrement_ref_count2(var_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value377,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value378,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                return __result167__;
                                            }
                                        }
                                        come_call_finalizer3(generics_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_300 = come_decrement_ref_count2(var_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2025 "05type.c"
                                    # 2013 "05type.c"
                                    if(_if_conditional455=is_contained_generics_class(type_245,info),                                    _if_conditional455) {
                                        # 2014 "05type.c"
                                        __dec_obj171=type_245;
                                        type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=solve_generics(type_245,info->generics_type,info))));
                                        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value379,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 2023 "05type.c"
                                        # 2017 "05type.c"
                                        if(_if_conditional456=!output_generics_struct(type_245,type_245,info),                                        _if_conditional456) {
                                            # 2019 "05type.c"
                                            new_name_302=(char*)come_increment_ref_count(((char*)(right_value380=create_generics_name(type_245,info))));
                                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 2020 "05type.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_302);
                                            # 2021 "05type.c"
                                            exit(7);
                                            new_name_302 = come_decrement_ref_count2(new_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 2025 "05type.c"
                                    type_245->mConstant=type_245->mConstant||constant_196;
                                    # 2026 "05type.c"
                                    __dec_obj172=type_245->mAlignas;
                                    type_245->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2027 "05type.c"
                                    type_245->mComeMemCore=type_245->mComeMemCore||come_mem_core__211;
                                    # 2028 "05type.c"
                                    type_245->mRegister=register__199;
                                    # 2029 "05type.c"
                                    type_245->mUnsigned=type_245->mUnsigned||unsigned__200;
                                    # 2030 "05type.c"
                                    type_245->mVolatile=volatile__198;
                                    # 2031 "05type.c"
                                    type_245->mStatic=type_245->mStatic||static__197;
                                    # 2032 "05type.c"
                                    type_245->mRecord=type_245->mRecord||record__195;
                                    # 2033 "05type.c"
                                    type_245->mExtern=type_245->mExtern||extern__209;
                                    # 2034 "05type.c"
                                    type_245->mInline=type_245->mInline||inline__210;
                                    # 2035 "05type.c"
                                    type_245->mRestrict=type_245->mRestrict||restrict__204;
                                    # 2036 "05type.c"
                                    type_245->mLongLong=type_245->mLongLong||long_long_202;
                                    # 2037 "05type.c"
                                    type_245->mLong=type_245->mLong||long__201;
                                    # 2038 "05type.c"
                                    type_245->mShort=type_245->mShort||short__203;
                                    # 2039 "05type.c"
                                    type_245->mPointerNum+=pointer_num_240;
                                    # 2040 "05type.c"
                                    type_245->mHeap=type_245->mHeap||heap_241;
                                }
                                else {
                                    # 2051 "05type.c"
                                    # 2043 "05type.c"
                                    if(struct__205) {
                                        # 2044 "05type.c"
                                        klass_303=map$2charphsClassphp_operator_load_element(info->classes,type_name_194);
                                        # 2049 "05type.c"
                                        # 2046 "05type.c"
                                        if(_if_conditional458=klass_303==((void*)0)&&*info->p!=60,                                        _if_conditional458) {
                                            # 2047 "05type.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_194),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value388=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value387=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2047, "sClass")))),type_name_194,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer3(right_value387,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value388,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 2051 "05type.c"
                                    __dec_obj173=type_245;
                                    type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value389=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2051, "sType")))),type_name_194,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value389,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value390,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2053 "05type.c"
                                    type_245->mConstant=type_245->mConstant||constant_196;
                                    # 2054 "05type.c"
                                    __dec_obj174=type_245->mAlignas;
                                    type_245->mAlignas=(struct sNode*)come_increment_ref_count(alignas__212);
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2055 "05type.c"
                                    type_245->mComeMemCore=type_245->mComeMemCore||come_mem_core__211;
                                    # 2056 "05type.c"
                                    type_245->mRegister=register__199;
                                    # 2057 "05type.c"
                                    type_245->mUnsigned=type_245->mUnsigned||unsigned__200;
                                    # 2058 "05type.c"
                                    type_245->mVolatile=volatile__198;
                                    # 2059 "05type.c"
                                    type_245->mStatic=type_245->mStatic||static__197;
                                    # 2060 "05type.c"
                                    type_245->mRecord=type_245->mRecord||record__195;
                                    # 2061 "05type.c"
                                    type_245->mExtern=type_245->mExtern||extern__209;
                                    # 2062 "05type.c"
                                    type_245->mInline=type_245->mInline||inline__210;
                                    # 2063 "05type.c"
                                    type_245->mRestrict=type_245->mRestrict||restrict__204;
                                    # 2064 "05type.c"
                                    type_245->mLongLong=type_245->mLongLong||long_long_202;
                                    # 2065 "05type.c"
                                    type_245->mLong=type_245->mLong||long__201;
                                    # 2066 "05type.c"
                                    type_245->mShort=type_245->mShort||short__203;
                                    # 2067 "05type.c"
                                    type_245->mPointerNum+=pointer_num_240;
                                    # 2068 "05type.c"
                                    type_245->mHeap=type_245->mHeap||heap_241;
                                }
                            }
                        }
                    }
                    # 2071 "05type.c"
                    skip_pointer_attribute(info);
                    # 2085 "05type.c"
                    while(_while_condtional56=*info->p==42,                    _while_condtional56) {
                        # 2074 "05type.c"
                        info->p++;
                        # 2075 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2077 "05type.c"
                        skip_pointer_attribute(info);
                        # 2079 "05type.c"
                        type_245->mPointerNum++;
                        # 2083 "05type.c"
                        # 2080 "05type.c"
                        if(type_245->mNoSolvedGenericsType->v1) {
                            # 2081 "05type.c"
                            type_245->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2095 "05type.c"
                    # 2085 "05type.c"
                    if(_if_conditional507=*info->p==37,                    _if_conditional507) {
                        # 2086 "05type.c"
                        info->p++;
                        # 2087 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2089 "05type.c"
                        type_245->mHeap=(_Bool)1;
                        # 2093 "05type.c"
                        # 2090 "05type.c"
                        if(type_245->mNoSolvedGenericsType->v1) {
                            # 2091 "05type.c"
                            type_245->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2106 "05type.c"
                    # 2095 "05type.c"
                    if(_if_conditional509=*info->p==38,                    _if_conditional509) {
                        # 2096 "05type.c"
                        info->p++;
                        # 2097 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2099 "05type.c"
                        type_245->mNoHeap=(_Bool)1;
                        # 2104 "05type.c"
                        # 2101 "05type.c"
                        if(type_245->mNoSolvedGenericsType->v1) {
                            # 2102 "05type.c"
                            type_245->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2119 "05type.c"
                    # 2106 "05type.c"
                    if(_if_conditional511=*info->p==63,                    _if_conditional511) {
                        # 2107 "05type.c"
                        info->p++;
                        # 2117 "05type.c"
                        # 2109 "05type.c"
                        if(_if_conditional512=*info->p==63,                        _if_conditional512) {
                            # 2110 "05type.c"
                            info->p++;
                            # 2111 "05type.c"
                            type_245->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2114 "05type.c"
                            type_245->mNullValue=(_Bool)1;
                        }
                        # 2117 "05type.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2126 "05type.c"
                    # 2119 "05type.c"
                    if(_if_conditional513=*info->p==96,                    _if_conditional513) {
                        # 2120 "05type.c"
                        info->p++;
                        # 2121 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2123 "05type.c"
                        type_245->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2126 "05type.c"
                    skip_pointer_attribute(info);
                    # 2141 "05type.c"
                    while(_while_condtional57=*info->p==42,                    _while_condtional57) {
                        # 2129 "05type.c"
                        info->p++;
                        # 2130 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2132 "05type.c"
                        skip_pointer_attribute(info);
                        # 2134 "05type.c"
                        type_245->mPointerNum++;
                        # 2139 "05type.c"
                        # 2136 "05type.c"
                        if(type_245->mNoSolvedGenericsType->v1) {
                            # 2137 "05type.c"
                            type_245->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2151 "05type.c"
                    # 2141 "05type.c"
                    if(_if_conditional515=*info->p==37,                    _if_conditional515) {
                        # 2142 "05type.c"
                        info->p++;
                        # 2143 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2145 "05type.c"
                        type_245->mHeap=(_Bool)1;
                        # 2149 "05type.c"
                        # 2146 "05type.c"
                        if(type_245->mNoSolvedGenericsType->v1) {
                            # 2147 "05type.c"
                            type_245->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2191 "05type.c"
                    # 2151 "05type.c"
                    if(_if_conditional517=parse_multiple_type&&*info->p==44,                    _if_conditional517) {
                        # 2152 "05type.c"
                        types_348=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value392=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value391=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2152, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value391,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value392,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2154 "05type.c"
                        list$1sTypeph_push_back(types_348,(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(type_245)))));
                        come_call_finalizer3(right_value393,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2169 "05type.c"
                        while(_while_condtional58=*info->p==44,                        _while_condtional58) {
                            # 2157 "05type.c"
                            info->p++;
                            # 2158 "05type.c"
                            skip_spaces_and_lf(info);
                            # 2160 "05type.c"
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value394=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_349=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_350=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_351=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value394,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 2166 "05type.c"
                            # 2162 "05type.c"
                            if(_if_conditional518=!err_351,                            _if_conditional518) {
                                # 2163 "05type.c"
                                __result192__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value396=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value395=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2163, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer3(type2_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value395,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value396,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result192__;
                            }
                            # 2166 "05type.c"
                            list$1sTypeph_push_back(types_348,(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_clone(type2_349)))));
                            come_call_finalizer3(right_value397,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2169 "05type.c"
                        num_tuples_352=list$1sTypeph_length(types_348);
                        # 2171 "05type.c"
                        __dec_obj175=type_245;
                        type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value400=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value398=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2171, "sType")))),((char*)(right_value399=xsprintf("tuple%d",num_tuples_352))),(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value398,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value400,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2172 "05type.c"
                        type_245->mPointerNum++;
                        # 2173 "05type.c"
                        type_245->mHeap=(_Bool)1;
                        # 2179 "05type.c"
                        for(                        o2_saved_353=(struct list$1sTypeph*)come_increment_ref_count((types_348)),it_354=list$1sTypeph_begin((o2_saved_353));                        !list$1sTypeph_end((o2_saved_353));                        it_354=list$1sTypeph_next((o2_saved_353))                        ){
                            # 2176 "05type.c"
                            list$1sTypeph_push_back(type_245->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value401=sType_clone(it_354)))));
                            come_call_finalizer3(right_value401,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_353,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 2190 "05type.c"
                        # 2179 "05type.c"
                        if(_if_conditional519=is_contained_generics_class(type_245,info),                        _if_conditional519) {
                            # 2180 "05type.c"
                            __dec_obj176=type_245;
                            type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value402=solve_generics(type_245,info->generics_type,info))));
                            come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value402,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2189 "05type.c"
                            # 2183 "05type.c"
                            if(_if_conditional520=!output_generics_struct(type_245,type_245,info),                            _if_conditional520) {
                                # 2185 "05type.c"
                                new_name_355=(char*)come_increment_ref_count(((char*)(right_value403=create_generics_name(type_245,info))));
                                right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2186 "05type.c"
                                printf("output generics is failed(%s)\n",new_name_355);
                                # 2187 "05type.c"
                                exit(9);
                                new_name_355 = come_decrement_ref_count2(new_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer3(types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2282 "05type.c"
                    # 2240 "05type.c"
                    if(parse_variable_name) {
                        # 2241 "05type.c"
                        parse_sharp_v5(info);
                        # 2248 "05type.c"
                        # 2243 "05type.c"
                        if(_if_conditional522=var_name_between_brace_251&&*info->p==40,                        _if_conditional522) {
                            # 2244 "05type.c"
                            info->p++;
                            # 2245 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2265 "05type.c"
                        # 2248 "05type.c"
                        if(_if_conditional523=*info->p==58,                        _if_conditional523) {
                            # 2249 "05type.c"
                            __dec_obj177=var_name_246;
                            var_name_246=(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string(""))));
                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2265 "05type.c"
                            # 2251 "05type.c"
                            if(anonymous_name_214) {
                                # 2252 "05type.c"
                                # 2253 "05type.c"
                                num_anonymous_var_name_356++;
                                # 2254 "05type.c"
                                __dec_obj178=var_name_246;
                                var_name_246=(char*)come_increment_ref_count(((char*)(right_value405=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_356))));
                                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2265 "05type.c"
                                # 2256 "05type.c"
                                if(_if_conditional525=xisalnum(*info->p)||*info->p==95,                                _if_conditional525) {
                                    # 2257 "05type.c"
                                    __dec_obj179=var_name_246;
                                    var_name_246=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 2257, 54),__exception_result_var_b40=((char*)(right_value406=parse_word(info))), come_pop_stackframe(), __exception_result_var_b40));
                                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2260 "05type.c"
                                    # 2261 "05type.c"
                                    num_anonymous_var_name_357++;
                                    # 2262 "05type.c"
                                    __dec_obj180=var_name_246;
                                    var_name_246=(char*)come_increment_ref_count(((char*)(right_value407=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_357))));
                                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2270 "05type.c"
                        # 2265 "05type.c"
                        if(_if_conditional526=var_name_between_brace_251&&*info->p==41,                        _if_conditional526) {
                            # 2266 "05type.c"
                            info->p++;
                            # 2267 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2281 "05type.c"
                        # 2270 "05type.c"
                        if(_if_conditional527=*info->p==58,                        _if_conditional527) {
                            # 2271 "05type.c"
                            info->p++;
                            # 2272 "05type.c"
                            skip_spaces_and_lf(info);
                            # 2274 "05type.c"
                            no_comma_358=info->no_comma;
                            # 2275 "05type.c"
                            info->no_comma=(_Bool)1;
                            # 2276 "05type.c"
                            node_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=expression_v13(info))));
                            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2277 "05type.c"
                            info->no_comma=no_comma_358;
                            # 2279 "05type.c"
                            __dec_obj181=type_245->mSizeNum;
                            type_245->mSizeNum=(struct sNode*)come_increment_ref_count(node_359);
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2283 "05type.c"
    parse_sharp_v5(info);
    # 2308 "05type.c"
    while(_while_condtional59=*info->p==91,    _while_condtional59) {
        # 2286 "05type.c"
        info->p++;
        # 2287 "05type.c"
        skip_spaces_and_lf(info);
        # 2288 "05type.c"
        parse_sharp_v5(info);
        # 2290 "05type.c"
        skip_pointer_attribute(info);
        # 2300 "05type.c"
        # 2292 "05type.c"
        if(_if_conditional528=*info->p==93,        _if_conditional528) {
            # 2293 "05type.c"
            info->p++;
            # 2294 "05type.c"
            skip_spaces_and_lf(info);
            # 2296 "05type.c"
            type_245->mArrayPointerType=(_Bool)1;
            # 2297 "05type.c"
            type_245->mPointerNum++;
            # 2298 "05type.c"
            break;
        }
        # 2300 "05type.c"
        parse_sharp_v5(info);
        # 2302 "05type.c"
        node_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_v13(info))));
        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2303 "05type.c"
        list$1sNodeph_push_back(type_245->mArrayNum,(struct sNode*)come_increment_ref_count(node_360));
        # 2304 "05type.c"
        parse_sharp_v5(info);
        # 2306 "05type.c"
        expected_next_character(93,info);
        if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2308 "05type.c"
    asm_name_361=(char*)come_increment_ref_count(((char*)(right_value410=parse_attribute(info))));
    right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2310 "05type.c"
    __dec_obj182=type_245->mAsmName;
    type_245->mAsmName=(char*)come_increment_ref_count(asm_name_361);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2312 "05type.c"
    parse_sharp_v5(info);
    # 2314 "05type.c"
    __result193__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value412=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value411=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2314, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_245),(char*)come_increment_ref_count(var_name_246),(_Bool)1)));
    type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_361 = come_decrement_ref_count2(asm_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value411,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value412,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result193__;
    type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__212) { alignas__212 = come_decrement_ref_count2(alignas__212, ((struct sNode*)alignas__212)->finalize, ((struct sNode*)alignas__212)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_246 = come_decrement_ref_count2(var_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_361 = come_decrement_ref_count2(asm_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_266;
unsigned int hash_267;
unsigned int it_268;
_Bool _while_condtional45;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sType* __result144__;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sType* __result145__;
struct sType* __result146__;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_266, 0, sizeof(struct sType*));
memset(&hash_267, 0, sizeof(unsigned int));
memset(&it_268, 0, sizeof(unsigned int));
                # 1519 "/usr/local/include/neo-c.h"
                # 1520 "/usr/local/include/neo-c.h"
                memset(&default_value_266,0,sizeof(struct sType*));
                # 1522 "/usr/local/include/neo-c.h"
                hash_267=string_get_hash_key(((char*)key))%self->size;
                # 1523 "/usr/local/include/neo-c.h"
                it_268=hash_267;
                # 1547 "/usr/local/include/neo-c.h"
                while(_while_condtional45=(_Bool)1,                _while_condtional45) {
                    # 1545 "/usr/local/include/neo-c.h"
                    # 1526 "/usr/local/include/neo-c.h"
                    if(_if_conditional407=self->item_existance[it_268],                    _if_conditional407) {
                        # 1533 "/usr/local/include/neo-c.h"
                        # 1528 "/usr/local/include/neo-c.h"
                        if(_if_conditional408=string_equals(self->keys[it_268],key),                        _if_conditional408) {
                            # 1530 "/usr/local/include/neo-c.h"
                            __result144__ = __result_obj__ = self->items[it_268];
                            come_call_finalizer3(default_value_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result144__;
                        }
                        # 1533 "/usr/local/include/neo-c.h"
                        it_268++;
                        # 1541 "/usr/local/include/neo-c.h"
                        # 1535 "/usr/local/include/neo-c.h"
                        if(_if_conditional409=it_268>=self->size,                        _if_conditional409) {
                            # 1536 "/usr/local/include/neo-c.h"
                            it_268=0;
                        }
                        else {
                            # 1541 "/usr/local/include/neo-c.h"
                            # 1538 "/usr/local/include/neo-c.h"
                            if(_if_conditional410=it_268==hash_267,                            _if_conditional410) {
                                # 1539 "/usr/local/include/neo-c.h"
                                __result145__ = __result_obj__ = default_value_266;
                                come_call_finalizer3(default_value_266,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result145__;
                            }
                        }
                    }
                    else {
                        # 1543 "/usr/local/include/neo-c.h"
                        __result146__ = __result_obj__ = default_value_266;
                        come_call_finalizer3(default_value_266,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result146__;
                    }
                }
                # 1547 "/usr/local/include/neo-c.h"
                __result147__ = __result_obj__ = default_value_266;
                come_call_finalizer3(default_value_266,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result147__;
                come_call_finalizer3(default_value_266,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_271;
_Bool _if_conditional416;
_Bool __result155__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(char*));
                    # 733 "/usr/local/include/neo-c.h"
                    for(                    it_271=list$1charph_begin(self);                    !list$1charph_end(self);                    it_271=list$1charph_next(self)                    ){
                        # 731 "/usr/local/include/neo-c.h"
                        # 728 "/usr/local/include/neo-c.h"
                        if(_if_conditional416=string_operator_equals(it_271,item),                        _if_conditional416) {
                            # 729 "/usr/local/include/neo-c.h"
                            __result155__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result155__;
                        }
                    }
                    # 733 "/usr/local/include/neo-c.h"
                    __result156__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result156__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional412;
char* result_269;
char* __result148__;
_Bool _if_conditional413;
char* __result149__;
char* result_270;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_269, 0, sizeof(char*));
memset(&result_270, 0, sizeof(char*));
                        # 281 "/usr/local/include/neo-c.h"
                        # 276 "/usr/local/include/neo-c.h"
                        if(_if_conditional412=self==((void*)0),                        _if_conditional412) {
                            # 277 "/usr/local/include/neo-c.h"
                            # 278 "/usr/local/include/neo-c.h"
                            memset(&result_269,0,sizeof(char*));
                            # 279 "/usr/local/include/neo-c.h"
                            __result148__ = __result_obj__ = result_269;
                            return __result148__;
                        }
                        # 281 "/usr/local/include/neo-c.h"
                        self->it=self->head;
                        # 287 "/usr/local/include/neo-c.h"
                        # 283 "/usr/local/include/neo-c.h"
                        if(self->it) {
                            # 284 "/usr/local/include/neo-c.h"
                            __result149__ = __result_obj__ = self->it->item;
                            return __result149__;
                        }
                        # 287 "/usr/local/include/neo-c.h"
                        # 288 "/usr/local/include/neo-c.h"
                        memset(&result_270,0,sizeof(char*));
                        # 289 "/usr/local/include/neo-c.h"
                        __result150__ = __result_obj__ = result_270;
                        return __result150__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "/usr/local/include/neo-c.h"
                        __result151__ = self==((void*)0)||self->it==((void*)0);
                        return __result151__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional414;
char* result_272;
char* __result152__;
_Bool _if_conditional415;
char* __result153__;
char* result_273;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_272, 0, sizeof(char*));
memset(&result_273, 0, sizeof(char*));
                        # 299 "/usr/local/include/neo-c.h"
                        # 293 "/usr/local/include/neo-c.h"
                        if(_if_conditional414=self==((void*)0)||self->it==((void*)0),                        _if_conditional414) {
                            # 294 "/usr/local/include/neo-c.h"
                            # 295 "/usr/local/include/neo-c.h"
                            memset(&result_272,0,sizeof(char*));
                            # 296 "/usr/local/include/neo-c.h"
                            __result152__ = __result_obj__ = result_272;
                            return __result152__;
                        }
                        # 299 "/usr/local/include/neo-c.h"
                        self->it=self->it->next;
                        # 305 "/usr/local/include/neo-c.h"
                        # 301 "/usr/local/include/neo-c.h"
                        if(self->it) {
                            # 302 "/usr/local/include/neo-c.h"
                            __result153__ = __result_obj__ = self->it->item;
                            return __result153__;
                        }
                        # 305 "/usr/local/include/neo-c.h"
                        # 306 "/usr/local/include/neo-c.h"
                        memset(&result_273,0,sizeof(char*));
                        # 307 "/usr/local/include/neo-c.h"
                        __result154__ = __result_obj__ = result_273;
                        return __result154__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional418;
int __result157__;
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 354 "/usr/local/include/neo-c.h"
                        # 351 "/usr/local/include/neo-c.h"
                        if(_if_conditional418=self==((void*)0),                        _if_conditional418) {
                            # 352 "/usr/local/include/neo-c.h"
                            __result157__ = 0;
                            return __result157__;
                        }
                        # 354 "/usr/local/include/neo-c.h"
                        __result158__ = self->len;
                        return __result158__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional419;
struct list_item$1charph* it_275;
int i_276;
_Bool _while_condtional46;
_Bool _if_conditional420;
char* __result159__;
char* default_value_277;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1charph*));
memset(&i_276, 0, sizeof(int));
memset(&default_value_277, 0, sizeof(char*));
                            # 673 "/usr/local/include/neo-c.h"
                            # 669 "/usr/local/include/neo-c.h"
                            if(_if_conditional419=position<0,                            _if_conditional419) {
                                # 670 "/usr/local/include/neo-c.h"
                                position+=self->len;
                            }
                            # 673 "/usr/local/include/neo-c.h"
                            it_275=self->head;
                            # 674 "/usr/local/include/neo-c.h"
                            i_276=0;
                            # 681 "/usr/local/include/neo-c.h"
                            while(_while_condtional46=it_275!=((void*)0),                            _while_condtional46) {
                                # 679 "/usr/local/include/neo-c.h"
                                # 676 "/usr/local/include/neo-c.h"
                                if(_if_conditional420=position==i_276,                                _if_conditional420) {
                                    # 677 "/usr/local/include/neo-c.h"
                                    __result159__ = __result_obj__ = it_275->item;
                                    return __result159__;
                                }
                                # 679 "/usr/local/include/neo-c.h"
                                it_275=it_275->next;
                                # 680 "/usr/local/include/neo-c.h"
                                i_276++;
                            }
                            # 683 "/usr/local/include/neo-c.h"
                            # 684 "/usr/local/include/neo-c.h"
                            memset(&default_value_277,0,sizeof(char*));
                            # 685 "/usr/local/include/neo-c.h"
                            __result160__ = __result_obj__ = default_value_277;
                            default_value_277 = come_decrement_ref_count2(default_value_277, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result160__;
                            default_value_277 = come_decrement_ref_count2(default_value_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj141;
struct tuple1$1sTypeph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1710 "/usr/local/include/neo-c.h"
                __dec_obj141=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1712 "/usr/local/include/neo-c.h"
                __result161__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result161__;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj156;
struct tuple3$3sTypepcharphbool* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1771 "/usr/local/include/neo-c.h"
                            self->v1=v1;
                            # 1772 "/usr/local/include/neo-c.h"
                            __dec_obj156=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1773 "/usr/local/include/neo-c.h"
                            self->v3=v3;
                            # 1775 "/usr/local/include/neo-c.h"
                            __result163__ = __result_obj__ = self;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result163__;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional435=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional435) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional436=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional436) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional437=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional437) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional459;
unsigned int hash_321;
unsigned int it_322;
_Bool _while_condtional50;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool same_key_exist_339;
char* it2_342;
_Bool _if_conditional502;
_Bool _if_conditional503;
struct map$2charphsClassph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_321, 0, sizeof(unsigned int));
memset(&it_322, 0, sizeof(unsigned int));
memset(&same_key_exist_339, 0, sizeof(_Bool));
memset(&it2_342, 0, sizeof(char*));
                                                # 1368 "/usr/local/include/neo-c.h"
                                                # 1365 "/usr/local/include/neo-c.h"
                                                if(_if_conditional459=self->len*10>=self->size,                                                _if_conditional459) {
                                                    # 1366 "/usr/local/include/neo-c.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1368 "/usr/local/include/neo-c.h"
                                                hash_321=string_get_hash_key(key)%self->size;
                                                # 1369 "/usr/local/include/neo-c.h"
                                                it_322=hash_321;
                                                # 1427 "/usr/local/include/neo-c.h"
                                                while(_while_condtional50=(_Bool)1,                                                _while_condtional50) {
                                                    # 1425 "/usr/local/include/neo-c.h"
                                                    # 1372 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional471=self->item_existance[it_322],                                                    _if_conditional471) {
                                                        # 1395 "/usr/local/include/neo-c.h"
                                                        # 1374 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional472=string_equals(self->keys[it_322],key),                                                        _if_conditional472) {
                                                            # 1385 "/usr/local/include/neo-c.h"
                                                            # 1376 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional473=1,                                                            _if_conditional473) {
                                                                # 1377 "/usr/local/include/neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_322]);
                                                                # 1378 "/usr/local/include/neo-c.h"
                                                                self->keys[it_322] = come_decrement_ref_count2(self->keys[it_322], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1379 "/usr/local/include/neo-c.h"
                                                                self->keys[it_322]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1382 "/usr/local/include/neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_322]);
                                                                # 1383 "/usr/local/include/neo-c.h"
                                                                self->keys[it_322]=key;
                                                            }
                                                            # 1392 "/usr/local/include/neo-c.h"
                                                            # 1385 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional493=1,                                                            _if_conditional493) {
                                                                # 1386 "/usr/local/include/neo-c.h"
                                                                come_call_finalizer3(self->items[it_322],sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 1387 "/usr/local/include/neo-c.h"
                                                                self->items[it_322]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1390 "/usr/local/include/neo-c.h"
                                                                self->items[it_322]=item;
                                                            }
                                                            # 1392 "/usr/local/include/neo-c.h"
                                                            break;
                                                        }
                                                        # 1395 "/usr/local/include/neo-c.h"
                                                        it_322++;
                                                        # 1405 "/usr/local/include/neo-c.h"
                                                        # 1397 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional494=it_322>=self->size,                                                        _if_conditional494) {
                                                            # 1398 "/usr/local/include/neo-c.h"
                                                            it_322=0;
                                                        }
                                                        else {
                                                            # 1405 "/usr/local/include/neo-c.h"
                                                            # 1400 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional495=it_322==hash_321,                                                            _if_conditional495) {
                                                                # 1401 "/usr/local/include/neo-c.h"
                                                                printf("unexpected error in map.insert\n");
                                                                # 1402 "/usr/local/include/neo-c.h"
                                                                stackframe();
                                                                # 1403 "/usr/local/include/neo-c.h"
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 1407 "/usr/local/include/neo-c.h"
                                                        self->item_existance[it_322]=(_Bool)1;
                                                        # 1414 "/usr/local/include/neo-c.h"
                                                        # 1408 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional496=1,                                                        _if_conditional496) {
                                                            # 1409 "/usr/local/include/neo-c.h"
                                                            self->keys[it_322]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1412 "/usr/local/include/neo-c.h"
                                                            self->keys[it_322]=key;
                                                        }
                                                        # 1421 "/usr/local/include/neo-c.h"
                                                        # 1414 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional497=1,                                                        _if_conditional497) {
                                                            # 1415 "/usr/local/include/neo-c.h"
                                                            self->items[it_322]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1418 "/usr/local/include/neo-c.h"
                                                            self->items[it_322]=item;
                                                        }
                                                        # 1421 "/usr/local/include/neo-c.h"
                                                        self->len++;
                                                        # 1423 "/usr/local/include/neo-c.h"
                                                        break;
                                                    }
                                                }
                                                # 1427 "/usr/local/include/neo-c.h"
                                                same_key_exist_339=(_Bool)0;
                                                # 1435 "/usr/local/include/neo-c.h"
                                                for(                                                it2_342=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_342=list$1charp_next(self->key_list)                                                ){
                                                    # 1433 "/usr/local/include/neo-c.h"
                                                    # 1430 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional502=string_equals(it2_342,key),                                                    _if_conditional502) {
                                                        # 1431 "/usr/local/include/neo-c.h"
                                                        same_key_exist_339=(_Bool)1;
                                                    }
                                                }
                                                # 1439 "/usr/local/include/neo-c.h"
                                                # 1435 "/usr/local/include/neo-c.h"
                                                if(_if_conditional503=!same_key_exist_339,                                                _if_conditional503) {
                                                    # 1436 "/usr/local/include/neo-c.h"
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                # 1439 "/usr/local/include/neo-c.h"
                                                __result191__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result191__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_304;
void* right_value381;
char** keys_305;
void* right_value382;
struct sClass** items_306;
void* right_value383;
_Bool* item_existance_307;
int len_308;
char* it_311;
struct sClass* default_value_314;
struct sClass* it2_317;
unsigned int hash_318;
int n_319;
_Bool _while_condtional49;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
struct sClass* default_value_320;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_304, 0, sizeof(int));
right_value381 = (void*)0;
memset(&keys_305, 0, sizeof(char**));
right_value382 = (void*)0;
memset(&items_306, 0, sizeof(struct sClass**));
right_value383 = (void*)0;
memset(&item_existance_307, 0, sizeof(_Bool*));
memset(&len_308, 0, sizeof(int));
memset(&it_311, 0, sizeof(char*));
memset(&default_value_314, 0, sizeof(struct sClass*));
memset(&it2_317, 0, sizeof(struct sClass*));
memset(&hash_318, 0, sizeof(unsigned int));
memset(&n_319, 0, sizeof(int));
memset(&default_value_320, 0, sizeof(struct sClass*));
                                                        # 1312 "/usr/local/include/neo-c.h"
                                                        size_304=self->size*10;
                                                        # 1313 "/usr/local/include/neo-c.h"
                                                        keys_305=(char**)come_increment_ref_count(((char**)(right_value381=(char**)come_calloc(1, sizeof(char*)*(1*(size_304)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                                                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1314 "/usr/local/include/neo-c.h"
                                                        items_306=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value382=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_304)), "/usr/local/include/neo-c.h", 1314, "sClass*%"))));
                                                        come_call_finalizer3(right_value382,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 1315 "/usr/local/include/neo-c.h"
                                                        item_existance_307=(_Bool*)come_increment_ref_count(((_Bool*)(right_value383=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_304)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                                                        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1317 "/usr/local/include/neo-c.h"
                                                        len_308=0;
                                                        # 1352 "/usr/local/include/neo-c.h"
                                                        for(                                                        it_311=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_311=map$2charphsClassph_next(self)                                                        ){
                                                            # 1320 "/usr/local/include/neo-c.h"
                                                            # 1321 "/usr/local/include/neo-c.h"
                                                            memset(&default_value_314,0,sizeof(struct sClass*));
                                                            # 1322 "/usr/local/include/neo-c.h"
                                                            it2_317=map$2charphsClassph_at(self,it_311,default_value_314);
                                                            # 1323 "/usr/local/include/neo-c.h"
                                                            hash_318=string_get_hash_key(it_311)%size_304;
                                                            # 1324 "/usr/local/include/neo-c.h"
                                                            n_319=hash_318;
                                                            # 1350 "/usr/local/include/neo-c.h"
                                                            while(_while_condtional49=(_Bool)1,                                                            _while_condtional49) {
                                                                # 1349 "/usr/local/include/neo-c.h"
                                                                # 1327 "/usr/local/include/neo-c.h"
                                                                if(_if_conditional468=item_existance_307[n_319],                                                                _if_conditional468) {
                                                                    # 1329 "/usr/local/include/neo-c.h"
                                                                    n_319++;
                                                                    # 1339 "/usr/local/include/neo-c.h"
                                                                    # 1331 "/usr/local/include/neo-c.h"
                                                                    if(_if_conditional469=n_319>=size_304,                                                                    _if_conditional469) {
                                                                        # 1332 "/usr/local/include/neo-c.h"
                                                                        n_319=0;
                                                                    }
                                                                    else {
                                                                        # 1339 "/usr/local/include/neo-c.h"
                                                                        # 1334 "/usr/local/include/neo-c.h"
                                                                        if(_if_conditional470=n_319==hash_318,                                                                        _if_conditional470) {
                                                                            # 1335 "/usr/local/include/neo-c.h"
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            # 1336 "/usr/local/include/neo-c.h"
                                                                            stackframe();
                                                                            # 1337 "/usr/local/include/neo-c.h"
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1341 "/usr/local/include/neo-c.h"
                                                                    item_existance_307[n_319]=(_Bool)1;
                                                                    # 1342 "/usr/local/include/neo-c.h"
                                                                    keys_305[n_319]=it_311;
                                                                    # 1343 "/usr/local/include/neo-c.h"
                                                                    # 1344 "/usr/local/include/neo-c.h"
                                                                    items_306[n_319]=map$2charphsClassph_at(self,it_311,default_value_320);
                                                                    # 1346 "/usr/local/include/neo-c.h"
                                                                    len_308++;
                                                                    # 1347 "/usr/local/include/neo-c.h"
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        # 1352 "/usr/local/include/neo-c.h"
                                                        come_free((char*)self->items);
                                                        # 1353 "/usr/local/include/neo-c.h"
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        # 1354 "/usr/local/include/neo-c.h"
                                                        come_free((char*)self->keys);
                                                        # 1356 "/usr/local/include/neo-c.h"
                                                        self->keys=keys_305;
                                                        # 1357 "/usr/local/include/neo-c.h"
                                                        self->items=items_306;
                                                        # 1358 "/usr/local/include/neo-c.h"
                                                        self->item_existance=item_existance_307;
                                                        # 1360 "/usr/local/include/neo-c.h"
                                                        self->size=size_304;
                                                        # 1361 "/usr/local/include/neo-c.h"
                                                        self->len=len_308;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional460;
char* result_309;
char* __result168__;
_Bool _if_conditional461;
char* __result169__;
char* result_310;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_309, 0, sizeof(char*));
memset(&result_310, 0, sizeof(char*));
                                                            # 1279 "/usr/local/include/neo-c.h"
                                                            # 1274 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional460=self==((void*)0),                                                            _if_conditional460) {
                                                                # 1275 "/usr/local/include/neo-c.h"
                                                                # 1276 "/usr/local/include/neo-c.h"
                                                                memset(&result_309,0,sizeof(char*));
                                                                # 1277 "/usr/local/include/neo-c.h"
                                                                __result168__ = __result_obj__ = result_309;
                                                                return __result168__;
                                                            }
                                                            # 1279 "/usr/local/include/neo-c.h"
                                                            self->key_list->it=self->key_list->head;
                                                            # 1285 "/usr/local/include/neo-c.h"
                                                            # 1281 "/usr/local/include/neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1282 "/usr/local/include/neo-c.h"
                                                                __result169__ = __result_obj__ = self->key_list->it->item;
                                                                return __result169__;
                                                            }
                                                            # 1285 "/usr/local/include/neo-c.h"
                                                            # 1286 "/usr/local/include/neo-c.h"
                                                            memset(&result_310,0,sizeof(char*));
                                                            # 1287 "/usr/local/include/neo-c.h"
                                                            __result170__ = __result_obj__ = result_310;
                                                            return __result170__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1308 "/usr/local/include/neo-c.h"
                                                            __result171__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result171__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional462;
char* result_312;
char* __result172__;
_Bool _if_conditional463;
char* __result173__;
char* result_313;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_312, 0, sizeof(char*));
memset(&result_313, 0, sizeof(char*));
                                                            # 1296 "/usr/local/include/neo-c.h"
                                                            # 1291 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional462=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional462) {
                                                                # 1292 "/usr/local/include/neo-c.h"
                                                                # 1293 "/usr/local/include/neo-c.h"
                                                                memset(&result_312,0,sizeof(char*));
                                                                # 1294 "/usr/local/include/neo-c.h"
                                                                __result172__ = __result_obj__ = result_312;
                                                                return __result172__;
                                                            }
                                                            # 1296 "/usr/local/include/neo-c.h"
                                                            self->key_list->it=self->key_list->it->next;
                                                            # 1302 "/usr/local/include/neo-c.h"
                                                            # 1298 "/usr/local/include/neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1299 "/usr/local/include/neo-c.h"
                                                                __result173__ = __result_obj__ = self->key_list->it->item;
                                                                return __result173__;
                                                            }
                                                            # 1302 "/usr/local/include/neo-c.h"
                                                            # 1303 "/usr/local/include/neo-c.h"
                                                            memset(&result_313,0,sizeof(char*));
                                                            # 1304 "/usr/local/include/neo-c.h"
                                                            __result174__ = __result_obj__ = result_313;
                                                            return __result174__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_315;
unsigned int it_316;
_Bool _while_condtional48;
_Bool _if_conditional464;
_Bool _if_conditional465;
struct sClass* __result175__;
_Bool _if_conditional466;
_Bool _if_conditional467;
struct sClass* __result176__;
struct sClass* __result177__;
struct sClass* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_315, 0, sizeof(unsigned int));
memset(&it_316, 0, sizeof(unsigned int));
                                                                # 1201 "/usr/local/include/neo-c.h"
                                                                hash_315=string_get_hash_key(((char*)key))%self->size;
                                                                # 1202 "/usr/local/include/neo-c.h"
                                                                it_316=hash_315;
                                                                # 1226 "/usr/local/include/neo-c.h"
                                                                while(_while_condtional48=(_Bool)1,                                                                _while_condtional48) {
                                                                    # 1224 "/usr/local/include/neo-c.h"
                                                                    # 1205 "/usr/local/include/neo-c.h"
                                                                    if(_if_conditional464=self->item_existance[it_316],                                                                    _if_conditional464) {
                                                                        # 1212 "/usr/local/include/neo-c.h"
                                                                        # 1207 "/usr/local/include/neo-c.h"
                                                                        if(_if_conditional465=string_equals(self->keys[it_316],key),                                                                        _if_conditional465) {
                                                                            # 1209 "/usr/local/include/neo-c.h"
                                                                            __result175__ = __result_obj__ = self->items[it_316];
                                                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result175__;
                                                                        }
                                                                        # 1212 "/usr/local/include/neo-c.h"
                                                                        it_316++;
                                                                        # 1220 "/usr/local/include/neo-c.h"
                                                                        # 1214 "/usr/local/include/neo-c.h"
                                                                        if(_if_conditional466=it_316>=self->size,                                                                        _if_conditional466) {
                                                                            # 1215 "/usr/local/include/neo-c.h"
                                                                            it_316=0;
                                                                        }
                                                                        else {
                                                                            # 1220 "/usr/local/include/neo-c.h"
                                                                            # 1217 "/usr/local/include/neo-c.h"
                                                                            if(_if_conditional467=it_316==hash_315,                                                                            _if_conditional467) {
                                                                                # 1218 "/usr/local/include/neo-c.h"
                                                                                __result176__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result176__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1222 "/usr/local/include/neo-c.h"
                                                                        __result177__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result177__;
                                                                    }
                                                                }
                                                                # 1226 "/usr/local/include/neo-c.h"
                                                                __result178__ = __result_obj__ = default_value;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result178__;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_323;
struct list_item$1charp* it_324;
_Bool _while_condtional51;
_Bool _if_conditional474;
struct list$1charp* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_323, 0, sizeof(int));
memset(&it_324, 0, sizeof(struct list_item$1charp*));
                                                                    # 435 "/usr/local/include/neo-c.h"
                                                                    it2_323=0;
                                                                    # 436 "/usr/local/include/neo-c.h"
                                                                    it_324=self->head;
                                                                    # 447 "/usr/local/include/neo-c.h"
                                                                    while(_while_condtional51=it_324!=((void*)0),                                                                    _while_condtional51) {
                                                                        # 442 "/usr/local/include/neo-c.h"
                                                                        # 438 "/usr/local/include/neo-c.h"
                                                                        if(_if_conditional474=string_equals(it_324->item,item),                                                                        _if_conditional474) {
                                                                            # 439 "/usr/local/include/neo-c.h"
                                                                            list$1charp_delete(self,it2_323,it2_323+1);
                                                                            # 440 "/usr/local/include/neo-c.h"
                                                                            break;
                                                                        }
                                                                        # 442 "/usr/local/include/neo-c.h"
                                                                        it2_323++;
                                                                        # 444 "/usr/local/include/neo-c.h"
                                                                        it_324=it_324->next;
                                                                    }
                                                                    # 447 "/usr/local/include/neo-c.h"
                                                                    __result182__ = __result_obj__ = self;
                                                                    return __result182__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
int tmp_325;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
struct list$1charp* __result179__;
_Bool _if_conditional481;
_Bool _if_conditional482;
struct list_item$1charp* it_328;
int i_329;
_Bool _while_condtional53;
_Bool _if_conditional483;
struct list_item$1charp* prev_it_330;
_Bool _if_conditional484;
_Bool _if_conditional485;
struct list_item$1charp* it_331;
int i_332;
_Bool _while_condtional54;
_Bool _if_conditional486;
_Bool _if_conditional487;
struct list_item$1charp* prev_it_333;
struct list_item$1charp* it_334;
struct list_item$1charp* head_prev_it_335;
struct list_item$1charp* tail_it_336;
int i_337;
_Bool _while_condtional55;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
struct list_item$1charp* prev_it_338;
_Bool _if_conditional491;
_Bool _if_conditional492;
struct list$1charp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_325, 0, sizeof(int));
memset(&it_328, 0, sizeof(struct list_item$1charp*));
memset(&i_329, 0, sizeof(int));
memset(&prev_it_330, 0, sizeof(struct list_item$1charp*));
memset(&it_331, 0, sizeof(struct list_item$1charp*));
memset(&i_332, 0, sizeof(int));
memset(&prev_it_333, 0, sizeof(struct list_item$1charp*));
memset(&it_334, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_335, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_336, 0, sizeof(struct list_item$1charp*));
memset(&i_337, 0, sizeof(int));
memset(&prev_it_338, 0, sizeof(struct list_item$1charp*));
                                                                                # 454 "/usr/local/include/neo-c.h"
                                                                                # 451 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional475=head<0,                                                                                _if_conditional475) {
                                                                                    # 452 "/usr/local/include/neo-c.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 458 "/usr/local/include/neo-c.h"
                                                                                # 454 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional476=tail<0,                                                                                _if_conditional476) {
                                                                                    # 455 "/usr/local/include/neo-c.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 464 "/usr/local/include/neo-c.h"
                                                                                # 458 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional477=head>tail,                                                                                _if_conditional477) {
                                                                                    # 459 "/usr/local/include/neo-c.h"
                                                                                    tmp_325=tail;
                                                                                    # 460 "/usr/local/include/neo-c.h"
                                                                                    tail=head;
                                                                                    # 461 "/usr/local/include/neo-c.h"
                                                                                    head=tmp_325;
                                                                                }
                                                                                # 468 "/usr/local/include/neo-c.h"
                                                                                # 464 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional478=head<0,                                                                                _if_conditional478) {
                                                                                    # 465 "/usr/local/include/neo-c.h"
                                                                                    head=0;
                                                                                }
                                                                                # 472 "/usr/local/include/neo-c.h"
                                                                                # 468 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional479=tail>self->len,                                                                                _if_conditional479) {
                                                                                    # 469 "/usr/local/include/neo-c.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 476 "/usr/local/include/neo-c.h"
                                                                                # 472 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional480=head==tail,                                                                                _if_conditional480) {
                                                                                    # 473 "/usr/local/include/neo-c.h"
                                                                                    __result179__ = __result_obj__ = self;
                                                                                    return __result179__;
                                                                                }
                                                                                # 571 "/usr/local/include/neo-c.h"
                                                                                # 476 "/usr/local/include/neo-c.h"
                                                                                if(_if_conditional481=head==0&&tail==self->len,                                                                                _if_conditional481) {
                                                                                    # 478 "/usr/local/include/neo-c.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 571 "/usr/local/include/neo-c.h"
                                                                                    # 480 "/usr/local/include/neo-c.h"
                                                                                    if(_if_conditional482=head==0,                                                                                    _if_conditional482) {
                                                                                        # 481 "/usr/local/include/neo-c.h"
                                                                                        it_328=self->head;
                                                                                        # 482 "/usr/local/include/neo-c.h"
                                                                                        i_329=0;
                                                                                        # 504 "/usr/local/include/neo-c.h"
                                                                                        while(_while_condtional53=it_328!=((void*)0),                                                                                        _while_condtional53) {
                                                                                            # 503 "/usr/local/include/neo-c.h"
                                                                                            # 484 "/usr/local/include/neo-c.h"
                                                                                            if(_if_conditional483=i_329<tail,                                                                                            _if_conditional483) {
                                                                                                # 485 "/usr/local/include/neo-c.h"
                                                                                                prev_it_330=it_328;
                                                                                                # 487 "/usr/local/include/neo-c.h"
                                                                                                it_328=it_328->next;
                                                                                                # 488 "/usr/local/include/neo-c.h"
                                                                                                i_329++;
                                                                                                # 490 "/usr/local/include/neo-c.h"
                                                                                                come_call_finalizer3(prev_it_330,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                # 492 "/usr/local/include/neo-c.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 503 "/usr/local/include/neo-c.h"
                                                                                                # 494 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional484=i_329==tail,                                                                                                _if_conditional484) {
                                                                                                    # 495 "/usr/local/include/neo-c.h"
                                                                                                    self->head=it_328;
                                                                                                    # 496 "/usr/local/include/neo-c.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 497 "/usr/local/include/neo-c.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 500 "/usr/local/include/neo-c.h"
                                                                                                    it_328=it_328->next;
                                                                                                    # 501 "/usr/local/include/neo-c.h"
                                                                                                    i_329++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 571 "/usr/local/include/neo-c.h"
                                                                                        # 505 "/usr/local/include/neo-c.h"
                                                                                        if(_if_conditional485=tail==self->len,                                                                                        _if_conditional485) {
                                                                                            # 506 "/usr/local/include/neo-c.h"
                                                                                            it_331=self->head;
                                                                                            # 507 "/usr/local/include/neo-c.h"
                                                                                            i_332=0;
                                                                                            # 529 "/usr/local/include/neo-c.h"
                                                                                            while(_while_condtional54=it_331!=((void*)0),                                                                                            _while_condtional54) {
                                                                                                # 514 "/usr/local/include/neo-c.h"
                                                                                                # 509 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional486=i_332==head,                                                                                                _if_conditional486) {
                                                                                                    # 510 "/usr/local/include/neo-c.h"
                                                                                                    self->tail=it_331->prev;
                                                                                                    # 511 "/usr/local/include/neo-c.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 528 "/usr/local/include/neo-c.h"
                                                                                                # 514 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional487=i_332>=head,                                                                                                _if_conditional487) {
                                                                                                    # 515 "/usr/local/include/neo-c.h"
                                                                                                    prev_it_333=it_331;
                                                                                                    # 517 "/usr/local/include/neo-c.h"
                                                                                                    it_331=it_331->next;
                                                                                                    # 518 "/usr/local/include/neo-c.h"
                                                                                                    i_332++;
                                                                                                    # 520 "/usr/local/include/neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_333,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 522 "/usr/local/include/neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 525 "/usr/local/include/neo-c.h"
                                                                                                    it_331=it_331->next;
                                                                                                    # 526 "/usr/local/include/neo-c.h"
                                                                                                    i_332++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 531 "/usr/local/include/neo-c.h"
                                                                                            it_334=self->head;
                                                                                            # 533 "/usr/local/include/neo-c.h"
                                                                                            head_prev_it_335=((void*)0);
                                                                                            # 534 "/usr/local/include/neo-c.h"
                                                                                            tail_it_336=((void*)0);
                                                                                            # 537 "/usr/local/include/neo-c.h"
                                                                                            i_337=0;
                                                                                            # 563 "/usr/local/include/neo-c.h"
                                                                                            while(_while_condtional55=it_334!=((void*)0),                                                                                            _while_condtional55) {
                                                                                                # 542 "/usr/local/include/neo-c.h"
                                                                                                # 539 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional488=i_337==head,                                                                                                _if_conditional488) {
                                                                                                    # 540 "/usr/local/include/neo-c.h"
                                                                                                    head_prev_it_335=it_334->prev;
                                                                                                }
                                                                                                # 546 "/usr/local/include/neo-c.h"
                                                                                                # 542 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional489=i_337==tail,                                                                                                _if_conditional489) {
                                                                                                    # 543 "/usr/local/include/neo-c.h"
                                                                                                    tail_it_336=it_334;
                                                                                                }
                                                                                                # 561 "/usr/local/include/neo-c.h"
                                                                                                # 546 "/usr/local/include/neo-c.h"
                                                                                                if(_if_conditional490=i_337>=head&&i_337<tail,                                                                                                _if_conditional490) {
                                                                                                    # 548 "/usr/local/include/neo-c.h"
                                                                                                    prev_it_338=it_334;
                                                                                                    # 550 "/usr/local/include/neo-c.h"
                                                                                                    it_334=it_334->next;
                                                                                                    # 551 "/usr/local/include/neo-c.h"
                                                                                                    i_337++;
                                                                                                    # 553 "/usr/local/include/neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_338,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 555 "/usr/local/include/neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 558 "/usr/local/include/neo-c.h"
                                                                                                    it_334=it_334->next;
                                                                                                    # 559 "/usr/local/include/neo-c.h"
                                                                                                    i_337++;
                                                                                                }
                                                                                            }
                                                                                            # 566 "/usr/local/include/neo-c.h"
                                                                                            # 563 "/usr/local/include/neo-c.h"
                                                                                            if(_if_conditional491=head_prev_it_335!=((void*)0),                                                                                            _if_conditional491) {
                                                                                                # 564 "/usr/local/include/neo-c.h"
                                                                                                head_prev_it_335->next=tail_it_336;
                                                                                            }
                                                                                            # 569 "/usr/local/include/neo-c.h"
                                                                                            # 566 "/usr/local/include/neo-c.h"
                                                                                            if(_if_conditional492=tail_it_336!=((void*)0),                                                                                            _if_conditional492) {
                                                                                                # 567 "/usr/local/include/neo-c.h"
                                                                                                tail_it_336->prev=head_prev_it_335;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                # 571 "/usr/local/include/neo-c.h"
                                                                                __result181__ = __result_obj__ = self;
                                                                                return __result181__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_326;
_Bool _while_condtional52;
struct list_item$1charp* prev_it_327;
struct list$1charp* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_326, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_327, 0, sizeof(struct list_item$1charp*));
                                                                                        # 420 "/usr/local/include/neo-c.h"
                                                                                        it_326=self->head;
                                                                                        # 427 "/usr/local/include/neo-c.h"
                                                                                        while(_while_condtional52=it_326!=((void*)0),                                                                                        _while_condtional52) {
                                                                                            # 422 "/usr/local/include/neo-c.h"
                                                                                            prev_it_327=it_326;
                                                                                            # 423 "/usr/local/include/neo-c.h"
                                                                                            it_326=it_326->next;
                                                                                            # 424 "/usr/local/include/neo-c.h"
                                                                                            come_call_finalizer3(prev_it_327,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 427 "/usr/local/include/neo-c.h"
                                                                                        self->head=((void*)0);
                                                                                        # 428 "/usr/local/include/neo-c.h"
                                                                                        self->tail=((void*)0);
                                                                                        # 430 "/usr/local/include/neo-c.h"
                                                                                        self->len=0;
                                                                                        # 432 "/usr/local/include/neo-c.h"
                                                                                        __result180__ = __result_obj__ = self;
                                                                                        return __result180__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional498;
char* result_340;
char* __result183__;
_Bool _if_conditional499;
char* __result184__;
char* result_341;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_340, 0, sizeof(char*));
memset(&result_341, 0, sizeof(char*));
                                                    # 281 "/usr/local/include/neo-c.h"
                                                    # 276 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional498=self==((void*)0),                                                    _if_conditional498) {
                                                        # 277 "/usr/local/include/neo-c.h"
                                                        # 278 "/usr/local/include/neo-c.h"
                                                        memset(&result_340,0,sizeof(char*));
                                                        # 279 "/usr/local/include/neo-c.h"
                                                        __result183__ = __result_obj__ = result_340;
                                                        return __result183__;
                                                    }
                                                    # 281 "/usr/local/include/neo-c.h"
                                                    self->it=self->head;
                                                    # 287 "/usr/local/include/neo-c.h"
                                                    # 283 "/usr/local/include/neo-c.h"
                                                    if(self->it) {
                                                        # 284 "/usr/local/include/neo-c.h"
                                                        __result184__ = __result_obj__ = self->it->item;
                                                        return __result184__;
                                                    }
                                                    # 287 "/usr/local/include/neo-c.h"
                                                    # 288 "/usr/local/include/neo-c.h"
                                                    memset(&result_341,0,sizeof(char*));
                                                    # 289 "/usr/local/include/neo-c.h"
                                                    __result185__ = __result_obj__ = result_341;
                                                    return __result185__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 311 "/usr/local/include/neo-c.h"
                                                    __result186__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result186__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional500;
char* result_343;
char* __result187__;
_Bool _if_conditional501;
char* __result188__;
char* result_344;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_343, 0, sizeof(char*));
memset(&result_344, 0, sizeof(char*));
                                                    # 299 "/usr/local/include/neo-c.h"
                                                    # 293 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional500=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional500) {
                                                        # 294 "/usr/local/include/neo-c.h"
                                                        # 295 "/usr/local/include/neo-c.h"
                                                        memset(&result_343,0,sizeof(char*));
                                                        # 296 "/usr/local/include/neo-c.h"
                                                        __result187__ = __result_obj__ = result_343;
                                                        return __result187__;
                                                    }
                                                    # 299 "/usr/local/include/neo-c.h"
                                                    self->it=self->it->next;
                                                    # 305 "/usr/local/include/neo-c.h"
                                                    # 301 "/usr/local/include/neo-c.h"
                                                    if(self->it) {
                                                        # 302 "/usr/local/include/neo-c.h"
                                                        __result188__ = __result_obj__ = self->it->item;
                                                        return __result188__;
                                                    }
                                                    # 305 "/usr/local/include/neo-c.h"
                                                    # 306 "/usr/local/include/neo-c.h"
                                                    memset(&result_344,0,sizeof(char*));
                                                    # 307 "/usr/local/include/neo-c.h"
                                                    __result189__ = __result_obj__ = result_344;
                                                    return __result189__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional504;
void* right_value384;
struct list_item$1charp* litem_345;
_Bool _if_conditional505;
void* right_value385;
struct list_item$1charp* litem_346;
void* right_value386;
struct list_item$1charp* litem_347;
struct list$1charp* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
memset(&litem_345, 0, sizeof(struct list_item$1charp*));
right_value385 = (void*)0;
memset(&litem_346, 0, sizeof(struct list_item$1charp*));
right_value386 = (void*)0;
memset(&litem_347, 0, sizeof(struct list_item$1charp*));
                                                        # 247 "/usr/local/include/neo-c.h"
                                                        # 216 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional504=self->len==0,                                                        _if_conditional504) {
                                                            # 217 "/usr/local/include/neo-c.h"
                                                            litem_345=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value384=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charp"))));
                                                            come_call_finalizer3(right_value384,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 219 "/usr/local/include/neo-c.h"
                                                            litem_345->prev=((void*)0);
                                                            # 220 "/usr/local/include/neo-c.h"
                                                            litem_345->next=((void*)0);
                                                            # 221 "/usr/local/include/neo-c.h"
                                                            litem_345->item=item;
                                                            # 223 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_345;
                                                            # 224 "/usr/local/include/neo-c.h"
                                                            self->head=litem_345;
                                                        }
                                                        else {
                                                            # 247 "/usr/local/include/neo-c.h"
                                                            # 226 "/usr/local/include/neo-c.h"
                                                            if(_if_conditional505=self->len==1,                                                            _if_conditional505) {
                                                                # 227 "/usr/local/include/neo-c.h"
                                                                litem_346=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value385=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value385,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 229 "/usr/local/include/neo-c.h"
                                                                litem_346->prev=self->head;
                                                                # 230 "/usr/local/include/neo-c.h"
                                                                litem_346->next=((void*)0);
                                                                # 231 "/usr/local/include/neo-c.h"
                                                                litem_346->item=item;
                                                                # 233 "/usr/local/include/neo-c.h"
                                                                self->tail=litem_346;
                                                                # 234 "/usr/local/include/neo-c.h"
                                                                self->head->next=litem_346;
                                                            }
                                                            else {
                                                                # 237 "/usr/local/include/neo-c.h"
                                                                litem_347=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value386=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value386,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 239 "/usr/local/include/neo-c.h"
                                                                litem_347->prev=self->tail;
                                                                # 240 "/usr/local/include/neo-c.h"
                                                                litem_347->next=((void*)0);
                                                                # 241 "/usr/local/include/neo-c.h"
                                                                litem_347->item=item;
                                                                # 243 "/usr/local/include/neo-c.h"
                                                                self->tail->next=litem_347;
                                                                # 244 "/usr/local/include/neo-c.h"
                                                                self->tail=litem_347;
                                                            }
                                                        }
                                                        # 247 "/usr/local/include/neo-c.h"
                                                        self->len++;
                                                        # 249 "/usr/local/include/neo-c.h"
                                                        __result190__ = __result_obj__ = self;
                                                        return __result190__;
}

