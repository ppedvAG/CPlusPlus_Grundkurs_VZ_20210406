#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

bool sorter(std::pair<int, int> p1, std::pair<int, int> p2)
{
	return p1.second > p2.second;
}

int main()
{
	//Vector mit zufaelligen Zahlen
	std::vector<int> zahlen{ 1,2,1,1,1,5,5,4,3,3,3,3,1,-5,4,2,3,1,4,2,3,3,6,4,5, };

	//Map um die Anzahl zu zaehlen
	std::map<int, int> anzahlZahlen;

	for (int zahl : zahlen)
	{
		anzahlZahlen[zahl]++;
	}

	//Vector mit pairs (zum Sortieren)
	std::vector<std::pair<int, int>> paare;
	for (std::pair<int, int> paar : anzahlZahlen)
	{
		paare.push_back(paar);
	}

	//sortieren mit Methode "sorter"
	std::sort(paare.begin(), paare.end(), sorter);
	for (std::pair<int, int> paar : paare)
	{
		std::cout << paar.first << " - " << paar.second << std::endl;
	}
	std::cout << "######\n";

	//Vector umdrehen
	std::reverse(paare.begin(), paare.end());
	for (std::pair<int, int> paar : paare)
	{
		std::cout << paar.first << " - " << paar.second << std::endl;
	}
}

