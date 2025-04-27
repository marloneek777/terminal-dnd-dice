#ifndef HAND_H
#define HAND_H

#include <string>
#include <iostream>
#include <map>

class DiceHand
{
public:

	DiceHand(); //Constructor
	~DiceHand(); //Deconstructor

	void manageHand(std::string userInput);
	void addDice(std::string numberOfDices_d_SidesOfDices);
	//removeDice();
	//clearHand();

private:

	std::map<int, int> dices;

};

#endif
