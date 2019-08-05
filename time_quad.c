#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  int a, b, c, discriminant, root1, root2, realpart, imaginpart;
  double total_time;
  clock_t start,end;

  printf("Enter the coefficiants a, b, c \n");
  scanf(" %d %d %d", &a, &b, &c);

  start = clock();
  discriminant = (b*b) - (4*a*c);
  //printf("%d", discriminant);

  if(discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);
    printf("The two roots are %d and %d \n", root1, root2);
  }
  else if(discriminant == 0)
  {
    root1 = root2 = (-b)/(2*a);
    printf("The root is %d", root1);
  }
  else if(discriminant < 0)
  {
    realpart = (-b)/(2*a);
    imaginpart = (sqrt(- discriminant))/(2*a);
    printf("The two roots are %.2d + i%.2d and %.2d - i%.2d \n", realpart, imaginpart, realpart, imaginpart);
  }
  end = clock();
  total_time = ((double) (end-start)) / CLOCKS_PER_SEC;
  printf("The total time taken for the program is: %f \n", total_time);
  return 0;
}
