#include "Lager.h"
#include <iostream>
int main()
{
	srand(time(0));

	//Lager mit 50 Artikeln
	Lager lager = Lager(50); 

	//drei Objekte der Klasse Personal
	Personal personal1 = Personal(1); 
	Personal personal2 = Personal(2); 
	Personal personal3 = Personal(3); 

	bool lagerLeer = false; 
	//solange bis Lager leer ist 
	do
	{
		//zufaellig einen Verauf fuer einen Personaler starten
		int verkaeufer = rand() % 3 + 1;
		switch (verkaeufer)
		{
		case 1:
			lagerLeer = lager.verkauf(personal1);
			break;
		case 2:
			lagerLeer = lager.verkauf(personal2);
			break;
		case 3:
			lagerLeer = lager.verkauf(personal3);
			break;
		}

	} while (!lagerLeer);

	//Ausgabe der Verkaufssummen
	std::cout << personal1.getSumme() << std::endl;
	std::cout << personal2.getSumme() << std::endl;
	std::cout << personal3.getSumme() << std::endl;
}