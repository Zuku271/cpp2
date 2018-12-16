#include "Klasy.h"

Pies::Pies() {}

Pies::Pies(unsigned int energia_poczatkowa)
	: energia(energia_poczatkowa)
{
}


void Pies::spaceruj()
{
	std::cout << imie << " spacer\n";
}

void Pies::jedz()
{
	std::cout << imie << " jedz\n";
}
