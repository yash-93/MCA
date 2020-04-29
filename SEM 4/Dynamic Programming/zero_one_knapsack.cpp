#include <bits/stdc++.h>
using namespace std;

zeroOneKnapsack(){
    int P[5] = {0,1,2,5,6};
    int wt[5] = {0,2,3,4,5};
    int m = 8, n = 4;
    int k[5][9];

    for(int i=0; i<=n; i++){
        for(int w=0; w<=m; w++){
            if(i==0 || w==0)
                k[i][w] = 0;
            else if(wt[i]<=w)
                k[i][w] = max(P[i]+k[i-1][w-wt[i]], k[i-1][w]);
            else
                k[i][w] = k[i-1][w];
        }
    }
    cout << k[n][m];
}
