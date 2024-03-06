#pragma once
#include "Carnivore.h"

#include <string>

class Wolf : public Carnivore
{
public:
	Wolf(std::string name, int power);

	void eat(Herbivore* food);
};

