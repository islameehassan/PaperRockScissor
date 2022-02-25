#include "Player.h"

Player::Player()
{
	score = 0;
	choice = ' ';
}

void Player::setchoice(char c)
{
	choice = c;
}

char Player::getchoice()
{
	return choice;
}

void Player::incscore()
{
	score++;
}

int Player::getscore()
{
	return score;
}
