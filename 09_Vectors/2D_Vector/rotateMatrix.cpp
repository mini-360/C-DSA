#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// constraint:Without using any extra space given: it is a square matrix

void rotateMatrix(vector<vector<int>> &);

int main(){
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    vector<vector<int>> vec(size, vector<int>(size));
    // vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Enter elements in the vector : "<<endl;
    for (int i = 0; i < vec.size();i++){
        for (int j = 0; j < vec[i].size();j++){
            cin >> vec[i][j];
        }
    }
    rotateMatrix(vec);
    cout << "Vector after rotation : " << endl;
    for (int i = 0; i < vec.size();i++){
        for (int j = 0; j < vec[i].size();j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
}


void rotateMatrix(vector<vector<int>> &vec){
    // first we have to transpose the matrix
    for (int i = 0; i < vec.size();i++){
        for (int j = 0; j < i;j++){
            // for(int j=i+1;j<vec.size();j++)
            swap(vec[i][j], vec[j][i]);
        }
    }
    // after that reverse every row
    for (int i = 0; i < vec.size();i++){
        reverse(vec[i].begin(), vec[i].end());
    }
}