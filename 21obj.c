#include "common.h"

struct sNullNodeX
{
  int sline;
  string sname;
};

sNullNodeX*% sNullNodeX*::initialize(sNullNodeX*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sNullNodeX*::terminated()
{
    return false;
}

string sNullNodeX*::kind()
{
    return string("sNullNodeX");
}

bool sNullNodeX*::compile(sNullNodeX* self, sInfo* info)
{

    return true;
}

int sNullNodeX*::sline(sNullNodeX* self, sInfo* info)
{
    return self.sline;
}

string sNullNodeX*::sname(sNullNodeX* self, sInfo* info)
{
    return string(self.sname);
}

struct sNewNode {
    sType*% type;
    
    int sline;
    string sname;
};

sNewNode*% sNewNode*::initialize(sNewNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sNewNode*::sline(sNewNode* self, sInfo* info)
{
    return self.sline;
}

string sNewNode*::sname(sNewNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sNewNode*::terminated()
{
    return false;
}

string sNewNode*::kind()
{
    return string("sNewNode");
}

bool sNewNode*::compile(sNewNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    foreach(it, type->mArrayNum) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        num_string.append_str(xsprintf("*(%s)", cvalue.c_value));
    }
    
    sType*% type2 = solve_generics(type, info->generics_type, info);
    
/*
    if(type->mArrayNum.length() > 0) {
        type2->mPointerNum--;
    }
*/
    type2->mArrayNum.reset();
    
    string type_name = make_type_name_string(type2, array_cast_pointer:true);
    
    string type_name2 = make_come_type_name_string(type2);
    
    come_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name2);
    
    type2->mHeap = true;
    type2->mPointerNum++;
    
    if(type2->mNoSolvedGenericsType.v1) {
        type2->mNoSolvedGenericsType.v1->mPointerNum++;
        type2->mNoSolvedGenericsType.v1->mHeap = true;
    }
    
    come_value.c_value = append_object_to_right_values(come_value.c_value, type2 ,info);
    come_value.type = clone type2;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% create_object(sType*% type, sInfo* info)
{
    return new sNewNode(type, info) implements sNode;
}

struct sImplementsNode {
    sNode*% obj_exp;
    sType*% inf_type;
    
    int sline;
    string sname;
};

sImplementsNode*% sImplementsNode*::initialize(sImplementsNode*% self, sNode*% obj_exp, sType*% inf_type, sInfo* info)
{
    self.obj_exp = clone obj_exp;
    self.inf_type = clone inf_type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sImplementsNode*::sline(sImplementsNode* self, sInfo* info)
{
    return self.sline;
}

string sImplementsNode*::sname(sImplementsNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sImplementsNode*::terminated()
{
    return false;
}

string sImplementsNode*::kind()
{
    return string("sImplementsNode");
}

bool sImplementsNode*::compile(sImplementsNode* self, sInfo* info)
{
    sNode*% obj_exp = clone self.obj_exp;
    sType*% inf_type = clone self.inf_type;
    
    if(!node_compile(obj_exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = clone come_value.type;
    type->mPointerNum--;
    type->mHeap = false;
    
    sClass* klass = inf_type->mClass;
    
    CVALUE*% come_value2 = new CVALUE;
    
    sType*% type2 = clone inf_type;
    
    string type_name = make_type_name_string(inf_type, array_cast_pointer:true);
    string type_name2 = make_type_name_string(type, array_cast_pointer:true);
    
    static int inf_num = 0;
    
    string buf = xsprintf("%s* _inf_value%d;\n", type_name, ++inf_num);
    add_come_code_at_function_head(info, buf);
    string buf2 = xsprintf("%s* _inf_obj_value%d;\n", type_name2, inf_num);
    add_come_code_at_function_head(info, buf2);
    
    add_come_code(info, "_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n", inf_num, type_name, type_name, info.sname, info.sline, type_name);
    add_come_code(info, "_inf_obj_value%d=come_increment_ref_count(%s);\n", inf_num, come_value.c_value);
    add_come_code(info, "_inf_value%d->_protocol_obj=_inf_obj_value%d;\n", inf_num, inf_num);
    
    sType*% typeX = clone type;
    typeX->mPointerNum++;
    
    create_finalizer_automatically(typeX, "finalize", info);
    create_cloner_automatically(typeX, "clone", info);
    
    for(int i=1; i<klass->mFields.length(); i++) {
        var name, field_type = klass->mFields[i];
        
        string method_name = create_method_name(type, false@no_pointer_name, name, info);
        
        sFun* fun = info.funcs.at(method_name, null);
        
        if(fun == null) {
            sClass* klass2 = info->classes[type->mClass->mName];
            while(info->classes[klass2->mParentClassName]??) {
                klass2 = info->classes[klass2->mParentClassName]??;
                
                method_name = create_method_name_using_class(klass2, false@no_pointer_name, name, info);
                
                fun = info.funcs.at(method_name, null);
                
                if(fun) {
                    break;
                }
            }
            
            add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num, name, method_name);
        }
        else {
            add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num, name, method_name);
        }
    }
    
    come_value2.c_value = xsprintf("_inf_value%d", inf_num);
    sType*% type3 = clone inf_type;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    come_value2.type = clone type2;
    come_value2.c_value = append_object_to_right_values(come_value2.c_value, type3 ,info);
    come_value2.type->mPointerNum ++;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
    return true;
}


struct sTrueNode {
    int sline;
    string sname;
};

sTrueNode*% sTrueNode*::initialize(sTrueNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sTrueNode*::sline(sTrueNode* self, sInfo* info)
{
    return self.sline;
}

string sTrueNode*::sname(sTrueNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sTrueNode*::terminated()
{
    return false;
}

string sTrueNode*::kind()
{
    return string("sTrueNode");
}

bool sTrueNode*::compile(sTrueNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(_Bool)1");
    come_value.type = new sType("bool");
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% create_true_object(sInfo* info)
{
    return new sTrueNode(info) implements sNode;
}

struct sFalseNode {
    int sline;
    string sname;
};

sFalseNode*% sFalseNode*::initialize(sFalseNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFalseNode*::sline(sFalseNode* self, sInfo* info)
{
    return self.sline;
}

string sFalseNode*::sname(sFalseNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFalseNode*::terminated()
{
    return false;
}

string sFalseNode*::kind()
{
    return string("sFalseNode");
}

bool sFalseNode*::compile(sFalseNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(_Bool)0");
    come_value.type = new sType("bool");
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% create_false_object(sInfo* info)
{
    return new sFalseNode(info) implements sNode;
}

struct sSizeOfNode {
    sType*% type;
    int sline;
    string sname;
};

sSizeOfNode*% sSizeOfNode*::initialize(sSizeOfNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sSizeOfNode*::sline(sSizeOfNode* self, sInfo* info)
{
    return self.sline;
}

string sSizeOfNode*::sname(sSizeOfNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sSizeOfNode*::terminated()
{
    return false;
}

string sSizeOfNode*::kind()
{
    return string("sSizeOfNode");
}

bool sSizeOfNode*::compile(sSizeOfNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("sizeof(%s)", type_name);
    come_value.type = new sType("long");
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sSizeOfExpNode {
    sNode*% exp;
    int sline;
    string sname;
};

sSizeOfExpNode*% sSizeOfExpNode*::initialize(sSizeOfExpNode*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sSizeOfExpNode*::sline(sSizeOfExpNode* self, sInfo* info)
{
    return self.sline;
}

string sSizeOfExpNode*::sname(sSizeOfExpNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sSizeOfExpNode*::terminated()
{
    return false;
}

string sSizeOfExpNode*::kind()
{
    return string("sSizeOfExpNode");
}

bool sSizeOfExpNode*::compile(sSizeOfExpNode* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("sizeof(%s)", come_value.c_value);
    come_value2.type = new sType("long");
    come_value2.type->mUnsigned = true;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
    return true;
}

struct sTypeOfNode {
    sType*% type;
    int sline;
    string sname;
};

sTypeOfNode*% sTypeOfNode*::initialize(sTypeOfNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sTypeOfNode*::sline(sTypeOfNode* self, sInfo* info)
{
    return self.sline;
}

string sTypeOfNode*::sname(sTypeOfNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sTypeOfNode*::terminated()
{
    return false;
}

string sTypeOfNode*::kind()
{
    return string("sTypeOfNode");
}

bool sTypeOfNode*::compile(sTypeOfNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;

    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("\"%s\"", type_name);
    come_value.type = new sType("char*");
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sTypeOfExpNode {
    sNode*% exp;
    int sline;
    string sname;
};

sTypeOfExpNode*% sTypeOfExpNode*::initialize(sTypeOfExpNode*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sTypeOfExpNode*::sline(sTypeOfExpNode* self, sInfo* info)
{
    return self.sline;
}

string sTypeOfExpNode*::sname(sTypeOfExpNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sTypeOfExpNode*::terminated()
{
    return false;
}

string sTypeOfExpNode*::kind()
{
    return string("sTypeOfExpNode");
}

bool sTypeOfExpNode*::compile(sTypeOfExpNode* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = clone come_value.type;
    
    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("\"%s\"", type_name);
    come_value.type = new sType("char*");
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sDynamicTypeOfNode {
    sNode*% exp;
    int sline;
    string sname;
};

sDynamicTypeOfNode*% sDynamicTypeOfNode*::initialize(sDynamicTypeOfNode*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDynamicTypeOfNode*::sline(sDynamicTypeOfNode* self, sInfo* info)
{
    return self.sline;
}

string sDynamicTypeOfNode*::sname(sDynamicTypeOfNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDynamicTypeOfNode*::terminated()
{
    return false;
}

string sDynamicTypeOfNode*::kind()
{
    return string("sDynamicTypeOfNode");
}

bool sDynamicTypeOfNode*::compile(sDynamicTypeOfNode* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(!come_value.type.mHeap) {
        sType*% type = clone come_value.type;
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("\"%s\"", type_name);
        come_value.type = new sType("char*");
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
    else {
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = xsprintf("come_dynamic_typeof(%s)", come_value.c_value);
        come_value2.type = new sType("char*");
        come_value2.var = null;
        
        add_come_last_code(info, "%s;\n", come_value2.c_value);
        
        info.stack.push_back(come_value2);
    }
    
    return true;
}

struct sAlignOfNode {
    sType*% type;
    int sline;
    string sname;
};

sAlignOfNode*% sAlignOfNode*::initialize(sAlignOfNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignOfNode*::sline(sAlignOfNode* self, sInfo* info)
{
    return self.sline;
}

string sAlignOfNode*::sname(sAlignOfNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignOfNode*::terminated()
{
    return false;
}

string sAlignOfNode*::kind()
{
    return string("sAlignOfNode");
}

bool sAlignOfNode*::compile(sAlignOfNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("_Alignof(%s)", type_name);
    come_value.type = new sType("long");
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sAlignOfExpNode {
    sNode*% exp;
    int sline;
    string sname;
};

sAlignOfExpNode*% sAlignOfExpNode*::initialize(sAlignOfExpNode*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignOfExpNode*::sline(sAlignOfExpNode* self, sInfo* info)
{
    return self.sline;
}

string sAlignOfExpNode*::sname(sAlignOfExpNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignOfExpNode*::terminated()
{
    return false;
}

string sAlignOfExpNode*::kind()
{
    return string("sAlignOfExpNode");
}

bool sAlignOfExpNode*::compile(sAlignOfExpNode* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("_AlignOf(%s)", come_value.c_value);
    come_value2.type = new sType("long");
    come_value2.type->mUnsigned = true;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
    return true;
}

struct sAlignOfNode2 {
    sType*% type;
    int sline;
    string sname;
};

sAlignOfNode2*% sAlignOfNode2*::initialize(sAlignOfNode2*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignOfNode2*::sline(sAlignOfNode2* self, sInfo* info)
{
    return self.sline;
}

string sAlignOfNode2*::sname(sAlignOfNode2* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignOfNode2*::terminated()
{
    return false;
}

string sAlignOfNode2*::kind()
{
    return string("sAlignOfNode2");
}

bool sAlignOfNode2*::compile(sAlignOfNode2* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("__alignof__(%s)", type_name);
    come_value.type = new sType("long");
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sAlignOfExpNode2 {
    sNode*% exp;
    int sline;
    string sname;
};

sAlignOfExpNode2*% sAlignOfExpNode2*::initialize(sAlignOfExpNode2*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignOfExpNode2*::sline(sAlignOfExpNode2* self, sInfo* info)
{
    return self.sline;
}

string sAlignOfExpNode2*::sname(sAlignOfExpNode2* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignOfExpNode2*::terminated()
{
    return false;
}

string sAlignOfExpNode2*::kind()
{
    return string("sAlignOfExpNode2");
}

bool sAlignOfExpNode2*::compile(sAlignOfExpNode2* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("__alignof__(%s)", come_value.c_value);
    come_value2.type = new sType("long");
    come_value2.type->mUnsigned = true;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
    return true;
}

struct sAlignAsNode {
    sType*% type;
    int sline;
    string sname;
};

sAlignAsNode*% sAlignAsNode*::initialize(sAlignAsNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignAsNode*::sline(sAlignAsNode* self, sInfo* info)
{
    return self.sline;
}

string sAlignAsNode*::sname(sAlignAsNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignAsNode*::terminated()
{
    return false;
}

string sAlignAsNode*::kind()
{
    return string("sAlignAsNode");
}

bool sAlignAsNode*::compile(sAlignAsNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    var type2 = solve_generics(type, info->generics_type, info);
    
    string type_name = make_type_name_string(type2);
    
    come_value.c_value = xsprintf("_Alignas(%s)", type_name);
    come_value.type = new sType("long");
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sAlignAsExpNode {
    sNode*% exp;
    int sline;
    string sname;
};

sAlignAsExpNode*% sAlignAsExpNode*::initialize(sAlignAsExpNode*% self, sNode*% exp, sInfo* info)
{
    self.exp = clone exp;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sAlignAsExpNode*::sline(sAlignAsExpNode* self, sInfo* info)
{
    return self.sline;
}

string sAlignAsExpNode*::sname(sAlignAsExpNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sAlignAsExpNode*::terminated()
{
    return false;
}

string sAlignAsExpNode*::kind()
{
    return string("sAlignAsExpNode");
}


bool sAlignAsExpNode*::compile(sAlignAsExpNode* self, sInfo* info)
{
    sNode*% exp = self.exp;
    
    if(!node_compile(exp)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("_Alignas(%s)", come_value.c_value);
    come_value2.type = new sType("long");
    come_value2.type->mUnsigned = true;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
    return true;
}

struct sDeleteNode {
    sNode*% node;
    int sline;
    string sname;
};

sDeleteNode*% sDeleteNode*::initialize(sDeleteNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDeleteNode*::sline(sDeleteNode* self, sInfo* info)
{
    return self.sline;
}

string sDeleteNode*::sname(sDeleteNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDeleteNode*::terminated()
{
    return false;
}

string sDeleteNode*::kind()
{
    return string("sDeleteNode");
}

bool sDeleteNode*::compile(sDeleteNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    free_object(come_value.type, come_value.c_value, false@no_decrement, false@no_free, info);
    
    return true;
}

struct sForceDeleteNode {
    sNode*% node;
    int sline;
    string sname;
};

sForceDeleteNode*% sForceDeleteNode*::initialize(sForceDeleteNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sForceDeleteNode*::sline(sForceDeleteNode* self, sInfo* info)
{
    return self.sline;
}

string sForceDeleteNode*::sname(sForceDeleteNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sForceDeleteNode*::terminated()
{
    return false;
}

string sForceDeleteNode*::kind()
{
    return string("sForceDeleteNode");
}

bool sForceDeleteNode*::compile(sDeleteNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    free_object(come_value.type, come_value.c_value, false@no_decrement, false@no_free, info, false@comma, false@ret_value, true@force_delete);
    
    return true;
}

struct sDelegateNode {
    sNode*% node;
    int sline;
    string sname;
};

sDelegateNode*% sDelegateNode*::initialize(sDelegateNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDelegateNode*::sline(sDelegateNode* self, sInfo* info)
{
    return self.sline;
}

string sDelegateNode*::sname(sDelegateNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDelegateNode*::terminated()
{
    return false;
}

string sDelegateNode*::kind()
{
    return string("sDelegateNode");
}

bool sDelegateNode*::compile(sDelegateNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mDelegate = true;
    
    if(come_value.var) {
        come_value.var.mType.mDelegate = true;
    }
/*
    else {
        err_msg(info, "require local variable for delegate");
        return false;
    }
*/
    
    info.stack.push_back(come_value);
    
    return true;
}
struct sShareNode {
    sNode*% node;
    int sline;
    string sname;
};

sShareNode*% sShareNode*::initialize(sShareNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sShareNode*::sline(sShareNode* self, sInfo* info)
{
    return self.sline;
}

string sShareNode*::sname(sShareNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sShareNode*::terminated()
{
    return false;
}

string sShareNode*::kind()
{
    return string("sShareNode");
}

bool sShareNode*::compile(sShareNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mShare = true;
    
    if(come_value.var) {
        come_value.var.mType.mShare = true;
    }
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sBorrowNode {
    sNode*% node;
    int sline;
    string sname;
};

sBorrowNode*% sBorrowNode*::initialize(sBorrowNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sBorrowNode*::sline(sBorrowNode* self, sInfo* info)
{
    return self.sline;
}

string sBorrowNode*::sname(sBorrowNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sBorrowNode*::terminated()
{
    return false;
}

string sBorrowNode*::kind()
{
    return string("sBorrowNode");
}

bool sBorrowNode*::compile(sBorrowNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mHeap = false;
    
    int right_value_id = get_right_value_id_from_obj(come_value.c_value);
    
    if(right_value_id != -1) {
        remove_object_from_right_values(right_value_id, info);
    }
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sCloneNode {
    sNode*% node;
    int sline;
    string sname;
};

sCloneNode*% sCloneNode*::initialize(sCloneNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCloneNode*::sline(sCloneNode* self, sInfo* info)
{
    return self.sline;
}

string sCloneNode*::sname(sCloneNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCloneNode*::terminated()
{
    return false;
}

string sCloneNode*::kind()
{
    return string("sCloneNode");
}

bool sCloneNode*::compile(sCloneNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    left_value.type->mClone = true;
    
    sType*% left_type = clone left_value.type;
    
    if(left_type->mPointerNum == 1 && left_type->mClass->mName === "void" && left_type->mHeap == false) { // null
        info.stack.push_back(left_value);
    }
    else if(left_type->mPointerNum == 0) {
        info.stack.push_back(left_value);
    }
    else if(left_type->mPointerNum > 0) {
        CVALUE*% come_value = new CVALUE;
        
        var result_type, c_value = clone_object(left_type, left_value.c_value, info);
        come_value.c_value = c_value;
        come_value.type = clone left_type;
        come_value.type->mHeap = true;
        come_value.type->mClone = true;
        come_value.var = null;
        
        come_value.c_value = append_object_to_right_values(come_value.c_value, left_type,info);
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

struct sDupeNode {
    sNode*% node;
    int sline;
    string sname;
};

sDupeNode*% sDupeNode*::initialize(sDupeNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDupeNode*::sline(sDupeNode* self, sInfo* info)
{
    return self.sline;
}

string sDupeNode*::sname(sDupeNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDupeNode*::terminated()
{
    return false;
}

string sDupeNode*::kind()
{
    return string("sDupeNode");
}

bool sDupeNode*::compile(sDupeNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% left_type = clone left_value.type;
    
    if(left_type->mPointerNum == 0) {
        info.stack.push_back(left_value);
    }
    else if(left_type->mPointerNum > 0 && left_type->mHeap == false) {
        info.stack.push_back(left_value);
    }
    else if(left_type->mPointerNum > 0) {
        CVALUE*% come_value = new CVALUE;
        
        var result_type, c_value = clone_object(left_type, left_value.c_value, info);
        come_value.c_value = c_value;
        come_value.type = clone left_type;
        come_value.type->mHeap = true;
        come_value.var = null;
        
        come_value.c_value = append_object_to_right_values(come_value.c_value, left_type,info);
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

struct sDummyHeapNode {
    sNode*% node;
    int sline;
    string sname;
};

sDummyHeapNode*% sDummyHeapNode*::initialize(sDummyHeapNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDummyHeapNode*::sline(sDummyHeapNode* self, sInfo* info)
{
    return self.sline;
}

string sDummyHeapNode*::sname(sDummyHeapNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDummyHeapNode*::terminated()
{
    return false;
}

string sDummyHeapNode*::kind()
{
    return string("sDummyHeapNode");
}

bool sDummyHeapNode*::compile(sDummyHeapNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mHeap = true;
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sGCIncNode {
    sNode*% node;
    int sline;
    string sname;
};

sGCIncNode*% sGCIncNode*::initialize(sGCIncNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sGCIncNode*::sline(sGCIncNode* self, sInfo* info)
{
    return self.sline;
}

string sGCIncNode*::sname(sGCIncNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sGCIncNode*::terminated()
{
    return false;
}

string sGCIncNode*::kind()
{
    return string("sGCIncNode");
}

bool sGCIncNode*::compile(sGCIncNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* type = come_value.type;
    
    if(come_value.type.mHeap) {
        string type_name = make_type_name_string(type);
        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
    }
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sGCDecNode {
    sNode*% node;
    int sline;
    string sname;
};

sGCDecNode*% sGCDecNode*::initialize(sGCDecNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sGCDecNode*::sline(sGCDecNode* self, sInfo* info)
{
    return self.sline;
}

string sGCDecNode*::sname(sGCDecNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sGCDecNode*::terminated()
{
    return false;
}

string sGCDecNode*::kind()
{
    return string("sGCDecNode");
}

bool sGCDecNode*::compile(sGCDecNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* type = come_value.type;
    
    decrement_ref_count_object(type, come_value.c_value, info);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sIsHeap {
    sType*% type;
    int sline;
    string sname;
};

sIsHeap*% sIsHeap*::initialize(sIsHeap*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sIsHeap*::sline(sIsHeap* self, sInfo* info)
{
    return self.sline;
}

string sIsHeap*::sname(sIsHeap* self, sInfo* info)
{
    return string(self.sname);
}

bool sIsHeap*::terminated()
{
    return false;
}

string sIsHeap*::kind()
{
    return string("sIsHeap");
}

bool sIsHeap*::compile(sIsHeap* self, sInfo* info)
{
    sType* node = self.type;
    
    if(self.type.mHeap) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("1");
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("0");
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    
    return true;
}

struct sIsPointer {
    sType*% type;
    int sline;
    string sname;
};

sIsPointer*% sIsPointer*::initialize(sIsPointer*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sIsPointer*::sline(sIsPointer* self, sInfo* info)
{
    return self.sline;
}

string sIsPointer*::sname(sIsPointer* self, sInfo* info)
{
    return string(self.sname);
}

bool sIsPointer*::terminated()
{
    return false;
}

string sIsPointer*::kind()
{
    return string("sIsPointer");
}

bool sIsPointer*::compile(sIsPointer* self, sInfo* info)
{
    sType* node = self.type;
    
    if(self.type.mPointerNum > 0) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("1");
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("0");
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    
    return true;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21
{
    if(buf === "new") {
        var type, name, err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        if(*info->p == '(') {
            if(type->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf();
                
                sType*% inf_type = clone type;
                
                sNode*% node = expression();
                
                expected_next_character(')');
                
                return new sImplementsNode(node, inf_type, info) implements sNode;
            }
            else {
                sNode*% obj = new sNewNode(type, info) implements sNode;
                string fun_name = string("initialize");
                
                return parse_method_call(clone obj, fun_name, info);
            }
        }
        else {
            return new sNewNode(type, info) implements sNode;
        }
    }
    else if(buf === "true") {
        return new sTrueNode(info) implements sNode;
    }
    else if(buf === "false") {
        return new sFalseNode(info) implements sNode;
    }
    else if(buf === "delete") {
         sNode*% node = expression();
         
         return new sDeleteNode(node, info) implements sNode;
    }
    else if(buf === "force_delete") {
         sNode*% node = expression();
         
         return new sForceDeleteNode(node, info) implements sNode;
        
    }
    else if(buf === "borrow") {
         sNode*% node = expression();
         
         return new sBorrowNode(node, info) implements sNode;
    }
    else if(buf === "delegate") {
         sNode*% node = expression();
         
         return new sDelegateNode(node, info) implements sNode;
    }
    else if(buf === "share") {
         sNode*% node = expression();
         
         return new sShareNode(node, info) implements sNode;
    }
    else if(buf === "clone") {
         sNode*% node = expression();
         
         return new sCloneNode(node, info) implements sNode;
    }
    else if(buf === "dupe") {
         sNode*% node = expression();
         
         return new sDupeNode(node, info) implements sNode;
    }
    else if(buf === "dummy_heap") {
         sNode*% node = expression();
         
         return new sDummyHeapNode(node, info) implements sNode;
    }
    else if(buf === "gc_inc" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCIncNode(node, info) implements sNode;
    }
    else if(buf === "gc_dec" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCDecNode(node, info) implements sNode;
    }
    else if(buf === "isheap" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2 = solve_generics(param_type, info->generics_type, info);
        
        expected_next_character(')');
        
        return new sIsHeap(type2, info) implements sNode;
    }
    else if(buf === "ispointer" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2 = solve_generics(param_type, info->generics_type, info);
        
        expected_next_character(')');
        
        return new sIsPointer(type2, info) implements sNode;
    }
    else if(buf === "using") {
        if(strmemcmp(info->p, "neo-c")) {
            info->p += strlen("neo-c");
            skip_spaces_and_lf();
            
            gComeC = false;
        
            return new sNullNodeX(info) implements sNode;
        }
        else if(strmemcmp(info->p, "c") || strmemcmp(info->p, "C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            gComeC = true;
            
            if(*info->p == '{') {
                sNode*% node = parse_normal_block();
                
                gComeC = false;
                
                return node;
            }
            else {
                return new sNullNodeX(info) implements sNode;
            }
        }
        else if(strmemcmp(info->p, "gc")) {
            info->p += strlen("gc");
            skip_spaces_and_lf();
        
            return new sNullNodeX(info) implements sNode;
        }
        else if(strmemcmp(info->p, "no-gc")) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf();
            
        
            return new sNullNodeX(info) implements sNode;
        }
        else if(strmemcmp(info->p, "unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
        
            return new sNullNodeX(info) implements sNode;
        }
        else if(strmemcmp(info->p, "no-null-check")) {
            info->p += strlen("no-null-check");
            skip_spaces_and_lf();
        
            return new sNullNodeX(info) implements sNode;
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
    }
    else if(buf === "sizeof") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sSizeOfNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sSizeOfExpNode(exp, info) implements sNode;
        }
    }
    else if(buf === "typeof") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sTypeOfNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sTypeOfExpNode(exp, info) implements sNode;
        }
    }
/*
    else if(buf === "dynamic_typeof") {
        expected_next_character('(');
        
        var exp = expression();
        
        expected_next_character(')');
        
        return new sDynamicTypeOfNode(exp, info) implements sNode;
    }
*/
    else if(buf === "_Alignof") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sAlignOfNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sAlignOfExpNode(exp, info) implements sNode;
        }
    }
    else if(buf === "__alignof__") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sAlignOfNode2(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sAlignOfExpNode2(exp, info) implements sNode;
        }
    }
    else if(buf === "_Alignas") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sAlignAsNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sAlignAsExpNode(exp, info) implements sNode;
        }
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 94
{
   if(buf === "using") {
        if(strmemcmp(info->p, "neo-c")) {
            info->p += strlen("neo-c");
            skip_spaces_and_lf();
            
            gComeC = false;
        }
        else if(strmemcmp(info->p, "c") || strmemcmp(info->p, "C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                gComeC = true;
                
                transpile_toplevel(true);
                
                gComeC = false;
            }
            else {
                gComeC = true;
            }
        }
        else if(strmemcmp(info->p, "gc")) {
            info->p += strlen("gc");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "no-gc")) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
        
        return new sNullNodeX(info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% post_position_operator3(sNode*% node, sInfo* info) version 21
{
    if(strmemcmp(info->p, "implements")) {
        info->p += strlen("implements");
        skip_spaces_and_lf();
        
        var type3, name2,err = parse_type(parse_multiple_type:false);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sType*% inf_type = clone type3;
        
        return new sImplementsNode(node, inf_type, info) implements sNode;
    }
    else if(*info->p == '@') {
        info->p++;
        while(xisalnum(*info->p) || *info->p == '_') {
            info->p++;
        }
        skip_spaces_and_lf();
    }
    
    return inherit(node, info);
}


