
#include "common.h"

struct sModuleNode {
    string name;
    sClassModule*% module;
    
    int sline;
    string sname;
};

sModuleNode*% sModuleNode*::initialize(sModuleNode*% self, string name, sClassModule*% module, sInfo* info)
{
    self.name = string(name);
    self.module = clone module;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sModuleNode*::sline(sModuleNode* self, sInfo* info)
{
    return self.sline;
}

string sModuleNode*::sname(sModuleNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sModuleNode*::terminated()
{
    return false;
}

string sModuleNode*::kind()
{
    return string("sModuleNode");
}

bool sModuleNode*::compile(sModuleNode* self, sInfo* info)
{
    string name = string(self.name);
    sClassModule* module = self.module;
    
    return true;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 91
{
    if(buf === "module") {
        var type_name = parse_word();
        
        list<string>*% params = new list<string>();
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            while(true) {
                string word = parse_word();
                
                params.add(word);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid charactor(%c)", *info->p);
                    exit(2);
                }
            }
        }
        
        expected_next_character('{');
        
        char* source_head = info.p;
        char* source_tail = null;
        
        var buf = new buffer();
        
        bool squort = false;
        bool dquort = false;
        int nest = 1;
        while(1) {
            if(*info->p == '\0') {
                err_msg(info, "unexpected source end in module");
                exit(2);
            }
            else if(*info->p == '\\') {
                buf.append_char(*info->p);
                info->p++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(!squort && *info->p == '"') {
                buf.append_char(*info->p);
                info->p++;
                dquort = !dquort;
            }
            else if(!dquort && *info->p == '\'') {
                buf.append_char(*info->p);
                info->p++;
                squort = !squort;
            }
            else if(squort || dquort) {
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '{') {
                nest++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '}') {
                nest--;
                
                if(nest == 0) {
                    source_tail = info->p - 1;
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                
                buf.append_char(*info->p);
                info->p++;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        buffer*% header = new buffer();
        header.append_str(s"module \{type_name}\n");
        header.append_str("{\n");
        header.append(source_head, source_tail - source_head);
        header.append_str("\n}\n");
        
        add_come_code_at_come_header(info, "%s\n", header.to_string());
        
        sClassModule*% module = new sClassModule(type_name, buf.to_string(), info);
        
        module.mParams = clone params;
        
        info.modules[string(type_name)] = module;
        
        return new sModuleNode(string(type_name), module, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
