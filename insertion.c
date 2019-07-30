#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,j,n;
  int tmp;
  int A[100000];
  n = 1000;

  printf("Enter the total number of elements. \n");
  scanf(" %d", &n);

  for(i=0;i<n;i++)
  {
    A[i] = rand();
  }

  for(i=1;i<=n-1;i++)
  {
    for(j=i;A[j-1]>A[j];j--)
    {
      tmp = A[j];
      A[j] = A[j-1];
      A[j-1] = tmp;
    }
  }

  for(i=0;i<n;i++)
  {
    printf(" %d \n", A[i]);
  }
  return 0;
}
