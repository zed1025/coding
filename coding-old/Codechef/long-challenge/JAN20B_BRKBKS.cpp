/*
    Amit Kumar
    Codechef January 2020 Long Challenge
    JAN20B BRKBKS
    https://www.codechef.com/JAN20B/problems/BRKBKS
    
*/

#include<iostream>

using namespace std;

int hit_count(int w1, int w2, int w3, int s){
    int b = w1+w2, c = w2+w3;
    int hits=0;
    if(s >= b) {
        hits++;
        return hits+1;
    } else {
        hits++;
        if(s>=c) {
            return hits+1;
        } else {
            return hits+2;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int S, W1, W2, W3;
        cin >> S >> W1 >> W2 >> W3;

        if(S >= (W1 + W2 + W3)) {
            cout << "1\n";
        } else {
            int a = hit_count(W1, W2, W3, S);
            int b = hit_count(W3, W2, W1, S);
            
            if(a < b) {
                cout << a << "\n";
            }else {
                cout << b << "\n";
            }
        }
    }
    return 0;
}

