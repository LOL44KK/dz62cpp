#include "AnimalWorld.h"

#include <iostream>
#include <conio.h>

#include "Africa.h"
#include "NorthAmerica.h"
#include "Continent.h"

void AnimalWorld::addNewAnimal()
{
	std::cout << "1. Add new animal to Africa" << std::endl;
	std::cout << "2. Add new animal to North America" << std::endl;
	char c = _getch();
	switch (c)
	{
	case '1':
		africa_.addAnimal();
		break;
	case '2':
		northAmerica_.addAnimal();
		break;
	default:
		std::cout << "error" << std::endl;
		break;
	}
}

void AnimalWorld::feedAnimal()
{
	std::cout << "1. Feed an animal in Africa" << std::endl;
	std::cout << "2. Feed an animal in North America" << std::endl;
	char c = _getch();
	int index = 0;
	int index2 = 0;
	Continent* continent = nullptr;

	switch (c)
	{
	case '1':
		continent = &africa_;
		break;
	case '2':
		continent = &northAmerica_;
		break;
	default:
		break;
	}

	std::cout << "1. Feed an Herbivore" << std::endl;
	std::cout << "2. Feed an Carnivore" << std::endl;

	c = _getch();
	switch (c)
	{
	case '1':
		std::cout << "enter id animal> ";
		std::cin >> index;
		if (continent->getHerbivore(index) != nullptr)
		{
			continent->getHerbivore(index)->eat();
		}
		else {
			std::cout << "incorrect id" << std::endl;
		}
		break;
	case '2':
		std::cout << "enter id animal> ";
		std::cin >> index;
		if (continent->getCarnivore(index) != nullptr)
		{
			std::cout << "enter id Herbivore animal> ";
			std::cin >> index2;
			if (continent->getHerbivore(index2) != nullptr)
			{
				continent->getCarnivore(index)->eat(continent->getHerbivore(index2));
			}
			else {
				std::cout << "incorrect Herbivore id" << std::endl;
			}
		}
		else {
			std::cout << "incorrect id" << std::endl;
		}
		break;
	default:
		break;
	}
}

AnimalWorld::AnimalWorld():africa_("Africa"), northAmerica_("North America") {}

void AnimalWorld::start()
{
	while (true)
	{
		std::cout << "=======MENU=======" << std::endl;
		std::cout << "1. Add new animal" << std::endl;
		std::cout << "2. All animal" << std::endl;
		std::cout << "3. Feed animals" << std::endl;
		char c = _getch();

		system("cls");
		switch (c)
		{
		case '1':
			addNewAnimal();
			break;
		case '2':
			africa_.printAllAnimal();
			northAmerica_.printAllAnimal();
			break;
		case '3':
			feedAnimal();
			break;
		default:
			std::cout << "error" << std::endl;
			break;
		}
	}
}
