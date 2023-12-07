/*
	Program description: a very barebone and minimalist version
	of the commonly used UNIX command: wc (word counter).
*/


#include <stdio.h>

#define IN 	1
#define OUT 	0

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("\nwc %d, c %d, \\n %d\n", nw, nc, nl);
}

/*
	Question: How would you test the word count program, what
	kinds of input are most likely to uncover bugs if there are any.
*/

