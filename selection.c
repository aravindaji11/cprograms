#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,j,n,min;
  int temp;
  int A[100000];
  n = 1000;

  printf("Enter the total number of elements. \n");
  scanf(" %d", &n);

  for(i=0;i<n;i++)
  {
    A[i] = rand();
  }

  for(i=0;i<=n-2;i++)
  {
    min = i;
    for(j=i+1;j<=n-1;j++)
    {
      if(A[j]<A[min])
      {
        min = j;
      }
      temp = A[i];
      A[i] = A[min];
      A[min] = temp;
    }
  }

  for(i=0;i<n;i++)
  {
    printf(" %d \n", A[i]);
  }
  return 0;
}
