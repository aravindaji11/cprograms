#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, num1, num2, flag;
  printf("Enter a range: \n");
  scanf(" %d %d", &num1, &num2);

  for(i=num1+1;i<num2;i++)
  {
    flag = 0;
    for(j=2;j<=i/2;j++)
    {
      if(i%2==0)
      {
      flag = 1;
      break;
      }
    }
    if(flag==0)
    {
      printf(" %d", i);
    }
  }
  return 0;
}
