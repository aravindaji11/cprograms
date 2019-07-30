#include <stdio.h>

int main()
{
  char n;

  printf("Enter a character: \n");
  scanf("%s", &n);

  if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    printf("The entered character is a vowel.. \n");
  else if(n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    printf("The entered character is a vowel.. \n");
  else
    printf("The entered character is a consonant.. \n");

  return 0;
}
