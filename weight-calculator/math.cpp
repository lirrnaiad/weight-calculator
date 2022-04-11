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
char choosePlanet()
{
	char inputP{};
	std::cout << "\nChoose a planet! Pick a number from 1-8\n";
	std::cout << "The planets' respective numbers are based on their order on the solar system (Mercury first)\n";

	//error loop if user inputs wrong input
	do {
		std::cin >> inputP;

		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	} while (inputP < 49 || inputP > 56);


	return inputP;
}

//Calculates the results, takes weight and planet of choice from main
void results(double weight, char planet)
{

	//earth's gravity
	double gravConst{ 9.81 };

	//set decimal places to 2
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	//Finds a match for what user inputted in planet input
	switch (planet)
	{
	case '1':
		std::cout << "\nYour weight on Mercury is " << weight / gravConst * 3.7 << "kg.\n";
		break;

	case '2':
		std::cout << "\nYour weight on Venus is " << weight / gravConst * 8.87 << "kg.\n";
		break;

	case '3':
		std::cout << "\nYour weight on Earth is " << weight << "kg. Wow!\n";
		break;

	case '4':
		std::cout << "\nYour weight on Mars is " << weight / gravConst * 3.711 << "kg.\n";
		break;

	case '5':
		std::cout << "\nYour weight on Jupiter is " << weight / gravConst * 24.79 << "kg.\n";
		break;

	case '6':
		std::cout << "\nYour weight on Saturn is " << weight / gravConst * 10.44 << "kg.\n";
		break;

	case '7':
		std::cout << "\nYour weight on Uranus is " << weight / gravConst * 8.69 << "kg.\n";
		break;

	case '8':
		std::cout << "\nYour weight on Neptune is " << weight / gravConst * 11.15 << "kg.\n";
		break;

	default:
		std::cout << "ERROR";
		break;
	}

}