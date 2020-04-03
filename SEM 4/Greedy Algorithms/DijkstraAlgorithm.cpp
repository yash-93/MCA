#include <bits/stdc++.h>
using namespace std;
#define V 5

int minDistance(int d[], bool sptSet[]){
    int min = INT_MAX, min_index;
    for (int v=0; v<V; v++){
        if (sptSet[v]==false && d[v]<=min){
            min = d[v];
            min_index = v;
        }
    }
    return min_index;
}

void printSol(int d[])
{
    cout << "Vertex \t\t Distance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i <<"\t\t " << d[i] <<"\n";
}

void dijkstra(int graph[V][V], int src){
    int d[V];
    bool sptSet[V];

    for (int i=0 ; i<V; i++){
        d[i] = INT_MAX;
        sptSet[i] = false;
    }

    d[src] = 0;

    for (int count=0; count<V-1; count++){
        int u = minDistance(d, sptSet);
        sptSet[u] = true;

        for (int v=0; v<V; v++){
            if (!sptSet[v] && graph[u][v] && d[u] != INT_MAX && d[u]+graph[u][v] < d[v]){
                d[v] = d[u] + graph[u][v];
            }
        }
    }

    printSol(d);
}

