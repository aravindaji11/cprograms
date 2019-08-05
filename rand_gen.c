#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  char A[100000];
  int n = 1000;

  printf("Enter the number: \n");
  scanf(" %d", &n);

  for(i=0; i<n;i++)
    A[i]=rand();

  printf("The generated random numbers are: \n");

  for(i=0;i<n;i++)
    printf("%d \n", A[i]);

  return 0;
}
