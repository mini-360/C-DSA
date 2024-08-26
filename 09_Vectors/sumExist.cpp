#include <iostream>
#include <vector>
using namespace std;

bool checkSum(vector<int> &, int);

int main()
{
    int size;
    cout << "Enter length of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    int target;
    cout << "Enter target sum value : ";
    cin >> target;
    if (checkSum(vec, target))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

bool checkSum(vector<int> &vec, int target)
{

    // basic code

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = i + 1; j < vec.size(); j++)
    //     {
    //         if (vec[i] + vec[j] == target)
    //             return true;
    //     }
    // }
    // return false;

    // Optimized Code

    int left = 0, right = vec.size() - 1;
    while(left<right){
        int sum = vec[left] + vec[right];
        if(sum<=target){
            if(sum==target)
                return true;
            else
                left++;
        } else{
            if(sum==target)
                return true;
            else
                right--;
        }
    }
    return false;
}