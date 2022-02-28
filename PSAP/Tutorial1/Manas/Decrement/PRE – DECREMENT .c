# include <stdio.h>
int main()
{
           int i=10;
           while(--i > 5 )
           {
                printf("%d , ",i);
           }
           return 0;
}
/*

Step 1 : In above program, value of “i” is decremented from 10 to 9 using pre-decrement operator.
Step 2 : This decremented value “9” is compared with 5 in while expression.
Step 3 : Then, this decremented value “9” is assigned to the variable “i”.
Above 3 steps are continued until while expression becomes false and output is displayed as “9 8 7 6”.

*/