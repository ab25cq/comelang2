#include <neo-c.h>

module MModule
{
    int a;
    int b;
}

class sData
{
    include MModule;
    
    new(int a, int b) {
        self.a = a;
        self.b = b;
    }
    
    void show() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc, char** argv)
{
    var data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
