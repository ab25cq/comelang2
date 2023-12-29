#include "common.h"

struct sTypedefNode
{
    string mTypeName;
    sType*% mType;
    
    list<tuple2<sType*%, string>*%>*% multiple_declare;
    
    string mDeclareSName;
  
    int sline;
    string sname;
};

sTypedefNode*% sTypedefNode*::initialize(sTypedefNode*% self, string type_name, sType*% type, list<tuple2<sType*%, string>*%>*% multiple_declare, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mTypeName = string(type_name);
    self.mType = clone type;
    
    self.mDeclareSName = string(info->sname);
    
    self.multiple_declare = clone multiple_declare;

    return self;
}

bool sTypedefNode*::terminated()
{
    return true;
}

string sTypedefNode*::kind()
{
    return string("sTypedefNode");
}

bool sTypedefNode*::compile(sTypedefNode* self, sInfo* info)
{
    string type_name = string(self.mTypeName);
    
    if(type_name === "__darwin_va_list") {
        info.classes.insert(string("__darwin_va_list"), new sClass("__darwin_va_list", number:true));
        
        sType*% type = new sType("__darwin_va_list");
        type->mOriginalTypeName = string("__darwin_va_list");
        
        info.types.insert(string(type_name), clone type);
        
        if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
        }
        else {
            add_come_code_at_source_head(info, "typedef __builtin_va_list __darwin_va_list;\n");
        }
    }
    else if(self.multiple_declare) {
        foreach(it, self.multiple_declare) {
            var type, type_name = it;
        
            if(type_name !== "va_list") {
                type->mOriginalTypeName = string(type_name);
            }
            
            info.types.insert(string(type_name), clone type);
            
        
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, in_header:true)!);
            }
        }
    }
    else {
        sType*% type = clone self.mType;
        
        if(type_name !== "va_list") {
            type->mOriginalTypeName = string(type_name);
        }
        
        info.types.insert(string(type_name), clone type);
        
        if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
        }
        else {
            add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, in_header:true)!);
        }
    }

    return true;
}

int sTypedefNode*::sline(sTypedefNode* self, sInfo* info)
{
    return self.sline;
}

string sTypedefNode*::sname(sTypedefNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 95
{
    if(buf === "typedef") {
        bool in_typedef = info.in_typedef;
        info.in_typedef = true;
        var type, type_name,err = parse_type(parse_variable_name:true);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        info.in_typedef = false;
        info.in_typedef = in_typedef;
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            sType*% base_type = clone type;
            
            list<tuple2<sType*%, string>*%>*% multiple_declare = new list<tuple2<sType*%, string>*%>();
            
            tuple2<sType*%, string>*% variable_name = (base_type, type_name);
            multiple_declare.push_back(variable_name);
            
            tuple2<sType*%, string>*% variable_name2 = parse_variable_name(base_type, true@first, info);
            multiple_declare.push_back(variable_name2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                tuple2<sType*%, string>*% variable_name = parse_variable_name(base_type, false@first, info);
                
                multiple_declare.push_back(variable_name);
            }
            
            return new sTypedefNode(type_name, type, multiple_declare, info) implements sNode;
        }
        else {
            return new sTypedefNode(type_name, type, null@multiple_declare, info) implements sNode;
        }
    }
    
    return inherit(string(buf), head, head_sline, info);
}
