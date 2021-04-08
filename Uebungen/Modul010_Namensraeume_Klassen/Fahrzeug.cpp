#include "Fahrzeug.h"
#include <iostream>
#include <string>

//zum zaehlen aller Fahrzeuge
//siehe Hauptkonstruktor
int MeineKlasse::Fahrzeug::aktuelleId = 0;

namespace MeineKlasse {
	std::string Fahrzeug::getMarke() {
		return marke;
	}
	void Fahrzeug::setMarke(std::string wert) {
		marke = wert;
	}
	std::string Fahrzeug::getModell() {
		return modell;
	}
	void Fahrzeug::setModell(std::string wert) {
		modell = wert;
	}
	int Fahrzeug::getBaujahr() {
		return baujahr;
	}
	void Fahrzeug::setBaujahr(int wert)
	{
		baujahr = wert;
	}

	//Hauptkonstruktor, welcher die komplette Initialisierungsliste abarbeitet
	Fahrzeug::Fahrzeug(std::string markeWert, std::string modellWert, int baujahrWert) :
		marke(markeWert), modell(modellWert), baujahr(baujahrWert) {
		id = ++aktuelleId; 
	}

	//Konstruktor, welcher einen Standardwert fuer das Baujahr angibt
	Fahrzeug::Fahrzeug(std::string markeWert, std::string modellWert) :
		Fahrzeug::Fahrzeug(markeWert, modellWert, 1900) { }

	//Konstruktor, welcher einen Standardwert fuer das Modell angibt
	Fahrzeug::Fahrzeug(std::string markeWert) :
		Fahrzeug::Fahrzeug(markeWert, "unbekannt") { }

	//Infos ueber ein Fahrzeug ausgeben
	void Fahrzeug::FahrzeugInfo(const Fahrzeug& fahrzeug)
	{
		std::cout << "++FahrzeugInfo++" << std::endl;
		std::cout << "Id   : " << fahrzeug.id << std::endl;
		std::cout << "Marke   : " << fahrzeug.marke << std::endl;
		std::cout << "Modell  : " << fahrzeug.modell << std::endl;
		std::cout << "Baujahr : " << fahrzeug.baujahr << std::endl;
	}

	
}