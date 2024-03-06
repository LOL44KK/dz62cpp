#pragma once
#include "Carnivore.h"
class Lion : public Carnivore
{

public:
	Lion(std::string name, int power);

	void eat(Herbivore* food);
};

