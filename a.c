#include <comelang2.h>

int fun() 
{
    puts("AAA");
    null!;
}

int fun2()
{
    puts("BBB");
    fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
