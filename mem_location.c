#include <stdio.h>

int main()
{
  char a[100];

  printf("Enter to get the memory location: \n");
  scanf(" %s", &a);

  printf("The memory location is: %p \n", a);
  return 0;
}
