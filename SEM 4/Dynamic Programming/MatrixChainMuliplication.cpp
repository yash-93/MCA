#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int P[], int size){
    int m[size][size];
    int i,j, k, L, q;

    for (i = 1; i < size; i++)
        m[i][i] = 0;

    for(L=2; L<size; L++){
        for(i=1; i<size-L+1; i++){
            j = i+L-1;
            m[i][j] = INT_MAX;

            for(k=i; k<=j-1; k++){
                q = m[i][k] + m[k+1][j] + P[i-1] * P[k] * P[j];
                if(q<m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][size-1];
}
