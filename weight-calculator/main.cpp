#include <iostream>
#include <iomanip>
#include <ios>
#include <stdlib.h>
#include "math.h"

int main()
{
	std::cout << "Weight on Other Planets Calculator\n\n";

	double weight{ getWeight() };
	std::cout << choosePlanet();

	return 0;
}