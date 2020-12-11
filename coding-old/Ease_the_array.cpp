#include<iostream>

using namespace std;

int main(){
  int T, N;
  cin >> T;
  for(int i=0; i<T; i++){
    cin >> N;
    int *arr = new int[N];
    int *arr2 = new int[N];
    for(int j=0; j<N; j++){
      cin >> arr[j];
      arr2[j] = 0;
    } //end of for

    //main logic
    for(int j=0; j<N-1; j++){
      if(arr[j] == 0){
        continue;
      } else{
        if(arr[j+1] == arr[j]){
          arr[j] = 2*arr[j];
          arr[j+1] = 0;
        } // end of if
      } //end of if-else
    } // end of for loop

    int k = 0;
    for(int j=0; j<N; j++){
      if(arr[j] != 0){
        arr2[k++] = arr[j];
      } // end of if
    } // end of for

    for(int j=0; j<N; j++){
      cout << arr2[j] << " ";
    } // end of for
    cout << endl;
  }// end of for
  return 0;
}




/*
  Problem Name: Ease the Array
  URL: https://practice.geeksforgeeks.org/problems/ease-the-array/0
  Difficulty: Easy

  Given an array of integers of size N.
  Assume ‘0’ as invalid number and all other as valid number.
  Write a program that modifies the array in such a way that if next number
  is  valid number and is same as current number, double the current number
  value and replace the next number with 0. After the modification, rearrange
  the array such that all 0’s are shifted to the end and the sequence of the
  valid number or new doubled number is maintained as in the original array.

  Examples:
    Input : arr[] = {2, 2, 0, 4, 0, 8}
    Output : 4 4 8 0 0 0

    Input : arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
    Output :  4 2 12 8 0 0 0 0 0 0

  Input:
  The first line of the input contains an integer T,
  denoting the number of test cases. Then T test case follows.
  First line of each test contains an integer N denoting the size of the array.
  Then next line contains N space separated integers denoting the elements of the array.

  Output:
  For each test case print space separated elements of the new modified array on a new line.

  Constraints:
  1<=T<=10^3
  1<=N<=10^5

  Example:
    Input:
    2
    5
    2 2 0 4 4
    5
    0 1 2 2 0
    Output:
    4 8 0 0 0
    1 4 0 0 0
*/
