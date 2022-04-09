#include <iostream>
#include "math.h"

int main()
{
	std::cout << "Weight on Other Planets Calculator\n\n";

	double weight{ getWeight() };
	char planet{ choosePlanet() };
	results(weight, planet);

	return 0;
}

/*
TO DO:

	LOOP
		-after results are displayed, ask user if they would like to repeat it again

		-3 options:
			1. loop back to weight input
			2. loop back to planet selection
			3. exit

	ROUNDING OFF WEIGHT
		-make decimal places consistent to 2, but make whole number unlimited (not really)
		 eg. 5416.24kg -- 1.27kg -- 512438.04kg -- 17243161.61kg

		-cout precision is set to 5, if user inputs weight higher or lesser than usual 
		 the decimal places will be reduced to 1 or even none.
		 eg. 14.481kg -- 6123.2kg -- 12572kg 

		-cout precision also makes whole number limited to 5 digits,
		 so if the result has more than 5 digits, only 5 digits will be shown

	MAKE CALCULATIONS A "DO WHILE" STATEMENT
		-switch is too basic and if I ever add more planets it'll be a pain in the ass
		 and would bloat my code a lot

		-just basic optimization

	QA STUFF
		-this'll come eventually lol
		 
*/