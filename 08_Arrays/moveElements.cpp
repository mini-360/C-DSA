#include <iostream>
#include <vector>
using namespace std;

// Given an array of integers 'a', move all the even integers at the begining of the array followed by all the odd integers.
// The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

void interchangePosition(vector<int> &, int);

int main()
{
    // int arr[] = {1, 2, 3, 4, 5,8,2,3,4,6,9,4,23};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    interchangePosition(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void interchangePosition(vector<int> &arr, int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        if (arr[left] % 2 == 0)
        {
            left++;
        }
        else if (arr[right] % 2 != 0)
        {
            right--;
        }
        else
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}