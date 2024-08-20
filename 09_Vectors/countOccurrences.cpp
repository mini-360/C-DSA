#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target, count = 0;
    vector<int> vec(6);
    cout << "Enter elements in the vector : ";
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    cout << endl;
    cout << "Enter the value of target : ";
    cin >> target;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == target)
    //     {
    //         count++;
    //     }
    // }
    for(int val:vec){
        if(val==target){
            count++;
        }
    }
    cout << endl;
    cout << "Occurence of target element is : " << count;
    return 0;
}