#include <stdio.h>

int main()
{
  int r;
  float pi=3.14;

  printf("Enter the radius: \n");
  scanf(" %d", &r);

  printf("Perimeter of the circle is: %.2f \n", (float)2*pi*r);

  return 0;
}
