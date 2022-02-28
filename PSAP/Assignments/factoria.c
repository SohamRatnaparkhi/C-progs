# include <stdio.h>
// Factorial of a number
int main(){
    int x;
    printf("Enter a number whose factorial is to be found - ");
    scanf("%d", &x);
    if(x == 0){
        printf("Factorial of %d is 1", x);
        return 1;
    }
    int fact = 1;
    int i = 0;
    while (++i <= x){
        fact *= i;
    }
    printf("Factorial of %d is %d", x, fact);
}
