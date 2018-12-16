#include <iostream>
#include "Klasy.h"

int main()
{
	Pies jamnik("A");
	Pies wilczur("B");

	std::cout << jamnik.imie << " " << wilczur.imie << '\n';
	jamnik.spaceruj();
	wilczur.spaceruj();
	jamnik.jedz();

	system("PAUSE");
	return 0;
}