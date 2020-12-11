#include<iostream>

using namespace std;

double check_percent(char *s, int n) {
	double per;
	int P_s=0;
	for(int i=0; i<n; i++) {
		if (s[i] == 'P') {
			P_s++;
		}
	}
	return (double)P_s/(double)n;
}

int main() {
	int t, d, count;
	cin >> t;
	
	char *arr;
	while (t--) {
		count = 0;
		cin >> d;
		arr = new char[d];
		for(int i=0; i<d; i++) {
			cin >> arr[i];
		}
		
		if (d >= 5) {
			int x = d-2;
			for(int i=2; i<x; i++) {
				if(arr[i] == 'A') {
					if(arr[i-1] == 'P' && arr[i-2] == 'P' ||
					   arr[i+1] == 'P' && arr[i+2] == 'P') {
					   	count++;
					   	arr[i] = 'P';
					}
				}
				if(check_percent(arr, d) >= 0.75) {
					break;
				}
			}
		} else {
			if(check_percent(arr, d) >= 0.75) {
				cout << "0\n";
				continue;
			}else {
				cout << "-1\n";
				continue;
			}
		}
		cout << count << "\n";
	}
}
