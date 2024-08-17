#include<iostream>
#include<cmath>

using namespace std;

bool primeNumber(int);

int main(){
    int startNum, endNum;
    cout << "Enter start number : ";
    cin >> startNum;
    cout << "Enter end num : ";
    cin >> endNum;
    for (int i = startNum; i <= endNum;i++){
        if(primeNumber(i)){
            cout << i << " ";
        }
    }
}

bool primeNumber(int num){
    if(num<=1){
        return false;
    } else{
        for (int i = 2; i <=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
    }
    return true;
}