#include <iostream>
using namespace std;

int main()
{
    int dayNum;
    cout << "Enter day number(must b/w 1 to 7) : ";
    cin >> dayNum;
    switch (dayNum)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Enter a valid input";
    }
}