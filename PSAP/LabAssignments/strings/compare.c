#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    char s[10];
    printf("String1 - ");
    scanf("%s", str);
    printf("String2 - ");
    scanf("%s", s);
    
    int x = strcmp(str,s);
    printf("\nDifference = %d",x);

}