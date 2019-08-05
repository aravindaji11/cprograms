#include <stdio.h>

int main()
{
  char a;
  printf("Enter a character: \n");
  scanf(" %s", &a);

  if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    printf("The entered character is an alphabet. \n");
  else
    printf("The entered character is not an alphabet. \n");

  return 0;
}
