#include <memory>
#include <iostream>
#include "Artikel.h"
#ifndef PERSONAL_H
#define PERSONAL_H
class Personal
{
	int id;
	float verkaufssumme;
public:
	Personal(int id);
	void addSumme(float wert);
	float getSumme();
	bool verkaufen(std::shared_ptr<Artikel> artikel);
	//zufallsanzahl (achtung! an bestand)
	//summe des verkaufs der verkaufssumme hinzufuegen
	//betand entfernen

	//ausgabe
	//wer hat was was wie viel für welchen preis verkauft 

	//rueckgabe
	//artikel wurde ausverkauft
	~Personal() {
		std::cout << "Destruktor" << id<<std::endl;
	}
};
#endif

