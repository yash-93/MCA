#include<iostream>
using namespace std;
int main(){
    int n, flag = 0, val = 3, count = 2;
    cout << "Enter number of prime numbers :: ";
    cin >> n;
    if(n >= 1){
        cout<<"2 ";
    }else if(n < 0){
        cout<<"Ente rpositive integer";
    }
    while(count <= n){
        val++;
        for(int i = 2 ; i <= val/2 ; i++ ){
            if(val % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << val << " ";
            count++;
        }
        flag = 0;
    }
    return 0;
}
