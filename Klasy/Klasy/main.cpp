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

	burek.spaceruj();
	ptr->spaceruj();

	system("PAUSE");
	return 0;
}