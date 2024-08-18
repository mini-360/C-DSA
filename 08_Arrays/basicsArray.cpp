#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    cout << sizeof(arr) << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    // int anarr[4];
    // cout << anarr[0] << endl; we will get garbage value here
}