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
struct sInfo
{
    int cursor;
    int page;
    char* path;
    _Bool app_end;
    struct list$1charph* files;
    struct list$1charph* selected_files;
    char* searching_str;
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
extern void* (*pcre_malloc)(unsigned long int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};
typedef struct __mbstate_t mbstate_t;
struct tm;
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
typedef unsigned long int uintptr_t;
typedef long intptr_t;
typedef char int8_t;
typedef short short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef long intmax_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef unsigned long int uintmax_t;
typedef char int_fast8_t;
typedef long int_fast64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned int chtype;
typedef unsigned int mmask_t;
typedef unsigned char NCURSES_BOOL;
extern unsigned int* acs_map;
typedef struct screen SCREEN;
typedef struct _win_st WINDOW;
typedef unsigned int attr_t;
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
struct anonymous_typeX4
{
    short short id;
    int x;
    int y;
    int z;
    unsigned int bstate;
};
typedef struct anonymous_typeX4 MEVENT;
typedef unsigned long int ino_t;
struct dirent
{
    unsigned long int d_ino;
    long d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
typedef struct __dirstream DIR;
typedef int blksize_t;
typedef unsigned int nlink_t;
typedef long time_t;
typedef unsigned int mode_t;
typedef unsigned long int dev_t;
typedef long blkcnt_t;
struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};
typedef unsigned int uid_t;
typedef unsigned int gid_t;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused[2];
};
typedef int pid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
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
extern int rl_eof_found;
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
extern int (*rl_timeout_event_hook)();
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
extern const char* rl_completer_word_break_characters;
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
    const char* wordbreakchars;
    char reserved[64];
};
typedef void* timer_t;
typedef int clockid_t;
typedef long clock_t;
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
    long tm_gmtoff;
    const char* tm_zone;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
extern char* tzname[2];
extern int daylight;
extern long timezone;
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
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo** info;
    int* maxx_88;
    int* maxy_89;
    int* files_in_one_page_90;
    int* head_91;
    int* tail_92;
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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX675, int anonymous_var_nameX676, const char** anonymous_var_nameX677, int* anonymous_var_nameX678, const unsigned char* anonymous_var_nameX679);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX680, int anonymous_var_nameX681, const char** anonymous_var_nameX682, int* anonymous_var_nameX683, const unsigned char* anonymous_var_nameX684);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX685, int anonymous_var_nameX686, const char** anonymous_var_nameX687, int* anonymous_var_nameX688, const unsigned char* anonymous_var_nameX689);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX690, int anonymous_var_nameX691, int* anonymous_var_nameX692, const char** anonymous_var_nameX693, int* anonymous_var_nameX694, const unsigned char* anonymous_var_nameX695);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX696, int anonymous_var_nameX697, int* anonymous_var_nameX698, const char** anonymous_var_nameX699, int* anonymous_var_nameX700, const unsigned char* anonymous_var_nameX701);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX702, int anonymous_var_nameX703, int* anonymous_var_nameX704, const char** anonymous_var_nameX705, int* anonymous_var_nameX706, const unsigned char* anonymous_var_nameX707);

int pcre_config(int anonymous_var_nameX708, void* anonymous_var_nameX709);

int pcre16_config(int anonymous_var_nameX710, void* anonymous_var_nameX711);

int pcre32_config(int anonymous_var_nameX712, void* anonymous_var_nameX713);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX714, const char* anonymous_var_nameX715, int* anonymous_var_nameX716, int anonymous_var_nameX717, const char* anonymous_var_nameX718, char* anonymous_var_nameX719, int anonymous_var_nameX720);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX721, const unsigned short int* anonymous_var_nameX722, int* anonymous_var_nameX723, int anonymous_var_nameX724, const unsigned short int* anonymous_var_nameX725, unsigned short int* anonymous_var_nameX726, int anonymous_var_nameX727);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX728, const unsigned int* anonymous_var_nameX729, int* anonymous_var_nameX730, int anonymous_var_nameX731, const unsigned int* anonymous_var_nameX732, unsigned int* anonymous_var_nameX733, int anonymous_var_nameX734);

int pcre_copy_substring(const char* anonymous_var_nameX735, int* anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, char* anonymous_var_nameX739, int anonymous_var_nameX740);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX741, int* anonymous_var_nameX742, int anonymous_var_nameX743, int anonymous_var_nameX744, unsigned short int* anonymous_var_nameX745, int anonymous_var_nameX746);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX747, int* anonymous_var_nameX748, int anonymous_var_nameX749, int anonymous_var_nameX750, unsigned int* anonymous_var_nameX751, int anonymous_var_nameX752);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX753, const struct pcre_extra* anonymous_var_nameX754, const char* anonymous_var_nameX755, int anonymous_var_nameX756, int anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, int anonymous_var_nameX760, int* anonymous_var_nameX761, int anonymous_var_nameX762);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX763, const struct pcre16_extra* anonymous_var_nameX764, const unsigned short int* anonymous_var_nameX765, int anonymous_var_nameX766, int anonymous_var_nameX767, int anonymous_var_nameX768, int* anonymous_var_nameX769, int anonymous_var_nameX770, int* anonymous_var_nameX771, int anonymous_var_nameX772);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX773, const struct pcre32_extra* anonymous_var_nameX774, const unsigned int* anonymous_var_nameX775, int anonymous_var_nameX776, int anonymous_var_nameX777, int anonymous_var_nameX778, int* anonymous_var_nameX779, int anonymous_var_nameX780, int* anonymous_var_nameX781, int anonymous_var_nameX782);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX783, const struct pcre_extra* anonymous_var_nameX784, const char* anonymous_var_nameX785, int anonymous_var_nameX786, int anonymous_var_nameX787, int anonymous_var_nameX788, int* anonymous_var_nameX789, int anonymous_var_nameX790);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX791, const struct pcre16_extra* anonymous_var_nameX792, const unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794, int anonymous_var_nameX795, int anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX799, const struct pcre32_extra* anonymous_var_nameX800, const unsigned int* anonymous_var_nameX801, int anonymous_var_nameX802, int anonymous_var_nameX803, int anonymous_var_nameX804, int* anonymous_var_nameX805, int anonymous_var_nameX806);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX807, const struct pcre_extra* anonymous_var_nameX808, const char* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, int anonymous_var_nameX812, int* anonymous_var_nameX813, int anonymous_var_nameX814, struct real_pcre_jit_stack* anonymous_var_nameX815);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX816, const struct pcre16_extra* anonymous_var_nameX817, const unsigned short int* anonymous_var_nameX818, int anonymous_var_nameX819, int anonymous_var_nameX820, int anonymous_var_nameX821, int* anonymous_var_nameX822, int anonymous_var_nameX823, struct real_pcre16_jit_stack* anonymous_var_nameX824);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX825, const struct pcre32_extra* anonymous_var_nameX826, const unsigned int* anonymous_var_nameX827, int anonymous_var_nameX828, int anonymous_var_nameX829, int anonymous_var_nameX830, int* anonymous_var_nameX831, int anonymous_var_nameX832, struct real_pcre32_jit_stack* anonymous_var_nameX833);

void pcre_free_substring(const char* anonymous_var_nameX834);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX835);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX836);

void pcre_free_substring_list(const char** anonymous_var_nameX837);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX838);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX839);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX840, const struct pcre_extra* anonymous_var_nameX841, int anonymous_var_nameX842, void* anonymous_var_nameX843);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX844, const struct pcre16_extra* anonymous_var_nameX845, int anonymous_var_nameX846, void* anonymous_var_nameX847);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX848, const struct pcre32_extra* anonymous_var_nameX849, int anonymous_var_nameX850, void* anonymous_var_nameX851);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX852, const char* anonymous_var_nameX853, int* anonymous_var_nameX854, int anonymous_var_nameX855, const char* anonymous_var_nameX856, const char** anonymous_var_nameX857);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX858, const unsigned short int* anonymous_var_nameX859, int* anonymous_var_nameX860, int anonymous_var_nameX861, const unsigned short int* anonymous_var_nameX862, const unsigned short int** anonymous_var_nameX863);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX864, const unsigned int* anonymous_var_nameX865, int* anonymous_var_nameX866, int anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, const unsigned int** anonymous_var_nameX869);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX870, const char* anonymous_var_nameX871);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX872, const unsigned short int* anonymous_var_nameX873);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX874, const unsigned int* anonymous_var_nameX875);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX876, const char* anonymous_var_nameX877, char** anonymous_var_nameX878, char** anonymous_var_nameX879);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX880, const unsigned short int* anonymous_var_nameX881, unsigned short int** anonymous_var_nameX882, unsigned short int** anonymous_var_nameX883);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX884, const unsigned int* anonymous_var_nameX885, unsigned int** anonymous_var_nameX886, unsigned int** anonymous_var_nameX887);

int pcre_get_substring(const char* anonymous_var_nameX888, int* anonymous_var_nameX889, int anonymous_var_nameX890, int anonymous_var_nameX891, const char** anonymous_var_nameX892);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX893, int* anonymous_var_nameX894, int anonymous_var_nameX895, int anonymous_var_nameX896, const unsigned short int** anonymous_var_nameX897);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX898, int* anonymous_var_nameX899, int anonymous_var_nameX900, int anonymous_var_nameX901, const unsigned int** anonymous_var_nameX902);

int pcre_get_substring_list(const char* anonymous_var_nameX903, int* anonymous_var_nameX904, int anonymous_var_nameX905, const char*** anonymous_var_nameX906);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX907, int* anonymous_var_nameX908, int anonymous_var_nameX909, const unsigned short int*** anonymous_var_nameX910);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX911, int* anonymous_var_nameX912, int anonymous_var_nameX913, const unsigned int*** anonymous_var_nameX914);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX915, int anonymous_var_nameX916);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX917, int anonymous_var_nameX918);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX919, int anonymous_var_nameX920);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX921, int anonymous_var_nameX922, const char** anonymous_var_nameX923);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX924, int anonymous_var_nameX925, const char** anonymous_var_nameX926);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX927, int anonymous_var_nameX928, const char** anonymous_var_nameX929);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX930);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX931);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX932);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX933, struct pcre_extra* anonymous_var_nameX934, const unsigned char* anonymous_var_nameX935);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX936, struct pcre16_extra* anonymous_var_nameX937, const unsigned char* anonymous_var_nameX938);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX939, struct pcre32_extra* anonymous_var_nameX940, const unsigned char* anonymous_var_nameX941);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX942, const unsigned short int* anonymous_var_nameX943, int anonymous_var_nameX944, int* anonymous_var_nameX945, int anonymous_var_nameX946);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX947, const unsigned int* anonymous_var_nameX948, int anonymous_var_nameX949, int* anonymous_var_nameX950, int anonymous_var_nameX951);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX952, int anonymous_var_nameX953);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX954, int anonymous_var_nameX955);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX956, int anonymous_var_nameX957);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX958);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX959);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX960);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX961, struct real_pcre_jit_stack* (*anonymous_var_nameX962)(void*), void* anonymous_var_nameX963);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX964, struct real_pcre16_jit_stack* (*anonymous_var_nameX965)(void*), void* anonymous_var_nameX966);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX967, struct real_pcre32_jit_stack* (*anonymous_var_nameX968)(void*), void* anonymous_var_nameX969);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX970, const unsigned int* anonymous_var_nameX971);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX972, const unsigned int* anonymous_var_nameX973, unsigned long int anonymous_var_nameX974);

unsigned int* wcscat(unsigned int* anonymous_var_nameX975, const unsigned int* anonymous_var_nameX976);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX977, const unsigned int* anonymous_var_nameX978, unsigned long int anonymous_var_nameX979);

int wcscmp(const unsigned int* anonymous_var_nameX980, const unsigned int* anonymous_var_nameX981);

int wcsncmp(const unsigned int* anonymous_var_nameX982, const unsigned int* anonymous_var_nameX983, unsigned long int anonymous_var_nameX984);

int wcscoll(const unsigned int* anonymous_var_nameX985, const unsigned int* anonymous_var_nameX986);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX987, const unsigned int* anonymous_var_nameX988, unsigned long int anonymous_var_nameX989);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX990, unsigned int anonymous_var_nameX991);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX992, unsigned int anonymous_var_nameX993);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX994, const unsigned int* anonymous_var_nameX995);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX998, const unsigned int* anonymous_var_nameX999);

unsigned int* wcstok(unsigned int* anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, unsigned int** anonymous_var_nameX1002);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX1003);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX1004, const unsigned int* anonymous_var_nameX1005);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX1006, const unsigned int* anonymous_var_nameX1007);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX1008, unsigned int anonymous_var_nameX1009, unsigned long int anonymous_var_nameX1010);

int wmemcmp(const unsigned int* anonymous_var_nameX1011, const unsigned int* anonymous_var_nameX1012, unsigned long int anonymous_var_nameX1013);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, unsigned long int anonymous_var_nameX1016);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX1017, const unsigned int* anonymous_var_nameX1018, unsigned long int anonymous_var_nameX1019);

unsigned int* wmemset(unsigned int* anonymous_var_nameX1020, unsigned int anonymous_var_nameX1021, unsigned long int anonymous_var_nameX1022);

unsigned int btowc(int anonymous_var_nameX1023);

int wctob(unsigned int anonymous_var_nameX1024);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX1025);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX1026, const char* anonymous_var_nameX1027, unsigned long int anonymous_var_nameX1028, struct __mbstate_t* anonymous_var_nameX1029);

unsigned long int wcrtomb(char* anonymous_var_nameX1030, unsigned int anonymous_var_nameX1031, struct __mbstate_t* anonymous_var_nameX1032);

unsigned long int mbrlen(const char* anonymous_var_nameX1033, unsigned long int anonymous_var_nameX1034, struct __mbstate_t* anonymous_var_nameX1035);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX1036, const char** anonymous_var_nameX1037, unsigned long int anonymous_var_nameX1038, struct __mbstate_t* anonymous_var_nameX1039);

unsigned long int wcsrtombs(char* anonymous_var_nameX1040, const unsigned int** anonymous_var_nameX1041, unsigned long int anonymous_var_nameX1042, struct __mbstate_t* anonymous_var_nameX1043);

float wcstof(const unsigned int* anonymous_var_nameX1044, unsigned int** anonymous_var_nameX1045);

double wcstod(const unsigned int* anonymous_var_nameX1046, unsigned int** anonymous_var_nameX1047);

long double wcstold(const unsigned int* anonymous_var_nameX1048, unsigned int** anonymous_var_nameX1049);

long wcstol(const unsigned int* anonymous_var_nameX1050, unsigned int** anonymous_var_nameX1051, int anonymous_var_nameX1052);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX1053, unsigned int** anonymous_var_nameX1054, int anonymous_var_nameX1055);

long long wcstoll(const unsigned int* anonymous_var_nameX1056, unsigned int** anonymous_var_nameX1057, int anonymous_var_nameX1058);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX1059, unsigned int** anonymous_var_nameX1060, int anonymous_var_nameX1061);

int fwide(struct _IO_FILE* anonymous_var_nameX1062, int anonymous_var_nameX1063);

int wprintf(const unsigned int* anonymous_var_nameX1064, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX1065, const unsigned int* anonymous_var_nameX1066, ...);

int swprintf(unsigned int* anonymous_var_nameX1067, unsigned long int anonymous_var_nameX1068, const unsigned int* anonymous_var_nameX1069, ...);

int vwprintf(const unsigned int* anonymous_var_nameX1070, va_list anonymous_var_nameX1071);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1072, const unsigned int* anonymous_var_nameX1073, va_list anonymous_var_nameX1074);

int vswprintf(unsigned int* anonymous_var_nameX1075, unsigned long int anonymous_var_nameX1076, const unsigned int* anonymous_var_nameX1077, va_list anonymous_var_nameX1078);

int wscanf(const unsigned int* anonymous_var_nameX1079, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1080, const unsigned int* anonymous_var_nameX1081, ...);

int swscanf(const unsigned int* anonymous_var_nameX1082, const unsigned int* anonymous_var_nameX1083, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1084, va_list anonymous_var_nameX1085);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1086, const unsigned int* anonymous_var_nameX1087, va_list anonymous_var_nameX1088);

int vswscanf(const unsigned int* anonymous_var_nameX1089, const unsigned int* anonymous_var_nameX1090, va_list anonymous_var_nameX1091);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1092);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1093);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1094, struct _IO_FILE* anonymous_var_nameX1095);

unsigned int putwc(unsigned int anonymous_var_nameX1096, struct _IO_FILE* anonymous_var_nameX1097);

unsigned int putwchar(unsigned int anonymous_var_nameX1098);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1099, int anonymous_var_nameX1100, struct _IO_FILE* anonymous_var_nameX1101);

int fputws(const unsigned int* anonymous_var_nameX1102, struct _IO_FILE* anonymous_var_nameX1103);

unsigned int ungetwc(unsigned int anonymous_var_nameX1104, struct _IO_FILE* anonymous_var_nameX1105);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1106, unsigned long int anonymous_var_nameX1107, const unsigned int* anonymous_var_nameX1108, const struct tm* anonymous_var_nameX1109);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1110);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1111);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1112, struct _IO_FILE* anonymous_var_nameX1113);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1114, struct _IO_FILE* anonymous_var_nameX1115);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1116);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1117, int anonymous_var_nameX1118, struct _IO_FILE* anonymous_var_nameX1119);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1120, struct _IO_FILE* anonymous_var_nameX1121);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1122, unsigned long int anonymous_var_nameX1123, const unsigned int* anonymous_var_nameX1124, const struct tm* anonymous_var_nameX1125, struct __locale_struct* anonymous_var_nameX1126);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1127, unsigned long int* anonymous_var_nameX1128);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1129, const char** anonymous_var_nameX1130, unsigned long int anonymous_var_nameX1131, unsigned long int anonymous_var_nameX1132, struct __mbstate_t* anonymous_var_nameX1133);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1134, const unsigned int** anonymous_var_nameX1135, unsigned long int anonymous_var_nameX1136, unsigned long int anonymous_var_nameX1137, struct __mbstate_t* anonymous_var_nameX1138);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1139);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1140, unsigned long int anonymous_var_nameX1141);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1142, const unsigned int* anonymous_var_nameX1143);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1144, const unsigned int* anonymous_var_nameX1145, unsigned long int anonymous_var_nameX1146);

int wcscasecmp(const unsigned int* anonymous_var_nameX1147, const unsigned int* anonymous_var_nameX1148);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1149, const unsigned int* anonymous_var_nameX1150, struct __locale_struct* anonymous_var_nameX1151);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1152, const unsigned int* anonymous_var_nameX1153, unsigned long int anonymous_var_nameX1154);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1155, const unsigned int* anonymous_var_nameX1156, unsigned long int anonymous_var_nameX1157, struct __locale_struct* anonymous_var_nameX1158);

int wcscoll_l(const unsigned int* anonymous_var_nameX1159, const unsigned int* anonymous_var_nameX1160, struct __locale_struct* anonymous_var_nameX1161);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1162, const unsigned int* anonymous_var_nameX1163, unsigned long int anonymous_var_nameX1164, struct __locale_struct* anonymous_var_nameX1165);

int wcwidth(unsigned int anonymous_var_nameX1166);

int wcswidth(const unsigned int* anonymous_var_nameX1167, unsigned long int anonymous_var_nameX1168);

int iswalnum(unsigned int anonymous_var_nameX1169);

int iswalpha(unsigned int anonymous_var_nameX1170);

int iswblank(unsigned int anonymous_var_nameX1171);

int iswcntrl(unsigned int anonymous_var_nameX1172);

int iswdigit(unsigned int anonymous_var_nameX1173);

int iswgraph(unsigned int anonymous_var_nameX1174);

int iswlower(unsigned int anonymous_var_nameX1175);

int iswprint(unsigned int anonymous_var_nameX1176);

int iswpunct(unsigned int anonymous_var_nameX1177);

int iswspace(unsigned int anonymous_var_nameX1178);

int iswupper(unsigned int anonymous_var_nameX1179);

int iswxdigit(unsigned int anonymous_var_nameX1180);

int iswctype(unsigned int anonymous_var_nameX1181, unsigned long int anonymous_var_nameX1182);

unsigned int towlower(unsigned int anonymous_var_nameX1183);

unsigned int towupper(unsigned int anonymous_var_nameX1184);

unsigned long int wctype(const char* anonymous_var_nameX1185);

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

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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

int addch(const unsigned int anonymous_var_nameX1199);

int addchnstr(const unsigned int* anonymous_var_nameX1200, int anonymous_var_nameX1201);

int addchstr(const unsigned int* anonymous_var_nameX1202);

int addnstr(const char* anonymous_var_nameX1203, int anonymous_var_nameX1204);

int addstr(const char* anonymous_var_nameX1205);

int attroff(int anonymous_var_nameX1206);

int attron(int anonymous_var_nameX1207);

int attrset(int anonymous_var_nameX1208);

int attr_get(unsigned int* anonymous_var_nameX1209, short short* anonymous_var_nameX1210, void* anonymous_var_nameX1211);

int attr_off(unsigned int anonymous_var_nameX1212, void* anonymous_var_nameX1213);

int attr_on(unsigned int anonymous_var_nameX1214, void* anonymous_var_nameX1215);

int attr_set(unsigned int anonymous_var_nameX1216, short short anonymous_var_nameX1217, void* anonymous_var_nameX1218);

int baudrate();

int beep();

int bkgd(unsigned int anonymous_var_nameX1219);

void bkgdset(unsigned int anonymous_var_nameX1220);

int border(unsigned int anonymous_var_nameX1221, unsigned int anonymous_var_nameX1222, unsigned int anonymous_var_nameX1223, unsigned int anonymous_var_nameX1224, unsigned int anonymous_var_nameX1225, unsigned int anonymous_var_nameX1226, unsigned int anonymous_var_nameX1227, unsigned int anonymous_var_nameX1228);

int box(struct _win_st* anonymous_var_nameX1229, unsigned int anonymous_var_nameX1230, unsigned int anonymous_var_nameX1231);

_Bool can_change_color();

int cbreak();

int chgat(int anonymous_var_nameX1232, unsigned int anonymous_var_nameX1233, short short anonymous_var_nameX1234, const void* anonymous_var_nameX1235);

int clear();

int clearok(struct _win_st* anonymous_var_nameX1236, _Bool anonymous_var_nameX1237);

int clrtobot();

int clrtoeol();

int color_content(short short anonymous_var_nameX1238, short short* anonymous_var_nameX1239, short short* anonymous_var_nameX1240, short short* anonymous_var_nameX1241);

int color_set(short short anonymous_var_nameX1242, void* anonymous_var_nameX1243);

int COLOR_PAIR(int anonymous_var_nameX1244);

int copywin(const struct _win_st* anonymous_var_nameX1245, struct _win_st* anonymous_var_nameX1246, int anonymous_var_nameX1247, int anonymous_var_nameX1248, int anonymous_var_nameX1249, int anonymous_var_nameX1250, int anonymous_var_nameX1251, int anonymous_var_nameX1252, int anonymous_var_nameX1253);

int curs_set(int anonymous_var_nameX1254);

int def_prog_mode();

int def_shell_mode();

int delay_output(int anonymous_var_nameX1255);

int delch();

void delscreen(struct screen* anonymous_var_nameX1256);

int delwin(struct _win_st* anonymous_var_nameX1257);

int deleteln();

struct _win_st* derwin(struct _win_st* anonymous_var_nameX1258, int anonymous_var_nameX1259, int anonymous_var_nameX1260, int anonymous_var_nameX1261, int anonymous_var_nameX1262);

int doupdate();

struct _win_st* dupwin(struct _win_st* anonymous_var_nameX1263);

int echo();

int echochar(const unsigned int anonymous_var_nameX1264);

int erase();

int endwin();

char erasechar();

void filter();

int flash();

int flushinp();

unsigned int getbkgd(struct _win_st* anonymous_var_nameX1265);

int getch();

int getnstr(char* anonymous_var_nameX1266, int anonymous_var_nameX1267);

int getstr(char* anonymous_var_nameX1268);

struct _win_st* getwin(struct _IO_FILE* anonymous_var_nameX1269);

int halfdelay(int anonymous_var_nameX1270);

_Bool has_colors();

_Bool has_ic();

_Bool has_il();

int hline(unsigned int anonymous_var_nameX1271, int anonymous_var_nameX1272);

void idcok(struct _win_st* anonymous_var_nameX1273, _Bool anonymous_var_nameX1274);

int idlok(struct _win_st* anonymous_var_nameX1275, _Bool anonymous_var_nameX1276);

void immedok(struct _win_st* anonymous_var_nameX1277, _Bool anonymous_var_nameX1278);

unsigned int inch();

int inchnstr(unsigned int* anonymous_var_nameX1279, int anonymous_var_nameX1280);

int inchstr(unsigned int* anonymous_var_nameX1281);

struct _win_st* initscr();

int init_color(short short anonymous_var_nameX1282, short short anonymous_var_nameX1283, short short anonymous_var_nameX1284, short short anonymous_var_nameX1285);

int init_pair(short short anonymous_var_nameX1286, short short anonymous_var_nameX1287, short short anonymous_var_nameX1288);

int innstr(char* anonymous_var_nameX1289, int anonymous_var_nameX1290);

int insch(unsigned int anonymous_var_nameX1291);

int insdelln(int anonymous_var_nameX1292);

int insertln();

int insnstr(const char* anonymous_var_nameX1293, int anonymous_var_nameX1294);

int insstr(const char* anonymous_var_nameX1295);

int instr(char* anonymous_var_nameX1296);

int intrflush(struct _win_st* anonymous_var_nameX1297, _Bool anonymous_var_nameX1298);

_Bool isendwin();

_Bool is_linetouched(struct _win_st* anonymous_var_nameX1299, int anonymous_var_nameX1300);

_Bool is_wintouched(struct _win_st* anonymous_var_nameX1301);

