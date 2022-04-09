#include <iostream>
#include "math.h"

//Gets the weight from user
double getWeight()
{
	std::cout << "Enter your weight (in kg): ";
	
	double inputW{ };
	std::cin >> inputW;

	//Error if user doesn't input an integer
	while (std::cin.fail())
	{
		std::cout << "Error! Please enter an integer." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> inputW;
	}

	return inputW;
}

//Gets the planet of choice from user
char choosePlanet()
{
	std::cout << "Choose a planet!\n\n" << "a for Mercury\nb for Venus\nc for Earth\nd for Mars\n";
	std::cout << "e for Jupiter\nf for Saturn\ng for Uranus\nh for Neptune\ni for Pluto\n\n";

	char inputP{ };
	std::cin >> inputP;

	return inputP;
}

//Calculates the results, takes weight and planet of choice from main
void results(double weight, char planet)
{
	//gravitational constant
	double gravConst{ 9.81 };

	//Finds a match for what user inputted in planet input
	//Produces an error if match is not found
	switch (planet)
	{
	case 'a':
		std::cout.precision(5);
		std::cout << "\nYour weight on Mercury is " << weight / gravConst * 3.7 << "kg.\n";
		break;

	case 'b':
		std::cout.precision(5);
		std::cout << "\nYour weight on Venus is " << weight / gravConst * 8.87 << "kg.\n";
		break;

	case 'c':
		std::cout.precision(5);
		std::cout << "\nYour weight on Earth is " << weight << "kg. Wow!\n";
		break;

	case 'd':
		std::cout.precision(5);
		std::cout << "\nYour weight on Mars is " << weight / gravConst * 3.711 << "kg.\n";
		break;

	case 'e':
		std::cout.precision(5);
		std::cout << "\nYour weight on Jupiter is " << weight / gravConst * 24.79 << "kg.\n";
		break;

	case 'f':
		std::cout.precision(5);
		std::cout << "\nYour weight on Saturn is " << weight / gravConst * 10.44 << "kg.\n";
		break;

	case 'g':
		std::cout.precision(5);
		std::cout << "\nYour weight on Uranus is " << weight / gravConst * 8.69 << "kg.\n";
		break;

	case 'h':
		std::cout.precision(5);
		std::cout << "\nYour weight on Neptune is " << weight / gravConst * 11.15 << "kg.\n";
		break;

	case 'i':
		std::cout << "\nPluto is not a planet! :(";
		break;

	default:
		std::cout << "Error! Please enter a letter from a-i.\n";
		break;
	}
}