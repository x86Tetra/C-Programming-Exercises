#include <stdio.h>

int main()
{
	printf("Hello, World!\e");
	printf("Hello, World!\z");
	printf("Hello, World!\p");
	// Output: Hello, World!ello, World!zHello, World!p

	// Escape sequences starts with a backslash, and hence
	// it will "ignore it" if it's an invalid such (observe
	// the output of \z and \p). To actually create a backspace,
	// you'd have to use a double backslash ( \\ ).
}
