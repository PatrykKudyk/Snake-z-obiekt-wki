#include <iostream>
#include "Plansza.h"
#include "GlowaWaz.h"
#include <conio.h>
#include <ctime>
#include "JedzenieZwykle.h"
#include "Menu.h"
#include "CialoWaz.h"
#include <vector>
#include "JedzenieWieksze.h"
#include <windows.h>

using namespace std;



int main()
{
	bool wyjscie;
	char znak = 77, znak_pom;
	int szerokosc, wysokosc, losowa_x, losowa_y;
	int licznik_wiekszego = 0, licznik_pomniejszajacego = 0;
	Punkty punkty;
	Menu menu;
	JedzenieWieksze wieksze(0, 0);
	JedzeniePomniejszajace pomniejszone(0, 0);

	menu.MenuPoczatkowe();

	do {
		cout << "\n\tTeraz podaj wielkosc planszy. (Szerokosc musi byc wieksza niz wysokosc)" << endl;
		cout << "\t\tSzerokosc musi miescic sie w przedziale <25 ; 50>" << endl;
		cout << "\t\tWysokosc musi miescic sie w przedziale <15 ; 30>" << endl;
		cout << "\t\t\tPodaj szerokosc planszy : ";
		cin >> szerokosc;
		cout << "\t\t\tPodaj wysokosc planszy : ";
		cin >> wysokosc;
		system("cls");
	} while (szerokosc < 25 || szerokosc > 50 || wysokosc < 15 || wysokosc > 30);
	
	menu.Legenda();

	GlowaWaz glowa(szerokosc, wysokosc, 80 );
	JedzenieZwykle zwykle(szerokosc, wysokosc);
	Plansza *plansza = new Plansza(szerokosc, wysokosc);
	vector <CialoWaz> cialo;
	srand(time(NULL));
	cialo.push_back(CialoWaz());

	do {
		plansza->UstawPlansze(szerokosc, wysokosc, glowa, zwykle, cialo, wieksze, pomniejszone);
		plansza->RysujPlansze(szerokosc, wysokosc, punkty);

//---------------------------------------------------------------------------------------------------------------------------// 
													// JEDZENIE ZWYKLE //

		if (glowa.getPolozenieX() == zwykle.getPolozenieX() && glowa.getPolozenieY() == zwykle.getPolozenieY())
		{
			cialo.push_back(CialoWaz());
			do {
					losowa_x = rand() % szerokosc;	
					losowa_y = rand() % wysokosc;
			} while (plansza->getPole(losowa_y, losowa_x) != 32);
			zwykle.setPolozenieX(losowa_x);
			zwykle.setPolozenieY(losowa_y);
			punkty.dodajPunkty(10);
		}
													// JEDZENIE ZWYKLE //
//---------------------------------------------------------------------------------------------------------------------------// 


//---------------------------------------------------------------------------------------------------------------------------// 
	                                             	// JEDZENIE WIEKSZE//
		if (licznik_wiekszego == 40)
		{
			
			do {
				losowa_x = rand() % szerokosc;
				losowa_y = rand() % wysokosc;
			} while (plansza->getPole(losowa_y, losowa_x) != 32);
			wieksze.setPolozenieX(losowa_x);
			wieksze.setPolozenieY(losowa_y);
		}
		if (glowa.getPolozenieX() == wieksze.getPolozenieX() && glowa.getPolozenieY() == wieksze.getPolozenieY())
		{
			cialo.push_back(CialoWaz(cialo[cialo.size() - 1].getPolozenieX(), cialo[cialo.size() - 1].getPolozenieY()));
			cialo.push_back(CialoWaz());
			punkty.dodajPunkty(30);
		}
		if (licznik_wiekszego == 100 || (glowa.getPolozenieX() == wieksze.getPolozenieX() && glowa.getPolozenieY() == wieksze.getPolozenieY()))
		{
			wieksze.setPolozenieX(0);
			wieksze.setPolozenieY(0);
			licznik_wiekszego = 0;
		}
													//		JEDZENIE WIEKSZE
//---------------------------------------------------------------------------------------------------------------------------//

//---------------------------------------------------------------------------------------------------------------------------// 
													// JEDZENIE POMNIEJSZAJACE

		if (licznik_pomniejszajacego == 70)
		{

			do {
				losowa_x = rand() % szerokosc;
				losowa_y = rand() % wysokosc;
			} while (plansza->getPole(losowa_y, losowa_x) != 32);
			pomniejszone.setPolozenieX(losowa_x);
			pomniejszone.setPolozenieY(losowa_y);
		}
		if (glowa.getPolozenieX() == pomniejszone.getPolozenieX() && glowa.getPolozenieY() == pomniejszone.getPolozenieY())
		{
			cialo.pop_back();
			punkty.odejmijPunkty(20);
		}
		if (licznik_pomniejszajacego == 200 || (glowa.getPolozenieX() == pomniejszone.getPolozenieX() && glowa.getPolozenieY() == pomniejszone.getPolozenieY()))
		{
			pomniejszone.setPolozenieX(0);
			pomniejszone.setPolozenieY(0);
			licznik_pomniejszajacego = 0;
		}

													// JEDZENIE POMNIEJSZAJACE
//---------------------------------------------------------------------------------------------------------------------------// 
		

//---------------------------------------------------------------------------------------------------------------------------// 
													//USTAWIANIE POLOZENIA CIALA WEZA
			for (int i = cialo.size() - 1; i >= 0; i--)   
			{
				if (i == 0)
				{
					cialo[i].setPolozenieX(glowa.getPolozenieX());
					cialo[i].setPolozenieY(glowa.getPolozenieY());
				}
				else if (i >= 1)
					cialo[i] = cialo[i - 1];
			}
													//USTAWIANIE POLOZENIA CIALA WEZA
//---------------------------------------------------------------------------------------------------------------------------// 


//---------------------------------------------------------------------------------------------------------------------------// 
													//WYBÓR KIERUNKU WEZA
												//	72 -> góra
												//	80 -> dó³
												//	75 -> lewo
												//	77 -> prawo

			znak_pom = 254;

			do
			{
				wyjscie = false;
				if (_kbhit())
				{
					znak_pom = _getch();
				}

				switch (znak_pom)
				{
				case 80:
					if (znak != 72 && znak != 80) znak = znak_pom;
					wyjscie = true;
					break;
				case 77:
					if (znak != 75 && znak != 77) znak = znak_pom;
					wyjscie = true;
					break;
				case 75:
					if (znak != 75 && znak != 77) znak = znak_pom;
					wyjscie = true;
					break;
				case 72:
					if (znak != 72 && znak != 80) znak = znak_pom;
					wyjscie = true;
					break;
				case 27:
					znak = znak_pom;
					wyjscie = true;
					break;
				default:
					break;
				}

				if (wyjscie) break;

			} while (_kbhit() != false);


			switch (znak)
			{
			case 72:
				glowa.setPolozenieYgora();
				break;
			case 80:
				glowa.setPolozenieYdol();
				break;
			case 75:
				glowa.setPolozenieXlewo();
				break;
			case 77:
				glowa.setPolozenieXprawo();
				break;
			default:
				break;
			}

													//WYBÓR KIERUNKU WEZA
//---------------------------------------------------------------------------------------------------------------------------// 


//---------------------------------------------------------------------------------------------------------------------------// 
													//WARUNKI PRZEGRANEJ

			if (glowa.getPolozenieX() == 0 || glowa.getPolozenieX() == szerokosc - 1 || glowa.getPolozenieY() == 0 || glowa.getPolozenieY() == wysokosc - 1 )
			{
				menu.Sciana();
				break;
			}
		for(int i = 1; i < cialo.size(); i++)
		{
			if (glowa.getPolozenieX() == cialo[i].getPolozenieX() && glowa.getPolozenieY() == cialo[i].getPolozenieY())
			{
				menu.Cialo();
				znak = 27;
			}

		}

													//WARUNKI PRZEGRANEJ
//---------------------------------------------------------------------------------------------------------------------------// 


//---------------------------------------------------------------------------------------------------------------------------// 
													//LICZNIKI

		licznik_pomniejszajacego++;
		licznik_wiekszego++;

													//LICZNIKI
//---------------------------------------------------------------------------------------------------------------------------// 


		Sleep(glowa.getPredkosc());
		system("cls");
	} while (znak != 27); //ESC

	menu.Przegrana(punkty , cialo);
	
	cialo.clear();

	return 0;
}