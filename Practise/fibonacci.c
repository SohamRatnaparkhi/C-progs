#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  scanf("%d", &n);
  printf("0, 1, ");
  int a = 0, b = 1, c = 0;

  for(int i = 1; i < n - 1; i++)
  {
    c = a + b;
    a= b;
    b = c;
    printf("%d, ", c);

  }
  return 0;
}
