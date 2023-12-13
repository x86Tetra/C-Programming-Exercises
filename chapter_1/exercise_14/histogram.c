/*
	Instructions: Write a program to print a histogram of the frequencies
	of different characters in its input.
*/


#include <stdio.h>

#define LENGTH 0b1111111

int main()
{
	int c;
	int array[LENGTH];

	// Assign 0 to the integers in the array.
	for (int i = 0; i < LENGTH; i++)
		array[i] = 0;

	while((c = getchar()) != EOF)
		if (c <= LENGTH)
			array[c]++;

	for (int i = 0; i < LENGTH; ++i)
		if (array[i])
		{
			printf("Character %c (0x%02x): ", i, i);
			for (int j = 0; j < array[i]; j++)
				printf("#");
			printf("\n");
		}
	printf("\n");
}
