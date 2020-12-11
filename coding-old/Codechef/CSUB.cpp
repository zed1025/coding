#include<iostream>
#include<cstring>
/*
	https://www.codechef.com/problems/CSUB
*/

using namespace std;

typedef long long ll;

int main() {
	ll t, N;
	cin >> t;
	while(t--) {
		cin >> N;
		string str;
		cin >> str;
		ll cnt=0;
		for(int i=0; i<str.length(); i++) {
			if(str[i] == '1') cnt++;
		}
		cnt = (cnt*(cnt+1))/2;
		cout << cnt << "\n";
	}
	return 0;
}
