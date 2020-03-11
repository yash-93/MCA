#include <iostream>
#include "Searching.h"

using namespace std;

int main()
{
    int len, *ar, ele;
    cout << "Enter the array length : ";
    cin >> len;
    ar = new int[len];
    cout << "\nEnter the array : ";
    for (int i = 0; i < len; i++){
        cin >> ar[i];
    }
    cout << "\nEnter the element to be searched : ";
    cin >> ele;
    // int index = linearSearch(ar, len, ele);
    int index = binarySearch(ar, 0, len -1, ele);
    if (index == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << index;
    return 0;
}
