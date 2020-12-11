#include<iostream>
#include<vector>
#define pb push_back

using namespace std;

void printSpiral(vector<vector<int> > mat, int m, int n) {
    for(vector<int> row: mat) {
        for(int val: row) {
            cout << val << " ";
        }cout << endl;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    int temp;
    vector<vector<int> > mat;

    for(int i=0; i<m; i++) {
        vector<int> v;
        for(int j=0; j<n; j++) {
            cin >> temp;
            v.pb(temp);
        }
        mat.pb(v);
    }

    printSpiral(mat, m, n);

}
