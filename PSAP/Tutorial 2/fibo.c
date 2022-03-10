#include <stdio.h>
void main()
{
    int n, i;
    int fibo(int);
    printf("Enter n:");
    scanf("%d", &n);
    printf("Fibonacci numbers up to %d terms:\n", n);
    for (i = 1; i <= n; i++)
        printf("%d\n", fibo(i));
}
int fibo(int k)
{
    if (k == 0 || k == 1)
        return k;
    else
        return fibo(k - 1) + fibo(k - 2);
}