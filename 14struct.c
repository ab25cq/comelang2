#include "common.h"

string get_none_generics_name(char* class_name)
{
    char* p = class_name;
    while(*p) {
        if(*p == '$') {
            return string(class_name).substring(0, p -class_name);
        }
        else {
            p++;
        }
    }
    
    return string(class_name);
}

string create_generics_name(sType* generics_type, sInfo* info)
{
    buffer*% buf = new buffer();
    
    sClass* klass = generics_type->mClass;
    
    char* class_name = klass->mName;
    
    buf.append_str(class_name);
    
    if(generics_type->mGenericsTypes.length() > 0) {
        buf.append_char('$');
        buf.append_char(generics_type->mGenericsTypes.length()+'0');
        
        for(int i=0; i<generics_type->mGenericsTypes.length(); i++) {
            sType* type = generics_type->mGenericsTypes[i];
            string type_name = create_generics_name(type, info);
            
            buf.append_str(type_name);

            for(int i=0; i<type->mPointerNum; i++) {
                buf.append_char('p');
            }
        
            if(type->mHeap) {
                buf.append_str("h");
            }
        }
    }
    
    return buf.to_string();
}

void output_struct(sClass* klass, sInfo* info)
{
/*
    if(info->no_output_come_code) {
        return;
    }
*/
    if(!klass->mOutputed) {
        klass->mOutputed = true;
        
        buffer*% buf = new buffer();
        
//        if(klass.mFields.length() > 0) {
            buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
            
            //klass = info.classes[klass->mName];
            foreach(it, klass.mFields) {
                var name, type = it;
                
                type->mStatic = false;
                
                buf.append_str("    ");
                buf.append_str(make_define_var(type, name)!);
                buf.append_str(";\n");
            }
            
            buf.append_str("};\n");
            
            if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s", buf.to_string());
            }
//        }
    }
}

bool is_no_contained_generics_types(sType* type, sInfo* info)
{
    sClass* klass = type->mClass;
    
    if(klass->mGenerics) {
        return false;
    }
    for(int i=0; i<type->mGenericsTypes.length(); i++) {
        bool result = is_no_contained_generics_types(type->mGenericsTypes[i], info);
        
        if(!result) {
            return false;
        }
    }
    
    return true;
}

bool output_generics_struct(sType* type, sType* generics_type, sInfo* info)
{
    string new_name = create_generics_name(type, info);
    
    if(is_no_contained_generics_types(type, info) && !info.classes.find(new_name)) {
        sType*% type2 = clone type;
        
        sClass* generics_class = info.generics_classes[type.mClass.mName];
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        
        info.classes.insert(string(new_name), new_class);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, type2, info);
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType.v1 = clone type;
        type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, info);
    }
    else if(!info.classes.find(new_name)) {
        sClass* generics_class = info.generics_classes[type.mClass.mName];
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        
        info.classes.insert(string(new_name), new_class);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, generics_type, info);
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType.v1 = clone type;
        type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, info);
    }
    else {
        if(type->mNoSolvedGenericsType.v1 == null) {
            type->mNoSolvedGenericsType.v1 = clone type;
            type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        }
        type->mClass = info.classes[new_name];
        type->mGenericsTypes.reset();
    }
    
    return true;
}

struct sStructNode
{
    string mName;
    sClass*% mClass;

    int sline;
    string sname;
    
    bool mOutput;
};

sStructNode*% sStructNode*::initialize(sStructNode*% self, string name, sClass*% klass, bool output, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mName = string(name);
    self.mClass = clone klass;
    
    self.mOutput = output;
    
    return self;
}

bool sStructNode*::terminated()
{
    return true;
}

string sStructNode*::kind()
{
    return string("sStructNode");
}

