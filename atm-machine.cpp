#include<iostream>
using namespace std;

int main(){
    char opt;
    int balance = 200000;
    do{
    cout << "Menu : " << endl;
    cout <<  "1. Check Balance " << endl;
    cout <<  "2. Deposit " << endl;
    cout <<  "3. Withdrawal " << endl;
    cout <<  "4. Exit " << endl;
    cout << "Select an option from the menu : " << endl;
    cin >> opt;
int amount;
int w_amount;


    switch(opt){

        case '1': cout << "Account Balance : " << balance << endl;
        break;
        case '2' : cout << "Enter amount to deposit : " << endl;
        cin >> amount;
        balance = balance + amount ;
        cout << amount << " credited to your account !" << endl;
        break;
        case '3' : cout << "Enter amount to withdraw : " << endl;
        cin >> w_amount;
        if(w_amount <= balance){
        balance = balance - w_amount;
        cout << w_amount <<  " debited from your account!" << endl;}
        else{
            cout << "Insufficient Balance!";
        }
        break;
        case '4' : cout << "Exited from the system !! " ;
        opt = '4';
        break;
    }
}while(opt != '4');

    return 0;
}