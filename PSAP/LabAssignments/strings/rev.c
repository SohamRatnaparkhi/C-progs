#include <stdio.h>
#include <string.h>

int main()
{
    char s[15] = "Programming";
    printf("Reverse is %s\n", strrev(s));
    strrev(s);
    // Without library
    
    int i = 0, l = 0;
    char rev[15];
    // To calculate length
    while (s[l] != '\0')
    {
        l++;
    }
    if (l % 2 != 0) rev[l / 2] = s[l / 2]; 
    int x = 0;
    int y = l - 1;
    for(int i = 0, j = l - 1; i < l / 2; i++, j --){
        rev[x ++] = s[j];
        rev[y --] = s[i];
    }
    
    printf("Reverse of %s is %s", s, rev);

    return 0;
}