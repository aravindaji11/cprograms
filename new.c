#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main()
{
  char en[4][10] = {"USER", "HOME", "PWD", "PATH"};
  for (char **env = environ; *env!=0; env++)
  {
    if (strncmp (*env,en[],2) == 0)
      printf("%s \n", *env);
  }
  return 0;
}
