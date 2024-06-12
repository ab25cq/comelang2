#ifndef __COMMON_H__
#define __COMMON_H__
#include <neo-c.h>
struct sInfo
{
    int cursor;
    int page;
    string path;
    
# 21 "tmp-common-header" 3 4
   _Bool 
# 21 "tmp-common-header"
        app_end;

    list<string>*% files;
    list<string>*% selected_files;
    string searching_str;
};
int xgetmaxx();
int xgetmaxy();
void read_dir(sInfo* info);
void vd(sInfo* info);
void fix_cursor(sInfo* info);


_Bool 
# 126 "tmp-common-header"
    change_directory(sInfo* info, char* path, char* cursor_file);
void fix_cursor(sInfo* info);
void view(sInfo* info);
string cursor_path(sInfo* info);
string cursor_file(sInfo* info);
string selected_files(sInfo* info);
void search_file(sInfo* info);
void search_next_file(sInfo* info);
void search_prev_file(sInfo* info);
void select_files(sInfo* info);
void manual(sInfo* info);
void handmade_delete_file(char* path);
void handmade_selected_delete_file(sInfo* info);
void input(sInfo* info);
int main(int argc, char** argv);


#endif
