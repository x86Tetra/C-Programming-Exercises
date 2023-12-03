/*
	This should be pretty self explainatory, exercise 1-7 wants us to print the
	value of the symbolic constant EOF.
*/


#include <stdio.h>

int main()
{
	printf("Value of EOF: %d\n", EOF);
	// This prints the value -1, and after checking the glibc manual
	// it is the expected value. It also states that in other libraries
	// it may be another negative integer. In other words, the value for EOF
	// is a negative integer.
	// Src: https://www.gnu.org/software/libc/manual/html_node/EOF-and-Errors.html
}
