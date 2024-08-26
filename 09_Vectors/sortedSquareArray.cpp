#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> squaredArray(vector<int> );

int main()
{
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    vector<int> ans=squaredArray(vec);
    for(int val:ans){
        cout << val << " ";
    }
    return 0;
}
vector<int> squaredArray(vector<int> vec)
{
    int left = 0, right = vec.size() - 1;
    vector<int> ans;
    while (left <= right)
    {
        if (abs(vec[left]) > abs(vec[right]))
        {
            ans.push_back(vec[left] * vec[left]);
            left++;
        }
        else
        {
            int rightSquare = vec[right] * vec[right];
            ans.push_back(rightSquare);
            right--;
        }
    }
    reverse(ans.begin(), ans.end());
    vec = ans;
    return vec;
}

