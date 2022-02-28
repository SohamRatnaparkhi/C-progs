#include <stdio.h>

int roots(float a, float b, float c, float disc);
int main(void)
{
  float a,b,c;
  scanf("%f %f %f", &a, &b, &c);
  float disc = b*b - (4 * a * c);
  if (disc < 0){
    printf("Imaginary roots\n");
  }
  else{
    roots(a, b, c, disc);
  }
}

int roots(float a, float b, float c, float disc){
  float r1 = (-b + sqrt(disc)) /(2 * a);
  float r2 = (-b - sqrt(disc)) /(2 * a);
  printf("r1 = %f, r2 = %f", r1, r2);
  return 0;
}
