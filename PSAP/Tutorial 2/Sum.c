#include <stdio.h>

int sum(int n);
int main(){
    printf("Enter a number - ");
    int n;
    scanf("%d",&n);
    printf("sum = %d\n",sum(n));
}
// Sum of n numbers = n + (n-1) + (n - 2) + ...... + 1 + 0
int sum(int n){
    // Base condition - if n = 0 then stop addition
    if (n == 0)
    return 0;
    else{
        return n + sum(n - 1); 
    }
}