#include<iostream>
using namespace std;
int main(){
    int num;

    cout << "Enter any positive integer : ";
    cin >> num;

    //if(num == 1){
      //  cout << "Factor is 1.";
    //}
    //else {
        cout << "Factors of " << num << " are : ";
        for (int i = 1 ; i <= num/2 ; i++){
            if( num % i == 0 ){
                cout << i <<" ";
            }
        }
        cout<< num;

    //}
return 0;
}
