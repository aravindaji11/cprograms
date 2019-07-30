#include <stdio.h>

int main()
{
  int num1, num2, temp = 0;
  printf("Enter the two numbers: \n");
  scanf("%d %d", &num1, &num2);

  printf("Before swapping, \n The first number is %d. \n The second number is %d. \n", num1, num2);

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("After swapping, \n The frist number is %d. \n The second number is %d. \n", num1, num2);

  return 0;
}
