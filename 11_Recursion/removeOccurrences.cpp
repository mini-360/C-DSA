#include <iostream>
using namespace std;

string fun(string &, int);

int main()
{
    string name = "abhay";
    cout << "New string is : " << fun(name, 0);
    return 0;
}

string fun(string &s, int idx)
{
    if (idx == s.length())
        return "";
    if (s[idx] == 'a' || s[idx] == 'A')
        return fun(s, idx + 1);
    return s[idx] + fun(s, idx + 1);
}
