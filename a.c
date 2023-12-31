#include <comelang2.h>

int fun()
{
    char* a = gc_inc(string("AAA"));
}

void fun2()
{
    strcmp("ABC", "ABC");
    fun();
}

void fun3()
{
    fun2();
    fun();
}

void fun4()
{
    fun3();
}

int main(int argc, char** argv)
{
    fun4();
    
    return 0;
}
