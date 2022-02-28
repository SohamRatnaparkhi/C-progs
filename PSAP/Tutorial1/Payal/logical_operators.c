#include <stdio.h>
int main()
{
int n;
printf("Enter a digit between 1 to 10: ");
scanf("%d",&n);
if((n>0) && (n<=10))
{
printf("Given number is in between 0 and 10");
}
else if((n>10) && (n<=20))
{
printf("Given number is in between 10 and 20");
}
else
{
printf("Please enter a number in the given range");
}
return 0;
}
