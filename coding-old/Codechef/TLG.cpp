/*
	Amit Kumar
	12 Nov 2019
	https://www.codechef.com/problems/TLG
*/

#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<cmath>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<set>
#include<numeric>

using namespace std;

int main() {
	int N;
    cin >> N;
	vector<pair<int, int> > v;
	int a, b;
	cin >> a >> b;
	pair<int, int> s = make_pair(a, b);
	v.push_back(s);
    for(int i=1; i<N; i++) {	//computes the cumulative array
		cin >> a >> b;
		pair<int, int> p;
		p.first = v[i-1].first + a;
		p.second = v[i-1].second + b;
		v.push_back(p);
	}
	vector<int> v1, v2;
	for(int i=0; i<N; i++) {
		if(v[i].first > v[i].second) {
			v1.push_back(abs(v[i].first - v[i].second));
		} else {
			v2.push_back(abs(v[i].first - v[i].second));
		}
	}
	int s1 = accumulate(v1.begin(), v1.end(), 0);
	int s2 = accumulate(v2.begin(), v2.end(), 0);
	if(s1 > s2) {
		cout << "1" << " " << *max_element(v1.begin(), v1.end()) << "\n";
	} else {
		cout << "2" << " " << *max_element(v2.begin(), v2.end()) << "\n";
	}
    return 0;
}

