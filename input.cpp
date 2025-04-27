#include <string>
#include <iostream>

std::string getInput()
{
	std::string userInput{};
	std::getline(std::cin, userInput);
	return userInput;
}