#include <stdio.h>
#define MAXLINE 1000

void cp(char dst[], char src[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = getLine(line)) > 0)
		if (len > max)
		{
			max = len;
			cp(longest, line);
		}

	if (max > 0)
		printf("Longest line : %s", longest);
	return 0;
}


int getLine(char line[], int limit)
{
	int c, i;

	for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
}

void cp(char dst[], char src[])
{
	int i;
	i = 0;
	while ((dst[i] = src[i]) != '\0')
		++i;
}
