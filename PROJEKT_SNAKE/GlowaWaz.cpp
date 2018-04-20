#include "GlowaWaz.h"



GlowaWaz::GlowaWaz(int szerokosc, int wysokosc, int predkosc)
{
	polozenie_x = szerokosc / 2;
	polozenie_y = wysokosc / 2;
	predkosc_glowy = predkosc;
}


GlowaWaz::~GlowaWaz()
{
}

int GlowaWaz::getPolozenieX()
{
	return polozenie_x;
}

int GlowaWaz::getPolozenieY()
{
	return polozenie_y;
}

int GlowaWaz::setPolozenieXprawo()
{
	return ++polozenie_x;
}

int GlowaWaz::setPolozenieXlewo()
{
	return --polozenie_x;
}

int GlowaWaz::setPolozenieYgora()
{
	return --polozenie_y;
}

int GlowaWaz::setPolozenieYdol()
{
	return ++polozenie_y;
}

int GlowaWaz::getPredkosc()
{
	return predkosc_glowy;
}

void GlowaWaz::setPredkosc(int wartosc)
{
	predkosc_glowy = predkosc_glowy + wartosc;
}





