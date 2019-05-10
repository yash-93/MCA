#include <iostream>

using namespace std;

class Line {
    double length;

public:
    double getLength();
    void setLength();
    void setLength(double len);
    Line();
    ~Line();
};

Line :: Line(void){
    cout << "Object Created";
}

Line :: ~Line(void){
    cout << "Object Destroyed";
}

void Line :: setLength(){
    length = 0;
}

void Line :: setLength(double len){
    length = len;
}

double Line :: getLength(){
    return length;
}

int main()
{
    Line line;
    line.setLength();
    cout << "Length of line : " << line.getLength();
    line.setLength(8.0);
    cout << "Length of line : " << line.getLength();

    return 0;
}
