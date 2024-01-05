#include "common.h"

void come_init() version 5
{
}

void come_final() version 5
{
}

bool operator_overload_fun_self(sType* type, char* fun_name, CVALUE* left_value, sInfo* info)
{
    sType*% generics_type = clone type;
    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    sFun* operator_fun = null;
    
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null);
        
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
            
            operator_fun = info->funcs[fun_name2];
        }
        else {
            if(fun_name === "operator_equals") {
                var fun, fun_name = create_equals_automatically(obj_type, "equals", info);
                var fun2, fun_name2 = create_operator_equals_automatically(obj_type, "operator_equals", info);
                
                operator_fun = fun2;
            }
            else if(fun_name === "operator_not_equals") {
                var fun, fun_name = create_equals_automatically(obj_type, "not_equals", info);
                var fun2, fun_name2 = create_operator_not_equals_automatically(obj_type, "operator_not_equals", info);
                
                operator_fun = fun2;
            }
            else {
                operator_fun = info->funcs[fun_name2];
            }
        }
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            operator_fun = info->funcs[new_fun_name];
            
            if(operator_fun) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(operator_fun == NULL) {
            operator_fun = info->funcs[fun_name2];
        }
    }
    
    bool result = false;
    
    if(operator_fun) {
        CVALUE*% come_value = new CVALUE;
        string left_value2;
        check_assign_type(s"\{fun_name2} is assigned to", operator_fun.mParamTypes[0], left_value.type, left_value);
        if(operator_fun.mParamTypes[0].mHeap && left_value.type.mHeap) {
            if(left_value.var) {
                if(left_value.var.mType.mDelegate) {
                    left_value.var->mCValueName = null;
                }
                else if(left_value.var.mType.mShare) {
                    left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
                }
                else if(left_value.var.mType.mClone) {
                    left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
                }
                else {
                    left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
                }
            }
            else {
                if(left_value.type.mDelegate) {
                }
                else {
                    left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
                }
            }
            left_value2 = xsprintf("%s", left_value.c_value);
        }
        else {
            left_value2 = clone left_value.c_value;
        }
        
        come_value.c_value = xsprintf("%s(%s)", fun_name2, left_value2);
        
        sType*% type2 = clone operator_fun->mResultType;
        
        sType*% type3 = solve_generics(type2, generics_type, info);
        
        come_value.type = clone type3;
        come_value.var = null;
        
        if(type3->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, type3, info);
        }
        
        if(operator_fun.mResultType->mException || gComeDebug) {
            come_value.c_value = append_exception_value(come_value.c_value, come_value.type, info);
        }
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    
        result = true;
    }
    
    return result;
}

struct sReturnNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sReturnNode*% sReturnNode*::initialize(sReturnNode*% self, sNode*% value, string value_source, sInfo* info)
{
    self.value = value;
    self.value_source = clone value_source;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReturnNode*::sline(sReturnNode* self, sInfo* info)
{
    return self.sline;
}

string sReturnNode*::sname(sReturnNode* self, sInfo* info)
{
    return string(self.sname);
}

string sReturnNode*::kind()
{
    return string("sReturnNode");
}

bool sReturnNode*::terminated()
{
    return false;
}

bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(self.value) {
        sFun* come_fun = info.come_fun;
        
        sType*% result_type = clone come_fun.mResultType;
        
        sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
        
        sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
        if(result_type2->mNoSolvedGenericsType.v1) {
            result_type3 = result_type2->mNoSolvedGenericsType.v1;
        }
        else {
            result_type3 = result_type2;
        }
        
        if(result_type3->mException) {
            sNode*% node = create_some_object(self.value, info);
            
            if(!node_compile(node)) {
                return false;
            }
        }
        else {
            if(!node_compile(self.value)) {
                return false;
            }
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        if(come_value.type->mHeap && come_value.var == null) {
            int right_value_id = get_right_value_id_from_obj(come_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
        
        sType*% come_value_type = solve_generics(come_value.type, info.generics_type, info);
        
        static int num_result = 0;
        string var_name = xsprintf("__result%d__", ++num_result);
        int num_result_stack = num_result;
        if(result_type2->mPointerNum > 0) {
            add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type2, var_name));
            add_come_code(info, "%s = __result_obj__ = %s;\n", var_name, come_value.c_value);
        }
        else {
            add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type2, var_name));
            add_come_code(info, "%s = %s;\n", var_name, come_value.c_value);
        }
        add_last_code_to_source(info);

