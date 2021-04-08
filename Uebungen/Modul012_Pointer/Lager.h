#ifndef LAGER_H
#define LAGER_H
#include <vector>
#include <memory>
#include "Artikel.h"
#include "Personal.h"
class Lager
{
	std::vector<std::shared_ptr<Artikel>> artikel;
public:
	Lager(int anzahlArtikel);
	//artikel erstellen

	bool verkauf(Personal& personal);
	//zuzfallartikel durch persoanl verkaufen
	//bestand = 0 => artikel l�schen

	//r�ckgabe => leeres lager
	//noch was da => false
	//alles weg => true

};
#endif