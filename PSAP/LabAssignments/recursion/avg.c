#include <stdio.h>

float avg(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main()
{
    float a, b, c;
    printf("Enter 3 Numbers : ");
    scanf("%f %f %f", &a, &b, &c);
    float av = avg(a, b, c);
    printf("Average of given 3 numbers is : %f", av);
    return 0;
}