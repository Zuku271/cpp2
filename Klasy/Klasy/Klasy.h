#pragma once
#include <string>
#include <iostream>

class Pies
{
public:
	std::string imie;
	std::string barwa;
	unsigned int energia;

	Pies();
	Pies(unsigned int energia_poczatkowa);
	Pies(const std::string &_barwa, unsigned int energia_poczatkowa);
	Pies(const Pies &t);

	void spaceruj();
	void jedz();
	unsigned int ileEnergi();
};