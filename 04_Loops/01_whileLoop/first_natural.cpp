#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num;
    int count = 1;
    while(count<=num){
        cout << count << " ";
        count++;
    }
}