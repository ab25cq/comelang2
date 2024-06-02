#include <neo-c.h>

struct sType;

struct sMethod 
{
    string mName;
    list<tuple2<string,sType*%>*%>*% mParams;
    bool mNative;
    
    sType*% mResultType;
};

sMethod*% sMethod*::initialize(sMethod*% self, char* name, list<tuple2<string,sType*%>*%>*% params, sType*% result_type, bool native_=false)
{
    self.mName = string(name);
    self.mParams = clone params;
    self.mNative = native_;
    self.mResultType = result_type;
    
    return self;
}

struct sVar;

struct sClass {
    string mName;
    map<string, sMethod*%>*% mMethods;
    map<string, sMethod*%>*% mClassMethods;
    map<string, sVar*%>*% mFields;
};

sClass*% sClass*::initialize(sClass*% self, char* name)
{
    self.mName = string(name);
    self.mMethods = new map<string, sMethod*%>();
    self.mClassMethods = new map<string, sMethod*%>();
    self.mFields = new map<string, sVar*%>();
    
    return self;
}

struct sType;

struct sType
{
    sClass* mClass;
    
    list<sType*%>*% mMultipleTypes;
    
    list<sType*%>*% mGenericsTypes;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;
};

struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sModule
{
    string mLastCode;
    buffer*% mSource;
};

struct sInfo
{
    buffer*% source;
    smart_pointer<char>*% p;
    string sname;
    int sline;
    
    list<CVALUE*%>*% stack;
    
    sType*% type;
    map<string, sClass*%>*% classes;
    
    bool no_output_come_code;
    
    int err_num;
    
    sModule*% module;
    bool no_output_err;
    int nest;
    
    sClass* current_class;
    map<string, sMethod*%>*% methods;
    
    map<string, sVar*%>*% lv_table;
    map<string, sVar*%>*% gv_table;
    
    int line_field;
};

sModule*% sModule*::initialize(sModule*% self)
{
    self.mLastCode = null;
    self.mSource = new buffer();
    
    return self;
}

sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info)
{
    sClass* klass = info.classes[name]??;
    
    if(klass == null) {
        err_msg(info, "no existance of %s class", name);
        exit(2);
    }
    
    self.mClass = klass;
    self.mMultipleTypes = new list<sType*%>();
    self.mGenericsTypes = new list<sType*%>();
    
    return self;
}

void add_come_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    for(int i=0; i<info->nest; i++) {
        info.module.mSource.append_str("    ");
    }
    info.module.mSource.append_str(xsprintf("%s", msg2));
    
    free(msg2);
}

void add_come_code_without_nest(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mSource.append_str(xsprintf("%s", msg2));
    
    free(msg2);
}

void add_last_code_to_source(sInfo* info=info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s", info.module.mLastCode);
       info.module.mLastCode = null;
    }
}
void add_line_field_to_source(int line_field, sInfo* info=info)
{
    if(info->no_output_come_code) {
        return;
    }
    for(int i=0; i<line_field; i++) {
       add_come_code_without_nest(info, "\n");
    }
}

void add_come_last_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mLastCode = xsprintf("%s", msg2);
    
    free(msg2);
}

CVALUE*% get_value_from_stack(int offset=-1, sInfo* info=info)
{
    info.module.mLastCode = null;
    return clone info.stack[offset];
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        printf("%s %d: %s\n", info.sname, info.sline, msg2);
        info.err_num++;
        stackframe();

        free(msg2);
    }
}

void skip_spaces_and_lf(sInfo* info=info)
{
    while(*info->p && (*info->p == ' ' || *info->p == '\t' || (*info->p == '\n' && ++info->sline && ++info->line_field))) {
        info->p++;
    }
}

