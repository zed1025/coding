/*
    Amit Kumar, Codehef December Long Challenge
    December 9, 2019
    DEC19B_WATSCORE.cpp
    Accepted
*/
#include<iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        int arr[8] = {0};
        int p, q;
        for(int i=0; i<N; i++) {
            cin >> p >> q;
            if (p >= 9) continue;
            if(arr[p-1] < q) {
                arr[p-1] = q;
            }
        }
        int total = 0;
        for(int i=0; i<8; i++) {
            total += arr[i];
        }
        cout << total << "\n";
    }
    return 0;
}