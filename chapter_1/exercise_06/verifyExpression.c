/*
	Purpose: print the return of the following expression getchar() != EOF.
	EOF, being a symbolic constant to any integer that is not a -- otherwise
	useable -- character as defined by the stdio.h header file.
*/


#include <stdio.h>

int main()
{	// getchar() returns the next character data in a text stream for each
	// time it is called. A text stream is, precisely what it sounds like,
	// a sequence of characters divided into lines; consisting of zero or
	// more characters per line and segmented via a newline (\n).

	// This text stream, generated using getchar(), is derived from a valid
	// input device present that can fetch character data, like a keyboard.

	// The relational operator, !=, means "not equal to". Since this makes it
	// a condition, the expression will return an integer repressenting true or
	// false, based on whether the first character is a non-EOF integer or not.

	// The expression will return 0 if it's equal to EOF, and 1 otherwise. To
	// generate an EOF in UNIX-like system, CTRL+D is used.
	printf("getchar() != EOF returns: %d\n", getchar() != EOF);
}
