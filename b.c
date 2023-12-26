#include <comelang2.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { return atoi(it); }.filter { return it > 1}.each { printf("%d\n",it); }
    
    return 0;
}
