#include "common.h"

sModule*% sModule*::initialize(sModule*% self)
{
    self.mSourceHead = new buffer();
    self.mSource = new buffer();
    self.mLastCode = null;
    self.mLastCode2 = null;
    self.mHeader = new buffer();
    
    return self;
}

sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent)
{
    self.mVars = new map<string, sVar*%>();
    self.mGlobal = global;
    self.mParent = parent;
    static int id = 0;
    self.mID = ++id;
    
    return self;
}

void sVarTable*::finalize(sVarTable* self)
{
    delete self.mVars;
}

sType*% sType*::initialize(sType*% self, char* name, bool heap=false, sInfo* info=info)
{
    int pointer_num = 0;
    char* p = name;
    while(*p) {
        if(xisalpha(*p)) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p == '*') {
        pointer_num++;
        p++;
    }
    
    string name2 = string(name).substring(0, -pointer_num-1);
    
    sClass* klass = info.classes[name2]??;
    sClass* generics_class = info.generics_classes[name2]??;
    
    if(klass == null && generics_class == null) {
        printf("%s %d: class not found(%s)(1)\n", info->sname, info->sline, name2);
    }
    
    if(klass) {
        self.mClass = klass;
    }
    else {
        sClass*% klass2 = new sClass;
        klass2->mName = string(name);
        klass2->mDeclareSName = string(info->sname);
        
        info.classes.insert(string(name), klass2);
        
        self.mClass = info.classes[string(name)]??;
    }
    
    self.mNoSolvedGenericsType = new tuple1<sType*%>(null);
    self.mMultipleTypes = new list<sType*%>();
    self.mOriginalLoadVarType = new tuple1<sType*%>(null);
    self.mGenericsTypes = new list<sType*%>();
    self.mArrayNum = new list<sNode*%>();
    self.mOmitArrayNum = false;
    self.mParamTypes = new list<sType*%>();
    self.mParamNames = new list<string>();
    self.mVarArgs = false;
    self.mResultType = null;
    self.mUnsigned = false;
    self.mConstant = false;
    self.mRegister = false;
    self.mVolatile = false;
    self.mStatic = false;
    self.mRestrict = false;
    self.mImmutable = false;
    self.mLongLong = false;
    self.mHeap = heap;
    self.mDummyHeap = false;
    self.mNoHeap = false;
    self.mRefference = false;
    
    self.mPointerNum = pointer_num;
    self.mNoArrayPointerNum = 0;
    self.mSizeNum = null;
    
    self.mDynamicArrayNum = 0;
    self.mTypeOfExpression = 0;

    self.mOriginalTypeName = string("");
    self.mOriginalPointerNum = 0;
    
    self.mFunctionParam = false;
    
    return self;
}

sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false, sInfo* info=info)
{
    self.mNumber = number;
    self.mStruct = struct_;
    self.mUnion = union_;
    self.mGenerics = generics;
    self.mMethodGenerics = method_generics;
    self.mEnum = false;
    self.mProtocol = protocol_;
    self.mFloat = float_;
    self.mEnum = enum_;
    
    self.mName = string(name);
    
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    self.mFields = new list<tuple2<string, sType*%>*%>();
    
    self.mDeclareSName = string(info->sname);
    
    return self;
};

sClassModule*% sClassModule*::initialize(sClassModule*% self, char* name, string text, string sname, int sline, sInfo* info)
{
    self.mName = clone name;
    self.mText = clone text;
    self.mParams = new list<string>();
    self.mSName = string(sname);
    self.mSLine = sline;
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>%* param_default_parametors, bool external, bool var_args, sBlock*% block, bool static_, string come_header, string declare_sname, sInfo* info)
{
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mExternal = external;
    self.mVarArgs = var_args;
    self.mStatic = static_;
    
    self.mLambdaType = new sType("lambda");
    
    foreach(it, param_types) {
        self.mLambdaType.mParamTypes.push_back(clone it);
    }
    
    foreach(it, param_names) {
        self.mLambdaType.mParamNames.push_back(clone it);
    }
    
    self.mLambdaType.mResultType = new tuple1<sType*%>(result_type);
    self.mLambdaType.mVarArgs = var_args;
    
    self.mSource = new buffer();
    self.mSourceHead = new buffer();
    self.mSourceHead2 = new buffer();
    self.mSourceDefer = new buffer();
    
    self.mBlock = clone block;
    
    self.mComeHeader = come_header;
    
    self.mDeclareSName = string(declare_sname);
    
    return self;
}

int sNodeBase*::sline(sNodeBase* self, sInfo* info)
{
    return self.sline;
}

string sNodeBase*::sname(sNodeBase* self, sInfo* info)
{
    return string(self.sname);
}
