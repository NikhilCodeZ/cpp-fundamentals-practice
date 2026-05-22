#include<iostream>
#include<string>
using namespace std;


int main(){
    int num;
    int rem = 0;
    
    string var = "";
    cout << "Enter the number : " << endl;
    cin >> num;
    int num2 = num;
    for(int i = 0;num != 0;i++){
        rem = num%10;
        num = num/10;
         var = var + to_string(rem); //integer ko string me add krne ke liye int ko phle string me change krna hoga using to_string() 
    } 


    if(stoi(var) == num2){
        cout << "This number is palindrome!";
    }
    else{
        cout << "Not Palindrome!";
    }

    



    return 0;
}