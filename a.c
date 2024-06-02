#include <neo-c.h>

class sData
{
    int x;
    int y;
    
    sData*% initialize(sData*% self, int x, int y)
    {
        self.x = x;
        self.y = y;
        
        return self;
    }
    
    void show(sData* self)
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    return 0;
}

