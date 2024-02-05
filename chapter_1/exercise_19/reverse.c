/*
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 *
*/

#include <stdio.h>

#define MAXLINE 10000

int main()
{

  char text[MAXLINE];

  while(fLine(text, MAXLINE) > 0)
  {
    reverse(text);
    printf("%s", text);
    
  }
}


int fLine(char text[], int limit)
{
  int c, i, j = 0;


  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    if (i < limit-2)
    {
      text[j] = c;
      j++;
    }
  if (c == '\n')
  {
    text[j] = c;
    j++;
    i++;
  }
  text[j] = '\0';
}

int reverse(char text[])
{
  char temp;
  int i = 0, 
      j = 0;

  while (text[i] != '\0')
    i++;
  
  i--; /* Back off from \0*/

  if (text[i] == '\n')
    i--;
  while (j < i)
  {
    temp = text[j];
    text[j] = text[i];
    text[i] = temp;
    
    i--; 
    j++;
  }
}

