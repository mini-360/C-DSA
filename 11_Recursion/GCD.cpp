#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "GCD is : " << ans;
    return 0;
}


int gcd(int a,int b){
    if(b>a)
        return gcd(b, a);
    if(b==0)
        return a;
    return gcd(b, a % b);
}