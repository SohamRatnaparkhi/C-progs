#include <stdio.h>
#include <math.h>
void binarytodecimal(int num1)
{
    int r,sum=0,temp,i;       
    temp=num1;    
    for(i=0;i<=50;i++)    
    {    
    r=num1%10;  
    sum=sum+((pow(2,i))*r);
    if(num1<0)
    break;
    else
    num1=num1/10;
    }
    printf("\nThe Decimal Number=%d ",sum);
}
void decimaltobinary(int num1)
{
    int r,i=0,j,a[10]={0};
    while(num1>0)
    {
        r=num1%2;
        num1=num1/2;
        //printf("%d",r);
        a[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}


int main ()
{
    int num1,choice;
    printf ("Enter two num1bers\n");
    scanf ("%d", &num1);
    printf("Enter the type of conversion\n");  
    printf ("--------Menu-------");
    printf ("\n1.Binary to Decimal\n2.Decimal to Binary\n");
    scanf("%d",&choice);
    if(choice == 1)
    binarytodecimal(num1);
    else if(choice == 2)
    decimaltobinary(num1);
    else
    printf("Invalid Options plz try again");

    return 0;
}