#include<iostream>
#include<vector>
#define pb push_back

using namespace std;

//counts the number of steps between two points
int steps(int i, int j, int p, int q) {
    int x = abs(p-i);
    int y = abs(q-j);
    return max(x, y);
}

//returns the answer
int coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0; i<A.size()-1; i++) {
        count+=steps(A[i], B[i], A[i+1], B[i+1]);
    }
    return count;
}

int main() {
    int n; //number of points
    cin >> n;
    vector<int> A;
    vector<int> B;

    int a, b;
    for(int i=0; i<n; i++) {
        //enter pairs
        cin >> a >> b;
        A.pb(a);
        B.pb(b);
    }

    int answer = coverPoints(A, B);
    cout << "Total Steps: " << answer << endl;

    return 0;
}

/*
    Problem
    You are in an infinite 2D grid where you can move in any of the 8 directions :
    (x,y) to
        (x+1, y),
        (x - 1, y),
        (x, y+1),
        (x, y-1),
        (x-1, y-1),
        (x+1,y+1),
        (x-1,y+1),
        (x+1,y-1)
    You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

    Example
    Input : [(0, 0), (1, 1), (1, 2)]
    Output : 2

    Explanation
    It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
*/
