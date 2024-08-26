#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter row and column : ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter elements in the array : "<<endl;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cin >> arr[i][j];
        }
    }
    int transposeArray[col][row];
    for (int i = 0; i < col;i++){
        for(int j = 0; j < row;j++){
            transposeArray[i][j] = arr[j][i];
        }
    }
    cout << "transposed array : " << endl;
    for (int i = 0; i < col;i++){
        for(int j = 0; j < row;j++){
            cout<<transposeArray[i][j]<<" ";
        }
        cout << endl;
    }
        return 0;
}