#include <stdio.h>
#include<stdlib.h>

int reverse(int a)
{
  int b,rem;
  while(a!=0)
  {
    rem = a%10;
    b = b*10+rem;
    a /= 10;
  }
  return b;
}

int main()
{
  int num;
  printf("Enter the number : ");
  scanf(" %d", &num);

  printf("The reversed number is, %d. \n", reverse(num));
  return 0;
}
