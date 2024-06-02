#include "common.h"

struct sWhileNode
{
    int id;
    sNode*% while_exp;
    sNodeBlock while_block;
};

sWhileNode*% sWhileNode*::initialize(sWhileNode*% self, sNode*% while_exp, sNodeBlock while_block)
{
    self.id = gNodeID++;
    self.while_exp = clone while_exp;
    self.while_block = clone while_block;
    
    return self;
}

unsigned int sWhileNode*::id(sWhileNode* self)
{
    return self.id;
}

bool sWhileNode*::compile(sWhileNode* self, sInfo* info)
{
    sNode* while_exp = self.while_exp;
    sNodeBlock& while_block = self.while_block;
    
    int head = info.codes.len;
    
    int head_before = info.loop_head;
    info.loop_head = head;
    
    list<int>* breaks_before = info.breaks;
    info.breaks = new list<int>();
    
    if(!while_exp.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IF);
    int end_point = info.codes.len;
    info.codes.append_int(0);
    
    info->stack_num--;
    
    if(!compile_block(while_block, info)) {
        return false;
    }
    
    info.codes.append_int(OP_GOTO);
    info.codes.append_int(head);
    
    using unsafe;
    int* p = (int*)(info.codes.buf + end_point);
    *p = info.codes.len;
    
    for(int i=0; i<info->breaks.length(); i++) {
        using unsafe;
        
        int break_point = info->breaks[i];
        
        int* p = (int*)(info.codes.buf + break_point);
        
        *p = info.codes.length();
    }
    
    info->breaks = dummy_heap breaks_before;
    info->loop_head = head_before;
    
    return true;
}

struct sBreakNode
{
    int id;
    bool dummy;
};

sBreakNode*% sBreakNode*::initialize(sBreakNode*% self)
{
    self.id = gNodeID++;
    return self;
}

unsigned int sBreakNode*::id(sBreakNode* self)
{
    return self.id;
}

bool sBreakNode*::compile(sBreakNode* self, sInfo* info)
{
    if(info->breaks == null) {
        fprintf(stderr, "not in aloop for break\n");
        return false;
    }
    
    info.codes.append_int(OP_GOTO);
    
    int break_point = info.codes.len;
    info->breaks.push_back(break_point);
    
    info.codes.append_int(0);
    
    return true;
}
sNode*% exp_node(sInfo* info) version 7
{
    if(is_word("while", info)) {
        info->p += strlen("while");
        skip_spaces(info);
        
        sNode*% node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% while_exp = clone node;
        
        sNodeBlock while_block = parse_block(info);
        
        return new sNode(new sWhileNode(while_exp, clone while_block));
    }
    else if(is_word("break", info)) {
        info->p += strlen("break");
        skip_spaces(info);
        
        return new sNode(new sBreakNode());
    }
    else {
        return inherit(info);
    }
    
    return null;
}
