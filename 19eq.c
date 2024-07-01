#include "common.h"

class sPlusPlusNode extends sNodeBase
{
    sNode*% mLeft;
  
    bool mQuote;
    
    new(sNode*% left, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mLeft = clone left;
        self.mQuote = quote;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sPlusPlusNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_plus_plus";
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun_self(type, fun_name, left_value, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s++", left_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sMinusMinusNode extends sNodeBase
{
    sNode*% mLeft;
    bool mQuote;
    
    new(sNode*% left, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mLeft = clone left;
        self.mQuote = quote;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sMinusMinusNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_minus_minus";
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun_self(type, fun_name, left_value, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s--", left_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sPlusEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
    
        self.mLeft = clone left;
        self.mRight = clone right;
        self.mQuote = quote;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sPlusEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_plus_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s+=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sMinusEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sPlusEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_minus_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s-=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sMultEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sMultEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_mult_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s*=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sDivEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sDivEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_div_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s/=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sModEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sModEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_mod_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s%%=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sLShifEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sLShifEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_lshift_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s<<=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sRShiftEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sRShiftEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_rshift_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s>>=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sXorEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sXorEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_xor_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s^=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sOrEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sOrEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_or_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s|=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sAndEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sAndEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_and_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s&=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

class sExpEqualNode extends sNodeBase
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
    
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.mQuote = quote;
    
        self.mLeft = clone left;
        self.mRight = clone right;
    }
    
    bool terminated()
    {
        return false;
    }
    
    string kind()
    {
        return string("sExpEqualNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sNode* right = self.mRight;
        
        if(!node_compile(right)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_exp_equal";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE;
            
            come_value.c_value = xsprintf("%s=%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
    
        return true;
    }
};

sNode*% post_position_operator(sNode*% node, sInfo* info) version 19
{
    if((*info->p == '\\' && *(info->p+1) == '+' && *(info->p+2) == '+') || (*info->p == '+' && *(info->p+1) == '+')) {
         bool quote;
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         return new sPlusPlusNode(node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '-' && *(info->p+2) == '-') || (*info->p == '-' && *(info->p+1) == '-')) {
        bool quote
        if(*info->p == '\\') {
            info->p+=3;
            skip_spaces_and_lf();
            quote = true;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf();
            quote = false;
        }
        
        return new sMinusMinusNode(node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '+' && *(info->p+2) == '=') || (*info->p == '+' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sPlusEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '-' && *(info->p+2) == '=') || (*info->p == '-' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sMinusEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '*' && *(info->p+2) == '=') || (*info->p == '*' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sMultEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '/' && *(info->p+2) == '=') || (*info->p == '/' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sDivEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '%' && *(info->p+2) == '=') || (*info->p == '%' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         
         sNode*% right_node = expression();
        
         return new sModEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) == '<' && *(info->p+3) == '=') || (*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=4;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=3;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sLShifEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) == '>' && *(info->p+3) == '=') || (*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=4;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=3;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sRShiftEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '^' && *(info->p+2) == '=') || (*info->p == '^' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sXorEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '&' && *(info->p+2) == '=') || (*info->p == '&' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sAndEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '|' && *(info->p+2) == '=') || (*info->p == '|' && *(info->p+1) == '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=3;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p+=2;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sOrEqualNode(node, right_node, quote, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '=' && *(info->p+2) != '=') || (*info->p == '=' && *(info->p+1) != '=')) {
         bool quote
         if(*info->p == '\\') {
             info->p+=2;
             skip_spaces_and_lf();
             quote = true;
         }
         else {
             info->p++;
             skip_spaces_and_lf();
             quote = false;
         }
         
         sNode*% right_node = expression();
        
         return new sExpEqualNode(node, right_node, quote, info) implements sNode;
    }
    
    return (sNode*%)null;
}
