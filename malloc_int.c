#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *num;
  num = (int*)malloc(sizeof(int));

  printf("Input an integer: \n");
  scanf(" %d", &num);

  printf("Great, you entered: %d \n", num);
  return 0;
}
