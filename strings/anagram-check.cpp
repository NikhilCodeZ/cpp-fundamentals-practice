#include<iostream>
#include<algorithm>
using namespace std;

void IsAnagram(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1 == str2){
        cout << "Anagram!" << endl;
    }
    else{
        cout << "Not Anagram!";
    }
}


int main(){
    string str1;
    string str2;
    cout << "Enter String 1 : " << " ";
    cin >> str1;
    cout << "Enter string 2 : " << " ";
    cin >> str2;
    cout << "Checking for Anagram ...... " << endl;
    IsAnagram(str1,str2);

    return 0;
}