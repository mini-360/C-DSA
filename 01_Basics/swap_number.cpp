#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << "a before swapping : " << a<<endl;
    cout << "b before swapping : " << b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a after swapping : " << a<<endl;
    cout << "b after swapping : " << b<<endl;
}