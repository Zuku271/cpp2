#include "Klasy.h"

Pies::Pies() : energia(50) {}

Pies::Pies(unsigned int energia_poczatkowa)
	: energia(energia_poczatkowa) {}

Pies::Pies(const std::string & _barwa, unsigned int energia_poczatkowa)
	: barwa(_barwa), energia(energia_poczatkowa) {}

Pies::Pies(const Pies & t)
{
	imie = t.imie + "_2";
	barwa = t.barwa;
	energia = t.energia + 3;
}


void Pies::spaceruj()
{
	energia = energia - 1;
	std::cout << imie << " spaceruje (energia: " << energia << ")\n";
}

void Pies::jedz()
{
	energia = energia + 1;
	std::cout << imie << " je (energia: " << energia << ")\n";
}

unsigned int Pies::ileEnergi()
{
	return energia;
}
