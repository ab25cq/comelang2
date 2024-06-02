#include <neo-c.h>

struct sWhileNode
{
    sNode*% conditional_exp;
    sBlock*% block;
    
    int sline;
    string sname;
};

sWhileNode*% sWhileNode*::initialize(sWhileNode*% self, sNode*% conditional_exp, sBlock*% block, sInfo* info=info)
{
    self.conditional_exp = conditional_exp;
    self.block = block;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sWhileNode*::kind()
{
    return string("sWhileNode");
}

bool sWhileNode*::compile(sWhileNode* self, sInfo* info)
{
    if(!self.conditional_exp.compile(info)) {
        return false;
    }
    
    CVALUE*% come_value = clone get_value_from_stack();
    dec_stack_ptr(1);
    
    sType* conditional_type = come_value.type;
    
    if(conditional_type == null) {
        err_msg(info, "require conditional value type");
        return false;
    }
    
    check_assign_type(new sType("bool"), conditional_type, come_value);
    
    add_come_code(info, s"while \{come_value.c_value} do\n");
    
    compile_block(self.block);
    
    add_come_code(info, s"end\n");
    
    return true;
}

bool sWhileNode*::terminated()
{
    return false;
}

int sWhileNode*::sline(sWhileNode* self, sInfo* info)
{
    return self.sline;
}

string sWhileNode*::sname(sWhileNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(string buf, sInfo* info=info) version 3
{
    if(buf === "while") {
        expected_next_character('(');
        
        sNode*% conditional_exp = expression();
        
        expected_next_character(')');
        
        if(conditional_exp == null) {
            err_msg(info, "require conditional exp");
            exit(2);
        }
        
        sBlock*% block = parse_block();
        
        return new sWhileNode(conditional_exp, block) implements sNode;
    }
    else {
        return inherit(buf, info);
    }
}
