#pragma once
#include "Waz.h"

class CialoWaz :
	public Waz
{
public:
	CialoWaz();
	CialoWaz(int polozenieX , int polozenieY);
	~CialoWaz();
	CialoWaz &CialoWaz::operator=(const CialoWaz&wzor);
	int getPolozenieX();
	int getPolozenieY();
	void setPolozenieX(int polozenie);
	void setPolozenieY(int polozenie);
};

