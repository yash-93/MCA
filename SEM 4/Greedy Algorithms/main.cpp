#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;

};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n){
    sort(arr, arr+n, cmp);
    int currentWeight = 0;
    double finalvalue = 0.0;

    for (int i = 0; i < n; i++){
        if (currentWeight + arr[i].weight <= W){
            currentWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else
        {
            int remain = W -currentWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

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
