#include <stdio.h>

void main()
{
    int factorial(int);
    int n, f;
    printf("Enter the number: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("Factorial of the %d number is %d", n, f);
}
int factorial(int n)
{
    int f;
    if (n == 1)
        return 1;
    else
        f = n * factorial(n - 1);
    return f;
}
