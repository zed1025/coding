#include<iostream>

using namespace std;

/*
	Problem Link: https://www.codechef.com/problems/NUKES
*/

int main(){
	long A, N, K;
	cin >> A >> N >> K;
	
	while(K--){
		cout << A%(N+1) << " ";
		A = A/(N+1);
	}
	cout << endl;
	
	return 0;
}
