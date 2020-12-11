#include<iostream>
#include<vector>
using namespace std;

int steps(int i, int j, int p, int q) {
    int x = abs(p-i);
    int y = abs(q-j);
    return max(x, y);
}

int solution( vector<int> A, vector<int> B) {
    int count=0;
    for(int i=0; i<A.size()-1; i++) {
        count+=steps(A[i], B[i], A[i+1], B[i+1]);
    }
    return count;
}

int main() {
    
}