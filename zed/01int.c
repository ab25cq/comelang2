#include "common.h"

void initialize_modules() version 1
{
}

void finalize_modules() version 1
{
}

struct sIntNode
{
    int id;
    int value;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value)
{
    self.value = value;
    self.id = gNodeID++;
    
    return self;
}

unsigned int sIntNode*::id(sIntNode*% self)
{
    return self.id;
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    info.codes.append_int(OP_INT_VALUE);
    info.codes.append_int(self.value);
    
    info.stack_num++;
    
    return true;
}

sNode*% exp_node(sInfo* info) version 1
{
    if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        if(xisdigit(*info->p)) {
            int n = 0;
            while(xisdigit(*info->p)) {
                n = n * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces(info);
            
            return new sNode(new sIntNode(-n));
        }
    }
    else if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces(info);
        
        return new sNode(new sIntNode(n));
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces(info);
        
        sNode*% exp = expression(info);
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces(info);
        }
        
        return exp;
    }
    
    return null;
}

sNode*% expression(sInfo* info) version 1
{
    return exp_node(info);
}

bool parse(sInfo* info) version 1
{
    sNode*% node = expression(info);
    
    if(node == null) {
        fprintf(stderr, "invalid expression\n");
        return false;
    }
    
    info->nodes.push_back(node);
    
    return true;
}

void arrange_stack(sInfo* info)
{
    if(info->stack_num > 0) {
        info.codes.append_int(OP_POP);
        info.codes.append_int(info->stack_num);
    }
}

bool vm(sInfo* info) version 1
{
    switch(*info->op) {
        case OP_POP: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            if(info.stack.length() > 0) {
                info->result_value = clone info.stack[-1];
            }
            
            for(int i=0; i<value; i++) {
                info.stack.delete(-1, -1);
            }
            }
            break;
            
        case OP_INT_VALUE: {
            info->op++;
            int value = *info->op;
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
    }
    
    return true;
}

