#include<iostream>
using namespace std;

void eligibility(int);

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;
    eligibility(age);
}

void eligibility(int age){
    if(age>17){
        cout << "Yes";
    } else{
        cout << "No" ;
    }
}