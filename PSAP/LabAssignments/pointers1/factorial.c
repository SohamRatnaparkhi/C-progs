#include <stdio.h>

int main() {
    int n;
    printf("Enter a number whose factorial is to be found out - ");
    scanf("%d",&n);
    int fact = 1;
    int* p = &fact; 
    for(int i = 1; i <= n; i++){
        *p *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);
}