interface sNode {
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
    string kind();
};

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sIntNode*::kind()
{
    return string("sIntNode");
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("Integer");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sIntNode*::terminated()
{
    return false;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAddNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sAddNode*::kind()
{
    return string("sAddNode");
}

bool sAddNode*::compile(sAddNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type +");
        return false;
    }
    
    come_value.c_value = xsprintf("%s+%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sAddNode*::terminated()
{
    return false;
}

int sAddNode*::sline(sAddNode* self, sInfo* info)
{
    return self.sline;
}

string sAddNode*::sname(sAddNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSubNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sSubNode*::kind()
{
    return string("sSubNode");
}

bool sSubNode*::compile(sSubNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type +");
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s-%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sSubNode*::terminated()
{
    return false;
}

int sSubNode*::sline(sSubNode* self, sInfo* info)
{
    return self.sline;
}

string sSubNode*::sname(sSubNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sGtNode*% sGtNode*::initialize(sGtNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sGtNode*::kind()
{
    return string("sGtNode");
}

bool sGtNode*::compile(sGtNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type <");
        return false;
    }
    
    come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
    come_value.type = new sType("bool");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sGtNode*::terminated()
{
    return false;
}

int sGtNode*::sline(sGtNode* self, sInfo* info)
{
    return self.sline;
}

string sGtNode*::sname(sGtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sLtNode*% sLtNode*::initialize(sLtNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sLtNode*::kind()
{
    return string("sLtNode");
}

bool sLtNode*::compile(sLtNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type >");
        return false;
    }
    
    come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
    come_value.type = new sType("bool");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sLtNode*::terminated()
{
    return false;
}

int sLtNode*::sline(sLtNode* self, sInfo* info)
{
    return self.sline;
}

string sLtNode*::sname(sLtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtEqNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sGtEqNode*% sGtEqNode*::initialize(sGtEqNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sGtEqNode*::kind()
{
    return string("sGtEqNode");
}

bool sGtEqNode*::compile(sGtEqNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type >=");
        return false;
    }
    
    come_value.c_value = xsprintf("%s>=%s", left_value.c_value, right_value.c_value);
    come_value.type = new sType("bool");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sGtEqNode*::terminated()
{
    return false;
}

int sGtEqNode*::sline(sGtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sGtEqNode*::sname(sGtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtEqNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sLtEqNode*% sLtEqNode*::initialize(sLtEqNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sLtEqNode*::kind()
{
    return string("sLtEqNode");
}

bool sLtEqNode*::compile(sLtEqNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    if(!left_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    if(!right_node.compile(info)) {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type <=");
        return false;
    }
    
    come_value.c_value = xsprintf("%s<=%s", left_value.c_value, right_value.c_value);
    come_value.type = new sType("bool");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

bool sLtEqNode*::terminated()
{
    return false;
}

int sLtEqNode*::sline(sLtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sLtEqNode*::sname(sLtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStrNode
{
    string value;
    int sline;
    string sname;
};

sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info)
{
    self.value = string(value);
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStrNode*::terminated()
{
    return false;
}


string sStrNode*::kind()
{
    return string("sStrNode");
}

bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", self.value);
    come_value.type = new sType("String");
    come_value.var = null;
    
    info.stack.push_back(come_value);

    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

int sStrNode*::sline(sStrNode* self, sInfo* info)
{
    return self.sline;
}

string sStrNode*::sname(sStrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRegexNode
{
    string value;
    bool ignore_case;
    bool meta;
    bool free_format;
    bool o;
    int sline;
    string sname;
};

sRegexNode*% sRegexNode*::initialize(sRegexNode*% self, string value, int sline, bool ignore_case=false, bool meta=false, bool free_format=false, bool o=false, sInfo* info=info)
{
    self.value = string(value);
    
    self.ignore_case = ignore_case;
    self.meta = meta;
    self.free_format = free_format;
    self.o = o;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sRegexNode*::terminated()
{
    return false;
}


string sRegexNode*::kind()
{
    return string("sRegexNode");
}

bool sRegexNode*::compile(sRegexNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("/%s/%s%s%s%s", self.value, self.ignore_case ? "i":"", self.meta ? "m":"", self.free_format ? "x":"", self.o ? "o":"");
    come_value.type = new sType("Regex");
    come_value.var = null;
    
    info.stack.push_back(come_value);

    add_come_last_code(info, "%s", come_value.c_value);
    
    return true;
}

int sRegexNode*::sline(sRegexNode* self, sInfo* info)
{
    return self.sline;
}

string sRegexNode*::sname(sRegexNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCommentNode
{
    string value;
    int sline;
    string sname;
};

sCommentNode*% sCommentNode*::initialize(sCommentNode*% self, string value, sInfo* info=info)
{
    self.value = string(value);
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sCommentNode*::terminated()
{
    return false;
}


string sCommentNode*::kind()
{
    return string("sCommentNode");
}

bool sCommentNode*::compile(sCommentNode* self, sInfo* info)
{
    add_come_code(info, self.value);
    
    return true;
}

int sCommentNode*::sline(sCommentNode* self, sInfo* info)
{
    return self.sline;
}

string sCommentNode*::sname(sCommentNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% expression_node(sInfo* info=info)
{
    if(xisdigit(*info.p)) {
        int n = 0;
        while(true) {
            if(xisdigit(*info.p)) {
                n = n * 10 + (*info.p - '0');
                info->p++;
            }
            else if(*info->p == '_') {
                info->p++;
            }
            else {
                break;
            }
        }
        
        return new sIntNode(n, info) implements sNode;
    }
    else if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p.p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p.p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        return new sStrNode(value.to_string(), sline, info) implements sNode;
    }
    else if(*info->p == '/') 
    {
        info->p++;

        int sline = info->sline;
        
        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '/') {
                info->p++;
                break;
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '/') {
                    value.append_char('/');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close / to make string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        bool ignore_case = false;
        bool meta = false;
        bool free_format = false;
        bool o = false;
        
        while(true) {
            if(*info->p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else if(*info->p == 'm') {
                info->p++;
                meta = true;
            }
            else if(*info->p == 'x') {
                info->p++;
                free_format = true;
            }
            else if(*info->p == 'o') {
                info->p++;
                o = true;
            }
            else {
                break;
            }
        }

        skip_spaces_and_lf();
        
        return new sRegexNode(value.to_string(), sline, ignore_case, meta, free_format, o, info) implements sNode;
    }
    else if(*info->p == '#') {
        char* head = info.p.p;
        
        while(*info->p) {
            if(*info->p == '\n') {
                info->p++;
                info->sline++;
                break;
            }
            else {
                info->p++;
            }
        }
        
        char* tail = info.p.p;
        
        var buf = new buffer();
        
        buf.append(head, tail - head);
        
        skip_spaces_and_lf();
        
        return new sCommentNode(buf.to_string()) implements sNode;
    }
    
    return null;
}

sNode*% add_sub_expression_node(sInfo* info=info)
{
    sNode*% node = expression_node();
    
    while(true) {
        if(*info->p == '+' && *(info->p+1) != '+' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sAddNode(node, right_node) implements sNode;
        }
        else if(*info->p == '-' && *(info->p+1) != '-' && *(info->p+1) != '=' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sSubNode(node, right_node) implements sNode;
        }
        else {
            break;
        }
    }
    
    return node;
}

sNode*% compare_expression_node(sInfo* info=info)
{
    sNode*% node = add_sub_expression_node();
    
    while(true) {
        if(*info->p == '<' && *(info->p+1) == '=' && *(info->p+2) != '>') {
            info->p+=2;
            skip_spaces_and_lf();
            
            sNode*% right_node = add_sub_expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sLtEqNode(node, right_node) implements sNode;
        }
        else if(*info->p == '>' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf();
            
            sNode*% right_node = add_sub_expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sGtEqNode(node, right_node) implements sNode;
        }
        else if(*info->p == '<' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = add_sub_expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sLtNode(node, right_node) implements sNode;
        }
        else if(*info->p == '>' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = add_sub_expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sGtNode(node, right_node) implements sNode;
        }
        else {
            break;
        }
    }
    
    return node;
}

sNode*% expression(sInfo* info=info) version 1
{
    sNode*% node = compare_expression_node();
    
    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    return node;
}

bool output_source(sInfo* info)
{
    string sname = xnoextname(info.sname) + ".rb";
    info.module.mSource.to_string().write(sname);
    
    return true;
}

void init_typed_ruby(sInfo* info)
{
    sClass*% integer_class = new sClass("Integer");
    
    info.classes.insert(string("Integer"), integer_class);
    
    sClass*% void_class = new sClass("void");
    
    info.classes.insert(string("void"), void_class);
    
    sClass*% bool_class = new sClass("bool");
    
    info.classes.insert(string("bool"), bool_class);
    
    sClass*% string_class = new sClass("String");
    
    info.classes.insert(string("String"), string_class);
    
    sClass*% regex_class = new sClass("Regex");
    
    info.classes.insert(string("Regex"), regex_class);
    
    sClass*% kernel_class = new sClass("Kernel");
    
    info.classes.insert(string("Kernel"), kernel_class);
}

int main(int argc, char** argv)
{
    string? file_name = nil;
    bool eval = false;
    for(int i=0; i<argc; i++) {
        if(argv[i] === "-e") {
            eval = true;
        }
        else {
            file_name = string(argv[i]);
        }
    }
    
    sInfo info;
    
    info.source = file_name.read().to_buffer();
    info.p = info.source.to_pointer();
    info.sname = clone file_name;
    info.sline = 1;
    info.stack = new list<CVALUE*%>();
    info.type = null;
    info.classes = new map<string,sClass*%>();
    info.methods = new map<string,sMethod*%>();
    info.no_output_come_code = false;
    info.module = new sModule();
    info.lv_table = new map<string,sVar*%>();
    info.gv_table = new map<string,sVar*%>();
    
    init_typed_ruby(&info);
    
    while(*info.p) {
        int sline = info.sline;
        skip_spaces_and_lf(&info);
        
        if(*info->p == '\0') {
            break;
        }
        
        var node = expression(&info);
        
        if(node == null) {
            puts("parse error");
            exit(2);
        }
        
        if(!node.compile(&info)) {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source(&info);
        skip_spaces_and_lf(&info);
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(&info);
        }
        
        add_line_field_to_source(info->line_field, &info);
        info.line_field = 0;
    }
    
    output_source(&info).elif {
        puts("output source error");
        exit(2);
    }
    
    return 0;
}

