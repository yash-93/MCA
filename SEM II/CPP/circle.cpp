#include<iostream>
using namespace std;
#define PI 3.14

class Circle{
    private:
        int r;

    public:
        Circle(int rad){
            r = rad;
        }

        void set_radius(int rad){
            r = rad;
        }

        float area(){
            return (PI*r*r);
        }

        float circumference(){
            return (2*PI*r);
        }
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
