#include <iostream>
using namespace std;

int main(){
    int T, N, **M, **Tp;
    cin >> T;

    for (int i=0; i<T; ++i){            // Main Loop starts
        cin >> N;
        M = new int*[N];
        Tp = new int*[N];
        for(int j = 0; j < N; ++j){
            M[j] = new int[N];
            Tp[j] = new int[N];
        }

        for (int m=0; m<N; m++){
            for (int n=0; n<N; ++n){
                cin >> M[m][n];
            }
        }

        for (int m=0; m<N; m++){
            for (int n=0; n<N; ++n){
                Tp[n][m] = M[m][n];
            }
        }


        int k = 0, r = 0, c = 0, x;

        for (int j=0; j<N; ++j)
            k += M[j][j];


        for (int p=0; p<N; p++)
            {
            bool incr = false, incc = false;
            for (int q=0; q<N-1; q++)
            {
                for (x=q; x<N-1; x++)
                {
                    if (M[p][q] == M[p][x+1])
                    {
                        incr = true;
                    }
                    if (Tp[p][q] == Tp[p][x+1])
                    {
                        incc = true;
                    }
                }
            }
            if (incr)
                r += 1;

            if (incc)
                c += 1;
        }




        cout << "Case #" << i+1 << ": " << k << " " << r << " " << c << endl;

    }   // Main Loop ends

    return 0;
}
