#include <iostream>

using namespace std;

bool swapped;
void bubbleSort(int ar[], int len)
{
    for (int i = 0; i < len; i++)
    {
        swapped = false;
        for (int j = 0; j < len; j++)
        {
            if (ar[j] > ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;

    }

    cout << "Sorted Array : ";
    for (int i = 0; i < len; i++){
        cout << ar[i];
    }
}
