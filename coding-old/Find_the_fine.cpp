/*
	URL: https://practice.geeksforgeeks.org/problems/find-the-fine/0
	Difficulty: Basic

	Given an array of penalties, an array of car numbers and also the date.
	The task is to find the total fine which will be collected on the given date.
	Fine is collected from odd-numbered cars on even dates and vice versa.

	Input:
	The first line of input contains an integer T denoting the number of test cases.
	Then T test cases follow. Each test case consists of three lines.
	First line of each test case contains two integers N & Date, second line contains N,
	space separated car numbers and third line contains N space separated penalties.

	Output:
	For each test case,In new line print the total fine.

	Example:
		Input:
		2
		4 12
		2375 7682 2325 2352
		250 500 350 200
		3 8
		2222 2223 2224
		200 300 400
		Output:
		600
		300

*/


#include<iostream>

using namespace std;

struct vehicle_fine{
	int car_number;
	int fine;
};

int main(){
	int T;	//number of test cases
	int date, N, total_fine;
	cin >> T;
	for(int i=0; i<T; i++){		//for T test cases
		total_fine = 0;
		cin >> N;
		cin >> date;

		vehicle_fine fine_list[N];
		for(int j=0; j<N; j++){
			cin >> fine_list[j].car_number;
		}
		for(int j=0; j<N; j++){
			cin >> fine_list[j].fine;
		}

		if(date % 2 == 0){	//date is even, so odd numbered vehicles will pay fine
			for(int j=0; j<N; j++){
				if(fine_list[j].car_number % 2 != 0){
					total_fine += fine_list[j].fine;
				}
			}
		} else {
			for(int j=0; j<N; j++){
				if(fine_list[j].car_number % 2 == 0){
					total_fine += fine_list[j].fine;
				}
			}
		}
		cout << total_fine << endl;
	}
	return 0;

}
