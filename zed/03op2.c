#include "common.h"

struct sMultNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sMultNode*% sMultNode*::initialize(sMultNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sMultNode*::id(sMultNode*% self)
{
    return self.id;
}

bool sMultNode*::compile(sMultNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IMUL);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sDivNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sDivNode*% sDivNode*::initialize(sDivNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sDivNode*::id(sDivNode*% self)
{
    return self.id;
}

bool sDivNode*::compile(sDivNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IDIV);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sModNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sModNode*% sModNode*::initialize(sModNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sModNode*::id(sModNode*% self)
{
    return self.id;
}

bool sModNode*::compile(sModNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IMOD);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sEqNode*% sEqNode*::initialize(sEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sEqNode*::id(sEqNode*% self)
{
    return self.id;
}

bool sEqNode*::compile(sEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sNotEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sNotEqNode*% sNotEqNode*::initialize(sNotEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sNotEqNode*::id(sNotEqNode*% self)
{
    return self.id;
}

bool sNotEqNode*::compile(sNotEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_INOTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sGTEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sGTEqNode*% sGTEqNode*::initialize(sGTEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sGTEqNode*::id(sGTEqNode*% self)
{
    return self.id;
}

bool sGTEqNode*::compile(sGTEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IGTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sLTEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sLTEqNode*% sLTEqNode*::initialize(sLTEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sLTEqNode*::id(sLTEqNode*% self)
{
    return self.id;
}

bool sLTEqNode*::compile(sLTEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_ILTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sGTNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sGTNode*% sGTNode*::initialize(sGTNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sGTNode*::id(sGTNode*% self)
{
    return self.id;
}

bool sGTNode*::compile(sGTNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IGT);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

struct sLTNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sLTNode*% sLTNode*::initialize(sLTNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sLTNode*::id(sLTNode*% self)
{
    return self.id;
}

bool sLTNode*::compile(sLTNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_ILT);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sNode*% op_mult_node(sInfo* info) version 2
{
    sNode*% result = exp_node(info);
    
    while(*info->p == '/' || *info->p == '*' || *info->p == '%') {
        if(*info->p == '*') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sMultNode(result, right));
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sDivNode(result, right));
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sModNode(result, right));
        }
    }
    
    return result;
}

struct sAndAndNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sAndAndNode*% sAndAndNode*::initialize(sAndAndNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sAndAndNode*::id(sAndAndNode* self)
{
    return self.id;
}

bool sAndAndNode*::compile(sAndAndNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IANDAND);
    
    return true;
}

struct sOrOrNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

sOrOrNode*% sOrOrNode*::initialize(sOrOrNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

unsigned int sOrOrNode*::id(sOrOrNode* self)
{
    return self.id;
}

bool sOrOrNode*::compile(sOrOrNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IOROR);
    
    return true;
}

sNode*% op_eq_node(sInfo* info)
{
    sNode*% result = op_add_node(info);
    
    while((*info->p == '=' && *(info->p+1) == '=') || (*info->p == '!' && *(info->p+1) == '=') || *info->p == '>' || *info->p == '<' || (*info->p == '>' && *(info->p + 1) == '=') || (*info->p == '<' && *(info->p + 1) == '=')) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sEqNode(result, right));
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sNotEqNode(result, right));
        }
        else if(*info->p == '>' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sGTEqNode(result, right));
        }
        else if(*info->p == '<' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sLTEqNode(result, right));
        }
        else if(*info->p == '>') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sGTNode(result, right));
        }
        else if(*info->p == '<') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sLTNode(result, right));
        }
    }
    
    return result;
}

sNode*% op_andand_node(sInfo* info)
{
    sNode*% result = op_eq_node(info);
    
    while((*info->p == '&' && *(info->p+1) == '&') || (*info->p == '|' && *(info->p+1) == '|')) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sAndAndNode(result, right));
        }
        else if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNode(new sOrOrNode(result, right));
        }
    }
    
    return result;
}

sNode*% expression(sInfo* info) version 3
{
    return op_andand_node(info);
}

bool vm(sInfo* info) version 3
{
    switch(*info->op) {
        case OP_IMUL: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            if(left_value.kind == kIntValue && right_value.kind == kIntValue) {
                int lvalue = left_value.intValue;
                int rvalue = right_value.intValue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                int value = lvalue * rvalue;
                
                info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            else if(left_value.kind == kStrValue && right_value.kind == kIntValue) {
                wchar_t* lvalue = borrow left_value.strValue;
                int rvalue = right_value.intValue;
                
                wstring value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value.kind == kMapValue && right_value.kind == kIntValue) {
                map<ZVALUE*%, ZVALUE*%>* lvalue = borrow left_value.mapValue;
                int rvalue = right_value.intValue;
                
                map<ZVALUE*%, ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kMapValue, map_value:value));
            }
            else if(left_value.kind == kListValue && right_value.kind == kIntValue) {
                list<ZVALUE*%>* lvalue = borrow left_value.listValue;
                int rvalue = right_value.intValue;
                
                list<ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kListValue, list_value:value));
            }
            else {
                fprintf(stderr, "invalid type for + operator\n");
                exit(2);
            }
            }
            break;
            
        case OP_IDIV: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            int value = lvalue / rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IMOD: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            int value = lvalue % rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool value = left_value === right_value;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_INOTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool value = left_value !== right_value;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGT: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue > rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILT: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue < rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue >= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue <= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IANDAND: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool lvalue = left_value.boolValue;
            bool rvalue = right_value.boolValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue && rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IOROR: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool lvalue = left_value.boolValue;
            bool rvalue = right_value.boolValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue || rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        default:
            return inherit(info);
            break;
    }
    
    return true;
}

