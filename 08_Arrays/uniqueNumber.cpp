#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,1,3,2,4,5,4,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length;i++){
        for (int j = i + 1; j < length;j++){
            if(arr[i]==arr[j])
                arr[i] =arr[j] = -1;
        }
    }
    int unique = 0;
    for (int i = 0; i < length;i++){
        if(arr[i]>0){
            unique = arr[i];
            break;
        }
    }
    cout << "Unique number is : " << unique;
}