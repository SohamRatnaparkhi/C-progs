#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter no. of rows - ");
  scanf("%d", &x);
  printf("\n");
  for(int i = 1; i <= x; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
