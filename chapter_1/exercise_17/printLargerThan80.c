/*
	Instructions: Write a program to print all input lines that
	are longer than 80 characters.
*/


#include <stdio.h>

#define MAXLINE 1000
#define CHARACTERS 80

int main()
{
	char line[MAXLINE];
	int length;

	while ((length = fetchline(line, MAXLINE)) > 0)
		if (length > CHARACTERS)
			printf("%s", line);
}

int fetchline(char line[], int limit)
{
	int c, i, j = 0;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		if (i < limit-2)
		{
			line[j] = c;
			j++;
		}
	if (c == '\n')
	{
		line[j] = c;
		j++;
	}
	line[j] = '\0';
	return i;
}
