/*
	Instructions: Revise the main routine of the longest-line
	program so it will correctly print the length of arbitary 
	long input lines, and as much as possible of the text.
*/


#include <stdio.h>
#define MAXLINE 1000

int main()
{
	int len;
	int largest;

	char line[MAXLINE];
	char longest[MAXLINE];

	largest = 0;
	while ((len = returnLine(line, MAXLINE)) > 0)
		if (largest < len)
		{
			largest = len;
			sCP(longest, line);
		}
	if (longest > 0)
		printf("LONGEST LINE ( %d CHARACTERS ):\n%s\n", largest, longest);
}


int returnLine(char line[], int lim)
{
	int c, i, j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		if (i < lim-2)
		{
			line[j] = c;
			j++;
		}
	if (c == '\n')
	{
		line[j] = c;
		j++;
		i++;
	}
	line[j] = '\0';
	return i;
}

void sCP(char dst[], char src[])
{
	int i = 0;
	while((dst[i] = src[i]) != '\0')
		i++;
}
