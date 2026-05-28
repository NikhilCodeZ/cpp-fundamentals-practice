#include<iostream>
using namespace std;



        void ReverseStr(string str,int size){
            string str2 = str;
            int count = size;
              

              for(int index = 0;index < size;index++){
                  str[index] = str2[count-1];
                  count--;
              }
             
              cout << str << endl;
              
        }

       int getlength(string str){
            int index = 0;
            while(str[index] != '\0'){
                index++;
            }

            return index;
        }


        int main(){
            string str;
            cout << "Enter what you want to be reversed : " << " ";
            getline(cin,str); // cin dont consider text after space so getline(cin,str) is used

            int size = getlength(str);
           cout << "Reversed string is : " << " ";
            ReverseStr(str,size);


            return 0;
        }

   

