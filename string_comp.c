#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];

  printf("Enter the first string: \n");
  scanf(" %s", a);

  printf("Enter the second string: \n");
  scanf(" %s", b);

  if(strcmp(a,b) == 0)
    printf("The two strings are the same. \n");
  else
    printf("The two strings are not the same. \n");

  return 0;
}
