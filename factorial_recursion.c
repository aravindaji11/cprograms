#include <stdio.h>
#include <stdlib.h>


int factorial(int a)
{
  if(a==0)
  {
    return 1;
  }
  else if(a==1)
  {
    return 1;
  }
  else
  {
    return a*factorial(a-1);
  }
}

int main()
{
  int num, result;

  printf("Enter the number: \n");
  scanf("%d", &num);

  printf("The factorial of the entered number is: %d \n", factorial(num));
  return 0;
}
