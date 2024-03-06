#pragma once

#include <string>
#include "Herbivore.h"

class Carnivore
{
protected:
	std::string name_;
	int power_;

public:
	Carnivore(std::string name, int power);

	virtual void eat(Herbivore* food) = 0;

	void setPower(int power);

	std::string getName();
	int getPower();
};

