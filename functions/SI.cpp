#include<iostream>
using namespace std;

float SimpleInterest(int p,int r,int t){
    return (p*r*t)/100;
}

int main(){
    int principal;
    int rate;
    int time;
    cout << "Enter the principal : " << endl;
    cin >> principal;
    cout << "Enter the rate : " << endl;
    cin >> rate;
    cout << "Enter the time : " << endl;
    cin >> time;

    float s_intrst = SimpleInterest(principal,rate,time);

    cout << "Simple Interest is : " << s_intrst << endl;

    return 0;
}