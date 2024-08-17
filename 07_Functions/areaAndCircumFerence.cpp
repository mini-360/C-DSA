#include<iostream>
#define pi 3.14
using namespace std;

float circumference(float);
float area(float);

int main(){
    float radius;
    cout << "Enter radius of the circle : ";
    cin >> radius;
    float ans = circumference(radius);
    float ans2 = area(radius);
    cout << "Circumference is : " << ans << endl;
    cout << "Area is : " << ans2 << endl;
}


float circumference(float radius){
    float circumference = 2 * pi * radius;
    return circumference;
}

float area(float radius){
    float area = pi * radius * radius;
    return area;
}


