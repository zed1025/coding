/*
    function computes 3^n in (c*log n) time
*/

#include<iostream>

using namespace std;

int three(int n) {
    if (n==0) {
        return 1;
    } else if (n%2 == 0) {
        return three(n/2)*three(n/2);
    } else {
        return three(n/2)*three(n/2)*3;
    }
}

int main() {
    int t = three(4);
    int q = three(5);
    cout << t << endl;
    cout << q << endl;

    return 0;
}