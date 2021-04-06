#include <iostream>
#include <string>
#include <algorithm>

enum class Obst {
	Unbekannt,
	Kirsche,
	Banane,
	Orange,
	Zitrone,
	Wassermelone,
	Birne
};

Obst Aufloesen(std::string obst)
{
	//den passenden Enum zum String aufloesen
	if (obst == "kirsche") return Obst::Kirsche;
	if (obst == "banane") return Obst::Banane;
	if (obst == "orange") return Obst::Orange;
	if (obst == "zitrone") return Obst::Zitrone;
	if (obst == "wassermelone") return Obst::Wassermelone;
	if (obst == "birne") return Obst::Birne;
	return Obst::Unbekannt;
}

int main()
{
	//eingabe vom Obst
	std::string obst;
	std::getline(std::cin, obst);

	//alles klein schreiben
	std::transform(obst.begin(), obst.end(), obst.begin(), ::tolower);

	std::string farbe = "";

	//mit der Funktion "Aufloesen" aus der Eingabe einen Enum machen
	//und dann mit einer switch-Anweisung abfragen, welcher Enum es war
	switch (Aufloesen(obst))
	{
	case Obst::Kirsche:
		farbe = "rot";
		break;
	case Obst::Banane:
	case Obst::Zitrone:
		farbe = "gelb";
		break;
	case Obst::Orange:
		farbe = "orange";
		break;
	case Obst::Wassermelone:
	case Obst::Birne:
		farbe = "grün";
		break;
	}

	//Ausgabe von Obst und Farbe
	std::cout << "eine " << obst << " ist " << farbe;
}
