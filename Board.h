#pragma once
#include<iostream>
 
using namespace std;
class board
{
private:
	int board9x9[9][9];
public:
	board();
	void generateNumber();
	void cekRegion(int, int);
	void cekRow(int, int);
	void cekColumn(int, int);
	void fill(int, int, int);
	void deleteNumber(int, int);
};