/*
	Finding the pivot element of a circularly sorted array using a modified binary search
*/

#include<iostream>
#include<vector>

using namespace std;

int findRotationCount(vector<int> A, int n) {
    int low, high = n-1;
    while(low<=high) {
    	
    	if(A[low] <= A[high]) return low;	//case 1
    	int mid = (low+high)/2;
    	int next = (mid+1)%n, prev = (mid+n-1)%n;
    	if(A[mid] <= A[next] && A[mid] <= A[prev]) {	//case 2
    		return mid;
		} else if (A[mid] <= A[high]) {
			high = mid-1;
		} else if (A[mid] >= A[low]) {
			low = mid+1;
		}
	}
	return -1;
}


int main() {
	int arr[] = {15, 22, 23, 28, 31, 38, 5, 6, 8, 10, 12};
	vector<int> v(arr, arr+11);
	//int count = findRotationCount(arr, 11);
	int count = findRotationCount(v, 11);
	cout << "The array is rotated " << count << " times\n";
	return 0;
}
