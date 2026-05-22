#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Enter NUmber 1 : " << endl;
    cin >> num1;
    cout << " Enter Number 2 : " << endl;
    cin >> num2;
    int result = (num1 > num2)? num1 : num2 ;
    cout << "Largest from these two is " << result;


    return 0;
}