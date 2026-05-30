#include<iostream>
using namespace std;

int main(){
    int arr[50];
    for(int i = 1;i<=50;i++){
        arr[i] = i;
    }

    int num;
    cout << "Enter the number between 1 to 50 you want to search for : " << " ";
    cin >> num;

    for(int index = 0;index <= 50;index++){
        if(arr[index] == num){

            cout << " "<<num<<" found at index "<<index<<" of the array " << endl; 
        }
    

          else{  break;}
          

    }
        cout << ""<<num<<" not found in the array " << endl;
        
    

    return 0;
}