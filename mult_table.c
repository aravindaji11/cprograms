#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n;

  printf("Enter a number: \n");
  scanf("%d", &n);

  printf("The multiplication table is: \n");
  for(i=1;i<=10;i++)
  {
  printf("%d * %d = %d \n", n, i, n*i);
  }
  return 0;
}
