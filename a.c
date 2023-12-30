#include <comelang2.h>

void FUN()
{
}

int fun()
{
    FUN();
    FUN();
    FUN();
    char* a = gc_inc(string("AAA"));
    FUN();
    FUN();
    FUN();
}

void fun2()
{
    FUN();
    FUN();
    FUN();
    FUN();
    FUN();
    fun();
    FUN();
    FUN();
    FUN();
}

void fun3()
{
    FUN();
    FUN();
    FUN();
    fun2();
    FUN();
    FUN();
    FUN();
}

void fun4()
{
    FUN();
    FUN();
    FUN();
    fun3();
    FUN();
    FUN();
    FUN();
}

int main(int argc, char** argv)
{
    FUN();
    FUN();
    FUN();
    fun4();
    FUN();
    FUN();
    FUN();
    
    return 0;
}
