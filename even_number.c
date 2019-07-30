#include <stdio.h>
#include <stdlib.h>


int main()
{
  int num1;
  printf("Enter the number:\n");
  scanf("%d", &num1);

  if (num1%2 == 0)
  {
    printf("The number is an even number.\n");
  }
  else
  {
    printf("The number is an odd number.\n");
  }
  return 0;
}
