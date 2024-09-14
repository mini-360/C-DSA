#include<iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int a, b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    cout << "Value before swapping a : " << a << " b : " << b;
    cout << endl;
    swap(&a, &b);
    cout << "Value  after swapping a : " << a << " b : " << b;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}