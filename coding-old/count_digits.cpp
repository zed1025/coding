#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>   //for accumulate

using namespace std;

int count_digits(int n){
    int count=0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
}
int main(){
    cout << count(2345);
}
