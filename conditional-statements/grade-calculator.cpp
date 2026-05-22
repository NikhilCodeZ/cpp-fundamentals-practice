#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks : " << endl;
    cin >> marks;
    if(marks > 90){
        cout << "A Grade " << endl;
    }
    else if(marks > 75){
        cout << "B Grade " << endl;
    }
    else if( marks > 60){
        cout << "C Grade " << endl;
    }
    else{
        cout << "Failed" << endl;
    }


    return 0;
}