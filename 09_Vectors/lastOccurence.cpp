#include<iostream>
#include<vector>
using namespace std;

/*
 x=1 you have to find the last occurrence of 1 in the vector
 [1,2,3,2,1,3,1]
*/

int main(){
    vector<int> vec(6);
    cout << "Enter elements in the array : ";
    for (int i = 0; i < 6;i++){
        cin >> vec[i];
    }
    int x;
    cout << "Enter the target value : ";
    cin >> x;
    int occurence=-1;
    for (int i = 0; i < vec.size();i++){
        if(vec[i]==x){
            occurence = i;
        }
    }
    cout << "Last occurrence is : " << occurence;
    return 0;
}