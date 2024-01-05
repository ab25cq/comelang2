#include "common.h"

struct sSwitchNode
{
  sNode*% mExpressionNode;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sSwitchNode*% sSwitchNode*::initialize(sSwitchNode*% self, sNode*% expression_node, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mBlock = clone block;

    return self;
}

bool sSwitchNode*::terminated()
{
    return true;
}

string sSwitchNode*::kind()
{
    return string("sSwitchNode");
}

bool sSwitchNode*::compile(sSwitchNode* self, sInfo* info)
{
//    bool in_loop = info.in_loop;
//    info.in_loop = true;
    
    sBlock* block = self.mBlock;
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!node_compile(expression_node)) {
        return false;
    }
    
    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    add_come_code(info, "switch (%s) {\n", conditional_value.c_value);

    transpile_block(block, null, null, info, false, true);

    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);
    
//    info.in_loop = in_loop;

    return true;
}

int sSwitchNode*::sline(sSwitchNode* self, sInfo* info)
{
    return self.sline;
}

string sSwitchNode*::sname(sSwitchNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCaseNode
{
  sNode*% mNode;
  
  int sline;
  string sname;
};


sCaseNode*% sCaseNode*::initialize(sCaseNode*% self, sNode*% node, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mNode = clone node;

    return self;
}

bool sCaseNode*::terminated()
{
    return false;
}

string sCaseNode*::kind()
{
    return string("sCaseNode");
}

bool sCaseNode*::compile(sCaseNode* self, sInfo* info)
{
    sNode* node = self.mNode;
    
    if(!node_compile(node)) {
        return false;
    }
    
    CVALUE*% label_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    add_come_code(info, "case %s:\n", label_value.c_value);
    
    transpiler_clear_last_code(info);

    return true;
}

int sCaseNode*::sline(sCaseNode* self, sInfo* info)
{
    return self.sline;
}

string sCaseNode*::sname(sCaseNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDefaultNode
{
  int sline;
  string sname;
};


sDefaultNode*% sDefaultNode*::initialize(sDefaultNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sDefaultNode*::terminated()
{
    return false;
}

string sDefaultNode*::kind()
{
    return string("sDefaultNode");
}

bool sDefaultNode*::compile(sDefaultNode* self, sInfo* info)
{
    add_come_code(info, "default:\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sDefaultNode*::sline(sDefaultNode* self, sInfo* info)
{
    return self.sline;
}

string sDefaultNode*::sname(sDefaultNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sBreakNode
{
  int sline;
  string sname;
};


sBreakNode*% sBreakNode*::initialize(sBreakNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sBreakNode*::terminated()
{
    return false;
}

string sBreakNode*::kind()
{
    return string("sBreakNode");
}

bool sBreakNode*::compile(sBreakNode* self, sInfo* info)
{
    free_objects_on_break(info);

    add_come_code(info, "break;\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sBreakNode*::sline(sBreakNode* self, sInfo* info)
{
    return self.sline;
}

string sBreakNode*::sname(sBreakNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sContinueNode
{
  int sline;
  string sname;
};


sContinueNode*% sContinueNode*::initialize(sContinueNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sContinueNode*::terminated()
{
    return false;
}

string sContinueNode*::kind()
{
    return string("sContinueNode");
}

bool sContinueNode*::compile(sContinueNode* self, sInfo* info)
{
    free_objects_on_break(info);

    add_come_code(info, "continue;\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sContinueNode*::sline(sContinueNode* self, sInfo* info)
{
    return self.sline;
}

string sContinueNode*::sname(sContinueNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12
{
    if(buf === "case") {
        sNode*% node = expression();
        expected_next_character(':');
        
        return some(new sCaseNode(node, info) implements sNode);
    }
    else if(buf === "default") {
        expected_next_character(':');
        
        return some(new sDefaultNode(info) implements sNode);
    }
    else if(buf === "break") {
        return some(new sBreakNode(info) implements sNode);
    }
    else if(buf === "continue") {
        return some(new sContinueNode(info) implements sNode);
    }
    else if(buf === "switch") {
        expected_next_character('(');
        
        /// expression ///
        sNode*% expression_node = expression();
        expected_next_character(')');
        
        sBlock*% block = parse_block();
    
        return some(new sSwitchNode(expression_node, block, info) implements sNode);
    }
    
    sNode*% result = inherit(buf, head ,head_sline, info).catch {
        return! none(null);
    }
    
    return some(result);
}
