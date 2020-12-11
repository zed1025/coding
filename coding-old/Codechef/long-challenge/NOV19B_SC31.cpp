/*
	codechef_NOV19B_SC31.cpp
	https://www.codechef.com/NOV19B/problems/SC31#
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
 
// for vectors
#define pb push_back

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
	int T, N;
	cin >> T;
	while(T--) {
		cin >> N;
		vector<bitset<10> > strings;
		string temp;
		for(int i=0; i<N; i++) {
			cin >> temp;
			bitset<10> bset(temp);
			strings.pb(bset);
		}

		bitset<10> ans = strings[0];
		for(int i=1; i<N; i++) {
			ans ^= strings[i];
		}
		cout << ans.count() << "\n";
	}
	return 0;
}
