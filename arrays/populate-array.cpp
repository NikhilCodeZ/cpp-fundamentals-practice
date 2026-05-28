#include<iostream>
using namespace std;

void  PopulateArray(int arr[],int size,int num){
    for(int index = 0; index < size ; index++){
            arr[index] = num*(index+1) ;
            cout << arr[index] << " ";
    }
    
}

int main(){
    int arr[10];
    int num;
    cout << "Enter the number you want multiples of : " << " ";
    cin >> num;
    cout << "Populated Array with multiples of "<<num<<" " << endl;
    PopulateArray(arr,10,num);


    return 0;
}