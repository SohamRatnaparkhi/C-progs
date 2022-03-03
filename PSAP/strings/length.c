#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    printf("Enter string - ");
    scanf("%s",str);
    int x = strlen(str);
    printf("String length = %d", x);
    // using loop
    int i = 0;
    while(str[i++] != '\0');
    printf("\nlength using loop = %d", i - 1); 
}