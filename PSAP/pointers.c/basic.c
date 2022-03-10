#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int* p;
    p = &i;
    
    printf("i = %d\n", i);
    printf("p = %u\n", p);
    printf("Adress of i = %u\n", &i);
    printf("Value being pointed by p = %d\n", *p);
    p++;
    printf("p++;\n");
    printf("Adress of i = %u\n", &i);
    printf("Value being pointed by p = %d\n", *p);
    printf("p = %u\n", p);
    
}