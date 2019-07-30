#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,row;

  printf("How many rows do you want? \n");
  scanf(" %d", &row);

  for(i=1;i<=row;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