const char* keyname(int anonymous_var_nameX1302);

int keypad(struct _win_st* anonymous_var_nameX1303, _Bool anonymous_var_nameX1304);

char killchar();

int leaveok(struct _win_st* anonymous_var_nameX1305, _Bool anonymous_var_nameX1306);

char* longname();

int meta(struct _win_st* anonymous_var_nameX1307, _Bool anonymous_var_nameX1308);

int move(int anonymous_var_nameX1309, int anonymous_var_nameX1310);

int mvaddch(int anonymous_var_nameX1311, int anonymous_var_nameX1312, const unsigned int anonymous_var_nameX1313);

int mvaddchnstr(int anonymous_var_nameX1314, int anonymous_var_nameX1315, const unsigned int* anonymous_var_nameX1316, int anonymous_var_nameX1317);

int mvaddchstr(int anonymous_var_nameX1318, int anonymous_var_nameX1319, const unsigned int* anonymous_var_nameX1320);

int mvaddnstr(int anonymous_var_nameX1321, int anonymous_var_nameX1322, const char* anonymous_var_nameX1323, int anonymous_var_nameX1324);

int mvaddstr(int anonymous_var_nameX1325, int anonymous_var_nameX1326, const char* anonymous_var_nameX1327);

int mvchgat(int anonymous_var_nameX1328, int anonymous_var_nameX1329, int anonymous_var_nameX1330, unsigned int anonymous_var_nameX1331, short short anonymous_var_nameX1332, const void* anonymous_var_nameX1333);

int mvcur(int anonymous_var_nameX1334, int anonymous_var_nameX1335, int anonymous_var_nameX1336, int anonymous_var_nameX1337);

int mvdelch(int anonymous_var_nameX1338, int anonymous_var_nameX1339);

int mvderwin(struct _win_st* anonymous_var_nameX1340, int anonymous_var_nameX1341, int anonymous_var_nameX1342);

int mvgetch(int anonymous_var_nameX1343, int anonymous_var_nameX1344);

int mvgetnstr(int anonymous_var_nameX1345, int anonymous_var_nameX1346, char* anonymous_var_nameX1347, int anonymous_var_nameX1348);

int mvgetstr(int anonymous_var_nameX1349, int anonymous_var_nameX1350, char* anonymous_var_nameX1351);

int mvhline(int anonymous_var_nameX1352, int anonymous_var_nameX1353, unsigned int anonymous_var_nameX1354, int anonymous_var_nameX1355);

unsigned int mvinch(int anonymous_var_nameX1356, int anonymous_var_nameX1357);

int mvinchnstr(int anonymous_var_nameX1358, int anonymous_var_nameX1359, unsigned int* anonymous_var_nameX1360, int anonymous_var_nameX1361);

int mvinchstr(int anonymous_var_nameX1362, int anonymous_var_nameX1363, unsigned int* anonymous_var_nameX1364);

int mvinnstr(int anonymous_var_nameX1365, int anonymous_var_nameX1366, char* anonymous_var_nameX1367, int anonymous_var_nameX1368);

int mvinsch(int anonymous_var_nameX1369, int anonymous_var_nameX1370, unsigned int anonymous_var_nameX1371);

int mvinsnstr(int anonymous_var_nameX1372, int anonymous_var_nameX1373, const char* anonymous_var_nameX1374, int anonymous_var_nameX1375);

int mvinsstr(int anonymous_var_nameX1376, int anonymous_var_nameX1377, const char* anonymous_var_nameX1378);

int mvinstr(int anonymous_var_nameX1379, int anonymous_var_nameX1380, char* anonymous_var_nameX1381);

int mvprintw(int anonymous_var_nameX1382, int anonymous_var_nameX1383, const char* anonymous_var_nameX1384, ...);

int mvscanw(int anonymous_var_nameX1385, int anonymous_var_nameX1386, const char* anonymous_var_nameX1387, ...);

int mvvline(int anonymous_var_nameX1388, int anonymous_var_nameX1389, unsigned int anonymous_var_nameX1390, int anonymous_var_nameX1391);

int mvwaddch(struct _win_st* anonymous_var_nameX1392, int anonymous_var_nameX1393, int anonymous_var_nameX1394, const unsigned int anonymous_var_nameX1395);

int mvwaddchnstr(struct _win_st* anonymous_var_nameX1396, int anonymous_var_nameX1397, int anonymous_var_nameX1398, const unsigned int* anonymous_var_nameX1399, int anonymous_var_nameX1400);

int mvwaddchstr(struct _win_st* anonymous_var_nameX1401, int anonymous_var_nameX1402, int anonymous_var_nameX1403, const unsigned int* anonymous_var_nameX1404);

int mvwaddnstr(struct _win_st* anonymous_var_nameX1405, int anonymous_var_nameX1406, int anonymous_var_nameX1407, const char* anonymous_var_nameX1408, int anonymous_var_nameX1409);

int mvwaddstr(struct _win_st* anonymous_var_nameX1410, int anonymous_var_nameX1411, int anonymous_var_nameX1412, const char* anonymous_var_nameX1413);

int mvwchgat(struct _win_st* anonymous_var_nameX1414, int anonymous_var_nameX1415, int anonymous_var_nameX1416, int anonymous_var_nameX1417, unsigned int anonymous_var_nameX1418, short short anonymous_var_nameX1419, const void* anonymous_var_nameX1420);

int mvwdelch(struct _win_st* anonymous_var_nameX1421, int anonymous_var_nameX1422, int anonymous_var_nameX1423);

int mvwgetch(struct _win_st* anonymous_var_nameX1424, int anonymous_var_nameX1425, int anonymous_var_nameX1426);

int mvwgetnstr(struct _win_st* anonymous_var_nameX1427, int anonymous_var_nameX1428, int anonymous_var_nameX1429, char* anonymous_var_nameX1430, int anonymous_var_nameX1431);

int mvwgetstr(struct _win_st* anonymous_var_nameX1432, int anonymous_var_nameX1433, int anonymous_var_nameX1434, char* anonymous_var_nameX1435);

int mvwhline(struct _win_st* anonymous_var_nameX1436, int anonymous_var_nameX1437, int anonymous_var_nameX1438, unsigned int anonymous_var_nameX1439, int anonymous_var_nameX1440);

int mvwin(struct _win_st* anonymous_var_nameX1441, int anonymous_var_nameX1442, int anonymous_var_nameX1443);

unsigned int mvwinch(struct _win_st* anonymous_var_nameX1444, int anonymous_var_nameX1445, int anonymous_var_nameX1446);

int mvwinchnstr(struct _win_st* anonymous_var_nameX1447, int anonymous_var_nameX1448, int anonymous_var_nameX1449, unsigned int* anonymous_var_nameX1450, int anonymous_var_nameX1451);

int mvwinchstr(struct _win_st* anonymous_var_nameX1452, int anonymous_var_nameX1453, int anonymous_var_nameX1454, unsigned int* anonymous_var_nameX1455);

int mvwinnstr(struct _win_st* anonymous_var_nameX1456, int anonymous_var_nameX1457, int anonymous_var_nameX1458, char* anonymous_var_nameX1459, int anonymous_var_nameX1460);

int mvwinsch(struct _win_st* anonymous_var_nameX1461, int anonymous_var_nameX1462, int anonymous_var_nameX1463, unsigned int anonymous_var_nameX1464);

int mvwinsnstr(struct _win_st* anonymous_var_nameX1465, int anonymous_var_nameX1466, int anonymous_var_nameX1467, const char* anonymous_var_nameX1468, int anonymous_var_nameX1469);

int mvwinsstr(struct _win_st* anonymous_var_nameX1470, int anonymous_var_nameX1471, int anonymous_var_nameX1472, const char* anonymous_var_nameX1473);

int mvwinstr(struct _win_st* anonymous_var_nameX1474, int anonymous_var_nameX1475, int anonymous_var_nameX1476, char* anonymous_var_nameX1477);

int mvwprintw(struct _win_st* anonymous_var_nameX1478, int anonymous_var_nameX1479, int anonymous_var_nameX1480, const char* anonymous_var_nameX1481, ...);

int mvwscanw(struct _win_st* anonymous_var_nameX1482, int anonymous_var_nameX1483, int anonymous_var_nameX1484, const char* anonymous_var_nameX1485, ...);

int mvwvline(struct _win_st* anonymous_var_nameX1486, int anonymous_var_nameX1487, int anonymous_var_nameX1488, unsigned int anonymous_var_nameX1489, int anonymous_var_nameX1490);

int napms(int anonymous_var_nameX1491);

struct _win_st* newpad(int anonymous_var_nameX1492, int anonymous_var_nameX1493);

struct screen* newterm(const char* anonymous_var_nameX1494, struct _IO_FILE* anonymous_var_nameX1495, struct _IO_FILE* anonymous_var_nameX1496);

struct _win_st* newwin(int anonymous_var_nameX1497, int anonymous_var_nameX1498, int anonymous_var_nameX1499, int anonymous_var_nameX1500);

int nl();

int nocbreak();

int nodelay(struct _win_st* anonymous_var_nameX1501, _Bool anonymous_var_nameX1502);

int noecho();

int nonl();

void noqiflush();

int noraw();

int notimeout(struct _win_st* anonymous_var_nameX1503, _Bool anonymous_var_nameX1504);

int overlay(const struct _win_st* anonymous_var_nameX1505, struct _win_st* anonymous_var_nameX1506);

int overwrite(const struct _win_st* anonymous_var_nameX1507, struct _win_st* anonymous_var_nameX1508);

int pair_content(short short anonymous_var_nameX1509, short short* anonymous_var_nameX1510, short short* anonymous_var_nameX1511);

int PAIR_NUMBER(int anonymous_var_nameX1512);

int pechochar(struct _win_st* anonymous_var_nameX1513, const unsigned int anonymous_var_nameX1514);

int pnoutrefresh(struct _win_st* anonymous_var_nameX1515, int anonymous_var_nameX1516, int anonymous_var_nameX1517, int anonymous_var_nameX1518, int anonymous_var_nameX1519, int anonymous_var_nameX1520, int anonymous_var_nameX1521);

int prefresh(struct _win_st* anonymous_var_nameX1522, int anonymous_var_nameX1523, int anonymous_var_nameX1524, int anonymous_var_nameX1525, int anonymous_var_nameX1526, int anonymous_var_nameX1527, int anonymous_var_nameX1528);

int printw(const char* anonymous_var_nameX1529, ...);

int putwin(struct _win_st* anonymous_var_nameX1530, struct _IO_FILE* anonymous_var_nameX1531);

void qiflush();

int raw();

int redrawwin(struct _win_st* anonymous_var_nameX1532);

int refresh();

int resetty();

int reset_prog_mode();

int reset_shell_mode();

int ripoffline(int anonymous_var_nameX1533, int (*anonymous_lambda_var_nameZ6)(struct _win_st*,int));

int savetty();

int scanw(const char* anonymous_var_nameX1536, ...);

int scr_dump(const char* anonymous_var_nameX1537);

int scr_init(const char* anonymous_var_nameX1538);

int scrl(int anonymous_var_nameX1539);

int scroll(struct _win_st* anonymous_var_nameX1540);

int scrollok(struct _win_st* anonymous_var_nameX1541, _Bool anonymous_var_nameX1542);

int scr_restore(const char* anonymous_var_nameX1543);

int scr_set(const char* anonymous_var_nameX1544);

int setscrreg(int anonymous_var_nameX1545, int anonymous_var_nameX1546);

struct screen* set_term(struct screen* anonymous_var_nameX1547);

int slk_attroff(const unsigned int anonymous_var_nameX1548);

int slk_attr_off(const unsigned int anonymous_var_nameX1549, void* anonymous_var_nameX1550);

int slk_attron(const unsigned int anonymous_var_nameX1551);

int slk_attr_on(unsigned int anonymous_var_nameX1552, void* anonymous_var_nameX1553);

int slk_attrset(const unsigned int anonymous_var_nameX1554);

unsigned int slk_attr();

int slk_attr_set(const unsigned int anonymous_var_nameX1555, short short anonymous_var_nameX1556, void* anonymous_var_nameX1557);

int slk_clear();

int slk_color(short short anonymous_var_nameX1558);

int slk_init(int anonymous_var_nameX1559);

char* slk_label(int anonymous_var_nameX1560);

int slk_noutrefresh();

int slk_refresh();

int slk_restore();

int slk_set(int anonymous_var_nameX1561, const char* anonymous_var_nameX1562, int anonymous_var_nameX1563);

int slk_touch();

int standout();

int standend();

int start_color();

struct _win_st* subpad(struct _win_st* anonymous_var_nameX1564, int anonymous_var_nameX1565, int anonymous_var_nameX1566, int anonymous_var_nameX1567, int anonymous_var_nameX1568);

struct _win_st* subwin(struct _win_st* anonymous_var_nameX1569, int anonymous_var_nameX1570, int anonymous_var_nameX1571, int anonymous_var_nameX1572, int anonymous_var_nameX1573);

int syncok(struct _win_st* anonymous_var_nameX1574, _Bool anonymous_var_nameX1575);

unsigned int termattrs();

char* termname();

void timeout(int anonymous_var_nameX1576);

int touchline(struct _win_st* anonymous_var_nameX1577, int anonymous_var_nameX1578, int anonymous_var_nameX1579);

int touchwin(struct _win_st* anonymous_var_nameX1580);

int typeahead(int anonymous_var_nameX1581);

int ungetch(int anonymous_var_nameX1582);

int untouchwin(struct _win_st* anonymous_var_nameX1583);

void use_env(_Bool anonymous_var_nameX1584);

void use_tioctl(_Bool anonymous_var_nameX1585);

int vidattr(unsigned int anonymous_var_nameX1586);

int vidputs(unsigned int anonymous_var_nameX1587, int (*anonymous_var_nameX1588)(int));

int vline(unsigned int anonymous_var_nameX1589, int anonymous_var_nameX1590);

int vwprintw(struct _win_st* anonymous_var_nameX1591, const char* anonymous_var_nameX1592, va_list anonymous_var_nameX1593);

int vw_printw(struct _win_st* anonymous_var_nameX1594, const char* anonymous_var_nameX1595, va_list anonymous_var_nameX1596);

int vwscanw(struct _win_st* anonymous_var_nameX1597, const char* anonymous_var_nameX1598, va_list anonymous_var_nameX1599);

int vw_scanw(struct _win_st* anonymous_var_nameX1600, const char* anonymous_var_nameX1601, va_list anonymous_var_nameX1602);

int waddch(struct _win_st* anonymous_var_nameX1603, const unsigned int anonymous_var_nameX1604);

int waddchnstr(struct _win_st* anonymous_var_nameX1605, const unsigned int* anonymous_var_nameX1606, int anonymous_var_nameX1607);

int waddchstr(struct _win_st* anonymous_var_nameX1608, const unsigned int* anonymous_var_nameX1609);

int waddnstr(struct _win_st* anonymous_var_nameX1610, const char* anonymous_var_nameX1611, int anonymous_var_nameX1612);

int waddstr(struct _win_st* anonymous_var_nameX1613, const char* anonymous_var_nameX1614);

int wattron(struct _win_st* anonymous_var_nameX1615, int anonymous_var_nameX1616);

int wattroff(struct _win_st* anonymous_var_nameX1617, int anonymous_var_nameX1618);

int wattrset(struct _win_st* anonymous_var_nameX1619, int anonymous_var_nameX1620);

int wattr_get(struct _win_st* anonymous_var_nameX1621, unsigned int* anonymous_var_nameX1622, short short* anonymous_var_nameX1623, void* anonymous_var_nameX1624);

int wattr_on(struct _win_st* anonymous_var_nameX1625, unsigned int anonymous_var_nameX1626, void* anonymous_var_nameX1627);

int wattr_off(struct _win_st* anonymous_var_nameX1628, unsigned int anonymous_var_nameX1629, void* anonymous_var_nameX1630);

int wattr_set(struct _win_st* anonymous_var_nameX1631, unsigned int anonymous_var_nameX1632, short short anonymous_var_nameX1633, void* anonymous_var_nameX1634);

int wbkgd(struct _win_st* anonymous_var_nameX1635, unsigned int anonymous_var_nameX1636);

void wbkgdset(struct _win_st* anonymous_var_nameX1637, unsigned int anonymous_var_nameX1638);

int wborder(struct _win_st* anonymous_var_nameX1639, unsigned int anonymous_var_nameX1640, unsigned int anonymous_var_nameX1641, unsigned int anonymous_var_nameX1642, unsigned int anonymous_var_nameX1643, unsigned int anonymous_var_nameX1644, unsigned int anonymous_var_nameX1645, unsigned int anonymous_var_nameX1646, unsigned int anonymous_var_nameX1647);

int wchgat(struct _win_st* anonymous_var_nameX1648, int anonymous_var_nameX1649, unsigned int anonymous_var_nameX1650, short short anonymous_var_nameX1651, const void* anonymous_var_nameX1652);

int wclear(struct _win_st* anonymous_var_nameX1653);

int wclrtobot(struct _win_st* anonymous_var_nameX1654);

int wclrtoeol(struct _win_st* anonymous_var_nameX1655);

int wcolor_set(struct _win_st* anonymous_var_nameX1656, short short anonymous_var_nameX1657, void* anonymous_var_nameX1658);

void wcursyncup(struct _win_st* anonymous_var_nameX1659);

int wdelch(struct _win_st* anonymous_var_nameX1660);

int wdeleteln(struct _win_st* anonymous_var_nameX1661);

int wechochar(struct _win_st* anonymous_var_nameX1662, const unsigned int anonymous_var_nameX1663);

int werase(struct _win_st* anonymous_var_nameX1664);

int wgetch(struct _win_st* anonymous_var_nameX1665);

int wgetnstr(struct _win_st* anonymous_var_nameX1666, char* anonymous_var_nameX1667, int anonymous_var_nameX1668);

int wgetstr(struct _win_st* anonymous_var_nameX1669, char* anonymous_var_nameX1670);

int whline(struct _win_st* anonymous_var_nameX1671, unsigned int anonymous_var_nameX1672, int anonymous_var_nameX1673);

unsigned int winch(struct _win_st* anonymous_var_nameX1674);

int winchnstr(struct _win_st* anonymous_var_nameX1675, unsigned int* anonymous_var_nameX1676, int anonymous_var_nameX1677);

int winchstr(struct _win_st* anonymous_var_nameX1678, unsigned int* anonymous_var_nameX1679);

int winnstr(struct _win_st* anonymous_var_nameX1680, char* anonymous_var_nameX1681, int anonymous_var_nameX1682);

int winsch(struct _win_st* anonymous_var_nameX1683, unsigned int anonymous_var_nameX1684);

int winsdelln(struct _win_st* anonymous_var_nameX1685, int anonymous_var_nameX1686);

int winsertln(struct _win_st* anonymous_var_nameX1687);

int winsnstr(struct _win_st* anonymous_var_nameX1688, const char* anonymous_var_nameX1689, int anonymous_var_nameX1690);

int winsstr(struct _win_st* anonymous_var_nameX1691, const char* anonymous_var_nameX1692);

int winstr(struct _win_st* anonymous_var_nameX1693, char* anonymous_var_nameX1694);

int wmove(struct _win_st* anonymous_var_nameX1695, int anonymous_var_nameX1696, int anonymous_var_nameX1697);

int wnoutrefresh(struct _win_st* anonymous_var_nameX1698);

int wprintw(struct _win_st* anonymous_var_nameX1699, const char* anonymous_var_nameX1700, ...);

int wredrawln(struct _win_st* anonymous_var_nameX1701, int anonymous_var_nameX1702, int anonymous_var_nameX1703);

int wrefresh(struct _win_st* anonymous_var_nameX1704);

int wscanw(struct _win_st* anonymous_var_nameX1705, const char* anonymous_var_nameX1706, ...);

int wscrl(struct _win_st* anonymous_var_nameX1707, int anonymous_var_nameX1708);

int wsetscrreg(struct _win_st* anonymous_var_nameX1709, int anonymous_var_nameX1710, int anonymous_var_nameX1711);

int wstandout(struct _win_st* anonymous_var_nameX1712);

int wstandend(struct _win_st* anonymous_var_nameX1713);

void wsyncdown(struct _win_st* anonymous_var_nameX1714);

void wsyncup(struct _win_st* anonymous_var_nameX1715);

void wtimeout(struct _win_st* anonymous_var_nameX1716, int anonymous_var_nameX1717);

int wtouchln(struct _win_st* anonymous_var_nameX1718, int anonymous_var_nameX1719, int anonymous_var_nameX1720, int anonymous_var_nameX1721);

int wvline(struct _win_st* anonymous_var_nameX1722, unsigned int anonymous_var_nameX1723, int anonymous_var_nameX1724);

int tigetflag(const char* anonymous_var_nameX1725);

int tigetnum(const char* anonymous_var_nameX1726);

char* tigetstr(const char* anonymous_var_nameX1727);

int putp(const char* anonymous_var_nameX1728);

char* tparm(const char* anonymous_var_nameX1729, ...);

char* tiparm(const char* anonymous_var_nameX1730, ...);

char* tiparm_s(int anonymous_var_nameX1731, int anonymous_var_nameX1732, const char* anonymous_var_nameX1733, ...);

int tiscan_s(int* anonymous_var_nameX1734, int* anonymous_var_nameX1735, const char* anonymous_var_nameX1736);

int getattrs(const struct _win_st* anonymous_var_nameX1737);

int getcurx(const struct _win_st* anonymous_var_nameX1738);

int getcury(const struct _win_st* anonymous_var_nameX1739);

int getbegx(const struct _win_st* anonymous_var_nameX1740);

int getbegy(const struct _win_st* anonymous_var_nameX1741);

int getmaxx(const struct _win_st* anonymous_var_nameX1742);

int getmaxy(const struct _win_st* anonymous_var_nameX1743);

int getparx(const struct _win_st* anonymous_var_nameX1744);

int getpary(const struct _win_st* anonymous_var_nameX1745);

int alloc_pair(int anonymous_var_nameX1750, int anonymous_var_nameX1751);

int assume_default_colors(int anonymous_var_nameX1752, int anonymous_var_nameX1753);

const char* curses_version();

int define_key(const char* anonymous_var_nameX1754, int anonymous_var_nameX1755);

int extended_color_content(int anonymous_var_nameX1756, int* anonymous_var_nameX1757, int* anonymous_var_nameX1758, int* anonymous_var_nameX1759);

int extended_pair_content(int anonymous_var_nameX1760, int* anonymous_var_nameX1761, int* anonymous_var_nameX1762);

int extended_slk_color(int anonymous_var_nameX1763);

int find_pair(int anonymous_var_nameX1764, int anonymous_var_nameX1765);

int free_pair(int anonymous_var_nameX1766);

int get_escdelay();

int init_extended_color(int anonymous_var_nameX1767, int anonymous_var_nameX1768, int anonymous_var_nameX1769, int anonymous_var_nameX1770);

int init_extended_pair(int anonymous_var_nameX1771, int anonymous_var_nameX1772, int anonymous_var_nameX1773);

int is_cbreak();

int is_echo();

int is_nl();

int is_raw();

_Bool is_term_resized(int anonymous_var_nameX1774, int anonymous_var_nameX1775);

int key_defined(const char* anonymous_var_nameX1776);

char* keybound(int anonymous_var_nameX1777, int anonymous_var_nameX1778);

int keyok(int anonymous_var_nameX1779, _Bool anonymous_var_nameX1780);

void nofilter();

void reset_color_pairs();

int resize_term(int anonymous_var_nameX1781, int anonymous_var_nameX1782);

int resizeterm(int anonymous_var_nameX1783, int anonymous_var_nameX1784);

int set_escdelay(int anonymous_var_nameX1785);

int set_tabsize(int anonymous_var_nameX1786);

int use_default_colors();

int use_legacy_coding(int anonymous_var_nameX1787);

int use_screen(struct screen* anonymous_var_nameX1788, int (*anonymous_var_nameX1789)(struct screen*,void*), void* anonymous_var_nameX1790);

int use_window(struct _win_st* anonymous_var_nameX1791, int (*anonymous_var_nameX1792)(struct _win_st*,void*), void* anonymous_var_nameX1793);

int wresize(struct _win_st* anonymous_var_nameX1794, int anonymous_var_nameX1795, int anonymous_var_nameX1796);

int use_extended_names(_Bool anonymous_var_nameX1797);

struct _win_st* wgetparent(const struct _win_st* anonymous_var_nameX1798);

_Bool is_cleared(const struct _win_st* anonymous_var_nameX1799);

_Bool is_idcok(const struct _win_st* anonymous_var_nameX1800);

_Bool is_idlok(const struct _win_st* anonymous_var_nameX1801);

_Bool is_immedok(const struct _win_st* anonymous_var_nameX1802);

_Bool is_keypad(const struct _win_st* anonymous_var_nameX1803);

_Bool is_leaveok(const struct _win_st* anonymous_var_nameX1804);

_Bool is_nodelay(const struct _win_st* anonymous_var_nameX1805);

_Bool is_notimeout(const struct _win_st* anonymous_var_nameX1806);

_Bool is_pad(const struct _win_st* anonymous_var_nameX1807);

_Bool is_scrollok(const struct _win_st* anonymous_var_nameX1808);

_Bool is_subwin(const struct _win_st* anonymous_var_nameX1809);

_Bool is_syncok(const struct _win_st* anonymous_var_nameX1810);

int wgetdelay(const struct _win_st* anonymous_var_nameX1811);

int wgetscrreg(const struct _win_st* anonymous_var_nameX1812, int* anonymous_var_nameX1813, int* anonymous_var_nameX1814);

struct screen* new_prescr();

int baudrate_sp(struct screen* anonymous_var_nameX1817);

int beep_sp(struct screen* anonymous_var_nameX1818);

_Bool can_change_color_sp(struct screen* anonymous_var_nameX1819);

