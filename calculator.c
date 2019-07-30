#include <stdio.h>
#include <stdlib.h>

int main()
{
  char oper;
  int num1, num2;
  printf("Enter the two numbers: \n");
  scanf(" %d %d", &num1, &num2);

  printf("Enter the operator (+ or - or * or /) \n");
  scanf(" %s", &oper);

  switch(oper)
  {
    case '+':
      printf("%d + %d = %d \n", num1, num2, num1+num2);
      break;
    case '-':
      printf("%d - %d = %d \n", num1, num2, num1-num2);
      break;
    case '*':
      printf("%d * %d = %d \n", num1, num2, num1*num2);
      break;
    case '/':
      printf("%d / %d = %.3f \n", num1, num2, (float)num1/num2);
      break;
    default:
      printf("The entered operator is not correct..! \n");
  }
  return 0;
}
