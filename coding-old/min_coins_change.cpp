/*
    Amit Kumar
    10 October 2018, @3:07PM
*/
#include<iostream>
#include<algorithm>

using namespace std;

int make_change(int , int , int *);

int main(){
    int n, N;
    cout << "Enter the number of denominations and amount: ";
    cin >> n >> N;

    int *d = new int[n]; //array holding the denominations
    cout << "Enter the denominations: ";
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    int result = make_change(n, N, d);
    cout << "Minimum coins required is " << result << endl;
}

int make_change(int n, int N, int *d){
    
}
