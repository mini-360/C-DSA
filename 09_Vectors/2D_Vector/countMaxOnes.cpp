#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int countMaxOne(vector<vector<bool>> &);

// int countMaxOnes(vector<vector<bool>> &);

int findMaxOnes(vector<vector<bool>> &);

int main()
{

    vector<vector<bool>> vec = {{0, 1, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 1},
                                {0, 0, 0, 1}};
    // int ans = countMaxOne(vec);
    // int ans = countMaxOnes(vec);
    int ans = findMaxOnes(vec);
    cout << "Row that contain maximum ones is : " << ans;
    return 0;
}

// basic code 1

// int countMaxOne(vector<vector<bool>> &vec){
//     int max = INT_MIN,ans;
//     for (int i = 0; i < vec.size();i++){
//         int count = 0;
//         for (int j = 0; j < vec[i].size();j++){
//             if(vec[i][j])
//                 count++;
//         }
//         if(count>max){
//             max = count;
//             ans = i;
//         }
//     }
//     return ans;
// }

// basic code 2

// int countMaxOnes(vector<vector<bool>> &vec)
// {
//     int maxOnes = INT_MIN;
//     int maxOnesRow = -1;
//     int column = vec[0].size();
//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = 0; j < vec[i].size(); j++)
//         {
//             if (vec[i][j])
//             {
//                 int numOfOnes = column - j;
//                 if (numOfOnes > maxOnes)
//                 {
//                     maxOnes = numOfOnes;
//                     maxOnesRow = i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxOnesRow;
// }

// optimize code 1

int findMaxOnes(vector<vector<bool>> &vec)
{
    int maxOnesRow = -1;
    int col = vec[0].size() - 1;
    for (int i = 0; i < vec.size(); i++)
    {
        while (col >= 0 && vec[i][col])
        {
            col--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}