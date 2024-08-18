#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 4, 10, 11};
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length;i++){
        sum += arr[i];
    }
    cout << "Sum is : " << sum;
}