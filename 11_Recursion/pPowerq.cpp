#include <iostream>
using namespace std;

int calculatePower(int, int);
int optimizedpPowerQ(int, int);

int main()
{
    int p, q;
    cout << "Enter value of p and q : ";
    cin >> p >> q;
    // int ans = calculatePower(p, q);
    int ans = optimizedpPowerQ(p, q);
    cout << "p power q is : " << ans;
    return 0;
}

// Brute force approach
int calculatePower(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }
    return p * calculatePower(p, q - 1);
}

// Optimized approach
int optimizedpPowerQ(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = optimizedpPowerQ(p, q / 2);
        return result * result;
    }
    else
    {
        int result = optimizedpPowerQ(p, (q - 1) / 2);
        return p * result * result;
    }
}