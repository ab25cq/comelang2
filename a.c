#include <comelang2.h>

int fun() 
{
    null!;
}

int fun2()
{
    return fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
