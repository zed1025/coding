#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int T, N, temp1, temp2;
	cin >> T;
	for(int i=0; i<T; i++){
		cin >> N;
		if(N <= 2){
			cout << "1 0 0" << endl;
		} else if(N <= 10){
			cout << "0 1 0" << endl;
		}else if(N <= 26){
			cout << "0 0 1" << endl;
		} else {
			temp1 = N%26;
			temp2 = N/26;
			if(temp2 <= 2){
				cout << pow(2, temp1) << " 0 0" << endl;
			} else if(temp2 <= 10){
				cout << "0 " << pow(2, temp2) << " 0" << endl;
			} else {
				cout << "0 0 " << pow(2, temp2) << endl;
			}
		}
	}
}
