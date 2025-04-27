#include <iostream>
#include <string>

#include "hand.h"
#include "input.h"
#include "commandhandler.h"

int main()
{
    CommandHandler handler;

    handler.printCommands();

    return 0;
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
