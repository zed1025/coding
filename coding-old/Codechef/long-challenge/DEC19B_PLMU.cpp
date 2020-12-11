/*
    Amit Kumar, Codehef December Long Challenge

    DEC19B_PLMU.cpp
    https://www.quora.com/Two-numbers-are-such-that-their-sum-is-equal-to-their-product-What-are-these-two-numbers
    https://math.stackexchange.com/questions/400778/sum-equal-to-the-product
    Accepted
*/

#include<iostream>
using namespace std;

//solution 2, trying to optimise the previous solution
int main() {
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        long arr[N];
        long count1 = 0;
        long count2 = 0;

        for(int i=0; i<N; i++) {
            cin >> arr[i];
            if(arr[i] == 2) count1++;
            if(arr[i] == 0) count2++;
        }
        count2 = (count2 * (count2-1))/2;
        count1 = (count1 * (count1-1))/2;
        long count = count1 + count2;

        cout << count << "\n";
    }
    return 0;
}

//solution 1, partially accepted 30/100
/*
int main(){
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++) {
            cin >> arr[i];
        }
        int count = 0;
        for(int i=0; i<N-1; i++) {
            for(int j=i+1; j<N; j++) {
                if((arr[i] * arr[j]) == (arr[i] + arr[j])) count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
*/