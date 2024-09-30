#include <iostream>
using namespace std;

int fun(int, int);
int pow(int, int);

int main()
{
    int n, no_OfDigits = 0;
    cout << "Enter n : ";
    cin >> n;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        no_OfDigits++;
    }
    int ans = fun(n, no_OfDigits);
    if (ans == n)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }
    return 0;
}

int fun(int n, int d)
{
    if (n == 0)
        return 0;
    return pow(n % 10, d) + fun(n / 10, d);
}

int pow(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = pow(p, q / 2);
        return result * result;
    }
    else
    {
        int result = pow(p, (q - 1) / 2);
        return result * result * p;
    }
}