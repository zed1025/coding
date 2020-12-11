#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool myFunc(int i, int j){return (i<j);}

int main(){
    int myints[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    vector<int> v(myints, myints+9);

    //sorting the elements
    sort(v.begin(), v.end());

    cout << "3 in array: ";
    if(binary_search(v.begin(), v.end(), 345)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    //using custom function
    /*
        binary_search(ForwardIterator first, ForwardIterator last, const T& val, Compare comp)
    */
    sort(v.begin(), v.end(), myFunc );
    cout << "6 in array: ";
    if(binary_search(v.begin(), v.end(), 6, myFunc)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
