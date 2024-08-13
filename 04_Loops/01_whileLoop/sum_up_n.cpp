#include<iostream>
using namespace std;

int main(){
    int num, sum = 0, i = 1;
    cout << "Enter value of num : ";
    cin >> num;
    while(i<=num){ // condition
        sum += i;
        i++; // updating loop variable
    }
    cout << "Sum is : " << sum;
}