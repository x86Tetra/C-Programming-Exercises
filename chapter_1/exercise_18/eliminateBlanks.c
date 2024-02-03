/*
  Instruction: Write a program to remove trailing 
  blanks and tabs from each line of input, and to
  delete entirely blank lines.
*/

#include <stdio.h>
#define MAXLINE 10000

int main()
{
  char text[MAXLINE];
  while(fLine(text, MAXLINE) > 0)
    if(removeContents(text) > 0)
      printf("%s", text);
}

int fLine(char line[], int limit)
{
  int c, i, j = 0;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    if (i < limit-2)
    {
      line[j] = c;
      j++;
    }
  if (c == '\n')
  {
    line[j] = c;
    i++;
    j++;
  }
  line[j] = '\0';

  return i;
}

int removeContents(char s[])
{
  int i = 0;
  while(s[i] != '\n')
    i++;

  --i;

  while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    --i;

  if (i >= 0)
  {
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }
  
  return i;
}
