#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;
    vec.push_back(1);

    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;
    vec.push_back(2);

    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;
    vec.push_back(3);

    vec.resize(5);

    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;

    vec.resize(10);
    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;

    vec.pop_back();
    vec.pop_back();


    cout << "Size : " << vec.size()<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;

    return 0;
}