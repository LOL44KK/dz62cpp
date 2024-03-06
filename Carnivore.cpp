#include "Carnivore.h"

#include <string>

Carnivore::Carnivore(std::string name, int power): name_(name), power_(power) {}

void Carnivore::setPower(int power)
{
	power_ = power;
}

std::string Carnivore::getName()
{
	return name_;
}

int Carnivore::getPower()
{
	return power_;
}
