#include <iostream>

using namespace std;


int main()
{
int num = 4;
int guess;
int guessCount=0;
int guessLimit=3;
bool outofGuess= false;

while (num!=guess&&!outofGuess){

if (guessCount<guessLimit){

    cout <<"enter your guess";
    cin >>guess;
    guessCount++;

}else {
    outofGuess=true;
    }
}

if (outofGuess){

    cout<< "you lose";

}else {
    cout <<"you won";
    }


    return 0;
}
