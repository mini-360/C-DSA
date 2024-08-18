#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {3, 7, 18, 9, 11};
    int maxVal = INT_MIN; // int maxVal=arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    cout << "The max value is : " << maxVal;
}