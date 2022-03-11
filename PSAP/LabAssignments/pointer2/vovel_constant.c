#include <stdio.h>

int main() {
    char str[20];
    printf("Enter the string in lower case ONLY- ");
    scanf("%s", str);
    char* p = str;
    int vowel = 0, consonant = 0;
    while(*p != '\0') {
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') vowel ++;
        else consonant ++;

        p++;
    }
    printf("Vowel = %d\nConsonant = %d\n", vowel, consonant);
}