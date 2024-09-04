#include <iostream>
#include <vector>
using namespace std;

int rectangleSum(vector<vector<int>> &, int, int, int, int);

int main()
{
    int row, col;
    cout << "Enter value of row and col : ";
    cin >> row >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    cout << "Enter elements inside the matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Original Matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int l1, l2, r1, r2;
    cout << "Enter value of l1 r1 l2 r2 : ";
    cin >> l1 >> r1 >> l2 >> r2;
    int ans = rectangleSum(matrix, l1, r1, l2, r2);
    cout << "Sum of the rectangle is : " << ans;

    return 0;
}
// 1. Brute Force
// int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
// {
//     int sum = 0;

//     for (int i = l1; i <= l2; i++)
//     {
//         for (int j = r1; j <= r2; j++)
//         {
//             sum += matrix[i][j];
//         }
//     }
//     return sum;
// }

// 2. optimized

int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
    int sum = 0;
    // Prefix sum array row wise
    for (int i = 0; i < matrix.size();i++){
        for (int j = 1; j <= matrix[i].size();j++){
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    for (int i = l1; i <= l2;i++){
        if(r1!=0){
        sum += matrix[i][r2] - matrix[i][r1 - 1];
        } else{
            sum += matrix[i][r2];
        }
    }
    return sum;
}