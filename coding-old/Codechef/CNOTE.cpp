/*
	https://www.codechef.com/problems/CNOTE
*/
#include<iostream>
#include<vector>
#include<algorithm>
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
 	int T, N, K, X, Y;
 	cin >> T;
 	while(T--) {
 		cin >>  X >> Y >> K >> N;
 		vector<pii > notebooks;
 		int a, b;
 		for(int i=0; i<N; i++) {
 			cin >> a >> b;
 			//a=P(i),pages		b=C(i),cost
 			notebooks.pb(make_pair(b, a));
 		}
 		sort(notebooks.begin(), notebooks.end());

 		int t = X-Y;

 		bool flag=true;
 		for(int i=0; i<N; i++) {
 			if(notebooks[i].fi <= K && notebooks[i].se >= t) {
 				cout << "LuckyChef\n";
 				flag = false;
 				break;
 			}
 		}
 		if(flag)
 			cout << "UnluckyChef\n";
 	}
 	return 0;
 }
