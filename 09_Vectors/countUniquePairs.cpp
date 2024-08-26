#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int> &, int);

int main()
{
    int size;
    cout << "Enter the size of vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    int target;
    cout << "Enter the target : ";
    cin >> target;
    int ans = countPairs(vec, target);
    cout << "No. of unique pairs is : " << ans;
    return 0;
}
// variation on the basis of index
int countPairs(vector<int> &vec, int target)
{
    int left = 0, right = vec.size() - 1;
    int count = 0;
    while (left < right)
    {
        int sum = vec[left] + vec[right];
        if (sum == target)
        {
            count++;
            left++;
            right--;
        }

        else if (sum < target)
            left++;
        else
            right--;
    }
    return count;
}