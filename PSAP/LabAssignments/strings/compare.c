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
    printf("\nDifference = %d\n",x);

    int i = 0, d = 0;
    while(str[i] != '\0' && s[i] != '\0')
    {
        if(str[i] > s[i]) d = 1;
        else if(str[i] < s[i]) d = -1;
        i++;
    }
    printf("\nDifference = %d",d);

}