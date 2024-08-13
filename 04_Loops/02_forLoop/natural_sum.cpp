#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cout << "Enter any value for num : ";
    cin >> num;
    for (int i = 1; i <= num;i++){
        sum += i;
    }
    cout << "Sum is : " << sum;
}