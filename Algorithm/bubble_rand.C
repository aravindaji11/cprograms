#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,r,n;
  int temp;
  int A[100000];
  n = 1000;

  printf("What is the total number of random integers?");
  scanf("%d", &n);

  for(r = 0; r < n; r++)
  {
    A[r] = rand();
  }

  for (i = 0; i <= n-2; i++)
  {
    for (r = 0; r <= n-2-i; r++)
    {
      if( A[r]>A[r+1])
      {
        temp = A[r];
        A[r] = A[r+1];
        A[r+1] = temp;
      }
    }
  }

  for (r = 0; r < n; r++)
  {
    printf("%d \n", A[r]);
  }
  return 0;
}
