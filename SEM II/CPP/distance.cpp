#include<iostream>
using namespace std;

class Distance{
private:
    float feet, inches;

public:
    Distance(){
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i){
        if(i >= 12){
            inches = i % 12;
            feet = f + (i / 12);
        }
        else
        {
            feet = f;
            inches = i;
        }
    }

    void addDistance(Distance d1, Distance d2){
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        Distance(feet, inches);
    }

    void showDistance(){
        cout<<"Distance is " << feet << "\'" << inches << "\"" << endl;
    }
};

int main(){
    Distance d3, d1(10,11), d2(9,1);
    d1.showDistance();
    d2.showDistance();
    d3.addDistance(d1, d2);
    d3.showDistance();
    return 0;
}
