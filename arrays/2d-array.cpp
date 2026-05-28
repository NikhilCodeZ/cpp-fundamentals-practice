#include <iostream>
using namespace std;

int main(){
    int row =3;
    int col = 4;
    int arr[row][col];

    for(int row_index = 0; row_index < row ; row_index++){
        for (int col_index =0; col_index < col; col_index ++)
        {
            cout << "Enter the value for arr["<<row_index<<"]["<<col_index<<"] : " ;
            cin >> arr[row_index][col_index] ;
        }
        
    }

    for(int row_index = 0; row_index < row ; row_index++){
        for (int col_index =0; col_index < col; col_index ++)
        {
            
            cout << arr[row_index][col_index] << " " ;
            
        }
        cout << endl;
    }
    

    return 0;
}