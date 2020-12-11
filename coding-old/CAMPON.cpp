/*
	Problem Link: https://www.codechef.com/COOK101B/problems/CAMPON
*/

#include<iostream>
#include<limits>
#include<cstdlib>

using namespace std;

struct deadline{
	int a,b;
};

int main(){
	int T, D, Q, temp;
	cin >> T;
	while(T--){
		cin >> D;
		deadline D_s[D];
		for(int i=0; i<D; i++){
			cin >> D_s[i].a >> D_s[i].b;
		}
		cin >> Q;
		deadline Q_s[Q];
		for(int i=0; i<Q; i++){
			cin >> Q_s[i].a >> Q_s[i].b;
		}
		
		
		for(int i=0; i<Q; i++){
			temp = 0;
			for(int j=0; j<D; j++){
				if(D_s[j].a <= Q_s[i].a ){
					temp += D_s[j].b;
				} else {
					break;
				}
			}
			if(Q_s[i].b <= temp){
				cout << "Go Camp" << endl;
			} else {
				cout << "Go Sleep" << endl;
			}
		}
	}
}
