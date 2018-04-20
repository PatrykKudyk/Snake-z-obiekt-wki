#pragma once
#include "Jedzenie.h"
class JedzenieZwykle :
	public Jedzenie
{
public:
	JedzenieZwykle(int szerokosc, int wysokosc);
	~JedzenieZwykle();
	int getPolozenieX();
	int getPolozenieY();
	int setPolozenieX(int losowa);
	int setPolozenieY(int losowa);
};

