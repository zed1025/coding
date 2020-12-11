#include<iostream>
#include<cmath>

using namespace std;

int main(){
	//using bitwise operators in c++

	int y = 21;		//y: 10101
	cout << y << endl;

	int n = 2;
	int temp;
	temp = y >> n;
	cout << "Operation: y >> 2" << endl;
	cout << "y: " << y << "\t\ttemp: " << temp << endl;
	cout << "y: 10101" << "\ttemp: 00101" << endl;

	cout << "Operation: y << 2" << endl;
	temp = y << n;
	cout << "\ny: " << y << "\t\ttemp: " << temp << endl;	
	cout << "y: 10101" << "\ttemp: 1010100" << endl;
	
}