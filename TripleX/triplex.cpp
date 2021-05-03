#include <iostream>
#include <ctime>

void PrintIntro(int Difficulty)
{

    std::cout << "\n\nYou are FatGruber and you need to break the code to difuse the bomb!";
    std::cout << "\nYou are are currently on level " << Difficulty;
    std::cout << std::endl;
    std::cout << "\nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    // Declare 3 numbers
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;


    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print game variables 
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to : " << CodeSum;
    std::cout << "\n+ The codes multiply to give : " << CodeProduct << std::endl;

    //store player guess
    int GuessA, GuessB, GuessC;
    std::cout << "Guess # 1 : ";
    std::cin >> GuessA;
    std::cout << "Guess # 2 : ";
    std::cin >> GuessB;
    std::cout << "Guess # 3 : ";
    std::cin >> GuessC;
    
    std::cout << "\nYou entered:\n" << GuessA << GuessB << GuessC;
    std::cout << "\n.\n..\n...";


    //game logic check
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct )
    {
        std::cout << "\nCongrats! You are the Weener!";
        return true;
    }
    else
    {
        std::cout << "\nYou lose!" << "\nFATALITY!!!";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //creates new random sequence daily

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty) //Loop until all levels are done
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears errors
        std::cin.ignore(); // discards buffer
        if (bLevelComplete)
        {
           ++LevelDifficulty;
        }
        
        
    }

    std::cout << "\n *** Great work Fatgruber! you've done it!!! FATGRUBER!!!";
    return 0;
}

