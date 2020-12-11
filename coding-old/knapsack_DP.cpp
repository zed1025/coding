/*
	Amit Kumar
	10-Oct-2018, @02:03AM
*/

#include<iostream>
#include<algorithm>

using namespace std;

int knapsack(int *, int *, int , int );

int main(){
	int n, W;
	cout << "Enter number of objects in the knapsack and the maximum capacity: ";
	cin >> n >> W;
	int *values = new int[n];
	int *weights = new int[n];

	for(int i=0; i<n; i++){
		cout << "Enter weight and value for " << i << "th object: ";
		cin >> weights[i] >> values[i];
	}

	int result = knapsack(weights, values, n, W);
	cout << "Maximum value is " << result << endl;

	return 0;
}

int knapsack(int *weights, int *values, int n, int W){
	int V[n+1][W+1];

	for(int i=0; i<W+1; i++){
		V[0][i] = 0;
	}

	for(int i=1; i<n+1; i++){
		for(int j=0; j<W+1; j++){
			if(weights[i-1] <= j){
				V[i][j] = max(V[i-1][j], values[i-1]+V[i-1][j-weights[i-1]]);
			}else{
				V[i][j] = V[i-1][j];
			}
		}
	}

	//printing the DP table
	for(int i=0; i<n+1; i++){
		for(int j=0; j<W+1; j++){
			cout << V[i][j] << "\t";
		}
		cout << endl;
	}

	return V[n][W];
}