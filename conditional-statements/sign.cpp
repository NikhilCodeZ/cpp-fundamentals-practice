#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    if(num > 0){
        cout << "Number is positive!" << endl;
    }
    else if(num < 0){
        cout << "Number is negative!" << endl;
    }
    else{
        cout << "NUmber is Zero!" << endl;
    }



    return 0;
}