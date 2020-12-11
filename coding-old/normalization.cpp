/*
	Amit Kumar
	DMBI Sem 7 Practical 2
	
	Implement routines for: 
		1. min-max normalization
			a. map to range [0, 1]
			b. map to range [-1, 1]
		2. z-score
		3. decimal scaling
	Sample Dataset:
		10, 12, 3, 6, 5, 25, 17, 100, 1000, 98, 11, 27, 78, 33, 9, 18, 23, 44, 690, 200
*/
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

float min_max(int *dataset){
	int new_min, new_max;
	float v; //number to normalize, in range [new_min, new_max]
	cout << "Enter new min and max: ";
	cin >> new_min >> new_max;
	int max, min;
	max = *max_element(dataset, dataset+20);
	min = *min_element(dataset, dataset+20);
	cout << "Enter number to normalize: ";
	cin >> v;
	v = ( (v-min)*(new_max-new_min)/(max-min) ) + new_min;
	return v;
}

float z_score(int *dataset){
	
}

float decimal_scaling(int *dataset){
	
}

int main(){
	int dataset[20] = {10, 12, 3, 6, 5, 25, 17, 100, 1000, 
		98, 11, 27, 78, 33, 9, 18, 23, 44, 690, 200};
	
	int choice;
	cout << "Press 1 for min-max normalization: \nPress 2 for z-score: \nPress 3 for decimal-scaling: \n";
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Answer: " << min_max(dataset);
			break;
		case 2:
			cout << "Answer: " << z_score(dataset);
			break;
		case 3: 
			cout << "Answer: " << decimal_scaling(dataset);
			break;
		default:
			cout << "Invalid Input!";
	}
	
	return 0;
}
