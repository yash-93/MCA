#include <iostream>

using namespace std;

class Increment {
    int x, y;

public:
    void getdata(int a, int b){
        x = a;
        y = b;
    }

    void display(){
        cout << x << " " <<y;
    }

    void operator++();
};

void Increment :: operator++(){
    x = ++x;
    y = ++y;
}

int main()
{
    Increment o;
    o.getdata(5, 6);
    o.display();
    ++o;
    cout << endl;
    o.display();
    return 0;
}
