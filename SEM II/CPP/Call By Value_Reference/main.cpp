#include <iostream>

using namespace std;

void cbv(int a, int b){
    a += b;
    cout << "In cbv, a = " << a << ", b = " << b;
}

void cbr(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int x = 5, y = 7;
    cbv(x,y);
    cout << "In main, x = " << x << ", y = " << y;
    cbr(&x,&y);
    cout << "x is " << x << ", y is " << y;
    return 0;
}
