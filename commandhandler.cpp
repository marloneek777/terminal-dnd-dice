#include "commandhandler.h"

CommandHandler::CommandHandler()
{
	// basic commands
	commands["/help"] = 0;
	commands["/quit"] = 1;
	commands["/version"] = 2;

	// dnd specific commands
	commands["/add"] = 3;
	commands["/remove"] = 4;
	commands["/clear"] = 5;
	commands["/roll"] = 6;
}

bool CommandHandler::validInput(const std::string& input)
{
	std::string trimmed = input;
	boost::algorithm::trim(trimmed);

	if (trimmed.empty())
	{
		std::cout << "Invalid input! Commands should start with a forward slash (e.g., '/help')." << std::endl;
		return false;
	}

	if (!boost::algorithm::starts_with(trimmed, "/"))
	{
		std::cout << "Invalid input! Command must start with forward slash" << std::endl;
		return false;
	}

	return true;
}





}

void CommandHandler::printCommands()
{
	for (const auto& [key, value] : commands) {
		std::cout << key << ' ' << value << std::endl;
	}
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