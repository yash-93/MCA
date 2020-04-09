#include <bits/stdc++.h>
using namespace std;

#define n 8
#define INF INT_MAX

int MultiStageGraph(){
    /*int stages = 4, min_val = 1234;
    int n = 8;
    int cost[n+1], d[n+1], path[stages];*/

    int dist[n];
    int graph[n][n] =
      {{INF, 2, 1,3, INF, INF, INF, INF},
       {INF, INF, INF, INF, 2, 3, INF, INF},
       {INF, INF, INF, INF, 6, 7, INF, INF},
       {INF, INF, INF, INF, 6, 8, 9, INF},
       {INF, INF, INF, INF, INF, INF, INF, 6},
       {INF, INF, INF, INF, INF, INF, INF, 4},
       {INF, INF, INF, INF, INF, INF, INF, 5}};

    dist[n-1] = 0;

    for(int i=n-2; i>=0; i--){
        dist[i] = INF;
        for (int j=i; j<n; j++){
            if (graph[i][j] == INF){
                continue;
            }
            dist[i] = min(dist[i], graph[i][j]+dist[j]);
        }
    }
    return dist[0];
}
