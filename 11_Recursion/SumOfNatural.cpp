#include<iostream>
using namespace std;

int alterSum(int);

int main(){
    int num;
    cout << "Enter num : ";
    cin >> num;
    int sum = alterSum(num);
    cout << "Sum is : " << sum;
    return 0;
}


int alterSum(int num){
    if(num==0){
        return 0;
    }
    int sum =alterSum(num - 1);
    if(num%2==0){
        sum -= num;
    } else{
        sum += num;
    }
    return sum;
}