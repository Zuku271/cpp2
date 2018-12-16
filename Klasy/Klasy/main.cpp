#include <iostream>
#include "Klasy.h"

int main()
{
	Pies wilczur;
	Pies burek = Pies();
	Pies *ptr = new Pies();
	Pies husky(70);

	burek.imie = "Burek";
	burek.barwa = "Bury";

	ptr->imie = "Reks";
	ptr->barwa = "Bialy";

	Pies labrador("Czarny", 100);
	Pies wilk(husky);
	

	burek.spaceruj();
	ptr->spaceruj();
	std::cout << "Husky ma " << husky.ileEnergi() << " energi\n";
	std::cout << "Wilk ma " << wilk.ileEnergi() << " energi\n";

	system("PAUSE");
	return 0;
}