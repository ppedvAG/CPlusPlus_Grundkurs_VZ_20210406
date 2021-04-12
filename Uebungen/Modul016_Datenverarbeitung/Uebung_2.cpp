#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Teilnehmer.h"
#include <vector>
#include <map>
int main()
{
    std::ifstream inputStream("teilnehmer.txt");
    std::string zeile; 
    std::map<int, Teilnehmer> teilnehmerMap; 

    while (std::getline(inputStream, zeile))
    {
        std::cout << zeile << std::endl;
        std::stringstream lineStream(zeile);
        std::string wert;
        int counter = 0;
        int id = 0; 
        std::string vorname;
        std::string nachname; 

        while (std::getline(lineStream, wert, ';'))
        {
            if (counter == 0)
            {
                id = std::stoi(wert);
            }
            else if (counter == 1)
            {
                vorname = wert;
            }
            else if (counter == 2)
            {
                nachname = wert;
            }
            counter++; 
        }
        
        Teilnehmer tn(id, vorname, nachname);
        teilnehmerMap.insert({ tn.getId(), tn }); 
    }
    inputStream.close();

    for (std::pair<int, Teilnehmer> tn : teilnehmerMap)
    {
        std::cout << "Id: " << tn.first << " Name: " << tn.second.getVorname() << " " << tn.second.getNachname() << std::endl;
    }
}