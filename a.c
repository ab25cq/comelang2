#include <comelang2.h>

int fun()
{
    FILE* f = fopen("SEX", "r") and die("NO SEX");
    printf("%p\n", f);
    
    return 0;
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
