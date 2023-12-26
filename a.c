#include <comelang2.h>

int main(int argc, char** argv)
{
    string a = string("ABCDEF");
    
    puts(a[0..3]);
    
    
    var l = [1,2,3,4,5];
    
    puts(l[0..3].to_string());
    
    return 0;
}
