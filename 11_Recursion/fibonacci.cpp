#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // int ans = fibo(5);
    
    for (int i = 0; i < 6; i++)
    {
        int ans = fibo(i);
        cout << ans << " ";
    }
    return 0;
}