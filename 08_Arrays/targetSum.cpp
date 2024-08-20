#include<iostream>
using namespace std;

int target(int[], int, int);

int main(){
    int arr[] = {3,4,6,7,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int targetVal;
    cout << "Enter the value of target : ";
    cin >> targetVal;
    int ans = target(arr, targetVal, length);
    cout << "No. of pairs is : " << ans;
    return 0;
}


int target(int arr[],int val,int length){
    int count = 0;
    for (int i = 0; i < length;i++){
        for (int j = i + 1; j < length;j++){
            if(arr[i]+arr[j]==val)
                count++;
        }
    }
    return count;
}