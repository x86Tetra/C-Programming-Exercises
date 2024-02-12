/* 
 * Instructions: Write a program detab that replaces tabs in the input
 * with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns. Should
 * n be a variable or a symbolic parameter.
 */ 

#include <stdio.h>

#define TABS 8 // n should be a symbolic parameter.
#define DEBUG_MODE(x) ('0'+(x))
#define NORMAL_MODE ' '

int main()
{
  int c, nb, pos;
  nb = 0;
  pos = 1;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      // The expression below calculates 
      // how many blanks we need to replace 
      // the tab in question, judging by the 
      // current position in the current line.
      // 
      // nb = TABS - (pos - 1) % TABS
      // 
      // - Table -
      // pos  | nb
      // -----|-----
      // 1    | 8
      // 2    | 7
      // 3    | 6
      // 4    | 5
      // 5    | 4
      // 6    | 3
      // 7    | 2
      // 8    | 1
      // 9    | 8
      // 10   | 7
      // ...  | ...
      // 
      // A\tB = A7654321B
      //        A       B
      // A tab present on the second position will 
      // result in seven blank lines being created.
      nb = TABS - (pos - 1) % TABS;

      while (nb > 0)
      {
        putchar(NORMAL_MODE);
        
        nb--; 
        pos++;
      }
    }
    else if (c == '\n')
    {
      pos = 1;
      putchar(c);
    }
    else
    {
      pos++;
      putchar(c);
    }
  }
}

