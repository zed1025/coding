#include<stdio.h>
#include<math.h>

// https://www.codechef.com/problems/PRIME1

int isPrime(int n) {
	int x = (int)sqrt(n);
	int i;
	for( i=2; i<=x; ++i) {
		if(n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int t, m, n, i;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &m, &n);
		for(i=m; i<=n; i++) {
			if (i == 1) {
				continue;
			}
			if(isPrime(i) == 1){
				printf("%d\n", i);
			}
		}
	}

	//printf("%d %d %d", isPrime(4), isPrime(7), isPrime(31));
}
