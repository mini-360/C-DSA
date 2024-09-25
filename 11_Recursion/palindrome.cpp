#include <iostream>
using namespace std;

bool isPalindrome(int num, int *temp)
{
    if (num >= 0 and num <= 9)
    {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result = isPalindrome(num / 10, temp) and num % 10 == ((*temp) % 10);
    (*temp) /= 10;
    return result;
}

int main()
{
    int num = 12621;
    int newNum = num;
    int *temp = &newNum;
    cout << isPalindrome(num, temp);

    return 0;
}