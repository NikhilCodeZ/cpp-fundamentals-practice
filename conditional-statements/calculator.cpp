#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    char op;
    cout << "Enter NUmber 1 : " << endl;
    cin >> num1;
    cout << "Enter NUmber 2 : " << endl;
    cin >> num2;
    cout << "Enter operator : " << endl;
    cin >> op;
 
    switch(op){
        case '+' : cout << "Addition of " << num1 << " and " << num2 << " is : " << num1+num2 << endl;
        break;
        case '-' : cout << "Subtraction of " << num1 << " and " << num2 << " is : " << num1-num2 << endl;
        break;
        case '*' : cout << "Multiplication of " << num1 << " and " << num2 << " is : " << num1*num2 << endl;
        break;
        case '/' : cout << "Division of " << num1 << " and " << num2 << " is : " << num1/num2 << endl;
        break;
    }

    return 0;
}