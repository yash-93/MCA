#include <bits/stdc++.h>
#include "dynamicprogramming.h"
using namespace std;

void printSolution(int dist[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout<<"INF"<<"     ";
            else
                cout<<dist[i][j]<<"     ";
        }
        cout<<endl;
    }
}

void FloydWarshall(int graph[V][V]){
    int dist[V][V], i, j, k;
    for (i=0; i<V; i++)
        for (j=0; j<V; j++)
            dist[i][j] = graph[i][j];
    //printSolution(dist);

    for (k=0; k<V; k++){
        for (i=0; i<V; i++){
            for (j=0; j<V; j++){
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
        cout << "\n******" << k+1 << "******\n";
        //printSolution(dist);
    }

    printSolution(dist);
}
