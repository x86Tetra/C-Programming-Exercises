/*
	Description: The program ultizes a "for" flow-control construct to eliminate
	the need for "more than necessary" integers. As per exercise instructions, I
	have been told to reverse said program; 300F to 0F.
*/

#include <stdio.h>

int main()
{
	// The first argument creates an integer with the initial value of 300,
	// the second argument tests a certain condition as defined by the constants,
	// and the third specifies the decrement (being 20 in this scenario).

	// Per se, the "for" construct consists of 3 different arguments that must be
	// specified, these arguments are in the following order: initialization,
	// condition and increment/decrement; but can generally be any expression.

	// If the condition resolves to true, the body of the loop will be executed and an
	// increment/decrement occurs shortly after. If it resolves to false,
	// it will exit the loop and continue operation (which is nothing in this case,
	// hence resulting in a program termination).
	for (int fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3dF = %6.1fC\n", fahr, (5.0/9.0)*(fahr-32));

	// As we can observe from above, we've put the arithmetic expression as the third
	// argument in the printf statement. This is completely valid due to a general
	// rule in C; where you can use a variable of a datatype, you can perform a
	// complicated expression there as well. And as we've covered before, any
	// floating point expression may be performed in the third argument due to
	// the % construct being of a floating point nature.
}
