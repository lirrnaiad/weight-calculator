#include <iostream>
#include <iomanip>
#include <ios>
#include <stdlib.h>
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
		std::cout << "\nError! Please enter an integer." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> inputW;
	}

	return inputW;
}

//Gets the planet of choice from user
int choosePlanet()
{
	int inputP{};

	do {
		std::cout << "\nChoose a planet! Pick a number from 1-8\n";
		std::cout << "The planets' respective numbers are based on their order on the solar system (Mercury first)\n";

		std::cin >> inputP;

		//Loops back to input if user enters input that's not 1-8
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	} while (inputP < 1 || inputP > 8);

	return inputP;
}