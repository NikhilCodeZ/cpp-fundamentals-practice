#include<iostream>
using namespace std;

int main(){
    int num;
    
    cout << "Enter the Number : " << endl;
    cin >> num;
    int fact = num;
    for(int i = num;i > 1;i--){

        fact = fact*(i-1);
    }

    cout << fact ;

    

    return 0; 
}