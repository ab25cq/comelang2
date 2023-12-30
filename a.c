#include <comelang2.h>

int main(int argc, char** argv)
{
    var p = s"ABC".to_buffer().to_pointer();
    
    printf("%c\n", *p);
    
    p+=4;
    
    printf("%c\n", *p);
    
    return 0;
}
