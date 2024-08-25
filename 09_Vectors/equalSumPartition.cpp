#include <iostream>
#include <vector>
using namespace std;

bool checkSuffixPrefixSum(vector<int> &);

int main()
{
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements inside vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i]; 
    }
    if (checkSuffixPrefixSum(vec))
    {
        cout << "Partition is Possible";
    }
    else
    {
        cout << "Partition is not Possible";
    }
    return 0;
}

bool checkSuffixPrefixSum(vector<int> &vec)
{
    int totalSum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        totalSum += vec[i];
    }
    int prefixSum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        prefixSum += vec[i];
        int suffixSum = totalSum - prefixSum;
        if (suffixSum == prefixSum)
        {
            return true;
        }
    }
    return false;
}