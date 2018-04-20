#pragma once
#include "Waz.h"

class GlowaWaz :
	public Waz
{
private:
	int	predkosc_glowy;
public:
	GlowaWaz(int szerokosc, int wysokosc, int predkosc);
	~GlowaWaz();
	int getPolozenieX();
	int getPolozenieY();
	int setPolozenieXprawo();
	int setPolozenieXlewo();
	int setPolozenieYgora();
	int setPolozenieYdol();
	int getPredkosc();
	void setPredkosc(int wartosc);
};

