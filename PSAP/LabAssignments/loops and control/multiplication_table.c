#include <stdio.h>


int main() {
    printf("Enter number whose table is to be displayed: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, (n * i));
    }
}