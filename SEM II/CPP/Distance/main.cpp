#include<iostream>
#include<cmath>
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

    void subDistance(Distance d1, Distance d2){
        if(d1.feet > d2.feet){
            feet = d1.feet - d2.feet;
        }
        else
        {
            feet = d2.feet - d1.feet;
        }
        inches = abs(d1.inches - d2.inches);
        Distance(feet, inches);
    }

    void showDistance(){
        cout<<"Distance is " << feet << "\'" << inches << "\"" << endl;
    }

    void showSum(){
        cout<<"Sum is " << feet << "\'" << inches << "\"" << endl;
    }

    void showDifference(){
        cout<<"Difference is " << feet << "\'" << inches << "\"" << endl;
    }

};

int main(){
    int n1, n2, m1, m2;
    cout << "Enter first distance : ";
    cin >> n1 >> n2;
    cout << "Enter second distance : ";
    cin >> m1 >> m2;
    Distance d3, d4, d1(n1,n2), d2(m1,m2);
    d1.showDistance();
    d2.showDistance();
    d3.addDistance(d1, d2);
    d3.showSum();
    d4.subDistance(d1, d2);
    d4.showDifference();
    return 0;
}
