#include "JedzeniePomniejszajace.h"



JedzeniePomniejszajace::JedzeniePomniejszajace(int szerokosc, int wysokosc)
{
	polozenie_x = szerokosc / 2;
	polozenie_y = wysokosc / 2;
}


JedzeniePomniejszajace::~JedzeniePomniejszajace()
{
}

int JedzeniePomniejszajace::getPolozenieX()
{
	return polozenie_x;
}

int JedzeniePomniejszajace::getPolozenieY()
{
	return polozenie_y;
}

int JedzeniePomniejszajace::setPolozenieX(int losowa)
{
	return polozenie_x = losowa;
}

int JedzeniePomniejszajace::setPolozenieY(int losowa)
{
	return polozenie_y = losowa;
}
