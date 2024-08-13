#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num;
    if((num%3==0) || (num%5==0)){
        cout << "The number is divisible by 3 or 5";
    } else{
        cout << "Not divisible";
    }
}