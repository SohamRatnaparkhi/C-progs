#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10] = "PSAP";
    char str2[10];
    strcpy(str2, str1);
    printf("%s %s", str1, str2);
    return 0;
}