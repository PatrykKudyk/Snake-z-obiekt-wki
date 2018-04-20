#include "JedzenieZwykle.h"



JedzenieZwykle::JedzenieZwykle(int szerokosc, int wysokosc)
{
	polozenie_x = szerokosc / 2;
	polozenie_y = wysokosc / 2;
}


JedzenieZwykle::~JedzenieZwykle()
{
}

int JedzenieZwykle::getPolozenieX()
{
	return polozenie_x;
}

int JedzenieZwykle::getPolozenieY()
{
	return polozenie_y;
}

int JedzenieZwykle::setPolozenieX(int losowa)
{
	return polozenie_x = losowa;
}

int JedzenieZwykle::setPolozenieY(int losowa)
{
	return polozenie_y = losowa;
}
