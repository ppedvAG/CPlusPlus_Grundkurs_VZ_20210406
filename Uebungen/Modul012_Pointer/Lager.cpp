#include "Lager.h"
#include "Artikel.h"
#include <memory>
Lager::Lager(int anzahlArtikel) {
	for (size_t i = 0; i < anzahlArtikel; i++)
	{
		artikel.push_back(std::make_shared<Artikel>());
	}
}

bool Lager::verkauf(Personal& personal)
{
	//zufaelliger Artikel
	int indexArtikel = rand() % artikel.size();

	//verkauf des zufaelligen Artikels
	bool leer = personal.verkaufen(artikel.at(indexArtikel));
	
	//wenn Artikel leer, dann aus Lagerbestand entfernen
	if (leer) {
		artikel.erase(artikel.begin() + indexArtikel);
	}

	return artikel.empty();
}