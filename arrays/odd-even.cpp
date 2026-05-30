#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "How many elements you want in array : " << " ";
    cin >> size;

    int arr[size];

     for(int index =0 ; index < size ; index++ ){

        cout << "Enter element for arr["<<index<<"] : " << " ";
        cin >> arr[index];

     }

     int even_count = 0;
     for(int index = 0; index < size; index++){

        if(arr[index] % 2 == 0){
            even_count++;
        }
     }

     cout << "Even numbers in the given array : " << even_count << endl;
     cout << "Odd numbers in the given array : " << size - even_count << endl;

    return 0;
}