#include <neo-c.h>

class sData
{
    int x;
    
    new(int x) {
        self.x = x;
    }
    
    void show() {
        printf("%d\n", self.x);
    }
    
    void call() {
        puts("CALL");
    }
}

struct sData2 extends sData
{
    int x;
    int y;
};

class sData2 extends sData
{
    new(int x, int y) {
        self.x = x;
        self.y = y;
    }
    
    void show() {
        printf("%d %d\n", self.x, self.y);
    }
}

interface Inf
{
    void show();
    void call();
}


int main(int argc, char** argv)
{
    var inf = new sData2(111, 222) implements Inf;
    
    inf.show();
    inf.call();
    
    return 0;
}