int cbreak_sp(struct screen* anonymous_var_nameX1820);

int curs_set_sp(struct screen* anonymous_var_nameX1821, int anonymous_var_nameX1822);

int color_content_sp(struct screen* anonymous_var_nameX1823, short short anonymous_var_nameX1824, short short* anonymous_var_nameX1825, short short* anonymous_var_nameX1826, short short* anonymous_var_nameX1827);

int def_prog_mode_sp(struct screen* anonymous_var_nameX1828);

int def_shell_mode_sp(struct screen* anonymous_var_nameX1829);

int delay_output_sp(struct screen* anonymous_var_nameX1830, int anonymous_var_nameX1831);

int doupdate_sp(struct screen* anonymous_var_nameX1832);

int echo_sp(struct screen* anonymous_var_nameX1833);

int endwin_sp(struct screen* anonymous_var_nameX1834);

char erasechar_sp(struct screen* anonymous_var_nameX1835);

void filter_sp(struct screen* anonymous_var_nameX1836);

int flash_sp(struct screen* anonymous_var_nameX1837);

int flushinp_sp(struct screen* anonymous_var_nameX1838);

struct _win_st* getwin_sp(struct screen* anonymous_var_nameX1839, struct _IO_FILE* anonymous_var_nameX1840);

int halfdelay_sp(struct screen* anonymous_var_nameX1841, int anonymous_var_nameX1842);

_Bool has_colors_sp(struct screen* anonymous_var_nameX1843);

_Bool has_ic_sp(struct screen* anonymous_var_nameX1844);

_Bool has_il_sp(struct screen* anonymous_var_nameX1845);

int init_color_sp(struct screen* anonymous_var_nameX1846, short short anonymous_var_nameX1847, short short anonymous_var_nameX1848, short short anonymous_var_nameX1849, short short anonymous_var_nameX1850);

int init_pair_sp(struct screen* anonymous_var_nameX1851, short short anonymous_var_nameX1852, short short anonymous_var_nameX1853, short short anonymous_var_nameX1854);

int intrflush_sp(struct screen* anonymous_var_nameX1855, struct _win_st* anonymous_var_nameX1856, _Bool anonymous_var_nameX1857);

_Bool isendwin_sp(struct screen* anonymous_var_nameX1858);

const char* keyname_sp(struct screen* anonymous_var_nameX1859, int anonymous_var_nameX1860);

char killchar_sp(struct screen* anonymous_var_nameX1861);

char* longname_sp(struct screen* anonymous_var_nameX1862);

int mvcur_sp(struct screen* anonymous_var_nameX1863, int anonymous_var_nameX1864, int anonymous_var_nameX1865, int anonymous_var_nameX1866, int anonymous_var_nameX1867);

int napms_sp(struct screen* anonymous_var_nameX1868, int anonymous_var_nameX1869);

struct _win_st* newpad_sp(struct screen* anonymous_var_nameX1870, int anonymous_var_nameX1871, int anonymous_var_nameX1872);

struct screen* newterm_sp(struct screen* anonymous_var_nameX1873, const char* anonymous_var_nameX1874, struct _IO_FILE* anonymous_var_nameX1875, struct _IO_FILE* anonymous_var_nameX1876);

struct _win_st* newwin_sp(struct screen* anonymous_var_nameX1877, int anonymous_var_nameX1878, int anonymous_var_nameX1879, int anonymous_var_nameX1880, int anonymous_var_nameX1881);

int nl_sp(struct screen* anonymous_var_nameX1882);

int nocbreak_sp(struct screen* anonymous_var_nameX1883);

int noecho_sp(struct screen* anonymous_var_nameX1884);

int nonl_sp(struct screen* anonymous_var_nameX1885);

void noqiflush_sp(struct screen* anonymous_var_nameX1886);

int noraw_sp(struct screen* anonymous_var_nameX1887);

int pair_content_sp(struct screen* anonymous_var_nameX1888, short short anonymous_var_nameX1889, short short* anonymous_var_nameX1890, short short* anonymous_var_nameX1891);

void qiflush_sp(struct screen* anonymous_var_nameX1892);

int raw_sp(struct screen* anonymous_var_nameX1893);

int reset_prog_mode_sp(struct screen* anonymous_var_nameX1894);

int reset_shell_mode_sp(struct screen* anonymous_var_nameX1895);

int resetty_sp(struct screen* anonymous_var_nameX1896);

int ripoffline_sp(struct screen* anonymous_var_nameX1897, int anonymous_var_nameX1898, int (*anonymous_lambda_var_nameZ7)(struct _win_st*,int));

int savetty_sp(struct screen* anonymous_var_nameX1901);

int scr_init_sp(struct screen* anonymous_var_nameX1902, const char* anonymous_var_nameX1903);

int scr_restore_sp(struct screen* anonymous_var_nameX1904, const char* anonymous_var_nameX1905);

int scr_set_sp(struct screen* anonymous_var_nameX1906, const char* anonymous_var_nameX1907);

int slk_attroff_sp(struct screen* anonymous_var_nameX1908, const unsigned int anonymous_var_nameX1909);

int slk_attron_sp(struct screen* anonymous_var_nameX1910, const unsigned int anonymous_var_nameX1911);

int slk_attrset_sp(struct screen* anonymous_var_nameX1912, const unsigned int anonymous_var_nameX1913);

unsigned int slk_attr_sp(struct screen* anonymous_var_nameX1914);

int slk_attr_set_sp(struct screen* anonymous_var_nameX1915, const unsigned int anonymous_var_nameX1916, short short anonymous_var_nameX1917, void* anonymous_var_nameX1918);

int slk_clear_sp(struct screen* anonymous_var_nameX1919);

int slk_color_sp(struct screen* anonymous_var_nameX1920, short short anonymous_var_nameX1921);

int slk_init_sp(struct screen* anonymous_var_nameX1922, int anonymous_var_nameX1923);

char* slk_label_sp(struct screen* anonymous_var_nameX1924, int anonymous_var_nameX1925);

int slk_noutrefresh_sp(struct screen* anonymous_var_nameX1926);

int slk_refresh_sp(struct screen* anonymous_var_nameX1927);

int slk_restore_sp(struct screen* anonymous_var_nameX1928);

int slk_set_sp(struct screen* anonymous_var_nameX1929, int anonymous_var_nameX1930, const char* anonymous_var_nameX1931, int anonymous_var_nameX1932);

int slk_touch_sp(struct screen* anonymous_var_nameX1933);

int start_color_sp(struct screen* anonymous_var_nameX1934);

unsigned int termattrs_sp(struct screen* anonymous_var_nameX1935);

char* termname_sp(struct screen* anonymous_var_nameX1936);

int typeahead_sp(struct screen* anonymous_var_nameX1937, int anonymous_var_nameX1938);

int ungetch_sp(struct screen* anonymous_var_nameX1939, int anonymous_var_nameX1940);

void use_env_sp(struct screen* anonymous_var_nameX1941, _Bool anonymous_var_nameX1942);

void use_tioctl_sp(struct screen* anonymous_var_nameX1943, _Bool anonymous_var_nameX1944);

int vidattr_sp(struct screen* anonymous_var_nameX1945, unsigned int anonymous_var_nameX1946);

int vidputs_sp(struct screen* anonymous_var_nameX1947, unsigned int anonymous_var_nameX1948, int (*anonymous_var_nameX1949)(struct screen*,int));

int alloc_pair_sp(struct screen* anonymous_var_nameX1950, int anonymous_var_nameX1951, int anonymous_var_nameX1952);

int assume_default_colors_sp(struct screen* anonymous_var_nameX1953, int anonymous_var_nameX1954, int anonymous_var_nameX1955);

int define_key_sp(struct screen* anonymous_var_nameX1956, const char* anonymous_var_nameX1957, int anonymous_var_nameX1958);

int extended_color_content_sp(struct screen* anonymous_var_nameX1959, int anonymous_var_nameX1960, int* anonymous_var_nameX1961, int* anonymous_var_nameX1962, int* anonymous_var_nameX1963);

int extended_pair_content_sp(struct screen* anonymous_var_nameX1964, int anonymous_var_nameX1965, int* anonymous_var_nameX1966, int* anonymous_var_nameX1967);

int extended_slk_color_sp(struct screen* anonymous_var_nameX1968, int anonymous_var_nameX1969);

int find_pair_sp(struct screen* anonymous_var_nameX1970, int anonymous_var_nameX1971, int anonymous_var_nameX1972);

int free_pair_sp(struct screen* anonymous_var_nameX1973, int anonymous_var_nameX1974);

int get_escdelay_sp(struct screen* anonymous_var_nameX1975);

int init_extended_color_sp(struct screen* anonymous_var_nameX1976, int anonymous_var_nameX1977, int anonymous_var_nameX1978, int anonymous_var_nameX1979, int anonymous_var_nameX1980);

int init_extended_pair_sp(struct screen* anonymous_var_nameX1981, int anonymous_var_nameX1982, int anonymous_var_nameX1983, int anonymous_var_nameX1984);

int is_cbreak_sp(struct screen* anonymous_var_nameX1985);

int is_echo_sp(struct screen* anonymous_var_nameX1986);

int is_nl_sp(struct screen* anonymous_var_nameX1987);

int is_raw_sp(struct screen* anonymous_var_nameX1988);

_Bool is_term_resized_sp(struct screen* anonymous_var_nameX1989, int anonymous_var_nameX1990, int anonymous_var_nameX1991);

int key_defined_sp(struct screen* anonymous_var_nameX1992, const char* anonymous_var_nameX1993);

char* keybound_sp(struct screen* anonymous_var_nameX1994, int anonymous_var_nameX1995, int anonymous_var_nameX1996);

int keyok_sp(struct screen* anonymous_var_nameX1997, int anonymous_var_nameX1998, _Bool anonymous_var_nameX1999);

void nofilter_sp(struct screen* anonymous_var_nameX2000);

void reset_color_pairs_sp(struct screen* anonymous_var_nameX2001);

int resize_term_sp(struct screen* anonymous_var_nameX2002, int anonymous_var_nameX2003, int anonymous_var_nameX2004);

int resizeterm_sp(struct screen* anonymous_var_nameX2005, int anonymous_var_nameX2006, int anonymous_var_nameX2007);

int set_escdelay_sp(struct screen* anonymous_var_nameX2008, int anonymous_var_nameX2009);

int set_tabsize_sp(struct screen* anonymous_var_nameX2010, int anonymous_var_nameX2011);

int use_default_colors_sp(struct screen* anonymous_var_nameX2012);

int use_legacy_coding_sp(struct screen* anonymous_var_nameX2013, int anonymous_var_nameX2014);

_Bool has_mouse();

int getmouse(struct anonymous_typeX4* anonymous_var_nameX2015);

int ungetmouse(struct anonymous_typeX4* anonymous_var_nameX2016);

unsigned int mousemask(unsigned int anonymous_var_nameX2017, unsigned int* anonymous_var_nameX2018);

_Bool wenclose(const struct _win_st* anonymous_var_nameX2019, int anonymous_var_nameX2020, int anonymous_var_nameX2021);

int mouseinterval(int anonymous_var_nameX2022);

_Bool wmouse_trafo(const struct _win_st* anonymous_var_nameX2023, int* anonymous_var_nameX2024, int* anonymous_var_nameX2025, _Bool anonymous_var_nameX2026);

_Bool mouse_trafo(int* anonymous_var_nameX2027, int* anonymous_var_nameX2028, _Bool anonymous_var_nameX2029);

_Bool has_mouse_sp(struct screen* anonymous_var_nameX2030);

int getmouse_sp(struct screen* anonymous_var_nameX2031, struct anonymous_typeX4* anonymous_var_nameX2032);

int ungetmouse_sp(struct screen* anonymous_var_nameX2033, struct anonymous_typeX4* anonymous_var_nameX2034);

unsigned int mousemask_sp(struct screen* anonymous_var_nameX2035, unsigned int anonymous_var_nameX2036, unsigned int* anonymous_var_nameX2037);

int mouseinterval_sp(struct screen* anonymous_var_nameX2038, int anonymous_var_nameX2039);

int mcprint(char* anonymous_var_nameX2040, int anonymous_var_nameX2041);

int has_key(int anonymous_var_nameX2042);

int has_key_sp(struct screen* anonymous_var_nameX2043, int anonymous_var_nameX2044);

int mcprint_sp(struct screen* anonymous_var_nameX2045, char* anonymous_var_nameX2046, int anonymous_var_nameX2047);

void _tracef(const char* anonymous_var_nameX2048, ...);

char* _traceattr(unsigned int anonymous_var_nameX2049);

char* _traceattr2(int anonymous_var_nameX2050, unsigned int anonymous_var_nameX2051);

char* _tracechar(int anonymous_var_nameX2052);

char* _tracechtype(unsigned int anonymous_var_nameX2053);

char* _tracechtype2(int anonymous_var_nameX2054, unsigned int anonymous_var_nameX2055);

void trace(const unsigned int anonymous_var_nameX2056);

unsigned int curses_trace(const unsigned int anonymous_var_nameX2057);

void exit_curses(int anonymous_var_nameX2058);

const char* unctrl(unsigned int anonymous_var_nameX2059);

const char* unctrl_sp(struct screen* anonymous_var_nameX2060, unsigned int anonymous_var_nameX2061);

int closedir(struct __dirstream* anonymous_var_nameX2062);

struct __dirstream* fdopendir(int anonymous_var_nameX2063);

struct __dirstream* opendir(const char* anonymous_var_nameX2064);

struct dirent* readdir(struct __dirstream* anonymous_var_nameX2065);

int readdir_r(struct __dirstream* anonymous_var_nameX2066, struct dirent* anonymous_var_nameX2067, struct dirent** anonymous_var_nameX2068);

void rewinddir(struct __dirstream* anonymous_var_nameX2069);

int dirfd(struct __dirstream* anonymous_var_nameX2070);

int alphasort(const struct dirent** anonymous_var_nameX2071, const struct dirent** anonymous_var_nameX2072);

int scandir(const char* anonymous_var_nameX2073, struct dirent*** anonymous_var_nameX2074, int (*anonymous_lambda_var_nameZ8)(const struct dirent*), int (*anonymous_lambda_var_nameZ9)(const struct dirent**,const struct dirent**));

void seekdir(struct __dirstream* anonymous_var_nameX2078, long anonymous_var_nameX2079);

long telldir(struct __dirstream* anonymous_var_nameX2080);

int getdents(int anonymous_var_nameX2081, struct dirent* anonymous_var_nameX2082, unsigned long int anonymous_var_nameX2083);

int versionsort(const struct dirent** anonymous_var_nameX2084, const struct dirent** anonymous_var_nameX2085);

int stat(const char* anonymous_var_nameX2086, struct stat* anonymous_var_nameX2087);

int fstat(int anonymous_var_nameX2088, struct stat* anonymous_var_nameX2089);

int lstat(const char* anonymous_var_nameX2090, struct stat* anonymous_var_nameX2091);

int fstatat(int anonymous_var_nameX2092, const char* anonymous_var_nameX2093, struct stat* anonymous_var_nameX2094, int anonymous_var_nameX2095);

int chmod(const char* anonymous_var_nameX2096, unsigned int anonymous_var_nameX2097);

int fchmod(int anonymous_var_nameX2098, unsigned int anonymous_var_nameX2099);

int fchmodat(int anonymous_var_nameX2100, const char* anonymous_var_nameX2101, unsigned int anonymous_var_nameX2102, int anonymous_var_nameX2103);

unsigned int umask(unsigned int anonymous_var_nameX2104);

int mkdir(const char* anonymous_var_nameX2105, unsigned int anonymous_var_nameX2106);

int mkfifo(const char* anonymous_var_nameX2107, unsigned int anonymous_var_nameX2108);

int mkdirat(int anonymous_var_nameX2109, const char* anonymous_var_nameX2110, unsigned int anonymous_var_nameX2111);

int mkfifoat(int anonymous_var_nameX2112, const char* anonymous_var_nameX2113, unsigned int anonymous_var_nameX2114);

int mknod(const char* anonymous_var_nameX2115, unsigned int anonymous_var_nameX2116, unsigned long int anonymous_var_nameX2117);

int mknodat(int anonymous_var_nameX2118, const char* anonymous_var_nameX2119, unsigned int anonymous_var_nameX2120, unsigned long int anonymous_var_nameX2121);

int futimens(int anonymous_var_nameX2122, const struct timespec anonymous_var_nameX2123[2]);

int utimensat(int anonymous_var_nameX2124, const char* anonymous_var_nameX2125, const struct timespec anonymous_var_nameX2126[2], int anonymous_var_nameX2127);

int lchmod(const char* anonymous_var_nameX2128, unsigned int anonymous_var_nameX2129);

int pipe(int anonymous_var_nameX2130[2]);

int pipe2(int anonymous_var_nameX2131[2], int anonymous_var_nameX2132);

int close(int anonymous_var_nameX2133);

int posix_close(int anonymous_var_nameX2134, int anonymous_var_nameX2135);

int dup(int anonymous_var_nameX2136);

int dup2(int anonymous_var_nameX2137, int anonymous_var_nameX2138);

int dup3(int anonymous_var_nameX2139, int anonymous_var_nameX2140, int anonymous_var_nameX2141);

long lseek(int anonymous_var_nameX2142, long anonymous_var_nameX2143, int anonymous_var_nameX2144);

int fsync(int anonymous_var_nameX2145);

int fdatasync(int anonymous_var_nameX2146);

long read(int anonymous_var_nameX2147, void* anonymous_var_nameX2148, unsigned long int anonymous_var_nameX2149);

long write(int anonymous_var_nameX2150, const void* anonymous_var_nameX2151, unsigned long int anonymous_var_nameX2152);

long pread(int anonymous_var_nameX2153, void* anonymous_var_nameX2154, unsigned long int anonymous_var_nameX2155, long anonymous_var_nameX2156);

long pwrite(int anonymous_var_nameX2157, const void* anonymous_var_nameX2158, unsigned long int anonymous_var_nameX2159, long anonymous_var_nameX2160);

int chown(const char* anonymous_var_nameX2161, unsigned int anonymous_var_nameX2162, unsigned int anonymous_var_nameX2163);

int fchown(int anonymous_var_nameX2164, unsigned int anonymous_var_nameX2165, unsigned int anonymous_var_nameX2166);

int lchown(const char* anonymous_var_nameX2167, unsigned int anonymous_var_nameX2168, unsigned int anonymous_var_nameX2169);

int fchownat(int anonymous_var_nameX2170, const char* anonymous_var_nameX2171, unsigned int anonymous_var_nameX2172, unsigned int anonymous_var_nameX2173, int anonymous_var_nameX2174);

int link(const char* anonymous_var_nameX2175, const char* anonymous_var_nameX2176);

int linkat(int anonymous_var_nameX2177, const char* anonymous_var_nameX2178, int anonymous_var_nameX2179, const char* anonymous_var_nameX2180, int anonymous_var_nameX2181);

int symlink(const char* anonymous_var_nameX2182, const char* anonymous_var_nameX2183);

int symlinkat(const char* anonymous_var_nameX2184, int anonymous_var_nameX2185, const char* anonymous_var_nameX2186);

long readlink(const char* anonymous_var_nameX2187, char* anonymous_var_nameX2188, unsigned long int anonymous_var_nameX2189);

long readlinkat(int anonymous_var_nameX2190, const char* anonymous_var_nameX2191, char* anonymous_var_nameX2192, unsigned long int anonymous_var_nameX2193);

int unlink(const char* anonymous_var_nameX2194);

int unlinkat(int anonymous_var_nameX2195, const char* anonymous_var_nameX2196, int anonymous_var_nameX2197);

int rmdir(const char* anonymous_var_nameX2198);

int truncate(const char* anonymous_var_nameX2199, long anonymous_var_nameX2200);

int ftruncate(int anonymous_var_nameX2201, long anonymous_var_nameX2202);

int access(const char* anonymous_var_nameX2203, int anonymous_var_nameX2204);

int faccessat(int anonymous_var_nameX2205, const char* anonymous_var_nameX2206, int anonymous_var_nameX2207, int anonymous_var_nameX2208);

int chdir(const char* anonymous_var_nameX2209);

int fchdir(int anonymous_var_nameX2210);

char* getcwd(char* anonymous_var_nameX2211, unsigned long int anonymous_var_nameX2212);

unsigned int alarm(unsigned int anonymous_var_nameX2213);

unsigned int sleep(unsigned int anonymous_var_nameX2214);

int pause();

int fork();

int _Fork();

int execve(const char* anonymous_var_nameX2215, char** anonymous_var_nameX2216, char** anonymous_var_nameX2217);

int execv(const char* anonymous_var_nameX2218, char** anonymous_var_nameX2219);

int execle(const char* anonymous_var_nameX2220, const char* anonymous_var_nameX2221, ...);

int execl(const char* anonymous_var_nameX2222, const char* anonymous_var_nameX2223, ...);

int execvp(const char* anonymous_var_nameX2224, char** anonymous_var_nameX2225);

int execlp(const char* anonymous_var_nameX2226, const char* anonymous_var_nameX2227, ...);

int fexecve(int anonymous_var_nameX2228, char** anonymous_var_nameX2229, char** anonymous_var_nameX2230);

void _exit(int anonymous_var_nameX2231);

int getpid();

int getppid();

int getpgrp();

int getpgid(int anonymous_var_nameX2232);

int setpgid(int anonymous_var_nameX2233, int anonymous_var_nameX2234);

int setsid();

int getsid(int anonymous_var_nameX2235);

char* ttyname(int anonymous_var_nameX2236);

int ttyname_r(int anonymous_var_nameX2237, char* anonymous_var_nameX2238, unsigned long int anonymous_var_nameX2239);

int isatty(int anonymous_var_nameX2240);

int tcgetpgrp(int anonymous_var_nameX2241);

int tcsetpgrp(int anonymous_var_nameX2242, int anonymous_var_nameX2243);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int anonymous_var_nameX2244, unsigned int* anonymous_var_nameX2245);

int setuid(unsigned int anonymous_var_nameX2246);

int seteuid(unsigned int anonymous_var_nameX2247);

int setgid(unsigned int anonymous_var_nameX2248);

int setegid(unsigned int anonymous_var_nameX2249);

char* getlogin();

int getlogin_r(char* anonymous_var_nameX2250, unsigned long int anonymous_var_nameX2251);

int gethostname(char* anonymous_var_nameX2252, unsigned long int anonymous_var_nameX2253);

char* ctermid(char* anonymous_var_nameX2254);

int getopt(int anonymous_var_nameX2255, char** anonymous_var_nameX2256, const char* anonymous_var_nameX2257);

long pathconf(const char* anonymous_var_nameX2258, int anonymous_var_nameX2259);

long fpathconf(int anonymous_var_nameX2260, int anonymous_var_nameX2261);

long sysconf(int anonymous_var_nameX2262);

unsigned long int confstr(int anonymous_var_nameX2263, char* anonymous_var_nameX2264, unsigned long int anonymous_var_nameX2265);

int setreuid(unsigned int anonymous_var_nameX2266, unsigned int anonymous_var_nameX2267);

int setregid(unsigned int anonymous_var_nameX2268, unsigned int anonymous_var_nameX2269);

int lockf(int anonymous_var_nameX2270, int anonymous_var_nameX2271, long anonymous_var_nameX2272);

long gethostid();

int nice(int anonymous_var_nameX2273);

void sync();

int setpgrp();

char* crypt(const char* anonymous_var_nameX2274, const char* anonymous_var_nameX2275);

void encrypt(char* anonymous_var_nameX2276, int anonymous_var_nameX2277);

void swab(const void* anonymous_var_nameX2278, void* anonymous_var_nameX2279, long anonymous_var_nameX2280);

int usleep(unsigned int anonymous_var_nameX2281);

unsigned int ualarm(unsigned int anonymous_var_nameX2282, unsigned int anonymous_var_nameX2283);

int brk(void* anonymous_var_nameX2284);

void* sbrk(long anonymous_var_nameX2285);

int vfork();

int vhangup();

int chroot(const char* anonymous_var_nameX2286);

int getpagesize();

int getdtablesize();

int sethostname(const char* anonymous_var_nameX2287, unsigned long int anonymous_var_nameX2288);

int getdomainname(char* anonymous_var_nameX2289, unsigned long int anonymous_var_nameX2290);

int setdomainname(const char* anonymous_var_nameX2291, unsigned long int anonymous_var_nameX2292);

int setgroups(unsigned long int anonymous_var_nameX2293, const unsigned int* anonymous_var_nameX2294);

char* getpass(const char* anonymous_var_nameX2295);

int daemon(int anonymous_var_nameX2296, int anonymous_var_nameX2297);

void setusershell();

void endusershell();

char* getusershell();

int acct(const char* anonymous_var_nameX2298);

long syscall(long anonymous_var_nameX2299, ...);

int execvpe(const char* anonymous_var_nameX2300, char** anonymous_var_nameX2301, char** anonymous_var_nameX2302);

int issetugid();

int getentropy(void* anonymous_var_nameX2303, unsigned long int anonymous_var_nameX2304);

int setresuid(unsigned int anonymous_var_nameX2305, unsigned int anonymous_var_nameX2306, unsigned int anonymous_var_nameX2307);

int setresgid(unsigned int anonymous_var_nameX2308, unsigned int anonymous_var_nameX2309, unsigned int anonymous_var_nameX2310);

int getresuid(unsigned int* anonymous_var_nameX2311, unsigned int* anonymous_var_nameX2312, unsigned int* anonymous_var_nameX2313);

int getresgid(unsigned int* anonymous_var_nameX2314, unsigned int* anonymous_var_nameX2315, unsigned int* anonymous_var_nameX2316);

char* get_current_dir_name();

int syncfs(int anonymous_var_nameX2317);

int euidaccess(const char* anonymous_var_nameX2318, int anonymous_var_nameX2319);

