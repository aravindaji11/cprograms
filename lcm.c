#include <stdio.h>


int main()
{
  int num1,num2,min;

  printf("Enter the two numbers: \n");
  scanf(" %d %d", &num1, &num2);

  min = (num1>num2) ? num1 : num2;

  while(1)
  {
    if(min%num1==0 && min%num2==0)
    {
      printf("The LCM of %d and %d is: \n %d \n", num1,num2,min);
      break;
    }
    ++min;
  }
  return 0;
}
