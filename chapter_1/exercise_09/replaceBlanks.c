#include <stdio.h>


int main()
{
	int c, lastCharacter;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && lastCharacter == ' ')
			;
		else
			putchar(c);

		lastCharacter = c;
	}

}
