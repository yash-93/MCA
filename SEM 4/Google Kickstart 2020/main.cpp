#include <iostream>
#include <bits/stdc++.h>
#include "myheader.h"

using namespace std;

int main()
{
    int n, a[10000], B, t, res[t];
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> B;
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        res[i] = no_of_houses(n, a, B);
    }
    for (int i=0; i<t; i++){
        cout << "Case #" << i << ": " << res[i] << endl;
    }
    return 0;
}
