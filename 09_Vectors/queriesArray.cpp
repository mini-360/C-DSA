#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    vector<int> vec(size+1,0);
    cout << "Enter elements inside vector : ";
    for (int i = 1; i <= size;i++){
        cin >> vec[i];
    }
    for (int i = 1; i <= size;i++){
        vec[i] += vec[i - 1];
    }
    int q;
    cout << "Enter your queries : ";
    cin >> q;
    while(q--){
        int l, r;
        cout << "Enter value of L : ";
        cin >> l;
        cout << "Enter value of R : ";
        cin >> r;
        int ans = 0;
        // ans= prefixSum[r]-prefixSum[l-1];
        ans = vec[r] - vec[l - 1];
        cout << ans<<endl;
    }

    return 0;
}