#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter Your Age : " << endl;
    cin >> age;
    if(age >= 18){
        cout << "You are Eligible for Voting " << endl;
    }
    else{
        cout << "You are not Eligible for Voting " << endl;
    }


    return 0;
} 