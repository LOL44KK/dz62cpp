#include "Wildebeest.h"

#include <iostream>

Wildebeest::Wildebeest(std::string name, int weight, bool life) : Herbivore(name, weight, life) {}

void Wildebeest::eat()
{
	weight_ += 10;
	std::cout << "Om-Nom-nom" << std::endl;
}
