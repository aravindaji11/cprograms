#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *x, int start, int end)
{
  char ch;

  if(start>=end)
  {
    return;
  }

  ch = *(x+start);
  *(x+start) = *(x+end);
  *(x+end) = ch;
  reverse(x, start++, end--);
}

int main()
{
  char string[150];
  printf("Enter the string: \n");
  scanf("%s", string);
  reverse(string, 0, strlen(string)-1);
  printf("The reversed string is: \n %s", string);
  return 0;
}
