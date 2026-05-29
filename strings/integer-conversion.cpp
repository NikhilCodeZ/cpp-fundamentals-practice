#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    string str;
    cout << "Enter the number : " << " ";
    getline(cin,str);

    int size = str.length();
int num = 0;

    for(int index = 0;index < size;index++){
          num = num * 10 + (str[index] - '0');

    }

    cout << "Converted given number to integer : " << num << endl;
    cout << typeid(num).name();

    return 0;
}