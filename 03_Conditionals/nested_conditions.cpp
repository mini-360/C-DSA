#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "enter your marks : ";
    cin >> marks;
    if(marks>33){
        if(marks>80){
            cout << "Pass";
        } else{
            cout << "Gracefully Pass";
        }
    } else{
        cout << "Fail";
    }
}