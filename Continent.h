#pragma once

#include <string>

#include "Herbivore.h"
#include "Carnivore.h"

class Continent
{
protected:
	Herbivore** herbivores_;
	Carnivore** carnivores_;

	int countHerbivores_;
	int countCarnivores_;

	std::string name_;

public:
	Continent(std::string name);

	virtual void addAnimal() = 0;

	virtual Herbivore* getHerbivore(int index);

	virtual Carnivore* getCarnivore(int index);

	void printAllAnimal() const;
};

