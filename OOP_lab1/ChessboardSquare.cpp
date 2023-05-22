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
	cout << "������ � ������������ (" << this->x << ", " << this->y << "). ";
	cout << "�����: " << (this->isWhite() ? "��" : "���") << endl;
}