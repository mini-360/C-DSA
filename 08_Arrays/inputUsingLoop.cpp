#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    char vowels[size];
    for (int i = 0; i < size; i++)
    {
        cin >> vowels[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << vowels[i] << " ";
    }
}