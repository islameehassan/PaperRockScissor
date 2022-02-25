#pragma once
class Computer
{
	int score;
	char choices[3] = {'R', 'P', 'S'};
	char choice;
public:
	Computer(); // a default constructor to set score to zero and create the three choices of the game
	void setchoice(); // set the COM's choice to a random number
	char getchoice(); // return the COM's choice
	void incscore(); // increase score by 1
	int getscore();
};

