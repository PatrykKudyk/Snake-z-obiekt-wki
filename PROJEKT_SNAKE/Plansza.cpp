#include "Plansza.h"
#include "Punkty.h"
#include <iostream>
#include "GlowaWaz.h"
#include <vector>
#include "JedzenieWieksze.h"


Plansza::Plansza(int szerokosc_planszy, int wysokosc_planszy)
{
	wlk = wysokosc_planszy;
	pole = new char*[wysokosc_planszy];
	for (int i = 0; i < wysokosc_planszy; i++)
	{
		pole[i] = new char[szerokosc_planszy];
	}
	punkty = 0;
	this->wysokosc_planszy = wysokosc_planszy;
	this->szerokosc_planszy = szerokosc_planszy;
}


Plansza::~Plansza()
{
	for (int i = 0; i < wlk; i++)
	{
		delete[] pole[i];
	}
	delete[] pole;
}

void Plansza::UstawPlansze(int szerokosc, int wysokosc, GlowaWaz &glowa, JedzenieZwykle &zwykle, std::vector<CialoWaz> cialo , JedzenieWieksze wieksze, JedzeniePomniejszajace pomniejszajace) const
{
	
		for (int i = 0; i < wysokosc; i++)
		{
			for (int j = 0; j < szerokosc; j++)
			{
				/*	if (i == 0 && j == 0) pole[i][j] = 201;
					else if (i == 0 && j == szerokosc - 1) pole[i][j] = 187;
					else if (i == wysokosc - 1 && j == 0) pole[i][j] = 200;
					else if (i == wysokosc - 1 && j == szerokosc - 1) pole[i][j] = 188;
					else*/ if (i == 0 || i == wysokosc - 1) pole[i][j] = 219;// 205;
					else if (j == 0 || j == szerokosc - 1) pole[i][j] = 219;// 186;
					else if (j == glowa.getPolozenieX() && i == glowa.getPolozenieY()) pole[i][j] = 254;
					else if (j == zwykle.getPolozenieX() && i == zwykle.getPolozenieY()) pole[i][j] = 207;
					else if (j == wieksze.getPolozenieX() && i == wieksze.getPolozenieY()) pole[i][j] = '@';
					else if (j == pomniejszajace.getPolozenieX() && i == pomniejszajace.getPolozenieY()) pole[i][j] = '$';
					else pole[i][j] = 32;
			}
		}

	for (int k = 0; k < cialo.size(); k++)
	{
		for (int i = 0; i < wysokosc; i++)
		{
			for (int j = 0; j < szerokosc; j++)
			{
				if (j == cialo[k].getPolozenieX() && i == cialo[k].getPolozenieY()) pole[i][j] = 254;
			}
		}
	}
}

void Plansza::RysujPlansze(int szerokosc, int wysokosc, Punkty punkty) const
{
	
	std::cout << "\n\n\n";
	for (int i = 0; i < wysokosc; i++)
	{
		std::cout << "\t\t\t";
		for (int j = 0; j < szerokosc; j++)
		{
			std::cout << pole[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\t\t\t" << "PUNKTY : " << punkty.getPunkty();
}

char** Plansza::getPole() const
{
	return pole;
}

char Plansza::getPole(int Y, int X)
{
	return pole[Y][X];
}
