#pragma once
class Jedzenie
{
protected:
	int polozenie_x;
	int polozenie_y;
public:
	Jedzenie();
	virtual ~Jedzenie() = 0;
};

