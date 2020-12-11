#include<iostream>
#include<cstdio>

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
	char arr[] = {'P', 'A', 'P', 'P'};
	double ans = check_percent(arr, 4);
	//printf("%ld", ans);
	cout << ans;
}
