/*

 */
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int comp(int a, int b) {
    return (a > b);
}

int max_index(int *arr, int size) {
    int max = arr[0], index=0;
    for(int i=1; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void print_row(int *arr, int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int find_two_d_peak(int arr[][4], int rows, int cols) { //adjuct the array indexes according to the input array

    if (cols == 1) { //only one column, so return the global maximum in the array
        int a[rows];
        for(int i=0; i<rows; i++) {
            a[i] = arr[i][cols];
        }
        print_row(a, rows);
        return max_index(a, rows);
    }


    int mid_col = floor(cols/2);
    int a[rows];
    for(int i=0; i<rows; i++) {
        a[i] = arr[i][mid_col];
    }
    print_row(a, rows);
    int i = max_index(a, rows);
    cout << "global max: " << arr[i][mid_col] << endl;
    
    if(arr[i][mid_col-1] > arr[i][mid_col]) {
        return find_two_d_peak(arr, rows, mid_col);
    } else if (arr[i][mid_col+1] > arr[i][mid_col]) {
        return find_two_d_peak(arr, mid_col, cols);
    } else {
        return arr[i][mid_col];
    }
}

int main() {
    int arr[4][4] = {
        {10, 8, 10, 10},
        {14, 13, 12, 11},
        {15, 9, 11, 21},
        {16, 17, 19, 20}
    };
    int peak = find_two_d_peak(arr, 4, 4);
    cout << "Peak is: " << peak << endl;

    return 0;
}