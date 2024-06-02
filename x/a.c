#include <comelang2.h>

struct sInfo
{
    buffer*% source;
    smart_pointer<char>*% p;
};

int main(int argc, char** argv)
{
    sInfo info;
    
    info.source = "a.c".read().to_buffer();
    info.p = info.source.to_pointer();
    
printf("%d\n", *(info->p));
    
    return 0;
}

