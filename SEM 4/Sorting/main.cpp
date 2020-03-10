#include <iostream>
#include "sorting.h"

using namespace std;

int main()
{
    int len, *ar;
    cout << "Enter the array length : ";
    cin >> len;
    ar = new int[len];
    cout << "\nEnter the array : ";
    for (int i = 0; i < len; i++){
        cin >> ar[i];
    }
    // selectionSort(ar, len);
    bubbleSorted(ar, len);
    return 0;
}
