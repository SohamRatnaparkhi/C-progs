#include<stdio.h>
// Sum using do - while loop
int main() {
    int sum = 0;
    int x;
    int i = 0;
    printf("Enter a natural number - ");
    scanf("%d", &x);
    do{
        sum += i;
    }
    while(++i <= x);
    printf("Sum = %d\n", sum);
}
