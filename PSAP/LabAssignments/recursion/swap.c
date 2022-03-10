#include <stdio.h>

int swapNumber(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1 = 21;
    int num2 = 33;
    printf("Before Swaping\n");
    printf("Number 1 : %d\nNumber 2 : %d", num1, num2);

    int *p1 = &num1;
    int *p2 = &num2;

    swapNumber(p1, p2);

    printf("\nAfter Swaping\n");
    printf("Number 1 : %d\nNumber 2 : %d", num1, num2);

    return 0;
}
