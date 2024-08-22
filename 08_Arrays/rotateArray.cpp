#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // Using an array 

    // int arr[] = {1, 2, 3, 4, 5};
    // int length = sizeof(arr) / sizeof(arr[0]);
    // int k;
    // cout << "Enter rotation value : ";
    // cin >> k;
    // k = k % length;
    // int ansArr[length];
    // int j = 0;
    // for (int i = length - k; i < length;i++){
    //     ansArr[j++] = arr[i];
    // }
    // for (int i = 0; i <length- k;i++){
    //     ansArr[j++] = arr[i];
    // }
    // for (int i = 0; i < length;i++){
    //     cout << ansArr[i] << " ";
    // }

    vector<int> vec={1,2,3,4,5};
    int k;
    cout << "Enter rotational value : ";
    cin >> k;
    k = k % vec.size();
    reverse(vec.begin(), vec.end());
    reverse(vec.begin(), vec.begin() + k);
    reverse(vec.begin() + k, vec.end());

    for(int a:vec){
        cout << a << " ";
    }

    return 0;
}