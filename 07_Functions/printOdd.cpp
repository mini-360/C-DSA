#include <iostream>
using namespace std;

bool oddNum(int);

int main()
{
    int num1, num2;
    cout << "Enter any number start : ";
    cin >> num1;
    cout << "Enter any number end : ";
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (oddNum(i))
            cout << i << " ";
    }
}

bool oddNum(int num)
{
    if (num % 2 != 0)
        return true;
    else
        return false;
}