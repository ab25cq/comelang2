#include <neo-c.h>

module MModule
{
    int a;
    int b;
    
    new(int a, int b, int c) {
        self.a = a;
        self.b = b;
        self.c = c;
    }
}

class sData
{
    include MModule
    
    int c;
    
    void show() {
         printf("%d %d %d\n", self.a, self.b, self.c);
    }
}

int main(int argc, char** argv)
{
    int a[3] = {
        1,
        2,
        3
    };
    
    var data = new sData(111, 222, 333);
    
    data.show();
    
    puts("Hello World");
    
    return 0;
}
