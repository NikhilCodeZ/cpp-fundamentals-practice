#include<iostream>
using namespace std;
#include<cstdlib>

int main(){
    int num;
    srand(time(0));
    int rand_num = rand() % 10 + 1;
    char opt;
    cout << "Welcome to the Number guessing game! " << endl;
    cout << "You have to Guess a number between 1 - 10 " << endl;


    do{cout << "Guess the Number : " << endl;
    cin >> num;
    if(num == rand_num){
        cout << "Congratulations !! You have guessed the correct number " << endl;

    }
    else{
        cout << "Better luck next time!!" << endl;
    }

    
    cout << "You want to try again? (y/n) " << endl;
    cin >> opt;
}while(opt == 'y');

cout << "Thanks for playing the game !" << endl;

    return 0;
}