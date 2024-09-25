#include <iostream>
using namespace std;

int maxElement(int *, int, int);

int main()
{
    int n = 5;
    int arr[] = {13, 10, 3, 2, 5};
    int ans = maxElement(arr, 0, n);
    cout << "Max element is : " << ans;
    return 0;
}

int maxElement(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    int maxVal = max(arr[idx], maxElement(arr, idx + 1, n));
    return maxVal;
}