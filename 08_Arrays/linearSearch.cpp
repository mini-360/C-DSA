#include <iostream>
using namespace std;

int searchElement(int[], int, int);

int main()
{
    int arr[] = {3,9,18,11,7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter a target value : ";
    cin >> target;
    int ans = searchElement(arr, target, length);
    cout << "Index is : " << ans << endl;
}

int searchElement(int arr[], int target, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}