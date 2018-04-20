#pragma once
class Punkty
{
private:
	int ilosc_punktow;
public:
	Punkty();
	~Punkty();
	int getPunkty();
	void dodajPunkty(int ilosc);
	void odejmijPunkty(int ilosc);
};