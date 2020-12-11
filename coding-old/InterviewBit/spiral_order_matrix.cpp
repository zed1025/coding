/*
Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Given the following matrix:
[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return
[1, 2, 3, 6, 9, 8, 7, 4, 5]
 */

#include<iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter dimension of matrix(m, n): ";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter matrix: ";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix entered is: \n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    int dir = 0;
    int temp = m*n;
    int p, q, r, s;
    p = 0, q = m-1, r = 0, s = n-1;
    // while(temp--) {
    while(p<=q && r<=s){
        switch (dir) {
        case 0:
            for(int i=r; i<=s; i++){
                cout << arr[p][i] << " ";
            }
            p++;
            break;
        case 1:
            for(int i=p; i <= q; i++) {
                cout << arr[i][s] << " ";
            }
            s--;
            break;
        case 2:
            for(int i=s; i >= r; i--) {
                cout << arr[q][i] << " ";
            }
            q--;
            break;
        case 3:
            for(int i=q; i >= p; i--) {
                cout << arr[i][r] << " ";
            }
            r++;
            break;
        default:
            break;
        }
        dir = (dir+1)%4;
    }

    return 0;
}