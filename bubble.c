#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,j,n;
  int temp;
  int A[100000];
  n = 1000;

  printf("Enter the total number of elements. \n");
  scanf(" %d", &n);

  for(i=0; i<n;i++)
  {
    A[i]=rand();
  }

  for(i=0; i<=n-2;i++)
  {
    for(j=0;j<=n-2-i;j++)
    {
      if(A[j]>A[j+1])
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf(" %d \n", A[i]);
  }
  return 0;
}
