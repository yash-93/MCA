#include<bits/stdc++.h>
using namespace std;

int no_of_houses(int N, int A[], int B){
    sort(A, A+N);
    int currentValue = 0;
    int no_of_houses = 0;

    for (int i=0; i<N; i++){
        if(A[i] <= B)
			{
				no_of_houses++;
				B -= A[i];
			}
    }
    return no_of_houses;
}
