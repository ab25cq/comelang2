#include <comelang2.h>

int fun(int argc)
{
    list<string>*% l = [s"AAA", s"BBB"];
    
    int aaa = 123;
    int bbb = 243;
    int ccc = 333;
    
    l.each {
        puts("AAA");
    }
    
    return 0;
}

int main(int argc, char** argv) 
{
//    fun(1);
    char* argv2[3] = { "comelang2", "-O2", "aaa" };
    
    for(int i=0; i<3; i++) {
        if(argv2[i][0..2] === "-O") {
            puts("OK");
        }
    }
    
    return 0;
}
