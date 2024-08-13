#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num;
    if((num%2==0) && (num%3==0)){
        cout << "The number is even and divisible by 3";
    } else{
        cout << "The number is not divisible by 3 ";
    }
}