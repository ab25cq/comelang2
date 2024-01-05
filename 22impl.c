#include "common.h"

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 93
{
    if(buf === "impl") {
        var word = parse_word(info);
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            info.generics_type_names.reset();
            while(true) {
                var generics_name = parse_word();
 
                info.generics_type_names.push_back(generics_name);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character on impl (%c)", *info->p);
                    exit(2);
                }
            }
        }
        
        int pointer_num = 0;
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            pointer_num++;
        }
        
        expected_next_character('{', info);
        
        info->impl_type = new sType(word);
        info->impl_type->mPointerNum = pointer_num;
        
        while(*info->p != '}') {
            parse_sharp();
            
            char* head = info.p;
            string buf = parse_word();
            
            parse_sharp(info);
            
            sNode*% node = top_level(buf, head, head_sline, info);
            parse_sharp(info);
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_sharp(info);
            
            if(node != null) {
                if(!node_compile(node)) {
                    err_msg(info, "compiling is faield(Y)");
                    exit(2);
                }
            }
            parse_sharp(info);
            
            skip_spaces_and_lf();
        }
        
        expected_next_character('}');
        info.generics_type_names.reset();
        info->impl_type = null;
        
        return (sNode*%)null;
    }
    
    return inherit(string(buf), head, head_sline, info);
}
