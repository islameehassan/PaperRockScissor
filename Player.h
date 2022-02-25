#pragma once
class Player
{
	int score;
	char choice;
public:
	Player(); // a default constructor to initialize score to 0;
	void setchoice(char c); // set the player's choice
	char getchoice(); // return the player's choice
	void incscore(); // increase score by 1
	int getscore();
};

