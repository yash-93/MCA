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

    /* Job Sequencing
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Max profit sequence of jobs : ";
    jobSequencing(arr, n);*/

    /* Prims
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    primsMST(graph);*/

    /* Dijkstra */
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    dijkstra(graph, 0);

    return 0;
}
