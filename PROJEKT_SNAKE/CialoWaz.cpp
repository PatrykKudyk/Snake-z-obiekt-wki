#include "CialoWaz.h"
#include "GlowaWaz.h"


CialoWaz::CialoWaz()
{
	polozenie_x = 0;
	polozenie_y = 0;
}

CialoWaz::CialoWaz(int polozenieX, int polozenieY)
{
	polozenie_x = polozenieX;
	polozenie_y = polozenieY;
}


CialoWaz::~CialoWaz()
{
}


CialoWaz &CialoWaz::operator=(const CialoWaz&wzor)
{
	polozenie_x = wzor.polozenie_x;
	polozenie_y = wzor.polozenie_y;
	return *this;
}

int CialoWaz::getPolozenieX()
{
	return polozenie_x;
}

int CialoWaz::getPolozenieY()
{
	return polozenie_y;
}

void CialoWaz::setPolozenieX(int polozenie)
{
	polozenie_x = polozenie;
}

void CialoWaz::setPolozenieY(int polozenie)
{
	polozenie_y = polozenie;
}
