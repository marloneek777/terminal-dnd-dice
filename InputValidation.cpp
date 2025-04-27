#include <iostream>
#include <string>

void missingBackslashWarning();
void emptyStringWarning();
bool stringContainsChar(std::string& s, char charToFind);
bool startsWithSlash(const std::string& s);
std::string removeSpaces(const std::string& s);

bool checkUserInput(std::string& userInput)
{
	if (userInput.empty())
	{
		emptyStringWarning();
		return false;
	}

	if (!startsWithSlash(userInput))
	{
		missingBackslashWarning();
		return false;
	}
	
	return true;
}

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

