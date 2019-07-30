#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
  char gender;

  printf("How old are you?\n");
  scanf(" %d", &age);

  if (age >= 18)
  {
    printf("What is your gender? (m,f)\n");
    scanf(" %c", &gender);
    if (gender == 'm')
    {
      printf("Welcome bro..!\n");
    }
    else if (gender == 'f')
    {
      printf("Welcome m'lady...!\n");
    }
    else
    {
      printf("Welcome..!\n");
    }
  }
  else if (age < 18)
  {
    printf("Nothing to see here... :)\n");
  }
  else
  {
    printf("Error, haha..");
  }
  return 0;
}
