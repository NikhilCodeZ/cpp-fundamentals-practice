#include<iostream>
using namespace std;

int main(){

    string str;
    char ch;
    cout << "Enter the string : " << " ";
    getline(cin,str);

    cout << "Enter the character you want to check the frequency for : " << " ";
    cin >> ch;

    int count = 0;

    for(int index = 0; index < str.length();index++){
        if(str[index] == ch || str[index] == ch - 'a' + 'A'){

            count++;

        }
    }

    cout << " "<<ch<<" is present for "<<count<<" number of times in the given string " << endl;
}