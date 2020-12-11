#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){

    int *pos, arr[]={10, 7, 2, 15, 4};
    vector<int> v(arr, arr+5);  // another way to initialize vector
    vector<int>::iterator j;    //To request an iterator appropriate for a particular STL templated class, you use the syntax

    //sorting in descending order using array
    printf("Sorting using array.\n");
    sort(arr, arr+5);
    reverse(arr, arr+5);
    for(int i=0; i<5; i++){
        printf("%d, ", arr[i]);
    }printf("\n");
    printf("==================\n\n");

    //sorting in descending using vectors
    printf("Sorting using vector.\n");
    sort(v.rbegin(), v.rend());
    for(std::vector<int>::iterator it=v.begin(); it != v.end(); it++){
        printf("%d ", *it);
    }
    printf("\n");
    printf("==================\n\n");

    //partial sort
    printf("Partial Sort.\n");
    random_shuffle(v.begin(), v.end());
    for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        printf("%d ", *it);
    }printf("\n");
    printf("==================\n");
    /*
    Partial Sort
        Rearranges the elements in the range [first,last), in such a way that
        the elements before middle are the smallest elements in the entire range
        and are sorted in ascending order,
        while the remaining elements are left without any specific order.
    */
    partial_sort(v.begin(), v.begin()+3, v.end());
    for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        printf("%d ", *it);
    }printf("\n");
    printf("==================\n\n");


    // binary search using lower bound
    pos = lower_bound(arr, arr + 5, 7);                              // found
    printf("%d\n", *pos);
    j = lower_bound(v.begin(), v.end(), 7);
    printf("%d\n", *j);


    //printing permutation of vectors/arrays
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        printf("%d ", *it);
    printf("\n");
    next_permutation(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
      printf("%d ", *it);
    printf("==================\n");

}
