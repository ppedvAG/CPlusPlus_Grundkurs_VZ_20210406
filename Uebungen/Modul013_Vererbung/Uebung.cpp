#include <iostream>
#include <vector>
#include "Formen.h"

int main()
{
	int anzahl = 0; 
	std::cin >> anzahl; 

	std::vector<std::shared_ptr<Form>> formen;

	//eine Anzahl zufaelliger Formen erzeugen
	for (size_t i = 0; i < anzahl; i++)
	{
		int auswahl = rand() % 3 + 1; 
		float x = (float)(rand() % 100) / 10.0f + 1; 
		switch (auswahl)
		{
		case 1: 
			formen.push_back(std::make_shared<Kreis>(x));
			break;
		case 2:
			formen.push_back(std::make_shared<Kugel>(x));
			break;
		case 3:
			float y = (float)(rand() % 100) / 10.0f + 1;
			formen.push_back(std::make_shared<Zylinder>(x, y));
			break;
		}
	}

	for (std::shared_ptr<Form> form : formen)
	{
		//dynamisch in den jeweiligen Datentyp casten
		//und die jeweilige Methode ausfuehren
		Kreis* kreis = dynamic_cast<Kreis*>(form.get());
		if (kreis)
		{
			kreis->KreisMethode();
			continue;
		}

		Kugel* kugel = dynamic_cast<Kugel*>(form.get());
		if (kugel)
		{
			kugel->KugelMethode();
			continue;
		}

		Zylinder* zylinder = dynamic_cast<Zylinder*>(form.get());
		if (zylinder)
		{
			zylinder->ZylinderMethode();
			continue;
		}
	}
}