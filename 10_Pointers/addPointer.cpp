#include <iostream>
using namespace std;

// addition of two numbers using pointer

int main()
{
    int x, y;
    cout << "Enter the value of x and y : ";
    cin >> x >> y;
    int *ptr1 = &x; // &x fetches address of x and store it in ptr1
    int *ptr2 = &y; // &y fetches address of y and then store it in ptr2

    int result;

    int *ptr_result = &result; // &result fetches address of result and store it in ptr_result

    /*
     *  *ptr1 -> 10
     *  *ptr2 -> 20
     *  *ptr1 + *ptr2 -> 30
     *  *ptr_result = 30; we store 30 on the address stored in *ptr_result
     *  result -> 30
     */

    *ptr_result = *ptr1 + *ptr2;
    cout << result << endl;
    cout << *ptr_result << endl;

    return 0;
}