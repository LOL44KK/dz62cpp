#pragma once

#include "Herbivore.h"

#include "Carnivore.h"

class Wildebeest : public Herbivore
{
public:
	Wildebeest(std::string name, int weight, bool life);

	void eat();
};

