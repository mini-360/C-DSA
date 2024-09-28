#include<iostream>
using namespace std;

void print(int);

int main(){
    int num;
    cout << "Enter num : ";
    cin >> num;
    print(num);
    return 0;
}

void print(int n){
    if(n==0)
        return;
    print(n - 1);
    cout << n<<" ";
}