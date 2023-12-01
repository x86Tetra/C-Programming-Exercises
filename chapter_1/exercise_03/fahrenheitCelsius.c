/*
	Purpose: Utilizes the following formula C = (5/9)(F-32) to
	print a conversion table with the numbers implicitly specified
	by the following variables: lowerLimit, upperLimit and step.
*/

#include <stdio.h>

// As learnt before, we should be explicit with the return type;
// even in our main function.

int main()
{
	int fahr, celsius;
	int lowerLimit, upperLimit, step;

	lowerLimit = 0;
	upperLimit = 300;
	step  = 20;
	fahr = lowerLimit;

	// The condition in the parantheses is tested; if it's true (that
	// being if fahr is lesser than or equal to upperLimit), the code
	// encapsulated in the while loop will be executed.

	while (fahr <= upperLimit)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
}
