#include<iostream>
using namespace std;

int main(){
    int num1 = 5;
    cout << (num1 << 1) << endl; // 10
    cout << (num1 >> 1) << endl; // 2

    int num2 = 8;
    cout << (num1 & num2) << endl; // 0000
    cout << (num1 | num2) << endl; // 1101
}