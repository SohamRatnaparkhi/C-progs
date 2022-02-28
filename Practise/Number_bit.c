#include <stdio.h>
#include <math.h>

int num_to_bits(int x);
int main(void){
  int x;
  scanf("%d", &x);
  int ans = num_to_bits(x);
  printf("%d\n", ans);
}
int num_to_bits(int x){
  return (int)log2(x) + 1;
}
