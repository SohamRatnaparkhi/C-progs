#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    int *pi;
    int *pj;
    pi = &i;
    pj = &j;
    int x;
    if (*pi == *pj){
        printf("Both numbers are equal.");
        return 0;
    }
        
    else
        x = *pi > *pj ? *pi : *pj;

    printf("Greater num = %d\n", x);
}