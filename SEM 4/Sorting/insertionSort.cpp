#include <iostream>

using namespace std;

void insertionSort(int ar[], int len){
    int i, key;
    for (int j = 1; j < len; j++){
        key = ar[j];
        i = j - 1;
        while ( i >= 0 && ar[i] > key)
        {
            ar[i+1] = ar[i];
            i -= 1;
        }
        ar[i+1] = key;
    }
    for (int i = 0; i < len; i++){
        cout << ar[i];
    }
}
