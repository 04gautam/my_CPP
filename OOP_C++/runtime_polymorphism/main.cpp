#include <iostream>

using namespace std;

class shape{
    virtual void draw(){
    cout<< "Drawing a shape: "<<endl;
    }

};
class Cricle:public shape{
public:
    void drow() override{
    cout<< "drawing a circle:"<<endl;
    }

};

int main()
{
    shape s1;

    s1.draw();

    return 0;
}
