#include <stdio.h>

int main()
{
  char gender;

  printf("Enter the gender (M or F): \n");
  scanf(" %s", &gender);

  switch(gender)
  {
    case 'M':
    case 'm':
      printf("'Male' \n");
      break;
    case 'F':
    case 'f':
      printf("'Female' \n");
      break;
    default:
      printf("'Unspecified gender.' \n");
  }
  return 0;
}
