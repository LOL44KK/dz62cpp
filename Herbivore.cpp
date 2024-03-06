#include "Herbivore.h"

Herbivore::Herbivore(std::string name, int weight, bool life) :name_(name), weight_(weight), life_(life) {}

void Herbivore::setWeight(int weight)
{
	weight_ = weight;
}

void Herbivore::setLife(bool life)
{
	life_ = life;
}

std::string Herbivore::getName()
{
	return name_;
}

int Herbivore::getWeight()
{
	return weight_;
}

bool Herbivore::getLife()
{
	return life_;
}
