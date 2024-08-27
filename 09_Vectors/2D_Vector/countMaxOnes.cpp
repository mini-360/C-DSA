#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int countMaxOne(vector<vector<bool>> &);

int main()
{
    
    vector<vector<bool>> vec = {{0, 1, 1, 1},
                               {0, 0, 0, 1},
                               {0, 0, 0, 1}};
    int ans = countMaxOne(vec);
    cout << "Row that contain maximum ones is : " << ans;
    return 0;
}


int countMaxOne(vector<vector<bool>> &vec){
    int max = INT_MIN,ans;
    for (int i = 0; i < vec.size();i++){
        int count = 0;
        for (int j = 0; j < vec[i].size();j++){
            if(vec[i][j])
                count++;
        }
        if(count>max){
            max = count;
            ans = i;
        }
    }
    return ans;
}