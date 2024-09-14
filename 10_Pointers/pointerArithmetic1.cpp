#include<iostream>
using namespace std;

int main(){
    int x = 20;
    double dec = 908;
    int *ptr = &x;
    double *ptrd = &dec;
    cout << "Size of x is : " << sizeof(x) << endl;
    cout << "Size of dec is : " << sizeof(dec) << endl;
    cout << ptr <<" "<<(ptr+1)<< endl;
    cout << ptrd << " " << (ptrd + 1) << endl;
    return 0;
}