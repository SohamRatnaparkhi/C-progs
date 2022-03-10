#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("Integer Size    : %d bits\n", sizeof(a));
    printf("Float Size      : %d bits\n", sizeof(b));
    printf("Double Size     : %d bits\n", sizeof(c));
    printf("Character Size  : %d bits\n", sizeof(d));

    return 0;
}