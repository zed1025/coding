/*
    https://www.codechef.com/NOV19B/problems/PHCUL
    NOT ACCEPTED
    WA
*/
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

pair<long, long> findDist(vector<pair<long, long> > v, long x, long y) {
	// find the pair in v that has the shortest distance from (x, y)
	long n = v.size();
	long p, q;
	
	long newX, newY;
	long min = INT_MAX;
	long dx, dy;
	long temp;
	
	for(int i=0; i<n; i++) {
		p = v[i].first;
		q = v[i].second;
		dx = x-p;
		dy = y-q;
		temp = dx*dx + dy*dy;
		if(temp < min) {
			newX = p;
			newY = q;
			min = temp;
		}
	}
	return make_pair(newX, newY);
}

double findFinal(vector<pair<long, long> > v) {
	int n = v.size();
	double ans = 0;
	int a, b, c, d;
	int dx, dy;
	
	for(int i=0; i<n-1; i++) {
		a = v[i].first;
		b = v[i].second;
		c = v[i+1].first;
		d = v[i+1].second;
		
		dx = a-c;
		dy = b-d;
		ans += sqrt(dx*dx + dy*dy);
	}
	return ans;
}

int main() {
	int T;
    cin >> T;
    while(T--) {
        int N, M, K;
        long x, y; //ShareChat position
        cin >> x >> y;
        cin >> N >> M >> K;
        vector<pair<long, long> > n;
        vector<pair<long, long> > m;
        vector<pair<long, long> > k;
        long p, q;
        for(int i=0; i<N; i++) {
        	cin >> p >> q;
        	n.push_back(make_pair(p, q));
		}
		for(int i=0; i<M; i++) {
        	cin >> p >> q;
        	m.push_back(make_pair(p, q));
		}
		for(int i=0; i<K; i++) {
        	cin >> p >> q;
        	k.push_back(make_pair(p, q));
		}
        
        /* program logic */
        vector<pair<long, long> > final1;
    	vector<pair<long, long> > final2;
    	
        final1.push_back(make_pair(x, y));
        final2.push_back(make_pair(x, y));
        pair<long, long> a, b;
        
        a = findDist(n, x, y);
        final1.push_back(a);
        a = findDist(m, a.first, a.second);
        final1.push_back(a);
        a = findDist(k, a.first, a.second);
        final1.push_back(a);
        double ans1 = findFinal(final1);
        
        
        b = findDist(m, x, y);
        final2.push_back(b);
        b = findDist(n, b.first, b.second);
        final2.push_back(b);
        b = findDist(k, b.first, b.second);
        final2.push_back(b);
        double ans2 = findFinal(final2);
        
        if(ans1 > ans2) {
        	cout << fixed << std::setprecision(10) <<ans2 << "\n";
		} else {
			cout << fixed << std::setprecision(10) << ans1 << "\n";
		}
	}
    return 0;
}


























//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<set>
//#include<climits>
//
//using namespace std;
//
//pair<long, long> findDist(vector<pair<long, long> > v, long x, long y) {
//	// find the pair in v that has the shortest distance from (x, y)
//	long n = v.size();
//	long p, q;
//	
//	long newX, newY;
//	long min = INT_MAX;
//	long dx, dy;
//	long temp;
//	
//	for(int i=0; i<n; i++) {
//		p = v[i].first;
//		q = v[i].second;
//		dx = x-p;
//		dy = y-q;
//		temp = dx*dx + dy*dy;
//		if(temp < min) {
//			min = temp;
//			newX = p;
//			newY = q;
//		}
//	}
//	return make_pair(newX, newY);
//}
//
//
//int main() {
//    int T;
//    cin >> T;
//    while(T--) {
//        int N, M, K;
//        long x, y; //ShareChat position
//        cin >> x >> y;
//        cin >> N >> M >> K;
//        vector<pair<long, long> > n;
//        vector<pair<long, long> > m;
//        vector<pair<long, long> > k;
//        long p, q;
//        for(int i=0; i<N; i++) {
//        	cin >> p >> q;
//        	n.push_back(make_pair(p, q));
//		}
//		for(int i=0; i<M; i++) {
//        	cin >> p >> q;
//        	m.push_back(make_pair(p, q));
//		}
//		for(int i=0; i<K; i++) {
//        	cin >> p >> q;
//        	k.push_back(make_pair(p, q));
//		}
//        
//        /* program logic */
//        vector<pair<long, long> > final;
//        double minDist=0;
//        final.push_back(make_pair(x, y));
//        pair<long, long> a;
//        pair<long, long> b;
//        a = findDist(n, x, y);
//        b = findDist(m, x, y);
//        long c, d;
//        c = (x - a.first)*(x - a.first) + (y - a.second)*(y - a.second);
//        d = (x - b.first)*(x - b.first) + (y - b.second)*(y - b.second);
//        if(c < d) {	//a is shorter
//        	x = a.first;
//        	y = a.second;
//        	final.push_back(make_pair(x, y));
//        	minDist += sqrt(c);
//        	
//        	pair<long, long> e = findDist(m, x, y);
//        	long f = (x - e.first)*(x - e.first) + (y - e.second)*(y - e.second);
//        	minDist += sqrt(f);
//        	x = e.first;
//        	y = e.second;
//        	final.push_back(make_pair(x, y));
//		} else { //b is shorter
//			x = b.first;
//        	y = b.second;
//        	final.push_back(make_pair(x, y));
//        	minDist += sqrt(d);
//        	
//        	pair<long, long> e = findDist(n, x, y);
//        	long f = (x - e.first)*(x - e.first) + (y - e.second)*(y - e.second);
//        	minDist += sqrt(f);
//        	x = e.first;
//        	y = e.second;
//        	final.push_back(make_pair(x, y));
//		}
//		
//		pair<long, long> g = findDist(k, x, y);
//		long h = (x - g.first)*(x - g.first) + (y - g.second)*(y - g.second);
//		minDist += sqrt(h);
//		x = g.first; y = g.second;
//		final.push_back(make_pair(x, y));
//		cout << minDist << "\n";
//		for(int i=0; i<final.size(); i++) {
//			cout << final[i].first << ", " << final[i].second << "\n";
//		}
//	}
//    return 0;
//}
