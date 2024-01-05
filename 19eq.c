#include "common.h"

struct sPlusPlusNode
{
    sNode*% mLeft;
  
    int sline;
    string sname;
    bool mQuote;
};

sPlusPlusNode*% sPlusPlusNode*::initialize(sPlusPlusNode*% self, sNode*% left, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mQuote = quote;

    return self;
}

bool sPlusPlusNode*::terminated()
{
    return false;
}

string sPlusPlusNode*::kind()
{
    return string("sPlusPlusNode");
}

bool sPlusPlusNode*::compile(sPlusPlusNode* self, sInfo* info)
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

int sPlusPlusNode*::sline(sPlusPlusNode* self, sInfo* info)
{
    return self.sline;
}

string sPlusPlusNode*::sname(sPlusPlusNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusMinusNode
{
    sNode*% mLeft;
    bool mQuote;
  
    int sline;
    string sname;
};

sMinusMinusNode*% sMinusMinusNode*::initialize(sMinusMinusNode*% self, sNode*% left, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mQuote = quote;

    return self;
}

bool sMinusMinusNode*::terminated()
{
    return false;
}

string sMinusMinusNode*::kind()
{
    return string("sMinusMinusNode");
}

bool sMinusMinusNode*::compile(sMinusMinusNode* self, sInfo* info)
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

int sMinusMinusNode*::sline(sMinusMinusNode* self, sInfo* info)
{
    return self.sline;
}

string sMinusMinusNode*::sname(sMinusMinusNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sPlusEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sPlusEqualNode*% sPlusEqualNode*::initialize(sPlusEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mQuote = quote;

    return self;
}

bool sPlusEqualNode*::terminated()
{
    return false;
}

string sPlusEqualNode*::kind()
{
    return string("sPlusEqualNode");
}

bool sPlusEqualNode*::compile(sPlusEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sPlusEqualNode*::sline(sPlusEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sPlusEqualNode*::sname(sPlusEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sMinusEqualNode*% sMinusEqualNode*::initialize(sMinusEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMinusEqualNode*::terminated()
{
    return false;
}

string sMinusEqualNode*::kind()
{
    return string("sPlusEqualNode");
}

bool sMinusEqualNode*::compile(sMinusEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sMinusEqualNode*::sline(sMinusEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sMinusEqualNode*::sname(sMinusEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMultEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sMultEqualNode*% sMultEqualNode*::initialize(sMultEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMultEqualNode*::terminated()
{
    return false;
}

string sMultEqualNode*::kind()
{
    return string("sMultEqualNode");
}

bool sMultEqualNode*::compile(sMultEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sMultEqualNode*::sline(sMultEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sMultEqualNode*::sname(sMultEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDivEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sDivEqualNode*% sDivEqualNode*::initialize(sDivEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sDivEqualNode*::terminated()
{
    return false;
}

string sDivEqualNode*::kind()
{
    return string("sDivEqualNode");
}

bool sDivEqualNode*::compile(sDivEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sDivEqualNode*::sline(sDivEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sDivEqualNode*::sname(sDivEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sModEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sModEqualNode*% sModEqualNode*::initialize(sModEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sModEqualNode*::terminated()
{
    return false;
}

string sModEqualNode*::kind()
{
    return string("sModEqualNode");
}

bool sModEqualNode*::compile(sModEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sModEqualNode*::sline(sModEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sModEqualNode*::sname(sModEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLShifEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sLShifEqualNode*% sLShifEqualNode*::initialize(sLShifEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLShifEqualNode*::terminated()
{
    return false;
}


string sLShifEqualNode*::kind()
{
    return string("sLShifEqualNode");
}

bool sLShifEqualNode*::compile(sLShifEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sLShifEqualNode*::sline(sLShifEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sLShifEqualNode*::sname(sLShifEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRShiftEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sRShiftEqualNode*% sRShiftEqualNode*::initialize(sRShiftEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sRShiftEqualNode*::terminated()
{
    return false;
}

string sRShiftEqualNode*::kind()
{
    return string("sRShiftEqualNode");
}

bool sRShiftEqualNode*::compile(sRShiftEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sRShiftEqualNode*::sline(sRShiftEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sRShiftEqualNode*::sname(sRShiftEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sXorEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sXorEqualNode*% sXorEqualNode*::initialize(sXorEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sXorEqualNode*::terminated()
{
    return false;
}

string sXorEqualNode*::kind()
{
    return string("sXorEqualNode");
}

bool sXorEqualNode*::compile(sXorEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sXorEqualNode*::sline(sXorEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sXorEqualNode*::sname(sXorEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sOrEqualNode*% sOrEqualNode*::initialize(sOrEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrEqualNode*::terminated()
{
    return false;
}

string sOrEqualNode*::kind()
{
    return string("sOrEqualNode");
}

bool sOrEqualNode*::compile(sOrEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sOrEqualNode*::sline(sOrEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sOrEqualNode*::sname(sOrEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sAndEqualNode*% sAndEqualNode*::initialize(sAndEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndEqualNode*::terminated()
{
    return false;
}

string sAndEqualNode*::kind()
{
    return string("sAndEqualNode");
}

bool sAndEqualNode*::compile(sAndEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sAndEqualNode*::sline(sAndEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sAndEqualNode*::sname(sAndEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sExpEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
    bool mQuote;
  
    int sline;
    string sname;
};

sExpEqualNode*% sExpEqualNode*::initialize(sExpEqualNode*% self, sNode*% left, sNode*% right, bool quote, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mQuote = quote;

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sExpEqualNode*::terminated()
{
    return false;
}

string sExpEqualNode*::kind()
{
    return string("sExpEqualNode");
}

bool sExpEqualNode*::compile(sExpEqualNode* self, sInfo* info)
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
        calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
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

int sExpEqualNode*::sline(sExpEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sExpEqualNode*::sname(sExpEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% post_position_operator2(sNode*% node, sInfo* info) version 19
{
    if((*info->p == '\\' && *(info->p+1) == '+' && *(info->p+2) == '+') || (*info->p == '+' && *(info->p+1) == '+')) {
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
