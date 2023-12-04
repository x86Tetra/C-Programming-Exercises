/*
	Exercise 1-8: Write a program to count blanks, tabs and newlines.
*/




#include <stdio.h>

int main()
{
	// Initialize all frequently used variables.
	int c = 0, blanks = 0, tabs = 0, newlines = 0;

	while((c = getchar()) != EOF)
	{
		// A single quote character represents an integer equal
		// to a numeric value in our machine's character set; whereas
		// '\n' would equal to the integer 10 in an expression.
		// Hence, writing like this does not only make it more readable,
		// but even more portable, as the compiler will conform to the
		// local machine's character set. This is usually called a character
		// constant.

		// These three statements checks for their respective character to log;
		// if detected in the current text stream, it will increment the respective
		// variable it's responsible for.
		if 	(c == '\n')
			++newlines;
		else if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
	}

	// Print a small table once the loop is done.
	printf("---------\nNewline : %d\nBlanks  : %d\nTabs    : %d\n", newlines, blanks, tabs);
}
