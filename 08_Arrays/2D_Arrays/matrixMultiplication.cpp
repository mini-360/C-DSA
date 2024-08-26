#include <iostream>
using namespace std;

int main()
{
    int row1, col1;
    cout << "Enter row and column : ";
    cin >> row1 >> col1;
    int arr[row1][col1];
    cout << "Enter elements in the array : " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row2, col2;
    cout << "Enter row and column : ";
    cin >> row2 >> col2;
    int arr2[row2][col2];
    cout << "Enter elements in the array : " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int ansArr[row1][col2];
    if(row1==col2){
        for (int i = 0; i < row1;i++){
            for (int j = 0; j < col2;j++){
                int ans = 0;
                for (int k = 0; k < row1;k++){
                    ans += arr[i][k] * arr2[k][j];
                }
                ansArr[i][j] = ans;
            }
        }
    }
    for (int i = 0; i < row1;i++){
            for (int j = 0; j < col2;j++){
                cout<<ansArr[i][j]<<" ";
            }
            cout << endl;
        }

    return 0;
}
