/*
	Instructions: Write a program to copy its input to its output,
	replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>


int main()
{
	int c, lastCharacter;

	while ((c = getchar()) != EOF)
	{
		// If the newest character (c) and the recently used character
		// equals a blank, do nothing and wait for the next character.
		// In C, at least the grammatical rules of C,
		// it is required for statements to have a body.
		// However, a null statement, being the isolated
		// semicolon, can be utilized to satisfy that
		// requirement; as seen below the statement to
		// emphansize readability.
		if (c == ' ' && lastCharacter == ' ')
			;
		// Otherwise, print the newest character from the text stream.
		else
			putchar(c);
		// Save the recent character as the last character.
		lastCharacter = c;
	}

}
