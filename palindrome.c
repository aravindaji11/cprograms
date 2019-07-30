#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2=0, tmp, rem;

  printf("Enter the number: \n");
  scanf(" %d", &num1);

  tmp = num1;

  while(tmp!=0)
  {
    rem = tmp%10;
    num2 = num2*10+rem;
    tmp /= 10;
  }

  if(num1==num2)
  {
    printf("The number is palindrome. \n");
  }
  else
  {
    printf("The number is not palindrome. \n");
  }
  return 0;
}
