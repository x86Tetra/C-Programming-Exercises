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

	printf("%d\t%d\t%d\n", nl, nw, nc);
}

/*
	Question: How would you test the word count program, what
	kinds of input are most likely to uncover bugs if there are any.

	Answer:	I would test it with several types of input, that being:

	-> No input

	-> Single characters

	-> Double characters

	-> Multi-character characters (such as 'å', 'ä' and 'ö' in
	the Swedish alphabet)

	-> Words seperated with blanks and tabs

	-> Multi-line input containing multiple words.

	Input that could arise bugs are those that tests boundary conditions,
	like the input exceeding the limits of the signed integer we are using;
	possibly generating a negative number in nl, nw, nc.
*/
