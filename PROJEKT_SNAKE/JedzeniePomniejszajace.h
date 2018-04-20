#pragma once
#include "Jedzenie.h"
class JedzeniePomniejszajace :
	public Jedzenie
{
public:
	JedzeniePomniejszajace(int szerokosc, int wysokosc);
	~JedzeniePomniejszajace();
	int getPolozenieX();
	int getPolozenieY();
	int setPolozenieX(int losowa);
	int setPolozenieY(int losowa);
};

