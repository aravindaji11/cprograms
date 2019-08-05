#include <stdio.h>
#include <unistd.h>

int main()
{
  int id;
  printf("Hello World. \n");

  id =fork();

  if(id>0)
    printf("This is the parent section. \n Process id: %d \n", getpid());

  else if(id==0)
  {
    printf("Fork created a child. \n Process id: %d \n", getpid());
    printf("Process id of the parent is: %d \n", getppid());
  }
  else
    printf("Fork creation failed...! \n");

  return 0;
}
