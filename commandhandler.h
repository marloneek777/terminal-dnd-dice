#ifndef COMMAND_HANDLER_H
#define COMMAND_HANDLER_H

#include <iostream>
#include <string>
#include <unordered_map>

#include "input.h"
#include <boost/algorithm/string.hpp>

class CommandHandler
{
private:
	
	std::unordered_map<std::string, int> commands;

public:

	CommandHandler();


	//dev functions
	bool validInput(const std::string& input);
	void printCommands();

};

#endif