#include <iostream>

using namespace std;

class Circle{
    float radius;
public:
    Circle(float r){
        radius = r;
    }

    float getRadius(){
        return radius;
    }
};

bool Circle :: operator==(Circle a){
    this->radius = a.radius;
}

int main()
{

    return 0;
}
