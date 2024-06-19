#include "common.h"

class sSwitchNode extends sNodeBase
{
    sNode*% mExpressionNode;
    sBlock*% mBlock;
    
    new(sNode*% expression_node, sBlock* block, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mExpressionNode = clone expression_node;
        self.mBlock = clone block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sSwitchNode");
    }
    
    bool compile(sInfo* info)
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
};

class sCaseNode extends sNodeBase
{
    sNode*% mNode;

    new(sNode*% node, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mNode = clone node;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sCaseNode");
    }
    
    bool compile(sInfo* info)
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
};

class sDefaultNode extends sNodeBase
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
        return string("sDefaultNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, "default:\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sBreakNode extends sNodeBase
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
        return string("sBreakNode");
    }
    
    bool compile(sInfo* info)
    {
        free_objects_on_break(info);
    
        add_come_code(info, "break;\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sContinueNode extends sNodeBase
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
        return string("sContinueNode");
    }
    
    bool compile(sInfo* info)
    {
        free_objects_on_break(info);
    
        add_come_code(info, "continue;\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12
{
    if(buf === "case") {
        sNode*% node = expression();
        expected_next_character(':');
        
        return new sCaseNode(node, info) implements sNode;
    }
    else if(buf === "default") {
        expected_next_character(':');
        
        return new sDefaultNode(info) implements sNode;
    }
    else if(buf === "break") {
        return new sBreakNode(info) implements sNode;
    }
    else if(buf === "continue") {
        return new sContinueNode(info) implements sNode;
    }
    else if(buf === "switch") {
        expected_next_character('(');
        
        /// expression ///
        sNode*% expression_node = expression();
        expected_next_character(')');
        
        sBlock*% block = parse_block();
    
        return new sSwitchNode(expression_node, block, info) implements sNode;
    }
    
    return inherit(buf, head ,head_sline, info);
}
