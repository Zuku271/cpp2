#include <iostream>
#include "Klasy.h"

int main()
{
	Pies wilczur;
	Pies burek = Pies();
	Pies *ptr = new Pies();
	Pies husky(70);
	husky.imie = "Max";

	burek.imie = "Burek";
	burek.barwa = "Bury";

	ptr->imie = "Reks";
	ptr->barwa = "Bialy";

	Pies labrador("Czarny", 100);
	Pies wilk(husky);
	Pies husky2(husky);
	

	burek.spaceruj();
	ptr->spaceruj();
	std::cout << husky.imie << " ma " << husky.ileEnergi() << " energi\n";
	std::cout << husky2.imie << " ma " << husky2.ileEnergi() << " energi\n";
	std::cout << "Wilk ma " << wilk.ileEnergi() << " energi\n";

	system("PAUSE");
	return 0;
}