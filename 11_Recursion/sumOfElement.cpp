#include <iostream>
using namespace std;

int sumArray(int *, int, int);

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int ans = sumArray(arr, 0, n);
    cout << "Sum of element is : " << ans;
    return 0;
}

int sumArray(int *arr, int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    int ans = 0;
    ans = arr[idx] + sumArray(arr, idx + 1, n);
    return ans;
}