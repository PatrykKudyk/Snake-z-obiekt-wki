#pragma once
#include "Jedzenie.h"
class JedzenieWieksze :
	public Jedzenie
{
public:
	JedzenieWieksze(int szerokosc, int wysokosc);
	~JedzenieWieksze();
	int getPolozenieX();
	int getPolozenieY();
	int setPolozenieX(int losowa);
	int setPolozenieY(int losowa);
};

