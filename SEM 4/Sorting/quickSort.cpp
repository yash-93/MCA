#include <iostream>

using namespace std;

int partition(int ar[], int low, int high){
    int pivot = ar[high];
    int i = low - 1;
    for (int j = low; j <= high; j++)
    {
        if (ar[j] < pivot)
        {
            i++;
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }
    int temp = ar[i+1];
        ar[i+1] = ar[high];
        ar[high] = temp;
    return (i+1);
}

void quickSort(int ar[], int low, int high){
    if (low < high)
    {
        int pivot = partition(ar, low, high);
        quickSort(ar, low, pivot-1);
        quickSort(ar, pivot+1, high);
    }
}
