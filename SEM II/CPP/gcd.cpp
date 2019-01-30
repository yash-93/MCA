#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter 3 integers : ";
    cin >> a >> b >> c;

    while(a!=b){
        if(a > b)
            a = a - b;
            else
            b = b - a;
    }

    while(a!=c){
        if(a > c)
            a = a - c;
            else
            c = c - a;
    }

    cout << "GCD of " << a << ", " << b << ", " << c << " is : " << a;

    return 0;
}
