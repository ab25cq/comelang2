#include "common.h"

void come_init() version 5
{
}

void come_final() version 5
{
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
            
            if(!node.compile(info)) {
                return false;
            }
        }
        else {
            if(!self.value->compile->(info)) {
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

        free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block);
        free_right_value_objects(info);
        
        if(info.come_fun.mName === "main") {
            free_objects(info->gv_table, null@ret_value, info);
            if(gComeDebug) {
                add_come_code(info, xsprintf("come_heap_final(1);\n"));
            }
            else {
                add_come_code(info, xsprintf("come_heap_final(0);\n"));
            }
        }
        
        add_come_code(info, "return __result%d__;\n", num_result_stack);
    }
    else {
        sFun* come_fun = info.come_fun;
        free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
        free_right_value_objects(info);
        
        if(info.come_fun.mName === "main") {
            free_objects(info->gv_table, null@ret_value, info);
            if(gComeDebug) {
                add_come_code(info, xsprintf("come_heap_final(1);\n"));
            }
            else {
                add_come_code(info, xsprintf("come_heap_final(0);\n"));
            }
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
        if(!self.value->compile->(info)) {
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
    int sline;
    string sname;
};

sDerefferenceNode*% sDerefferenceNode*::initialize(sDerefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
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
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("*%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
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
    
    if(!value->compile->(info)) {
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
    
    if(!value->compile->(info)) {
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
    exit(3);
    return (sNode*%)null;
}

struct sFunCallNode 
{
    string fun_name;
    list<tuple2<string,sNode*%>*%>*% params;
    int sline;
    string sname;
};

sFunCallNode*% sFunCallNode*::initialize(sFunCallNode*% self, char* fun_name, list<tuple2<string,sNode*%>*%>* params, sInfo* info)
{
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFunCallNode*::sline(sFunCallNode* self, sInfo* info)
{
    return self.sline;
}

string sFunCallNode*::sname(sFunCallNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunCallNode*::terminated()
{
    return false;
}

string sFunCallNode*::kind()
{
    return string("sFunCallNode");
}

bool sFunCallNode*::compile(sFunCallNode* self, sInfo* info)
{
    string fun_name = self.fun_name;
    list<tuple2<string,sNode*%>*%>* params = self.params;
    
    sVar* var_ = get_variable_from_table(info.lv_table, fun_name);
    
    if(var_ == null) {
        var_ = get_variable_from_table(info.gv_table, fun_name);
    }
    
    if(var_) {
        sType* lambda_type = var_->mType;
        
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, lambda_type.mParamTypes.length(), params.length());
            return false;
        }
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(!node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
            }
            else {
                check_assign_type(s"\{fun_name} calling param #\{i}", lambda_type.mParamTypes[i], come_value.type, come_value);
                if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    if(come_value.var) {
                        if(come_value.var.mType.mDelegate) {
                            come_value.var->mCValueName = null;
                        }
                        else if(come_value.var.mType.mShare) {
                            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                        }
                        else if(come_value.var.mType.mClone) {
                            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                        }
                        else {
                            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
/*
                            err_msg(info, "require delegate, share, clone for local variable");
                            return false;
*/
                        }
                    }
                    else {
                        if(come_value.type->mDelegate) {
                        }
                        else {
                            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                        }
                    }
                }
            }
            
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(var_->mCValueName);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value = new CVALUE;
        come_value.c_value = buf.to_string();
        
        if(lambda_type->mResultType.v1.mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, lambda_type->mResultType.v1, info);
        }
        
        come_value.type = clone result_type;
        come_value.type->mStatic = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }
    else {
        if(fun_name === "__builtin_memmove" || fun_name === "__builtin_memset" || fun_name === "__builtin_ffs" || fun_name === "__builtin_ffsl" || fun_name === "__builtin_ffsll") 
        {
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            foreach(it, params) {
                var label, node = it;
                
                if(!node.compile->(info)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                dec_stack_ptr(1, info);
                
                come_params.push_back(come_value);
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value = new CVALUE;
            come_value.c_value = buf.to_string();
            
            if(fun_name === "__builtin_memmove" || fun_name === "__builtin_memset") {
                come_value.type = new sType("void");
            }
            else if(fun_name === "__builtin_ffs") {
                come_value.type = new sType("int");
            }
            else if(fun_name === "__builtin_ffsl") {
                come_value.type = new sType("int");
            }
            else if(fun_name === "__builtin_ffsll") {
                come_value.type = new sType("int");
            }
            
            come_value.var = null;
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
        else if(fun_name === "string") {
            fun_name = string("__builtin_string");
        }
        else if(fun_name === "wstring") {
            fun_name = string("__builtin_wstring");
        }
        else if(fun_name === "inherit") {
            char* p = info.come_fun.mName;
    
            int version = 0;
            while(*p) {
                if(*p == '_' && *(p+1) == 'v' && xisdigit(*(p+2))) {
                    char* p2 = p + 2;
                    version = 0;
                    while(xisdigit(*p2)) {
                        version = version * 10 + (*p2 - '0');
                        p2++;
                    }
                    break;
                }
                else {
                    p++;
                }
            }
    
            char real_fun_name[2048];
            memcpy(real_fun_name, info.come_fun.mName, p - info.come_fun.mName);
            real_fun_name[p-info.come_fun.mName] = '\0';
            
            int i;
            for(i=version-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
            
            if(i==0) {
                string new_fun_name = xsprintf("%s", real_fun_name);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                }
                
                if(fun_name === info.come_fun.mName) {
                    err_msg(info, "invalid inherit");
                    return false;
                }
            }
        }
        else {
            for(int i=FUN_VERSION_MAX; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name, i);
            
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
        }
        
        sFun* fun = info.funcs.at(fun_name, null);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at normal function call(1)\n", fun_name);
            return true;
        }
        
        sType*% result_type = clone fun.mResultType;
        result_type->mStatic = false;
        
        list<sType*%>*% param_types = new list<sType*%>();
        foreach(it, fun.mParamTypes) {
            sType*% it2 = solve_generics(it, info.generics_type, info);
            param_types.push_back(clone it2);
        }
        
        result_type = solve_generics(result_type, info.generics_type, info);
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        map<string,CVALUE*%>*% label_params = new map<string,CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(!node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(fun.mVarArgs && fun.mParamTypes[i] == null) {
            //if(fun.mVarArgs && fun.mParamTypes[i].value() == null) {
            }
            else {
                if(label != null) {
                    int n = 0;
                    foreach(it, fun.mParamNames) {
                        if(label === it) {
                            break;
                        }
                        
                        n++;
                    }
                    if(n < fun.mParamTypes.length()) {
                        check_assign_type(s"\{fun_name} calling param #\{n}", param_types[n], come_value.type, come_value);
                    }
                    if(n < fun.mParamTypes.length() && param_types[n].mHeap && come_value.type.mHeap) {
                        if(come_value.var) {
                            if(come_value.var.mType.mDelegate) {
                                come_value.var->mCValueName = null;
                            }
                            else if(come_value.var.mType.mShare) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else if(come_value.var.mType.mClone) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
/*
                                err_msg(info, "require delegate, share, clone for local variable");
                                return false;
*/
                            }
                        }
                        else {
                            if(come_value.type->mDelegate) {
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                        }
                    }
                }
                else {
                    if(i < fun.mParamTypes.length()) {
                        check_assign_type(s"\{fun_name} calling param #\{i}", param_types[i], come_value.type, come_value);
                    }
                    if(i < fun.mParamTypes.length() && param_types[i].mHeap && come_value.type.mHeap) {
                        if(come_value.var) {
                            if(come_value.var.mType.mDelegate) {
                                come_value.var->mCValueName = null;
                            }
                            else if(come_value.var.mType.mShare) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else if(come_value.var.mType.mClone) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);

/*
                                err_msg(info, "require delegate, share, clone for local variable");
                                return false;
*/
                            }
                        }
                        else {
                            if(come_value.type->mDelegate) {
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                        }
                    }
                }
            }
            
            if(label == null) {
                come_params.push_back(come_value);
                
                i++;
            }
            else {
                label_params.insert(string(label), come_value);
            }
            dec_stack_ptr(1, info);
        }
        
        if(params.length() < fun.mParamTypes.length()) {
            for(; i<fun.mParamTypes.length(); i++) {
                string default_param = clone fun.mParamDefaultParametors[i];
                //string default_param = clone fun.mParamDefaultParametors[i].value();
                char* param_name = fun.mParamNames[i];
                //char* param_name = fun.mParamNames[i].value();
                
                CVALUE* come_value = label_params[param_name];
                
                if(default_param && default_param !== "") {
                    buffer*% source = info.source;
                    char* p = info.p;
                    char* head = info.head;
                    int sline = info.sline;
                    
                    info.source = default_param.to_buffer();
                    info.p = info.source.buf;
                    info.head = info.source.buf;
                    
                    sNode*% node = expression();
                    
                    if(!node.compile->(info)) {
                        return false;
                    }
                    
                    info.source = source;
                    info.p = p;
                    info.head = head;
                    info.sline = sline;
            
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    check_assign_type(s"\{fun_name} calling param #\{i}", param_types[i], come_value.type, come_value);
                    if(param_types[i].mHeap && come_value.type.mHeap) {
                        if(come_value.var) {
                            if(come_value.var.mType.mDelegate) {
                                come_value.var->mCValueName = null;
                            }
                            else if(come_value.var.mType.mShare) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else if(come_value.var.mType.mClone) {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
    /*
                                err_msg(info, "require delegate, share, clone for local variable");
                                return false;
    */
                            }
                        }
                        else {
                            if(come_value.type.mDelegate) {
                            }
                            else {
                                come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                            }
                        }
                    }
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                }
                else {
                    if(come_value == null) {
                        err_msg(info, "require parametor(%s)", fun.mName);
                        return false;
                    }
                    else {
                        come_params.push_back(null);
                    }
                }
            }
        }
        
        if(label_params.length() > 0) {
            for(i=0; i<fun.mParamNames.length(); i++) {
                char* param_name = fun.mParamNames[i];
                
                CVALUE* come_value = label_params[param_name];
                
                if(come_value) {
                    check_assign_type(s"\{fun_name} calling param \{i}", param_types[i], come_value.type, come_value);
                    come_params.replace(i, clone come_value);
                }
            }
        }
        
        if(fun.mParamTypes.length() != come_params.length() && !fun.mVarArgs && fun_name !== "__builtin_va_start" && fun_name !== "__builtin_va_end") 
        {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, fun.mParamTypes.length(), params.length());
            return false;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(fun_name);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value = new CVALUE;
        come_value.c_value = buf.to_string();
        come_value.type = clone result_type;
        come_value.type->mStatic = false;
        come_value.var = null;
        
        if(fun.mResultType->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, result_type, info);
        }
        
        if(fun.mResultType->mException) {
            come_value.c_value = append_exception_value(come_value.c_value, come_value.type, info);
        }
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

struct sCastNode {
    sType*% mType;
    sNode*% mLeft;
    int sline;
    string sname;
};

sCastNode*% sCastNode*::initialize(sCastNode*% self, sType* type, sNode* left, sInfo* info)
{
    self.mType = clone type;
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCastNode*::sline(sCastNode* self, sInfo* info)
{
    return self.sline;
}

string sCastNode*::sname(sCastNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCastNode*::terminated()
{
    return false;
}

string sCastNode*::kind()
{
    return string("sCastNode");
}

bool sCastNode*::compile(sCastNode* self, sInfo* info)
{
    sType* type = self.mType;
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type2 = solve_generics(type, info.generics_type, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type2), left_value.c_value)!;
    come_value.type = clone type2;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sParenNode {
    sNode*% mLeft;
    int sline;
    string sname;
};

sParenNode*% sParenNode*::initialize(sParenNode*% self, sNode* left, sInfo* info)
{
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParenNode*::sline(sParenNode* self, sInfo* info)
{
    return self.sline;
}

string sParenNode*::sname(sParenNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParenNode*::terminated()
{
    return false;
}

string sParenNode*::kind()
{
    return string("sParenNode");
}

bool sParenNode*::compile(sParenNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% parse_function_call(char* fun_name, sInfo* info)
{
    expected_next_character('(');
    
    parse_sharp();
    
    list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        char* p = info.p;
        int sline = info.sline;
        
        bool err_flag = false;
        string label = string("");
        if(xisalpha(*info->p) || *info->p == '_') {
            label = parse_word();
            err_flag = true;
        }
        
        if(err_flag == true && *info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
        }
        else {
            label = null;
            
            info->p = p;
            info->sline = sline;
        }
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        
        node = post_position_operator3(node, info);
        
        info.no_comma = no_comma;
        
        params.push_back(new tuple2<string,sNode*%>(label, node));
        
        parse_sharp();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            break;
        }
    }
    
    parse_sharp();
    
    sNode*% node = new sNode(new sFunCallNode(fun_name, params, info));
    
    node = exception_get_value(node, info)
    
    return node;
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 5
{
    err_msg(info, "unexpected word(%s)(1)\n", buf);
    return none(null);
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 5
{
    return node;
}


struct sLogicalDenial
{
    sNode*% value;
    int sline;
    string sname;
};

sLogicalDenial*% sLogicalDenial*::initialize(sLogicalDenial*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sLogicalDenial*::terminated()
{
    return false;
}

string sLogicalDenial*::kind()
{
    return string("sLogicalDenial");
}

bool sLogicalDenial*::compile(sLogicalDenial* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("!%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sLogicalDenial*::sline(sLogicalDenial* self, sInfo* info)
{
    return self.sline;
}

string sLogicalDenial*::sname(sLogicalDenial* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sMinusNode2*% sMinusNode2*::initialize(sMinusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMinusNode2*::terminated()
{
    return false;
}

string sMinusNode2*::kind()
{
    return string("sMinusNode2");
}

bool sMinusNode2*::compile(sMinusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("-%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sMinusNode2*::sline(sMinusNode2* self, sInfo* info)
{
    return self.sline;
}

string sMinusNode2*::sname(sMinusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sPlusPlusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sPlusPlusNode2*% sPlusPlusNode2*::initialize(sPlusPlusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sPlusPlusNode2*::terminated()
{
    return false;
}

string sPlusPlusNode2*::kind()
{
    return string("sPlusPlusNode2");
}

bool sPlusPlusNode2*::compile(sPlusPlusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("++%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sPlusPlusNode2*::sline(sPlusPlusNode2* self, sInfo* info)
{
    return self.sline;
}

string sPlusPlusNode2*::sname(sPlusPlusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusMinusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sMinusMinusNode2*% sMinusMinusNode2*::initialize(sMinusMinusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMinusMinusNode2*::terminated()
{
    return false;
}

string sMinusMinusNode2*::kind()
{
    return string("sMinusMinusNode2");
}

bool sMinusMinusNode2*::compile(sMinusMinusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("--%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sMinusMinusNode2*::sline(sMinusMinusNode2* self, sInfo* info)
{
    return self.sline;
}

string sMinusMinusNode2*::sname(sMinusMinusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sComplement
{
    sNode*% value;
    int sline;
    string sname;
};

sComplement*% sComplement*::initialize(sComplement*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sComplement*::terminated()
{
    return false;
}

string sComplement*::kind()
{
    return string("sComplement");
}

bool sComplement*::compile(sComplement* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("~%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sComplement*::sline(sComplement* self, sInfo* info)
{
    return self.sline;
}

string sComplement*::sname(sComplement* self, sInfo* info)
{
    return string(self.sname);
}

struct sNormalBlock
{
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sNormalBlock*% sNormalBlock*::initialize(sNormalBlock*% self, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mBlock = clone block;

    return self;
}

bool sNormalBlock*::terminated()
{
    return true;
}

string sNormalBlock*::kind()
{
    return string("sNormalBlock");
}

bool sNormalBlock*::compile(sNormalBlock* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    add_come_code(info, "{\n");

    transpile_block(block, null, null, info);
    
    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sNormalBlock*::sline(sNormalBlock* self, sInfo* info)
{
    return self.sline;
}

string sNormalBlock*::sname(sNormalBlock* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_normal_block(sInfo* info=info)
{
    sBlock*% block = parse_block();
    
    return new sNode(new sNormalBlock(block, info));
}
            
void backtrace_parse_type(sInfo* info=info)
{
    info.no_output_err = true;
    parse_type();
    info.no_output_err = false;
}

sNode*% craete_logical_denial(sNode*% node, sInfo* info)
{
    return new sNode(new sLogicalDenial(clone node, info));
}

sNode*% expression_node(sInfo* info=info) version 99
{
    skip_spaces_and_lf();
    
    bool refference = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                refference = true;
            }
            else if(*info->p == '(') {
                while(*info->p == '(') {
                    info->p++
                    skip_spaces_and_lf();
                }
                
                if(xisalpha(*info->p) || *info->p == '_') {
                    refference = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    
    /// logical denial ///
    if(*info->p == '{') {
        return parse_normal_block();
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sNode(new sLogicalDenial(node, info));
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sNode(new sMinusMinusNode2(node, info));
    }
    else if(*info->p == '-') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sNode(new sMinusNode2(node, info));
    }
    else if(*info->p == '+' && *(info->p+1) == '+') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sNode(new sPlusPlusNode2(node, info));
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sNode(new sComplement(node, info));
    }
    
    /// hex number ///
    else if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        sNode*% node = get_hex_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    /// oct number ///
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        sNode*% node = get_oct_number(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(xisdigit(*info->p)) {
        sNode*% node = get_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        sNode*% node = get_number(true@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf();
        
        if(*info->p == ';') {
            return new sReturnNode(null, string("0"), info) implements sNode;
        }
        else {
            char* head = info.p;
            sNode*% value = expression();
            char* tail = info.p;
            value = post_position_operator(value, info);
            value = post_position_operator3(value, info);
            
            char buf[tail-head+1];
            memcpy(buf, head, tail-head);
            buf[tail-head] = '\0';
            
            return new sReturnNode(value, string(buf), info) implements sNode;
        }
    }
    else if(parsecmp("return!", info)) {
        info->p += strlen("return!");
        skip_spaces_and_lf();
        
        if(*info->p == ';') {
            return new sParentReturnNode(null, string("0"), info) implements sNode;
        }
        else {
            char* head = info.p;
            sNode*% value = expression();
            char* tail = info.p;
            value = post_position_operator(value, info);
            value = post_position_operator3(value, info);
            
            char buf[tail-head+1];
            memcpy(buf, head, tail-head);
            buf[tail-head] = '\0';
            
            return new sParentReturnNode(value, string(buf), info) implements sNode;
        }
    }
    else if(parsecmp("break!", info)) {
        info->p += strlen("break!");
        skip_spaces_and_lf();
        
        return new sParentBreakNode(info) implements sNode;
    }
    else if(parsecmp("continue!", info)) {
        info->p += strlen("continue!");
        skip_spaces_and_lf();
        
        return new sParentContinueNode(info) implements sNode;
    }
    else if(*info->p == '*') {
        info->p ++;
        skip_spaces_and_lf();
        
        bool no_assign = info.no_assign;
        info.no_assign = true;
        sNode*% value = expression_node();
        info.no_assign = no_assign;
        
        return new sDerefferenceNode(value, info) implements sNode
    }
    else if(*info->p == '&' && refference) {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sRefferenceNode(value, info) implements sNode;
    }
    else if(*info->p == '!') {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sReverseNode(value, info) implements sNode;
    }
    else if((xisalpha(*info->p) || *info->p == '_' ) && !(*info->p == 'L' && *(info->p+1) == '"' || (*info->p == 's' || *info->p == 'S') && *(info->p+1) == '"')) {
        char* head = info.p;
        int head_sline = info.sline;
        
        string buf;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                buf = parse_word();
            }
            else {
                buf = string("");
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        bool is_type_name_ = is_type_name(buf);
        
        /// backtrace ///
        bool define_function_pointer_flag = false;
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "__typeof__" && buf !== "gc_inc" && buf !== "gc_dec" && buf !== "case" && buf !== "_Alignof" && buf !== "_Alignas" && buf !== "__alignof__" && *info->p == '(' && *(info->p+1) != '*')
        {
            backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    define_function_pointer_flag = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace2 ///
        bool lambda_flag = false;
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "_Alignof" && buf !== "__alignof__" && buf !== "_Alignas" && buf !== "isheap" && buf !== "__typeof__" && buf !== "gc_inc" && buf !== "gc_dec" && buf !== "case" && is_type_name_)
        //if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "gc_inc" && buf !== "gc_dec" && *info->p == '(' && *(info->p+1) != '*')
        {
            info.p = head;
            info.sline = head_sline;
            
            backtrace_parse_type();
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word2 = parse_word();
                
                if(word2 === "lambda") {
                    lambda_flag = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace3 ///
        bool fun_name_with_type_name = false;
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "_Alignof" && buf !== "__alignof__" && buf !== "_Alignas" && buf !== "isheap" && buf !== "__typeof__" && buf !== "gc_inc" && buf !== "gc_dec"&& buf !== "case" )
        {
            info.p = head;
            info.sline = head_sline;
            
            info.no_output_err = true;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word2 = parse_word();
            }
            while(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
            }
            if(*info->p == ':' && *(info->p+1) == ':') {
                info->p += 2;
                skip_spaces_and_lf();
                if(xisalpha(*info->p) || *info.p == '_') {
                    fun_name_with_type_name = true;
                }
            }
            
            info.no_output_err = false;
            
            info.p = head;
            info.sline = head_sline;
        }
        
        buf = parse_word();
        
        if(lambda_flag) {
            info.p = head;
            info.sline = head_sline;
            
            return parse_function(info);
        }
        else if(buf === "some" && *info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            
            sNode*% exp = expression();
            
            exp = post_position_operator(exp, info);
            exp = post_position_operator3(exp, info);
            
            sNode*% node = create_some_object(exp, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            expected_next_character(')');
            
            return node;
        }
        else if(buf === "none" && *info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            
            sNode*% exp = expression();
            
            exp = post_position_operator(exp, info);
            exp = post_position_operator3(exp, info);
            
            sNode*% node = create_none_object(exp, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            expected_next_character(')');
            
            return node;
        }
        else if((buf === "string" || buf === "wstring") && *info->p == '(') {
            sNode*% node = parse_function_call(buf, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else if(buf === "__func__") {
            return new sFuncNode(info) implements sNode;
        }
        else if(buf === "__line__") {
            return new sLineNode(info) implements sNode;
        }
        else if(buf === "__caller_func__") {
            return new sCallerFuncNode(info) implements sNode;
        }
        else if(buf === "__caller_line__") {
            return new sCallerLineNode(info) implements sNode;
        }
        else if((buf === "sizeof" || buf === "_Alignof" || buf === "_Alignas" || buf === "__alignof__") && *info->p == '(') {
            sNode*% node = string_node(buf, head, head_sline, info)!
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else if(fun_name_with_type_name) {
            buffer*% fun_name = new buffer();
            
            fun_name.append_str(buf);
            
            sType*% type = clone info.types[fun_name.to_string()];
            
            if(type == null) {
                sClass* klass = info.classes[fun_name.to_string()];
                
                if(klass) {
                    type = new sType(buf);
                }
                else {
                    err_msg(info, "null type(%s)", buf);
                    exit(2);
                }
            }
            
            while(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
                
                if(type->mClass->mStruct == false) {
                    fun_name.append_str("p");
                }
            }
            
            expected_next_character(':');
            expected_next_character(':');
            
            fun_name.append_str("_");
            
            string buf2 = parse_word();
            
            fun_name.append_str(buf2);
            
            sNode*% node = parse_function_call(fun_name.to_string(), info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else if(*info->p == ':' && *(info->p+1) == ':') {
            info->p+=2;
            skip_spaces_and_lf();
            
            buffer*% fun_name = new buffer();
            
            fun_name.append_str(buf);
            
            fun_name.append_str("_");
            
            string buf2 = parse_word();
            
            fun_name.append_str(buf2);
            
            sNode*% node = parse_function_call(fun_name.to_string(), info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "__typeof__" && buf !== "gc_inc" && buf !== "gc_dec"&& buf !== "case" && buf !== "_Alignof" && buf !== "__alignof__" && buf !== "_Alignas"  && *info->p == '(' && !(*(info->p+1) == '*' && is_type_name_))
        {
            sNode*% node = parse_function_call(buf, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else {
            sNode*% node = string_node(buf, head, head_sline, info)!;
            
            node = post_position_operator(node, info);
            
            return node;
        }
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        /// backtrace ///
        bool cast_expression_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            string word = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                word = parse_word();
            }
            
            if(is_type_name(word)) {
                cast_expression_flag = true;
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        /// backtrace ///
        bool tuple_expression_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            bool no_output_err = info.no_output_err;
            info.no_output_err = true;
            bool no_output_come_code = info.no_output_come_code;
            info.no_output_come_code = true;
            
            sNode*% node = expression();
            
            info.no_comma = no_comma;
            info.no_output_err = no_output_err;
            info.no_output_come_code = no_output_come_code;
            
            if(*info->p == ',') {
                tuple_expression_flag = true;
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(!gComeC && tuple_expression_flag) {
            sNode*% node = parse_tuple(info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else if(cast_expression_flag) {
            parse_sharp();
            var type, name, err = parse_type();
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            parse_sharp();
            expected_next_character(')');
            
            sNode*% node = expression_node();
            
            node = post_position_operator(node, info);
            
            return new sCastNode(type, node, info) implements sNode;
        }
        else {
            parse_sharp();
            sNode*% node = expression();
            parse_sharp();
            
            expected_next_character(')');
            parse_sharp();
            
            node = new sParenNode(node, info) implements sNode;
            
            node = post_position_operator(node, info);
            
            return node;
        }
    }
    else {
        sNode*% node = inherit(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    
    err_msg(info, "unexpected operator(%c)\n", *info->p);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% expression(sInfo* info=info) version 5
{
    return expression_node(info);
}

static sNode*% post_position_operator_of_statment(sNode*% node, sInfo* info)
{
    if(memcmp(info->p, "or", strlen("or")) == 0) {
        info->p += strlen("or");
        skip_spaces_and_lf();
        
        node = parse_or_statment(clone node, info);
        
        return node;
    }
    else if(memcmp(info->p, "and", strlen("and")) == 0) {
        info->p += strlen("and");
        skip_spaces_and_lf();
        
        node = parse_and_statment(clone node, info);
        
        return node;
    }
    
    return node;
}

sNode*% statment(sInfo* info=info)
{
    sNode*% node = expression_node(info);
    
    node = post_position_operator_of_statment(node, info);
    
/*
    if(!node.terminated->()) {
        expected_next_character(';');
    }
*/
    
    return node;
}

struct sGlobalVariable {
    sType*% type;
    string name;
    sNode*% right_node;
    
    int sline;
    string sname;
    
    string array_initializer;
    
    list<tuple2<sType*%,string>*%>*% multiple_declare;
    
    string mDeclareSName;
};

sGlobalVariable*% sGlobalVariable*::initialize(sGlobalVariable*% self, list<tuple2<sType*%,string>*%>*% multiple_declare, sType* type, string name, sNode*% right_node, string array_initializer, sInfo* info)
{
    self.sline = info.sline;
    self.sname = info.sname;
    
    self.type = clone type;
    self.name = string(name);
    self.right_node = right_node;
    self.array_initializer = array_initializer;
    
    self.multiple_declare = clone multiple_declare;
    self.mDeclareSName = string(info->sname);
    
    return self;
}

int sGlobalVariable*::sline(sGlobalVariable* self, sInfo* info)
{
    return self.sline;
}

string sGlobalVariable*::sname(sGlobalVariable* self, sInfo* info)
{
    return string(self.sname);
}

bool sGlobalVariable*::terminated()
{
    return false;
}

string sGlobalVariable*::kind()
{
    return string("sGlobalVariable");
}

bool sGlobalVariable*::compile(sGlobalVariable* self, sInfo* info)
{
    sType*% type = clone self.type;
    string name = clone self.name;
    sNode* right_node = self.right_node;
    string array_initializer = clone self.array_initializer;
    
    if(self.multiple_declare) {
        foreach(it, self.multiple_declare) {
            var type, name = it;
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name));
            }
        }
    }
    else {
        add_variable_to_global_table(name, clone type, info);
        
        if(array_initializer) {
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s=%s;\n", make_define_var(type, name), array_initializer);
            }
        }
        else if(right_node) {
            if(!right_node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s=%s;\n", make_define_var(type, name), come_value.c_value);
            }
        }
        else {
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name));
            }
        }
    }
    
    return true;
}

struct sExternalGlobalVariable {
    sType*% type;
    string name;
    
    int sline;
    string sname;
    
    list<tuple2<sType*%,string>*%>*% multiple_declare;
    
    string mDeclareSName;
};

sExternalGlobalVariable*% sExternalGlobalVariable*::initialize(sExternalGlobalVariable*% self, list<tuple2<sType*%, string>*%>*% multiple_declare, sType* type, string name, sInfo* info)
{
    self.type = clone type;
    self.name = string(name);

    self.sline = info.sline;
    self.sname = info.sname;
    
    self.multiple_declare = clone multiple_declare;
    
    self.mDeclareSName = string(info->sname);
    
    return self;
}

int sExternalGlobalVariable*::sline(sExternalGlobalVariable* self, sInfo* info)
{
    return self.sline;
}

string sExternalGlobalVariable*::sname(sExternalGlobalVariable* self, sInfo* info)
{
    return string(self.sname);
}

bool sExternalGlobalVariable*::terminated()
{
    return false;
}

string sExternalGlobalVariable*::kind()
{
    return string("sExternalGlobalVariable");
}

bool sExternalGlobalVariable*::compile(sExternalGlobalVariable* self, sInfo* info)
{
    sType* type = self.type;
    string name = self.name;
    
    if(self.multiple_declare) {
        foreach(it, self.multiple_declare) {
            var type, name = it;
            add_variable_to_global_table(name, clone type, info);
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
            }
        }
    }
    else {
        add_variable_to_global_table(name, clone type, info);
        if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
        }
        else {
            add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
        }
    }
    
    return true;
}


string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
        if(!obj_type->mClass->mStruct) {
/*
            if(obj_type->mArrayNum.length() > 0) {
                buf.append_str("p");
            }
*/
            for(int i=0; i<obj_type->mOriginalTypeNamePointerNum; i++)
            {
                buf.append_str("p");
            }
        }
    }
    else if(obj_type->mClass->mStruct) {
        struct_name = string(obj_type->mClass->mName);
    }
    else {
        struct_name = create_generics_name(obj_type, info);
/*
        if(obj_type->mArrayNum.length() > 0) {
            buf.append_str("p");
        }
*/
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    return xsprintf("%s%s_%s", struct_name, buf.to_string(), fun_name);
}


sNode*% parse_global_variable(sInfo* info)
{
    bool multiple_declare = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var type, name, err = parse_type();
            
            if(err) {
                var type,name = parse_variable_name(type@base_type_name, true@first, info);
                
                if(!is_type_name(name) && *info->p == ',') {
                    multiple_declare = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(multiple_declare) {
        list<tuple2<sType*%,string>*%>*% multiple_declare = new list<tuple2<sType*%,string>*%>();
        
        var base_type, name, err = parse_type();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        parse_sharp();
        var type2, var_name = parse_variable_name(base_type, true@first, info);
        parse_sharp();
        
        multiple_declare.push_back((type2, var_name));
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            var type2, var_name = parse_variable_name(base_type, false@first, info);
            parse_sharp();
            
            multiple_declare.push_back((type2, var_name));
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        string var_name2 = string("");
        
        if(base_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(multiple_declare, base_type, var_name2, info) implements sNode;
        }
        else {
            return new sGlobalVariable(multiple_declare, base_type, var_name2, right_node, array_initializer, info) implements sNode;
        }
    }
    else {
        var result_type, var_name,err = parse_type(parse_variable_name:true);
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                buffer*% buf = new buffer();
                
                buf.append_char(*info->p);
                info->p++;
                
                bool squort = false;
                bool dquort = false;
                int nest = 1;
                while(1) {
                    if(*info->p == '\0') {
                        err_msg(info, "unexpected source end in array initiailizer");
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
                        buf.append_char(*info->p);
                        info->p++;
                        
                        if(nest == 0) {
                            skip_spaces_and_lf();
                            break;
                        }
                    }
                    else {
                        buf.append_char(*info->p);
                        info->p++;
                    }
                }
                array_initializer = buf.to_string();
            }
            else {
                parse_sharp();
                right_node = expression();
                parse_sharp();
            }
        }
        
        if(result_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(null@multiple_declare, result_type, var_name, info) implements sNode;
        }
        else {
            return new sGlobalVariable(null@multiple_declare, result_type, var_name, right_node, array_initializer, info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)(2)\n", buf);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% post_position_operator3(sNode*% node, sInfo* info) version 5
{
    return node;
}

