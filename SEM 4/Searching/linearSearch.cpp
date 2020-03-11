#include <iostream>

using namespace std;

int linearSearch(int ar[], int len, int ele){
    for (int i = 0; i < len; i++){
        if (ar[i] == ele)
            return i;
    }
    return -1;
}
