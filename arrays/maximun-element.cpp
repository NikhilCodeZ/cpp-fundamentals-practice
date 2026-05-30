#include<iostream>
using namespace std;

void FindMaximum(int arr[],int size){
    int max = arr[0];
    for(int index = 1; index < size; index++){
        if (arr[index] > max){
            max = arr[index];
        }
    }

    cout << max << endl;
}

int main(){

     int arr[50];
     for(int index = 0; index < 10; index++ ){
        cout << "Enter element for arr["<<index<<"] : " << " ";
        cin >> arr[index]; 
     }

    cout << "Maximum element in the gievn array  is : " << " ";
     FindMaximum(arr, 10);

    return 0;

}