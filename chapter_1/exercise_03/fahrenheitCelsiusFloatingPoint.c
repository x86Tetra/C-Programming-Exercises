/*
	Note: Refer to the fahrenheitCelsiusInteger.c source file for general comments regarding this code.
	Changes are primarly the support for floating point numbers, as the filename might suggest.

	Extra: This will be the ground for exercise 03 and 04.
*/


#include <stdio.h>

int main()
{
	float 	fahr, celsius;
	int	lowerLimit, upperLimit, step;

	lowerLimit = 0;
	upperLimit = 300;
	step = 20;

	fahr = lowerLimit;
	
	while (fahr <= upperLimit)
	{
		// Note that we can use decimals now and hence the original formula,
		// thanks to floating point!
		//
		// The dot makes sure the computation is performed in a floating point
		// arithmetic; preventing truncation issues. The number 32, which is an
		// integer datatype, will be converted to a floating point number automatically.
		// This is due to the fact that any integer will be converted to a floating point
 		// number if there already is a "FP" (floating point) in said statement.
		celsius = (5.0 / 9.0) * (fahr-32);

		// %f is the construction that prints a floating point number.
		// The numbers between specifies the length of the integer part
		// and the precision of our fractal part; segmented by the dot.
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}
