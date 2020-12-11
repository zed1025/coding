/*
	Amit Kumar
	14 October 2018, @3:31PM
	Problem Link: https://www.codechef.com/OCT18B/problems/CHSERVE
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int T; //number of test cases
	cin >> T;
	int P1, P2 /*current number of points scored by Chef and Cook*/, 
		K/*player who serves changes after K points*/;
	int total = 0;
	for(int i=0; i<T; i++){
		//chef starts first when the game begins
		cin >> P1 >> P2 >> K;
		total = P1 + P2;
		
		total = total/K;
		
		if(total % 2 == 0){
			cout << "CHEF" << endl;
		} else {
			cout << "COOK" << endl;
		}
	}
	return 0;
}
