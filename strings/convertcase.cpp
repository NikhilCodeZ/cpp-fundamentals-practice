#include<iostream>
using namespace std;



        // string ReverseStr(string str,int size){
        //     string str2 = str;
        //     int count = size;
              

        //       for(int index = 0;index < size;index++){
        //           str[index] = str2[count-1];
        //           count--;
        //       }
             
        //       return str;
              
        // }

        

       int getlength(string str){
            int index = 0;
            while(str[index] != '\0'){
                index++;
            }

            return index;
        }


        int main(){
            string str;
            cout << "Enter string : " << " ";
            getline(cin,str); // cin dont consider text after space so getline(cin,str) is used

            int size = getlength(str);
 
            string str2 = str;
            for(int index=0;index<size;index++){
                  
                str[index] = str2[index] -'a' +'A';
            }
           
           cout << "Case Converted string is : "<<str<<" " << " ";
           

            return 0;
        }

   

