// Given a positive integer n, generate an n*n matrix filled with elements from 1 to n2 in spiral order.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int);

int main(){
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int> (n));
    matrix = createSpiralMatrix(n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
}


vector<vector<int>> createSpiralMatrix(int n){
    vector<vector<int>> matrix(n, vector<int> (n));
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;
    int direction = 0;
    int val = 1;

    while(left<=right && top<=bottom){
        if(direction==0){
            for (int i = left; i <= right;i++){
                matrix[top][i] = val++;
            }
            top++;
        }
        else if(direction==1){
            for (int j = top; j <= bottom;j++){
                matrix[j][right] = val++;
            }
            right--;
        }
        else if(direction==2){
            for (int k = right; k >= left;k--){
                matrix[bottom][k] = val++;
            }
            bottom--;
        }
        else{
            for (int l = bottom; l >= top;l--){
                matrix[l][left] = val++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}