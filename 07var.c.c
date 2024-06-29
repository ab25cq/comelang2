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

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

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

char* backtrace_parse_word(struct sInfo* info);

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

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

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
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated(struct sLoadNode* self);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
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
                        # 114 "/usr/local/include/neo-c.h"
                        it_48=self->head;
                        # 120 "/usr/local/include/neo-c.h"
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            # 116 "/usr/local/include/neo-c.h"
                            prev_it_49=it_48;
                            # 117 "/usr/local/include/neo-c.h"
                            it_48=it_48->next;
                            # 118 "/usr/local/include/neo-c.h"
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
                        # 114 "/usr/local/include/neo-c.h"
                        it_50=self->head;
                        # 120 "/usr/local/include/neo-c.h"
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            # 116 "/usr/local/include/neo-c.h"
                            prev_it_51=it_50;
                            # 117 "/usr/local/include/neo-c.h"
                            it_50=it_50->next;
                            # 118 "/usr/local/include/neo-c.h"
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
                        # 114 "/usr/local/include/neo-c.h"
                        it_52=self->head;
                        # 120 "/usr/local/include/neo-c.h"
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            # 116 "/usr/local/include/neo-c.h"
                            prev_it_53=it_52;
                            # 117 "/usr/local/include/neo-c.h"
                            it_52=it_52->next;
                            # 118 "/usr/local/include/neo-c.h"
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
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional40=self==((void*)0),                    _if_conditional40) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result53__ = __result_obj__ = ((void*)0);
                        return __result53__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_55=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(it_55->item)))));
                        come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_55=it_55->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result56__ = __result_obj__ = result_54;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
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
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional41=self->len==0,                            _if_conditional41) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_56->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_56->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_56;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_56;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional42=self->len==1,                                _if_conditional42) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_57->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_57->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_57;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_57;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_58->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_58->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_58;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_58;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_59=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional11=it_59!=((void*)0),                    _while_condtional11) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_60=it_59;
                        # 117 "/usr/local/include/neo-c.h"
                        it_59=it_59->next;
                        # 118 "/usr/local/include/neo-c.h"
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
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional51=self==((void*)0),                    _if_conditional51) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_63=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional12=it_63!=((void*)0),                    _while_condtional12) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_63->item)))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 139 "/usr/local/include/neo-c.h"
                        it_63=it_63->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result64__ = __result_obj__ = result_62;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result64__;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
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
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional52=self->len==0,                            _if_conditional52) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_64->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_64->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj22=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_64;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_64;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional53=self->len==1,                                _if_conditional53) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_65->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_65->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj23=litem_65->item;
                                    litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_65;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_65;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_66->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_66->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_66;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_66;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_68=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional13=it_68!=((void*)0),                    _while_condtional13) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_69=it_68;
                        # 117 "/usr/local/include/neo-c.h"
                        it_68=it_68->next;
                        # 118 "/usr/local/include/neo-c.h"
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
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_71=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional14=it_71!=((void*)0),                    _while_condtional14) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_71->item)))));
                        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_71=it_71->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result68__ = __result_obj__ = result_70;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
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
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_72->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_72->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj27=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_72;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_72;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_73->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_73->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_73;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_73;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_74->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_74->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_74;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_74;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_75=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional15=it_75!=((void*)0),                    _while_condtional15) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_76=it_75;
                        # 117 "/usr/local/include/neo-c.h"
                        it_75=it_75->next;
                        # 118 "/usr/local/include/neo-c.h"
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
            # 133 "/usr/local/include/neo-c.h"
            # 130 "/usr/local/include/neo-c.h"
            if(_if_conditional113=self==((void*)0),            _if_conditional113) {
                # 131 "/usr/local/include/neo-c.h"
                __result70__ = __result_obj__ = ((void*)0);
                return __result70__;
            }
            # 133 "/usr/local/include/neo-c.h"
            result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value117=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 133, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value117,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 135 "/usr/local/include/neo-c.h"
            it_80=self->head;
            # 142 "/usr/local/include/neo-c.h"
            while(_while_condtional17=it_80!=((void*)0),            _while_condtional17) {
                # 137 "/usr/local/include/neo-c.h"
                list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value126=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
                come_call_finalizer3(right_value126,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 139 "/usr/local/include/neo-c.h"
                it_80=it_80->next;
            }
            # 142 "/usr/local/include/neo-c.h"
            __result75__ = __result_obj__ = result_79;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "/usr/local/include/neo-c.h"
                self->head=((void*)0);
                # 96 "/usr/local/include/neo-c.h"
                self->tail=((void*)0);
                # 97 "/usr/local/include/neo-c.h"
                self->len=0;
                # 99 "/usr/local/include/neo-c.h"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_77=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional16=it_77!=((void*)0),                    _while_condtional16) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_78=it_77;
                        # 117 "/usr/local/include/neo-c.h"
                        it_77=it_77->next;
                        # 118 "/usr/local/include/neo-c.h"
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
                    # 177 "/usr/local/include/neo-c.h"
                    # 146 "/usr/local/include/neo-c.h"
                    if(_if_conditional118=self->len==0,                    _if_conditional118) {
                        # 147 "/usr/local/include/neo-c.h"
                        litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value119=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value119,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 149 "/usr/local/include/neo-c.h"
                        litem_81->prev=((void*)0);
                        # 150 "/usr/local/include/neo-c.h"
                        litem_81->next=((void*)0);
                        # 151 "/usr/local/include/neo-c.h"
                        __dec_obj41=litem_81->item;
                        litem_81->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 153 "/usr/local/include/neo-c.h"
                        self->tail=litem_81;
                        # 154 "/usr/local/include/neo-c.h"
                        self->head=litem_81;
                    }
                    else {
                        # 177 "/usr/local/include/neo-c.h"
                        # 156 "/usr/local/include/neo-c.h"
                        if(_if_conditional122=self->len==1,                        _if_conditional122) {
                            # 157 "/usr/local/include/neo-c.h"
                            litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 159 "/usr/local/include/neo-c.h"
                            litem_82->prev=self->head;
                            # 160 "/usr/local/include/neo-c.h"
                            litem_82->next=((void*)0);
                            # 161 "/usr/local/include/neo-c.h"
                            __dec_obj42=litem_82->item;
                            litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj42,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 163 "/usr/local/include/neo-c.h"
                            self->tail=litem_82;
                            # 164 "/usr/local/include/neo-c.h"
                            self->head->next=litem_82;
                        }
                        else {
                            # 167 "/usr/local/include/neo-c.h"
                            litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 169 "/usr/local/include/neo-c.h"
                            litem_83->prev=self->tail;
                            # 170 "/usr/local/include/neo-c.h"
                            litem_83->next=((void*)0);
                            # 171 "/usr/local/include/neo-c.h"
                            __dec_obj43=litem_83->item;
                            litem_83->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj43,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 173 "/usr/local/include/neo-c.h"
                            self->tail->next=litem_83;
                            # 174 "/usr/local/include/neo-c.h"
                            self->tail=litem_83;
                        }
                    }
                    # 177 "/usr/local/include/neo-c.h"
                    self->len++;
                    # 179 "/usr/local/include/neo-c.h"
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
            # 114 "/usr/local/include/neo-c.h"
            it_85=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional18=it_85!=((void*)0),            _while_condtional18) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_86=it_85;
                # 117 "/usr/local/include/neo-c.h"
                it_85=it_85->next;
                # 118 "/usr/local/include/neo-c.h"
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
            # 1519 "/usr/local/include/neo-c.h"
            # 1520 "/usr/local/include/neo-c.h"
            memset(&default_value_88,0,sizeof(struct sVar*));
            # 1522 "/usr/local/include/neo-c.h"
            hash_89=string_get_hash_key(((char*)key))%self->size;
            # 1523 "/usr/local/include/neo-c.h"
            it_90=hash_89;
            # 1547 "/usr/local/include/neo-c.h"
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                # 1545 "/usr/local/include/neo-c.h"
                # 1526 "/usr/local/include/neo-c.h"
                if(_if_conditional144=self->item_existance[it_90],                _if_conditional144) {
                    # 1533 "/usr/local/include/neo-c.h"
                    # 1528 "/usr/local/include/neo-c.h"
                    if(_if_conditional145=string_equals(self->keys[it_90],key),                    _if_conditional145) {
                        # 1530 "/usr/local/include/neo-c.h"
                        __result79__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result79__;
                    }
                    # 1533 "/usr/local/include/neo-c.h"
                    it_90++;
                    # 1541 "/usr/local/include/neo-c.h"
                    # 1535 "/usr/local/include/neo-c.h"
                    if(_if_conditional150=it_90>=self->size,                    _if_conditional150) {
                        # 1536 "/usr/local/include/neo-c.h"
                        it_90=0;
                    }
                    else {
                        # 1541 "/usr/local/include/neo-c.h"
                        # 1538 "/usr/local/include/neo-c.h"
                        if(_if_conditional151=it_90==hash_89,                        _if_conditional151) {
                            # 1539 "/usr/local/include/neo-c.h"
                            __result80__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result80__;
                        }
                    }
                }
                else {
                    # 1543 "/usr/local/include/neo-c.h"
                    __result81__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
            # 1547 "/usr/local/include/neo-c.h"
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
                    # 281 "/usr/local/include/neo-c.h"
                    # 276 "/usr/local/include/neo-c.h"
                    if(_if_conditional158=self==((void*)0),                    _if_conditional158) {
                        # 277 "/usr/local/include/neo-c.h"
                        # 278 "/usr/local/include/neo-c.h"
                        memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 279 "/usr/local/include/neo-c.h"
                        __result87__ = __result_obj__ = result_97;
                        return __result87__;
                    }
                    # 281 "/usr/local/include/neo-c.h"
                    self->it=self->head;
                    # 287 "/usr/local/include/neo-c.h"
                    # 283 "/usr/local/include/neo-c.h"
                    if(self->it) {
                        # 284 "/usr/local/include/neo-c.h"
                        __result88__ = __result_obj__ = self->it->item;
                        return __result88__;
                    }
                    # 287 "/usr/local/include/neo-c.h"
                    # 288 "/usr/local/include/neo-c.h"
                    memset(&result_98,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 289 "/usr/local/include/neo-c.h"
                    __result89__ = __result_obj__ = result_98;
                    return __result89__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 311 "/usr/local/include/neo-c.h"
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
                    # 299 "/usr/local/include/neo-c.h"
                    # 293 "/usr/local/include/neo-c.h"
                    if(_if_conditional160=self==((void*)0)||self->it==((void*)0),                    _if_conditional160) {
                        # 294 "/usr/local/include/neo-c.h"
                        # 295 "/usr/local/include/neo-c.h"
                        memset(&result_100,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        # 296 "/usr/local/include/neo-c.h"
                        __result91__ = __result_obj__ = result_100;
                        return __result91__;
                    }
                    # 299 "/usr/local/include/neo-c.h"
                    self->it=self->it->next;
                    # 305 "/usr/local/include/neo-c.h"
                    # 301 "/usr/local/include/neo-c.h"
                    if(self->it) {
                        # 302 "/usr/local/include/neo-c.h"
                        __result92__ = __result_obj__ = self->it->item;
                        return __result92__;
                    }
                    # 305 "/usr/local/include/neo-c.h"
                    # 306 "/usr/local/include/neo-c.h"
                    memset(&result_101,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    # 307 "/usr/local/include/neo-c.h"
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
                            # 354 "/usr/local/include/neo-c.h"
                            # 351 "/usr/local/include/neo-c.h"
                            if(_if_conditional168=self==((void*)0),                            _if_conditional168) {
                                # 352 "/usr/local/include/neo-c.h"
                                __result96__ = 0;
                                return __result96__;
                            }
                            # 354 "/usr/local/include/neo-c.h"
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
                                # 281 "/usr/local/include/neo-c.h"
                                # 276 "/usr/local/include/neo-c.h"
                                if(_if_conditional170=self==((void*)0),                                _if_conditional170) {
                                    # 277 "/usr/local/include/neo-c.h"
                                    # 278 "/usr/local/include/neo-c.h"
                                    memset(&result_109,0,sizeof(struct sNode*));
                                    # 279 "/usr/local/include/neo-c.h"
                                    __result98__ = __result_obj__ = result_109;
                                    return __result98__;
                                }
                                # 281 "/usr/local/include/neo-c.h"
                                self->it=self->head;
                                # 287 "/usr/local/include/neo-c.h"
                                # 283 "/usr/local/include/neo-c.h"
                                if(self->it) {
                                    # 284 "/usr/local/include/neo-c.h"
                                    __result99__ = __result_obj__ = self->it->item;
                                    return __result99__;
                                }
                                # 287 "/usr/local/include/neo-c.h"
                                # 288 "/usr/local/include/neo-c.h"
                                memset(&result_110,0,sizeof(struct sNode*));
                                # 289 "/usr/local/include/neo-c.h"
                                __result100__ = __result_obj__ = result_110;
                                return __result100__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 311 "/usr/local/include/neo-c.h"
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
                                # 299 "/usr/local/include/neo-c.h"
                                # 293 "/usr/local/include/neo-c.h"
                                if(_if_conditional172=self==((void*)0)||self->it==((void*)0),                                _if_conditional172) {
                                    # 294 "/usr/local/include/neo-c.h"
                                    # 295 "/usr/local/include/neo-c.h"
                                    memset(&result_112,0,sizeof(struct sNode*));
                                    # 296 "/usr/local/include/neo-c.h"
                                    __result102__ = __result_obj__ = result_112;
                                    return __result102__;
                                }
                                # 299 "/usr/local/include/neo-c.h"
                                self->it=self->it->next;
                                # 305 "/usr/local/include/neo-c.h"
                                # 301 "/usr/local/include/neo-c.h"
                                if(self->it) {
                                    # 302 "/usr/local/include/neo-c.h"
                                    __result103__ = __result_obj__ = self->it->item;
                                    return __result103__;
                                }
                                # 305 "/usr/local/include/neo-c.h"
                                # 306 "/usr/local/include/neo-c.h"
                                memset(&result_113,0,sizeof(struct sNode*));
                                # 307 "/usr/local/include/neo-c.h"
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
                    # 247 "/usr/local/include/neo-c.h"
                    # 216 "/usr/local/include/neo-c.h"
                    if(_if_conditional184=self->len==0,                    _if_conditional184) {
                        # 217 "/usr/local/include/neo-c.h"
                        litem_124=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value157=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value157,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "/usr/local/include/neo-c.h"
                        litem_124->prev=((void*)0);
                        # 220 "/usr/local/include/neo-c.h"
                        litem_124->next=((void*)0);
                        # 221 "/usr/local/include/neo-c.h"
                        __dec_obj53=litem_124->item;
                        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 223 "/usr/local/include/neo-c.h"
                        self->tail=litem_124;
                        # 224 "/usr/local/include/neo-c.h"
                        self->head=litem_124;
                    }
                    else {
                        # 247 "/usr/local/include/neo-c.h"
                        # 226 "/usr/local/include/neo-c.h"
                        if(_if_conditional186=self->len==1,                        _if_conditional186) {
                            # 227 "/usr/local/include/neo-c.h"
                            litem_125=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value158=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value158,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "/usr/local/include/neo-c.h"
                            litem_125->prev=self->head;
                            # 230 "/usr/local/include/neo-c.h"
                            litem_125->next=((void*)0);
                            # 231 "/usr/local/include/neo-c.h"
                            __dec_obj54=litem_125->item;
                            litem_125->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "/usr/local/include/neo-c.h"
                            self->tail=litem_125;
                            # 234 "/usr/local/include/neo-c.h"
                            self->head->next=litem_125;
                        }
                        else {
                            # 237 "/usr/local/include/neo-c.h"
                            litem_126=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value159=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value159,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "/usr/local/include/neo-c.h"
                            litem_126->prev=self->tail;
                            # 240 "/usr/local/include/neo-c.h"
                            litem_126->next=((void*)0);
                            # 241 "/usr/local/include/neo-c.h"
                            __dec_obj55=litem_126->item;
                            litem_126->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "/usr/local/include/neo-c.h"
                            self->tail->next=litem_126;
                            # 244 "/usr/local/include/neo-c.h"
                            self->tail=litem_126;
                        }
                    }
                    # 247 "/usr/local/include/neo-c.h"
                    self->len++;
                    # 249 "/usr/local/include/neo-c.h"
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
                        # 281 "/usr/local/include/neo-c.h"
                        # 276 "/usr/local/include/neo-c.h"
                        if(_if_conditional194=self==((void*)0),                        _if_conditional194) {
                            # 277 "/usr/local/include/neo-c.h"
                            # 278 "/usr/local/include/neo-c.h"
                            memset(&result_132,0,sizeof(char*));
                            # 279 "/usr/local/include/neo-c.h"
                            __result109__ = __result_obj__ = result_132;
                            return __result109__;
                        }
                        # 281 "/usr/local/include/neo-c.h"
                        self->it=self->head;
                        # 287 "/usr/local/include/neo-c.h"
                        # 283 "/usr/local/include/neo-c.h"
                        if(self->it) {
                            # 284 "/usr/local/include/neo-c.h"
                            __result110__ = __result_obj__ = self->it->item;
                            return __result110__;
                        }
                        # 287 "/usr/local/include/neo-c.h"
                        # 288 "/usr/local/include/neo-c.h"
                        memset(&result_133,0,sizeof(char*));
                        # 289 "/usr/local/include/neo-c.h"
                        __result111__ = __result_obj__ = result_133;
                        return __result111__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "/usr/local/include/neo-c.h"
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
                        # 299 "/usr/local/include/neo-c.h"
                        # 293 "/usr/local/include/neo-c.h"
                        if(_if_conditional196=self==((void*)0)||self->it==((void*)0),                        _if_conditional196) {
                            # 294 "/usr/local/include/neo-c.h"
                            # 295 "/usr/local/include/neo-c.h"
                            memset(&result_135,0,sizeof(char*));
                            # 296 "/usr/local/include/neo-c.h"
                            __result113__ = __result_obj__ = result_135;
                            return __result113__;
                        }
                        # 299 "/usr/local/include/neo-c.h"
                        self->it=self->it->next;
                        # 305 "/usr/local/include/neo-c.h"
                        # 301 "/usr/local/include/neo-c.h"
                        if(self->it) {
                            # 302 "/usr/local/include/neo-c.h"
                            __result114__ = __result_obj__ = self->it->item;
                            return __result114__;
                        }
                        # 305 "/usr/local/include/neo-c.h"
                        # 306 "/usr/local/include/neo-c.h"
                        memset(&result_136,0,sizeof(char*));
                        # 307 "/usr/local/include/neo-c.h"
                        __result115__ = __result_obj__ = result_136;
                        return __result115__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional198;
int __result116__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 354 "/usr/local/include/neo-c.h"
                            # 351 "/usr/local/include/neo-c.h"
                            if(_if_conditional198=self==((void*)0),                            _if_conditional198) {
                                # 352 "/usr/local/include/neo-c.h"
                                __result116__ = 0;
                                return __result116__;
                            }
                            # 354 "/usr/local/include/neo-c.h"
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
                                # 673 "/usr/local/include/neo-c.h"
                                # 669 "/usr/local/include/neo-c.h"
                                if(_if_conditional200=position<0,                                _if_conditional200) {
                                    # 670 "/usr/local/include/neo-c.h"
                                    position+=self->len;
                                }
                                # 673 "/usr/local/include/neo-c.h"
                                it_137=self->head;
                                # 674 "/usr/local/include/neo-c.h"
                                i_138=0;
                                # 681 "/usr/local/include/neo-c.h"
                                while(_while_condtional20=it_137!=((void*)0),                                _while_condtional20) {
                                    # 679 "/usr/local/include/neo-c.h"
                                    # 676 "/usr/local/include/neo-c.h"
                                    if(_if_conditional201=position==i_138,                                    _if_conditional201) {
                                        # 677 "/usr/local/include/neo-c.h"
                                        __result118__ = __result_obj__ = it_137->item;
                                        return __result118__;
                                    }
                                    # 679 "/usr/local/include/neo-c.h"
                                    it_137=it_137->next;
                                    # 680 "/usr/local/include/neo-c.h"
                                    i_138++;
                                }
                                # 683 "/usr/local/include/neo-c.h"
                                # 684 "/usr/local/include/neo-c.h"
                                memset(&default_value_139,0,sizeof(struct sType*));
                                # 685 "/usr/local/include/neo-c.h"
                                __result119__ = __result_obj__ = default_value_139;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result119__;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value228;
char* __dec_obj77;
void* right_value229;
char* __dec_obj78;
struct sLoadNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    # 584 "07var.c"
    __dec_obj77=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(name))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 586 "07var.c"
    self->sline=info->sline;
    # 587 "07var.c"
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 590 "07var.c"
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 592 "07var.c"
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value230;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
    # 597 "07var.c"
    __result126__ = __result_obj__ = ((char*)(right_value230=__builtin_string("sLoadNode")));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_176;
_Bool _if_conditional242;
struct sVar* parent_var_177;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value231;
struct CVALUE* come_value_178;
struct sType* type_179;
void* right_value232;
char* __dec_obj79;
void* right_value233;
struct sType* __dec_obj80;
_Bool __result127__;
struct sVar* var__180;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sFun* fun_184;
_Bool _if_conditional266;
void* right_value234;
struct CVALUE* come_value_185;
void* right_value235;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result132__;
_Bool __result133__;
void* right_value236;
struct CVALUE* come_value_186;
void* right_value237;
char* __dec_obj83;
void* right_value238;
struct sType* __dec_obj84;
_Bool _if_conditional267;
void* right_value239;
struct sType* __dec_obj85;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_176, 0, sizeof(struct sClass*));
memset(&parent_var_177, 0, sizeof(struct sVar*));
right_value231 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&var__180, 0, sizeof(struct sVar*));
memset(&fun_184, 0, sizeof(struct sFun*));
right_value234 = (void*)0;
memset(&come_value_185, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
    # 602 "07var.c"
    current_stack_frame_struct_176=info->current_stack_frame_struct;
    # 627 "07var.c"
    # 604 "07var.c"
    if(_if_conditional242=current_stack_frame_struct_176&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional242) {
        # 605 "07var.c"
        parent_var_177=get_variable_from_table(info->lv_table->mParent,self->name);
        # 625 "07var.c"
        # 607 "07var.c"
        if(_if_conditional243=parent_var_177!=((void*)0),        _if_conditional243) {
            # 624 "07var.c"
            # 608 "07var.c"
            if(_if_conditional244=string_operator_not_equals(parent_var_177->mFunName,info->come_fun->mName),            _if_conditional244) {
                # 609 "07var.c"
                come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 609, "CVALUE"))));
                come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 611 "07var.c"
                type_179=parent_var_177->mType;
                # 613 "07var.c"
                __dec_obj79=come_value_178->c_value;
                come_value_178->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("(*(parent->%s))",parent_var_177->mCValueName))));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 615 "07var.c"
                __dec_obj80=come_value_178->type;
                come_value_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(type_179))));
                come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 616 "07var.c"
                come_value_178->var=((void*)0);
                # 618 "07var.c"
                add_come_last_code(info,"%s;\n",come_value_178->c_value);
                # 620 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
                # 622 "07var.c"
                __result127__ = (_Bool)1;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 627 "07var.c"
    var__180=get_variable_from_table(info->lv_table,self->name);
    # 653 "07var.c"
    # 629 "07var.c"
    if(_if_conditional245=var__180==((void*)0),    _if_conditional245) {
        # 630 "07var.c"
        var__180=get_variable_from_table(info->gv_table,self->name);
        # 651 "07var.c"
        # 632 "07var.c"
        if(_if_conditional246=var__180==((void*)0),        _if_conditional246) {
            # 633 "07var.c"
            fun_184=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            # 650 "07var.c"
            # 635 "07var.c"
            if(fun_184) {
                # 636 "07var.c"
                come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 636, "CVALUE"))));
                come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 638 "07var.c"
                __dec_obj81=come_value_185->c_value;
                come_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s",fun_184->mName))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 639 "07var.c"
                __dec_obj82=come_value_185->type;
                come_value_185->type=(struct sType*)come_increment_ref_count(fun_184->mLambdaType);
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 640 "07var.c"
                come_value_185->var=((void*)0);
                # 642 "07var.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
                # 644 "07var.c"
                __result132__ = (_Bool)1;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result132__;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 647 "07var.c"
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                # 648 "07var.c"
                __result133__ = (_Bool)1;
                return __result133__;
            }
        }
    }
    # 653 "07var.c"
    come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 653, "CVALUE"))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 654 "07var.c"
    __dec_obj83=come_value_186->c_value;
    come_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("%s",var__180->mCValueName))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 655 "07var.c"
    __dec_obj84=come_value_186->type;
    come_value_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(var__180->mType))));
    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 656 "07var.c"
    come_value_186->var=var__180;
    # 658 "07var.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
    # 668 "07var.c"
    # 660 "07var.c"
    if(_if_conditional267=list$1sNodeph_length(come_value_186->type->mArrayNum)==1,    _if_conditional267) {
        # 661 "07var.c"
        __dec_obj85=come_value_186->type->mOriginalLoadVarType->v1;
        come_value_186->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(come_value_186->type))));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 663 "07var.c"
        list$1sNodeph_reset(come_value_186->type->mArrayNum);
        # 664 "07var.c"
        come_value_186->type->mPointerNum++;
        # 665 "07var.c"
        come_value_186->type->mOriginalTypeNamePointerNum=come_value_186->type->mPointerNum;
    }
    # 668 "07var.c"
    __result135__ = (_Bool)1;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_181;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional21;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sFun* __result128__;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                # 1519 "/usr/local/include/neo-c.h"
                # 1520 "/usr/local/include/neo-c.h"
                memset(&default_value_181,0,sizeof(struct sFun*));
                # 1522 "/usr/local/include/neo-c.h"
                hash_182=string_get_hash_key(((char*)key))%self->size;
                # 1523 "/usr/local/include/neo-c.h"
                it_183=hash_182;
                # 1547 "/usr/local/include/neo-c.h"
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    # 1545 "/usr/local/include/neo-c.h"
                    # 1526 "/usr/local/include/neo-c.h"
                    if(_if_conditional247=self->item_existance[it_183],                    _if_conditional247) {
                        # 1533 "/usr/local/include/neo-c.h"
                        # 1528 "/usr/local/include/neo-c.h"
                        if(_if_conditional248=string_equals(self->keys[it_183],key),                        _if_conditional248) {
                            # 1530 "/usr/local/include/neo-c.h"
                            __result128__ = __result_obj__ = self->items[it_183];
                            come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result128__;
                        }
                        # 1533 "/usr/local/include/neo-c.h"
                        it_183++;
                        # 1541 "/usr/local/include/neo-c.h"
                        # 1535 "/usr/local/include/neo-c.h"
                        if(_if_conditional264=it_183>=self->size,                        _if_conditional264) {
                            # 1536 "/usr/local/include/neo-c.h"
                            it_183=0;
                        }
                        else {
                            # 1541 "/usr/local/include/neo-c.h"
                            # 1538 "/usr/local/include/neo-c.h"
                            if(_if_conditional265=it_183==hash_182,                            _if_conditional265) {
                                # 1539 "/usr/local/include/neo-c.h"
                                __result129__ = __result_obj__ = default_value_181;
                                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result129__;
                            }
                        }
                    }
                    else {
                        # 1543 "/usr/local/include/neo-c.h"
                        __result130__ = __result_obj__ = default_value_181;
                        come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result130__;
                    }
                }
                # 1547 "/usr/local/include/neo-c.h"
                __result131__ = __result_obj__ = default_value_181;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result131__;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional249=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional249) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional250=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional250) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional251=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional251) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional252=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional252) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional253=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional253) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional254=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional254) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional255=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional255) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional258=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional258) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional259=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional259) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional260=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional260) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional261=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional261) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional262=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional262) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional263=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional263) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional256=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional256) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional257=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional257) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_187;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_188;
