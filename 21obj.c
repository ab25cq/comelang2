#include "common.h"

class sNullNodeX extends sNodeBase
{
    new(sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sNullNodeX");
    }
    
    bool compile(sInfo* info)
    {
        return true;
    }
};

class sNewNode extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sNewNode");
    }
    
    bool compile(sInfo* info)
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
};

class sImplementsNode extends sNodeBase
{
    sNode*% obj_exp;
    sType*% inf_type;
    
    new(sNode*% obj_exp, sType*% inf_type, sInfo* info)
    {
        self.obj_exp = clone obj_exp;
        self.inf_type = clone inf_type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sImplementsNode");
    }
    
    bool compile(sInfo* info)
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
};


class sTrueNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sTrueNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("(_Bool)1");
        come_value.type = new sType("bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sFalseNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sFalseNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("(_Bool)0");
        come_value.type = new sType("bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sSizeOfNode extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sSizeOfNode");
    }
    
    bool compile(sInfo* info)
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
};

class sSizeOfExpNode extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
        
        return self;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sSizeOfExpNode");
    }
    
    bool compile(sInfo* info)
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
};

class sTypeOfNode extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sTypeOfNode");
    }
    
    bool compile(sInfo* info)
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
};

class sTypeOfExpNode extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sTypeOfExpNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDynamicTypeOfNode extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDynamicTypeOfNode");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignOfNode extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
        
        return self;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignOfNode");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignOfExpNode extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignOfNode2 extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignOfNode2");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignOfExpNode2 extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode2");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignAsNode extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignAsNode");
    }
    
    bool compile(sInfo* info)
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
};

class sAlignAsExpNode extends sNodeBase
{
    sNode*% exp;
    
    new(sNode*% exp, sInfo* info)
    {
        self.exp = clone exp;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAlignAsExpNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDeleteNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDeleteNode");
    }
    
    bool compile(sInfo* info)
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
};

class sForceDeleteNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sForceDeleteNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDelegateNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
        
        return self;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDelegateNode");
    }
    
    bool compile(sInfo* info)
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
};

class sShareNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sShareNode");
    }
    
    bool compile(sInfo* info)
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
};

class sBorrowNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
        
        return self;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sBorrowNode");
    }
    
    bool compile(sInfo* info)
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
};

class sCloneNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sCloneNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDupeNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDupeNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDummyHeapNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDummyHeapNode");
    }
    
    bool compile(sInfo* info)
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
};

class sGCIncNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sGCIncNode");
    }
    
    bool compile(sInfo* info)
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
};

class sGCDecNode extends sNodeBase
{
    sNode*% node;
    
    new(sNode*% node, sInfo* info)
    {
        self.node = clone node;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sGCDecNode");
    }
    
    bool compile(sInfo* info)
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
};

class sIsHeap extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sIsHeap");
    }
    
    bool compile(sInfo* info)
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
};

class sIsPointer extends sNodeBase
{
    sType*% type;
    
    new(sType*% type, sInfo* info)
    {
        self.type = clone type;
        
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sIsPointer");
    }
    
    bool compile(sInfo* info)
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
};

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


