#include <iostream>

using namespace std;

void cbv(int a, int b){
    a += b;
    cout << "In cbv, a = " << a << "and b = " << b << endl;
}

void cbr(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int x = 5, y = 7;
    cbv(x, y);
    cout << "(Call By Value) In main, x = " << x << " y = " << y;
    cbr(&x, &y);
    cout << "\n (Call By Reference) In main, x = " << x << " y = " << y;
    return 0;
}
