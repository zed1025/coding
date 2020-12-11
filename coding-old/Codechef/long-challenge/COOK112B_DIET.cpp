/*
    COOK112B_DIET.cpp
    Accepted
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<map>
#include<set>

#define sqr(a) ((a)*(a))	
 
// for vectors
#define pb push_back

// for pairs
#define fi first
#define se second

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        int arr[N+1];
        for(int i=0; i<N; i++) {
            cin >> arr[i];
        }
        int p=0; //protein initially
        bool flag = false;
        for(int i=0; i<N; i++) {
            p+=arr[i];
            if(p < K) {
                flag = true;
                cout << "NO " << i+1 << "\n";
                break;
            }
            p-=K;
        }
        if(flag) continue;
        else cout << "YES\n";
    }
    return 0;
}