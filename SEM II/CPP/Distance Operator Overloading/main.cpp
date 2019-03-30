#include<iostream>
using namespace std;
#define PI 3.14

class Circle{
    private:
        int r;

    public:
        void set_radius(int rad){
            r = rad;
        }

        void operator*();
};

int main(){
    int rad;
    float area, circumference;
    cout << "Enter the radius of the circle : ";
    cin >> rad;
    Circle c(rad);
    c.set_radius(rad);
    cout << "\nArea is : " << c.area();
    cout << "\nCircumference is " << c.circumference();
    return 0;
}
