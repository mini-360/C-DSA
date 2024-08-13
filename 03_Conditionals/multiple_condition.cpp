#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age<12){
        cout << "Child";
    } else if(age>18){
        cout << "Adult";
    } else{
        cout << "Teenager";
    }
}