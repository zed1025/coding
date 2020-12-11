// https://www.codechef.com/problems/LEPERMUT
#include<iostream>

using namespace std;

int countInversions(int n, int *arr) {
	int count = 0;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] > arr[j]) count++;
		}
	}
	return count;
}

int countLocalInversions(int n, int *arr) {
	int count = 0;
	for(int i=0; i<n-1; i++) {
		if (arr[i] > arr[i+1]) count++;
	}
	return count;
}

int main() {
	int t, n;
	cin >> t;
	
	int *arr;
	while(t--) {
		cin >> n;
		arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		int a = countInversions(n, arr);
		int b = countLocalInversions(n, arr);
		
		if (a == b) {
			cout << "YES\n";
			continue;
		} 
		cout << "NO\n";
	}
	return 0;
}
