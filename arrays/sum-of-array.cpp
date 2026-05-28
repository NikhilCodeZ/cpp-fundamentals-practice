#include<iostream>
using namespace std;

void SumOfArray(int arr[],int size){
    int sum = 0;
    for(int index = 0; index < size; index++){
        sum = sum + arr[index];
    }
    cout << "Sum of all the elements of array : " << sum << " " ;
}

int main(){
    int arr[5];
    for(int index = 0; index < 5; index++){
        cout << "Enter element for arr["<<index<<"] : " << " ";
        cin >> arr[index]; 
    }

    SumOfArray(arr,5);

    return 0;
}