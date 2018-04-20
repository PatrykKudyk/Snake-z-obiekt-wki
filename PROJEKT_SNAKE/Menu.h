#pragma once
#include <vector>
#include "CialoWaz.h"
class Punkty;

class Menu
{
public:
	Menu();
	~Menu();
	friend Punkty;
	void MenuPoczatkowe();
	void Legenda();
	void Przegrana(Punkty obj , std::vector<CialoWaz> cialo);
	void Cialo();
	void Sciana();
};

