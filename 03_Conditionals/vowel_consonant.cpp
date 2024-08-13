#include <iostream>
using namespace std;

int main()
{
    char check;
    cout << "Enter any character : ";
    cin >> check;
    switch (check)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";
    }
}