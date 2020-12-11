#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(34);
    v.push_back(45);
    v.insert(v.end(), 99);
    for(auto i=v.begin(); i!=v.end(); ++i){
        cout << *i << " ";
    }
}
