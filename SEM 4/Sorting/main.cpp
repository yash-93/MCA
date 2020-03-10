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
    // bubbleSorted(ar, len);
    // insertionSort(ar, len);
    // quickSort(ar, 0, len);
    mergeSort(ar, 0, len-1);
    for (int i = 0; i < len; i++){
        cout << ar[i];
    }
    return 0;
}
