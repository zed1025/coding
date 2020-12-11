/*
    Amit Kumar, Codehef December Long Challenge
    codechef_DEC19B_BINADD.cpp
    https://www.geeksforgeeks.org/stdbitsetto_ullong-and-stdbitsetto_ulong/
    Partially Accepted
*/
#include<iostream>
#include<bitset>
#include<vector>
#include<limits>

using namespace std;

int main() {
    int T;
    cin >> T;
    string A, B;
    while(T--) {
        cin >> A;
        cin >> B;

        bitset<numeric_limits<unsigned long long>::digits> a(A);
        bitset<numeric_limits<unsigned long long>::digits> b(B);
        bitset<numeric_limits<unsigned long long>::digits> u;
        bitset<numeric_limits<unsigned long long>::digits> v;
        if(b.to_ullong() == 0) {
            cout << "0\n";
            continue;
        }
        long count = 0;

        while(b.to_ullong() > 0) {
            count++;
            u = a ^ b;
            v = a & b;
            a = u;
            b = v << 1;
        }
        cout << count << "\n";
    }
    return 0;
}