#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size){
    
    int count = size;
    int brr[size];
    for(int i = 0; i < size; i++){
    brr[i] = arr[i];
}
cout << "Array before reversal is : " << " ";
  for(int i = 0; i < size; i++){
    cout << brr[i] << " "; 
}


    cout << "Reversed Array is : " << " ";
    for(int index = 0;index < size;index++){
        arr[index] = brr[count-1];
        count--;
        cout << arr[index] << " ";
    }
}

int main(){
    int size;
    cout << "Enter the size of array you want to create : " << " ";
    cin >> size;

    int arr[size];

     for(int index = 0; index < size; index++){
        cout << "Enter element for arr["<<index<<"] : " << " ";
        cin >> arr[index]; 
    }

    

ReverseArray(arr,size);

}