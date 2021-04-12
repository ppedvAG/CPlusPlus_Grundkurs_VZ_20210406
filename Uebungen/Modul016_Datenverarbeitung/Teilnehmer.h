#ifndef TEILNEHMER_H
#define TEILENHMER_H

#include <string>
class Teilnehmer {
	int id;
	std::string vorname; 
	std::string nachname; 
public: 
	int getId();
	std::string getVorname();
	void setVorname(std::string);

	std::string getNachname();
	void setNachname(std::string);

	Teilnehmer(int, std::string, std::string);
};
#endif // !TEILNEHMER_H

