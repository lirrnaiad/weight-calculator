#include <iostream>
#include "math.h"

int main()
{
	std::cout << "Weight on Other Planets Calculator\n\n";

	double weight{ getWeight() };
	char planet{ choosePlanet() };
	results(weight, planet);

	std::cin.get();
	std::cin.get();

	return 0;
}