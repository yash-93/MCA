#include <iostream>

using namespace std;

void selectionSort(int ar[], int len){
    for (int i = 0; i < len; i++){
        for (int j = i+1; j < len; j++){
            if (ar[i] > ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++){
        cout << ar[i];
    }
}
