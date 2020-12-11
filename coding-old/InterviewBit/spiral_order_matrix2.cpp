#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
    int p, q, r, s;
    p = 0, q = A.size()-1, r = 0, s = A[0].size()-1;
    
    int dir=0;
    while(p<=q && r<=s) {
        switch (dir)
        {
        case 0:
            for(int i=r; i<=s; i++) {
                result.push_back(A[p][i]);
            }
            p++;
            break;
        case 1:
            for(int i=p; i<=q; i++) {
                result.push_back(A[i][s]);
            }
            s--;
            break;
        case 2:
            for(int i=s; i>=r; i--) {
                result.push_back(A[q][i]);
            }
            q--;
            break;
        case 3:
            for(int i=q; i>=p; i--) {
                result.push_back(A[i][r]);
            }
            r++;
            break;
        default:
            break;
        }
        dir = (dir+1)%4;
    }

    return result;
}

int main() {
    
    int m, n, temp1, temp2, temp3;
    cout << "Enter the dimensions of the matrix: ";
    cin >> m >> n;
    vector<vector<int> > matrix(m);
    cout << "Enter the matrix: ";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> temp1;
            matrix[i].push_back(temp1);
        }
    }

    cout << "\nInput matrix is: \n";
    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }cout << endl;
    }cout << endl;

    vector<int> result = spiralOrder(matrix);
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    } cout << endl;

    return 0;
}