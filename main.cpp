#include <iostream>
#include <string>
#include "bullcowgame.h"

using namespace std;

void PrintIntro()
{
    //introduce the game to the player
    const int WORD_LENGTH = 6;
    
    std::cout << "\n****Welcome to Bull and Cow game****\n";
    std::cout << "The game is, can you guess the " << WORD_LENGTH << " letter isogram I am thinking of?\n";
    std::cout << "An isogram is a word with no repeating letters!\n";
    std::cout << endl;

    return;
}

string GetGuess()
{
    //get a guess from the player
    
    std::cout << "Enter a guess?: ";
    string Guess = "";
    std::getline (std::cin,Guess);
    std::cout << "Your guess was " << Guess;
    std::cout << endl;

    return Guess;
}

void PLAYGAME() 
{
    bullAndCowGame BCGame; // instantiate a new game
    int MaxTries = BCGame.getMaxTries();
    std::cout << MaxTries << std::endl;

    // sets the number chances the player gets to guess the answer
    for (int i = 1; i <= MaxTries; i++)
    {
        GetGuess();
    }

    std::cout << endl;
}

bool askToPlayAgain()
{
    string Answer = "";
    std::cout << "Would you like to play the game again Yes or No? ";
    std::getline(std::cin, Answer);
    std::cout << "You Answered: " << Answer[0] <<endl;
    
    return (Answer[0] == 'y') || (Answer[0] == 'Y');
}

int main()
{
    bool bPlayAgain = false; 
    do 
    {
        PrintIntro();
        PLAYGAME();
        bPlayAgain = askToPlayAgain();
    } while (bPlayAgain);

    return 0;
}