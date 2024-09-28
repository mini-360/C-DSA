#include <iostream>
using namespace std;

int multiples(int, int);

int main()
{
    int num, k;
    cout << "Enter value of num and k : ";
    cin >> num >> k;
    for (int i = 1; i <= k; i++)
    {
        cout << multiples(num, i) << " ";
    }

    return 0;
}

int multiples(int num, int k)
{
    if (num == 0)
        return 0;
    if (k == 1)
        return num;
    multiples(num, k - 1);
    int ans = num * k;
    return ans;
}