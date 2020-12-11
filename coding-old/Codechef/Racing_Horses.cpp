
#include<iostream>
#include<climits>
#include <algorithm> // for sort()

using namespace std;


int main(){
    int t;      //number of test cases
    cin >> t;

    int n;      //number of horses
    int *s;     // array that will contain the skill, s[i] for the ith horse

    for(int k=0; k<t; k++){
        cin >> n;
        s = new int[n];

        //reading the n integers
        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        int diff = INT_MAX;

        sort(s, s+n);
        //checking adjacent pairs for minimum difference
        for(int i=0; i<n-1; i++){
            if((s[i+1] - s[i]) < diff)
                diff = s[i+1] - s[i];
        }
        cout << diff << endl;
    }
    return 0;
}



/*
    Problem: Racing Horses
    URL: https://www.codechef.com/problems/HORSES

    Chef is very fond of horses. He enjoys watching them race. As expected,
    he has a stable full of horses. He, along with his friends, goes to his
    stable during the weekends to watch a few of these horses race. Chef wants
    his friends to enjoy the race and so he wants the race to be close. This can
    happen only if the horses are comparable on their skill i.e. the difference in their skills is less.

    There are N horses in the stable. The skill of the horse i is represented by an integer S[i].
    The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum.
    This way, he would be able to host a very interesting race. Your task is to help him do this
    and report the minimum difference that is possible between 2 horses in the race.

    Input:
    First line of the input file contains a single integer T, the number of test cases.
    Every test case starts with a line containing the integer N.
    The next line contains N space separated integers where the i-th integer is S[i].

    Output:
    For each test case, output a single line containing the minimum difference that is possible.

    Constraints:
    1 ≤ T ≤ 10
    2 ≤ N ≤ 5000
    1 ≤ S[i] ≤ 1000000000

    Example:
    Input:
    1
    5
    4 9 1 32 13

    Output:
    3

    Explanation: The minimum difference can be achieved if we pick horses with skills 1 and 4 for the race.
*/



/*
    Theory: Find minimum difference between any two elements
    Method 1: Time - O(n^2)
        // Returns minimum difference between any pair
        int findMinDiff(int arr[], int n)
        {
           // Initialize difference as infinite
           int diff = INT_MAX;

           // Find the min diff by comparing difference
           // of all possible pairs in given array
           for (int i=0; i<n-1; i++)
              for (int j=i+1; j<n; j++)
                  if (abs(ar
                  r[i] - arr[j]) < diff)
                        diff = abs(arr[i] - arr[j]);

           // Return min diff
           return diff;
        }

    Method 2 (Efficient: O(n Log n)
    The idea is to use sorting. Below are steps.
    1) Sort array in ascending order. This step takes O(n Log n) time.
    2) Initialize difference as infinite. This step takes O(1) time.
    3) Compare all adjacent pairs in sorted array and keep track of minimum difference. This step takes O(n) time.

        // Returns minimum difference between any pair
        int findMinDiff(int arr[], int n)
        {
           // Sort array in non-decreasing order
           sort(arr, arr+n);

           // Initialize difference as infinite
           int diff = INT_MAX;

           // Find the min diff by comparing adjacent
           // pairs in sorted array
           for (int i=0; i<n-1; i++)
              if (arr[i+1] - arr[i] < diff)
                  diff = arr[i+1] - arr[i];

           // Return min diff
           return diff;
        }
*/
