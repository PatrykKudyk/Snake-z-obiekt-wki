#include "JedzenieWieksze.h"



JedzenieWieksze::JedzenieWieksze(int szerokosc, int wysokosc)
{
	polozenie_x = szerokosc / 2;
	polozenie_y = wysokosc / 2;
}


JedzenieWieksze::~JedzenieWieksze()
{
}

int JedzenieWieksze::getPolozenieX()
{
	return polozenie_x;
}

int JedzenieWieksze::getPolozenieY()
{
	return polozenie_y;
}

int JedzenieWieksze::setPolozenieX(int losowa)
{
	return polozenie_x = losowa;
}

int JedzenieWieksze::setPolozenieY(int losowa)
{
	return polozenie_y = losowa;
}
