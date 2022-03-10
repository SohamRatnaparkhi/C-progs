#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter a and b: \n");
    scanf("%d %d", &a, &b);

    int* pa = &a;
    int* pb = &b;

    printf("a + b = %d\n", (*pa + *pb));
    
}