struct list$1sNodeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1sNodeph*));
            # 420 "/usr/local/include/neo-c.h"
            it_187=self->head;
            # 427 "/usr/local/include/neo-c.h"
            while(_while_condtional22=it_187!=((void*)0),            _while_condtional22) {
                # 422 "/usr/local/include/neo-c.h"
                prev_it_188=it_187;
                # 423 "/usr/local/include/neo-c.h"
                it_187=it_187->next;
                # 424 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_188,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 427 "/usr/local/include/neo-c.h"
            self->head=((void*)0);
            # 428 "/usr/local/include/neo-c.h"
            self->tail=((void*)0);
            # 430 "/usr/local/include/neo-c.h"
            self->len=0;
            # 432 "/usr/local/include/neo-c.h"
            __result134__ = __result_obj__ = self;
            return __result134__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value240;
char* __dec_obj86;
void* right_value241;
char* __dec_obj87;
struct sFunLoadNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    # 678 "07var.c"
    __dec_obj86=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(name))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 680 "07var.c"
    self->sline=info->sline;
    # 681 "07var.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 684 "07var.c"
    __result136__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result136__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sFunLoadNode_terminated(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    # 686 "07var.c"
    __result137__ = (_Bool)0;
    return __result137__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value242;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    # 691 "07var.c"
    __result138__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sFunLoadNode")));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_189;
_Bool _if_conditional270;
_Bool __result139__;
void* right_value243;
struct CVALUE* come_value_190;
void* right_value244;
char* __dec_obj88;
struct sType* __dec_obj89;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_189, 0, sizeof(struct sFun*));
right_value243 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
    # 696 "07var.c"
    fun_189=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    # 712 "07var.c"
    # 698 "07var.c"
    if(_if_conditional270=fun_189==((void*)0),    _if_conditional270) {
        # 699 "07var.c"
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        # 700 "07var.c"
        __result139__ = (_Bool)0;
        return __result139__;
    }
    else {
        # 703 "07var.c"
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 703, "CVALUE"))));
        come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 705 "07var.c"
        __dec_obj88=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("%s",fun_189->mName))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 706 "07var.c"
        __dec_obj89=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(fun_189->mLambdaType);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 707 "07var.c"
        come_value_190->var=((void*)0);
        # 709 "07var.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 712 "07var.c"
    __result140__ = (_Bool)1;
    return __result140__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional268;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunLoadNode_finalize"
        # 0 "sFunLoadNode_finalize"
        if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional268) {
            # 0 "sFunLoadNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunLoadNode_finalize"
        # 1 "sFunLoadNode_finalize"
        if(_if_conditional269=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional269) {
            # 1 "sFunLoadNode_finalize"
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sVar* self_191;
void* right_value246;
char* __dec_obj90;
void* right_value247;
struct sType* __dec_obj91;
_Bool _if_conditional271;
void* right_value248;
char* __dec_obj92;
static int n_192=0;
void* right_value249;
char* __dec_obj93;
_Bool _if_conditional272;
void* right_value250;
char* __dec_obj94;
char* __dec_obj95;
void* right_value257;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
memset(&self_191, 0, sizeof(struct sVar*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value257 = (void*)0;
    # 718 "07var.c"
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value245=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 718, "sVar"))));
    come_call_finalizer3(right_value245,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 720 "07var.c"
    __dec_obj90=self_191->mName;
    self_191->mName=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(name))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 721 "07var.c"
    __dec_obj91=self_191->mType;
    self_191->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(type))));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 731 "07var.c"
    # 723 "07var.c"
    if(type->mFunctionParam) {
        # 724 "07var.c"
        __dec_obj92=self_191->mCValueName;
        self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(name))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 727 "07var.c"
        # 728 "07var.c"
        __dec_obj93=self_191->mCValueName;
        self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s_%d",name,n_192++))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 731 "07var.c"
    self_191->mBlockLevel=info->block_level;
    # 732 "07var.c"
    self_191->mAllocaValue=(_Bool)0;
    # 733 "07var.c"
    self_191->mFunctionParam=(_Bool)0;
    # 734 "07var.c"
    self_191->mNoFree=(_Bool)0;
    # 742 "07var.c"
    # 735 "07var.c"
    if(info->come_fun) {
        # 736 "07var.c"
        __dec_obj94=self_191->mFunName;
        self_191->mFunName=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(info->come_fun->mName))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 739 "07var.c"
        __dec_obj95=self_191->mFunName;
        self_191->mFunName=((void*)0);
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 742 "07var.c"
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_191,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional273;
unsigned int hash_210;
unsigned int it_211;
_Bool _while_condtional25;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool same_key_exist_228;
char* it2_231;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct map$2charphsVarph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&it_211, 0, sizeof(unsigned int));
memset(&same_key_exist_228, 0, sizeof(_Bool));
memset(&it2_231, 0, sizeof(char*));
        # 1368 "/usr/local/include/neo-c.h"
        # 1365 "/usr/local/include/neo-c.h"
        if(_if_conditional273=self->len*10>=self->size,        _if_conditional273) {
            # 1366 "/usr/local/include/neo-c.h"
            map$2charphsVarph_rehash(self);
        }
        # 1368 "/usr/local/include/neo-c.h"
        hash_210=string_get_hash_key(key)%self->size;
        # 1369 "/usr/local/include/neo-c.h"
        it_211=hash_210;
        # 1427 "/usr/local/include/neo-c.h"
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            # 1425 "/usr/local/include/neo-c.h"
            # 1372 "/usr/local/include/neo-c.h"
            if(_if_conditional285=self->item_existance[it_211],            _if_conditional285) {
                # 1395 "/usr/local/include/neo-c.h"
                # 1374 "/usr/local/include/neo-c.h"
                if(_if_conditional286=string_equals(self->keys[it_211],key),                _if_conditional286) {
                    # 1385 "/usr/local/include/neo-c.h"
                    # 1376 "/usr/local/include/neo-c.h"
                    if(_if_conditional287=1,                    _if_conditional287) {
                        # 1377 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_211]);
                        # 1378 "/usr/local/include/neo-c.h"
                        self->keys[it_211] = come_decrement_ref_count2(self->keys[it_211], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "/usr/local/include/neo-c.h"
                        self->keys[it_211]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_211]);
                        # 1383 "/usr/local/include/neo-c.h"
                        self->keys[it_211]=key;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    # 1385 "/usr/local/include/neo-c.h"
                    if(_if_conditional307=1,                    _if_conditional307) {
                        # 1386 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[it_211],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "/usr/local/include/neo-c.h"
                        self->items[it_211]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "/usr/local/include/neo-c.h"
                        self->items[it_211]=item;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    break;
                }
                # 1395 "/usr/local/include/neo-c.h"
                it_211++;
                # 1405 "/usr/local/include/neo-c.h"
                # 1397 "/usr/local/include/neo-c.h"
                if(_if_conditional308=it_211>=self->size,                _if_conditional308) {
                    # 1398 "/usr/local/include/neo-c.h"
                    it_211=0;
                }
                else {
                    # 1405 "/usr/local/include/neo-c.h"
                    # 1400 "/usr/local/include/neo-c.h"
                    if(_if_conditional309=it_211==hash_210,                    _if_conditional309) {
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
                self->item_existance[it_211]=(_Bool)1;
                # 1414 "/usr/local/include/neo-c.h"
                # 1408 "/usr/local/include/neo-c.h"
                if(_if_conditional310=1,                _if_conditional310) {
                    # 1409 "/usr/local/include/neo-c.h"
                    self->keys[it_211]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "/usr/local/include/neo-c.h"
                    self->keys[it_211]=key;
                }
                # 1421 "/usr/local/include/neo-c.h"
                # 1414 "/usr/local/include/neo-c.h"
                if(_if_conditional311=1,                _if_conditional311) {
                    # 1415 "/usr/local/include/neo-c.h"
                    self->items[it_211]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "/usr/local/include/neo-c.h"
                    self->items[it_211]=item;
                }
                # 1421 "/usr/local/include/neo-c.h"
                self->len++;
                # 1423 "/usr/local/include/neo-c.h"
                break;
            }
        }
        # 1427 "/usr/local/include/neo-c.h"
        same_key_exist_228=(_Bool)0;
        # 1435 "/usr/local/include/neo-c.h"
        for(        it2_231=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_231=list$1charp_next(self->key_list)        ){
            # 1433 "/usr/local/include/neo-c.h"
            # 1430 "/usr/local/include/neo-c.h"
            if(_if_conditional316=string_equals(it2_231,key),            _if_conditional316) {
                # 1431 "/usr/local/include/neo-c.h"
                same_key_exist_228=(_Bool)1;
            }
        }
        # 1439 "/usr/local/include/neo-c.h"
        # 1435 "/usr/local/include/neo-c.h"
        if(_if_conditional317=!same_key_exist_228,        _if_conditional317) {
            # 1436 "/usr/local/include/neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "/usr/local/include/neo-c.h"
        __result164__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result164__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_193;
void* right_value251;
char** keys_194;
void* right_value252;
struct sVar** items_195;
void* right_value253;
_Bool* item_existance_196;
int len_197;
char* it_200;
struct sVar* default_value_203;
struct sVar* it2_206;
unsigned int hash_207;
int n_208;
_Bool _while_condtional24;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct sVar* default_value_209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_193, 0, sizeof(int));
right_value251 = (void*)0;
memset(&keys_194, 0, sizeof(char**));
right_value252 = (void*)0;
memset(&items_195, 0, sizeof(struct sVar**));
right_value253 = (void*)0;
memset(&item_existance_196, 0, sizeof(_Bool*));
memset(&len_197, 0, sizeof(int));
memset(&it_200, 0, sizeof(char*));
memset(&default_value_203, 0, sizeof(struct sVar*));
memset(&it2_206, 0, sizeof(struct sVar*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&n_208, 0, sizeof(int));
memset(&default_value_209, 0, sizeof(struct sVar*));
                # 1312 "/usr/local/include/neo-c.h"
                size_193=self->size*10;
                # 1313 "/usr/local/include/neo-c.h"
                keys_194=(char**)come_increment_ref_count(((char**)(right_value251=(char**)come_calloc(1, sizeof(char*)*(1*(size_193)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "/usr/local/include/neo-c.h"
                items_195=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value252=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_193)), "/usr/local/include/neo-c.h", 1314, "sVar*%"))));
                come_call_finalizer3(right_value252,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "/usr/local/include/neo-c.h"
                item_existance_196=(_Bool*)come_increment_ref_count(((_Bool*)(right_value253=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_193)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "/usr/local/include/neo-c.h"
                len_197=0;
                # 1352 "/usr/local/include/neo-c.h"
                for(                it_200=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_200=map$2charphsVarph_next(self)                ){
                    # 1320 "/usr/local/include/neo-c.h"
                    # 1321 "/usr/local/include/neo-c.h"
                    memset(&default_value_203,0,sizeof(struct sVar*));
                    # 1322 "/usr/local/include/neo-c.h"
                    it2_206=map$2charphsVarph_at(self,it_200,default_value_203);
                    # 1323 "/usr/local/include/neo-c.h"
                    hash_207=string_get_hash_key(it_200)%size_193;
                    # 1324 "/usr/local/include/neo-c.h"
                    n_208=hash_207;
                    # 1350 "/usr/local/include/neo-c.h"
                    while(_while_condtional24=(_Bool)1,                    _while_condtional24) {
                        # 1349 "/usr/local/include/neo-c.h"
                        # 1327 "/usr/local/include/neo-c.h"
                        if(_if_conditional282=item_existance_196[n_208],                        _if_conditional282) {
                            # 1329 "/usr/local/include/neo-c.h"
                            n_208++;
                            # 1339 "/usr/local/include/neo-c.h"
                            # 1331 "/usr/local/include/neo-c.h"
                            if(_if_conditional283=n_208>=size_193,                            _if_conditional283) {
                                # 1332 "/usr/local/include/neo-c.h"
                                n_208=0;
                            }
                            else {
                                # 1339 "/usr/local/include/neo-c.h"
                                # 1334 "/usr/local/include/neo-c.h"
                                if(_if_conditional284=n_208==hash_207,                                _if_conditional284) {
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
                            item_existance_196[n_208]=(_Bool)1;
                            # 1342 "/usr/local/include/neo-c.h"
                            keys_194[n_208]=it_200;
                            # 1343 "/usr/local/include/neo-c.h"
                            # 1344 "/usr/local/include/neo-c.h"
                            items_195[n_208]=map$2charphsVarph_at(self,it_200,default_value_209);
                            # 1346 "/usr/local/include/neo-c.h"
                            len_197++;
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
                self->keys=keys_194;
                # 1357 "/usr/local/include/neo-c.h"
                self->items=items_195;
                # 1358 "/usr/local/include/neo-c.h"
                self->item_existance=item_existance_196;
                # 1360 "/usr/local/include/neo-c.h"
                self->size=size_193;
                # 1361 "/usr/local/include/neo-c.h"
                self->len=len_197;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional274;
char* result_198;
char* __result141__;
_Bool _if_conditional275;
char* __result142__;
char* result_199;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
memset(&result_199, 0, sizeof(char*));
                    # 1279 "/usr/local/include/neo-c.h"
                    # 1274 "/usr/local/include/neo-c.h"
                    if(_if_conditional274=self==((void*)0),                    _if_conditional274) {
                        # 1275 "/usr/local/include/neo-c.h"
                        # 1276 "/usr/local/include/neo-c.h"
                        memset(&result_198,0,sizeof(char*));
                        # 1277 "/usr/local/include/neo-c.h"
                        __result141__ = __result_obj__ = result_198;
                        return __result141__;
                    }
                    # 1279 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1281 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "/usr/local/include/neo-c.h"
                        __result142__ = __result_obj__ = self->key_list->it->item;
                        return __result142__;
                    }
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1286 "/usr/local/include/neo-c.h"
                    memset(&result_199,0,sizeof(char*));
                    # 1287 "/usr/local/include/neo-c.h"
                    __result143__ = __result_obj__ = result_199;
                    return __result143__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "/usr/local/include/neo-c.h"
                    __result144__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result144__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional276;
char* result_201;
char* __result145__;
_Bool _if_conditional277;
char* __result146__;
char* result_202;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                    # 1296 "/usr/local/include/neo-c.h"
                    # 1291 "/usr/local/include/neo-c.h"
                    if(_if_conditional276=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional276) {
                        # 1292 "/usr/local/include/neo-c.h"
                        # 1293 "/usr/local/include/neo-c.h"
                        memset(&result_201,0,sizeof(char*));
                        # 1294 "/usr/local/include/neo-c.h"
                        __result145__ = __result_obj__ = result_201;
                        return __result145__;
                    }
                    # 1296 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1298 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "/usr/local/include/neo-c.h"
                        __result146__ = __result_obj__ = self->key_list->it->item;
                        return __result146__;
                    }
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1303 "/usr/local/include/neo-c.h"
                    memset(&result_202,0,sizeof(char*));
                    # 1304 "/usr/local/include/neo-c.h"
                    __result147__ = __result_obj__ = result_202;
                    return __result147__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional23;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct sVar* __result148__;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct sVar* __result149__;
struct sVar* __result150__;
struct sVar* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
                        # 1201 "/usr/local/include/neo-c.h"
                        hash_204=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "/usr/local/include/neo-c.h"
                        it_205=hash_204;
                        # 1226 "/usr/local/include/neo-c.h"
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            # 1224 "/usr/local/include/neo-c.h"
                            # 1205 "/usr/local/include/neo-c.h"
                            if(_if_conditional278=self->item_existance[it_205],                            _if_conditional278) {
                                # 1212 "/usr/local/include/neo-c.h"
                                # 1207 "/usr/local/include/neo-c.h"
                                if(_if_conditional279=string_equals(self->keys[it_205],key),                                _if_conditional279) {
                                    # 1209 "/usr/local/include/neo-c.h"
                                    __result148__ = __result_obj__ = self->items[it_205];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result148__;
                                }
                                # 1212 "/usr/local/include/neo-c.h"
                                it_205++;
                                # 1220 "/usr/local/include/neo-c.h"
                                # 1214 "/usr/local/include/neo-c.h"
                                if(_if_conditional280=it_205>=self->size,                                _if_conditional280) {
                                    # 1215 "/usr/local/include/neo-c.h"
                                    it_205=0;
                                }
                                else {
                                    # 1220 "/usr/local/include/neo-c.h"
                                    # 1217 "/usr/local/include/neo-c.h"
                                    if(_if_conditional281=it_205==hash_204,                                    _if_conditional281) {
                                        # 1218 "/usr/local/include/neo-c.h"
                                        __result149__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result149__;
                                    }
                                }
                            }
                            else {
                                # 1222 "/usr/local/include/neo-c.h"
                                __result150__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result150__;
                            }
                        }
                        # 1226 "/usr/local/include/neo-c.h"
                        __result151__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result151__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_212;
struct list_item$1charp* it_213;
_Bool _while_condtional26;
_Bool _if_conditional288;
struct list$1charp* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_212, 0, sizeof(int));
memset(&it_213, 0, sizeof(struct list_item$1charp*));
                            # 435 "/usr/local/include/neo-c.h"
                            it2_212=0;
                            # 436 "/usr/local/include/neo-c.h"
                            it_213=self->head;
                            # 447 "/usr/local/include/neo-c.h"
                            while(_while_condtional26=it_213!=((void*)0),                            _while_condtional26) {
                                # 442 "/usr/local/include/neo-c.h"
                                # 438 "/usr/local/include/neo-c.h"
                                if(_if_conditional288=string_equals(it_213->item,item),                                _if_conditional288) {
                                    # 439 "/usr/local/include/neo-c.h"
                                    list$1charp_delete(self,it2_212,it2_212+1);
                                    # 440 "/usr/local/include/neo-c.h"
                                    break;
                                }
                                # 442 "/usr/local/include/neo-c.h"
                                it2_212++;
                                # 444 "/usr/local/include/neo-c.h"
                                it_213=it_213->next;
                            }
                            # 447 "/usr/local/include/neo-c.h"
                            __result155__ = __result_obj__ = self;
                            return __result155__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
int tmp_214;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list$1charp* __result152__;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list_item$1charp* it_217;
int i_218;
_Bool _while_condtional28;
_Bool _if_conditional297;
struct list_item$1charp* prev_it_219;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1charp* it_220;
int i_221;
_Bool _while_condtional29;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list_item$1charp* prev_it_222;
struct list_item$1charp* it_223;
struct list_item$1charp* head_prev_it_224;
struct list_item$1charp* tail_it_225;
int i_226;
_Bool _while_condtional30;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list_item$1charp* prev_it_227;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list$1charp* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_214, 0, sizeof(int));
memset(&it_217, 0, sizeof(struct list_item$1charp*));
memset(&i_218, 0, sizeof(int));
memset(&prev_it_219, 0, sizeof(struct list_item$1charp*));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
memset(&i_221, 0, sizeof(int));
memset(&prev_it_222, 0, sizeof(struct list_item$1charp*));
memset(&it_223, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_224, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_225, 0, sizeof(struct list_item$1charp*));
memset(&i_226, 0, sizeof(int));
memset(&prev_it_227, 0, sizeof(struct list_item$1charp*));
                                        # 454 "/usr/local/include/neo-c.h"
                                        # 451 "/usr/local/include/neo-c.h"
                                        if(_if_conditional289=head<0,                                        _if_conditional289) {
                                            # 452 "/usr/local/include/neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "/usr/local/include/neo-c.h"
                                        # 454 "/usr/local/include/neo-c.h"
                                        if(_if_conditional290=tail<0,                                        _if_conditional290) {
                                            # 455 "/usr/local/include/neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "/usr/local/include/neo-c.h"
                                        # 458 "/usr/local/include/neo-c.h"
                                        if(_if_conditional291=head>tail,                                        _if_conditional291) {
                                            # 459 "/usr/local/include/neo-c.h"
                                            tmp_214=tail;
                                            # 460 "/usr/local/include/neo-c.h"
                                            tail=head;
                                            # 461 "/usr/local/include/neo-c.h"
                                            head=tmp_214;
                                        }
                                        # 468 "/usr/local/include/neo-c.h"
                                        # 464 "/usr/local/include/neo-c.h"
                                        if(_if_conditional292=head<0,                                        _if_conditional292) {
                                            # 465 "/usr/local/include/neo-c.h"
                                            head=0;
                                        }
                                        # 472 "/usr/local/include/neo-c.h"
                                        # 468 "/usr/local/include/neo-c.h"
                                        if(_if_conditional293=tail>self->len,                                        _if_conditional293) {
                                            # 469 "/usr/local/include/neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "/usr/local/include/neo-c.h"
                                        # 472 "/usr/local/include/neo-c.h"
                                        if(_if_conditional294=head==tail,                                        _if_conditional294) {
                                            # 473 "/usr/local/include/neo-c.h"
                                            __result152__ = __result_obj__ = self;
                                            return __result152__;
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        # 476 "/usr/local/include/neo-c.h"
                                        if(_if_conditional295=head==0&&tail==self->len,                                        _if_conditional295) {
                                            # 478 "/usr/local/include/neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "/usr/local/include/neo-c.h"
                                            # 480 "/usr/local/include/neo-c.h"
                                            if(_if_conditional296=head==0,                                            _if_conditional296) {
                                                # 481 "/usr/local/include/neo-c.h"
                                                it_217=self->head;
                                                # 482 "/usr/local/include/neo-c.h"
                                                i_218=0;
                                                # 504 "/usr/local/include/neo-c.h"
                                                while(_while_condtional28=it_217!=((void*)0),                                                _while_condtional28) {
                                                    # 503 "/usr/local/include/neo-c.h"
                                                    # 484 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional297=i_218<tail,                                                    _if_conditional297) {
                                                        # 485 "/usr/local/include/neo-c.h"
                                                        prev_it_219=it_217;
                                                        # 487 "/usr/local/include/neo-c.h"
                                                        it_217=it_217->next;
                                                        # 488 "/usr/local/include/neo-c.h"
                                                        i_218++;
                                                        # 490 "/usr/local/include/neo-c.h"
                                                        come_call_finalizer3(prev_it_219,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "/usr/local/include/neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "/usr/local/include/neo-c.h"
                                                        # 494 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional298=i_218==tail,                                                        _if_conditional298) {
                                                            # 495 "/usr/local/include/neo-c.h"
                                                            self->head=it_217;
                                                            # 496 "/usr/local/include/neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "/usr/local/include/neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "/usr/local/include/neo-c.h"
                                                            it_217=it_217->next;
                                                            # 501 "/usr/local/include/neo-c.h"
                                                            i_218++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "/usr/local/include/neo-c.h"
                                                # 505 "/usr/local/include/neo-c.h"
                                                if(_if_conditional299=tail==self->len,                                                _if_conditional299) {
                                                    # 506 "/usr/local/include/neo-c.h"
                                                    it_220=self->head;
                                                    # 507 "/usr/local/include/neo-c.h"
                                                    i_221=0;
                                                    # 529 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional29=it_220!=((void*)0),                                                    _while_condtional29) {
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        # 509 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional300=i_221==head,                                                        _if_conditional300) {
                                                            # 510 "/usr/local/include/neo-c.h"
                                                            self->tail=it_220->prev;
                                                            # 511 "/usr/local/include/neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "/usr/local/include/neo-c.h"
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional301=i_221>=head,                                                        _if_conditional301) {
                                                            # 515 "/usr/local/include/neo-c.h"
                                                            prev_it_222=it_220;
                                                            # 517 "/usr/local/include/neo-c.h"
                                                            it_220=it_220->next;
                                                            # 518 "/usr/local/include/neo-c.h"
                                                            i_221++;
                                                            # 520 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_222,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "/usr/local/include/neo-c.h"
                                                            it_220=it_220->next;
                                                            # 526 "/usr/local/include/neo-c.h"
                                                            i_221++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "/usr/local/include/neo-c.h"
                                                    it_223=self->head;
                                                    # 533 "/usr/local/include/neo-c.h"
                                                    head_prev_it_224=((void*)0);
                                                    # 534 "/usr/local/include/neo-c.h"
                                                    tail_it_225=((void*)0);
                                                    # 537 "/usr/local/include/neo-c.h"
                                                    i_226=0;
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional30=it_223!=((void*)0),                                                    _while_condtional30) {
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        # 539 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional302=i_226==head,                                                        _if_conditional302) {
                                                            # 540 "/usr/local/include/neo-c.h"
                                                            head_prev_it_224=it_223->prev;
                                                        }
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional303=i_226==tail,                                                        _if_conditional303) {
                                                            # 543 "/usr/local/include/neo-c.h"
                                                            tail_it_225=it_223;
                                                        }
                                                        # 561 "/usr/local/include/neo-c.h"
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional304=i_226>=head&&i_226<tail,                                                        _if_conditional304) {
                                                            # 548 "/usr/local/include/neo-c.h"
                                                            prev_it_227=it_223;
                                                            # 550 "/usr/local/include/neo-c.h"
                                                            it_223=it_223->next;
                                                            # 551 "/usr/local/include/neo-c.h"
                                                            i_226++;
                                                            # 553 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_227,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "/usr/local/include/neo-c.h"
                                                            it_223=it_223->next;
                                                            # 559 "/usr/local/include/neo-c.h"
                                                            i_226++;
                                                        }
                                                    }
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional305=head_prev_it_224!=((void*)0),                                                    _if_conditional305) {
                                                        # 564 "/usr/local/include/neo-c.h"
                                                        head_prev_it_224->next=tail_it_225;
                                                    }
                                                    # 569 "/usr/local/include/neo-c.h"
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional306=tail_it_225!=((void*)0),                                                    _if_conditional306) {
                                                        # 567 "/usr/local/include/neo-c.h"
                                                        tail_it_225->prev=head_prev_it_224;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        __result154__ = __result_obj__ = self;
                                        return __result154__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_215;
_Bool _while_condtional27;
struct list_item$1charp* prev_it_216;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_215, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_216, 0, sizeof(struct list_item$1charp*));
                                                # 420 "/usr/local/include/neo-c.h"
                                                it_215=self->head;
                                                # 427 "/usr/local/include/neo-c.h"
                                                while(_while_condtional27=it_215!=((void*)0),                                                _while_condtional27) {
                                                    # 422 "/usr/local/include/neo-c.h"
                                                    prev_it_216=it_215;
                                                    # 423 "/usr/local/include/neo-c.h"
                                                    it_215=it_215->next;
                                                    # 424 "/usr/local/include/neo-c.h"
                                                    come_call_finalizer3(prev_it_216,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "/usr/local/include/neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "/usr/local/include/neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "/usr/local/include/neo-c.h"
                                                self->len=0;
                                                # 432 "/usr/local/include/neo-c.h"
                                                __result153__ = __result_obj__ = self;
                                                return __result153__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional312;
char* result_229;
char* __result156__;
_Bool _if_conditional313;
char* __result157__;
char* result_230;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
            # 281 "/usr/local/include/neo-c.h"
            # 276 "/usr/local/include/neo-c.h"
            if(_if_conditional312=self==((void*)0),            _if_conditional312) {
                # 277 "/usr/local/include/neo-c.h"
                # 278 "/usr/local/include/neo-c.h"
                memset(&result_229,0,sizeof(char*));
                # 279 "/usr/local/include/neo-c.h"
                __result156__ = __result_obj__ = result_229;
                return __result156__;
            }
            # 281 "/usr/local/include/neo-c.h"
            self->it=self->head;
            # 287 "/usr/local/include/neo-c.h"
            # 283 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 284 "/usr/local/include/neo-c.h"
                __result157__ = __result_obj__ = self->it->item;
                return __result157__;
            }
            # 287 "/usr/local/include/neo-c.h"
            # 288 "/usr/local/include/neo-c.h"
            memset(&result_230,0,sizeof(char*));
            # 289 "/usr/local/include/neo-c.h"
            __result158__ = __result_obj__ = result_230;
            return __result158__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "/usr/local/include/neo-c.h"
            __result159__ = self==((void*)0)||self->it==((void*)0);
            return __result159__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional314;
char* result_232;
char* __result160__;
_Bool _if_conditional315;
char* __result161__;
char* result_233;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_232, 0, sizeof(char*));
memset(&result_233, 0, sizeof(char*));
            # 299 "/usr/local/include/neo-c.h"
            # 293 "/usr/local/include/neo-c.h"
            if(_if_conditional314=self==((void*)0)||self->it==((void*)0),            _if_conditional314) {
                # 294 "/usr/local/include/neo-c.h"
                # 295 "/usr/local/include/neo-c.h"
                memset(&result_232,0,sizeof(char*));
                # 296 "/usr/local/include/neo-c.h"
                __result160__ = __result_obj__ = result_232;
                return __result160__;
            }
            # 299 "/usr/local/include/neo-c.h"
            self->it=self->it->next;
            # 305 "/usr/local/include/neo-c.h"
            # 301 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 302 "/usr/local/include/neo-c.h"
                __result161__ = __result_obj__ = self->it->item;
                return __result161__;
            }
            # 305 "/usr/local/include/neo-c.h"
            # 306 "/usr/local/include/neo-c.h"
            memset(&result_233,0,sizeof(char*));
            # 307 "/usr/local/include/neo-c.h"
            __result162__ = __result_obj__ = result_233;
            return __result162__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional318;
void* right_value254;
struct list_item$1charp* litem_234;
_Bool _if_conditional319;
void* right_value255;
struct list_item$1charp* litem_235;
void* right_value256;
struct list_item$1charp* litem_236;
struct list$1charp* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
memset(&litem_234, 0, sizeof(struct list_item$1charp*));
right_value255 = (void*)0;
memset(&litem_235, 0, sizeof(struct list_item$1charp*));
right_value256 = (void*)0;
memset(&litem_236, 0, sizeof(struct list_item$1charp*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional318=self->len==0,                _if_conditional318) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_234=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value254=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value254,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_234->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_234->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_234->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_234;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_234;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional319=self->len==1,                    _if_conditional319) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_235=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value255=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value255,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_235->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_235->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_235->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_235;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_235;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_236=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value256=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value256,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_236->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_236->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_236->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_236;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_236;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result163__ = __result_obj__ = self;
                return __result163__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value258;
struct sVar* self_237;
void* right_value259;
char* __dec_obj96;
void* right_value260;
struct sType* __dec_obj97;
void* right_value261;
char* __dec_obj98;
void* right_value262;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
memset(&self_237, 0, sizeof(struct sVar*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
    # 747 "07var.c"
    self_237=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value258=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 747, "sVar"))));
    come_call_finalizer3(right_value258,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 749 "07var.c"
    __dec_obj96=self_237->mName;
    self_237->mName=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 750 "07var.c"
    __dec_obj97=self_237->mType;
    self_237->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(type))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 752 "07var.c"
    self_237->mGlobal=(_Bool)1;
    # 754 "07var.c"
    __dec_obj98=self_237->mCValueName;
    self_237->mCValueName=(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(name))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 756 "07var.c"
    self_237->mBlockLevel=info->block_level;
    # 757 "07var.c"
    self_237->mAllocaValue=(_Bool)0;
    # 758 "07var.c"
    self_237->mFunctionParam=(_Bool)0;
    # 759 "07var.c"
    self_237->mNoFree=(_Bool)0;
    # 761 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_237));
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_237,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value263;
struct sVar* self_238;
void* right_value264;
char* __dec_obj99;
void* right_value265;
struct sType* __dec_obj100;
void* right_value266;
char* __dec_obj101;
void* right_value267;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
memset(&self_238, 0, sizeof(struct sVar*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    # 766 "07var.c"
    self_238=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value263=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 766, "sVar"))));
    come_call_finalizer3(right_value263,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    # 768 "07var.c"
    __dec_obj99=self_238->mName;
    self_238->mName=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 769 "07var.c"
    __dec_obj100=self_238->mType;
    self_238->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type))));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 771 "07var.c"
    self_238->mGlobal=(_Bool)1;
    # 773 "07var.c"
    __dec_obj101=self_238->mCValueName;
    self_238->mCValueName=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(c_value))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 775 "07var.c"
    self_238->mBlockLevel=info->block_level;
    # 776 "07var.c"
    self_238->mAllocaValue=(_Bool)0;
    # 777 "07var.c"
    self_238->mFunctionParam=(_Bool)0;
    # 778 "07var.c"
    self_238->mNoFree=(_Bool)0;
    # 780 "07var.c"
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_238));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_238,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_239;
_Bool multiple_declare_240;
_Bool _if_conditional320;
char* p_241;
int sline_242;
void* right_value268;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_243;
char* name_244;
_Bool err_245;
_Bool _if_conditional323;
_Bool multiple_declare2_246;
_Bool _if_conditional324;
char* p_247;
int sline_248;
void* right_value269;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_249;
char* name_250;
_Bool err_251;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool no_output_err_252;
_Bool no_comma_253;
_Bool no_output_come_code_254;
void* right_value270;
struct sNode* exp_255;
_Bool _if_conditional327;
struct sFun* fun_256;
_Bool _if_conditional328;
void* right_value271;
char* buf2_257;
struct list$1charph* multiple_assign_258;
_Bool _if_conditional329;
void* right_value272;
void* right_value273;
struct list$1charph* __dec_obj102;
void* right_value277;
_Bool _while_condtional31;
void* right_value278;
char* buf3_262;
void* right_value279;
_Bool _if_conditional332;
_Bool no_comma_263;
void* right_value280;
struct sNode* right_value_264;
void* right_value281;
struct sNode* __dec_obj106;
void* right_value282;
void* right_value283;
void* right_value284;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value293;
struct sNode* result_266;
struct sNode* __result168__;
_Bool _if_conditional350;
void* right_value294;
void* right_value295;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_267;
void* right_value296;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_268;
char* name_269;
_Bool err_270;
void* right_value297;
struct tuple2$2sTypephcharph* variable_name_271;
void* right_value298;
void* right_value299;
struct tuple3$3sTypephcharphsNodeph* variable_name2_272;
_Bool _while_condtional32;
void* right_value303;
struct tuple2$2sTypephcharph* variable_name_276;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphsNodeph* variable_name2_277;
void* right_value306;
void* right_value307;
void* right_value308;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value317;
struct sNode* result_279;
struct sNode* __result173__;
_Bool _if_conditional374;
void* right_value318;
void* right_value319;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_280;
void* right_value320;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_281;
char* name_282;
_Bool err_283;
void* right_value321;
struct tuple2$2sTypephcharph* variable_name_284;
_Bool _if_conditional375;
_Bool no_comma_285;
void* right_value322;
struct sNode* exp_286;
void* right_value323;
void* right_value324;
struct tuple3$3sTypephcharphsNodeph* variable_name2_287;
_Bool _while_condtional33;
void* right_value325;
struct tuple2$2sTypephcharph* variable_name_288;
_Bool _if_conditional376;
_Bool no_comma_289;
void* right_value326;
struct sNode* exp_290;
void* right_value327;
void* right_value328;
struct tuple3$3sTypephcharphsNodeph* variable_name2_291;
void* right_value329;
void* right_value330;
void* right_value331;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value340;
struct sNode* result_293;
struct sNode* __result177__;
_Bool _if_conditional394;
void* right_value341;
struct sNode* right_value_294;
void* right_value342;
struct sNode* __dec_obj136;
void* right_value343;
void* right_value344;
void* right_value345;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value354;
struct sNode* result_296;
struct sNode* __result180__;
_Bool _if_conditional412;
void* right_value355;
void* right_value356;
void* right_value357;
struct sNode* _inf_value5;
struct sLoadNode* _inf_obj_value5;
void* right_value361;
struct sNode* node_298;
void* right_value362;
struct sNode* __dec_obj146;
void* right_value363;
struct sNode* __dec_obj147;
struct sNode* __result183__;
char* word_299;
_Bool _if_conditional419;
void* right_value364;
char* __dec_obj148;
void* right_value365;
char* __dec_obj149;
_Bool is_type_name_flag_300;
_Bool _if_conditional420;
void* right_value366;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_301;
char* name_302;
_Bool err_303;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
void* right_value367;
void* right_value368;
struct buffer* buf2_304;
_Bool squort_305;
_Bool dquort_306;
int nest_307;
_Bool _while_condtional34;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value369;
char* array_initializer_308;
void* right_value370;
void* right_value371;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value380;
struct sNode* result_310;
struct sNode* __result186__;
void* right_value381;
struct sNode* right_value_311;
void* right_value382;
void* right_value383;
struct list$1sNodeph* right_values_312;
_Bool _while_condtional35;
char* anonymous_var_nameX1876_313;
void* right_value384;
struct sNode* __dec_obj157;
void* right_value385;
void* right_value386;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value395;
struct sNode* result_315;
struct sNode* __result189__;
void* right_value396;
void* right_value397;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value406;
struct sNode* result_317;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_239, 0, sizeof(_Bool));
memset(&multiple_declare_240, 0, sizeof(_Bool));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value268 = (void*)0;
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&multiple_declare2_246, 0, sizeof(_Bool));
memset(&p_247, 0, sizeof(char*));
memset(&sline_248, 0, sizeof(int));
right_value269 = (void*)0;
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&no_output_err_252, 0, sizeof(_Bool));
memset(&no_comma_253, 0, sizeof(_Bool));
memset(&no_output_come_code_254, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&exp_255, 0, sizeof(struct sNode*));
memset(&fun_256, 0, sizeof(struct sFun*));
right_value271 = (void*)0;
memset(&buf2_257, 0, sizeof(char*));
memset(&multiple_assign_258, 0, sizeof(struct list$1charph*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&buf3_262, 0, sizeof(char*));
right_value279 = (void*)0;
memset(&no_comma_263, 0, sizeof(_Bool));
right_value280 = (void*)0;
memset(&right_value_264, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value293 = (void*)0;
memset(&result_266, 0, sizeof(struct sNode*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&multiple_declare_267, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value296 = (void*)0;
memset(&base_type_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
memset(&base_type_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
right_value297 = (void*)0;
memset(&variable_name_271, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&variable_name2_272, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value303 = (void*)0;
memset(&variable_name_276, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&variable_name2_277, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value317 = (void*)0;
memset(&result_279, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&multiple_declare_280, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value320 = (void*)0;
memset(&base_type_281, 0, sizeof(struct sType*));
memset(&name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&base_type_281, 0, sizeof(struct sType*));
memset(&name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value321 = (void*)0;
memset(&variable_name_284, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_285, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&exp_286, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&variable_name2_287, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value325 = (void*)0;
memset(&variable_name_288, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_289, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&exp_290, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&variable_name2_291, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value340 = (void*)0;
memset(&result_293, 0, sizeof(struct sNode*));
right_value341 = (void*)0;
memset(&right_value_294, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value354 = (void*)0;
memset(&result_296, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value361 = (void*)0;
memset(&node_298, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&word_299, 0, sizeof(char*));
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&is_type_name_flag_300, 0, sizeof(_Bool));
right_value366 = (void*)0;
memset(&type_301, 0, sizeof(struct sType*));
memset(&name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
memset(&type_301, 0, sizeof(struct sType*));
memset(&name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&buf2_304, 0, sizeof(struct buffer*));
memset(&squort_305, 0, sizeof(_Bool));
memset(&dquort_306, 0, sizeof(_Bool));
memset(&nest_307, 0, sizeof(int));
right_value369 = (void*)0;
memset(&array_initializer_308, 0, sizeof(char*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value380 = (void*)0;
memset(&result_310, 0, sizeof(struct sNode*));
right_value381 = (void*)0;
memset(&right_value_311, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&right_values_312, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1876_313, 0, sizeof(char*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value395 = (void*)0;
memset(&result_315, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value406 = (void*)0;
memset(&result_317, 0, sizeof(struct sNode*));
    # 785 "07var.c"
    is_type_name_flag_239=is_type_name(buf,info);
    # 788 "07var.c"
    multiple_declare_240=(_Bool)0;
    # 808 "07var.c"
    # 789 "07var.c"
    if(is_type_name_flag_239) {
        # 791 "07var.c"
        p_241=info->p;
        # 792 "07var.c"
        sline_242=info->sline;
        # 794 "07var.c"
        info->p=head;
        # 795 "07var.c"
        info->sline=head_sline;
        # 797 "07var.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value268=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_243=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_244=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_245=multiple_assign_var2->v3;
        come_call_finalizer3(right_value268,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 803 "07var.c"
        # 799 "07var.c"
        if(_if_conditional323=err_245&&*info->p==44,        _if_conditional323) {
            # 800 "07var.c"
            multiple_declare_240=(_Bool)1;
        }
        # 803 "07var.c"
        info->p=p_241;
        # 804 "07var.c"
        info->sline=sline_242;
        come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 808 "07var.c"
    multiple_declare2_246=(_Bool)0;
    # 854 "07var.c"
    # 809 "07var.c"
    if(is_type_name_flag_239) {
        # 811 "07var.c"
        p_247=info->p;
        # 812 "07var.c"
        sline_248=info->sline;
        # 814 "07var.c"
        info->p=head;
        # 815 "07var.c"
        info->sline=head_sline;
        # 817 "07var.c"
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value269=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_249=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_250=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_251=multiple_assign_var3->v3;
        come_call_finalizer3(right_value269,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 819 "07var.c"
        parse_sharp_v5(info);
        # 850 "07var.c"
        # 821 "07var.c"
        if(_if_conditional325=err_251&&*info->p==61,        _if_conditional325) {
            # 822 "07var.c"
            info->p++;
            # 823 "07var.c"
            skip_spaces_and_lf(info);
            # 825 "07var.c"
            parse_sharp_v5(info);
            # 848 "07var.c"
            # 827 "07var.c"
            if(_if_conditional326=*info->p==123,            _if_conditional326) {
            }
            else {
                # 830 "07var.c"
                no_output_err_252=info->no_output_err;
                # 831 "07var.c"
                no_comma_253=info->no_comma;
                # 832 "07var.c"
                no_output_come_code_254=info->no_output_come_code;
                # 834 "07var.c"
                info->no_output_err=(_Bool)1;
                # 835 "07var.c"
                info->no_comma=(_Bool)1;
                # 836 "07var.c"
                info->no_output_come_code=(_Bool)1;
                # 838 "07var.c"
                exp_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 840 "07var.c"
                info->no_comma=no_comma_253;
                # 841 "07var.c"
                info->no_output_err=no_output_err_252;
                # 842 "07var.c"
                info->no_output_come_code=no_output_come_code_254;
                # 847 "07var.c"
                # 844 "07var.c"
                if(_if_conditional327=*info->p==44,                _if_conditional327) {
                    # 845 "07var.c"
                    multiple_declare2_246=(_Bool)1;
                }
                if(exp_255) { exp_255 = come_decrement_ref_count2(exp_255, ((struct sNode*)exp_255)->finalize, ((struct sNode*)exp_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        # 850 "07var.c"
        info->p=p_247;
        # 851 "07var.c"
        info->sline=sline_248;
        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_250 = come_decrement_ref_count2(name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 854 "07var.c"
    parse_sharp_v5(info);
    # 855 "07var.c"
    fun_256=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    # 1159 "07var.c"
    # 857 "07var.c"
    if(_if_conditional328=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional328) {
        # 858 "07var.c"
        parse_sharp_v5(info);
        # 859 "07var.c"
        buf2_257=(char*)come_increment_ref_count(((char*)(right_value271=parse_word(info))));
        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 860 "07var.c"
        parse_sharp_v5(info);
        # 862 "07var.c"
        multiple_assign_258=((void*)0);
        # 879 "07var.c"
        # 864 "07var.c"
        if(_if_conditional329=*info->p==44,        _if_conditional329) {
            # 865 "07var.c"
            __dec_obj102=multiple_assign_258;
            multiple_assign_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value273=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value272=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 865, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value272,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value273,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 866 "07var.c"
            list$1charph_push_back(multiple_assign_258,(char*)come_increment_ref_count(((char*)(right_value277=string_clone(buf2_257)))));
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 878 "07var.c"
            while(_while_condtional31=*info->p==44,            _while_condtional31) {
                # 869 "07var.c"
                info->p++;
                # 870 "07var.c"
                skip_spaces_and_lf(info);
                # 872 "07var.c"
                parse_sharp_v5(info);
                # 873 "07var.c"
                buf3_262=(char*)come_increment_ref_count(((char*)(right_value278=parse_word(info))));
                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 874 "07var.c"
                parse_sharp_v5(info);
                # 876 "07var.c"
                list$1charph_push_back(multiple_assign_258,(char*)come_increment_ref_count(((char*)(right_value279=string_clone(buf3_262)))));
                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_262 = come_decrement_ref_count2(buf3_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 879 "07var.c"
        parse_sharp_v5(info);
        # 905 "07var.c"
        # 881 "07var.c"
        if(_if_conditional332=*info->p==61&&*(info->p+1)!=61,        _if_conditional332) {
            # 882 "07var.c"
            info->p++;
            # 883 "07var.c"
            skip_spaces_and_lf(info);
            # 885 "07var.c"
            parse_sharp_v5(info);
            # 887 "07var.c"
            no_comma_263=info->no_comma;
            # 887 "07var.c"
            info->no_comma=(_Bool)1;
            # 888 "07var.c"
            right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=expression_v13(info))));
            if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 889 "07var.c"
            info->no_comma=no_comma_263;
            # 890 "07var.c"
            parse_sharp_v5(info);
            # 892 "07var.c"
            __dec_obj106=right_value_264;
            right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_264),info))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 893 "07var.c"
            parse_sharp_v5(info);
            # 895 "07var.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 895, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value284=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value282=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 895, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(buf2_257)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_258),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_264),((void*)0),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sStoreNode_finalize;
            _inf_value1->clone=(void*)sStoreNode_clone;
            _inf_value1->compile=(void*)sStoreNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sStoreNode_terminated;
            _inf_value1->kind=(void*)sStoreNode_kind;
            result_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=_inf_value1)));
            come_call_finalizer3(right_value282,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value284,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 899 "07var.c"
            __result168__ = __result_obj__ = result_266;
            if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_266) { result_266 = come_decrement_ref_count2(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_257 = come_decrement_ref_count2(buf2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result168__;
            if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(result_266) { result_266 = come_decrement_ref_count2(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 902 "07var.c"
            err_msg(info,"var requires a right value(%c)",*info->p);
            # 903 "07var.c"
            exit(1);
        }
        buf2_257 = come_decrement_ref_count2(buf2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1159 "07var.c"
        # 906 "07var.c"
        if(multiple_declare_240) {
            # 907 "07var.c"
            info->p=head;
            # 908 "07var.c"
            info->sline=head_sline;
            # 910 "07var.c"
            multiple_declare_267=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value295=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value294=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 910, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value294,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value295,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 912 "07var.c"
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value296=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_268=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_269=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_270=multiple_assign_var4->v3;
            come_call_finalizer3(right_value296,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 914 "07var.c"
            variable_name_271=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value297=parse_variable_name((struct sType*)come_increment_ref_count(base_type_268),(_Bool)1,info))));
            come_call_finalizer3(right_value297,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 916 "07var.c"
            variable_name2_272=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value299=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value298=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 916, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_271->v1),(char*)come_increment_ref_count(variable_name_271->v2),((void*)0)))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 918 "07var.c"
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_267,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_272));
            # 931 "07var.c"
            while(_while_condtional32=*info->p==44,            _while_condtional32) {
                # 921 "07var.c"
                info->p++;
                # 922 "07var.c"
                skip_spaces_and_lf(info);
                # 924 "07var.c"
                variable_name_276=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value303=parse_variable_name((struct sType*)come_increment_ref_count(base_type_268),(_Bool)0,info))));
                come_call_finalizer3(right_value303,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 926 "07var.c"
                variable_name2_277=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value305=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value304=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 926, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_276->v1),(char*)come_increment_ref_count(variable_name_276->v2),((void*)0)))));
                right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value305,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                # 928 "07var.c"
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_267,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_277));
                come_call_finalizer3(variable_name_276,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name2_277,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 931 "07var.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 931, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(right_value308=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value306=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 931, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_267),(struct sType*)come_increment_ref_count(base_type_268),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStoreNode_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            result_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=_inf_value2)));
            come_call_finalizer3(right_value306,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value308,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 935 "07var.c"
            __result173__ = __result_obj__ = result_279;
            come_call_finalizer3(multiple_declare_267,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_271,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_272,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(result_279) { result_279 = come_decrement_ref_count2(result_279, ((struct sNode*)result_279)->finalize, ((struct sNode*)result_279)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result173__;
            come_call_finalizer3(multiple_declare_267,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_271,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_272,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(result_279) { result_279 = come_decrement_ref_count2(result_279, ((struct sNode*)result_279)->finalize, ((struct sNode*)result_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1159 "07var.c"
            # 937 "07var.c"
            if(multiple_declare2_246) {
                # 938 "07var.c"
                info->p=head;
                # 939 "07var.c"
                info->sline=head_sline;
                # 941 "07var.c"
                multiple_declare_280=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value319=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value318=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 941, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer3(right_value318,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value319,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 943 "07var.c"
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value320=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_282=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_283=multiple_assign_var5->v3;
                come_call_finalizer3(right_value320,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 945 "07var.c"
                variable_name_284=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value321=parse_variable_name((struct sType*)come_increment_ref_count(base_type_281),(_Bool)1,info))));
                come_call_finalizer3(right_value321,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 947 "07var.c"
                parse_sharp_v5(info);
                # 965 "07var.c"
                # 949 "07var.c"
                if(_if_conditional375=*info->p==61,                _if_conditional375) {
                    # 950 "07var.c"
                    info->p++;
                    # 951 "07var.c"
                    skip_spaces_and_lf(info);
                    # 953 "07var.c"
                    parse_sharp_v5(info);
                    # 955 "07var.c"
                    no_comma_285=info->no_comma;
                    # 956 "07var.c"
                    info->no_comma=(_Bool)1;
                    # 957 "07var.c"
                    exp_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=expression_v13(info))));
                    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 958 "07var.c"
                    info->no_comma=no_comma_285;
                    # 960 "07var.c"
                    variable_name2_287=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value324=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value323=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 960, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_284->v1),(char*)come_increment_ref_count(variable_name_284->v2),(struct sNode*)come_increment_ref_count(exp_286)))));
                    come_call_finalizer3(right_value323,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value324,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 962 "07var.c"
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_280,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_287));
                    if(exp_286) { exp_286 = come_decrement_ref_count2(exp_286, ((struct sNode*)exp_286)->finalize, ((struct sNode*)exp_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(variable_name2_287,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 993 "07var.c"
                while(_while_condtional33=*info->p==44,                _while_condtional33) {
                    # 966 "07var.c"
                    info->p++;
                    # 967 "07var.c"
                    skip_spaces_and_lf(info);
                    # 969 "07var.c"
                    variable_name_288=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value325=parse_variable_name((struct sType*)come_increment_ref_count(base_type_281),(_Bool)0,info))));
                    come_call_finalizer3(right_value325,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 971 "07var.c"
                    parse_sharp_v5(info);
                    # 991 "07var.c"
                    # 973 "07var.c"
                    if(_if_conditional376=*info->p==61,                    _if_conditional376) {
                        # 974 "07var.c"
                        info->p++;
                        # 975 "07var.c"
                        skip_spaces_and_lf(info);
                        # 977 "07var.c"
                        parse_sharp_v5(info);
                        # 979 "07var.c"
                        no_comma_289=info->no_comma;
                        # 980 "07var.c"
                        info->no_comma=(_Bool)1;
                        # 981 "07var.c"
                        exp_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=expression_v13(info))));
                        if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 982 "07var.c"
                        info->no_comma=no_comma_289;
                        # 984 "07var.c"
                        variable_name2_291=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value328=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value327=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 984, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_288->v1),(char*)come_increment_ref_count(variable_name_288->v2),(struct sNode*)come_increment_ref_count(exp_290)))));
                        come_call_finalizer3(right_value327,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value328,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 986 "07var.c"
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_280,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_291));
                        if(exp_290) { exp_290 = come_decrement_ref_count2(exp_290, ((struct sNode*)exp_290)->finalize, ((struct sNode*)exp_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(variable_name2_291,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 989 "07var.c"
                        come_call_finalizer3(variable_name_288,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer3(variable_name_288,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 993 "07var.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 993, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value331=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value329=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 993, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_280),(struct sType*)come_increment_ref_count(base_type_281),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sStoreNode_finalize;
                _inf_value3->clone=(void*)sStoreNode_clone;
                _inf_value3->compile=(void*)sStoreNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sStoreNode_terminated;
                _inf_value3->kind=(void*)sStoreNode_kind;
                result_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=_inf_value3)));
                come_call_finalizer3(right_value329,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value331,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 997 "07var.c"
                __result177__ = __result_obj__ = result_293;
                come_call_finalizer3(multiple_declare_280,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_284,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                if(result_293) { result_293 = come_decrement_ref_count2(result_293, ((struct sNode*)result_293)->finalize, ((struct sNode*)result_293)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result177__;
                come_call_finalizer3(multiple_declare_280,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_284,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                if(result_293) { result_293 = come_decrement_ref_count2(result_293, ((struct sNode*)result_293)->finalize, ((struct sNode*)result_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1159 "07var.c"
                # 999 "07var.c"
                if(_if_conditional394=!is_type_name_flag_239&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional394) {
                    # 1000 "07var.c"
                    info->p++;
                    # 1001 "07var.c"
                    skip_spaces_and_lf(info);
                    # 1003 "07var.c"
                    parse_sharp_v5(info);
                    # 1004 "07var.c"
                    right_value_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1005 "07var.c"
                    parse_sharp_v5(info);
                    # 1007 "07var.c"
                    __dec_obj136=right_value_294;
                    right_value_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_294),info))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1009 "07var.c"
                    parse_sharp_v5(info);
                    # 1011 "07var.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1011, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value345=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value343=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1011, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_294),((void*)0),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sStoreNode_finalize;
                    _inf_value4->clone=(void*)sStoreNode_clone;
                    _inf_value4->compile=(void*)sStoreNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sStoreNode_terminated;
                    _inf_value4->kind=(void*)sStoreNode_kind;
                    result_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=_inf_value4)));
                    come_call_finalizer3(right_value343,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value345,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1015 "07var.c"
                    __result180__ = __result_obj__ = result_296;
                    if(right_value_294) { right_value_294 = come_decrement_ref_count2(right_value_294, ((struct sNode*)right_value_294)->finalize, ((struct sNode*)right_value_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct sNode*)result_296)->finalize, ((struct sNode*)result_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result180__;
                    if(right_value_294) { right_value_294 = come_decrement_ref_count2(right_value_294, ((struct sNode*)right_value_294)->finalize, ((struct sNode*)right_value_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct sNode*)result_296)->finalize, ((struct sNode*)result_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1159 "07var.c"
                    # 1017 "07var.c"
                    if(_if_conditional412=!is_type_name_flag_239||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional412) {
                        # 1018 "07var.c"
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1018, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sLoadNode*)(right_value357=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value355=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1018, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string(buf)))),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sLoadNode_finalize;
                        _inf_value5->clone=(void*)sLoadNode_clone;
                        _inf_value5->compile=(void*)sLoadNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sLoadNode_terminated;
                        _inf_value5->kind=(void*)sLoadNode_kind;
                        node_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value5)));
                        come_call_finalizer3(right_value355,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value357,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1020 "07var.c"
                        __dec_obj146=node_298;
                        node_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_298),info))));
                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1022 "07var.c"
                        __dec_obj147=node_298;
                        node_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_298),info))));
                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1024 "07var.c"
                        __result183__ = __result_obj__ = node_298;
                        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result183__;
                        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1027 "07var.c"
                        info->p=head;
                        # 1028 "07var.c"
                        info->sline=head_sline;
                        # 1030 "07var.c"
                        # 1038 "07var.c"
                        # 1031 "07var.c"
                        if(_if_conditional419=xisalpha(*info->p)||*info->p==95,                        _if_conditional419) {
                            # 1032 "07var.c"
                            __dec_obj148=word_299;
                            word_299=(char*)come_increment_ref_count(((char*)(right_value364=parse_word(info))));
                            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1035 "07var.c"
                            __dec_obj149=word_299;
                            word_299=(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string(""))));
                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 1038 "07var.c"
                        is_type_name_flag_300=is_type_name(word_299,info);
                        # 1040 "07var.c"
                        info->p=head;
                        # 1041 "07var.c"
                        info->sline=head_sline;
                        # 1157 "07var.c"
                        # 1043 "07var.c"
                        if(is_type_name_flag_300) {
                            # 1044 "07var.c"
                            parse_sharp_v5(info);
                            # 1045 "07var.c"
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value366=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_301=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_302=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_303=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value366,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1051 "07var.c"
                            # 1047 "07var.c"
                            if(_if_conditional421=!err_303,                            _if_conditional421) {
                                # 1048 "07var.c"
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                # 1049 "07var.c"
                                exit(2);
                            }
                            # 1051 "07var.c"
                            parse_sharp_v5(info);
                            # 1156 "07var.c"
                            # 1053 "07var.c"
                            if(_if_conditional422=*info->p==61,                            _if_conditional422) {
                                # 1054 "07var.c"
                                info->p++;
                                # 1055 "07var.c"
                                skip_spaces_and_lf(info);
                                # 1057 "07var.c"
                                parse_sharp_v5(info);
                                # 1148 "07var.c"
                                # 1059 "07var.c"
                                if(_if_conditional423=*info->p==123,                                _if_conditional423) {
                                    # 1060 "07var.c"
                                    buf2_304=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value368=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value367=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1060, "buffer"))))))));
                                    come_call_finalizer3(right_value367,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value368,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1062 "07var.c"
                                    buffer_append_char(buf2_304,*info->p);
                                    # 1063 "07var.c"
                                    info->p++;
                                    # 1065 "07var.c"
                                    squort_305=(_Bool)0;
                                    # 1066 "07var.c"
                                    dquort_306=(_Bool)0;
                                    # 1067 "07var.c"
                                    nest_307=1;
                                    # 1122 "07var.c"
                                    while(_while_condtional34=1,                                    _while_condtional34) {
                                        # 1121 "07var.c"
                                        # 1069 "07var.c"
                                        if(_if_conditional424=*info->p==0,                                        _if_conditional424) {
                                            # 1070 "07var.c"
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            # 1071 "07var.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1121 "07var.c"
                                            # 1073 "07var.c"
                                            if(_if_conditional425=*info->p==92,                                            _if_conditional425) {
                                                # 1074 "07var.c"
                                                buffer_append_char(buf2_304,*info->p);
                                                # 1075 "07var.c"
                                                info->p++;
                                                # 1079 "07var.c"
                                                # 1076 "07var.c"
                                                if(_if_conditional426=*info->p==10,                                                _if_conditional426) {
                                                    # 1077 "07var.c"
                                                    info->sline++;
                                                }
                                                # 1079 "07var.c"
                                                buffer_append_char(buf2_304,*info->p);
                                                # 1080 "07var.c"
                                                info->p++;
                                            }
                                            else {
                                                # 1121 "07var.c"
                                                # 1082 "07var.c"
                                                if(_if_conditional427=!squort_305&&*info->p==34,                                                _if_conditional427) {
                                                    # 1083 "07var.c"
                                                    buffer_append_char(buf2_304,*info->p);
                                                    # 1084 "07var.c"
                                                    info->p++;
                                                    # 1085 "07var.c"
                                                    dquort_306=!dquort_306;
                                                }
                                                else {
                                                    # 1121 "07var.c"
                                                    # 1087 "07var.c"
                                                    if(_if_conditional428=!dquort_306&&*info->p==39,                                                    _if_conditional428) {
                                                        # 1088 "07var.c"
                                                        buffer_append_char(buf2_304,*info->p);
                                                        # 1089 "07var.c"
                                                        info->p++;
                                                        # 1090 "07var.c"
                                                        squort_305=!squort_305;
                                                    }
                                                    else {
                                                        # 1121 "07var.c"
                                                        # 1092 "07var.c"
                                                        if(_if_conditional429=squort_305||dquort_306,                                                        _if_conditional429) {
                                                            # 1093 "07var.c"
                                                            # 1093 "07var.c"
                                                            if(_if_conditional430=*info->p==10,                                                            _if_conditional430) {
                                                                # 1093 "07var.c"
                                                                info->sline++;
                                                            }
                                                            # 1094 "07var.c"
                                                            buffer_append_char(buf2_304,*info->p);
                                                            # 1095 "07var.c"
                                                            info->p++;
                                                        }
                                                        else {
                                                            # 1121 "07var.c"
                                                            # 1097 "07var.c"
                                                            if(_if_conditional431=*info->p==123,                                                            _if_conditional431) {
                                                                # 1098 "07var.c"
                                                                nest_307++;
                                                                # 1099 "07var.c"
                                                                buffer_append_char(buf2_304,*info->p);
                                                                # 1100 "07var.c"
                                                                info->p++;
                                                            }
                                                            else {
                                                                # 1121 "07var.c"
                                                                # 1102 "07var.c"
                                                                if(_if_conditional432=*info->p==125,                                                                _if_conditional432) {
                                                                    # 1103 "07var.c"
                                                                    nest_307--;
                                                                    # 1104 "07var.c"
                                                                    buffer_append_char(buf2_304,*info->p);
                                                                    # 1105 "07var.c"
                                                                    info->p++;
                                                                    # 1111 "07var.c"
                                                                    # 1107 "07var.c"
                                                                    if(_if_conditional433=nest_307==0,                                                                    _if_conditional433) {
                                                                        # 1108 "07var.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1109 "07var.c"
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    # 1121 "07var.c"
                                                                    # 1112 "07var.c"
                                                                    if(_if_conditional434=*info->p==10,                                                                    _if_conditional434) {
                                                                        # 1113 "07var.c"
                                                                        buffer_append_char(buf2_304,*info->p);
                                                                        # 1114 "07var.c"
                                                                        info->p++;
                                                                        # 1115 "07var.c"
                                                                        info->sline++;
                                                                    }
                                                                    else {
                                                                        # 1118 "07var.c"
                                                                        buffer_append_char(buf2_304,*info->p);
                                                                        # 1119 "07var.c"
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
                                    # 1122 "07var.c"
                                    array_initializer_308=(char*)come_increment_ref_count(((char*)(right_value369=buffer_to_string(buf2_304))));
                                    right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1124 "07var.c"
                                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1124, "struct sNode");
                                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value371=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value370=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1124, "sStoreNode")))),(char*)come_increment_ref_count(name_302),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_301),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_308),info))));
                                    _inf_value6->_protocol_obj=_inf_obj_value6;
                                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                                    _inf_value6->clone=(void*)sStoreNode_clone;
                                    _inf_value6->compile=(void*)sStoreNode_compile;
                                    _inf_value6->sline=(void*)sNodeBase_sline;
                                    _inf_value6->sname=(void*)sNodeBase_sname;
                                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                                    _inf_value6->kind=(void*)sStoreNode_kind;
                                    result_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=_inf_value6)));
                                    come_call_finalizer3(right_value370,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value371,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1128 "07var.c"
                                    __result186__ = __result_obj__ = result_310;
                                    come_call_finalizer3(buf2_304,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_308 = come_decrement_ref_count2(array_initializer_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_310) { result_310 = come_decrement_ref_count2(result_310, ((struct sNode*)result_310)->finalize, ((struct sNode*)result_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result186__;
                                    come_call_finalizer3(buf2_304,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_308 = come_decrement_ref_count2(array_initializer_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(result_310) { result_310 = come_decrement_ref_count2(result_310, ((struct sNode*)result_310)->finalize, ((struct sNode*)result_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1131 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1132 "07var.c"
                                    right_value_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=expression_v13(info))));
                                    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1133 "07var.c"
                                    parse_sharp_v5(info);
                                    # 1135 "07var.c"
                                    right_values_312=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value383=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value382=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1135, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value382,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value383,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1140 "07var.c"
                                    while(_while_condtional35=*info->p==44,                                    _while_condtional35) {
                                        # 1138 "07var.c"
                                        anonymous_var_nameX1876_313 = come_decrement_ref_count2(anonymous_var_nameX1876_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 1140 "07var.c"
                                    __dec_obj157=right_value_311;
                                    right_value_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_311),info))));
                                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1142 "07var.c"
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1142, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value386=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value385=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1142, "sStoreNode")))),(char*)come_increment_ref_count(name_302),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_301),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_311),((void*)0),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sStoreNode_finalize;
                                    _inf_value7->clone=(void*)sStoreNode_clone;
                                    _inf_value7->compile=(void*)sStoreNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sStoreNode_terminated;
                                    _inf_value7->kind=(void*)sStoreNode_kind;
                                    result_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=_inf_value7)));
                                    come_call_finalizer3(right_value385,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value386,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1146 "07var.c"
                                    __result189__ = __result_obj__ = result_315;
                                    if(right_value_311) { right_value_311 = come_decrement_ref_count2(right_value_311, ((struct sNode*)right_value_311)->finalize, ((struct sNode*)right_value_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_312,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(result_315) { result_315 = come_decrement_ref_count2(result_315, ((struct sNode*)result_315)->finalize, ((struct sNode*)result_315)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    return __result189__;
                                    if(right_value_311) { right_value_311 = come_decrement_ref_count2(right_value_311, ((struct sNode*)right_value_311)->finalize, ((struct sNode*)right_value_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_312,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(result_315) { result_315 = come_decrement_ref_count2(result_315, ((struct sNode*)result_315)->finalize, ((struct sNode*)result_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                            }
                            else {
                                # 1150 "07var.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1150, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value397=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value396=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1150, "sStoreNode")))),(char*)come_increment_ref_count(name_302),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_301),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sStoreNode_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                result_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=_inf_value8)));
                                come_call_finalizer3(right_value396,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value397,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1154 "07var.c"
                                __result192__ = __result_obj__ = result_317;
                                if(result_317) { result_317 = come_decrement_ref_count2(result_317, ((struct sNode*)result_317)->finalize, ((struct sNode*)result_317)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result192__;
                                if(result_317) { result_317 = come_decrement_ref_count2(result_317, ((struct sNode*)result_317)->finalize, ((struct sNode*)result_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 1159 "07var.c"
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    # 1160 "07var.c"
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional321;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional321=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional321) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional322=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional322) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional330;
void* right_value274;
struct list_item$1charph* litem_259;
char* __dec_obj103;
_Bool _if_conditional331;
void* right_value275;
struct list_item$1charph* litem_260;
char* __dec_obj104;
void* right_value276;
struct list_item$1charph* litem_261;
char* __dec_obj105;
struct list$1charph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1charph*));
right_value275 = (void*)0;
memset(&litem_260, 0, sizeof(struct list_item$1charph*));
right_value276 = (void*)0;
memset(&litem_261, 0, sizeof(struct list_item$1charph*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional330=self->len==0,                _if_conditional330) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_259=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value274,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_259->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_259->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    __dec_obj103=litem_259->item;
                    litem_259->item=(char*)come_increment_ref_count(item);
                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_259;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_259;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional331=self->len==1,                    _if_conditional331) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_260=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value275,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_260->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_260->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        __dec_obj104=litem_260->item;
                        litem_260->item=(char*)come_increment_ref_count(item);
                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_260;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_260;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_261=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value276,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_261->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_261->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        __dec_obj105=litem_261->item;
                        litem_261->item=(char*)come_increment_ref_count(item);
                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_261;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_261;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result165__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result165__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional351=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional351) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional352=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional352) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj114;
char* __dec_obj115;
struct tuple3$3sTypephcharphvoidp* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1771 "/usr/local/include/neo-c.h"
                __dec_obj114=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1772 "/usr/local/include/neo-c.h"
                __dec_obj115=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1773 "/usr/local/include/neo-c.h"
                self->v3=v3;
                # 1775 "/usr/local/include/neo-c.h"
                __result169__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result169__;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional353=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional353) {
                        # 0 "tuple3$3sTypephcharphvoidpp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple3$3sTypephcharphvoidpp_finalize"
                    # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                    if(_if_conditional354=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional354) {
                        # 1 "tuple3$3sTypephcharphvoidpp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional355;
void* right_value300;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_273;
struct tuple3$3sTypephcharphsNodeph* __dec_obj116;
_Bool _if_conditional356;
void* right_value301;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_274;
struct tuple3$3sTypephcharphsNodeph* __dec_obj117;
void* right_value302;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_275;
struct tuple3$3sTypephcharphsNodeph* __dec_obj118;
struct list$1tuple3$3sTypephcharphsNodephph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
memset(&litem_273, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value301 = (void*)0;
memset(&litem_274, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value302 = (void*)0;
memset(&litem_275, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional355=self->len==0,                _if_conditional355) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_273=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value300=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(right_value300,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_273->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_273->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    __dec_obj116=litem_273->item;
                    litem_273->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj116,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_273;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_273;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional356=self->len==1,                    _if_conditional356) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_274=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value301=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value301,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_274->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_274->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        __dec_obj117=litem_274->item;
                        litem_274->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj117,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_274;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_274;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_275=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value302=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value302,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_275->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_275->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        __dec_obj118=litem_275->item;
                        litem_275->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj118,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_275;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_275;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result170__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result170__;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj126;
char* __dec_obj127;
struct sNode* __dec_obj128;
struct tuple3$3sTypephcharphsNodeph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1771 "/usr/local/include/neo-c.h"
                        __dec_obj126=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 1772 "/usr/local/include/neo-c.h"
                        __dec_obj127=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1773 "/usr/local/include/neo-c.h"
                        __dec_obj128=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1775 "/usr/local/include/neo-c.h"
                        __result174__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result174__;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sLoadNode_finalize"
                            # 0 "sLoadNode_finalize"
                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional413) {
                                # 0 "sLoadNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sLoadNode_finalize"
                            # 1 "sLoadNode_finalize"
                            if(_if_conditional414=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional414) {
                                # 1 "sLoadNode_finalize"
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sLoadNode* __result181__;
void* right_value358;
struct sLoadNode* result_297;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value359;
char* __dec_obj144;
_Bool _if_conditional418;
void* right_value360;
char* __dec_obj145;
struct sLoadNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
memset(&result_297, 0, sizeof(struct sLoadNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
                            # 3 "sLoadNode_clone"
                            # 2 "sLoadNode_clone"
                            if(_if_conditional415=self==(void*)0,                            _if_conditional415) {
                                # 2 "sLoadNode_clone"
                                __result181__ = __result_obj__ = (void*)0;
                                return __result181__;
                            }
                            # 3 "sLoadNode_clone"
                            result_297=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value358=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value358,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sLoadNode_clone"
                            # 4 "sLoadNode_clone"
                            if(_if_conditional416=self!=((void*)0),                            _if_conditional416) {
                                # 4 "sLoadNode_clone"
                                result_297->sline=self->sline;
                            }
                            # 6 "sLoadNode_clone"
                            # 5 "sLoadNode_clone"
                            if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional417) {
                                # 5 "sLoadNode_clone"
                                __dec_obj144=result_297->sname;
                                result_297->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sLoadNode_clone"
                            # 6 "sLoadNode_clone"
                            if(_if_conditional418=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional418) {
                                # 6 "sLoadNode_clone"
                                __dec_obj145=result_297->name;
                                result_297->name=(char*)come_increment_ref_count(((char*)(right_value360=string_clone(self->name))));
                                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sLoadNode_clone"
                            __result182__ = __result_obj__ = result_297;
                            come_call_finalizer3(result_297,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result182__;
                            come_call_finalizer3(result_297,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sStoreNode_finalize"
                                    # 0 "sStoreNode_finalize"
                                    if(_if_conditional469=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional469) {
                                        # 0 "sStoreNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sStoreNode_finalize"
                                    # 1 "sStoreNode_finalize"
                                    if(_if_conditional470=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional470) {
                                        # 1 "sStoreNode_finalize"
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sStoreNode_finalize"
                                    # 2 "sStoreNode_finalize"
                                    if(_if_conditional471=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional471) {
                                        # 2 "sStoreNode_finalize"
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sStoreNode_finalize"
                                    # 3 "sStoreNode_finalize"
                                    if(_if_conditional472=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional472) {
                                        # 3 "sStoreNode_finalize"
                                        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sStoreNode_finalize"
                                    # 4 "sStoreNode_finalize"
                                    if(_if_conditional473=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional473) {
                                        # 4 "sStoreNode_finalize"
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 6 "sStoreNode_finalize"
                                    # 5 "sStoreNode_finalize"
                                    if(_if_conditional474=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional474) {
                                        # 5 "sStoreNode_finalize"
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sStoreNode_finalize"
                                    # 6 "sStoreNode_finalize"
                                    if(_if_conditional475=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional475) {
                                        # 6 "sStoreNode_finalize"
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional476;
struct sStoreNode* __result190__;
void* right_value398;
struct sStoreNode* result_316;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value399;
char* __dec_obj165;
_Bool _if_conditional479;
void* right_value400;
char* __dec_obj166;
_Bool _if_conditional480;
void* right_value401;
struct list$1charph* __dec_obj167;
_Bool _if_conditional481;
void* right_value402;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj168;
_Bool _if_conditional482;
void* right_value403;
struct sNode* __dec_obj169;
_Bool _if_conditional483;
void* right_value404;
struct sType* __dec_obj170;
_Bool _if_conditional484;
void* right_value405;
char* __dec_obj171;
_Bool _if_conditional485;
struct sStoreNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_316, 0, sizeof(struct sStoreNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
                                    # 3 "sStoreNode_clone"
                                    # 2 "sStoreNode_clone"
                                    if(_if_conditional476=self==(void*)0,                                    _if_conditional476) {
                                        # 2 "sStoreNode_clone"
                                        __result190__ = __result_obj__ = (void*)0;
                                        return __result190__;
                                    }
                                    # 3 "sStoreNode_clone"
                                    result_316=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value398=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value398,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sStoreNode_clone"
                                    # 4 "sStoreNode_clone"
                                    if(_if_conditional477=self!=((void*)0),                                    _if_conditional477) {
                                        # 4 "sStoreNode_clone"
                                        result_316->sline=self->sline;
                                    }
                                    # 6 "sStoreNode_clone"
                                    # 5 "sStoreNode_clone"
                                    if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional478) {
                                        # 5 "sStoreNode_clone"
                                        __dec_obj165=result_316->sname;
                                        result_316->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sStoreNode_clone"
                                    # 6 "sStoreNode_clone"
                                    if(_if_conditional479=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional479) {
                                        # 6 "sStoreNode_clone"
                                        __dec_obj166=result_316->name;
                                        result_316->name=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->name))));
                                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sStoreNode_clone"
                                    # 7 "sStoreNode_clone"
                                    if(_if_conditional480=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional480) {
                                        # 7 "sStoreNode_clone"
                                        __dec_obj167=result_316->multiple_assign;
                                        result_316->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj167,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value401,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sStoreNode_clone"
                                    # 8 "sStoreNode_clone"
                                    if(_if_conditional481=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional481) {
                                        # 8 "sStoreNode_clone"
                                        __dec_obj168=result_316->multiple_declare;
                                        result_316->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value402=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj168,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value402,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sStoreNode_clone"
                                    # 9 "sStoreNode_clone"
                                    if(_if_conditional482=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional482) {
                                        # 9 "sStoreNode_clone"
                                        __dec_obj169=result_316->right_value;
                                        result_316->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(self->right_value))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 11 "sStoreNode_clone"
                                    # 10 "sStoreNode_clone"
                                    if(_if_conditional483=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional483) {
                                        # 10 "sStoreNode_clone"
                                        __dec_obj170=result_316->type;
                                        result_316->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value404=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value404,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sStoreNode_clone"
                                    # 11 "sStoreNode_clone"
                                    if(_if_conditional484=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional484) {
                                        # 11 "sStoreNode_clone"
                                        __dec_obj171=result_316->array_initializer;
                                        result_316->array_initializer=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->array_initializer))));
                                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 13 "sStoreNode_clone"
                                    # 12 "sStoreNode_clone"
                                    if(_if_conditional485=self!=((void*)0),                                    _if_conditional485) {
                                        # 12 "sStoreNode_clone"
                                        result_316->alloc=self->alloc;
                                    }
                                    # 13 "sStoreNode_clone"
                                    __result191__ = __result_obj__ = result_316;
                                    come_call_finalizer3(result_316,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result191__;
                                    come_call_finalizer3(result_316,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

