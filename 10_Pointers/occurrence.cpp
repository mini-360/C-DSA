#include<iostream>
#include<string>
using namespace std;

void firstAndLastOccur(string, char, int *, int *);

int main(){
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    char ch;
    cout << "Enter any character to find the occurrence : ";
    cin >> ch;

    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    firstAndLastOccur(str, ch, pf, pl);
    cout << *pf << " " << *pl<<endl;
    cout << first << " " << last;
    return 0;
}

void firstAndLastOccur(string s,char ch,int *first,int *last){
    for (int i = 0; i < s.length();i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
    for (int i = s.length() - 1; i >= 0;i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
    }
}