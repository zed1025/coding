/*
    WRONG ANSWER
    SEE SOLUTION at the end of this file
*/


#include<iostream>
#include<vector>
using namespace std;

vector<int> addOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    int t = 0;
    int p, q=1;
    for(auto i=A.begin(); i!=A.end(); ++i) {
        p = *i + q;
        if(p<=9){
            A[t] = p;
            q=0;
            break;
        }
        A[t] = p%10;
        q = p/10;
        t++;
    }

    if(q!=0){
        A.insert(A.end(), 1);
    }
    reverse(A.begin(), A.end());
    if(*A.begin() == 0){
        A.erase(A.begin());
    }
    return A;
}

int main() {
    vector<int> num;
    int n; //size of number
    cin >> n;
    int temp;
    for(int i=0; i<n; i++) {
        //input number
        //most significant digit first
        cin >> temp;
        num.push_back(temp);
    }
    cout << "origional number: ";
    for(auto i=num.begin(); i!=num.end(); ++i) {
        cout << *i;
    }cout << endl;
    vector<int> ans = addOne(num);
    cout << "new number: ";
    for(auto i=ans.begin(); i!=ans.end(); ++i) {
        cout << *i;
    }cout << endl;
    return 0;
}


/*
    Problem
    Given a non-negative number represented as an array of digits,
    add 1 to the number ( increment the number represented by the digits ).
    The digits are stored such that the most significant digit is at the head of the list.

    Example
    If the vector has [1, 2, 3]
    the returned vector should be [1, 2, 4]
    as 123 + 1 = 124.
*/

/*
    Solution

    vector<int> addOne(vector<int> &A) {
        reverse(A.begin(), A.end());
        vector<int> ans;
        int carry = 1;
        for (int i = 0; i < A.size(); i++) {
            int sum = A[i] + carry;
            ans.push_back(sum%10);
            carry = sum / 10;
        }
        while (carry) {
            ans.push_back(carry%10);
            carry /= 10;
        }
        while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        reverse(A.begin(), A.end());
        return ans;
    }
*/
