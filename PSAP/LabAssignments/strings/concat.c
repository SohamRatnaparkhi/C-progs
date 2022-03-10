#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10] = "PSAP";
    char str2[10] = "LAB";
    strcat(str1, str2);
    printf("%s", str1);

    // concatinate 2 string without strcat()

    char s1[10] = "PSAP";
    char s2[10] = "LAB";
    int i;
    int j;
    for (j = 0; s1[j] != '\0'; j++)
        ;
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[j] = s2[i];
        j++;
    }
    s1[j] = '\0';
    printf("CONCATINATION of String is '%s'", s1);
}
