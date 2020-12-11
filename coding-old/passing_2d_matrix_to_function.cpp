#include<iostream>
#include<vector>

using namespace std;

void printSpiral(int *mat, int m, int n) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << *((mat+i*n)+j) << " ";
        }cout << endl;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    int temp;
    int mat[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    printSpiral((int*)mat, m, n);

}
