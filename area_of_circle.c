#include <stdio.h>

int main()
{
  int r;
  float pi=3.14;

  printf("Enter the radius: \n");
  scanf(" %d", &r);

  printf("Area of the circle is: %.2f \n", (float)pi*r*r);

  return 0;
}
