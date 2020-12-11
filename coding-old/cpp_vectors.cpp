#include<vector>
#include<iostream>
#include<cstdio>

/*
    https://www.geeksforgeeks.org/vector-in-cpp-stl/
*/

using namespace std;

int main(){
    int arr[5] = {7, 7, 7};
    std::vector<int> v(5, 58);

    printf("arr[2]=%d\tv[2]=%d\n", arr[2], v[2]);

    for(int i=0; i<5; i++){
        arr[i] = i;
        v[i] = i;
    }

    printf("arr[2]=%d\tv[2]=%d\n", arr[2], v[2]);

    //arr[5] = 5;       //this will generate error as array is static
    v.push_back(45);
    printf("%d\n", v[5]);


    //creating an empty vector and adding elements to it
    std::vector<int> av;
    int temp=0;
    while(temp != -999){
        printf("Enter Number: ");
        scanf("%d", &temp);
        av.push_back(temp);
    }

    /*
        Use of auto
        For variables, specifies that the type of the variable that is being declared will be automatically deduced from its initializer.
        For functions, specifies that the return type is a trailing return type or will be deduced from its return statements (since C++14)
        For non-type template parameters, specifies that the type will be deduced from the argument (since C++17).
    */
    //printing the elements of the vector
    for(auto i=av.begin(); i != av.end(); ++i){
        printf("%d, ", *i);
    }

    //functions for capacity
    printf("\nsize(): %d\n", av.size());
    printf("max_size(): %d\n", av.max_size());
    printf("capacity(): %d\n", av.capacity());


    //functions for element access
    printf("at(): %d\n", av.at(3));
    printf("front(): %d\n", av.front());
    printf("back(): %d\n", av.back());


    //modifier functions
    av.assign(av.size(), 20);
    av.push_back(334);
    av.push_back(345);
    av.pop_back();
    auto it = av.insert(av.begin(), 19999);             //https://www.tutorialspoint.com/cpp_standard_library/cpp_vector_insert_single_element.htm
    av.insert(av.end(), 67484);

    //printing the elements of the vector
    for(auto i=av.begin(); i != av.end(); ++i){
        printf("%d, ", *i);
    }



}
