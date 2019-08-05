#include <stdio.h>

int main()
{
  int i,j,n,largest;
  int A[100000];

  printf("Enter the total number of integers. \n");
  scanf(" %d", &n);

  printf("Enter the integers. \n");
  for(i=0;i<n;i++)
    scanf("%d", &A[i]);

  for(i=0;i<n;i++)
  {
    if(A[i]>A[i+1])
      largest = A[i];
    else
      largest = A[i+1];
  }
  printf("The largest integer is %d. \n", largest);
  return 0;
}
