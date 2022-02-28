#include <stdio.h>
int main()
{
           int i=10;
           while(i-- > 5 )
           {
                printf("%d ",i);
           }
           return 0;
}
/*
Step 1 : In this program, value of  i “10” is compared with 5 in while expression.
Step 2 : Then, value of “i” is decremented from 10 to 9 using post-decrement operator.
Step 3 : Then, this decremented value “9” is assigned to the variable “i”.
Above 3 steps are continued until while expression becomes false and output is displayed as “9 8 7 6 5”. 

*/