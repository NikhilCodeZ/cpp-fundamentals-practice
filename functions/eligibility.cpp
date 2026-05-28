#include<iostream>
using namespace std;

void VotingEligibility(int a){
    if(a > 18){
        cout << "You are eligible for voting " << endl;
    }
    else{
        cout << "You are not eligible for voting " << endl;
    }
}

int main(){
    int age;
    cout <<  "Enter your age : " << endl;
    cin >> age;
    VotingEligibility(age);


    return 0;
}