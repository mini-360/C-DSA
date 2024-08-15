#include <iostream>
using namespace std;

int add(int a, int b); // function prototype

int main()
{
    int num1 = 5, num2 = 3;
    int ans = add(num1, num2);
    cout << "Sum is : " << ans;
}

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}