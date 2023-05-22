#include <iostream>
#include "ChessboardSquare.h"

using namespace std;

void ChessboardSquare::setX(int x)
{
	this->x = x;
}

void ChessboardSquare::setY(int y)
{
	this->y = y;
}

bool ChessboardSquare::isWhite()
{
	return (this->x + this->y) %  2 != 0;
}

void ChessboardSquare::printDescription()
{
	cout << "Клетка с координатами (" << this->x << ", " << this->y << "). ";
	cout << "Белая: " << (this->isWhite() ? "да" : "нет") << endl;
}