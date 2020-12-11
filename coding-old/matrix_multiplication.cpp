#include<iostream>
#include<cstring>

using namespace std;

int main(){
    //program to transpose a matrix
    int arr1[3][3], arr2[3][3];
    cout << "Enter matrix 1: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Enter matrix 2: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr2[i][j];
        }
    }

    //calculating matrix multiplication
    int result[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = 0;
            for(int k=0; k<3; k++){
                result[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << " | " ;
        for (int j=0; j<3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Product: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
