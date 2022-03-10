#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter Year : ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        printf("\n%d is a Leap Year", year);
    }
    else
    {
        printf("\n%d is not a Leap Year", year);
    }

    return 0;
}