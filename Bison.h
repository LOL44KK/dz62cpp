#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison(std::string name, int weight, bool life);

	void eat();
};

