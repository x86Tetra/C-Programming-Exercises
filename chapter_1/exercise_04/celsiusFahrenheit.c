/*
	Purpose: Reversed version of the code seen in exercise_03.
	Prints a celsius to fahrenheit conversion table using the
	following formula: F = C * (9/5) + 32
*/

#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	int lowerLimit, upperLimit, step;

	lowerLimit = 0;
	upperLimit = 300;
	step = 20;

	celsius = lowerLimit;

	printf("Celsius    Fahrenheit\n");
	printf("---------------------\n");

	while (celsius <= upperLimit)
	{
		fahrenheit = celsius * (9.0/5.0) + 32;
		printf("%7.0f %13.1f\n", celsius, fahrenheit);
		celsius += step;
	}
}
