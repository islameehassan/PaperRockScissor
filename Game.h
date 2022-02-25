#pragma once
#include <iostream>
#include "Player.h"
#include "Computer.h"
using namespace std;
class Game
{
public:
	Game(); // set proceed to 1 and display the welcoming message
	void Rules(); // stating the rules of the game prior to starting;
	void Menu(); // displaying the three modes of the game
	void PlyPly(Player &p1, Player&p2); // Player vs Player mode 
	void PlyCom(Player &p1, Computer &COM); // Player vs Computer mode 
	void ComCom(Computer &COM1, Computer &COM2); // Computer vs Computer mode 
	int Logic(char _st, char _nd); // logic governing the game flow
};

