#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArr(vector<int> &, vector<int> &);

int main()
{
    vector<int> vec1 = {1,6,7,10};
    vector<int> vec2 = {0,1,3,8,11,12,15,18};
    vector<int> ans = mergeSortedArr(vec1, vec2);
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}

vector<int> mergeSortedArr(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            ans.push_back(vec1[i]);
            i++;
        }
        else
        {
            ans.push_back(vec2[j]);
            j++;
        }
    }
    while (i < vec1.size())
    {
        ans.push_back(vec1[i]);
        i++;
    }
    while (j < vec2.size())
    {
        ans.push_back(vec2[j]);
        j++;
    }
    return ans;
}