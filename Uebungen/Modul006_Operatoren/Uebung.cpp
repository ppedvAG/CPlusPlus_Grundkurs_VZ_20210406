#include <iostream>
int main()
{
	int stunden, minuten, sekunden, entfernung;
	int dauer;

	//Eingabe durch Leerzeichen getrennt
	std::cout << "Stunden Minuten Sekunden Entfernung(km): " << std::endl;
	std::cin >> stunden >> minuten >> sekunden >> entfernung;

	dauer = stunden * 3600 + minuten * 60 + sekunden;

	//Umrechnung in mps, kmh und mph
	float mps = (float)(entfernung * 1000) / dauer;
	float kmh = (float)entfernung / ((float)dauer / 3600);
	float mph = (float)entfernung * 0.6214 / ((float)dauer / 3600);

	std::cout << "Meter pro Sekunde:    " << mps << std::endl;
	std::cout << "Kilometer pro Stunde: " << kmh << std::endl;
	std::cout << "Meilen pro Stunde:    " << mph << std::endl;
}