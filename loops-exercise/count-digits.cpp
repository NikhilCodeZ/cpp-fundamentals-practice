#include<iostream>
using namespace std;

int main(){
    int num;
    int count = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    for(int i = 0;num != 0;i++){
        // int rem = num%10;
        num = num/10;
        count = count + 1;
    } 

    cout << "Number of digits : " << count << endl;



    return 0;
}