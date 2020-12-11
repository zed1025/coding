// https://www.codechef.com/problems/ERROR
#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	string feedback;
	string a = "101", b = "010";
	string x;
	bool flag = true; //true means bad
	
	while (t--) {
		cin >> feedback;
		
		int pos1 = feedback.find("101");
		int pos2 = feedback.find("010");
		if (pos1 == string::npos && pos2 == string::npos) {
			cout << "Bad\n";
			continue;
		}
		cout << "Good\n";
		
//		for(int i=0; i<feedback.length(); i++) {
//			x = feedback.substr(i, 3);
//			if (x == a || x == b) {
//				printf("Good");
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			cout << "Bad\n";
//		}
	}	
	return 0;
}
