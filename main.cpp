#include <iostream>
#include <string>

#include "hand.h"
#include "InputValidation.h"
#include "input.h"

int main()
{
    std::string userInput{};

    std::getline(std::cin, userInput);

    bool x = checkUserInput(userInput); // is valid input
    std::cout << x << "<-";

}

/*

/add eg.1d6
/remove eg.2d6
/showhand
/clearhand
/rollhand
/quit
/help

*/
