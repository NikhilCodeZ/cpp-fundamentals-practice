#include<iostream>
using namespace std;

int main(){
    int num;
    int limit;
    cout << "Enter number : " << endl;
    cin >> num;
    cout << "Enter limit of table : " << endl;
    cin >> limit;
    for(int i = 1;i <= limit;i++){
        cout << num*i << endl;
    }
}