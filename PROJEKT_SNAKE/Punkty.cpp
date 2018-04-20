#include "Punkty.h"
#include <iostream>


Punkty::Punkty()
{
	ilosc_punktow = -10;
}


Punkty::~Punkty()
{
}

int Punkty::getPunkty()
{
	return ilosc_punktow;
}
void Punkty::dodajPunkty(int ilosc)
{
	ilosc_punktow = ilosc_punktow + ilosc;
}

void Punkty::odejmijPunkty(int ilosc)
{
	ilosc_punktow = ilosc_punktow - ilosc;
}
