#include <bits/stdc++.h>
using namespace std;

void MultiStageGraph(){
    int stages = 4, min_val;
    int n = 8;
    int cost[n+1], d[n+1], path[stages];
    int C[n+1][n+1] = { {0,0,0,0,0,0,0,0,0},
                        {0,0,2,1,3,0,0,0,0},
                        {0,0,0,0,0,2,3,0,0},
                        {0,0,0,0,0,6,7,0,0},
                        {0,0,0,0,0,6,8,9,0},
                        {0,0,0,0,0,0,0,0,6},
                        {0,0,0,0,0,0,0,0,4},
                        {0,0,0,0,0,0,0,0,5},
                        {0,0,0,0,0,0,0,0,0} };

    cost[n] = 0;

    for(int i=n-1; i>=1; i--){
        min_val = 32767;
        for (int k=n-1; k<=n; k++){
            if (C[i][k]!=0 && C[i][k]+cost[k] < min_val){
                min_val = C[i][k]+cost[k];
                d[i] = k;
            }
        }
        cost[i] = min_val;
    }

    path[1] = 1;
    path[stages] = n;
    for (int i=2; i<stages; i++){
        path[i] = d[path[i-1]];
    }

    for (int i=1; i<=stages; i++){
        cout << path[i] << " ";
    }

}
