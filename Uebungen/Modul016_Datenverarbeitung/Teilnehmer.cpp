#include "Teilnehmer.h"
#include <string>

int Teilnehmer::getId() { return id; }
std::string Teilnehmer::getVorname() { return vorname; }
void Teilnehmer::setVorname(std::string wert) { vorname = wert; }
std::string Teilnehmer::getNachname() { return nachname; }
void Teilnehmer::setNachname(std::string wert) { nachname = wert; }
Teilnehmer::Teilnehmer(int id, std::string vorname, std::string nachname) : 
	id(id),
	vorname(vorname),
	nachname(nachname) { 

}
