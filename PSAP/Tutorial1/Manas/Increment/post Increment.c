//EXAMPLE  FOR POST – INCREMENT OPERATORS IN C:
#include <stdio.h>
int main()
{
           int i=0;
           while(i++ < 5 )
           {
                printf("%d ",i);
           }
           return 0;
}
/*
Step 1 : In this program, value of  i “0” is compared with 5 in while expression.
Step 2 : Then, value of “i” is incremented from 0 to 1 using post-increment operator.
Step 3 : Then, this incremented value “1” is assigned to the variable “i”.
Above 3 steps are continued until while expression becomes false and output is displayed as “1 2 3 4 5”.

*/