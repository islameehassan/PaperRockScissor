#include "Game.h"

Game::Game()
{
	cout << "##############PaperRockScissors##############\n";
	Rules();
}

void Game::Rules()
{
	cout << "Paper wins aganist Rocks\n" << "Rock wins aganist Scissors\n" <<
		"Scissors wins aganist Paper\n";
}

void Game::Menu()
{
	cout << '\t' << "1.Player vs. Player\n";
	cout << '\t' << "2.Player vs. Computer\n";
	cout << '\t' << "3.Computer vs. Computer";
	cout << '\t' << "4.Exit\n";
}
void Game::PlyPly(Player &p1, Player &p2)
{
	char obj1, obj2;
	cout << "Player 1: ";
	cin >> obj1;
	p1.setchoice(obj1);
	cout << "Player 2: ";
	cin >> obj2;
	p2.setchoice(obj2);
	if (Logic(p1.getchoice(), p2.getchoice()) == 0)
		cout << "Tie!\n";
	else if (Logic(p1.getchoice(), p2.getchoice()) == 1) {
		cout << "Player 1 wins\n";
		p1.incscore();
	}
	else {
		cout << "Player 2 wins\n";
		p2.incscore();
	}
	cout << "Player 1: " << p1.getscore() << '\n';
	cout << "Player 2: " << p2.getscore() << '\n';
}
void Game::PlyCom(Player & p1, Computer &COM)
{
	char obj1;
	cout << "Player 1: ";
	cin >> obj1;
	p1.setchoice(obj1);
	cout << "Computer: ";
	COM.setchoice();
	cout << COM.getchoice() << '\n';
	if (Logic(p1.getchoice(), COM.getchoice()) == 0)
		cout << "Tie!\n";
	else if (Logic(p1.getchoice(), COM.getchoice()) == 1) {
		cout << "Player 1 wins\n";
		p1.incscore();
	}
	else {
		cout << "Computer wins\n";
		COM.incscore();
	}
	cout << "Player 1: " << p1.getscore() << '\n';
	cout << "Computer: " << COM.getscore() << '\n';
}

void Game::ComCom(Computer &COM1, Computer &COM2)
{
	cout << "Computer 1: ";
	COM1.setchoice();
	cout << COM1.getchoice() << '\n';
	cout << "Computer 2: ";
	COM2.setchoice();
	cout << COM2.getchoice() << '\n';
	if (Logic(COM1.getchoice(), COM2.getchoice()) == 0)
		cout << "Tie!\n";
	else if (Logic(COM1.getchoice(), COM2.getchoice()) == 1) {
		cout << "Computer 1 wins\n";
		COM1.incscore();
	}
	else {
		cout << "Computer 2 wins\n";
		COM2.incscore();
	}
	cout << "Computer 1: " << COM1.getscore() << '\n';
	cout << "Computer 2: " << COM2.getscore() << '\n';
}
int Game::Logic(char _st, char _nd)
{
	int cases[3]{ 0, 1, 2 };
	if (islower(_st)) {
		_nd = tolower(_nd);
		if (_st == _nd)
			return cases[0];
		else if (_st == 'p' && _nd == 's')
			return cases[2];
		else if (_st == 's' && _nd == 'p')
			return cases[1];
		else if (_st == 'p' && _nd == 'r')
			return cases[1];
		else if (_st == 'r' && _nd == 'p')
			return cases[2];
		else if (_st == 'r' && _nd == 's')
			return cases[1];
		else if (_st == 's' && _nd == 'r')
			return cases[2];
	}
	else
	{
		_nd = toupper(_nd);
		if (_st == _nd)
			return cases[0];
		else if (_st == 'P' && _nd == 'S')
			return cases[2];
		else if (_st == 'S' && _nd == 'P')
			return cases[1];
		else if (_st == 'P' && _nd == 'R')
			return cases[1];
		else if (_st == 'R' && _nd == 'P')
			return cases[2];
		else if (_st == 'R' && _nd == 'S')
			return cases[1];
		else if (_st == 'S' && _nd == 'R')
			return cases[2];
	}
}
