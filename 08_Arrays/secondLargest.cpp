#include<iostream>
#include<climits>
using namespace std;

int secLargest(int[], int);

int main(){
    int arr[] = {2, 3, 5, 7, 6, 1,7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int ans = secLargest(arr, length);
    cout << "Second largest element is : " << ans;
}

int secLargest(int arr[],int length){
    int max = INT_MIN;
    for (int i = 0; i < length;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    int secMax = INT_MIN;
    for (int i = 0; i < length;i++){
        if(arr[i]>secMax && arr[i]!=max){
            secMax = arr[i];
        }
    }
    return secMax;
}