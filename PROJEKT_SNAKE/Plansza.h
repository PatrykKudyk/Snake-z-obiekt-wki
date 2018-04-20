#pragma once
#include "Punkty.h"
#include "GlowaWaz.h"
#include "JedzenieZwykle.h"
#include <vector>
#include "JedzenieWieksze.h"
#include "JedzeniePomniejszajace.h"
#include "CialoWaz.h"

class Plansza
{
private:
	Punkty *punkty;
	char **pole;
	int wysokosc_planszy;
	int szerokosc_planszy;
	int wlk;
public:
	Plansza(int szerokosc_planszy, int wysokosc_planszy);
	~Plansza();
	void UstawPlansze(int szerokosc, int wysokosc, GlowaWaz &glowa, JedzenieZwykle &zwykla, std::vector<CialoWaz> cialo, JedzenieWieksze wieksze, JedzeniePomniejszajace pomniejszajace) const;
	void RysujPlansze(int szerokosc, int wysokosc, Punkty punkty) const;
	char** getPole() const;
	char getPole(int Y, int X);
};

