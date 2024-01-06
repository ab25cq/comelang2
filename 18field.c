#include "common.h"

bool operator_overload_fun2(sType* type, char* fun_name, CVALUE* left_value, CVALUE* middle_value, CVALUE* right_value, sInfo* info)
{
    sType*% generics_type = clone type;
    
    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    string fun_name2;
    sFun* operator_fun = null;
    
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    
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
        }
        
        operator_fun = info->funcs[fun_name2];
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
/*
                    err_msg(info, "require delegate, share, clone for local variable");
                    return false;
*/
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
        string middle_value2;
        check_assign_type(s"\{fun_name2} is assigned to", operator_fun.mParamTypes[1], middle_value.type, middle_value);
        if(operator_fun.mParamTypes[1].mHeap && middle_value.type.mHeap) {
            if(middle_value.var) {
                if(middle_value.var.mType.mDelegate) {
                    middle_value.var->mCValueName = null;
                }
                else if(middle_value.var.mType.mShare) {
                    middle_value.c_value = increment_ref_count_object(middle_value.type, middle_value.c_value, info);
                }
                else if(middle_value.var.mType.mClone) {
                    middle_value.c_value = increment_ref_count_object(middle_value.type, middle_value.c_value, info);
                }
                else {
                    middle_value.c_value = increment_ref_count_object(middle_value.type, middle_value.c_value, info);
/*
                    err_msg(info, "require delegate, share, clone for local variable");
                    return false;
*/
                }
            }
            else {
                if(middle_value.type.mDelegate) {
                }
                else {
                    middle_value.c_value = increment_ref_count_object(middle_value.type, middle_value.c_value, info);
                }
            }
            middle_value2 = xsprintf("%s", middle_value.c_value);
        }
        else {
            middle_value2 = clone middle_value.c_value;
        }
        string right_value2;
        check_assign_type(s"\{fun_name2} is assigned to", operator_fun.mParamTypes[2], right_value.type, right_value);
        if(operator_fun.mParamTypes[2].mHeap && right_value.type.mHeap) {
            if(right_value.var) {
                if(right_value.var.mType.mDelegate) {
                    right_value.var->mCValueName = null;
                }
                else if(right_value.var.mType.mShare) {
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                }
                else if(right_value.var.mType.mClone) {
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                }
                else {
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                    err_msg(info, "require delegate, share, clone for local variable");
                    return false;
*/
                }
            }
            else {
                if(right_value.type.mDelegate) {
                }
                else {
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                }
            }
            right_value2 = xsprintf("%s", right_value.c_value);
        }
        else {
            right_value2 = clone right_value.c_value;
        }
        
        come_value.c_value = s"\{fun_name2}(\{left_value2},\{middle_value2},\{right_value2})";
        
        sType*% result_type1 = clone operator_fun->mResultType;
        
        sType*% result_type2 = solve_generics(result_type1, generics_type, info);
        
        come_value.type = clone result_type2;
        come_value.var = null;
        
        if(result_type2->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, result_type2, info);
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

struct sStoreFieldNode
{
    sNode*% mLeft;
    sNode*% mRight;
    string mName;
  
    int sline;
    string sname;
};

sStoreFieldNode*% sStoreFieldNode*::initialize(sStoreFieldNode*% self, sNode* left, sNode*% right, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mName = string(name);

    return self;
}

bool sStoreFieldNode*::terminated()
{
    return false;
}

string sStoreFieldNode*::kind()
{
    return string("sStoreFieldNode");
}

