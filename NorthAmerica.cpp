#include "NorthAmerica.h"

#include <iostream>
#include <conio.h>

#include "Animals.h"
#include "functions.h"

NorthAmerica::NorthAmerica(std::string name) : Continent(name) {}

void NorthAmerica::addAnimal()
{
	std::cout << "1. Carnivore" << std::endl;
	std::cout << "2. Herbivore" << std::endl;

	std::cout << ">";
	bool flag = true;
	bool flag2 = true;

	Carnivore* ptrCarnivore = nullptr;
	Herbivore* ptrHerbivore = nullptr;

	char name[32];
	int weight = 0;
	int power = 0;

	while (flag)
	{
		char c = _getch();
		std::cout << std::endl;
		switch (c)
		{
		case '1': //Carnivore
			std::cout << "1. Wolf" << std::endl;
			while (flag2)
			{
				c = _getch();
				switch (c)
				{
				case '1':
					std::cout << "enter name> ";
					std::cin >> name;

					std::cout << "enter power> ";
					std::cin >> power;

					ptrCarnivore = new Wolf(name, power);

					flag = false;
					flag2 = false;
					break;
				default:
					std::cout << "error" << std::endl;
					break;
				}
			}
			break;
		case '2': //Herbivore
			std::cout << "1. Bison" << std::endl;
			while (flag2)
			{
				c = _getch();
				switch (c)
				{
				case '1':
					std::cout << "enter name> ";
					std::cin >> name;

					std::cout << "enter weight> ";
					std::cin >> weight;

					ptrHerbivore = new Bison(name, weight, true);

					flag = false;
					flag2 = false;
					break;
				default:
					std::cout << "error" << std::endl;
					break;
				}
			}
			break;
		default:
			std::cout << "error" << std::endl;
			break;
		}
	}

	if (ptrCarnivore != nullptr)
	{
		carnivores_ = appendTOArray(carnivores_, countCarnivores_, ptrCarnivore);
	}
	if (ptrHerbivore != nullptr)
	{
		herbivores_ = appendTOArray(herbivores_, countHerbivores_, ptrHerbivore);
	}
}

