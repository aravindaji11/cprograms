#include <stdio.h>

int main()
{
  int i,j,num,large;
  int a[100];

  printf("Enter the number of elements: \n");
  scanf(" %d", &num);

  printf("Enter the numbers: \n");
  for(i=0;i<num;i++)
    scanf(" %d", &a[i]);
  for(i=0;i<num;i++)
  {
    if(a[i]>a[i+1])
      large=a[i];
    else
      large=a[i+1];
  }
  printf("%d is the largest number.\n", large);

  return 0;
}
