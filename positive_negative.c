#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;

printf("Enter the number. \n");
scanf(" %d", &num);

if(num < 0.0)
{
  printf("The entered number is negative. \n");
}
else if(num > 0.0)
{
  printf("The entered number is positive. \n");
}
else
{
  printf("The entered number is neither negative nor positive. \n");
}
return 0;
}
