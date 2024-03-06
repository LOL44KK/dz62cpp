#pragma once

#include <string>

#include "Continent.h"

class Africa : public Continent {
public:
	Africa(std::string name);

	void addAnimal();
};