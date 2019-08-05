#include <stdio.h>

int main()
{
  float r,pi=3.14;

  printf("Enter the radius of the sphere: \n");
  scanf(" %f", &r);

  printf("The surface area of the sphere is %.2f. \n", 4*pi*r*r);

  return 0;
}
