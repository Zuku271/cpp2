#include "Klasy.h"

Pies::Pies(const std::string & _imie) : imie(_imie) {}

void Pies::spaceruj()
{
	std::cout << imie << " spacer\n";
}

void Pies::jedz()
{
	std::cout << imie << " jedz\n";
}
