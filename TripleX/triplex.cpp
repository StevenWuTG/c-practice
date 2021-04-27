#include <iostream>

int main()
{
    std::cout << std::endl;
    std::cout << "You are FatGruber and you need to break the code to difuse the bomb!";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    a = 10;

    int abc = a * b * c;

    std::cout << std::endl;
    std::cout << abc;

    return 0;
}

