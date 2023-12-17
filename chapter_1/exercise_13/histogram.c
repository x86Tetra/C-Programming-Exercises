/*
	Instruction: Write a program to print a histogram of
	the lengths of words in its input.

	TODO: Explain its internals.
*/



#include <stdio.h>

#define OUT 0
#define IN  1

#define MAX_LENGTH 12

int main()
{

	int count[MAX_LENGTH];
	int c, state, length = 0;

	for (int i = 0; i < MAX_LENGTH; i++)
		count[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = IN;

			if (length > MAX_LENGTH && length <= 0)
				;
			else
				count[length-1]++;
		}
		else if (state == IN)
		{
			length = 0;
			state = OUT;
		}
		else
			length++;
	}


	for (int i = 0; i < MAX_LENGTH; i++)
		if (count[i] > 0)
		{
			printf("\n%d\t: ", i+1);
			for (int j = 0; j < count[i]; j++)
				printf("#");
		}

	printf("\n");
}