        free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block);
        free_right_value_objects(info);
        
        caller_end();
        
        if(info.come_fun.mName === "main") {
            free_objects(info->gv_table, null@ret_value, info);
            add_come_code(info, xsprintf("come_heap_final();\n"));
        }
        
        add_come_code(info, "return __result%d__;\n", num_result_stack);
    }
    else {
        sFun* come_fun = info.come_fun;
        caller_end();
        
        add_last_code_to_source(info);
        free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
        free_right_value_objects(info);
        
        if(info.come_fun.mName === "main") {
            free_objects(info->gv_table, null@ret_value, info);
            add_come_code(info, xsprintf("come_heap_final();\n"));
        }
        add_come_code(info, "return;\n");
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sLineNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sLineNode*% sLineNode*::initialize(sLineNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sLineNode*::sline(sLineNode* self, sInfo* info)
{
    return self.sline;
}

string sLineNode*::sname(sLineNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sLineNode*::terminated()
{
    return false;
}

string sLineNode*::kind()
{
    return string("sLineNode");
}

bool sLineNode*::compile(sLineNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", info->sline);
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

struct sSNameNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sSNameNode*% sSNameNode*::initialize(sSNameNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sSNameNode*::sline(sSNameNode* self, sInfo* info)
{
    return self.sline;
}

string sSNameNode*::sname(sSNameNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sSNameNode*::terminated()
{
    return false;
}

string sSNameNode*::kind()
{
    return string("sSNameNode");
}

bool sSNameNode*::compile(sSNameNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", info->sname);
    come_value.type = new sType("char*");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

struct sFuncNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sFuncNode*% sFuncNode*::initialize(sFuncNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFuncNode*::sline(sFuncNode* self, sInfo* info)
{
    return self.sline;
}

string sFuncNode*::sname(sFuncNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFuncNode*::terminated()
{
    return false;
}

string sFuncNode*::kind()
{
    return string("sFuncNode");
}

bool sFuncNode*::compile(sFuncNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", info->come_fun->mName);
    come_value.type = new sType("char*");
    //come_value.type.mConstant = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

struct sCallerFuncNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sCallerFuncNode*% sCallerFuncNode*::initialize(sCallerFuncNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCallerFuncNode*::sline(sCallerFuncNode* self, sInfo* info)
{
    return self.sline;
}

string sCallerFuncNode*::sname(sCallerFuncNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCallerFuncNode*::terminated()
{
    return false;
}

string sCallerFuncNode*::kind()
{
    return string("sCallerFuncNode");
}

bool sCallerFuncNode*::compile(sCallerFuncNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    if(info->caller_fun) {
        come_value.c_value = xsprintf("\"%s\"", info->caller_fun->mName);
    }
    else {
        come_value.c_value = xsprintf("\"\"");
    }
    come_value.type = new sType("char*");
    //come_value.type.mConstant = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

struct sCallerLineNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sCallerLineNode*% sCallerLineNode*::initialize(sCallerLineNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCallerLineNode*::sline(sCallerLineNode* self, sInfo* info)
{
    return self.sline;
}

string sCallerLineNode*::sname(sCallerLineNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCallerLineNode*::terminated()
{
    return false;
}

bool sCallerLineNode*::compile(sCallerLineNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", info->caller_line);
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

string sCallerLineNode*::kind()
{
    return string("sCallerLineNode");
}

struct sCallerSNameNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sCallerSNameNode*% sCallerSNameNode*::initialize(sCallerSNameNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCallerSNameNode*::sline(sCallerSNameNode* self, sInfo* info)
{
    return self.sline;
}

string sCallerSNameNode*::sname(sCallerSNameNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCallerSNameNode*::terminated()
{
    return false;
}

bool sCallerSNameNode*::compile(sCallerSNameNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", info->caller_sname);
    come_value.type = new sType("char*");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

string sCallerSNameNode*::kind()
{
    return string("sCallerSNameNode");
}

struct sParentReturnNode
{
    sNode*% value;
    string value_source;
    int sline;
    string sname;
};

sParentReturnNode*% sParentReturnNode*::initialize(sParentReturnNode*% self, sNode*% value, string value_source, sInfo* info)
{
    self.value = value;
    self.value_source = clone value_source;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParentReturnNode*::sline(sParentReturnNode* self, sInfo* info)
{
    return self.sline;
}

string sParentReturnNode*::sname(sParentReturnNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParentReturnNode*::terminated()
{
    return false;
}

string sParentReturnNode*::kind()
{
    return string("sParentReturnNode");
}

bool sParentReturnNode*::compile(sParentReturnNode* self, sInfo* info)
{
    if(info->current_stack_frame_struct == null) {
        err_msg(info, "not in method block");
        return false;
    }
    
    sFun* come_fun = info.come_fun;
    
    sType*% result_type = clone come_fun.mResultType;
    
    sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
    
    sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
    if(result_type2->mNoSolvedGenericsType.v1) {
        result_type3 = result_type2->mNoSolvedGenericsType.v1;
    }
    else {
        result_type3 = result_type2;
    }
    
    if(self.value) {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        if(come_value.type->mHeap && come_value.var == null) {
            int right_value_id = get_right_value_id_from_obj(come_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
        
        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        
        free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block);
        free_right_value_objects(info);
        
        string var_name2 = xsprintf("((struct __current_stack%d__*) parent)", info.num_current_stack);
        
        add_come_code(info, """
            \{var_name2}->__method_block_result_kind__ = METHOD_BLOCK_RESULT_KIND_RETURN;
            \{var_name2}->__method_block_return_value__ = \{come_value.c_value};
        """);
        
        if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
            add_come_code(info, "return;");
        }
        else {
            add_come_code(info, "return (void*)0;");
        }
    }
    else {
        sFun* come_fun = info.come_fun;
        free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
        free_right_value_objects(info);
        
        string var_name2 = xsprintf("((struct __current_stack%d__*) parent)", info.num_current_stack);
        
        add_come_code(info, """
            \{var_name2}->__method_block_result_kind__ = METHOD_BLOCK_RESULT_KIND_RETURN_VOID;
            \{var_name2}->__method_block_return_value__ = 0;
        """);
        
        if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
            add_come_code(info, "return;");
        }
        else {
            add_come_code(info, "return (void*)0;");
        }
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sParentBreakNode
{
    int sline;
    string sname;
};

sParentBreakNode*% sParentBreakNode*::initialize(sParentBreakNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParentBreakNode*::sline(sParentBreakNode* self, sInfo* info)
{
    return self.sline;
}

string sParentBreakNode*::sname(sParentBreakNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParentBreakNode*::terminated()
{
    return false;
}

string sParentBreakNode*::kind()
{
    return string("sParentBreakNode");
}

bool sParentBreakNode*::compile(sParentBreakNode* self, sInfo* info)
{
    if(info->current_stack_frame_struct == null) {
        err_msg(info, "not in method block");
        return false;
    }
    
    sFun* come_fun = info.come_fun;
    
    sType*% result_type = clone come_fun.mResultType;
    
    sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
    
    sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
    if(result_type2->mNoSolvedGenericsType.v1) {
        result_type3 = result_type2->mNoSolvedGenericsType.v1;
    }
    else {
        result_type3 = result_type2;
    }
    
    free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
    free_right_value_objects(info);
    
    string var_name2 = xsprintf("((struct __current_stack%d__*) parent)", info.num_current_stack);
    
    add_come_code(info, """
        \{var_name2}->__method_block_result_kind__ = METHOD_BLOCK_RESULT_KIND_BREAK;
        \{var_name2}->__method_block_return_value__ = 0;
    """);
    
    if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
        add_come_code(info, "return;");
    }
    else {
        add_come_code(info, "return (void*)0;");
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sParentContinueNode
{
    int sline;
    string sname;
};

sParentContinueNode*% sParentContinueNode*::initialize(sParentContinueNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParentContinueNode*::sline(sParentContinueNode* self, sInfo* info)
{
    return self.sline;
}

string sParentContinueNode*::sname(sParentContinueNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParentContinueNode*::terminated()
{
    return false;
}

string sParentContinueNode*::kind()
{
    return string("sParentContinueNode");
}

bool sParentContinueNode*::compile(sParentContinueNode* self, sInfo* info)
{
    if(info->current_stack_frame_struct == null) {
        err_msg(info, "not in method block");
        return false;
    }
    
    sFun* come_fun = info.come_fun;
    
    sType*% result_type = clone come_fun.mResultType;
    
    sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
    
    sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
    if(result_type2->mNoSolvedGenericsType.v1) {
        result_type3 = result_type2->mNoSolvedGenericsType.v1;
    }
    else {
        result_type3 = result_type2;
    }
    
    free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
    free_right_value_objects(info);
    
    string var_name2 = xsprintf("((struct __current_stack%d__*) parent)", info.num_current_stack);
    
    add_come_code(info, """
        \{var_name2}->__method_block_result_kind__ = METHOD_BLOCK_RESULT_KIND_CONTINUE;
        \{var_name2}->__method_block_return_value__ = 0;
    """);
    
    if(result_type3->mClass->mName === "void" && result_type3->mPointerNum == 0) {
        add_come_code(info, "return;");
    }
    else {
        add_come_code(info, "return (void*)0;");
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sDerefferenceNode
{
    sNode*% value;
    bool mQuote;
    int sline;
    string sname;
};

sDerefferenceNode*% sDerefferenceNode*::initialize(sDerefferenceNode*% self, sNode*% value, bool quote, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;
    
    return self;
}

int sDerefferenceNode*::sline(sDerefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sDerefferenceNode*::sname(sDerefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDerefferenceNode*::terminated()
{
    return false;
}

string sDerefferenceNode*::kind()
{
    return string("sDerefferenceNode");
}

bool sDerefferenceNode*::compile(sDerefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!node_compile(value)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_derefference";
    
    bool calling_fun;
    if(self.mQuote) {
        calling_fun = false;
    }
    else {
        calling_fun = operator_overload_fun_self(type, fun_name, left_value, info);
    }
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("*%s", left_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mPointerNum--;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

struct sRefferenceNode
{
    sNode*% value;
    int sline;
    string sname;
};

sRefferenceNode*% sRefferenceNode*::initialize(sRefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sRefferenceNode*::sline(sRefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sRefferenceNode*::sname(sRefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sRefferenceNode*::terminated()
{
    return false;
}

string sRefferenceNode*::kind()
{
    return string("sRefferenceNode");
}


bool sRefferenceNode*::compile(sRefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!node_compile(value)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum++;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
    
    return true;
}

struct sReverseNode
{
    sNode*% value;
    int sline;
    string sname;
};

sReverseNode*% sReverseNode*::initialize(sReverseNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReverseNode*::sline(sReverseNode* self, sInfo* info)
{
    return self.sline;
}

string sReverseNode*::sname(sReverseNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sReverseNode*::terminated()
{
    return false;
}

string sReverseNode*::kind()
{
    return string("sReverseNode");
}

bool sReverseNode*::compile(sReverseNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!node_compile(value)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("!%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% expression_node(sInfo* info=info) version 1
{
    skip_spaces_and_lf();
    parse_sharp();
    
    err_msg(info, "invalid character(%c)(1)\n", *info->p);
    stackframe();
    exit(3);
    return (sNode*%)null;
}

int main(int argc, char** argv)
{
    puts("AAA");
    
    return 0;
}

