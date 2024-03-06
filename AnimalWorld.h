#pragma once

#include "Africa.h"
#include "NorthAmerica.h"

class AnimalWorld
{
private:
	Africa africa_;
	NorthAmerica northAmerica_;

	void addNewAnimal();

	void  feedAnimal();

public:
	AnimalWorld();

	void start();
};

