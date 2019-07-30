#include <stdio.h>
#include <stdlib.h>


int main()
{
  float age1, age2, age3, average;

  printf("Enter 3 ages:\n");
  scanf("%f %f %f", &age1, &age2, &age3);

  average = (age1 + age2 + age3) / 3;
  printf("The average age is: %f \n", average);

  return 0;
}
