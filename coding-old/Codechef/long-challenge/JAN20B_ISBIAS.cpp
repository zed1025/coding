/*
	Amit Kumar
	Codechef january 2020 Long Challenge
	JAN20B_ISBIAS
	https://www.codechef.com/JAN20B/problems/ISBIAS

	Partially Accepted
*/

#include<iostream>

using namespace std;

int num_max_increasing_subarray(int *arr, int L, int R) {
    int count=0;
    for(int i=L; i<R; i++) {
        if (arr[i] < arr[i+1]) {
            count++;
            while(i < R) {
                i++;
                //count++;
                if (arr[i] < arr[i+1]) {
                    continue;
                } else {
                    break;
                }
            }        
        }
    }
    return count;
}

int num_max_decreading_subarray(int *arr, int L, int R) {
    int count=0;
    for(int i=L; i<R; i++) {
        if (arr[i] > arr[i+1]) {
            count++;
            while(i < R) {
                i++;
                //count++;
                if (arr[i] > arr[i+1]) {
                    continue;
                } else {
                    break;
                }
            }        
        }
    }
    return count;
}



int main() {
    int N, Q;
    cin >> N >> Q;
    int A[N];
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    while(Q--) {
        int R, L;
        cin >> L >> R;

        int t = num_max_decreading_subarray(A, L-1, R-1);
        int t2 = num_max_increasing_subarray(A, L-1, R-1);

        if(t == t2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}


/*

Index    0  | 1  | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
Value    10 | 20 | 1 | 2 | 3 | 4 | 5 | 6 | 4 | 5

i=9
L = 2, R = 9
p = 2
q = 7
longest = 
count = 1

*/



//1 2 3 6 7 2 3 4 2 1 2 3 4 5