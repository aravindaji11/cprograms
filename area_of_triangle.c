#include <stdio.h>

int main()
{
  float b,h;

  printf("Enter the base and height of the triangle: \n");
  scanf(" %f %f", &b, &h);

  printf("The area of the traingle is %.2f \n", (b*h)/2);

  return 0;
}
