/*
	Amit Kumar
	12 Nov 2019
*/

#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
        int N;
		cin >> N;
		int arr[N+1];
		for(int i=0; i<N; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+N, greater<int>());
		if(N%2 == 0) {
			for(int i=0; i<N; i+=2) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		} else {
			for(int i=0; i<N-1; i+=2) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		for(int i=0; i<N; i++) {
			cout << arr[i] << " ";
		}cout << "\n";
	}
    return 0;
}

