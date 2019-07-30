#include <stdio.h>
#include <stdlib.h>

int main()
{
  int friends;
  printf("How many friends do you have?\n");
  scanf(" %d", &friends);

  printf("You have %d friend%s", friends, (friends!=1) ? "s\n" : "\n");
  return 0;

}
