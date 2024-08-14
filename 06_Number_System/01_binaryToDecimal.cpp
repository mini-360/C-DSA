#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, decNum = 0;
    int power = 0;
    cout << "Enter any binary number : ";
    cin >> num;
    while (num > 0)
    {
        int lastDigit = num % 10;
        decNum += lastDigit * (int)pow(2, power);
        power++;
        num /= 10;
    }
    cout << "Decimal Number is : " << decNum;
}