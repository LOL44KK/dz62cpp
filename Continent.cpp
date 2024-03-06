#include "Continent.h"

#include <iostream>

#include "Herbivore.h"

Continent::Continent(std::string name)
	: name_(name), herbivores_(nullptr), carnivores_(nullptr), countHerbivores_(0), countCarnivores_(0) {}

Herbivore* Continent::getHerbivore(int index)
{
	if (index < countHerbivores_)
	{
		return herbivores_[index];
	}
	else {
		return nullptr;
	}
}

Carnivore* Continent::getCarnivore(int index)
{
	if (index < countCarnivores_)
	{
		return carnivores_[index];
	}
	else {
		return nullptr;
	}
}

void Continent::printAllAnimal() const
{
	std::cout << "Continet name: " << name_ << std::endl;

	std::cout << "===Herbivores===" << std::endl;
	for (int i = 0; i < countHerbivores_; i++)
	{
		std::cout << "ID: " << i << "  Name: " << herbivores_[i]->getName() << std::endl;
		std::cout << "1. weight: " << herbivores_[i]->getWeight() << std::endl;
		std::cout << "2. is life: " << herbivores_[i]->getLife() << std::endl;
	}

	std::cout << std::endl << "===Carnivores===" << std::endl;
	for (int i = 0; i < countCarnivores_; i++)
	{
		std::cout << "ID: " << i << "  Name: " << carnivores_[i]->getName() << std::endl;
		std::cout << "1. power: " << carnivores_[i]->getPower() << std::endl;
	}
	std::cout << std::endl;
}
