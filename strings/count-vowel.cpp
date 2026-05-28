#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter the string : " << " ";
    getline(cin,str);

    int size = str.length();

int count = 0;

    for(int index = 0;index < size;index++){
        
         if(str[index] == 'a' || str[index] == 'A' || str[index] == 'e' || str[index] == 'E' || str[index] == 'i' || str[index] == 'I' || str[index] == 'o' || str[index] == 'O' || str[index] == 'u' || str[index] == 'U' ){
            count++;
         }
    }

    int const_count = size - count;

    cout << "Number of vowels in the given string is : "<<count<<" " << endl;
    cout << "Number of consonants in the given string is : "<<const_count<<" " << endl;

    return 0;
}