#include "Formen.h"
#include <iostream>
const float Form::pi = 3.1419;
Form::Form(float x, float y) : x(x), y(y) { }

Kreis::Kreis(float radius) : Form::Form(radius, 0) { }

//ueberschreiben der Flaechen Methode
float Kreis::Flaeche() {
	return pi * x * x;
}

//Methode nur bei Kreis vorhanden
void Kreis::KreisMethode()
{
	std::cout << "Hallo Kreis!" << std::endl;
}

Kugel::Kugel(float r) : Form(r, 0) { }

//ueberschreiben der Flaechen Methode
float Kugel::Flaeche() {
	return 4 * pi * x * x;
}

//Methode nur bei Kugel vorhanden
void Kugel::KugelMethode()
{
	std::cout << "Hey Kugel!" << std::endl;
}



Zylinder::Zylinder(float r, float h) : Form(r, h) { }

//ueberschreiben der Flaechen Methode
float Zylinder::Flaeche() {
	return 4 * pi * x * x;
}

//Methode nur bei Zylinder vorhanden
void Zylinder::ZylinderMethode()
{
	std::cout << "Moin Zylinder!" << std::endl;
}
