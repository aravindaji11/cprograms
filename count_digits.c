#include <stdio.h>

int main()
{
  long int n;
  int count = 0;

  printf("Enter the number: \n");
  scanf(" %ld", &n);

  while(n != 0)
  {
    n /= 10;
    count++;
  }
  printf("Number of digits: %d \n", count);
  return 0;
}
