#include <stdio.h>
#include <stdlib.h>

int power(int x, int n)
{
  if(n==0)
  {
    return 1;
  }
  else if(n==1)
  {
    return x;
  }
  else
  {
    return x*power(x,n-1);
  }
}

int main()
{
  int a,b;

  printf("Enter the two numbers to find the power.. \n");
  scanf(" %d %d", &a, &b);

  printf("The power is: %d \n", power(a,b));
  return 0;
}
