/*
	Purpose: Utilizes the following formula C = (5/9)(F-32) to
	print a conversion table with the numbers implicitly specified
	by the following variables: lowerLimit, upperLimit and step.
*/

// stdio.h is a standard library for input and output operations. Operations like these
// are not included in the core C programming language by itself; but are implemented by a
// C library, such as glibc or musl.
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
		// In C, integer division truncates; any franctional part is
		// discarded. Meaning that a statement involving a multiplication
		// with (5/9) would just truncate down to 0, hence the output would
		// be 0 for all iterations.
		celsius = 5 * (fahr-32) / 9;
		// Printf(); is a general purpose output formatting function.
		// The first argument specifies a string of characters, where each % construction
		// is paired with their corresponding secondary and so forth arguments.
		// As for %d, it specifies an integer argument to be printed.
		printf("%d\t%d\n", fahr, celsius);
		// Increase the value in the "fahr" variable with the specified value in "step".
		fahr += step;
	}
}
