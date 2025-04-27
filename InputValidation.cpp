#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

void missingBackslashWarning();
void emptyStringWarning();

bool stringContainsChar(std::string& s, char charToFind);
bool startsWithSlash(const std::string& s);
std::string removeSpaces(const std::string& s);

bool checkUserInput(std::string& userInput)
{

	std::string trimmed_input = boost::algorithm::trim_copy(userInput);

	if (trimmed_input.empty())
	{
		emptyStringWarning();
		return false;
	}

	if (!startsWithSlash(trimmed_input))
	{
		missingBackslashWarning();
		return false;
	}


	return true;
}

//void readCommandAfterSlash(const std::string& s)
//{
//	for (int i = 0; i < s.size() + 1; ++i)
//	{
//
//	}
//}

void missingBackslashWarning()
{

	std::cout << "Invalid input! " << "Command must start with forward slash" << std::endl;
}

void emptyStringWarning()
{
	std::cout << "Invalid input! " << "Empty input..." << std::endl;
}

bool startsWithSlash(const std::string& s)
{
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ')
		{
			continue;
		}

		return (s[i] == '/');
	}
	return false;
}

bool stringContainsChar(std::string& s, char charToFind)
{
	auto it = std::find(s.begin(), s.end(), charToFind);

	if (it != s.end())
	{
		return true;
	}
	return false;
}

std::string removeSpaces(const std::string& s)
{
	std::string result{};
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != ' ')
		{
			result.push_back(s[i]);
		}
	}
	return result;
}

//char* removeSpaces(char* str)
//{
//	int i = 0, j = 0;
//	while (str[i])
//	{
//		if (str[i] != ' ')
//			str[j++] = str[i];
//		i++;
//	}
//	str[j] = '\0';
//	return str;
//} 

