#include <iostream>
#include <vector>
#include <memory>
#include "Fahrzeug.h"
int main()
{
	//um die Funktion "rand()" mit einem Seed zu versehen
	srand(time(0)); 
	std::vector<std::shared_ptr<MeineKlasse::Fahrzeug>> fahrzeuge;

	//50 Autos mit einem zufaelligen Speed erzeugen
	for (size_t zaehler = 0; zaehler < 50; zaehler++)
	{
		fahrzeuge.push_back(std::make_shared<MeineKlasse::Fahrzeug>(rand() % 120 + 1)); 
	}

	//ein Pointer fuer ein Fahrzeug erstellen (vorerst nullptr!)
	std::shared_ptr<MeineKlasse::Fahrzeug> schnellstesFahrzeug; //nullptr

	//ueber jedes Fahrzeug iterieren
	for (std::shared_ptr<MeineKlasse::Fahrzeug> fahrzeug : fahrzeuge)
	{
		//auf nullptr testen
		if (!schnellstesFahrzeug)
			schnellstesFahrzeug = fahrzeug;

		//Speed vergleichen und eventuell zuweisen
		if(schnellstesFahrzeug->getSpeed() < fahrzeug->getSpeed())
			schnellstesFahrzeug = fahrzeug;
	}
	//Info ueber das schnellste Fahrzeug ausgeben
	MeineKlasse::Fahrzeug::FahrzeugInfo(*schnellstesFahrzeug);
}
