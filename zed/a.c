#include <comelang2.h>
#include <comelang2-str.h>

struct ZVALUE;

struct ZVALUE 
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;
    
    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    come_regex*% regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};

void append_var(wstring name, ZVALUE* value)
{
}


int main(int argc, char** argv)
{
    ZVALUE*% zzz = new ZVALUE;
    
    append_var(name:wstring("aaa"), value:zzz);
    
    return 0;
}
