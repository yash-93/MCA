#include <iostream>
#include <bits/stdc++.h>
#include "greedyalgos.h"
using namespace std;

int main()
{
    /* Fractional Knapsack
    int W = 15, n;
    cout << "Enter number of items : ";
    cin >> n;
    Item arr[n];
    cout << "Enter value and weight for each item.";

    for (int i = 0; i < n; i++){
        cout << "\nFor Item " << i+1;
        cout << "\n\t value : "; cin >> arr[i].value;
        cout << "\t weight : "; cin >> arr[i].weight;
    }
    cout << fractionalKnapsack(W, arr, n);*/

    // Job Sequencing
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max profit sequence of jobs : ";
    jobSequencing(arr, n);

    return 0;
}
