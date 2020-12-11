/*
	https://www.codechef.com/OCT19B/problems/S10E
	October 2019 Long Chanllenge Problem 1
	Problem Code S10E
*/

/*
	Somehow the c++ version does not work, python3 version got accepted
	Getting this error: SIGTSTP 
	https://discuss.codechef.com/t/sigtstp-error/16119
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define pb push_back

bool checkGood(vector<int> arr, int x) {
	sort(arr.begin(), arr.end());
	if(x<arr[0]) 
		return true;
	return false;
}

int main() {
	int T, N;
	cin >> T;
	while(T--) {
		cin >> N;
		int arr[N+1];
		int count = 0;
		for(int i=0; i<N; i++) {
			cin >> arr[i];
		}
		
		vector<int> fiveNums;
		fiveNums.pb(arr[0]);
		count++;
		bool x;
		for(int i=1; i<N; i++) {
			x = checkGood(fiveNums, arr[i]);
			if(x) count++;
			fiveNums.pb(arr[i]);
			if(fiveNums.size() > 5) {
				fiveNums.erase(fiveNums.begin());
			}
		}
		cout << count << "\n";
	}
	return 0;
}






