//Определение функций.

#include "header_Quadrangles.h"

Square::Square():Figure("Square")
{
	a = 0;
}

Square::Square(float m):Figure("Square")
{
	a = m;
}

Square::~Square()
{
	cout << "Destructor" << endl;
}

float Square::getA()
{
	return 0;
}

void Square::colculateS()
{
	S = a*a;
}

void Square::colculateP()
{
	P = 4*a;
}