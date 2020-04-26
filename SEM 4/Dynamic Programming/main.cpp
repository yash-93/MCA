#include <iostream>
#include "dynamicprogramming.h"
using namespace std;

int main()
{
    /*int num;
    cout << "Enter the positive integer : ";
    cin >> num;
    cout << fib(num);*/

    //cout << MultiStageGraph();


    /*int graph[V][V] = { {0, 3, INF, 7},
                        {8, 0, 2, INF},
                        {5, INF, 0, 1},
                        {2, INF, INF, 0} };
    FloydWarshall(graph);*/

    /*Matrixchain
    int arr[] = {5, 4, 6, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, size);*/

    //Bellman Ford
    BellmanFord();
    return 0;
}
