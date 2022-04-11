#include "math.h"

int main()
{
	std::cout << "Weight on Other Planets Calculator\n\n";

	double weight{ getWeight() };

	while (true) {
		char planet{ choosePlanet() };
		results(weight, planet);

		std::cout << "\nWould you like to try a different planet? (y/n): ";
		char answer{};
		std::cin >> answer;

		if (answer != 'y' && answer != 'Y') {
			break;
		}
	}

	return 0;
}