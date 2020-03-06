//Определение функций

#include "header_Figures.h"

Figure::Figure(const string &name)
{
	Name = name;
	
	S=0;
	p=0;
}

string Fugure::getName()//Метод возвращает Имя фигуры.
{
	return Name;
}

void Figure::printS() // Метод выводит площадь.
{
	cout << "S ="  << S << endl;
}

void Figure::printP() // Метод выводит периметр.
{
	cout << "P ="  << P << endl;
}