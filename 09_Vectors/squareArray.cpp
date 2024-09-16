

// Given an integer array 'a' sorted in non-decreasing order,return an array of the squares of each number sorted in non-decreasing order

#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

void squareSortedArray(vector<int> &);

int main(){
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size;i++){
        cin >> vec[i];
    }
    squareSortedArray(vec);
    for (int i = 0; i < size;i++){
        cout << vec[i] << " ";
    }
        return 0;
}
// Not working properly
void squareSortedArray(vector<int> &vec){
    int left = 0, right = vec.size() - 1;
    vector<int> ans;
    while(left<=right){
        if(abs(vec[left])>abs(vec[right])){
            vec[left] = vec[left] * vec[left];
            swap(vec[left], vec[right]);
            right--;
        } else{
            vec[right] = vec[right] * vec[right];
            right--;
        }
    }
}