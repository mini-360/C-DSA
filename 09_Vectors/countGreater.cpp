#include<iostream>
#include<vector>
using namespace std;

int main(){
    int target, count = 0;
    vector<int> vec(6);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < vec.size();i++){
        cin >> vec[i];
    }
    cout << endl;
    cout << "Enter target : ";
    cin >> target;
    for(int val:vec){
        if(val>target){
            count++;
        }
    }
    cout << endl;
    cout << "No. of elements greater than target is : " << count;
    return 0;
}