#include<iostream>

using namespace std;

int main() {
	int t;
	while(true) {
		cin >> t;
		if(t == 42) {
			break;
		} else {
			cout << t << '\n';
		}	
	}
	return 0;
}