bool sStructNode*::compile(sStructNode* self, sInfo* info)
{
    sClass*% klass = clone self.mClass;
    string name = string(self.mName);
    
    if(info.classes.at(name, null) == null) {
        info.classes.insert(name, clone klass);
    }
    else if(info.classes.at(name, null).mFields.length() == 0 && klass->mFields.length() > 0) {
        sClass* klass2 = info.classes.at(name, null);
        klass2.mFields = clone klass.mFields;
    }
    
    sType*% type = new sType(name);
    info.types.insert(name, clone type);
    
    if(self.mOutput) {
        output_struct(klass, info);
    }

    return true;
}

int sStructNode*::sline(sStructNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNode*::sname(sStructNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStructNobodyNode
{
    string mName;
    sClass*% mClass;
  
    int sline;
    string sname;
};

sStructNobodyNode*% sStructNobodyNode*::initialize(sStructNobodyNode*% self, string name, sClass*% klass, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mName = string(name);
    self.mClass = clone klass;

    return self;
}

bool sStructNobodyNode*::terminated()
{
    return true;
}

string sStructNobodyNode*::kind()
{
    return string("sStructNobodyNode");
}

bool sStructNobodyNode*::compile(sStructNobodyNode* self, sInfo* info)
{
    string name = string(self.mName);
    sClass* klass = self.mClass;
    
    if(info.classes.at(name, null) == null) {
        info.classes.insert(name, clone klass);
    }
    
    sType*% type = new sType(name);
    
    info.types.insert(name, clone type);
    
    if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
    }
    else {
        add_come_code_at_source_head(info, "struct %s;\n", name);
    }

    return true;
}

int sStructNobodyNode*::sline(sStructNobodyNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNobodyNode*::sname(sStructNobodyNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGenericsStructNode
{
    int sline;
    string sname;
};

sGenericsStructNode*% sGenericsStructNode*::initialize(sGenericsStructNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}


bool sGenericsStructNode*::terminated()
{
    return true;
}

string sGenericsStructNode*::kind()
{
    return string("sGenericsStructNode");
}

bool sGenericsStructNode*::compile(sGenericsStructNode* self, sInfo* info)
{

    return true;
}

int sGenericsStructNode*::sline(sGenericsStructNode* self, sInfo* info)
{
    return self.sline;
}

string sGenericsStructNode*::sname(sGenericsStructNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_struct(string type_name, sInfo* info)
{
    sClass*% klass;
    bool output;
    if(info.classes.at(type_name, null) == null) {
        output = true;
        klass = new sClass(name:string(type_name), struct_:true);
        info.classes.insert(string(type_name), klass);
    }
    else {
        output = false;
        klass = clone info.classes.at(type_name, null);
    }
    
    klass.mFields.reset();
    
    expected_next_character('{');
    
    while(true) {
        bool multiple_declare = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            bool no_output_err = info.no_output_err;
            info.no_output_err = true;
            var type, name, err = parse_type(parse_variable_name:true);
            info.no_output_err = no_output_err;
            
            if(err && *info->p == ',') {
                multiple_declare = true;
            }
                
            info.p = p;
            info.sline = sline;
        }
        
        if(multiple_declare) {
            var base_type, name, err = parse_type();
            
            var type2, name2 = parse_variable_name(base_type, true@first, info);
            
            if(!info.no_output_err) {
                klass.mFields.push_back(new tuple2<string, sType*%>(name2, type2));
            }
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name2 = parse_variable_name(base_type, false@first, info);
                
                if(!info.no_output_err) {
                    klass.mFields.push_back(new tuple2<string, sType*%>(name2, type2));
                }
            }
        }
        else {
            parse_sharp();
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            if(!info.no_output_err) {
                klass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            }
        }
        expected_next_character(';') ;
        
        parse_sharp();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        parse_sharp();
    }
    
    return new sStructNode(string(type_name), klass, output, info) implements sNode;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        char* header_head = head;
        
        string type_name = parse_word();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:type_name, struct_:true);
            }
            else {
                struct_class = clone info.classes.at(type_name, null);
            }
            
            return new sStructNobodyNode(string(type_name), struct_class, info) implements sNode;
        }
        else {
            if(*info->p == '<') {
                info.generics_type_names.reset();
                
                info->p++;
                skip_spaces_and_lf();
                
                while(true) {
                    var T = parse_word() ;
                    info.generics_type_names.push_back(T);
                    
                    if(*info->p == '>') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else {
                        err_msg(info, "invalid generics struct definition");
                        exit(2);
                    }
                }
                
                sClass*% generics_class;
                if(info.generics_classes.at(type_name, null) != null) {
                    err_msg(info, "redifined generics struct(%s)", type_name);
                    exit(2);
                }
                else {
                    generics_class = new sClass(name:type_name, struct_:true);
                }
                
                if(info.generics_classes.at(type_name, null) == null) {
                    info.generics_classes.insert(type_name, generics_class);
                }
                
                expected_next_character('{') ;
                
                while(true) {
                    parse_sharp();
                    
                    var type2, name, err = parse_type(parse_variable_name:true);
                    
                    if(!err) {
                        printf("%s %d: parse_type failed\n", info->sname, info->sline);
                        exit(2);
                    }
                    
                    if(*info->p == ',') {
                        generics_class.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                        
                        while(*info->p == ',') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            string name2 = parse_word();
                            
                            var type3 = clone type2;
                            
                            if(*info->p == ':') {
                                info->p++;
                                skip_spaces_and_lf();
                                
                                bool no_comma = info->no_comma;
                                info->no_comma = true;
                                sNode*% node = expression();
                                info->no_comma = no_comma;
                                
                                type3->mSizeNum = node;
                            }
                            
                            generics_class.mFields.push_back(new tuple2<string, sType*%>(name2, type3));
                        }
                    }
                    else {
                        generics_class.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                    }
                    
                    expected_next_character(';') ;
                    
                    parse_sharp();
                    
                    if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    parse_sharp();
                }
                
                info.generics_type_names.reset();
                
                return new sGenericsStructNode(info) implements sNode;
            }
            else {
                sClass*% struct_class;
                if(info.classes.at(type_name, null) == null) {
                    struct_class = new sClass(name:type_name, struct_:true);
                }
                else {
                    struct_class = clone info.classes.at(type_name, null);
                }
                
                expected_next_character('{') ;
               
                while(true) {
                    parse_sharp();
                        
                    bool multiple_declare = false;
                    {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        bool no_output_err = info.no_output_err;
                        info.no_output_err = true;
                        var type, name, err = parse_type(parse_variable_name:true);
                        info.no_output_err = no_output_err;
                        
                        if(err && *info->p == ',') {
                            multiple_declare = true;
                        }
                            
                        info.p = p;
                        info.sline = sline;
                    }
                    
                    if(multiple_declare) {
                        var base_type, name, err = parse_type();
                        
                        var type2,name2 = parse_variable_name(base_type, true@first, info);
                        
                        struct_class.mFields.push_back(new tuple2<string, sType*%>(name2, type2));
                        
                        while(*info->p == ',') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            var type2, name2 = parse_variable_name(base_type, false@first, info);
                            
                            struct_class.mFields.push_back(new tuple2<string, sType*%>(name2, type2));
                        }
                    }
                    else {
                        var type2, name, err = parse_type(parse_variable_name:true);
                        if(!err) {
                            printf("%s %d: parse_type failed\n", info->sname, info->sline);
                            exit(2);
                        }
                        
                        struct_class.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                    }
                    
                    expected_next_character(';') ;
                    
                    parse_sharp();
                    
                    if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    parse_sharp();
                }
                
                info.generics_type_names.reset();
                
                return new sStructNode(string(type_name), clone struct_class, true@output, info) implements sNode;
            }
        }
    }
    
    return inherit(string(buf), head, head_sline, info) ;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 14
{
    bool define_struct = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "struct") {
            string type_name = parse_word();
            
            if(*info->p == '{') {
                skip_block();
                
                if(*info->p == ';') {
                    define_struct = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(define_struct) {
        string type_name = parse_word();
        
        return some(parse_struct(type_name, info));
    }
    
    sNode*% result = inherit(buf, head, head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}
