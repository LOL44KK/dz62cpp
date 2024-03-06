#pragma once
#include <string>

class Herbivore
{
protected:
	std::string name_;

	int weight_;
	bool life_;

public:
	Herbivore(std::string name, int weight, bool life);

	virtual void eat() = 0;

	void setWeight(int weight);
	void setLife(bool life);

	std::string getName();
	int getWeight();
	bool getLife();
};

