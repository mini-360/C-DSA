#include<iostream>
using namespace std;

void printPattern(int,int);

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num;
    printPattern(num,num);
    return 0;
}

void printPattern(int ans,int n){
    cout << ans << " ";

    if(ans<=0){
        return;
    }
    printPattern(ans - 5, n);
    cout << ans << " ";
}