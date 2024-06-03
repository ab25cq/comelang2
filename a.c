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

class sData2 extends sData
{
    int z;
    
    sData2*% initialize(sData2*% self, int x, int y, int z)
    {
        self.x = x;
        self.y = y;
        self.z = z;
        
        return self;
    }
};

interface sDataRun
{
    void show();
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    sData2*% data2 = new sData2(1, 2, 3);
    
    data2.show();
    
    sDataRun*% inf = new sData2(1,2,3) implements sDataRun;
    
    inf.show();
    
    return 0;
}

