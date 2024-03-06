#include "Bison.h"

#include <iostream>

Bison::Bison(std::string name, int weight, bool life) : Herbivore(name, weight, life) {}

void Bison::eat()
{
	weight_ += 10;
	std::cout << "Om-Nom-nom" << std::endl;
}
