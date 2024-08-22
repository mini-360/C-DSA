#include<iostream>
#include<vector>
using namespace std;

// Sort an Array consisting of only 0s and 1s.

void sortZerosAndOnes(vector<int>&);

// Basic Method

// int main(){
//     int size;
//     cout << "Enter sixze of the vector : ";
//     cin >> size;
//     cout << endl;
//     cout << "Enter elements in the vector : ";
//     vector<int> vec(size);
//     for (int i = 0; i < size;i++){
//         cin >> vec[i];
//     }
//     sortZerosAndOnes(vec);
//     for (int i = 0; i < size;i++){
//         cout << vec[i] << " ";
//     }
//         return 0;
// }

// void sortZerosAndOnes(vector<int> &vec){
//     int countZeros = 0;
//     for(int el:vec){
//         if(el==0){
//             countZeros++;
//         }
//     }
//     for (int i = 0; i < vec.size();i++){
//         if(i<countZeros){
//             vec[i] = 0;
//         } else{
//             vec[i] = 1;
//         }
//     }
// }



// Optimized method

int main(){
    int length;
    cout << "Enter length of the vector : ";
    cin >> length;
    vector<int> vec(length);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < length;i++){
        cin >> vec[i];
    }
    cout << endl;
    cout << "Sorted array is : ";
    sortZerosAndOnes(vec);
    for (int i = 0; i < length;i++){
        cout << vec[i] << " ";
    }
        return 0;
}

void sortZerosAndOnes(vector<int> &vec){
    int left = 0, right = vec.size() - 1;
    while(left<right){
        if(vec[left]==1 && vec[right]==0){
            vec[left] = 0;
            vec[right] = 1;
            left++;
            right--;
        }
        if(vec[left]==0){
            left++;
        }
        if(vec[right]==1){
            right--;
        }
    }
}