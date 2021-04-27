#include <iostream>

int main()
{
    std::cout << std::endl;
    std::cout << "You are FatGruber and you need to break the code to difuse the bomb!";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";

    // Declare 3 numbers
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;


    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print game variables 
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "\n+ The codes add up to : " << CodeSum;
    std::cout << "\n+ The codes multiply to give : " << CodeProduct << std::endl;

    //store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    
    std::cout << "\nYou entered:\n" << GuessA << GuessB << GuessC;

    //game logic check
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct )
    {
        std::cout << "\nCongrats! You are the Weener!";
    }
    else
    {
        std::cout << "\nYou lose!" << "\nFATALITY!!!";
    }



    return 0;
}

