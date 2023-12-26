#include "common.h"

struct sListNode
{
    int id;
    list<sNode*%>*% value;
};

sListNode*% sListNode*::initialize(sListNode*% self, list<sNode*%>*% value)
{
    self.id = gNodeID++;
    self.value = value;
    
    return self;
}

unsigned int sListNode*::id(sListNode* self)
{
    return self.id;
}

bool sListNode*::compile(sListNode* self, sInfo* info)
{
    list<sNode*%>* list_ = self.value;
    
    for(int i=0; i<list_.length(); i++) {
        sNode* node = list_[i];
        
        if(!node.compile->(info)) {
            return false;
        }
    }
    
    info.codes.append_int(OP_LIST_VALUE);
    info.codes.append_int(list_.length());
    
    info.stack_num -= list_.length();
    info.stack_num++;
    
    return true;
}

struct sMapNode
{
    int id;
    map<sNode*%, sNode*%>*% value;
};

sMapNode*% sMapNode*::initialize(sMapNode*% self, map<sNode*%, sNode*%>*% value)
{
    self.id = gNodeID++;
    self.value = value;
    
    return self;
}

unsigned int sMapNode*::id(sMapNode* self)
{
    return self.id;
}

bool sMapNode*::compile(sMapNode* self, sInfo* info)
{
    map<sNode*%, sNode*%>* map_ = self.value;
    
    foreach(it, map_) {
        sNode* item = map_[it];
        
        if(!it.compile->(info)) {
            return false;
        }
        
        if(!item.compile->(info)) {
            return false;
        }
    }
    
    info.codes.append_int(OP_MAP_VALUE);
    info.codes.append_int(map_.length());
    
    info.stack_num -= map_.length() * 2;
    info.stack_num++;
    
    return true;
}

bool vm(sInfo* info) version 5
{
    switch(*info->op) {
        case OP_LIST_VALUE: {
            info->op++;
            
            int len = *info->op;
            info->op++;
            
            list<ZVALUE*%>*% list_ = new list<ZVALUE*%>();
            
            for(int i=0; i<len; i++) {
                ZVALUE*% value = clone info.stack[-len+i];
                
                list_.push_back(value);
            }
            
            for(int i=0; i<len; i++) {
                info.stack.delete(-1, -1);
            }
            
            info.stack.push_back(new ZVALUE(kind:kListValue, list_value:list_));
            }
            break;
            

        case OP_MAP_VALUE: {
            info->op++;
            
            int len = *info->op;
            info->op++;
            
            map<ZVALUE*%, ZVALUE*%>*% map_ = new map<ZVALUE*%, ZVALUE*%>();
            
            for(int i=0; i<len*2; i+=2) {
                ZVALUE*% key = clone info.stack[-len*2+i];
                ZVALUE*% item = clone info.stack[-len*2+i+1];
                
                map_.insert(key, item);
            }
            
            for(int i=0; i<len*2; i++) {
                info.stack.delete(-1, -1);
            }
            
            info.stack.push_back(new ZVALUE(kind:kMapValue, map_value:map_));
            }
            break;

        default:
            return inherit(info);
            break;
    }
    
    return true;
}

sNode*% exp_node(sInfo* info) version 3
{
    if(*info->p == '[') {
        info->p++;
        skip_spaces(info);
        
        char* p = info->p;
        
        sNode*% node = expression(info);
        
        if(node == null) {
            return null;
        }
        
        if(*info->p == ':') {
            info->p = p;
            
            map<sNode*%, sNode*%>*% map_ = new map<sNode*%, sNode*%>();
            
            while(true) {
                sNode*% node = expression(info);
                
                if(node == null) {
                    return null;
                }
                
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces(info);
                }
                
                sNode*% node2 = expression(info);
                
                if(node2 == null) {
                    return null;
                }
                
                map_.insert(node, node2);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
            }
            
            return new sNode(new sMapNode(map_));
        }
        else {
            info->p = p;
            
            list<sNode*%>*% list_ = new list<sNode*%>();
            
            while(true) {
                sNode*% node = expression(info);
                
                if(node == null) {
                    return null;
                }
                
                list_.push_back(node);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
            }
            
            return new sNode(new sListNode(list_));
        }
    }
    else {
        return inherit(info);
    }
    
    return null;
}


