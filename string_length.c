#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  int length;

  printf("Enter a string to calculate it's length: \n");
  scanf(" %s", a);

  length = strlen(a);
  printf("The length of the string is %d. \n", length);

  return 0;
}
