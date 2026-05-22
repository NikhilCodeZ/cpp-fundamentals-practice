#include<iostream>
using namespace std;

int main(){
    int num;
    int rem = 0;
    int sum = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    for(int i = 0;num != 0;i++){
        rem = num%10;
        num = num/10;
        sum = sum+rem;
    } 

    cout << "Sum of digits : " << sum << endl;



    return 0;
}