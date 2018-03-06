#include <string>

class bullAndCowGame
{
public:
    void Reset(); // make a more rich return value 
    int getMaxTries();
    int getCurrentTry();
    bool isGameWon();
    bool checkGuessValidity(std::string);



private:
    int MyCurrentTry;
    static const int MyMaxTries = 5;

};