#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool absDiff(vector<int> &, int);

int main(){
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size;i++){
        cin >> vec[i];
    }
    int target;
    cout << "Enter the value of target : ";
    cin >> target;
    if(absDiff(vec, target)){
        cout << "Yes";
    } else{
        cout << "No";
    }
    return 0;
}

bool absDiff(vector<int> &vec,int target){
    int left = 0, right = vec.size() - 1;
    while(left<right){
        int diff = vec[right] - vec[left];
        if(diff==target)
            return true;
        else if(diff<target)
            left++;
        else
            right++;
    }
    return false;
}