/*
* Instructions: Write a program entab that replaces strings of
* blanks by the minimum number of tabs and blanks to achieve the same
* spacing. Use the same tab stops as for detab. When either a tab or
* a single blank would suffice to reach a tab stop, which should be
* given preference?
*/

#include <stdio.h>
#define TABS 8

int main()
{
  int c,
      nb = 0,
      nt = 0,
      pos;

  for (pos = 1; (c = getchar()) != EOF ; pos++)
  {
    if (c == ' ')
    {
      if ((pos % TABS) != 0)
        nb++;
      else
      {
        nb = 0;
        nt++;
      }
    }
    else
    {
      while (nt > 0)
      {
        putchar('\t');
        nt--;
      }
      if (c == '\t')
      {
        nb = 0;
      }
      else
        while (nb > 0) 
        {
          putchar(' ');
          nb--;
        }


      putchar(c);
      if (c == '\n')
        pos = 0;
      else if (c == '\t')
          pos = pos + (TABS - (pos-1) % TABS) - 1;
    }
  }
}
