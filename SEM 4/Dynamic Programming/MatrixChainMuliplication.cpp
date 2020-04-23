#include <bits/stdc++.h>
using namespace std;

int matChainMul(){
    int n = 5;
    int P[] = {5, 4, 6, 2, 7};
    int m[5][5] = {0};
    int s[5][5] = {0};
    int j, min, q;
    for(int d=1; d<n-1; d++){
        for(int i=1; i<n-d; i++){
            j = i+d;
            min = 32767;
            for(int k=1; k<=j-1; k++){
                q = m[i][k] + m[k+1][j] + P[i-1] * P[k] * P[j];
                if(q<min){
                    min = q;
                    s[i][j] = k;
                }
            }
            m[i][j] = min;
        }
    }
    return m[1][n-1];
}
