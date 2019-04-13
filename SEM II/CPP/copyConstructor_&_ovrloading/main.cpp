#include <iostream>

using namespace std;

class Area{
    int length, breadth;
public:
    Area(){
        length = breadth = 1;
    }

    Area(int len, int bre){
        length = len;
        breadth = bre;
    }

    int getArea(){
        return (length*breadth);
    }
};

int main()
{
    Area A1, A2(5,6);
    cout << "First area is " << A1.getArea();
    cout << "\nSecond area is " << A2.getArea();
    Area A3 = A2;
    cout << "\nThird area is " << A3.getArea();
    return 0;
}