int eaccess(const char* anonymous_var_nameX2320, int anonymous_var_nameX2321);

long copy_file_range(int anonymous_var_nameX2322, long* anonymous_var_nameX2323, int anonymous_var_nameX2324, long* anonymous_var_nameX2325, unsigned long int anonymous_var_nameX2326, unsigned int anonymous_var_nameX2327);

int gettid();

int ioctl(int anonymous_var_nameX2328, int anonymous_var_nameX2329, ...);

int isalnum(int anonymous_var_nameX2358);

int isalpha(int anonymous_var_nameX2359);

int isblank(int anonymous_var_nameX2360);

int iscntrl(int anonymous_var_nameX2361);

int isdigit(int anonymous_var_nameX2362);

int isgraph(int anonymous_var_nameX2363);

int islower(int anonymous_var_nameX2364);

int isprint(int anonymous_var_nameX2365);

int ispunct(int anonymous_var_nameX2366);

int isspace(int anonymous_var_nameX2367);

int isupper(int anonymous_var_nameX2368);

int isxdigit(int anonymous_var_nameX2369);

int tolower(int anonymous_var_nameX2370);

int toupper(int anonymous_var_nameX2371);

int isalnum_l(int anonymous_var_nameX2375, struct __locale_struct* anonymous_var_nameX2376);

int isalpha_l(int anonymous_var_nameX2377, struct __locale_struct* anonymous_var_nameX2378);

int isblank_l(int anonymous_var_nameX2379, struct __locale_struct* anonymous_var_nameX2380);

int iscntrl_l(int anonymous_var_nameX2381, struct __locale_struct* anonymous_var_nameX2382);

int isdigit_l(int anonymous_var_nameX2383, struct __locale_struct* anonymous_var_nameX2384);

int isgraph_l(int anonymous_var_nameX2385, struct __locale_struct* anonymous_var_nameX2386);

int islower_l(int anonymous_var_nameX2387, struct __locale_struct* anonymous_var_nameX2388);

int isprint_l(int anonymous_var_nameX2389, struct __locale_struct* anonymous_var_nameX2390);

int ispunct_l(int anonymous_var_nameX2391, struct __locale_struct* anonymous_var_nameX2392);

int isspace_l(int anonymous_var_nameX2393, struct __locale_struct* anonymous_var_nameX2394);

int isupper_l(int anonymous_var_nameX2395, struct __locale_struct* anonymous_var_nameX2396);

int isxdigit_l(int anonymous_var_nameX2397, struct __locale_struct* anonymous_var_nameX2398);

int tolower_l(int anonymous_var_nameX2399, struct __locale_struct* anonymous_var_nameX2400);

int toupper_l(int anonymous_var_nameX2401, struct __locale_struct* anonymous_var_nameX2402);

int isascii(int anonymous_var_nameX2403);

int toascii(int anonymous_var_nameX2404);

char* tilde_expand(const char* anonymous_var_nameX2412);

char* tilde_expand_word(const char* anonymous_var_nameX2413);

char* tilde_find_word(const char* anonymous_var_nameX2414, int anonymous_var_nameX2415, int* anonymous_var_nameX2416);

int rl_digit_argument(int anonymous_var_nameX2417, int anonymous_var_nameX2418);

int rl_universal_argument(int anonymous_var_nameX2419, int anonymous_var_nameX2420);

int rl_forward_byte(int anonymous_var_nameX2421, int anonymous_var_nameX2422);

int rl_forward_char(int anonymous_var_nameX2423, int anonymous_var_nameX2424);

int rl_forward(int anonymous_var_nameX2425, int anonymous_var_nameX2426);

int rl_backward_byte(int anonymous_var_nameX2427, int anonymous_var_nameX2428);

int rl_backward_char(int anonymous_var_nameX2429, int anonymous_var_nameX2430);

int rl_backward(int anonymous_var_nameX2431, int anonymous_var_nameX2432);

int rl_beg_of_line(int anonymous_var_nameX2433, int anonymous_var_nameX2434);

int rl_end_of_line(int anonymous_var_nameX2435, int anonymous_var_nameX2436);

int rl_forward_word(int anonymous_var_nameX2437, int anonymous_var_nameX2438);

int rl_backward_word(int anonymous_var_nameX2439, int anonymous_var_nameX2440);

int rl_refresh_line(int anonymous_var_nameX2441, int anonymous_var_nameX2442);

int rl_clear_screen(int anonymous_var_nameX2443, int anonymous_var_nameX2444);

int rl_clear_display(int anonymous_var_nameX2445, int anonymous_var_nameX2446);

int rl_skip_csi_sequence(int anonymous_var_nameX2447, int anonymous_var_nameX2448);

int rl_arrow_keys(int anonymous_var_nameX2449, int anonymous_var_nameX2450);

int rl_previous_screen_line(int anonymous_var_nameX2451, int anonymous_var_nameX2452);

int rl_next_screen_line(int anonymous_var_nameX2453, int anonymous_var_nameX2454);

int rl_insert(int anonymous_var_nameX2455, int anonymous_var_nameX2456);

int rl_quoted_insert(int anonymous_var_nameX2457, int anonymous_var_nameX2458);

int rl_tab_insert(int anonymous_var_nameX2459, int anonymous_var_nameX2460);

int rl_newline(int anonymous_var_nameX2461, int anonymous_var_nameX2462);

int rl_do_lowercase_version(int anonymous_var_nameX2463, int anonymous_var_nameX2464);

int rl_rubout(int anonymous_var_nameX2465, int anonymous_var_nameX2466);

int rl_delete(int anonymous_var_nameX2467, int anonymous_var_nameX2468);

int rl_rubout_or_delete(int anonymous_var_nameX2469, int anonymous_var_nameX2470);

int rl_delete_horizontal_space(int anonymous_var_nameX2471, int anonymous_var_nameX2472);

int rl_delete_or_show_completions(int anonymous_var_nameX2473, int anonymous_var_nameX2474);

int rl_insert_comment(int anonymous_var_nameX2475, int anonymous_var_nameX2476);

int rl_upcase_word(int anonymous_var_nameX2477, int anonymous_var_nameX2478);

int rl_downcase_word(int anonymous_var_nameX2479, int anonymous_var_nameX2480);

int rl_capitalize_word(int anonymous_var_nameX2481, int anonymous_var_nameX2482);

int rl_transpose_words(int anonymous_var_nameX2483, int anonymous_var_nameX2484);

int rl_transpose_chars(int anonymous_var_nameX2485, int anonymous_var_nameX2486);

int rl_char_search(int anonymous_var_nameX2487, int anonymous_var_nameX2488);

int rl_backward_char_search(int anonymous_var_nameX2489, int anonymous_var_nameX2490);

int rl_beginning_of_history(int anonymous_var_nameX2491, int anonymous_var_nameX2492);

int rl_end_of_history(int anonymous_var_nameX2493, int anonymous_var_nameX2494);

int rl_get_next_history(int anonymous_var_nameX2495, int anonymous_var_nameX2496);

int rl_get_previous_history(int anonymous_var_nameX2497, int anonymous_var_nameX2498);

int rl_operate_and_get_next(int anonymous_var_nameX2499, int anonymous_var_nameX2500);

int rl_fetch_history(int anonymous_var_nameX2501, int anonymous_var_nameX2502);

int rl_set_mark(int anonymous_var_nameX2503, int anonymous_var_nameX2504);

int rl_exchange_point_and_mark(int anonymous_var_nameX2505, int anonymous_var_nameX2506);

int rl_vi_editing_mode(int anonymous_var_nameX2507, int anonymous_var_nameX2508);

int rl_emacs_editing_mode(int anonymous_var_nameX2509, int anonymous_var_nameX2510);

int rl_overwrite_mode(int anonymous_var_nameX2511, int anonymous_var_nameX2512);

int rl_re_read_init_file(int anonymous_var_nameX2513, int anonymous_var_nameX2514);

int rl_dump_functions(int anonymous_var_nameX2515, int anonymous_var_nameX2516);

int rl_dump_macros(int anonymous_var_nameX2517, int anonymous_var_nameX2518);

int rl_dump_variables(int anonymous_var_nameX2519, int anonymous_var_nameX2520);

int rl_complete(int anonymous_var_nameX2521, int anonymous_var_nameX2522);

int rl_possible_completions(int anonymous_var_nameX2523, int anonymous_var_nameX2524);

int rl_insert_completions(int anonymous_var_nameX2525, int anonymous_var_nameX2526);

int rl_old_menu_complete(int anonymous_var_nameX2527, int anonymous_var_nameX2528);

int rl_menu_complete(int anonymous_var_nameX2529, int anonymous_var_nameX2530);

int rl_backward_menu_complete(int anonymous_var_nameX2531, int anonymous_var_nameX2532);

int rl_kill_word(int anonymous_var_nameX2533, int anonymous_var_nameX2534);

int rl_backward_kill_word(int anonymous_var_nameX2535, int anonymous_var_nameX2536);

int rl_kill_line(int anonymous_var_nameX2537, int anonymous_var_nameX2538);

int rl_backward_kill_line(int anonymous_var_nameX2539, int anonymous_var_nameX2540);

int rl_kill_full_line(int anonymous_var_nameX2541, int anonymous_var_nameX2542);

int rl_unix_word_rubout(int anonymous_var_nameX2543, int anonymous_var_nameX2544);

int rl_unix_filename_rubout(int anonymous_var_nameX2545, int anonymous_var_nameX2546);

int rl_unix_line_discard(int anonymous_var_nameX2547, int anonymous_var_nameX2548);

int rl_copy_region_to_kill(int anonymous_var_nameX2549, int anonymous_var_nameX2550);

int rl_kill_region(int anonymous_var_nameX2551, int anonymous_var_nameX2552);

int rl_copy_forward_word(int anonymous_var_nameX2553, int anonymous_var_nameX2554);

int rl_copy_backward_word(int anonymous_var_nameX2555, int anonymous_var_nameX2556);

int rl_yank(int anonymous_var_nameX2557, int anonymous_var_nameX2558);

int rl_yank_pop(int anonymous_var_nameX2559, int anonymous_var_nameX2560);

int rl_yank_nth_arg(int anonymous_var_nameX2561, int anonymous_var_nameX2562);

int rl_yank_last_arg(int anonymous_var_nameX2563, int anonymous_var_nameX2564);

int rl_bracketed_paste_begin(int anonymous_var_nameX2565, int anonymous_var_nameX2566);

int rl_reverse_search_history(int anonymous_var_nameX2567, int anonymous_var_nameX2568);

int rl_forward_search_history(int anonymous_var_nameX2569, int anonymous_var_nameX2570);

int rl_start_kbd_macro(int anonymous_var_nameX2571, int anonymous_var_nameX2572);

int rl_end_kbd_macro(int anonymous_var_nameX2573, int anonymous_var_nameX2574);

int rl_call_last_kbd_macro(int anonymous_var_nameX2575, int anonymous_var_nameX2576);

int rl_print_last_kbd_macro(int anonymous_var_nameX2577, int anonymous_var_nameX2578);

int rl_revert_line(int anonymous_var_nameX2579, int anonymous_var_nameX2580);

int rl_undo_command(int anonymous_var_nameX2581, int anonymous_var_nameX2582);

int rl_tilde_expand(int anonymous_var_nameX2583, int anonymous_var_nameX2584);

int rl_restart_output(int anonymous_var_nameX2585, int anonymous_var_nameX2586);

int rl_stop_output(int anonymous_var_nameX2587, int anonymous_var_nameX2588);

int rl_abort(int anonymous_var_nameX2589, int anonymous_var_nameX2590);

int rl_tty_status(int anonymous_var_nameX2591, int anonymous_var_nameX2592);

int rl_history_search_forward(int anonymous_var_nameX2593, int anonymous_var_nameX2594);

int rl_history_search_backward(int anonymous_var_nameX2595, int anonymous_var_nameX2596);

int rl_history_substr_search_forward(int anonymous_var_nameX2597, int anonymous_var_nameX2598);

int rl_history_substr_search_backward(int anonymous_var_nameX2599, int anonymous_var_nameX2600);

int rl_noninc_forward_search(int anonymous_var_nameX2601, int anonymous_var_nameX2602);

int rl_noninc_reverse_search(int anonymous_var_nameX2603, int anonymous_var_nameX2604);

int rl_noninc_forward_search_again(int anonymous_var_nameX2605, int anonymous_var_nameX2606);

int rl_noninc_reverse_search_again(int anonymous_var_nameX2607, int anonymous_var_nameX2608);

int rl_insert_close(int anonymous_var_nameX2609, int anonymous_var_nameX2610);

void rl_callback_handler_install(const char* anonymous_var_nameX2611, void (*anonymous_var_nameX2612)(char*));

void rl_callback_read_char();

void rl_callback_handler_remove();

void rl_callback_sigcleanup();

int rl_vi_redo(int anonymous_var_nameX2613, int anonymous_var_nameX2614);

int rl_vi_undo(int anonymous_var_nameX2615, int anonymous_var_nameX2616);

int rl_vi_yank_arg(int anonymous_var_nameX2617, int anonymous_var_nameX2618);

int rl_vi_fetch_history(int anonymous_var_nameX2619, int anonymous_var_nameX2620);

int rl_vi_search_again(int anonymous_var_nameX2621, int anonymous_var_nameX2622);

int rl_vi_search(int anonymous_var_nameX2623, int anonymous_var_nameX2624);

int rl_vi_complete(int anonymous_var_nameX2625, int anonymous_var_nameX2626);

int rl_vi_tilde_expand(int anonymous_var_nameX2627, int anonymous_var_nameX2628);

int rl_vi_prev_word(int anonymous_var_nameX2629, int anonymous_var_nameX2630);

int rl_vi_next_word(int anonymous_var_nameX2631, int anonymous_var_nameX2632);

int rl_vi_end_word(int anonymous_var_nameX2633, int anonymous_var_nameX2634);

int rl_vi_insert_beg(int anonymous_var_nameX2635, int anonymous_var_nameX2636);

int rl_vi_append_mode(int anonymous_var_nameX2637, int anonymous_var_nameX2638);

int rl_vi_append_eol(int anonymous_var_nameX2639, int anonymous_var_nameX2640);

int rl_vi_eof_maybe(int anonymous_var_nameX2641, int anonymous_var_nameX2642);

int rl_vi_insertion_mode(int anonymous_var_nameX2643, int anonymous_var_nameX2644);

int rl_vi_insert_mode(int anonymous_var_nameX2645, int anonymous_var_nameX2646);

int rl_vi_movement_mode(int anonymous_var_nameX2647, int anonymous_var_nameX2648);

int rl_vi_arg_digit(int anonymous_var_nameX2649, int anonymous_var_nameX2650);

int rl_vi_change_case(int anonymous_var_nameX2651, int anonymous_var_nameX2652);

int rl_vi_put(int anonymous_var_nameX2653, int anonymous_var_nameX2654);

int rl_vi_column(int anonymous_var_nameX2655, int anonymous_var_nameX2656);

int rl_vi_delete_to(int anonymous_var_nameX2657, int anonymous_var_nameX2658);

int rl_vi_change_to(int anonymous_var_nameX2659, int anonymous_var_nameX2660);

int rl_vi_yank_to(int anonymous_var_nameX2661, int anonymous_var_nameX2662);

int rl_vi_yank_pop(int anonymous_var_nameX2663, int anonymous_var_nameX2664);

int rl_vi_rubout(int anonymous_var_nameX2665, int anonymous_var_nameX2666);

int rl_vi_delete(int anonymous_var_nameX2667, int anonymous_var_nameX2668);

int rl_vi_back_to_indent(int anonymous_var_nameX2669, int anonymous_var_nameX2670);

int rl_vi_unix_word_rubout(int anonymous_var_nameX2671, int anonymous_var_nameX2672);

int rl_vi_first_print(int anonymous_var_nameX2673, int anonymous_var_nameX2674);

int rl_vi_char_search(int anonymous_var_nameX2675, int anonymous_var_nameX2676);

int rl_vi_match(int anonymous_var_nameX2677, int anonymous_var_nameX2678);

int rl_vi_change_char(int anonymous_var_nameX2679, int anonymous_var_nameX2680);

int rl_vi_subst(int anonymous_var_nameX2681, int anonymous_var_nameX2682);

int rl_vi_overstrike(int anonymous_var_nameX2683, int anonymous_var_nameX2684);

int rl_vi_overstrike_delete(int anonymous_var_nameX2685, int anonymous_var_nameX2686);

int rl_vi_replace(int anonymous_var_nameX2687, int anonymous_var_nameX2688);

int rl_vi_set_mark(int anonymous_var_nameX2689, int anonymous_var_nameX2690);

int rl_vi_goto_mark(int anonymous_var_nameX2691, int anonymous_var_nameX2692);

int rl_vi_check();

int rl_vi_domove(int anonymous_var_nameX2693, int* anonymous_var_nameX2694);

int rl_vi_bracktype(int anonymous_var_nameX2695);

void rl_vi_start_inserting(int anonymous_var_nameX2696, int anonymous_var_nameX2697, int anonymous_var_nameX2698);

int rl_vi_fWord(int anonymous_var_nameX2699, int anonymous_var_nameX2700);

int rl_vi_bWord(int anonymous_var_nameX2701, int anonymous_var_nameX2702);

int rl_vi_eWord(int anonymous_var_nameX2703, int anonymous_var_nameX2704);

int rl_vi_fword(int anonymous_var_nameX2705, int anonymous_var_nameX2706);

int rl_vi_bword(int anonymous_var_nameX2707, int anonymous_var_nameX2708);

int rl_vi_eword(int anonymous_var_nameX2709, int anonymous_var_nameX2710);

char* readline(const char* anonymous_var_nameX2711);

int rl_set_prompt(const char* anonymous_var_nameX2712);

int rl_expand_prompt(char* anonymous_var_nameX2713);

int rl_initialize();

int rl_discard_argument();

int rl_add_defun(const char* anonymous_var_nameX2714, int (*anonymous_var_nameX2715)(int,int), int anonymous_var_nameX2716);

int rl_bind_key(int anonymous_var_nameX2717, int (*anonymous_var_nameX2718)(int,int));

int rl_bind_key_in_map(int anonymous_var_nameX2719, int (*anonymous_var_nameX2720)(int,int), struct _keymap_entry* anonymous_var_nameX2721);

int rl_unbind_key(int anonymous_var_nameX2722);

int rl_unbind_key_in_map(int anonymous_var_nameX2723, struct _keymap_entry* anonymous_var_nameX2724);

int rl_bind_key_if_unbound(int anonymous_var_nameX2725, int (*anonymous_var_nameX2726)(int,int));

int rl_bind_key_if_unbound_in_map(int anonymous_var_nameX2727, int (*anonymous_var_nameX2728)(int,int), struct _keymap_entry* anonymous_var_nameX2729);

int rl_unbind_function_in_map(int (*anonymous_var_nameX2730)(int,int), struct _keymap_entry* anonymous_var_nameX2731);

int rl_unbind_command_in_map(const char* anonymous_var_nameX2732, struct _keymap_entry* anonymous_var_nameX2733);

int rl_bind_keyseq(const char* anonymous_var_nameX2734, int (*anonymous_var_nameX2735)(int,int));

int rl_bind_keyseq_in_map(const char* anonymous_var_nameX2736, int (*anonymous_var_nameX2737)(int,int), struct _keymap_entry* anonymous_var_nameX2738);

int rl_bind_keyseq_if_unbound(const char* anonymous_var_nameX2739, int (*anonymous_var_nameX2740)(int,int));

int rl_bind_keyseq_if_unbound_in_map(const char* anonymous_var_nameX2741, int (*anonymous_var_nameX2742)(int,int), struct _keymap_entry* anonymous_var_nameX2743);

int rl_generic_bind(int anonymous_var_nameX2744, const char* anonymous_var_nameX2745, char* anonymous_var_nameX2746, struct _keymap_entry* anonymous_var_nameX2747);

char* rl_variable_value(const char* anonymous_var_nameX2748);

int rl_variable_bind(const char* anonymous_var_nameX2749, const char* anonymous_var_nameX2750);

int rl_set_key(const char* anonymous_var_nameX2751, int (*anonymous_var_nameX2752)(int,int), struct _keymap_entry* anonymous_var_nameX2753);

int rl_macro_bind(const char* anonymous_var_nameX2754, const char* anonymous_var_nameX2755, struct _keymap_entry* anonymous_var_nameX2756);

int rl_translate_keyseq(const char* anonymous_var_nameX2757, char* anonymous_var_nameX2758, int* anonymous_var_nameX2759);

char* rl_untranslate_keyseq(int anonymous_var_nameX2760);

int (*rl_named_function(const char* anonymous_var_nameX2761))(int,int);

int (*rl_function_of_keyseq(const char* anonymous_var_nameX2762, struct _keymap_entry* anonymous_var_nameX2763, int* anonymous_var_nameX2764))(int,int);

int (*rl_function_of_keyseq_len(const char* anonymous_var_nameX2765, unsigned long int anonymous_var_nameX2766, struct _keymap_entry* anonymous_var_nameX2767, int* anonymous_var_nameX2768))(int,int);

int rl_trim_arg_from_keyseq(const char* anonymous_var_nameX2769, unsigned long int anonymous_var_nameX2770, struct _keymap_entry* anonymous_var_nameX2771);

void rl_list_funmap_names();

char** rl_invoking_keyseqs_in_map(int (*anonymous_var_nameX2772)(int,int), struct _keymap_entry* anonymous_var_nameX2773);

char** rl_invoking_keyseqs(int (*anonymous_var_nameX2774)(int,int));

void rl_function_dumper(int anonymous_var_nameX2775);

void rl_macro_dumper(int anonymous_var_nameX2776);

void rl_variable_dumper(int anonymous_var_nameX2777);

int rl_read_init_file(const char* anonymous_var_nameX2778);

int rl_parse_and_bind(char* anonymous_var_nameX2779);

struct _keymap_entry* rl_make_bare_keymap();

int rl_empty_keymap(struct _keymap_entry* anonymous_var_nameX2780);

struct _keymap_entry* rl_copy_keymap(struct _keymap_entry* anonymous_var_nameX2781);

struct _keymap_entry* rl_make_keymap();

void rl_discard_keymap(struct _keymap_entry* anonymous_var_nameX2782);

void rl_free_keymap(struct _keymap_entry* anonymous_var_nameX2783);

struct _keymap_entry* rl_get_keymap_by_name(const char* anonymous_var_nameX2784);

char* rl_get_keymap_name(struct _keymap_entry* anonymous_var_nameX2785);

void rl_set_keymap(struct _keymap_entry* anonymous_var_nameX2786);

struct _keymap_entry* rl_get_keymap();

int rl_set_keymap_name(const char* anonymous_var_nameX2787, struct _keymap_entry* anonymous_var_nameX2788);

void rl_set_keymap_from_edit_mode();

char* rl_get_keymap_name_from_edit_mode();

int rl_add_funmap_entry(const char* anonymous_var_nameX2789, int (*anonymous_var_nameX2790)(int,int));

const char** rl_funmap_names();

void rl_initialize_funmap();

void rl_push_macro_input(char* anonymous_var_nameX2791);

void rl_add_undo(enum undo_code anonymous_var_nameX2792, int anonymous_var_nameX2793, int anonymous_var_nameX2794, char* anonymous_var_nameX2795);

void rl_free_undo_list();

int rl_do_undo();

int rl_begin_undo_group();

int rl_end_undo_group();

int rl_modifying(int anonymous_var_nameX2796, int anonymous_var_nameX2797);

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

int rl_show_char(int anonymous_var_nameX2798);

int rl_character_len(int anonymous_var_nameX2799, int anonymous_var_nameX2800);

void rl_redraw_prompt_last_line();

void rl_save_prompt();

void rl_restore_prompt();

void rl_replace_line(const char* anonymous_var_nameX2801, int anonymous_var_nameX2802);

int rl_insert_text(const char* anonymous_var_nameX2803);

int rl_delete_text(int anonymous_var_nameX2804, int anonymous_var_nameX2805);

int rl_kill_text(int anonymous_var_nameX2806, int anonymous_var_nameX2807);

char* rl_copy_text(int anonymous_var_nameX2808, int anonymous_var_nameX2809);

void rl_prep_terminal(int anonymous_var_nameX2810);

void rl_deprep_terminal();

void rl_tty_set_default_bindings(struct _keymap_entry* anonymous_var_nameX2811);

void rl_tty_unset_default_bindings(struct _keymap_entry* anonymous_var_nameX2812);

int rl_tty_set_echoing(int anonymous_var_nameX2813);

int rl_reset_terminal(const char* anonymous_var_nameX2814);

void rl_resize_terminal();

void rl_set_screen_size(int anonymous_var_nameX2815, int anonymous_var_nameX2816);

void rl_get_screen_size(int* anonymous_var_nameX2817, int* anonymous_var_nameX2818);

void rl_reset_screen_size();

char* rl_get_termcap(const char* anonymous_var_nameX2819);

int rl_stuff_char(int anonymous_var_nameX2820);

int rl_execute_next(int anonymous_var_nameX2821);

int rl_clear_pending_input();

int rl_read_key();

int rl_getc(struct _IO_FILE* anonymous_var_nameX2822);

int rl_set_keyboard_input_timeout(int anonymous_var_nameX2823);

int rl_set_timeout(unsigned int anonymous_var_nameX2824, unsigned int anonymous_var_nameX2825);

int rl_timeout_remaining(unsigned int* anonymous_var_nameX2826, unsigned int* anonymous_var_nameX2827);

void rl_extend_line_buffer(int anonymous_var_nameX2828);

int rl_ding();

int rl_alphabetic(int anonymous_var_nameX2829);

void rl_free(void* anonymous_var_nameX2830);

int rl_set_signals();

int rl_clear_signals();

void rl_cleanup_after_signal();

void rl_reset_after_signal();

void rl_free_line_state();

