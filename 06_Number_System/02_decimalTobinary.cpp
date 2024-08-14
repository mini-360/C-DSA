#include<iostream>
using namespace std;

int main(){
    int num,ans=0,power=1;
    cout << "Enter any decimal number : ";
    cin >> num;
    while(num>0){
        int paritydigit = num % 2;
        ans += paritydigit * power;
        power *= 10;
        num /= 2;
    }
    cout << "Decimal number is : " << ans;
}