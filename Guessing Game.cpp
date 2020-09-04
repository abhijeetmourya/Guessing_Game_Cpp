#include <iostream>

using namespace std;

int main()
{
    int secret = 3;
    int guess;
    int guesscount;

    while(guess != secret && guesscount != 3){               //Prompts the user for a number until it's correct
        cout<<"Guess a number(1 to 9): ";
        cin>>guess;
        guesscount++;
    }
    if(guesscount < 3){
        cout<<"You Win!";
    }else
    cout<<"You Lose:(";      //Informs the user if the guess is correct or wrong

    return 0;
}