int rl_pending_signal();

void rl_check_signals();

void rl_echo_signal_char(int anonymous_var_nameX2831);

int rl_set_paren_blink_timeout(int anonymous_var_nameX2832);

void rl_clear_history();

int rl_maybe_save_line();

int rl_maybe_unsave_line();

int rl_maybe_replace_line();

int rl_complete_internal(int anonymous_var_nameX2833);

void rl_display_match_list(char** anonymous_var_nameX2834, int anonymous_var_nameX2835, int anonymous_var_nameX2836);

char** rl_completion_matches(const char* anonymous_var_nameX2837, char* (*anonymous_var_nameX2838)(const char*,int));

char* rl_username_completion_function(const char* anonymous_var_nameX2839, int anonymous_var_nameX2840);

char* rl_filename_completion_function(const char* anonymous_var_nameX2841, int anonymous_var_nameX2842);

int rl_completion_mode(int (*anonymous_var_nameX2843)(int,int));

int rl_save_state(struct readline_state* anonymous_var_nameX2844);

int rl_restore_state(struct readline_state* anonymous_var_nameX2845);

long clock();

long time(long* anonymous_var_nameX2846);

double difftime(long anonymous_var_nameX2847, long anonymous_var_nameX2848);

long mktime(struct tm* anonymous_var_nameX2849);

unsigned long int strftime(char* anonymous_var_nameX2850, unsigned long int anonymous_var_nameX2851, const char* anonymous_var_nameX2852, const struct tm* anonymous_var_nameX2853);

struct tm* gmtime(const long* anonymous_var_nameX2854);

struct tm* localtime(const long* anonymous_var_nameX2855);

char* asctime(const struct tm* anonymous_var_nameX2856);

char* ctime(const long* anonymous_var_nameX2857);

int timespec_get(struct timespec* anonymous_var_nameX2858, int anonymous_var_nameX2859);

unsigned long int strftime_l(char* anonymous_var_nameX2860, unsigned long int anonymous_var_nameX2861, const char* anonymous_var_nameX2862, const struct tm* anonymous_var_nameX2863, struct __locale_struct* anonymous_var_nameX2864);

struct tm* gmtime_r(const long* anonymous_var_nameX2865, struct tm* anonymous_var_nameX2866);

struct tm* localtime_r(const long* anonymous_var_nameX2867, struct tm* anonymous_var_nameX2868);

char* asctime_r(const struct tm* anonymous_var_nameX2869, char* anonymous_var_nameX2870);

char* ctime_r(const long* anonymous_var_nameX2871, char* anonymous_var_nameX2872);

void tzset();

int nanosleep(const struct timespec* anonymous_var_nameX2873, struct timespec* anonymous_var_nameX2874);

int clock_getres(int anonymous_var_nameX2875, struct timespec* anonymous_var_nameX2876);

int clock_gettime(int anonymous_var_nameX2877, struct timespec* anonymous_var_nameX2878);

int clock_settime(int anonymous_var_nameX2879, const struct timespec* anonymous_var_nameX2880);

int clock_nanosleep(int anonymous_var_nameX2881, int anonymous_var_nameX2882, const struct timespec* anonymous_var_nameX2883, struct timespec* anonymous_var_nameX2884);

int clock_getcpuclockid(int anonymous_var_nameX2885, int* anonymous_var_nameX2886);

int timer_create(int anonymous_var_nameX2887, struct sigevent* anonymous_var_nameX2888, void** anonymous_var_nameX2889);

int timer_delete(void* anonymous_var_nameX2890);

int timer_settime(void* anonymous_var_nameX2891, int anonymous_var_nameX2892, const struct itimerspec* anonymous_var_nameX2893, struct itimerspec* anonymous_var_nameX2894);

int timer_gettime(void* anonymous_var_nameX2895, struct itimerspec* anonymous_var_nameX2896);

int timer_getoverrun(void* anonymous_var_nameX2897);

char* strptime(const char* anonymous_var_nameX2898, const char* anonymous_var_nameX2899, struct tm* anonymous_var_nameX2900);

struct tm* getdate(const char* anonymous_var_nameX2901);

int stime(const long* anonymous_var_nameX2902);

long timegm(struct tm* anonymous_var_nameX2903);

void using_history();

struct _hist_state* history_get_history_state();

void history_set_history_state(struct _hist_state* anonymous_var_nameX2904);

void add_history(const char* anonymous_var_nameX2905);

void add_history_time(const char* anonymous_var_nameX2906);

struct _hist_entry* remove_history(int anonymous_var_nameX2907);

struct _hist_entry** remove_history_range(int anonymous_var_nameX2908, int anonymous_var_nameX2909);

struct _hist_entry* alloc_history_entry(char* anonymous_var_nameX2910, char* anonymous_var_nameX2911);

struct _hist_entry* copy_history_entry(struct _hist_entry* anonymous_var_nameX2912);

void* free_history_entry(struct _hist_entry* anonymous_var_nameX2913);

struct _hist_entry* replace_history_entry(int anonymous_var_nameX2914, const char* anonymous_var_nameX2915, void* anonymous_var_nameX2916);

void clear_history();

void stifle_history(int anonymous_var_nameX2917);

int unstifle_history();

int history_is_stifled();

struct _hist_entry** history_list();

int where_history();

struct _hist_entry* current_history();

struct _hist_entry* history_get(int anonymous_var_nameX2918);

long history_get_time(struct _hist_entry* anonymous_var_nameX2919);

int history_total_bytes();

int history_set_pos(int anonymous_var_nameX2920);

struct _hist_entry* previous_history();

struct _hist_entry* next_history();

int history_search(const char* anonymous_var_nameX2921, int anonymous_var_nameX2922);

int history_search_prefix(const char* anonymous_var_nameX2923, int anonymous_var_nameX2924);

int history_search_pos(const char* anonymous_var_nameX2925, int anonymous_var_nameX2926, int anonymous_var_nameX2927);

int read_history(const char* anonymous_var_nameX2928);

int read_history_range(const char* anonymous_var_nameX2929, int anonymous_var_nameX2930, int anonymous_var_nameX2931);

int write_history(const char* anonymous_var_nameX2932);

int append_history(int anonymous_var_nameX2933, const char* anonymous_var_nameX2934);

int history_truncate_file(const char* anonymous_var_nameX2935, int anonymous_var_nameX2936);

int history_expand(char* anonymous_var_nameX2937, char** anonymous_var_nameX2938);

char* history_arg_extract(int anonymous_var_nameX2939, int anonymous_var_nameX2940, const char* anonymous_var_nameX2941);

char* get_history_event(const char* anonymous_var_nameX2942, int* anonymous_var_nameX2943, int anonymous_var_nameX2944);

char** history_tokenize(const char* anonymous_var_nameX2945);

char* setlocale(int anonymous_var_nameX2946, const char* anonymous_var_nameX2947);

struct lconv* localeconv();

struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX2948);

void freelocale(struct __locale_struct* anonymous_var_nameX2949);

struct __locale_struct* newlocale(int anonymous_var_nameX2950, const char* anonymous_var_nameX2951, struct __locale_struct* anonymous_var_nameX2952);

struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX2953);

int xgetmaxx();

static void winsize_finalize(struct winsize* self);
int xgetmaxy();

static int lambda1(char* left, char* right);
void read_dir(struct sInfo* info);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
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

static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static void stat_finalize(struct stat* self);
char* cursor_path(struct sInfo* info);

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value);
char* cursor_file(struct sInfo* info);

char* selected_files(struct sInfo* info);

void search_file(struct sInfo* info);

void search_next_file(struct sInfo* info);

void search_prev_file(struct sInfo* info);

static struct list$1charph* list$1charph_reverse(struct list$1charph* self);
void select_files(struct sInfo* info);

