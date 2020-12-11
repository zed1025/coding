#include<iostream>
#include<cstring>

using namespace std;

int main(){
    //program to transpose a matrix
    int arr[3][3], transposed[3][3];
    cout << "Enter matrix: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transposed[i][j] = arr[j][i];
        }
    }

    cout << "Origional Matrix: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transoposed Matrix: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }


}
