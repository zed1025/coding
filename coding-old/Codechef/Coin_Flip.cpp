#include<iostream>

using namespace std;

int main(){
    int t;  //number of test cases
    cin >> t;
    int g;

    int I, N, Q;

    for(int k=0; k<t; k++){     //number of test cases
        cin >> g;
        for(int i=0; i<g; i++){
            cin >> I;
            cin >> N;
            cin >> Q;

            int k = N/2;
            int l = k+1;

            if(N % 2 == 0){
                cout << k << endl;
            } else if (I == Q){
                cout << k << endl;
            } else {
                cout << l << endl;
            }
        }
    }
}


/*
    Program: Coin Flip
    URL: https://www.codechef.com/problems/CONFLIP



*/
