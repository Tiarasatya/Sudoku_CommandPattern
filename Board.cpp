#include"Board.h"

void board::generateNumber(int number)
{
	int randomNumber;
	randomNumber = rand() % number + 1;
	return randomNumber;
}

void board::cekRegion