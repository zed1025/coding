#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int arr[5][3];
    //enter marks of 5 students in 3 subjects
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    //calculate highest marks in each subject
    int arr2[3], max;
    for(int i=0; i<3; i++){
        arr2[i] = arr[0][0];
        for(int j=0; j<5; j++){
            if(arr[j][i] > arr2[i]){
                arr2[i] = arr[j][i];
            }
        }
    }

    //print highest marks
    for(int i=0; i<3; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

}
