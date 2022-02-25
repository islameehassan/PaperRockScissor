#include "Computer.h"
#include <time.h>
#include <stdlib.h>

Computer::Computer()
{
	score = 0;
}
void Computer::setchoice() {
	srand(NULL);
	choice = choices[rand() % 3];
}
char Computer::getchoice() {
	return choice;
}

void Computer::incscore()
{
	score++;
}

int Computer::getscore()
{
	return score;
}
