#include <stdio.h>

int main()
{
  int a;

  printf("Enter the length: \n");
  scanf(" %d", &a);

  printf("The surface area of the entered cube is: %d. \n", 6*a*a);
  return 0;
}
