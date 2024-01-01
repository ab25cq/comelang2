#include <comelang2.h>

int fun() 
{
    puts("AAA");
    return 0;
}

int fun2()
{
    fun();
    puts("BBB");
    fun();
    stackframe();
    return fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
