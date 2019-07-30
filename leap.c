#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;

  printf("Enter the year: ");
  scanf(" %d", &num);

  if(num%4==0)
  {
    if(num%100==0)
    {
      if(num%400==0)
      {
        printf("The year entered is a leap year. \n");
      }
      else
      {
        printf("The year entered is not a leap year. \n");
      }
    }
    else
    {
      printf("The year entered is a leap year. \n");
    }
  }
  else
  {
    printf("The year entered is not a leap year. \n");
  }
  return 0;
}
