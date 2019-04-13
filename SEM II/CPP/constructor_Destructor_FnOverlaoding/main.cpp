#include <iostream>

using namespace std;

class Line{
        double length;

    public:
        double getLength();
        void setLength();
        void setLength(double len);
        Line();
        ~Line();
    };
    Line :: Line(){
        cout << "Object Created.";
    }

    Line :: ~Line(){
        cout << "Object Destroyed.";
    }

    void Line :: setLength(double len){
        length = len;
    }

    void Line :: setLength(){
        length = 0;
    }

    double Line :: getLength(){
        return length;
    }

int main()
{
    Line line;
    line.setLength();
    cout << "\nLength of line using no arguments constructor : " << line.getLength() << endl;
    line.setLength(8.0);
    cout << "\nLength of line using parametrizes constructor : " << line.getLength() << "\n\n";
    return 0;
}
