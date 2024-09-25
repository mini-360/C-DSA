#include <iostream>
using namespace std;

void printArr(int *, int, int);

int main()
{
    int n = 5;
    int arr[] = {6, 1, 9, 3, 4};
    printArr(arr, 0, n);
    return 0;
}

void printArr(int *arr, int idx, int n)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    printArr(arr, idx + 1, n);
}