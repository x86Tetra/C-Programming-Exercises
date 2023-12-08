/*
	Program description: a very bare-bone and minimalist version
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
		// If separated by a blank, newline or a tab, change the state
		// to OUT.
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		// If the condition's result above turns out to be false and the state
		// is currently out, Change the state to IN and increment the
		// "word counter" variable.
		else if(state == OUT)
		{
			state = IN;
			++nw;
		}
		// Otherwise do nothing (besides incrementing the nc variable).
	}

	printf("%d\t%d\t%d\n", nl, nw, nc);
}

/*
	Question: How would you test the word count program, what
	kinds of input are most likely to uncover bugs if there are any.

	Answer:	I would test it with several different types of input,
	including but not limited to:

	-> No input

	-> Single characters

	-> Double characters

	-> Multi-character characters (such as 'å', 'ä' and 'ö' in
	the Swedish alphabet)

	-> Words separated with blanks and tabs

	-> Multi-line input containing multiple words.

	The kind of input that could potentially arise bugs are those that
	tests for boundary conditions. An example is if the input exceeds the limits
	of the signed integer (roughly the half of x^2, where x is the number
	of bits) we are using; possibly generating a negative number in nl, nw, nc.
*/
