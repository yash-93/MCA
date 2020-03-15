#include <iostream>
#include <bits/stdc++.h>
#include "greedyalgos.h"
using namespace std;

int main()
{
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

    cout << fractionalKnapsack(W, arr, n);
    return 0;
}
