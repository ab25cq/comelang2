#include <comelang2.h>

exception int fun() 
{
    return none(0);
}

exception int fun2()
{
    return fun()!;
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
