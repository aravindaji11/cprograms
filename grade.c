#include <stdio.h>

int main()
{
  int marks;

  printf("Enter the marks out of 100. \n");
  scanf(" %d", &marks);


  if(marks>=90)
      printf("You got A+. Congratulations! \n");
  else if(marks>=80)
      printf("You got A. Keep it up. \n");
  else if(marks>=70)
      printf("You got B. \n");
  else if(marks>=60)
      printf("You got C. \n");
  else if(marks>=50)
      printf("You got D. \n");
  else if(marks>=40)
      printf("You got E. \n");
  else if(marks<40)
      printf("You got F. \n");

  return 0;
}
