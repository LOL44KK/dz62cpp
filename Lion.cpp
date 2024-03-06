#include "Lion.h"

#include <iostream>

Lion::Lion(std::string name, int power) : Carnivore(name, power) {}

void Lion::eat(Herbivore* food)
{
	if (power_ > food->getWeight() and food->getLife())
	{
		food->setLife(0);
		power_ += 10;
		std::cout << "Om-Nom-nom" << std::endl;
	}
	else if (!food->getLife())
	{
		std::cout << "you can't eat" << std::endl;
	}
	else {
		std::cout << "ran away, didn't get to eat" << std::endl;
	}
}


