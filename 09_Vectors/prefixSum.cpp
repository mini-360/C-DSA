#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector<int> &);

int main(){
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < size;i++){
        cin >> vec[i];
    }
    runningSum(vec);
    for (int i = 0; i < size;i++){
        cout << vec[i] << " ";
    }
        return 0;
}

void runningSum(vector<int> &vec){
    for (int i = 1; i < vec.size();i++){
        vec[i] = vec[i - 1] + vec[i];
    }
    return;
}