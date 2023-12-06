/*
	Instructions: Write a program to copy its input to output,
	replacing each tab by \t, each backspace by \b, and each
	backslash with \\. This makes tabs and backspaces visible
	in an unambiguous way.

	Comments: Understanding this should be straightforward,
	considering what have been written beforehand. We test
	each character in a text stream for any characters that
	would need to be formatted; backspaces, tabs and backslashes.
*/


#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if 	(c == '\\')
			printf("\\\\");

		else if (c == '\t')
			printf("\\t");

		else if (c == '\b')
			printf("\\b");
		else
			putchar(c);
	}
}
