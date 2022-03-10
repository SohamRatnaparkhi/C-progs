#include <stdio.h>
#include <stdlib.h>
void breakfast()
{
    printf("Breakfast");
    exit(1);
}
void lunch()
{
    printf("lunch");
    exit(1);
}
void dinner()
{
    printf("dinner");
    exit(1);
}
void wrong()
{
    printf("invalid try again\n");
}
int main()
{
    char a;
    while (1)
    {
    enter:
        printf("enter your choice\n");
        scanf("%c", &a);
        // getchar();
        switch (a)
        {
        case 'A':
        case 'a':
            breakfast();
            break;
        case 'B':
        case 'b':
            lunch();
            break;
        case 'C':
        case 'c':
            dinner();
            break;
        default:
            printf("invalid\n");
            goto enter;
        }
    }
    return 0;
}