#include<iostream>
using namespace std;

int main(){
    int arr[5] = {9, 8, 7, 4, 5};
    int *ptr = arr;
    // cout << ptr << " " << arr <<" "<<*ptr<<" "<<*arr<< endl;

    for (int i = 0; i < 5;i++){
        cout << *(ptr + i) << " ";
    }
        return 0;
}