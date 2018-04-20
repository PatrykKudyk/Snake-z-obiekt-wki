#include "Menu.h"
#include "Punkty.h"
#include <iostream>
#include <windows.h>
#include <vector>
#include "CialoWaz.h"

using namespace  std;

Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::MenuPoczatkowe()
{
	cout << endl << "\t\t\t\tWitaj w grze snake!" << endl;
	cout << "\tTwoj waz na start zacznie sie poruszac w prawo, wiec badz przygotowany" << endl;
	cout << "      Zaraz bedziesz musial wybrac wielkosc planszy jakiej bedziesz chcial uzywac" << endl;
	cout << "\t\t\t   Zalecana to 50x20 albo 30x15" << endl;
	cout << "\t\t\t\tZapraszam do gry!" << endl << "\t";
	system("pause");
	system("cls");
}

void Menu::Legenda()
{
	cout << "\t\t\tJuz zaraz zaczniesz gre, jeszcze tylko zapoznaj sie z legenda : " << endl;
	cout << "\t\"" << (char)254 << "\" - waz" << endl
		<< "\t\"" << (char)207 << "\" - zwykle jedzenie (powieksza weza o 1) - 10 Pkt" << endl
		<< "\t\"@\" - wieksze jedzenie (powieksza weza o 2) - 30 Pkt" << endl
		<< "\t\"$\" - pomniejszajace jedzenie (pomniejsza weza o 1) - (-20) Pkt" << endl
		<< "\t\"" << (char)219 << "\" - sciany planszy" << endl;
	system("pause");
	system("cls");
}

void Menu::Przegrana(Punkty obj, vector<CialoWaz> cialo)
{
	system("cls");
	cout << endl << "\t\t\t\t\tPrzegrales." << endl;
	cout << "\t\tTwoj wynik to : " << obj.getPunkty() << " punktow oraz waz o dlugosci : " << cialo.size() + 1 << ". Gratulacje!" << endl;
	cout << "\t\tJezeli jeszcze sie nie poddajesz to proponuje zagrac ponownie!" << endl << "\t\t";
	system("pause");
}

void Menu::Sciana()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\tTwoj waz uderzyl w sciane." << endl;
	Sleep(2000);
}

void Menu::Cialo()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\tTwoj waz zjadl sam siebie." << endl;
	Sleep(2000);
}