static struct list$1charph* list$1charph_remove(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_delete(struct list$1charph* self, int head, int tail);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
void manual(struct sInfo* info);

void handmade_delete_file(char* path);

void handmade_selected_delete_file(struct sInfo* info);

void input(struct sInfo* info);

int main(int argc, char** argv);

static void sInfo_finalize(struct sInfo* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "/usr/local/include/neo-c.h"
    perror(msg);
    # 51 "/usr/local/include/neo-c.h"
    stackframe();
    # 52 "/usr/local/include/neo-c.h"
    exit(4);
    # 54 "/usr/local/include/neo-c.h"
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
    # 1942 "/usr/local/include/neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1942, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1943 "/usr/local/include/neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1944 "/usr/local/include/neo-c.h"
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
    # 1949 "/usr/local/include/neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1949, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1950 "/usr/local/include/neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1951 "/usr/local/include/neo-c.h"
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
    # 1956 "/usr/local/include/neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1956, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1957 "/usr/local/include/neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1958 "/usr/local/include/neo-c.h"
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
    # 1963 "/usr/local/include/neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1963, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1964 "/usr/local/include/neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1965 "/usr/local/include/neo-c.h"
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
    # 1970 "/usr/local/include/neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1970, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1971 "/usr/local/include/neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1972 "/usr/local/include/neo-c.h"
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
    # 1977 "/usr/local/include/neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1977, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1978 "/usr/local/include/neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1979 "/usr/local/include/neo-c.h"
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
    # 1992 "/usr/local/include/neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1992, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1994 "/usr/local/include/neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "/usr/local/include/neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1997 "/usr/local/include/neo-c.h"
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
    # 2002 "/usr/local/include/neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 2002, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2004 "/usr/local/include/neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "/usr/local/include/neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2007 "/usr/local/include/neo-c.h"
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
    # 2012 "/usr/local/include/neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 2012, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2014 "/usr/local/include/neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "/usr/local/include/neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2017 "/usr/local/include/neo-c.h"
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
    # 2022 "/usr/local/include/neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 2022, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2024 "/usr/local/include/neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "/usr/local/include/neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2027 "/usr/local/include/neo-c.h"
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
    # 2032 "/usr/local/include/neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 2032, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2034 "/usr/local/include/neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "/usr/local/include/neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2037 "/usr/local/include/neo-c.h"
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
    # 2203 "/usr/local/include/neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 2203, "smart_pointer$1char")))),self,len)));
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
    # 2208 "/usr/local/include/neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 2208, "smart_pointer$1short")))),self,len)));
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
    # 2213 "/usr/local/include/neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 2213, "smart_pointer$1int")))),self,len)));
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
    # 2218 "/usr/local/include/neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 2218, "smart_pointer$1long")))),self,len)));
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
    # 2223 "/usr/local/include/neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/neo-c.h", 2223, "smart_pointer$1float")))),self,len)));
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
    # 2228 "/usr/local/include/neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/neo-c.h", 2228, "smart_pointer$1double")))),self,len)));
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
    # 2233 "/usr/local/include/neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/neo-c.h", 2233, "list$1char")))),len,self)));
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
    # 2238 "/usr/local/include/neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/neo-c.h", 2238, "list$1short")))),len,self)));
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
    # 2243 "/usr/local/include/neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/neo-c.h", 2243, "list$1int")))),len,self)));
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
    # 2248 "/usr/local/include/neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/neo-c.h", 2248, "list$1long")))),len,self)));
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
    # 2253 "/usr/local/include/neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/neo-c.h", 2253, "list$1float")))),len,self)));
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
    # 2258 "/usr/local/include/neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/neo-c.h", 2258, "list$1double")))),len,self)));
    come_call_finalizer2(list$1doublep_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1doublep_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2288 "/usr/local/include/neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2293 "/usr/local/include/neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2298 "/usr/local/include/neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2303 "/usr/local/include/neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2308 "/usr/local/include/neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2313 "/usr/local/include/neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2374 "/usr/local/include/neo-c.h"
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
    # 2379 "/usr/local/include/neo-c.h"
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
    # 2384 "/usr/local/include/neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value79;
unsigned int* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 47 "/usr/local/include/neo-c-str.h"
    __result52__ = __result_obj__ = ((unsigned int*)(right_value79=wchar_tp_substring(str,head,tail)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 53 "/usr/local/include/neo-c-str.h"
    __result53__ = charp_index_count(str,search_str,count,default_value);
    return __result53__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 59 "/usr/local/include/neo-c-str.h"
    __result54__ = charp_index_regex_count(self,reg,count,default_value);
    return __result54__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 65 "/usr/local/include/neo-c-str.h"
    __result55__ = charp_rindex(str,search_str,default_value);
    return __result55__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 71 "/usr/local/include/neo-c-str.h"
    __result56__ = charp_rindex_regex(self,reg,default_value);
    return __result56__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 77 "/usr/local/include/neo-c-str.h"
    __result57__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result57__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value80;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 83 "/usr/local/include/neo-c-str.h"
    __result58__ = __result_obj__ = ((struct list$1charph*)(right_value80=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result58__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value81;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 89 "/usr/local/include/neo-c-str.h"
    __result59__ = __result_obj__ = ((struct list$1charph*)(right_value81=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result59__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value82;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    # 95 "/usr/local/include/neo-c-str.h"
    __result60__ = __result_obj__ = ((struct list$1charph*)(right_value82=charp_split_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result60__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value83;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    # 101 "/usr/local/include/neo-c-str.h"
    __result61__ = __result_obj__ = ((struct list$1charph*)(right_value83=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result61__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value84;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    # 107 "/usr/local/include/neo-c-str.h"
    __result62__ = __result_obj__ = ((struct list$1charph*)(right_value84=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer2(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result62__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value85;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    # 113 "/usr/local/include/neo-c-str.h"
    __result63__ = __result_obj__ = ((char*)(right_value85=charp_strip(self)));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value86;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    # 119 "/usr/local/include/neo-c-str.h"
    __result64__ = __result_obj__ = ((char*)(right_value86=string_printable(str)));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value87;
unsigned int* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    # 125 "/usr/local/include/neo-c-str.h"
    __result65__ = __result_obj__ = ((unsigned int*)(right_value87=charp_to_wstring(str)));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
void* right_value88;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    # 133 "/usr/local/include/neo-c-str.h"
    __result66__ = __result_obj__ = ((char*)(right_value88=wchar_tp_to_string(wstr)));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
void* right_value89;
void* right_value90;
unsigned int* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    # 138 "/usr/local/include/neo-c-str.h"
    __result67__ = __result_obj__ = ((unsigned int*)(right_value90=string_to_wstring(((char*)(right_value89=xsprintf("%d",self))))));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 144 "/usr/local/include/neo-c-str.h"
    __result68__ = wchar_tp_length(str);
    return __result68__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value91;
unsigned int* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    # 150 "/usr/local/include/neo-c-str.h"
    __result69__ = __result_obj__ = ((unsigned int*)(right_value91=wchar_tp_delete(str,head,tail)));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    # 156 "/usr/local/include/neo-c-str.h"
    __result70__ = wchar_tp_index(str,search_str,default_value);
    return __result70__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    # 162 "/usr/local/include/neo-c-str.h"
    __result71__ = wchar_tp_rindex(str,search_str,default_value);
    return __result71__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
void* right_value92;
unsigned int* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    # 168 "/usr/local/include/neo-c-str.h"
    __result72__ = __result_obj__ = ((unsigned int*)(right_value92=wchar_tp_reverse(str)));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
void* right_value93;
unsigned int* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    # 174 "/usr/local/include/neo-c-str.h"
    __result73__ = __result_obj__ = ((unsigned int*)(right_value93=wchar_tp_multiply(str,n)));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
void* right_value94;
unsigned int* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    # 180 "/usr/local/include/neo-c-str.h"
    __result74__ = __result_obj__ = ((unsigned int*)(right_value94=wchar_tp_printable(str)));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 202 "/usr/local/include/neo-c-str.h"
    __result75__ = wchar_tp_get_hash_key(value);
    return __result75__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 214 "/usr/local/include/neo-c-str.h"
    __result76__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result76__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 220 "/usr/local/include/neo-c-str.h"
    __result77__ = charp_index(str,search_str,default_value);
    return __result77__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 226 "/usr/local/include/neo-c-str.h"
    __result78__ = charp_index_regex(self,reg,default_value);
    return __result78__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
void* right_value95;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    # 233 "/usr/local/include/neo-c-str.h"
    __result79__ = __result_obj__ = ((char*)(right_value95=charp_replace(self,index,c)));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value96;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    # 239 "/usr/local/include/neo-c-str.h"
    __result80__ = __result_obj__ = ((char*)(right_value96=charp_multiply(str,n)));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value97;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    # 245 "/usr/local/include/neo-c-str.h"
    __result81__ = __result_obj__ = ((char*)(right_value97=charp_sub(self,reg,replace)));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value98;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    # 251 "/usr/local/include/neo-c-str.h"
    __result82__ = __result_obj__ = ((char*)(right_value98=charp_sub_count(self,reg,replace,count)));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value99;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    # 257 "/usr/local/include/neo-c-str.h"
    __result83__ = __result_obj__ = ((struct list$1charph*)(right_value99=charp_split_str(self,str)));
    come_call_finalizer2(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result83__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value100;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    # 263 "/usr/local/include/neo-c-str.h"
    __result84__ = __result_obj__ = ((struct list$1charph*)(right_value100=charp_scan(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result84__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value101;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    # 269 "/usr/local/include/neo-c-str.h"
    __result85__ = __result_obj__ = ((struct list$1charph*)(right_value101=charp_split(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result85__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 275 "/usr/local/include/neo-c-str.h"
    __result86__ = charp_match(self,reg);
    return __result86__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
void* right_value102;
struct list$1charph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    # 281 "/usr/local/include/neo-c-str.h"
    __result87__ = __result_obj__ = ((struct list$1charph*)(right_value102=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer2(list$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 287 "/usr/local/include/neo-c-str.h"
    __result88__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result88__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 293 "/usr/local/include/neo-c-str.h"
    __result89__ = charp_match_count(self,reg,count);
    return __result89__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value103;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    # 299 "/usr/local/include/neo-c-str.h"
    __result90__ = __result_obj__ = ((char*)(right_value103=charp_sub_block(self,reg,parent,block)));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value104;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    # 305 "/usr/local/include/neo-c-str.h"
    __result91__ = __result_obj__ = ((char*)(right_value104=charp_sub_block_count(self,reg,count,parent,block)));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value106;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    # 323 "/usr/local/include/neo-c-str.h"
    __result93__ = __result_obj__ = ((char*)(right_value106=string_chomp(str)));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}
static inline int __isspace(int _c){
void* __result_obj__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    # 28 "/usr/include/ctype.h"
    __result94__ = _c==32||(unsigned int)_c-9<5;
    return __result94__;
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 2044 "/usr/local/include/neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2044, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2046 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2048 "/usr/local/include/neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2050 "/usr/local/include/neo-c.h"
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
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1char"))));
                    come_call_finalizer2(list_item$1charp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_12->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_12->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_12->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_12;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1char"))));
                        come_call_finalizer2(list_item$1charp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_13->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_13->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_13->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_13;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1char"))));
                        come_call_finalizer2(list_item$1charp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_14->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_14->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_14->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_14;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_15=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_16=it_15;
                # 126 "/usr/local/include/neo-c.h"
                it_15=it_15->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1charp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1short"))));
                    come_call_finalizer2(list_item$1shortp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_18->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_18->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_18->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_18;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1short"))));
                        come_call_finalizer2(list_item$1shortp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_19->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_19->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_19->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_19;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1short"))));
                        come_call_finalizer2(list_item$1shortp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_20->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_20->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_20->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_20;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_21=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_22=it_21;
                # 126 "/usr/local/include/neo-c.h"
                it_21=it_21->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1shortp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1int"))));
                    come_call_finalizer2(list_item$1intp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_24->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_24->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_24->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_24;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1int"))));
                        come_call_finalizer2(list_item$1intp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_25->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_25->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_25->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_25;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1int"))));
                        come_call_finalizer2(list_item$1intp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_26->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_26->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_26->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_26;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_27=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_28=it_27;
                # 126 "/usr/local/include/neo-c.h"
                it_27=it_27->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1intp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1long"))));
                    come_call_finalizer2(list_item$1longp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_30->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_30->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_30->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_30;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1long"))));
                        come_call_finalizer2(list_item$1longp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_31->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_31->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_31->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_31;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1long"))));
                        come_call_finalizer2(list_item$1longp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_32->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_32->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_32->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_32;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_33=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_34=it_33;
                # 126 "/usr/local/include/neo-c.h"
                it_33=it_33->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1longp_finalize,prev_it_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1float"))));
                    come_call_finalizer2(list_item$1floatp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_36->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_36->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_36->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_36;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1float"))));
                        come_call_finalizer2(list_item$1floatp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_37->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_37->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_37->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_37;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1float"))));
                        come_call_finalizer2(list_item$1floatp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_38->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_38->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_38->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_38;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_39=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_40=it_39;
                # 126 "/usr/local/include/neo-c.h"
                it_39=it_39->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1floatp_finalize,prev_it_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 112 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 113 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 114 "/usr/local/include/neo-c.h"
        self->len=0;
        # 120 "/usr/local/include/neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 117 "/usr/local/include/neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 120 "/usr/local/include/neo-c.h"
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
                # 256 "/usr/local/include/neo-c.h"
                # 225 "/usr/local/include/neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 226 "/usr/local/include/neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1double"))));
                    come_call_finalizer2(list_item$1doublep_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/neo-c.h"
                    litem_42->prev=((void*)0);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_42->next=((void*)0);
                    # 230 "/usr/local/include/neo-c.h"
                    litem_42->item=item;
                    # 232 "/usr/local/include/neo-c.h"
                    self->tail=litem_42;
                    # 233 "/usr/local/include/neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 256 "/usr/local/include/neo-c.h"
                    # 235 "/usr/local/include/neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 236 "/usr/local/include/neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1double"))));
                        come_call_finalizer2(list_item$1doublep_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/neo-c.h"
                        litem_43->prev=self->head;
                        # 239 "/usr/local/include/neo-c.h"
                        litem_43->next=((void*)0);
                        # 240 "/usr/local/include/neo-c.h"
                        litem_43->item=item;
                        # 242 "/usr/local/include/neo-c.h"
                        self->tail=litem_43;
                        # 243 "/usr/local/include/neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 246 "/usr/local/include/neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1double"))));
                        come_call_finalizer2(list_item$1doublep_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/neo-c.h"
                        litem_44->prev=self->tail;
                        # 249 "/usr/local/include/neo-c.h"
                        litem_44->next=((void*)0);
                        # 250 "/usr/local/include/neo-c.h"
                        litem_44->item=item;
                        # 252 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_44;
                        # 253 "/usr/local/include/neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 256 "/usr/local/include/neo-c.h"
                self->len++;
                # 258 "/usr/local/include/neo-c.h"
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
            # 123 "/usr/local/include/neo-c.h"
            it_45=self->head;
            # 129 "/usr/local/include/neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 125 "/usr/local/include/neo-c.h"
                prev_it_46=it_45;
                # 126 "/usr/local/include/neo-c.h"
                it_45=it_45->next;
                # 127 "/usr/local/include/neo-c.h"
                come_call_finalizer2(list_item$1doublep_finalize,prev_it_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

















static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_47;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1charph*));
        # 123 "/usr/local/include/neo-c.h"
        it_47=self->head;
        # 129 "/usr/local/include/neo-c.h"
        while(_while_condtional7=it_47!=((void*)0),        _while_condtional7) {
            # 125 "/usr/local/include/neo-c.h"
            prev_it_48=it_47;
            # 126 "/usr/local/include/neo-c.h"
            it_47=it_47->next;
            # 127 "/usr/local/include/neo-c.h"
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1charphp_finalize"
                # 0 "list_item$1charphp_finalize"
                if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional19) {
                    # 0 "list_item$1charphp_finalize"
                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}




































int xgetmaxx(){
void* __result_obj__;
void* right_value107;
struct winsize* ws_49;
int result_50;
_Bool _if_conditional20;
int __result95__;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&ws_49, 0, sizeof(struct winsize*));
memset(&result_50, 0, sizeof(int));
    # 30 "main.c"
    ws_49=(struct winsize*)come_increment_ref_count(((struct winsize*)(right_value107=(struct winsize*)come_calloc(1, sizeof(struct winsize)*(1), "main.c", 30, "winsize"))));
    come_call_finalizer2(winsize_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 31 "main.c"
    ioctl(1,21523,ws_49);
    # 33 "main.c"
    result_50=ws_49->ws_col;
    # 42 "main.c"
    # 35 "main.c"
    if(_if_conditional20=result_50==-1||result_50==0,    _if_conditional20) {
        # 36 "main.c"
        __result95__ = getmaxx(stdscr);
        come_call_finalizer2(winsize_finalize,ws_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result95__;
    }
    else {
        # 39 "main.c"
        __result96__ = result_50;
        come_call_finalizer2(winsize_finalize,ws_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result96__;
    }
    # 42 "main.c"
    __result97__ = result_50;
    come_call_finalizer2(winsize_finalize,ws_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(winsize_finalize,ws_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void winsize_finalize(struct winsize* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int xgetmaxy(){
void* __result_obj__;
void* right_value108;
struct winsize* ws_51;
int result_52;
_Bool _if_conditional21;
int __result98__;
int __result99__;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&ws_51, 0, sizeof(struct winsize*));
memset(&result_52, 0, sizeof(int));
    # 47 "main.c"
    ws_51=(struct winsize*)come_increment_ref_count(((struct winsize*)(right_value108=(struct winsize*)come_calloc(1, sizeof(struct winsize)*(1), "main.c", 47, "winsize"))));
    come_call_finalizer2(winsize_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 48 "main.c"
    ioctl(1,21523,ws_51);
    # 50 "main.c"
    result_52=ws_51->ws_row;
    # 59 "main.c"
    # 52 "main.c"
    if(_if_conditional21=result_52==-1||result_52==0,    _if_conditional21) {
        # 53 "main.c"
        __result98__ = getmaxy(stdscr);
        come_call_finalizer2(winsize_finalize,ws_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result98__;
    }
    else {
        # 56 "main.c"
        __result99__ = result_52;
        come_call_finalizer2(winsize_finalize,ws_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result99__;
    }
    # 59 "main.c"
    __result100__ = result_52;
    come_call_finalizer2(winsize_finalize,ws_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(winsize_finalize,ws_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int lambda1(char* left, char* right){
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
        # 83 "main.c"
        __result111__ = strcmp(left,right);
        return __result111__;
}

void read_dir(struct sInfo* info){
void* __result_obj__;
void* right_value109;
void* right_value110;
struct list$1charph* __dec_obj12;
void* right_value111;
void* right_value112;
struct list$1charph* __dec_obj13;
struct __dirstream* dir_53;
_Bool _if_conditional22;
void* right_value116;
struct dirent* entry_57;
_Bool _while_condtional8;
void* right_value117;
void* right_value143;
struct list$1charph* __dec_obj20;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&dir_53, 0, sizeof(struct __dirstream*));
right_value116 = (void*)0;
memset(&entry_57, 0, sizeof(struct dirent*));
right_value117 = (void*)0;
right_value143 = (void*)0;
    # 64 "main.c"
    __dec_obj12=info->files;
    info->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 64, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 65 "main.c"
    __dec_obj13=info->selected_files;
    info->selected_files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "main.c", 65, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 67 "main.c"
    dir_53=opendir(info->path);
    # 76 "main.c"
    # 69 "main.c"
    if(_if_conditional22=dir_53==((void*)0),    _if_conditional22) {
        # 70 "main.c"
        info->cursor=0;
        # 71 "main.c"
        info->page=0;
        # 72 "main.c"
        list$1charph_push_back(info->files,(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string("NO FILES")))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 73 "main.c"
        return;
    }
    # 76 "main.c"
    # 81 "main.c"
    while(_while_condtional8=entry_57=readdir(dir_53),    _while_condtional8) {
        # 78 "main.c"
        list$1charph_push_back(info->files,(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(entry_57->d_name)))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 81 "main.c"
    closedir(dir_53);
    # 83 "main.c"
    __dec_obj20=info->files;
    info->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value143=list$1charph_sort_with_lambda(info->files,lambda1))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 106 "/usr/local/include/neo-c.h"
        self->len=0;
        # 108 "/usr/local/include/neo-c.h"
        __result101__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result101__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional23;
void* right_value113;
struct list_item$1charph* litem_54;
char* __dec_obj14;
_Bool _if_conditional24;
void* right_value114;
struct list_item$1charph* litem_55;
char* __dec_obj15;
void* right_value115;
struct list_item$1charph* litem_56;
char* __dec_obj16;
struct list$1charph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value114 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value115 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
            # 256 "/usr/local/include/neo-c.h"
            # 225 "/usr/local/include/neo-c.h"
            if(_if_conditional23=self->len==0,            _if_conditional23) {
                # 226 "/usr/local/include/neo-c.h"
                litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 226, "list_item$1charph"))));
                come_call_finalizer2(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "/usr/local/include/neo-c.h"
                litem_54->prev=((void*)0);
                # 229 "/usr/local/include/neo-c.h"
                litem_54->next=((void*)0);
                # 230 "/usr/local/include/neo-c.h"
                __dec_obj14=litem_54->item;
                litem_54->item=(char*)come_increment_ref_count(item);
                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 232 "/usr/local/include/neo-c.h"
                self->tail=litem_54;
                # 233 "/usr/local/include/neo-c.h"
                self->head=litem_54;
            }
            else {
                # 256 "/usr/local/include/neo-c.h"
                # 235 "/usr/local/include/neo-c.h"
                if(_if_conditional24=self->len==1,                _if_conditional24) {
                    # 236 "/usr/local/include/neo-c.h"
                    litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 236, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "/usr/local/include/neo-c.h"
                    litem_55->prev=self->head;
                    # 239 "/usr/local/include/neo-c.h"
                    litem_55->next=((void*)0);
                    # 240 "/usr/local/include/neo-c.h"
                    __dec_obj15=litem_55->item;
                    litem_55->item=(char*)come_increment_ref_count(item);
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 242 "/usr/local/include/neo-c.h"
                    self->tail=litem_55;
                    # 243 "/usr/local/include/neo-c.h"
                    self->head->next=litem_55;
                }
                else {
                    # 246 "/usr/local/include/neo-c.h"
                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 246, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "/usr/local/include/neo-c.h"
                    litem_56->prev=self->tail;
                    # 249 "/usr/local/include/neo-c.h"
                    litem_56->next=((void*)0);
                    # 250 "/usr/local/include/neo-c.h"
                    __dec_obj16=litem_56->item;
                    litem_56->item=(char*)come_increment_ref_count(item);
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 252 "/usr/local/include/neo-c.h"
                    self->tail->next=litem_56;
                    # 253 "/usr/local/include/neo-c.h"
                    self->tail=litem_56;
                }
            }
            # 256 "/usr/local/include/neo-c.h"
            self->len++;
            # 258 "/usr/local/include/neo-c.h"
            __result102__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result102__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*)){
void* __result_obj__;
void* right_value142;
struct list$1charph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
        # 835 "/usr/local/include/neo-c.h"
        __result110__ = __result_obj__ = ((struct list$1charph*)(right_value142=list$1charph_merge_sort_with_lambda(self,compare)));
        come_call_finalizer2(list$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result110__;
}

static struct list$1charph* list$1charph_merge_sort_with_lambda(struct list$1charph* self, int (*compare)(char*,char*)){
void* __result_obj__;
_Bool _if_conditional25;
void* right_value124;
struct list$1charph* __result106__;
_Bool _if_conditional29;
void* right_value125;
struct list$1charph* __result107__;
void* right_value126;
void* right_value127;
struct list$1charph* list1_63;
void* right_value128;
void* right_value129;
struct list$1charph* list2_64;
struct list_item$1charph* it_65;
_Bool _while_condtional10;
void* right_value130;
void* right_value131;
_Bool _if_conditional30;
_Bool _if_conditional31;
void* right_value132;
void* right_value133;
struct list$1charph* left_list_66;
void* right_value134;
struct list$1charph* right_list_67;
void* right_value141;
struct list$1charph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&list1_63, 0, sizeof(struct list$1charph*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&list2_64, 0, sizeof(struct list$1charph*));
memset(&it_65, 0, sizeof(struct list_item$1charph*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&left_list_66, 0, sizeof(struct list$1charph*));
right_value134 = (void*)0;
memset(&right_list_67, 0, sizeof(struct list$1charph*));
right_value141 = (void*)0;
            # 804 "/usr/local/include/neo-c.h"
            # 801 "/usr/local/include/neo-c.h"
            if(_if_conditional25=self->head==((void*)0),            _if_conditional25) {
                # 802 "/usr/local/include/neo-c.h"
                __result106__ = __result_obj__ = ((struct list$1charph*)(right_value124=list$1charph_clone(self)));
                come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result106__;
            }
            # 808 "/usr/local/include/neo-c.h"
            # 804 "/usr/local/include/neo-c.h"
            if(_if_conditional29=self->head->next==((void*)0),            _if_conditional29) {
                # 805 "/usr/local/include/neo-c.h"
                __result107__ = __result_obj__ = ((struct list$1charph*)(right_value125=list$1charph_clone(self)));
                come_call_finalizer2(list$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result107__;
            }
            # 808 "/usr/local/include/neo-c.h"
            list1_63=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 808, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 809 "/usr/local/include/neo-c.h"
            list2_64=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 809, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 811 "/usr/local/include/neo-c.h"
            it_65=self->head;
            # 829 "/usr/local/include/neo-c.h"
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                # 814 "/usr/local/include/neo-c.h"
                list$1charph_push_back(list1_63,(char*)come_increment_ref_count(((char*)(right_value130=string_clone(it_65->item)))));
                right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 815 "/usr/local/include/neo-c.h"
                list$1charph_push_back(list2_64,(char*)come_increment_ref_count(((char*)(right_value131=string_clone(it_65->next->item)))));
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 821 "/usr/local/include/neo-c.h"
                # 817 "/usr/local/include/neo-c.h"
                if(_if_conditional30=it_65->next->next==((void*)0),                _if_conditional30) {
                    # 818 "/usr/local/include/neo-c.h"
                    break;
                }
                # 821 "/usr/local/include/neo-c.h"
                it_65=it_65->next->next;
                # 827 "/usr/local/include/neo-c.h"
                # 823 "/usr/local/include/neo-c.h"
                if(_if_conditional31=it_65->next==((void*)0),                _if_conditional31) {
                    # 824 "/usr/local/include/neo-c.h"
                    list$1charph_push_back(list1_63,(char*)come_increment_ref_count(((char*)(right_value132=string_clone(it_65->item)))));
                    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 825 "/usr/local/include/neo-c.h"
                    break;
                }
            }
            # 829 "/usr/local/include/neo-c.h"
            left_list_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=list$1charph_merge_sort_with_lambda(list1_63,compare))));
            come_call_finalizer2(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 830 "/usr/local/include/neo-c.h"
            right_list_67=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_merge_sort_with_lambda(list2_64,compare))));
            come_call_finalizer2(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 832 "/usr/local/include/neo-c.h"
            __result109__ = __result_obj__ = ((struct list$1charph*)(right_value141=list$1charph_merge_list_with_lambda(left_list_66,right_list_67,compare)));
            come_call_finalizer2(list$1charphp_finalize,list1_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,list2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,left_list_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_list_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            return __result109__;
            come_call_finalizer2(list$1charphp_finalize,list1_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,list2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,left_list_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_list_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional26;
struct list$1charph* __result103__;
void* right_value118;
void* right_value119;
struct list$1charph* result_58;
struct list_item$1charph* it_59;
_Bool _while_condtional9;
void* right_value123;
struct list$1charph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_58, 0, sizeof(struct list$1charph*));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
                    # 142 "/usr/local/include/neo-c.h"
                    # 139 "/usr/local/include/neo-c.h"
                    if(_if_conditional26=self==((void*)0),                    _if_conditional26) {
                        # 140 "/usr/local/include/neo-c.h"
                        __result103__ = __result_obj__ = ((void*)0);
                        return __result103__;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    result_58=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value119=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value118=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "/usr/local/include/neo-c.h"
                    it_59=self->head;
                    # 151 "/usr/local/include/neo-c.h"
                    while(_while_condtional9=it_59!=((void*)0),                    _while_condtional9) {
                        # 146 "/usr/local/include/neo-c.h"
                        list$1charph_add(result_58,(char*)come_increment_ref_count(((char*)(right_value123=string_clone(it_59->item)))));
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "/usr/local/include/neo-c.h"
                        it_59=it_59->next;
                    }
                    # 151 "/usr/local/include/neo-c.h"
                    __result105__ = __result_obj__ = result_58;
                    come_call_finalizer2(list$1charphp_finalize,result_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer2(list$1charphp_finalize,result_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional27;
void* right_value120;
struct list_item$1charph* litem_60;
char* __dec_obj17;
_Bool _if_conditional28;
void* right_value121;
struct list_item$1charph* litem_61;
char* __dec_obj18;
void* right_value122;
struct list_item$1charph* litem_62;
char* __dec_obj19;
struct list$1charph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
right_value121 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1charph*));
right_value122 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1charph*));
                            # 186 "/usr/local/include/neo-c.h"
                            # 155 "/usr/local/include/neo-c.h"
                            if(_if_conditional27=self->len==0,                            _if_conditional27) {
                                # 156 "/usr/local/include/neo-c.h"
                                litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "/usr/local/include/neo-c.h"
                                litem_60->prev=((void*)0);
                                # 159 "/usr/local/include/neo-c.h"
                                litem_60->next=((void*)0);
                                # 160 "/usr/local/include/neo-c.h"
                                __dec_obj17=litem_60->item;
                                litem_60->item=(char*)come_increment_ref_count(item);
                                __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "/usr/local/include/neo-c.h"
                                self->tail=litem_60;
                                # 163 "/usr/local/include/neo-c.h"
                                self->head=litem_60;
                            }
                            else {
                                # 186 "/usr/local/include/neo-c.h"
                                # 165 "/usr/local/include/neo-c.h"
                                if(_if_conditional28=self->len==1,                                _if_conditional28) {
                                    # 166 "/usr/local/include/neo-c.h"
                                    litem_61=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "/usr/local/include/neo-c.h"
                                    litem_61->prev=self->head;
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_61->next=((void*)0);
                                    # 170 "/usr/local/include/neo-c.h"
                                    __dec_obj18=litem_61->item;
                                    litem_61->item=(char*)come_increment_ref_count(item);
                                    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "/usr/local/include/neo-c.h"
                                    self->tail=litem_61;
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_61;
                                }
                                else {
                                    # 176 "/usr/local/include/neo-c.h"
                                    litem_62=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "/usr/local/include/neo-c.h"
                                    litem_62->prev=self->tail;
                                    # 179 "/usr/local/include/neo-c.h"
                                    litem_62->next=((void*)0);
                                    # 180 "/usr/local/include/neo-c.h"
                                    __dec_obj19=litem_62->item;
                                    litem_62->item=(char*)come_increment_ref_count(item);
                                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_62;
                                    # 183 "/usr/local/include/neo-c.h"
                                    self->tail=litem_62;
                                }
                            }
                            # 186 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 188 "/usr/local/include/neo-c.h"
                            __result104__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result104__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_merge_list_with_lambda(struct list$1charph* left, struct list$1charph* right, int (*compare)(char*,char*)){
void* __result_obj__;
void* right_value135;
void* right_value136;
struct list$1charph* result_68;
struct list_item$1charph* it_69;
struct list_item$1charph* it2_70;
_Bool _while_condtional11;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
void* right_value137;
void* right_value138;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _while_condtional12;
void* right_value139;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _while_condtional13;
void* right_value140;
struct list$1charph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_68, 0, sizeof(struct list$1charph*));
memset(&it_69, 0, sizeof(struct list_item$1charph*));
memset(&it2_70, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
                # 749 "/usr/local/include/neo-c.h"
                result_68=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 749, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 751 "/usr/local/include/neo-c.h"
                it_69=left->head;
                # 752 "/usr/local/include/neo-c.h"
                it2_70=right->head;
                # 798 "/usr/local/include/neo-c.h"
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    # 776 "/usr/local/include/neo-c.h"
                    # 755 "/usr/local/include/neo-c.h"
                    if(_if_conditional32=it_69&&it2_70,                    _if_conditional32) {
                        # 774 "/usr/local/include/neo-c.h"
                        # 756 "/usr/local/include/neo-c.h"
                        if(_if_conditional33=it_69->item==((void*)0),                        _if_conditional33) {
                            # 757 "/usr/local/include/neo-c.h"
                            it_69=it_69->next;
                        }
                        else {
                            # 774 "/usr/local/include/neo-c.h"
                            # 759 "/usr/local/include/neo-c.h"
                            if(_if_conditional34=it2_70->item==((void*)0),                            _if_conditional34) {
                                # 760 "/usr/local/include/neo-c.h"
                                it2_70=it2_70->next;
                            }
                            else {
                                # 774 "/usr/local/include/neo-c.h"
                                # 762 "/usr/local/include/neo-c.h"
                                if(_if_conditional35=compare(it_69->item,it2_70->item)<=0,                                _if_conditional35) {
                                    # 764 "/usr/local/include/neo-c.h"
                                    list$1charph_push_back(result_68,(char*)come_increment_ref_count(((char*)(right_value137=string_clone(it_69->item)))));
                                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 766 "/usr/local/include/neo-c.h"
                                    it_69=it_69->next;
                                }
                                else {
                                    # 769 "/usr/local/include/neo-c.h"
                                    list$1charph_push_back(result_68,(char*)come_increment_ref_count(((char*)(right_value138=string_clone(it2_70->item)))));
                                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 772 "/usr/local/include/neo-c.h"
                                    it2_70=it2_70->next;
                                }
                            }
                        }
                    }
                    # 796 "/usr/local/include/neo-c.h"
                    # 776 "/usr/local/include/neo-c.h"
                    if(_if_conditional36=it_69==((void*)0),                    _if_conditional36) {
                        # 784 "/usr/local/include/neo-c.h"
                        # 777 "/usr/local/include/neo-c.h"
                        if(_if_conditional37=it2_70!=((void*)0),                        _if_conditional37) {
                            # 783 "/usr/local/include/neo-c.h"
                            while(_while_condtional12=it2_70!=((void*)0),                            _while_condtional12) {
                                # 779 "/usr/local/include/neo-c.h"
                                list$1charph_push_back(result_68,(char*)come_increment_ref_count(((char*)(right_value139=string_clone(it2_70->item)))));
                                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 781 "/usr/local/include/neo-c.h"
                                it2_70=it2_70->next;
                            }
                        }
                        # 784 "/usr/local/include/neo-c.h"
                        break;
                    }
                    else {
                        # 796 "/usr/local/include/neo-c.h"
                        # 786 "/usr/local/include/neo-c.h"
                        if(_if_conditional38=it2_70==((void*)0),                        _if_conditional38) {
                            # 794 "/usr/local/include/neo-c.h"
                            # 787 "/usr/local/include/neo-c.h"
                            if(_if_conditional39=it_69!=((void*)0),                            _if_conditional39) {
                                # 793 "/usr/local/include/neo-c.h"
                                while(_while_condtional13=it_69!=((void*)0),                                _while_condtional13) {
                                    # 789 "/usr/local/include/neo-c.h"
                                    list$1charph_push_back(result_68,(char*)come_increment_ref_count(((char*)(right_value140=string_clone(it_69->item)))));
                                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 791 "/usr/local/include/neo-c.h"
                                    it_69=it_69->next;
                                }
                            }
                            # 794 "/usr/local/include/neo-c.h"
                            break;
                        }
                    }
                }
                # 798 "/usr/local/include/neo-c.h"
                __result108__ = __result_obj__ = result_68;
                come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result108__;
                come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int lambda2(char* left, char* right){
void* __result_obj__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
        # 121 "main.c"
        __result112__ = strcmp(left,right);
        return __result112__;
}

void vd(struct sInfo* info){
void* __result_obj__;
void* right_value144;
char* line_71;
_Bool _if_conditional40;
void* right_value145;
char* cmdline_72;
struct _IO_FILE* f_74;
_Bool _if_conditional41;
void* right_value146;
void* right_value147;
_Bool _while_condtional14;
char* result_76;
_Bool _if_conditional42;
void* right_value148;
void* right_value149;
_Bool _if_conditional43;
void* right_value150;
struct list$1charph* __dec_obj21;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&line_71, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&cmdline_72, 0, sizeof(char*));
memset(&f_74, 0, sizeof(struct _IO_FILE*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&result_76, 0, sizeof(char*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
    # 88 "main.c"
    line_71=readline(((char*)(right_value144=charp_operator_add(getenv("PWD")," > "))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 94 "main.c"
    # 90 "main.c"
    if(_if_conditional40=line_71==((void*)0),    _if_conditional40) {
        # 91 "main.c"
        return;
    }
    # 94 "main.c"
    cmdline_72=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(line_71))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 96 "main.c"
    free(line_71);
    # 98 "main.c"
    char buf_73[1024];
    memset(&buf_73, 0, sizeof(char)    *(1024)    );
    # 100 "main.c"
    f_74=popen(cmdline_72,"r");
    # 104 "main.c"
    # 101 "main.c"
    if(_if_conditional41=f_74==((void*)0),    _if_conditional41) {
        # 102 "main.c"
        cmdline_72 = come_decrement_ref_count2(cmdline_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    # 104 "main.c"
    list$1charph_push_back(info->files,(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(".")))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 105 "main.c"
    list$1charph_push_back(info->files,(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string("..")))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 117 "main.c"
    while(_while_condtional14=1,    _while_condtional14) {
        # 108 "main.c"
        char file_75[4096];
        memset(&file_75, 0, sizeof(char)        *(4096)        );
        # 109 "main.c"
        result_76=fgets(file_75,4096,f_74);
        # 115 "main.c"
        # 111 "main.c"
        if(_if_conditional42=result_76==((void*)0),        _if_conditional42) {
            # 112 "main.c"
            break;
        }
        # 115 "main.c"
        list$1charph_push_back(info->files,(char*)come_increment_ref_count(((char*)(right_value149=string_chomp(((char*)(right_value148=__builtin_string(result_76))))))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 121 "main.c"
    # 117 "main.c"
    if(_if_conditional43=pclose(f_74)<0,    _if_conditional43) {
        # 118 "main.c"
        cmdline_72 = come_decrement_ref_count2(cmdline_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    # 121 "main.c"
    __dec_obj21=info->files;
    info->files=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_sort_with_lambda(info->files,lambda2))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    cmdline_72 = come_decrement_ref_count2(cmdline_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool change_directory(struct sInfo* info, char* path, char* cursor_file){
void* __result_obj__;
char* absolute_path_77;
void* right_value151;
char* absolute_path2_78;
char* __dec_obj22;
_Bool _if_conditional44;
int i_79;
struct list$1charph* o2_saved_80;
char* it_83;
_Bool _if_conditional49;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&absolute_path_77, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&absolute_path2_78, 0, sizeof(char*));
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1charph*));
memset(&it_83, 0, sizeof(char*));
    # 128 "main.c"
    absolute_path_77=realpath(path,((void*)0));
    # 130 "main.c"
    absolute_path2_78=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(absolute_path_77))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 132 "main.c"
    free(absolute_path_77);
    # 134 "main.c"
    __dec_obj22=info->path;
    info->path=(char*)come_increment_ref_count(absolute_path2_78);
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 135 "main.c"
    read_dir(info);
    # 137 "main.c"
    chdir(info->path);
    # 138 "main.c"
    setenv("PWD",info->path,1);
    # 157 "main.c"
    # 140 "main.c"
    if(cursor_file) {
        # 141 "main.c"
        i_79=0;
        # 151 "main.c"
        for(        o2_saved_80=(struct list$1charph*)come_increment_ref_count((info->files)),it_83=list$1charph_begin((o2_saved_80));        !list$1charph_end((o2_saved_80));        it_83=list$1charph_next((o2_saved_80))        ){
            # 149 "main.c"
            # 143 "main.c"
            if(_if_conditional49=strcmp(it_83,cursor_file)==0,            _if_conditional49) {
                # 144 "main.c"
                info->cursor=i_79;
                # 145 "main.c"
                fix_cursor(info);
                # 146 "main.c"
                break;
            }
            # 149 "main.c"
            i_79++;
        }
        come_call_finalizer2(list$1charphp_finalize,o2_saved_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 153 "main.c"
        info->cursor=0;
        # 154 "main.c"
        info->page=0;
    }
    # 157 "main.c"
    __result120__ = 1;
    absolute_path2_78 = come_decrement_ref_count2(absolute_path2_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result120__;
    absolute_path2_78 = come_decrement_ref_count2(absolute_path2_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional45;
char* result_81;
char* __result113__;
_Bool _if_conditional46;
char* __result114__;
char* result_82;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(char*));
memset(&result_82, 0, sizeof(char*));
            # 290 "/usr/local/include/neo-c.h"
            # 285 "/usr/local/include/neo-c.h"
            if(_if_conditional45=self==((void*)0),            _if_conditional45) {
                # 286 "/usr/local/include/neo-c.h"
                # 287 "/usr/local/include/neo-c.h"
                memset(&result_81,0,sizeof(char*));
                # 288 "/usr/local/include/neo-c.h"
                __result113__ = __result_obj__ = result_81;
                return __result113__;
            }
            # 290 "/usr/local/include/neo-c.h"
            self->it=self->head;
            # 296 "/usr/local/include/neo-c.h"
            # 292 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 293 "/usr/local/include/neo-c.h"
                __result114__ = __result_obj__ = self->it->item;
                return __result114__;
            }
            # 296 "/usr/local/include/neo-c.h"
            # 297 "/usr/local/include/neo-c.h"
            memset(&result_82,0,sizeof(char*));
            # 298 "/usr/local/include/neo-c.h"
            __result115__ = __result_obj__ = result_82;
            return __result115__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "/usr/local/include/neo-c.h"
            __result116__ = self==((void*)0)||self->it==((void*)0);
            return __result116__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional47;
char* result_84;
char* __result117__;
_Bool _if_conditional48;
char* __result118__;
char* result_85;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(char*));
memset(&result_85, 0, sizeof(char*));
            # 308 "/usr/local/include/neo-c.h"
            # 302 "/usr/local/include/neo-c.h"
            if(_if_conditional47=self==((void*)0)||self->it==((void*)0),            _if_conditional47) {
                # 303 "/usr/local/include/neo-c.h"
                # 304 "/usr/local/include/neo-c.h"
                memset(&result_84,0,sizeof(char*));
                # 305 "/usr/local/include/neo-c.h"
                __result117__ = __result_obj__ = result_84;
                return __result117__;
            }
            # 308 "/usr/local/include/neo-c.h"
            self->it=self->it->next;
            # 314 "/usr/local/include/neo-c.h"
            # 310 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 311 "/usr/local/include/neo-c.h"
                __result118__ = __result_obj__ = self->it->item;
                return __result118__;
            }
            # 314 "/usr/local/include/neo-c.h"
            # 315 "/usr/local/include/neo-c.h"
            memset(&result_85,0,sizeof(char*));
            # 316 "/usr/local/include/neo-c.h"
            __result119__ = __result_obj__ = result_85;
            return __result119__;
}

void fix_cursor(struct sInfo* info){
void* __result_obj__;
int maxx_86;
int maxy_87;
_Bool _if_conditional51;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&maxx_86, 0, sizeof(int));
memset(&maxy_87, 0, sizeof(int));
    # 163 "main.c"
    maxx_86=xgetmaxx();
    # 164 "main.c"
    maxy_87=xgetmaxy()-1;
    # 169 "main.c"
    # 166 "main.c"
    if(_if_conditional51=info->cursor>=list$1charph_length(info->files),    _if_conditional51) {
        # 167 "main.c"
        info->cursor=list$1charph_length(info->files)-1;
    }
    # 173 "main.c"
    # 169 "main.c"
    if(_if_conditional52=info->cursor<0,    _if_conditional52) {
        # 170 "main.c"
        info->cursor=0;
    }
    # 173 "main.c"
    info->page=info->cursor/(3*maxy_87);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional50;
int __result121__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "/usr/local/include/neo-c.h"
        # 364 "/usr/local/include/neo-c.h"
        if(_if_conditional50=self==((void*)0),        _if_conditional50) {
            # 365 "/usr/local/include/neo-c.h"
            __result121__ = 0;
            return __result121__;
        }
        # 367 "/usr/local/include/neo-c.h"
        __result122__ = self->len;
        return __result122__;
}

void view(struct sInfo* info){
void* __result_obj__;
int maxx_88;
int maxy_89;
int files_in_one_page_90;
int head_91;
int tail_92;
void* right_value154;
struct __current_stack1__ __current_stack1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&maxx_88, 0, sizeof(int));
memset(&maxy_89, 0, sizeof(int));
memset(&files_in_one_page_90, 0, sizeof(int));
memset(&head_91, 0, sizeof(int));
memset(&tail_92, 0, sizeof(int));
right_value154 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    # 178 "main.c"
    maxx_88=xgetmaxx();
    # 179 "main.c"
    maxy_89=xgetmaxy()-1;
    # 181 "main.c"
    werase(stdscr);
    # 183 "main.c"
    files_in_one_page_90=maxy_89*3;
    # 185 "main.c"
    head_91=info->page*files_in_one_page_90;
    # 186 "main.c"
    tail_92=(info->page+1)*files_in_one_page_90;
    # 241 "main.c"
    __current_stack1__.info = &info;
    __current_stack1__.maxx_88 = &maxx_88;
    __current_stack1__.maxy_89 = &maxy_89;
    __current_stack1__.files_in_one_page_90 = &files_in_one_page_90;
    __current_stack1__.head_91 = &head_91;
    __current_stack1__.tail_92 = &tail_92;
    list$1charph_each(((struct list$1charph*)(right_value154=list$1charph_sublist(info->files,head_91,tail_92))),&__current_stack1__,(void*)method_block1_mainc);
                        if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
    come_call_finalizer2(list$1charphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 241 "main.c"
    wattr_on(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
    # 242 "main.c"
    mvprintw(maxy_89,0,"%s page %d files %d head %d tail %d press ? for manual",info->path,info->page,list$1charph_length(info->files),head_91,tail_92);
    # 243 "main.c"
    wattr_off(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
    # 245 "main.c"
    wrefresh(stdscr);
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value152;
void* right_value153;
struct list$1charph* result_93;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct list_item$1charph* it_94;
int i_95;
_Bool _while_condtional15;
_Bool _if_conditional57;
struct list$1charph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1charph*));
memset(&it_94, 0, sizeof(struct list_item$1charph*));
memset(&i_95, 0, sizeof(int));
        # 646 "/usr/local/include/neo-c.h"
        result_93=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value153=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 646, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 652 "/usr/local/include/neo-c.h"
        # 648 "/usr/local/include/neo-c.h"
        if(_if_conditional53=begin<0,        _if_conditional53) {
            # 649 "/usr/local/include/neo-c.h"
            begin+=self->len;
        }
        # 656 "/usr/local/include/neo-c.h"
        # 652 "/usr/local/include/neo-c.h"
        if(_if_conditional54=tail<0,        _if_conditional54) {
            # 653 "/usr/local/include/neo-c.h"
            tail+=self->len+1;
        }
        # 660 "/usr/local/include/neo-c.h"
        # 656 "/usr/local/include/neo-c.h"
        if(_if_conditional55=begin<0,        _if_conditional55) {
            # 657 "/usr/local/include/neo-c.h"
            begin=0;
        }
        # 664 "/usr/local/include/neo-c.h"
        # 660 "/usr/local/include/neo-c.h"
        if(_if_conditional56=tail>=self->len,        _if_conditional56) {
            # 661 "/usr/local/include/neo-c.h"
            tail=self->len;
        }
        # 664 "/usr/local/include/neo-c.h"
        it_94=self->head;
        # 665 "/usr/local/include/neo-c.h"
        i_95=0;
        # 672 "/usr/local/include/neo-c.h"
        while(_while_condtional15=it_94!=((void*)0),        _while_condtional15) {
            # 670 "/usr/local/include/neo-c.h"
            # 667 "/usr/local/include/neo-c.h"
            if(_if_conditional57=i_95>=begin&&i_95<tail,            _if_conditional57) {
                # 668 "/usr/local/include/neo-c.h"
                list$1charph_push_back(result_93,(char*)come_increment_ref_count(it_94->item));
            }
            # 670 "/usr/local/include/neo-c.h"
            it_94=it_94->next;
            # 671 "/usr/local/include/neo-c.h"
            i_95++;
        }
        # 674 "/usr/local/include/neo-c.h"
        __result123__ = __result_obj__ = result_93;
        come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_each(struct list$1charph* self, void* parent, void (*block)(void*,char*,int,_Bool*)){
void* __result_obj__;
struct list_item$1charph* it_96;
int i_97;
_Bool _while_condtional16;
_Bool end_flag_98;
_Bool _if_conditional58;
struct list$1charph* __result124__;
_Bool _if_conditional59;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1charph*));
memset(&i_97, 0, sizeof(int));
memset(&end_flag_98, 0, sizeof(_Bool));
        # 324 "/usr/local/include/neo-c.h"
        it_96=self->head;
        # 325 "/usr/local/include/neo-c.h"
        i_97=0;
        # 341 "/usr/local/include/neo-c.h"
        while(_while_condtional16=it_96!=((void*)0),        _while_condtional16) {
            # 327 "/usr/local/include/neo-c.h"
            end_flag_98=(_Bool)0;
            # 328 "/usr/local/include/neo-c.h"
            block(parent,it_96->item,i_97,&end_flag_98);
            # 334 "/usr/local/include/neo-c.h"
            # 330 "/usr/local/include/neo-c.h"
            if(_if_conditional58=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional58) {
                # 331 "/usr/local/include/neo-c.h"
                __result124__ = __result_obj__ = self;
                return __result124__;
            }
            # 337 "/usr/local/include/neo-c.h"
            # 334 "/usr/local/include/neo-c.h"
            if(_if_conditional59=end_flag_98==(_Bool)1,            _if_conditional59) {
                # 335 "/usr/local/include/neo-c.h"
                break;
            }
            # 337 "/usr/local/include/neo-c.h"
            it_96=it_96->next;
            # 338 "/usr/local/include/neo-c.h"
            i_97++;
        }
        # 341 "/usr/local/include/neo-c.h"
        __result125__ = __result_obj__ = self;
        return __result125__;
}

void method_block1_mainc(struct __current_stack1__* parent, char* it, int it2, _Bool* it3){
void* __result_obj__;
void* right_value155;
void* right_value156;
void* right_value157;
char* path_99;
struct stat stat__100;
_Bool is_dir_101;
_Bool selected_103;
int index_104;
int cols_105;
int x_106;
int y_107;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value158;
void* right_value159;
_Bool _if_conditional64;
void* right_value160;
void* right_value161;
_Bool _if_conditional65;
_Bool _if_conditional66;
void* right_value162;
void* right_value163;
_Bool _if_conditional67;
void* right_value164;
void* right_value165;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&path_99, 0, sizeof(char*));
memset(&stat__100, 0, sizeof(struct stat));
memset(&is_dir_101, 0, sizeof(_Bool));
memset(&selected_103, 0, sizeof(_Bool));
memset(&index_104, 0, sizeof(int));
memset(&cols_105, 0, sizeof(int));
memset(&x_106, 0, sizeof(int));
memset(&y_107, 0, sizeof(int));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
        # 190 "main.c"
        path_99=(char*)come_increment_ref_count(((char*)(right_value157=string_operator_add((*(parent->info))->path,((char*)(right_value156=string_operator_add(((char*)(right_value155=__builtin_string("/"))),it)))))));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 192 "main.c"
        # 193 "main.c"
        (void)stat(path_99,&stat__100);
        # 194 "main.c"
        is_dir_101=(((stat__100.st_mode)&61440)==16384);
        # 195 "main.c"
        selected_103=list$1charph_contained((*(parent->info))->selected_files,it);
        # 197 "main.c"
        index_104=it2;
        # 198 "main.c"
        cols_105=(*(parent->maxx_88))/3;
        # 199 "main.c"
        x_106=(index_104/(*(parent->maxy_89)))*cols_105;
        # 200 "main.c"
        y_107=index_104%(*(parent->maxy_89));
        # 239 "main.c"
        # 201 "main.c"
        if(_if_conditional61=it2+(*(parent->head_91))==(*(parent->info))->cursor,        _if_conditional61) {
            # 202 "main.c"
            wattr_on(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
            # 220 "main.c"
            # 203 "main.c"
            if(selected_103) {
                # 210 "main.c"
                # 204 "main.c"
                if(is_dir_101) {
                    # 205 "main.c"
                    mvprintw(y_107,x_106,"* %s/",((char*)(right_value158=charp_substring(it,0,cols_105-3))));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 208 "main.c"
                    mvprintw(y_107,x_106,"* %s",((char*)(right_value159=charp_substring(it,0,cols_105-2))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 218 "main.c"
                # 212 "main.c"
                if(is_dir_101) {
                    # 213 "main.c"
                    mvprintw(y_107,x_106,"%s/",((char*)(right_value160=charp_substring(it,0,cols_105-1))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 216 "main.c"
                    mvprintw(y_107,x_106,"%s",((char*)(right_value161=charp_substring(it,0,cols_105))));
                    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            # 219 "main.c"
            wattr_off(stdscr,(unsigned int)((((unsigned int)((1))<<((10)+8)))),((void*)0));
        }
        else {
            # 238 "main.c"
            # 222 "main.c"
            if(selected_103) {
                # 229 "main.c"
                # 223 "main.c"
                if(is_dir_101) {
                    # 224 "main.c"
                    mvprintw(y_107,x_106,"* %s/",((char*)(right_value162=charp_substring(it,0,cols_105-3))));
                    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 227 "main.c"
                    mvprintw(y_107,x_106,"* %s",((char*)(right_value163=charp_substring(it,0,cols_105-2))));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 237 "main.c"
                # 231 "main.c"
                if(is_dir_101) {
                    # 232 "main.c"
                    mvprintw(y_107,x_106,"%s/",((char*)(right_value164=charp_substring(it,0,cols_105-1))));
                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 235 "main.c"
                    mvprintw(y_107,x_106,"%s",((char*)(right_value165=charp_substring(it,0,cols_105))));
                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        path_99 = come_decrement_ref_count2(path_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(stat_finalize,(&stat__100), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_102;
_Bool _if_conditional60;
_Bool __result126__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_102, 0, sizeof(char*));
            # 746 "/usr/local/include/neo-c.h"
            for(            it_102=list$1charph_begin(self);            !list$1charph_end(self);            it_102=list$1charph_next(self)            ){
                # 744 "/usr/local/include/neo-c.h"
                # 741 "/usr/local/include/neo-c.h"
                if(_if_conditional60=string_operator_equals(it_102,item),                _if_conditional60) {
                    # 742 "/usr/local/include/neo-c.h"
                    __result126__ = (_Bool)1;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            # 746 "/usr/local/include/neo-c.h"
            __result127__ = (_Bool)0;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result127__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void stat_finalize(struct stat* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* cursor_path(struct sInfo* info){
void* __result_obj__;
char* file_name_110;
void* right_value166;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&file_name_110, 0, sizeof(char*));
right_value166 = (void*)0;
    # 251 "main.c"
    file_name_110=list$1charph_item(info->files,info->cursor,((void*)0));
    # 252 "main.c"
    __result130__ = __result_obj__ = ((char*)(right_value166=xsprintf("%s/%s",info->path,file_name_110)));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value){
void* __result_obj__;
_Bool _if_conditional68;
struct list_item$1charph* it_108;
int i_109;
_Bool _while_condtional17;
_Bool _if_conditional69;
char* __result128__;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_108, 0, sizeof(struct list_item$1charph*));
memset(&i_109, 0, sizeof(int));
        # 349 "/usr/local/include/neo-c.h"
        # 345 "/usr/local/include/neo-c.h"
        if(_if_conditional68=position<0,        _if_conditional68) {
            # 346 "/usr/local/include/neo-c.h"
            position+=self->len;
        }
        # 349 "/usr/local/include/neo-c.h"
        it_108=self->head;
        # 350 "/usr/local/include/neo-c.h"
        i_109=0;
        # 357 "/usr/local/include/neo-c.h"
        while(_while_condtional17=it_108!=((void*)0),        _while_condtional17) {
            # 355 "/usr/local/include/neo-c.h"
            # 352 "/usr/local/include/neo-c.h"
            if(_if_conditional69=position==i_109,            _if_conditional69) {
                # 353 "/usr/local/include/neo-c.h"
                __result128__ = __result_obj__ = it_108->item;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result128__;
            }
            # 355 "/usr/local/include/neo-c.h"
            it_108=it_108->next;
            # 356 "/usr/local/include/neo-c.h"
            i_109++;
        }
        # 359 "/usr/local/include/neo-c.h"
        __result129__ = __result_obj__ = default_value;
        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result129__;
        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* cursor_file(struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    # 257 "main.c"
    __result131__ = __result_obj__ = ((char*)(right_value167=__builtin_string(list$1charph_item(info->files,info->cursor,((void*)0)))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

char* selected_files(struct sInfo* info){
void* __result_obj__;
void* right_value168;
void* right_value169;
struct buffer* buf_111;
struct list$1charph* o2_saved_112;
char* it_113;
void* right_value170;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&buf_111, 0, sizeof(struct buffer*));
memset(&o2_saved_112, 0, sizeof(struct list$1charph*));
memset(&it_113, 0, sizeof(char*));
right_value170 = (void*)0;
    # 262 "main.c"
    buf_111=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "main.c", 262, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 269 "main.c"
    for(    o2_saved_112=(struct list$1charph*)come_increment_ref_count((info->selected_files)),it_113=list$1charph_begin((o2_saved_112));    !list$1charph_end((o2_saved_112));    it_113=list$1charph_next((o2_saved_112))    ){
        # 264 "main.c"
        buffer_append_str(buf_111,"\"");
        # 265 "main.c"
        buffer_append_str(buf_111,it_113);
        # 266 "main.c"
        buffer_append_str(buf_111,"\"");
        # 267 "main.c"
        buffer_append_str(buf_111," ");
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 269 "main.c"
    __result132__ = __result_obj__ = ((char*)(right_value170=buffer_to_string(buf_111)));
    come_call_finalizer2(buffer_finalize,buf_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
    come_call_finalizer2(buffer_finalize,buf_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void search_file(struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* str_114;
_Bool _while_condtional18;
int key_115;
_Bool _if_conditional70;
void* right_value172;
char* __dec_obj23;
int n_116;
struct list$1charph* o2_saved_117;
char* it_118;
_Bool _if_conditional71;
void* right_value173;
char* __dec_obj24;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&str_114, 0, sizeof(char*));
memset(&key_115, 0, sizeof(int));
right_value172 = (void*)0;
memset(&n_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1charph*));
memset(&it_118, 0, sizeof(char*));
right_value173 = (void*)0;
    # 274 "main.c"
    str_114=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(""))));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 294 "main.c"
    while(_while_condtional18=1,    _while_condtional18) {
        # 276 "main.c"
        key_115=wgetch(stdscr);
        # 293 "main.c"
        # 278 "main.c"
        if(_if_conditional70=key_115>=32&&key_115<=126,        _if_conditional70) {
            # 279 "main.c"
            __dec_obj23=str_114;
            str_114=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s%c",str_114,key_115))));
            __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 280 "main.c"
            n_116=0;
            # 289 "main.c"
            for(            o2_saved_117=(struct list$1charph*)come_increment_ref_count((info->files)),it_118=list$1charph_begin((o2_saved_117));            !list$1charph_end((o2_saved_117));            it_118=list$1charph_next((o2_saved_117))            ){
                # 287 "main.c"
                # 282 "main.c"
                if(_if_conditional71=strcasestr(it_118,str_114),                _if_conditional71) {
                    # 283 "main.c"
                    info->cursor=n_116;
                    # 284 "main.c"
                    __dec_obj24=info->searching_str;
                    info->searching_str=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(str_114))));
                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 285 "main.c"
                    break;
                }
                # 287 "main.c"
                n_116++;
            }
            come_call_finalizer2(list$1charphp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 291 "main.c"
            break;
        }
    }
    str_114 = come_decrement_ref_count2(str_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void search_next_file(struct sInfo* info){
void* __result_obj__;
int n_119;
void* right_value174;
struct list$1charph* o2_saved_120;
char* it_121;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_119, 0, sizeof(int));
right_value174 = (void*)0;
memset(&o2_saved_120, 0, sizeof(struct list$1charph*));
memset(&it_121, 0, sizeof(char*));
    # 298 "main.c"
    n_119=info->cursor+1;
    # 306 "main.c"
    for(    o2_saved_120=(struct list$1charph*)come_increment_ref_count((((struct list$1charph*)(right_value174=list$1charph_sublist(info->files,n_119,-1))))),it_121=list$1charph_begin((o2_saved_120)) ,    come_call_finalizer2(list$1charphp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    0;    !list$1charph_end((o2_saved_120));    it_121=list$1charph_next((o2_saved_120))    ){
        # 304 "main.c"
        # 300 "main.c"
        if(_if_conditional72=strcasestr(it_121,info->searching_str),        _if_conditional72) {
            # 301 "main.c"
            info->cursor=n_119;
            # 302 "main.c"
            break;
        }
        # 304 "main.c"
        n_119++;
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void search_prev_file(struct sInfo* info){
void* __result_obj__;
int n_122;
void* right_value175;
void* right_value179;
struct list$1charph* o2_saved_125;
char* it_126;
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_122, 0, sizeof(int));
right_value175 = (void*)0;
right_value179 = (void*)0;
memset(&o2_saved_125, 0, sizeof(struct list$1charph*));
memset(&it_126, 0, sizeof(char*));
    # 310 "main.c"
    n_122=info->cursor-1;
    # 318 "main.c"
    for(    o2_saved_125=(struct list$1charph*)come_increment_ref_count((((struct list$1charph*)(right_value179=list$1charph_reverse(((struct list$1charph*)(right_value175=list$1charph_sublist(info->files,0,n_122+1)))))))),it_126=list$1charph_begin((o2_saved_125)) ,    come_call_finalizer2(list$1charphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    come_call_finalizer2(list$1charphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    0;    !list$1charph_end((o2_saved_125));    it_126=list$1charph_next((o2_saved_125))    ){
        # 316 "main.c"
        # 312 "main.c"
        if(_if_conditional73=strcasestr(it_126,info->searching_str),        _if_conditional73) {
            # 313 "main.c"
            info->cursor=n_122;
            # 314 "main.c"
            break;
        }
        # 316 "main.c"
        n_122--;
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reverse(struct list$1charph* self){
void* __result_obj__;
void* right_value176;
void* right_value177;
struct list$1charph* result_123;
struct list_item$1charph* it_124;
_Bool _while_condtional19;
void* right_value178;
struct list$1charph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&result_123, 0, sizeof(struct list$1charph*));
memset(&it_124, 0, sizeof(struct list_item$1charph*));
right_value178 = (void*)0;
        # 960 "/usr/local/include/neo-c.h"
        result_123=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 960, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 962 "/usr/local/include/neo-c.h"
        it_124=self->tail;
        # 966 "/usr/local/include/neo-c.h"
        while(_while_condtional19=it_124!=((void*)0),        _while_condtional19) {
            # 964 "/usr/local/include/neo-c.h"
            list$1charph_push_back(result_123,(char*)come_increment_ref_count(((char*)(right_value178=string_clone(it_124->item)))));
            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 965 "/usr/local/include/neo-c.h"
            it_124=it_124->prev;
        }
        # 968 "/usr/local/include/neo-c.h"
        __result133__ = __result_obj__ = result_123;
        come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result133__;
        come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void select_files(struct sInfo* info){
void* __result_obj__;
void* right_value180;
char* cursor_file_127;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&cursor_file_127, 0, sizeof(char*));
    # 322 "main.c"
    cursor_file_127=(char*)come_increment_ref_count(((char*)(right_value180=cursor_file(info))));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 330 "main.c"
    # 324 "main.c"
    if(_if_conditional74=list$1charph_contained(info->selected_files,(char*)come_increment_ref_count(cursor_file_127)),    _if_conditional74) {
        # 325 "main.c"
        list$1charph_remove(info->selected_files,(char*)come_increment_ref_count(cursor_file_127));
    }
    else {
        # 328 "main.c"
        list$1charph_add(info->selected_files,(char*)come_increment_ref_count(cursor_file_127));
    }
    cursor_file_127 = come_decrement_ref_count2(cursor_file_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_remove(struct list$1charph* self, char* item){
void* __result_obj__;
int it2_128;
struct list_item$1charph* it_129;
_Bool _while_condtional20;
_Bool _if_conditional75;
struct list$1charph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_128, 0, sizeof(int));
memset(&it_129, 0, sizeof(struct list_item$1charph*));
            # 448 "/usr/local/include/neo-c.h"
            it2_128=0;
            # 449 "/usr/local/include/neo-c.h"
            it_129=self->head;
            # 460 "/usr/local/include/neo-c.h"
            while(_while_condtional20=it_129!=((void*)0),            _while_condtional20) {
                # 455 "/usr/local/include/neo-c.h"
                # 451 "/usr/local/include/neo-c.h"
                if(_if_conditional75=string_equals(it_129->item,item),                _if_conditional75) {
                    # 452 "/usr/local/include/neo-c.h"
                    list$1charph_delete(self,it2_128,it2_128+1);
                    # 453 "/usr/local/include/neo-c.h"
                    break;
                }
                # 455 "/usr/local/include/neo-c.h"
                it2_128++;
                # 457 "/usr/local/include/neo-c.h"
                it_129=it_129->next;
            }
            # 460 "/usr/local/include/neo-c.h"
            __result137__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result137__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_delete(struct list$1charph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
int tmp_130;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list$1charph* __result134__;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list_item$1charph* it_133;
int i_134;
_Bool _while_condtional22;
_Bool _if_conditional84;
struct list_item$1charph* prev_it_135;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct list_item$1charph* it_136;
int i_137;
_Bool _while_condtional23;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list_item$1charph* prev_it_138;
struct list_item$1charph* it_139;
struct list_item$1charph* head_prev_it_140;
struct list_item$1charph* tail_it_141;
int i_142;
_Bool _while_condtional24;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct list_item$1charph* prev_it_143;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list$1charph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_130, 0, sizeof(int));
memset(&it_133, 0, sizeof(struct list_item$1charph*));
memset(&i_134, 0, sizeof(int));
memset(&prev_it_135, 0, sizeof(struct list_item$1charph*));
memset(&it_136, 0, sizeof(struct list_item$1charph*));
memset(&i_137, 0, sizeof(int));
memset(&prev_it_138, 0, sizeof(struct list_item$1charph*));
memset(&it_139, 0, sizeof(struct list_item$1charph*));
memset(&head_prev_it_140, 0, sizeof(struct list_item$1charph*));
memset(&tail_it_141, 0, sizeof(struct list_item$1charph*));
memset(&i_142, 0, sizeof(int));
memset(&prev_it_143, 0, sizeof(struct list_item$1charph*));
                        # 467 "/usr/local/include/neo-c.h"
                        # 464 "/usr/local/include/neo-c.h"
                        if(_if_conditional76=head<0,                        _if_conditional76) {
                            # 465 "/usr/local/include/neo-c.h"
                            head+=self->len;
                        }
                        # 471 "/usr/local/include/neo-c.h"
                        # 467 "/usr/local/include/neo-c.h"
                        if(_if_conditional77=tail<0,                        _if_conditional77) {
                            # 468 "/usr/local/include/neo-c.h"
                            tail+=self->len+1;
                        }
                        # 477 "/usr/local/include/neo-c.h"
                        # 471 "/usr/local/include/neo-c.h"
                        if(_if_conditional78=head>tail,                        _if_conditional78) {
                            # 472 "/usr/local/include/neo-c.h"
                            tmp_130=tail;
                            # 473 "/usr/local/include/neo-c.h"
                            tail=head;
                            # 474 "/usr/local/include/neo-c.h"
                            head=tmp_130;
                        }
                        # 481 "/usr/local/include/neo-c.h"
                        # 477 "/usr/local/include/neo-c.h"
                        if(_if_conditional79=head<0,                        _if_conditional79) {
                            # 478 "/usr/local/include/neo-c.h"
                            head=0;
                        }
                        # 485 "/usr/local/include/neo-c.h"
                        # 481 "/usr/local/include/neo-c.h"
                        if(_if_conditional80=tail>self->len,                        _if_conditional80) {
                            # 482 "/usr/local/include/neo-c.h"
                            tail=self->len;
                        }
                        # 489 "/usr/local/include/neo-c.h"
                        # 485 "/usr/local/include/neo-c.h"
                        if(_if_conditional81=head==tail,                        _if_conditional81) {
                            # 486 "/usr/local/include/neo-c.h"
                            __result134__ = __result_obj__ = self;
                            return __result134__;
                        }
                        # 584 "/usr/local/include/neo-c.h"
                        # 489 "/usr/local/include/neo-c.h"
                        if(_if_conditional82=head==0&&tail==self->len,                        _if_conditional82) {
                            # 491 "/usr/local/include/neo-c.h"
                            list$1charph_reset(self);
                        }
                        else {
                            # 584 "/usr/local/include/neo-c.h"
                            # 493 "/usr/local/include/neo-c.h"
                            if(_if_conditional83=head==0,                            _if_conditional83) {
                                # 494 "/usr/local/include/neo-c.h"
                                it_133=self->head;
                                # 495 "/usr/local/include/neo-c.h"
                                i_134=0;
                                # 517 "/usr/local/include/neo-c.h"
                                while(_while_condtional22=it_133!=((void*)0),                                _while_condtional22) {
                                    # 516 "/usr/local/include/neo-c.h"
                                    # 497 "/usr/local/include/neo-c.h"
                                    if(_if_conditional84=i_134<tail,                                    _if_conditional84) {
                                        # 498 "/usr/local/include/neo-c.h"
                                        prev_it_135=it_133;
                                        # 500 "/usr/local/include/neo-c.h"
                                        it_133=it_133->next;
                                        # 501 "/usr/local/include/neo-c.h"
                                        i_134++;
                                        # 503 "/usr/local/include/neo-c.h"
                                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 505 "/usr/local/include/neo-c.h"
                                        self->len--;
                                    }
                                    else {
                                        # 516 "/usr/local/include/neo-c.h"
                                        # 507 "/usr/local/include/neo-c.h"
                                        if(_if_conditional85=i_134==tail,                                        _if_conditional85) {
                                            # 508 "/usr/local/include/neo-c.h"
                                            self->head=it_133;
                                            # 509 "/usr/local/include/neo-c.h"
                                            self->head->prev=((void*)0);
                                            # 510 "/usr/local/include/neo-c.h"
                                            break;
                                        }
                                        else {
                                            # 513 "/usr/local/include/neo-c.h"
                                            it_133=it_133->next;
                                            # 514 "/usr/local/include/neo-c.h"
                                            i_134++;
                                        }
                                    }
                                }
                            }
                            else {
                                # 584 "/usr/local/include/neo-c.h"
                                # 518 "/usr/local/include/neo-c.h"
                                if(_if_conditional86=tail==self->len,                                _if_conditional86) {
                                    # 519 "/usr/local/include/neo-c.h"
                                    it_136=self->head;
                                    # 520 "/usr/local/include/neo-c.h"
                                    i_137=0;
                                    # 542 "/usr/local/include/neo-c.h"
                                    while(_while_condtional23=it_136!=((void*)0),                                    _while_condtional23) {
                                        # 527 "/usr/local/include/neo-c.h"
                                        # 522 "/usr/local/include/neo-c.h"
                                        if(_if_conditional87=i_137==head,                                        _if_conditional87) {
                                            # 523 "/usr/local/include/neo-c.h"
                                            self->tail=it_136->prev;
                                            # 524 "/usr/local/include/neo-c.h"
                                            self->tail->next=((void*)0);
                                        }
                                        # 541 "/usr/local/include/neo-c.h"
                                        # 527 "/usr/local/include/neo-c.h"
                                        if(_if_conditional88=i_137>=head,                                        _if_conditional88) {
                                            # 528 "/usr/local/include/neo-c.h"
                                            prev_it_138=it_136;
                                            # 530 "/usr/local/include/neo-c.h"
                                            it_136=it_136->next;
                                            # 531 "/usr/local/include/neo-c.h"
                                            i_137++;
                                            # 533 "/usr/local/include/neo-c.h"
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            # 535 "/usr/local/include/neo-c.h"
                                            self->len--;
                                        }
                                        else {
                                            # 538 "/usr/local/include/neo-c.h"
                                            it_136=it_136->next;
                                            # 539 "/usr/local/include/neo-c.h"
                                            i_137++;
                                        }
                                    }
                                }
                                else {
                                    # 544 "/usr/local/include/neo-c.h"
                                    it_139=self->head;
                                    # 546 "/usr/local/include/neo-c.h"
                                    head_prev_it_140=((void*)0);
                                    # 547 "/usr/local/include/neo-c.h"
                                    tail_it_141=((void*)0);
                                    # 550 "/usr/local/include/neo-c.h"
                                    i_142=0;
                                    # 576 "/usr/local/include/neo-c.h"
                                    while(_while_condtional24=it_139!=((void*)0),                                    _while_condtional24) {
                                        # 555 "/usr/local/include/neo-c.h"
                                        # 552 "/usr/local/include/neo-c.h"
                                        if(_if_conditional89=i_142==head,                                        _if_conditional89) {
                                            # 553 "/usr/local/include/neo-c.h"
                                            head_prev_it_140=it_139->prev;
                                        }
                                        # 559 "/usr/local/include/neo-c.h"
                                        # 555 "/usr/local/include/neo-c.h"
                                        if(_if_conditional90=i_142==tail,                                        _if_conditional90) {
                                            # 556 "/usr/local/include/neo-c.h"
                                            tail_it_141=it_139;
                                        }
                                        # 574 "/usr/local/include/neo-c.h"
                                        # 559 "/usr/local/include/neo-c.h"
                                        if(_if_conditional91=i_142>=head&&i_142<tail,                                        _if_conditional91) {
                                            # 561 "/usr/local/include/neo-c.h"
                                            prev_it_143=it_139;
                                            # 563 "/usr/local/include/neo-c.h"
                                            it_139=it_139->next;
                                            # 564 "/usr/local/include/neo-c.h"
                                            i_142++;
                                            # 566 "/usr/local/include/neo-c.h"
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            # 568 "/usr/local/include/neo-c.h"
                                            self->len--;
                                        }
                                        else {
                                            # 571 "/usr/local/include/neo-c.h"
                                            it_139=it_139->next;
                                            # 572 "/usr/local/include/neo-c.h"
                                            i_142++;
                                        }
                                    }
                                    # 579 "/usr/local/include/neo-c.h"
                                    # 576 "/usr/local/include/neo-c.h"
                                    if(_if_conditional92=head_prev_it_140!=((void*)0),                                    _if_conditional92) {
                                        # 577 "/usr/local/include/neo-c.h"
                                        head_prev_it_140->next=tail_it_141;
                                    }
                                    # 582 "/usr/local/include/neo-c.h"
                                    # 579 "/usr/local/include/neo-c.h"
                                    if(_if_conditional93=tail_it_141!=((void*)0),                                    _if_conditional93) {
                                        # 580 "/usr/local/include/neo-c.h"
                                        tail_it_141->prev=head_prev_it_140;
                                    }
                                }
                            }
                        }
                        # 584 "/usr/local/include/neo-c.h"
                        __result136__ = __result_obj__ = self;
                        return __result136__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_131;
_Bool _while_condtional21;
struct list_item$1charph* prev_it_132;
struct list$1charph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_132, 0, sizeof(struct list_item$1charph*));
                                # 433 "/usr/local/include/neo-c.h"
                                it_131=self->head;
                                # 440 "/usr/local/include/neo-c.h"
                                while(_while_condtional21=it_131!=((void*)0),                                _while_condtional21) {
                                    # 435 "/usr/local/include/neo-c.h"
                                    prev_it_132=it_131;
                                    # 436 "/usr/local/include/neo-c.h"
                                    it_131=it_131->next;
                                    # 437 "/usr/local/include/neo-c.h"
                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 440 "/usr/local/include/neo-c.h"
                                self->head=((void*)0);
                                # 441 "/usr/local/include/neo-c.h"
                                self->tail=((void*)0);
                                # 443 "/usr/local/include/neo-c.h"
                                self->len=0;
                                # 445 "/usr/local/include/neo-c.h"
                                __result135__ = __result_obj__ = self;
                                return __result135__;
}

void manual(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 334 "main.c"
    wclear(stdscr);
    # 335 "main.c"
    mvprintw(0,0,"q --> quit");
    # 336 "main.c"
    mvprintw(1,0,"* --> virtual directory(type shell command, and the result of the command is file list");
    # 337 "main.c"
    mvprintw(2,0,"ENTER --> run command(type shell command) or insert directory");
    # 338 "main.c"
    mvprintw(3,0,"~ --> move to home directory");
    # 339 "main.c"
    mvprintw(4,0,"BACK SPACE ^H --> move to the parent directory");
    # 340 "main.c"
    mvprintw(5,0,"d --> delete file");
    # 341 "main.c"
    mvprintw(6,0,"c --> copy file");
    # 342 "main.c"
    mvprintw(7,0,"m --> move file");
    # 343 "main.c"
    mvprintw(8,0,"n --> next searching file");
    # 344 "main.c"
    mvprintw(9,0,"N --> prev searching file");
    # 345 "main.c"
    mvprintw(10,0,"x --> excute file");
    # 346 "main.c"
    mvprintw(11,0,"e --> edit file");
    # 347 "main.c"
    mvprintw(12,0,"LEFT h --> move cursor left");
    # 348 "main.c"
    mvprintw(13,0,"RIGHT l --> move cursor right");
    # 349 "main.c"
    mvprintw(14,0,"DOWN j --> move cursor down");
    # 350 "main.c"
    mvprintw(15,0,"UP k --> move cursor up");
    # 351 "main.c"
    mvprintw(16,0,"CTRL-L --> reread directory and refresh the window");
    # 352 "main.c"
    mvprintw(17,0,"/ --> move cursor with searching file (n --> next, N --> prev)");
    # 353 "main.c"
    mvprintw(18,0,"? --> this manual");
    # 354 "main.c"
    mvprintw(19,0,": --> run shell");
    # 355 "main.c"
    mvprintw(20,0,"SPACE --> select files");
    # 357 "main.c"
    wrefresh(stdscr);
    # 358 "main.c"
    wgetch(stdscr);
}

void handmade_delete_file(char* path){
void* __result_obj__;
_Bool _while_condtional25;
int key_144;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&key_144, 0, sizeof(int));
    # 363 "main.c"
    werase(stdscr);
    # 364 "main.c"
    mvprintw(0,0,"Is %s delete OK? (y,Y,ENTER/other",path);
    # 365 "main.c"
    wrefresh(stdscr);
    # 378 "main.c"
    while(_while_condtional25=1,    _while_condtional25) {
        # 368 "main.c"
        key_144=wgetch(stdscr);
        # 377 "main.c"
        # 370 "main.c"
        if(_if_conditional94=key_144==121||key_144==89||key_144==10,        _if_conditional94) {
            # 371 "main.c"
            unlink(path);
            # 372 "main.c"
            break;
        }
        else {
            # 375 "main.c"
            break;
        }
    }
}

void handmade_selected_delete_file(struct sInfo* info){
void* __result_obj__;
void* right_value181;
_Bool _while_condtional26;
int key_145;
_Bool _if_conditional95;
struct list$1charph* o2_saved_146;
char* it_147;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&key_145, 0, sizeof(int));
memset(&o2_saved_146, 0, sizeof(struct list$1charph*));
memset(&it_147, 0, sizeof(char*));
    # 382 "main.c"
    werase(stdscr);
    # 383 "main.c"
    mvprintw(0,0,"Are %s delete OK? (y,Y,ENTER/other",((char*)(right_value181=selected_files(info))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 384 "main.c"
    wrefresh(stdscr);
    # 399 "main.c"
    while(_while_condtional26=1,    _while_condtional26) {
        # 387 "main.c"
        key_145=wgetch(stdscr);
        # 398 "main.c"
        # 389 "main.c"
        if(_if_conditional95=key_145==121||key_145==89||key_145==10,        _if_conditional95) {
            # 393 "main.c"
            for(            o2_saved_146=(struct list$1charph*)come_increment_ref_count((info->selected_files)),it_147=list$1charph_begin((o2_saved_146));            !list$1charph_end((o2_saved_146));            it_147=list$1charph_next((o2_saved_146))            ){
                # 391 "main.c"
                unlink(it_147);
            }
            come_call_finalizer2(list$1charphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 393 "main.c"
            break;
        }
        else {
            # 396 "main.c"
            break;
        }
    }
}

void input(struct sInfo* info){
void* __result_obj__;
int maxx_148;
int maxy_149;
int key_150;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
char* path_151;
struct stat stat__152;
_Bool is_dir_153;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
char* path_154;
void* right_value191;
char* current_directory_name_155;
void* right_value192;
void* right_value193;
char* path_156;
_Bool _if_conditional98;
void* right_value194;
_Bool _if_conditional99;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
_Bool _if_conditional100;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
_Bool _if_conditional101;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&maxx_148, 0, sizeof(int));
memset(&maxy_149, 0, sizeof(int));
memset(&key_150, 0, sizeof(int));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&path_151, 0, sizeof(char*));
memset(&stat__152, 0, sizeof(struct stat));
memset(&is_dir_153, 0, sizeof(_Bool));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&path_154, 0, sizeof(char*));
right_value191 = (void*)0;
memset(&current_directory_name_155, 0, sizeof(char*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&path_156, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 403 "main.c"
    maxx_148=xgetmaxx();
    # 404 "main.c"
    maxy_149=xgetmaxy()-1;
    # 406 "main.c"
    key_150=wgetch(stdscr);
    # 633 "main.c"
    switch (key_150) {
        # 410 "main.c"
        case 113:
        # 410 "main.c"
        info->app_end=1;
        # 411 "main.c"
        break;
        # 414 "main.c"
        case 42:
        # 414 "main.c"
        endwin();
        # 415 "main.c"
        list$1charph_reset(info->files);
        # 416 "main.c"
        vd(info);
        # 417 "main.c"
        initscr();
        # 418 "main.c"
        keypad(stdscr,1);
        # 419 "main.c"
        raw();
        # 420 "main.c"
        noecho();
        # 421 "main.c"
        break;
        # 424 "main.c"
        case 343:
        # 424 "main.c"
        case 10:
        # 452 "main.c"
        {
            # 425 "main.c"
            path_151=(char*)come_increment_ref_count(((char*)(right_value185=string_operator_add(info->path,((char*)(right_value184=string_operator_add(((char*)(right_value182=__builtin_string("/"))),((char*)(right_value183=cursor_file(info))))))))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 427 "main.c"
            # 428 "main.c"
            (void)stat(path_151,&stat__152);
            # 430 "main.c"
            is_dir_153=(((stat__152.st_mode)&61440)==16384);
            # 451 "main.c"
            # 432 "main.c"
            if(is_dir_153) {
                # 433 "main.c"
                change_directory(info,path_151,((void*)0));
            }
            else {
                # 436 "main.c"
                endwin();
                # 443 "main.c"
                # 437 "main.c"
                if(_if_conditional97=list$1charph_length(info->selected_files)>0,                _if_conditional97) {
                    # 438 "main.c"
                    system(((char*)(right_value187=xsprintf("shsh -i ' %s' -n 0 -o",((char*)(right_value186=selected_files(info)))))));
                    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 441 "main.c"
                    system(((char*)(right_value189=xsprintf("shsh -i ' %s' -n 0 -o",((char*)(right_value188=cursor_file(info)))))));
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 443 "main.c"
                read_dir(info);
                # 444 "main.c"
                puts("HIT ANY KEY");
                # 445 "main.c"
                initscr();
                # 446 "main.c"
                keypad(stdscr,1);
                # 447 "main.c"
                raw();
                # 448 "main.c"
                noecho();
                # 449 "main.c"
                getchar();
            }
            path_151 = come_decrement_ref_count2(path_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(stat_finalize,(&stat__152), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        }
        # 452 "main.c"
        break;
        # 454 "main.c"
        case 126:
        # 459 "main.c"
        {
            # 455 "main.c"
            path_154=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(getenv("HOME")))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 457 "main.c"
            change_directory(info,path_154,((void*)0));
            path_154 = come_decrement_ref_count2(path_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 459 "main.c"
        break;
        # 462 "main.c"
        case 263:
        # 463 "main.c"
        case 8:
        # 463 "main.c"
        case 127:
        # 468 "main.c"
        {
            # 464 "main.c"
            current_directory_name_155=(char*)come_increment_ref_count(((char*)(right_value191=xbasename(info->path))));
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 465 "main.c"
            path_156=(char*)come_increment_ref_count(((char*)(right_value193=string_operator_add(info->path,((char*)(right_value192=__builtin_string("/..")))))));
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 466 "main.c"
            change_directory(info,path_156,current_directory_name_155);
            current_directory_name_155 = come_decrement_ref_count2(current_directory_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            path_156 = come_decrement_ref_count2(path_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 468 "main.c"
        break;
        # 470 "main.c"
        case 100:
        # 484 "main.c"
        {
            # 471 "main.c"
            endwin();
            # 478 "main.c"
            # 472 "main.c"
            if(_if_conditional98=list$1charph_length(info->selected_files)>0,            _if_conditional98) {
                # 473 "main.c"
                handmade_selected_delete_file(info);
            }
            else {
                # 476 "main.c"
                handmade_delete_file(((char*)(right_value194=cursor_file(info))));
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 478 "main.c"
            read_dir(info);
            # 479 "main.c"
            initscr();
            # 480 "main.c"
            keypad(stdscr,1);
            # 481 "main.c"
            raw();
            # 482 "main.c"
            noecho();
        }
        # 484 "main.c"
        break;
        # 486 "main.c"
        case 99:
        # 502 "main.c"
        {
            # 487 "main.c"
            endwin();
            # 494 "main.c"
            # 488 "main.c"
            if(_if_conditional99=list$1charph_length(info->selected_files)>0,            _if_conditional99) {
                # 489 "main.c"
                system(((char*)(right_value196=xsprintf("shsh -i 'cp -r %s ' -o",((char*)(right_value195=selected_files(info)))))));
                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 492 "main.c"
                system(((char*)(right_value198=xsprintf("shsh -i 'cp -r %s ' -o",((char*)(right_value197=cursor_file(info)))))));
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 494 "main.c"
            read_dir(info);
            # 495 "main.c"
            puts("HIT ANY KEY");
            # 496 "main.c"
            initscr();
            # 497 "main.c"
            keypad(stdscr,1);
            # 498 "main.c"
            raw();
            # 499 "main.c"
            noecho();
            # 500 "main.c"
            getchar();
        }
        # 502 "main.c"
        break;
        # 504 "main.c"
        case 109:
        # 520 "main.c"
        {
            # 505 "main.c"
            endwin();
            # 512 "main.c"
            # 506 "main.c"
            if(_if_conditional100=list$1charph_length(info->selected_files)>0,            _if_conditional100) {
                # 507 "main.c"
                system(((char*)(right_value200=xsprintf("shsh -i 'mv %s ' -o",((char*)(right_value199=selected_files(info)))))));
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 510 "main.c"
                system(((char*)(right_value202=xsprintf("shsh -i 'mv %s ' -o",((char*)(right_value201=cursor_file(info)))))));
                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 512 "main.c"
            read_dir(info);
            # 513 "main.c"
            puts("HIT ANY KEY");
            # 514 "main.c"
            initscr();
            # 515 "main.c"
            keypad(stdscr,1);
            # 516 "main.c"
            raw();
            # 517 "main.c"
            noecho();
            # 518 "main.c"
            getchar();
        }
        # 520 "main.c"
        break;
        # 522 "main.c"
        case 110:
        # 525 "main.c"
        {
            # 523 "main.c"
            search_next_file(info);
        }
        # 525 "main.c"
        break;
        # 527 "main.c"
        case 78:
        # 530 "main.c"
        {
            # 529 "main.c"
            search_prev_file(info);
        }
        # 530 "main.c"
        break;
        # 532 "main.c"
        case 120:
        # 548 "main.c"
        {
            # 533 "main.c"
            endwin();
            # 540 "main.c"
            # 534 "main.c"
            if(_if_conditional101=list$1charph_length(info->selected_files)>0,            _if_conditional101) {
                # 535 "main.c"
                system(((char*)(right_value204=xsprintf("shsh -i ' %s' -n 0 -o",((char*)(right_value203=selected_files(info)))))));
                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 538 "main.c"
                system(((char*)(right_value206=xsprintf("shsh -i ' ./%s' -n 0 -o",((char*)(right_value205=cursor_file(info)))))));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 540 "main.c"
            read_dir(info);
            # 541 "main.c"
            puts("HIT ANY KEY");
            # 542 "main.c"
            initscr();
            # 543 "main.c"
            keypad(stdscr,1);
            # 544 "main.c"
            raw();
            # 545 "main.c"
            noecho();
            # 546 "main.c"
            getchar();
        }
        # 548 "main.c"
        break;
        # 550 "main.c"
        case 101:
        # 558 "main.c"
        {
            # 551 "main.c"
            endwin();
            # 552 "main.c"
            system(((char*)(right_value208=xsprintf("vin %s",((char*)(right_value207=cursor_file(info)))))));
            right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 553 "main.c"
            initscr();
            # 554 "main.c"
            keypad(stdscr,1);
            # 555 "main.c"
            raw();
            # 556 "main.c"
            noecho();
        }
        # 558 "main.c"
        break;
        # 561 "main.c"
        case 260:
        # 562 "main.c"
        case 104:
        # 565 "main.c"
        # 562 "main.c"
        if(_if_conditional102=info->cursor>=maxy_149,        _if_conditional102) {
            # 563 "main.c"
            info->cursor-=maxy_149;
        }
        # 565 "main.c"
        break;
        # 568 "main.c"
        case 261:
        # 569 "main.c"
        case 108:
        # 572 "main.c"
        # 569 "main.c"
        if(_if_conditional103=info->cursor+maxy_149<list$1charph_length(info->files),        _if_conditional103) {
            # 570 "main.c"
            info->cursor+=maxy_149;
        }
        # 572 "main.c"
        break;
        # 575 "main.c"
        case 258:
        # 576 "main.c"
        case 106:
        # 576 "main.c"
        info->cursor++;
        # 577 "main.c"
        break;
        # 580 "main.c"
        case 259:
        # 581 "main.c"
        case 107:
        # 581 "main.c"
        info->cursor--;
        # 583 "main.c"
        break;
        # 587 "main.c"
        case 76-65+1:
        # 586 "main.c"
        wclear(stdscr);
        # 587 "main.c"
        read_dir(info);
        # 588 "main.c"
        view(info);
        # 589 "main.c"
        wrefresh(stdscr);
        # 590 "main.c"
        break;
        # 593 "main.c"
        case 47:
        # 593 "main.c"
        search_file(info);
        # 594 "main.c"
        view(info);
        # 595 "main.c"
        wrefresh(stdscr);
        # 596 "main.c"
        break;
        # 599 "main.c"
        case 63:
        # 599 "main.c"
        manual(info);
        # 600 "main.c"
        break;
        # 602 "main.c"
        case 58:
        # 614 "main.c"
        {
            # 603 "main.c"
            endwin();
            # 604 "main.c"
            system("shsh");
            # 605 "main.c"
            read_dir(info);
            # 606 "main.c"
            puts("HIT ANY KEY");
            # 607 "main.c"
            initscr();
            # 608 "main.c"
            keypad(stdscr,1);
            # 609 "main.c"
            raw();
            # 610 "main.c"
            noecho();
            # 611 "main.c"
            getchar();
        }
        # 614 "main.c"
        break;
        # 616 "main.c"
        case 4:
        # 619 "main.c"
        {
            # 617 "main.c"
            info->cursor+=10;
        }
        # 619 "main.c"
        break;
        # 621 "main.c"
        case 32:
        # 624 "main.c"
        {
            # 622 "main.c"
            select_files(info);
        }
        # 624 "main.c"
        break;
        # 626 "main.c"
        case 21:
        # 629 "main.c"
        {
            # 627 "main.c"
            info->cursor-=10;
        }
        # 629 "main.c"
        break;
    }
    # 633 "main.c"
    fix_cursor(info);
}

int main(int argc, char** argv){
void* __result_obj__;
struct sInfo info_157;
char* cwd_158;
void* right_value209;
char* __dec_obj25;
_Bool _while_condtional27;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&info_157, 0, sizeof(struct sInfo));
memset(&cwd_158, 0, sizeof(char*));
right_value209 = (void*)0;
come_heap_init(0, 0, 0);
    # 638 "main.c"
    setlocale(6,"");
    # 640 "main.c"
    # 642 "main.c"
    memset(&info_157,0,sizeof(struct sInfo));
    # 644 "main.c"
    cwd_158=getenv("PWD");
    # 646 "main.c"
    __dec_obj25=info_157.path;
    info_157.path=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(cwd_158))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 648 "main.c"
    read_dir(&info_157);
    # 650 "main.c"
    initscr();
    # 651 "main.c"
    keypad(stdscr,1);
    # 652 "main.c"
    raw();
    # 653 "main.c"
    noecho();
    # 660 "main.c"
    while(_while_condtional27=!info_157.app_end,    _while_condtional27) {
        # 656 "main.c"
        view(&info_157);
        # 657 "main.c"
        input(&info_157);
    }
    # 660 "main.c"
    endwin();
    # 662 "main.c"
    __result138__ = 0;
    come_call_finalizer2(sInfo_finalize,(&info_157), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result138__;
    come_call_finalizer2(sInfo_finalize,(&info_157), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
come_heap_final();
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sInfo_finalize"
        # 0 "sInfo_finalize"
        if(_if_conditional104=self!=((void*)0)&&self->path!=((void*)0),        _if_conditional104) {
            # 0 "sInfo_finalize"
            self->path = come_decrement_ref_count2(self->path, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sInfo_finalize"
        # 1 "sInfo_finalize"
        if(_if_conditional105=self!=((void*)0)&&self->files!=((void*)0),        _if_conditional105) {
            # 1 "sInfo_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->files, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sInfo_finalize"
        # 2 "sInfo_finalize"
        if(_if_conditional106=self!=((void*)0)&&self->selected_files!=((void*)0),        _if_conditional106) {
            # 2 "sInfo_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->selected_files, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sInfo_finalize"
        # 3 "sInfo_finalize"
        if(_if_conditional107=self!=((void*)0)&&self->searching_str!=((void*)0),        _if_conditional107) {
            # 3 "sInfo_finalize"
            self->searching_str = come_decrement_ref_count2(self->searching_str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

