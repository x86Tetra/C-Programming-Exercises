/*
	Instruction: Write a program that prints its input one word per line
*/

#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		// In C, || means or, and are tested from left
		// to right; if c equals a blank, it will not
		// bother testing if c equals a tab.
		//
		// A check for a newline is also ignored, this is
		// due to the fact that the body of our while loop will
		// execute and thereby process the current segment of
		// the text stream immediately after a newline is entered.
		if (c == ' ' || c == '\t')
			printf("\n");
		else
			putchar(c);
		// A bug within this very simplistic program is that multiple
		// instances of spaces and tabs between words will print out
		// n-1 empty rows. This bug is intentional, with an extremely
		// easy fix.
	}
}
