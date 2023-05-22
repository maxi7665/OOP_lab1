#include <iostream>
#include <Windows.h>
#include "ChessboardSquare.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "ЛР №1 ВАРИАНТ 2" << endl << endl;

	ChessboardSquare sq1;
	ChessboardSquare sq2;

	sq1.setX(1);
	sq1.setY(1);

	sq2.setX(1);
	sq2.setY(2);

	if (sq1.isWhite())
	{
		cout << "Белая " ;
	}
	else
	{
		cout << "Черная ";
	}

	sq1.printDescription();

	if (sq2.isWhite())
	{
		cout << "Белая " ;
	}
	else
	{
		cout << "Черная ";
	}

	sq2.printDescription();
		
	system("pause");

	return 0;
}