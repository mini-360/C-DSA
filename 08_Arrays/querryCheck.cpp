#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout << "Enter size of the array : ";
    cin >> size;
    vector<int> vec(size);
    for (int i = 0; i < size;i++){
        cin >> vec[i];
    }
    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for (int i = 0; i < size;i++){
        freq[vec[i]]++;
    }
    int querry;
    cout << "Enter your queries : ";
    cin >> querry;
    while(querry--){
        int querryElement;
        cout << "Enter querry element : ";
        cin >> querryElement;
        cout << freq[querryElement] << endl;
    }
        return 0;
}