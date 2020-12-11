/*
	Problem Link: https://www.codechef.com/COOK101B/problems/YVNUM
	Time Limit Exceeded
*/

#include<iostream>
#include<limits>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

const long X = pow(10, 9) + 7;

void leftrotate(string &s) { 
    reverse(s.begin(), s.begin()+1); 
    reverse(s.begin()+1, s.end()); 
    reverse(s.begin(), s.end()); 
} 

int main(){
	int T, N;
	long long val=0;
	cin >> T;
	while(T--){
		cin >> N;
		val = 0;
		string S;
		string s = to_string(N);
		S = s;
		for(int i=0; i<N-1; i++){
			leftrotate(s);
			S += s;
		}
		val = stoi(s);
		cout << val%X << endl;
	}
}
