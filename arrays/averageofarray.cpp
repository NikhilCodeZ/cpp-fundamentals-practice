#include<iostream>
using namespace std;

double FindAverage(int arr[],int size){
    
double sum = 0;
double avg;
    cout << "Average of the elements is : " << " ";

    for(int index = 0;index < size;index++){
        sum = sum + arr[index];
    }


    avg = sum/size;

    cout << avg ;
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

    

FindAverage(arr,size);

}