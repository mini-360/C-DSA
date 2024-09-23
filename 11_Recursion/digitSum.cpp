#include <iostream>
using namespace std;

int digitSum(int);

int main()
{
    int num;
    cout << "Enter value of num : ";
    cin >> num;
    int ans = digitSum(num);
    cout << "Digit Sum is : " << ans;
    return 0;
}

int digitSum(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    return digitSum(n / 10) + digitSum(n % 10);
}