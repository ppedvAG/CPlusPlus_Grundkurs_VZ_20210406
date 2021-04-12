#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ofstream outputStream = std::ofstream("datei.txt");
	srand(time(0));

	//zufaellige Zahlen in Datei schreiben
	for (size_t i = 0; i < 50; i++)
	{
		outputStream << rand() % 1000 + 1 << std::endl; 
	}

	//Datei auslesen und ausgeben
	std::ifstream inputStream("datei.txt");
	if (inputStream.is_open())
	{
		std::string zeile; 
		while (std::getline(inputStream, zeile)) 
		{
			std::cout << zeile << std::endl;
		}
		inputStream.close();
	}
}
