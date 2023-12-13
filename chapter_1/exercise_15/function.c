/*
	Instruction: Rewrite the temperature conversion program of Section 1.2 to
	use a function for conversion.
*/

#include <stdio.h>


float celsius(int fahrenheit)
{
	return (5.0/9.0)*(fahrenheit-32.0);
}


int main()
{
	int lower, upper, step;
	float fahr;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		printf("%3.2f\t-> %3.2f\n", fahr, celsius(fahr));
		fahr += step;
	}
}
