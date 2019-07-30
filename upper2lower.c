#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[25];
  int i;

  printf("Enter the string. \n");
  scanf(" %s", str);

  for(i=0;i=strlen(str);i++)
  {
    if(str[i]>=65&&str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
  }
  printf("The string in lowercase is : \n %s", str);
  return 0;
}
