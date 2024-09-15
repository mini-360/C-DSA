#include<iostream>
using namespace std;

void process(int *, int);

int main(){
    int arr[5] = {9, 8, 7, 4, 5};
    process(arr, 5);
    return 0;
}

void process(int *arr,int n){
    // inside this function we have the access of the same array in the main
    for (int i = 0; i < n;i++){
        cout << *(arr + i) << " ";
    }
}