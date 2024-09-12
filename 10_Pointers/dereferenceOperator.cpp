#include <iostream>
using namespace std;

int main()
{
    int x = 18;
    float y = 7.9;

    int *ptr = &x;
    // dereferencing
    // here at the value at that address is stored will be printed
    cout << *ptr << endl;

    float *ptrf = &y;
    cout << *ptrf << endl;

    x = 23;
    cout <<"new updated value of x : "<< *ptr << endl;
    cout << "ptr still pointing there : " << ptr<<endl;
    return 0;
}