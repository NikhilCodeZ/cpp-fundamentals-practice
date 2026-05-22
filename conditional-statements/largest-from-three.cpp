#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout << "Enter NUmber 1 : " << endl;
    cin >> num1;
    cout << " Enter Number 2 : " << endl;
    cin >> num2;
    cout << " Enter Number 3 : " << endl;
    cin >> num3;
    if ( num1 > num2){
        if (num1 > num3){
            cout << num1 << " is the largest from these three" << endl;
        }
        else{
            cout << num3 << " is the largest from these three" << endl;
        }
    }
    else{
         if (num2 > num3){
            cout << num2 << " is the largest from these three" << endl;
        }
        else{
            cout << num3 << " is the largest from these three" << endl;
        }
    }
    


    return 0;
}