bool sStoreFieldNode*::compile(sStoreFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    sNode* right = self.mRight;
    string name = string(self.mName);
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(!node_compile(right)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* right_type = right_value.type;
    
    sType* left_type = left_value.type;
    
    sType*% left_type2 = solve_generics(left_type, left_type, info);
    
    sClass* klass = left_type2->mClass;
    klass = info.classes[klass->mName];
    
    sType*% field_type = null;
    int index = 0;
    string child_field_name = null;
    klass = info.classes[klass->mName];
    
    if(klass->mFields == null) {
        err_msg(info, "%s fields are null", klass->mName);
        return false;
    }
    
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        };
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        index = 0;
        foreach(field, klass->mFields) {
            var field_name, field_type2 = field;
            
            sClass* klass2 = field_type2->mClass;
            
            foreach(field2, klass2->mFields) {
                var field_name2, field_type3 = field2;
                
                if(field_name2 === name) {
                    child_field_name = string(field_name);
                    field_type = clone field_type3;
                    break;
                }
            }
            
            if(child_field_name) {
                break;
            }
            
            if(field_name === name) {
                field_type = clone field_type2;
                break;
            };
            
            index++;
        }
        
        if(index == klass->mFields.length()) {
            err_msg(info, "field not found(%s) in %s(1)", name, klass->mName);
            return false;
        }
    }
    
    CVALUE*% come_value = new CVALUE;
    
    if(field_type->mHeap && !right_type->mHeap) {
        if(right_type->mClass->mName === "void" && right_type->mPointerNum == 1)
        {
        }
        else {
            if(!right_type->mDelegate && !right_type->mShare) {
                err_msg(info, "require right value as heap object(%s)", name);
                return false;
            }
        }
    }
    
    check_assign_type(s"\{name} is assigned to", field_type, right_type, right_value);
    if(field_type->mHeap && right_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
    {
        if(left_value.type->mPointerNum == 1) {
            if(child_field_name) {
                string c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                decrement_ref_count_object(field_type, c_value, info);
                if(right_value.var) {
                    if(right_value.var.mType.mDelegate) {
                        right_value.var->mCValueName = null;
                    }
                    else if(right_value.var.mType.mShare) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else if(right_value.var.mType.mClone) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                        err_msg(info, "require delegate, share, clone for local variable");
                        return false;
*/
                    }
                }
                else {
                    if(right_value.type.mDelegate) {
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                }
                come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                string c_value = xsprintf("%s->%s", left_value.c_value, name);
                decrement_ref_count_object(field_type, c_value, info);
                if(right_value.var) {
                    if(right_value.var.mType.mDelegate) {
                        right_value.var->mCValueName = null;
                    }
                    else if(right_value.var.mType.mShare) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else if(right_value.var.mType.mClone) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                        err_msg(info, "require delegate, share, clone for local variable");
                        return false;
*/
                    }
                }
                else {
                    if(right_value.type.mDelegate) {
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                }
                come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else if(left_value.type->mPointerNum == 0) {
            if(child_field_name) {
                string c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                decrement_ref_count_object(field_type, c_value, info);
                if(right_value.var) {
                    if(right_value.var.mType.mDelegate) {
                        right_value.var->mCValueName = null;
                    }
                    else if(right_value.var.mType.mShare) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else if(right_value.var.mType.mClone) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                        err_msg(info, "require delegate, share, clone for local variable");
                        return false;
*/
                    }
                }
                else {
                    if(right_value.type.mDelegate) {
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                }
                come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                string c_value = xsprintf("%s.%s", left_value.c_value, name);
                decrement_ref_count_object(field_type, c_value, info);
                right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else {
            err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
            return false;
        }
        int right_value_id = get_right_value_id_from_obj(right_value.c_value);
        
        if(right_value_id != -1) {
            remove_object_from_right_values(right_value_id, info);
        }
    }
    else if(field_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void") 
    {
        if(left_value.type->mPointerNum == 1) {
            if(child_field_name) {
                string c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                decrement_ref_count_object(field_type, c_value, info);
                come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                string c_value = xsprintf("%s->%s", left_value.c_value, name);
                decrement_ref_count_object(field_type, c_value, info);
                come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else if(left_value.type->mPointerNum == 0) {
            if(child_field_name) {
                string c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                decrement_ref_count_object(field_type, c_value, info);
                come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                string c_value = xsprintf("%s.%s", left_value.c_value, name);
                decrement_ref_count_object(field_type, c_value, info);
                come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else {
            err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
            return false;
        }
    }
    else {
        if(left_value.type->mPointerNum == 1) {
            if(child_field_name) {
                come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else if(left_value.type->mPointerNum == 0) {
            if(child_field_name) {
                come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
            }
        }
        else {
            err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
            return false;
        }
    }
    
    come_value.type = clone field_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sStoreFieldNode*::sline(sStoreFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreFieldNode*::sname(sStoreFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sNullCheckNode
{
    sNode*% mLeft;
    
    bool mOnlyNullCecker;
  
    int sline;
    string sname;
};

sNullCheckNode*% sNullCheckNode*::initialize(sNullCheckNode*% self, sNode* left, bool only_null_checker, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mOnlyNullCecker = only_null_checker;
    
    return self;
}

bool sNullCheckNode*::terminated()
{
    return false;
}

string sNullCheckNode*::kind()
{
    return string("sNullCheckNode");
}

bool sNullCheckNode*::compile(sNullCheckNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(!self.mOnlyNullCecker && left_value.type.mNoSolvedGenericsType && left_value.type.mNoSolvedGenericsType.v1 && left_value.type.mNoSolvedGenericsType.v1.mClass && left_value.type.mNoSolvedGenericsType.v1.mClass.mName === "optional") {
        string method_name = create_method_name(left_value.type, false@no_pointer_name, "expect", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = left_value.type.mNoSolvedGenericsType.v1;
            if(obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = left_value.type;
                method_name = make_generics_function(obj_type2, string("expect"), info);
            }
            else {
                err_msg(info, "require expect implementation(%s)", left_value.type.mClass.mName);
                exit(1);
            }
        }
        
        sFun* fun = info.funcs[method_name];
        
        if(fun == null) {
            err_msg(info, "function not found(%s)", method_name);
            return true;
        }
        
        sType*% type = solve_generics(fun.mResultType, left_value.type, info);
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s(%s)", method_name, left_value.c_value);
        come_value.type = clone type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else if(left_value.type->mPointerNum > 0) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("((%s)come_null_check(%s, \"%s\", %d))", make_type_name_string(left_value.type)!, left_value.c_value, info->sname, info->sline);
        come_value.type = clone left_value.type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else {
        info.stack.push_back(left_value);
    }

    return true;
}

int sNullCheckNode*::sline(sNullCheckNode* self, sInfo* info)
{
    return self.sline;
}

string sNullCheckNode*::sname(sNullCheckNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sExceptionGetValueNode
{
    sNode*% mLeft;
  
    int sline;
    string sname;
};

sExceptionGetValueNode*% sExceptionGetValueNode*::initialize(sExceptionGetValueNode*% self, sNode* left, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;

    return self;
}

bool sExceptionGetValueNode*::terminated()
{
    return false;
}

bool compiletime_get_exception_value(sInfo* info)
{
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(left_value == null) {
    }
    else if(left_value.type.mNoSolvedGenericsType && left_value.type.mNoSolvedGenericsType.v1 && left_value.type.mNoSolvedGenericsType.v1.mClass && left_value.type.mNoSolvedGenericsType.v1.mClass.mName === "optional") {
        string method_name = create_method_name(left_value.type, false@no_pointer_name, "expect", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = left_value.type.mNoSolvedGenericsType.v1;
            if(obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = left_value.type;
                method_name = make_generics_function(obj_type2, string("value"), info);
            }
            else {
                err_msg(info, "require expect implementation(%s)", left_value.type.mClass.mName);
                exit(1);
            }
        }
        
        sFun* fun = info.funcs[method_name];
        
        if(fun == null) {
            err_msg(info, "function not found(%s)", method_name);
            return true;
        }
        
        sType*% type = solve_generics(fun.mResultType, left_value.type, info);
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s(%s)", method_name, left_value.c_value);
        come_value.type = clone type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else {
        info.stack.push_back(left_value);
        
        add_come_last_code(info, "%s;\n", left_value.c_value);
    }
    
    return true;
}

string sExceptionGetValueNode*::kind()
{
    return string("sExceptionGetValueNode");
}

bool sExceptionGetValueNode*::compile(sExceptionGetValueNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!node_compile(left)) {
        return false;
    }
    
    return compiletime_get_exception_value(info);
}

int sExceptionGetValueNode*::sline(sExceptionGetValueNode* self, sInfo* info)
{
    return self.sline;
}

string sExceptionGetValueNode*::sname(sExceptionGetValueNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info)
{
    return new sStoreFieldNode(left, right, name, info) implements sNode;
}

struct sLoadFieldNode
{
    sNode*% mLeft;
    string mName;
  
    int sline;
    string sname;
};

sLoadFieldNode*% sLoadFieldNode*::initialize(sLoadFieldNode*% self, sNode* left, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mName = string(name);

    return self;
}

bool sLoadFieldNode*::terminated()
{
    return false;
}

string sLoadFieldNode*::kind()
{
    return string("sLoadFieldNode");
}

bool sLoadFieldNode*::compile(sLoadFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    string name = string(self.mName);
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* left_type = left_value.type;
    
    sType*% left_type2 = solve_generics(left_type, left_type, info);
    
    sClass* klass = left_type2->mClass;
    klass = info.classes[klass->mName];
    
    sType*% field_type = null;
    int index = 0;
    string child_field_name = null;
    klass = info.classes[klass->mName];
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        }
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        index = 0;
        foreach(field, klass->mFields) {
            var field_name, field_type2 = field;
            
            sClass* klass2 = field_type2->mClass;
            
            foreach(field2, klass2->mFields) {
                var field_name2, field_type3 = field2;
                
                if(field_name2 === name) {
                    child_field_name = string(field_name);
                    field_type = clone field_type3;
                    break;
                }
            }
            
            if(child_field_name) {
                break;
            }
            
            if(field_name === name) {
                field_type = clone field_type2;
                break;
            }
            
            index++;
        }
        
        if(index == klass->mFields.length()) {
            err_msg(info, "field not found(%s) in %s(2)", name, klass->mName);
            return false;
        }
    }
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type->mPointerNum > 0) {
        if(child_field_name) {
            come_value.c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
        }
        else {
            come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
        }
    }
    else {
        if(child_field_name) {
            come_value.c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
        }
        else {
            come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
        }
    }
    come_value.type = clone field_type;
    come_value.var = null;
    
    if(come_value.type->mArrayNum.length() == 1) {
        come_value.type->mOriginalLoadVarType.v1 = clone come_value.type;
        
        come_value.type->mArrayNum.reset();
        come_value.type->mPointerNum++;
        come_value.type->mOriginalTypeNamePointerNum = come_value.type->mPointerNum;
    }
    
    info.stack.push_back(come_value);

    return true;
}

int sLoadFieldNode*::sline(sLoadFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadFieldNode*::sname(sLoadFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStoreArrayNode
{
    sNode*% mLeft;
    sNode*% mRight;
    list<sNode*%>*% mArrayNum;
    bool mQuote;
  
    int sline;
    string sname;
};

sStoreArrayNode*% sStoreArrayNode*::initialize(sStoreArrayNode*% self, sNode* left, sNode*% right, list<sNode*%>*% array_num, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mArrayNum = clone array_num;
    self.mQuote = quote;

    return self;
}

bool sStoreArrayNode*::terminated()
{
    return false;
}

string sStoreArrayNode*::kind()
{
    return string("sStoreArrayNode");
}

bool sStoreArrayNode*::compile(sStoreArrayNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    sNode* right = self.mRight;
    list<sNode*%>* array_num_nodes = self.mArrayNum;
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* left_type = left_value.type;
    
    list<CVALUE*%>*% array_num = new list<CVALUE*%>();
    
    foreach(it, array_num_nodes) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% c_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        array_num.push_back(c_value);
    }
    
    if(!node_compile(right)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* right_type = right_value.type;
    
    sClass* klass = left_value.type->mClass;
    
    sType*% type = clone left_value.type;
    
    char* fun_name = "operator_store_element";
    bool calling_fun;
    if(self.mQuote) {
        calling_fun = false;
    }
    else {
        calling_fun = operator_overload_fun2(type, fun_name, left_value, array_num[0], right_value, info);
    }
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
/*
        if(left_type->mHeap && !right_type->mHeap) {
            err_msg(info, "require right value as heap object");
            return false;
        }
*/
        if(left_type.mArrayNum.length() > 0) {
            for(int i=0; i<array_num.length(); i++) {
                left_type.mArrayNum.delete(-1, -1);
            }
        }
        else if(left_type->mPointerNum > 0) {
            left_type->mPointerNum -= array_num.length();
            
            if(left_type->mPointerNum < 0) {
                left_type->mPointerNum = 0;
            }
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(left_value.c_value);
        
        foreach(it, array_num) {
            buf.append_str(xsprintf("[%s]", it.c_value));
        }
        
        string left_value_code = buf.to_string();
        
        check_assign_type(s"array is assinged to", left_type, right_type, right_value);
        if(left_type->mHeap && right_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
        {
            if(left_value.type->mPointerNum >= 1) {
                decrement_ref_count_object(left_type,left_value_code, info);
                if(right_value.var) {
                    if(right_value.var.mType.mDelegate) {
                        right_value.var->mCValueName = null;
                    }
                    else if(right_value.var.mType.mShare) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else if(right_value.var.mType.mClone) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                        err_msg(info, "require delegate, share, clone for local variable");
                        return false;
*/
                    }
                }
                else {
                    if(right_value.type.mDelegate) {
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                }
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else if(left_value.type->mPointerNum == 0) {
                decrement_ref_count_object(left_type,left_value_code, info);
                if(right_value.var) {
                    if(right_value.var.mType.mDelegate) {
                        right_value.var->mCValueName = null;
                    }
                    else if(right_value.var.mType.mShare) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else if(right_value.var.mType.mClone) {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
/*
                        err_msg(info, "require delegate, share, clone for local variable");
                        return false;
*/
                    }
                }
                else {
                    if(right_value.type.mDelegate) {
                    }
                    else {
                        right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    }
                }
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else {
                err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(1)", left_value_code, left_value.type->mPointerNum);
                return false;
            }
            int right_value_id = get_right_value_id_from_obj(right_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
        else {
            if(left_value.type->mPointerNum >= 1) {
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else if(left_value.type->mPointerNum == 0) {
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else {
                err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(2)", left_value_code, left_value.type->mPointerNum);
                return false;
            }
        }
        sType*% result_type = clone left_type;
        result_type.mArrayNum = new list<sNode*%>();
        come_value.type = result_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }

    return true;
}

int sStoreArrayNode*::sline(sStoreArrayNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreArrayNode*::sname(sStoreArrayNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLoadArrayNode
{
    sNode*% mLeft;
    list<sNode*%>*% mArrayNum;
    bool mQuote;
  
    int sline;
    string sname;
};

sLoadArrayNode*% sLoadArrayNode*::initialize(sLoadArrayNode*% self, sNode* left, list<sNode*%>*% array_num, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    self.mArrayNum = clone array_num;

    self.mLeft = clone left;
    self.mQuote = quote;

    return self;
}

bool sLoadArrayNode*::terminated()
{
    return false;
}

string sLoadArrayNode*::kind()
{
    return string("sLoadArrayNode");
}

bool sLoadArrayNode*::compile(sLoadArrayNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    list<sNode*%>* array_num_nodes = self.mArrayNum;
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% left_type = clone left_value.type;
    
    list<CVALUE*%>*% array_num = new list<CVALUE*%>();
    
    foreach(it, array_num_nodes) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% c_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        array_num.push_back(c_value);
    }
    
    sType*% type = clone left_value.type;
    
    char* fun_name = "operator_load_element";
    bool calling_fun;
    if(self.mQuote) {
        calling_fun = false;
    }
    else {
        calling_fun = operator_overload_fun(type, fun_name, left_value, array_num[0], info);
    }
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        buffer*% buf = new buffer();
        
        buf.append_str(left_value.c_value);
        
        foreach(it, array_num) {
            buf.append_str(xsprintf("[%s]", it.c_value));
        }
        
        string left_value_code = buf.to_string();
        
        come_value.c_value = xsprintf("%s", left_value_code);
        
        sType*% result_type = clone left_type;
        
        if(result_type->mOriginalLoadVarType->v1) {
            result_type = result_type->mOriginalLoadVarType->v1;
        }
        
        if(result_type.mArrayNum.length() > 0) {
            int n = result_type.mArrayNum.length() - array_num.length();
            
            if(n == 0) {
                result_type = clone left_type;
                if(left_type->mOriginalLoadVarType.v1) {
                    result_type = clone left_type->mOriginalLoadVarType.v1;
                }
                result_type->mArrayNum.reset();
            }
            else if(n > 0) {
                for(int i=0; i<n; i++) {
                    result_type.mArrayNum.delete(-1, -1);
                }
            }
            else if(n < 0) {
                result_type.mArrayNum.reset();
                result_type.mPointerNum += n;
                
                if(result_type.mPointerNum < 0) {
                    result_type.mPointerNum = 0;
                }
            }
        }
        else {
            if(result_type->mPointerNum > 0) {
                result_type->mPointerNum -= array_num.length();
                
                if(result_type->mPointerNum < 0) {
                    result_type->mPointerNum = 0;
                }
            }
        }
        
        come_value.type = clone result_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }

    return true;
}

int sLoadArrayNode*::sline(sLoadArrayNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadArrayNode*::sname(sLoadArrayNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLoadRangeArrayNode
{
    sNode*% mLeft;
    list<sNode*%>*% mArrayNum;
    bool mQuote;
  
    int sline;
    string sname;
};

sLoadRangeArrayNode*% sLoadRangeArrayNode*::initialize(sLoadRangeArrayNode*% self, sNode* left, list<sNode*%>*% array_num, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    self.mArrayNum = clone array_num;

    self.mLeft = clone left;
    self.mQuote = quote;

    return self;
}

bool sLoadRangeArrayNode*::terminated()
{
    return false;
}

string sLoadRangeArrayNode*::kind()
{
    return string("sLoadRangeArrayNode");
}

bool sLoadRangeArrayNode*::compile(sLoadRangeArrayNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    list<sNode*%>* array_num_nodes = self.mArrayNum;
    
    if(!node_compile(left)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% left_type = clone left_value.type;
    
    list<CVALUE*%>*% array_num = new list<CVALUE*%>();
    
    foreach(it, array_num_nodes) {
        if(!node_compile(it)) {
            return false;
        }
        
        CVALUE*% c_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        array_num.push_back(c_value);
    }
    
    sType*% type = clone left_value.type;
    
    char* fun_name = "operator_load_range_element";
    bool calling_fun;
    if(self.mQuote) {
        calling_fun = false;
    }
    else {
        calling_fun = operator_overload_fun2(type, fun_name, left_value, array_num[0], array_num[1], info);
    }
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        buffer*% buf = new buffer();
        
        buf.append_str(left_value.c_value);
        
        foreach(it, array_num) {
            buf.append_str(xsprintf("[%s]", it.c_value));
        }
        
        string left_value_code = buf.to_string();
        
        come_value.c_value = xsprintf("%s", left_value_code);
        
        sType*% result_type = clone left_type;
        
        if(result_type->mOriginalLoadVarType->v1) {
            result_type = result_type->mOriginalLoadVarType->v1;
        }
        
        if(result_type.mArrayNum.length() > 0) {
            int n = result_type.mArrayNum.length() - array_num.length();
            
            if(n == 0) {
                result_type = clone left_type;
                if(left_type->mOriginalLoadVarType.v1) {
                    result_type = clone left_type->mOriginalLoadVarType.v1;
                }
                result_type->mArrayNum.reset();
            }
            else if(n > 0) {
                for(int i=0; i<n; i++) {
                    result_type.mArrayNum.delete(-1, -1);
                }
            }
            else if(n < 0) {
                result_type.mArrayNum.reset();
                result_type.mPointerNum += n;
                
                if(result_type.mPointerNum < 0) {
                    result_type.mPointerNum = 0;
                }
            }
        }
        else {
            if(result_type->mPointerNum > 0) {
                result_type->mPointerNum -= array_num.length();
                
                if(result_type->mPointerNum < 0) {
                    result_type->mPointerNum = 0;
                }
            }
        }
        
        come_value.type = clone result_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }

    return true;
}

int sLoadRangeArrayNode*::sline(sLoadRangeArrayNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadRangeArrayNode*::sname(sLoadRangeArrayNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% post_position_operator2(sNode*% node, sInfo* info) version 18
{
    return (sNode*%)null;
}

sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18
{
    err_msg(info, "parse_method_call is failed");
    exit(2);
    
    return (sNode*%)null;
}

sNode*% exception_get_value(sNode*% node, sInfo* info)
{
    if((*info->p == '.' && *(info->p+1) != '.') || (*info->p == '-' && *(info->p+1) == '>')) {
        char* p = info.p;
        int sline = info.sline;
        
        info->p++;
        skip_spaces_and_lf();
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string word = parse_word(info);
            
            if((word === "expect" || word === "value" || word === "catch") && (*info->p == '(' || *info->p == '{')) {
                info.p = p;
                info.sline = sline;
            }
            else {
                info.p = p;
                info.sline = sline;
                
                node = new sExceptionGetValueNode(node, info) implements sNode;
            }
        }
        else {
            info.p = p;
            info.sline = sline;
                
            node = new sExceptionGetValueNode(node, info) implements sNode;
        }
    }
    else if(*info->p == '!' && *(info->p+1) != '=') {
    }
    else if(node == null) {
    }
    else {
        node = new sExceptionGetValueNode(node, info) implements sNode;
    }
    
    return node;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 18
{
    while(true){
        bool range_array = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info.no_comma;
                bool no_output_err = info.no_output_err;
                bool no_output_come_code = info.no_output_come_code;
                info->no_output_err = true;
                info->no_comma = true;
                info->no_output_come_code = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
                info->no_output_err = no_output_err;
                info->no_output_come_code = no_output_come_code;
                
                if(*info->p == '.' && *(info->p+1) == '.') {
                    range_array = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(range_array && (*info->p == '\\' && *(info->p+1) == '[' || *info->p == '[')) {
            bool quote = *info->p == '\\';
            if(quote) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf();
            
            list<sNode*%>*% array_num = new list<sNode*%>();
            
            skip_pointer_attribute();
            
            sNode*% node2 = expression();
            
            array_num.push_back(node2);
            
            if(*info->p == '.' && *(info->p+1) == '.') {
                info->p += 2;
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                sNode*% node3 = expression();
                
                array_num.push_back(node3);
                
                expected_next_character(']');
            }
            
            node = new sLoadRangeArrayNode(node, array_num, quote, info) implements sNode;
            
//            node = exception_get_value(node, info)
        }
        else if(!range_array && (*info->p == '\\' && *(info->p+1) == '[' || *info->p == '[')) {
            bool quote = *info->p == '\\';
            if(quote) {
                info->p++;
            }
            
            bool range = false;
            list<sNode*%>*% array_num = new list<sNode*%>();
            while(1) {
                bool range_array2 = false;
                {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    if(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        bool no_comma = info.no_comma;
                        bool no_output_err = info.no_output_err;
                        bool no_output_come_code = info.no_output_come_code;
                        info->no_output_err = true;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        sNode*% exp = expression();
                        info->no_comma = no_comma;
                        info->no_output_err = no_output_err;
                        info->no_output_come_code = no_output_come_code;
                        
                        if(*info->p == '.' && *(info->p+1) == '.') {
                            range_array2 = true;
                        }
                    }
                    
                    info.p = p;
                    info.sline = sline;
                }
                
                if(range_array2) {
                    break;
                }
                else if(*info->p == '[') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    skip_pointer_attribute();
                    
                    sNode*% node2 = expression();
                    
                    array_num.push_back(node2);
                    
                    if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else {
                        err_msg(info, "require ] character");
                        exit(2);
                    }
                }
                else {
                    break;
                }
            }
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                sNode*% right_node = expression();
                
                parse_sharp();
                
                node = new sStoreArrayNode(node, right_node, array_num, quote, info) implements sNode;
            }
            else {
                node = new sLoadArrayNode(node, array_num, quote, info) implements sNode;
                
                node = exception_get_value(node, info)
            }
        }
        else if(*info->p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            node = new sNullCheckNode(node, false@only_null_checker, info) implements sNode;
        }
        else if((*info->p == '.' && *(info->p+1) != '.') || (*info->p == '-' && *(info->p+1) == '>')) {
            if(*info->p == '.') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                info->p+=2;
                skip_spaces_and_lf();
            }
            
            node = new sNullCheckNode(clone node, true@only_null_checker, info) implements sNode;
            
            parse_sharp();
            
            string field_name = parse_word();
            
            parse_sharp();
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                sNode*% right_node = expression();
                
                node = new sStoreFieldNode(node, right_node, field_name, info) implements sNode;
            }
            else if(*info->p == '(' || *info->p == '{' || (*info->p == '-' && *(info->p+1) == '>' && *(info->p+2) == '(')) {
                if(field_name === "if") {
                    node = parse_if_method_call(clone node, info);
                }
                else if(field_name === "elif") {
                    node = parse_elif_method_call(clone node, info);
                }
                else {
                    node = parse_method_call(clone node, field_name, info);
                }
            }
            else {
                node = new sLoadFieldNode(node, field_name, info) implements sNode;
            }
        }
        else {
            sNode*% node2 = post_position_operator2(node, info);
            
            if(node2 == null) {
                break;
            }
            
            node = node2;
        }
    }
    
    return node;
}
