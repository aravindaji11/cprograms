#include <stdio.h>

int main()
{
  int r,c,a,b,first[10][10],second[10][10],sum[10][10];

  printf("Enter the number of rows and columns: \n");
  scanf(" %d %d", &r,&c);

  printf("Enter the elements of the first matrix: \n");
  for(a=0;a<r;a++)
    for(b=0;b<c;b++)
      scanf("%d", &first[a][b]);

  printf("Enter the elements of the second matrix: \n");
  for(a=0;a<r;a++)
    for(b=0;b<c;b++)
      scanf("%d", &second[a][b]);

  printf("The sum of the entered matrices is: \n");
  for(a=0;a<r;a++)
  {
    for(b=0;b<c;b++)
      printf("%d\t", sum[a][b] = first[a][b] + second[a][b]);
    printf("\n");
  }
  return 0;
}
