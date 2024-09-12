#include <iostream>
using namespace std;

int main()
{
    int x = 18;
    float y = 7.9;
 
    // & is reference operator 
    // here address of the variable will be printed

      
    // create a pointer that can store address of x;
    // As x is an integer variable, so we need a pointer
    // that can store address of integer type

    int *ptr = &x;
    cout << ptr << endl;

    // Create a pointer that can store address of y
    // y is a float variable , so we need to store it in a float pointer

    float *ptrf = &y;
    cout << ptrf << endl;

    return 0;
}