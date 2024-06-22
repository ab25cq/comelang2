#include "common.h"

class sRefferenceNode extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sRefferenceNode");
    }
    
    bool compile(sInfo* info)
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
    }
};

class sDerefferenceNode extends sNodeBase
{
    sNode*% value;
    bool mQuote;
    
    new(sNode*% value, bool quote, sInfo* info)
    {
        self.value = value;
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDerefferenceNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* value = self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        if(gComeDebug) {
            if(value.kind() !== "sExpEqualNode") {
                left_value.c_value = xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))", make_type_name_string(left_value.type)!, left_value.c_value, info->sname, info->sline, gComeDebugStackFrameID++);
            }
            else {
                char* p = left_value.c_value;
                char* p2 = null;
                while(*p) {
                    if(*p == '=') {
                        p2 = p;
                        break;
                    }
                    else {
                        p++;
                    }
                }
                
                if(p2 == null) {
                    err_msg(info, "unexpected error in debugging to dereffrence and to assign");
                    exit(2);
                }
                
                p = left_value.c_value;
                
                var buf = new buffer();
                buf.append(p, p2 - p);
                
                var buf2 = new buffer();
                buf2.append(p2, p + strlen(p) - p2);
                
                left_value.c_value = xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s", make_type_name_string(left_value.type)!, buf.to_string(), info->sname, info->sline, gComeDebugStackFrameID++, buf2.to_string());
            }
        }
        
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
};

class sLogicalDenial extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sLogicalDenial");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
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
};

class sReverseNode extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sReverseNode");
    }
    
    bool compile(sInfo* info)
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
};
class sMinusNode2 extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
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
};

class sMinusMinusNode2 extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sMinusMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
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
};

class sNormalBlock extends sNodeBase
{
    sBlock*% mBlock;
    
    new(sBlock* block, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mBlock = clone block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sNormalBlock");
    }
    
    bool compile(sInfo* info)
    {
        sBlock* block = self.mBlock;
        
        add_come_code(info, "{\n");
    
        transpile_block(block, null, null, info);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

sNode*% parse_normal_block(sInfo* info=info)
{
    sBlock*% block = parse_block();
    
    return new sNode(new sNormalBlock(block, info));
}

sNode*% craete_logical_denial(sNode*% node, sInfo* info)
{
    return new sNode(new sLogicalDenial(clone node, info));
}

class sPlusPlusNode2 extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sPlusPlusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
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
};

class sComplement extends sNodeBase
{
    sNode*% value;
    
    new(sNode*% value, sInfo* info)
    {
        self.value = value;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sComplement");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
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
};

class sParenNode extends sNodeBase
{
    sNode*% mLeft;
    
    new(sNode* left, sInfo* info)
    {
        self.mLeft = clone left;
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sParenNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
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
};

class sCastNode extends sNodeBase
{
    sType*% mType;
    sNode*% mLeft;
    
    new(sType* type, sNode* left, sInfo* info)
    {
        self.mType = clone type;
        self.mLeft = clone left;
        self.sline = info.sline;
        self.sname = string(info.sname);
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sCastNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.mType;
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type2 = solve_generics(clone type, info.generics_type, info);
        
        CVALUE*% come_value = new CVALUE;
        
        cast_type(type2, left_value.type, left_value);
        
        come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type2), left_value.c_value);
        come_value.type = clone type2;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
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
    
    if(*info->p == '{') {
        return parse_normal_block();
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sLogicalDenial(node, info) implements sNode;
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sMinusMinusNode2(node, info) implements sNode;
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
    else if((*info->p == '\\' && *(info->p+1) == '*') || *info->p == '*') {
        bool quote;
        if(*info->p == '\\') {
            info->p += 2;
            skip_spaces_and_lf();
            quote = true;
        }
        else {
            info->p ++;
            skip_spaces_and_lf();
            quote = false;
        }
        
        bool no_assign = info.no_assign;
        info.no_assign = true;
        sNode*% value = expression_node();
        info.no_assign = no_assign;
        
        return new sDerefferenceNode(value, quote, info) implements sNode
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
            sNode*% node2 = post_position_operator3(node, info);
            
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

