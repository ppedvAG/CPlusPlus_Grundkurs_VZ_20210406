#include <iostream>
#include "Fahrzeug.h"

using namespace MeineKlasse;
int main()
{
	//drei Fahrzeuge erstellen
	//jedes bekommt eine eigene Id zugewiesen
	Fahrzeug auto1 = Fahrzeug("Audi", "A4", 1996);
	Fahrzeug auto2 = Fahrzeug("Hyundai", "Ioniq");
	Fahrzeug auto3 = Fahrzeug("Volkswagen");

	Fahrzeug::FahrzeugInfo(auto1);
	Fahrzeug::FahrzeugInfo(auto2);
	Fahrzeug::FahrzeugInfo(auto3);
}