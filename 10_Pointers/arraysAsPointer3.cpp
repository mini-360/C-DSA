#include<iostream>
using namespace std;

int main(){
    int arr[5] = {9, 8, 7, 4, 5};
    int(*ptr)[5] = &arr;
    cout << ptr << " " << arr << " " << *ptr << " " << *arr << endl;
    return 0;
}