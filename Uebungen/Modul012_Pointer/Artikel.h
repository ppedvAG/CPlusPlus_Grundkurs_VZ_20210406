#ifndef ARTIKEL_H
#define ARTIKEL_H
class Artikel
{
	static int aktuelleId;
	int id; 
	int bestand;
	float preis; 
public:
	float getPreis();
	int getId();
	int getBestand(); 
	void removeBestand(int anzahl);
	Artikel(); 
	//id setzen anhand aktuellenId
	//zufallbestand ~25 min 5 
	//zufallpreis 0-10euro 
};
#endif
