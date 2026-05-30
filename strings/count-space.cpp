#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter string : " << " ";
    getline(cin,str);

    int size = str.length();
    int count = 0;
    
    for (int index = 0;index < size; index++){
        if(str[index] == ' '){
            count++;
        }
    }

    cout << "Number of space in the given string is : " << count << " ";

    return 0;
}